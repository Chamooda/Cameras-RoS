#include <opencv2/opencv.hpp>

int main() {
    // Try to open cameras from index 0 to 10
    for (int cameraIndex = 0; cameraIndex <= 10; ++cameraIndex) {
        cv::VideoCapture cap(cameraIndex);

        // Check if the camera opened successfully
        if (cap.isOpened()) {
            std::cout << "Camera found at index: " << cameraIndex << std::endl;
            cap.release(); // Release the camera before exiting
            return 0;
        }
    }

    std::cout << "No camera found." << std::endl;
    return -1;
}
