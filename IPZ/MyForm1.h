#pragma once
#include <iostream>
#include <Windows.h>
#include <string>
#include <opencv2/opencv.hpp>
//#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp> 
#include "opencv2/imgproc/imgproc.hpp" 
namespace IPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace cv;
	using namespace std;
	bool DoEvents();
	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;






	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 842);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(179, 29);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Zamknij program";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(706, 28);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 325);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Uruchom kamere";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Location = System::Drawing::Point(12, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(550, 250);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(100, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(308, 19);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Obraz przechwytywany z wybranej kamery";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(173, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Zamknij stream";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox2->Location = System::Drawing::Point(706, 544);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(550, 250);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->WaitOnLoad = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(706, 255);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(550, 250);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->WaitOnLoad = true;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 418);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(322, 56);
			this->trackBar1->TabIndex = 10;
			this->trackBar1->Value = 100;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(12, 512);
			this->trackBar2->Maximum = 255;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(337, 56);
			this->trackBar2->TabIndex = 11;
			this->trackBar2->Value = 120;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(63, 398);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(174, 17);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Dolna wartoœæ progowania";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm1::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(60, 492);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(177, 17);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Górna wartoœæ progowania";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm1::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(880, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(144, 17);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Obraz po progowaniu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(786, 512);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(309, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Obraz po rozdzieleniu na ka¿dy z kolorów(HSV)";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(856, 29);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(46, 17);
			this->label6->TabIndex = 16;
			this->label6->Text = L"label6";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1268, 883);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Morfologia";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool clic = false;
		bool buton = false;

		void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage)
		{
			System::Drawing::Graphics^ graphics = control->CreateGraphics();
			System::IntPtr ptr(colorImage.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			graphics->DrawImage(b, rect);
			delete graphics;
		}
		void DrawCVImage1(System::Windows::Forms::Control^ control, cv::Mat& colorImage)
		{
			System::Drawing::Graphics^ graphics = control->CreateGraphics();
			System::IntPtr ptr(colorImage.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr);
			System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			graphics->DrawImage(b, rect);
			
			delete graphics;
		}
		
		
		void Image() {
			VideoCapture capture = VideoCapture(0); 
			Mat frame, img, hsv_img,hsv,picture,picture_2,picture_3;
			vector<Mat> hsv_split;
			
				while (waitKey(15) != 27)
				{
					capture >> frame;
					frame.copyTo(img);
					cvtColor(img, picture_3, CV_RGB2GRAY);
					cvtColor(img, hsv_img, CV_BGR2HSV);
					split(hsv_img, hsv_split);
					int x = 100;
					int y = 150;
					//mask = cv2.inRange(hsv, x,y)
					inRange(hsv_split[0], x, y, picture);
					//inRange(hsv_split[1], x, y, dwa);
					inRange(picture_3, trackBar1->Value, trackBar2->Value,picture_2);

					DrawCVImage(pictureBox1, frame);
					DrawCVImage1(pictureBox2,picture);
					DrawCVImage1(pictureBox3, picture_2);
					clic = true;
					
					if (!DoEvents())
						break;	
				}
				capture.release();
		}

		bool DoEvents()
		{
			MSG msg;
			BOOL result;

			while (::PeekMessage(&msg, NULL, 0, 0, PM_NOREMOVE))
			{
				result = ::GetMessage(&msg, NULL, 0, 0);
				if (result == 0) // WM_QUIT
				{
					::PostQuitMessage(msg.wParam);
					return false;
				}
				else if (result == -1)
					return true;    //error occured
				else
				{
					::TranslateMessage(&msg);
					::DispatchMessage(&msg);
				}
			}

			return true;
		}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Image();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	buton = true;	
}
	
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
