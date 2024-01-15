#include <iostream>
#include <Windows.h>
#include <string>
#include <set>
#include "json\include\nlohmann\json.hpp"
#include <fstream>
#include <chrono>
#include <thread>


using namespace std;


void Slot_1(char threadID) {

    string target = "Cords/Slot-1.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}





void Slot_2(char threadID) {

    string target = "Cords/Slot-2.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}







void Slot_3(char threadID) {

    string target = "Cords/Slot-3.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}




void Slot_4(char threadID) {

    string target = "Cords/Slot-4.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}



//-------------------------------------------------------------------------//
//-------------------------------------------------------------------------//


void left_bridge(char threadID) {

    string target = "Cords/Left_Bridge.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}



void right_bridge(char threadID) {

    string target = "Cords/Right_Bridge.json";

    while (true) {
        while (GetAsyncKeyState(threadID)) {
            srand(static_cast<unsigned int>(time(nullptr)));

            std::ifstream inputFile(target);
            nlohmann::json jsonObject;

            if (inputFile.is_open()) {
                inputFile >> jsonObject;
                inputFile.close();

                auto X = jsonObject["X"];
                auto Y = jsonObject["Y"];

                
                size_t XIndex = rand() % X.size();
                size_t YIndex = rand() %Y.size();

                int XValue = X[XIndex];
                int YValue = Y[YIndex];

                POINT p;
                GetCursorPos(&p);
                auto x = p.x;
                auto y = p.y;
                SetCursorPos(XValue, YValue);
                mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
                mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
                SetCursorPos(x, y);
            }
            else {
                cerr << "Unable to open the file for reading.\n";
            }

            this_thread::sleep_for(chrono::seconds(1));
    }
}
}

int main()
{
    thread t1(Slot_1, '1');
    thread t2(Slot_2, '2');
    thread t3(Slot_3, '3');
    thread t4(Slot_4, '4');

    thread t5(left_bridge, 'r');
    thread t6(right_bridge, 'q');
    t1.join();  //????
    return 0;
}

 //g++ -Wall -g -std=c++11 -pthread -I. Controller.cpp -o Control
 

 