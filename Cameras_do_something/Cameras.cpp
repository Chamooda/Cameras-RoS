#include <iostream>
#include <string>
#include <set>
#include <fstream>
#include <chrono>
#include <thread>
#include <opencv2/opencv.hpp>


using namespace std;


void Run_Camera(int CamID) {

        cv::VideoCapture cap(CamID);

        if (!cap.isOpened()) {
            std::cerr << "Error: Could not open camera." << std::endl;
            exit(0);
        }

        string Window_name = "Camera " + to_string(CamID);
        cv::namedWindow(Window_name, cv::WINDOW_NORMAL);

        while (true) {
            cv::Mat frame;
            cap >> frame;

            if (frame.empty()) {
                std::cerr << "Error: Failed to capture frame." << std::endl;
                break;
            }

            cv::imshow(Window_name, frame);
            if (cv::waitKey(1) == 'q') {
                break;

            }
        }

        cap.release();
        cv::destroyAllWindows();
            this_thread::sleep_for(chrono::seconds(5));
    }





int main()
{
    thread t1(Run_Camera, 0);
    thread t2(Run_Camera, 2);
    thread t3(Run_Camera, 4);

    t1.join(); 
    t2.join();
    t3.join();
    return 0;
}

//g++ -Wall -g -std=c++11 -pthread -I. Controller.cpp -o Control
//g++ Cameras.cpp -o CAM -pthread $(pkg-config --cflags --libs opencv4)
