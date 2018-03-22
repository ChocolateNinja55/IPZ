#include "MyForm.h"
#include "MyForm1.h"
//#include <opencv2/opencv.hpp> //Include file for every supported OpenCV function
using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array < System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	IPZ::MyForm forma;
	IPZ::MyForm1 foremka;
	Application::Run(%forma);
	
	return(0);
}
