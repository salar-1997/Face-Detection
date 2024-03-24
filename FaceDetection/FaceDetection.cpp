#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
    VideoCapture cap(0); // Open the default camera
    if (!cap.isOpened()) {
        return -1;
    }

    CascadeClassifier face_cascade;
    face_cascade.load("C:\\Users\\salar\\Desktop\\opencv\\sources\\data\\haarcascades\\haarcascade_frontalface_default.xml");

    Mat frame;
    while (cap.read(frame)) {
        std::vector<Rect> faces;
        face_cascade.detectMultiScale(frame, faces);

        for (const Rect& face : faces) {
            rectangle(frame, face, Scalar(255, 0, 0));
        }

        imshow("Face Detection", frame);

        if (waitKey(30) >= 0) {
            break;
        }
    }
    return 0;
}