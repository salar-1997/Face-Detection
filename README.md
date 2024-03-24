# OpenCV Face Detection Project

## Project Overview

This project demonstrates the use of OpenCV for real-time face detection using a webcam. It employs Haar Cascade Classifiers, a method of object detection, to identify faces in a video feed efficiently.

## Prerequisites

- C++ development environment (Visual Studio recommended)
- OpenCV (compatible version with your development environment)
- A webcam or camera connected to your computer

## Installation and Setup

### 1. Install OpenCV

Download and install OpenCV from [the official OpenCV site](https://opencv.org/releases/). Ensure you choose a version compatible with your C++ development environment.

### 2. Configure OpenCV with Visual Studio

After installing OpenCV:

#### a. Create a New Project
Open Visual Studio and create a new C++ project.

#### b. Configure Project Properties
Right-click on the project in the Solution Explorer and choose `Properties`.

#### c. Set Include Directories
Navigate to `VC++ Directories`, and under `Include Directories`, add the path to the `include` folder of your OpenCV installation.

#### d. Set Library Directories
Under `Library Directories`, add the path to the `lib` folder of your OpenCV installation (e.g., `opencv/build/x64/vc15/lib`).

#### e. Update Linker Input
Go to `Linker → Input` and under `Additional Dependencies`, add the names of the OpenCV `.lib` files (e.g., `opencv_world430.lib` for OpenCV version 4.3.0).

### 3. Clone This Repository

Clone this repository to your local machine using:

```bash
git clone https://github.com/yourusername/opencv-facedetection.git


###4. Update the Source Code
'''
face_cascade.load("EnterYourPathTo_haarcascade_frontalface_default.xml");
'''
