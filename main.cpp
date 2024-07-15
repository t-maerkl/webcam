#include <iostream>
#include <opencv4/opencv2/videoio.hpp>
#include <opencv4/opencv2/highgui.hpp>

int main() {

    cv::VideoCapture capture(0, cv::CAP_ANY);

    cv::Mat frame;

    while(capture.read(frame)) {
        cv::imshow("Live", frame);
        if(cv::waitKey(5) >= 0) {
            break;
        }
    }

    std::cout << "Hello, World!" << std::endl;

    return 0;
}
