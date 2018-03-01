#include "MyForm.h"
#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;
//using namespace std;

[STAThreadAttribute]
int main(array < System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IPZ::MyForm forma;
	cv::Mat img = cv::imread("lena10.jpg");
	if (img.empty())
		std::cout << "kurwa no elo";
	cv::namedWindow("Example1", cv::WINDOW_AUTOSIZE);
	cv::imshow("Example1", img);
	cv::waitKey(0);
	cv::destroyWindow("Example1");

	Application::Run(%forma);


	return(0);
}
