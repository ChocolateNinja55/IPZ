#pragma once
#include <iostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>
//#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp> 
#include "opencv2/imgproc/imgproc.hpp"
#include "Help_myform.h"

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

	public:System::String^ word;
	public: int xd;
	public: System::String^ USB_name;
	private: System::Windows::Forms::Label^  label10;
	public:
	public: System::String^ znaczki;

	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		MyForm1(System::String^ text,System::String ^usb_name,int var) 
		{
			InitializeComponent();
			word = text;
			xd = var;
			USB_name = usb_name;
			label8->Text = Convert::ToString(trackBar1->Value);
			label9->Text = Convert::ToString(trackBar2->Value);
			this->Width = 600;
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
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  plikToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  synchronizacjaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  menuZawansowaneToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Button^  button5;
	private: System::IO::Ports::SerialPort^  serialPort1;







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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->plikToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->synchronizacjaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuZawansowaneToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label10 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
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
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
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
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(448, 254);
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
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(173, 325);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(118, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Zamknij stream";
			this->button3->UseVisualStyleBackColor = true;
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
			this->trackBar1->Location = System::Drawing::Point(12, 398);
			this->trackBar1->Maximum = 255;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(322, 56);
			this->trackBar1->TabIndex = 10;
			this->trackBar1->Value = 100;
			// 
			// trackBar2
			// 
			this->trackBar2->Location = System::Drawing::Point(12, 477);
			this->trackBar2->Maximum = 255;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(337, 56);
			this->trackBar2->TabIndex = 11;
			this->trackBar2->Value = 120;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(60, 369);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(197, 19);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Dolna wartoœæ progowania";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(60, 457);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(200, 19);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Górna wartoœæ progowania";
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
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label6->Location = System::Drawing::Point(310, 369);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(130, 19);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Obecna wartoœæ:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label7->Location = System::Drawing::Point(310, 453);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 19);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Obecna wartoœæ:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label8->Location = System::Drawing::Point(446, 369);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 19);
			this->label8->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label9->Location = System::Drawing::Point(446, 453);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 19);
			this->label9->TabIndex = 19;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->plikToolStripMenuItem,
					this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1272, 28);
			this->menuStrip1->TabIndex = 20;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// plikToolStripMenuItem
			// 
			this->plikToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->synchronizacjaToolStripMenuItem,
					this->menuZawansowaneToolStripMenuItem
			});
			this->plikToolStripMenuItem->Name = L"plikToolStripMenuItem";
			this->plikToolStripMenuItem->Size = System::Drawing::Size(44, 24);
			this->plikToolStripMenuItem->Text = L"&Plik";
			// 
			// synchronizacjaToolStripMenuItem
			// 
			this->synchronizacjaToolStripMenuItem->Name = L"synchronizacjaToolStripMenuItem";
			this->synchronizacjaToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->synchronizacjaToolStripMenuItem->Text = L"&Synchronizacja";
			this->synchronizacjaToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::synchronizacjaToolStripMenuItem_Click);
			// 
			// menuZawansowaneToolStripMenuItem
			// 
			this->menuZawansowaneToolStripMenuItem->Name = L"menuZawansowaneToolStripMenuItem";
			this->menuZawansowaneToolStripMenuItem->Size = System::Drawing::Size(219, 26);
			this->menuZawansowaneToolStripMenuItem->Text = L"&Menu Zawansowane";
			this->menuZawansowaneToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::menuZawansowaneToolStripMenuItem_Click);
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(66, 24);
			this->pomocToolStripMenuItem->Text = L"P&omoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm1::pomocToolStripMenuItem_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button4->Location = System::Drawing::Point(315, 325);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(131, 23);
			this->button4->TabIndex = 21;
			this->button4->Text = L"Zrób zdjêcie";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(706, 82);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(110, 21);
			this->radioButton1->TabIndex = 22;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(909, 93);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 23;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(728, 154);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 24;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(90, 651);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 50);
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(975, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 26;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			this->serialPort1->ReadTimeout = 300;
			this->serialPort1->WriteTimeout = 300;
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm1::serialPort1_DataReceived);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(789, 185);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(54, 17);
			this->label10->TabIndex = 27;
			this->label10->Text = L"label10";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1272, 883);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
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
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->Text = L"Morfologia";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public:int var;

		void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage){
			System::Drawing::Graphics^ graphics = control->CreateGraphics();
			System::IntPtr ptr(colorImage.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			graphics->DrawImage(b, rect);
			delete graphics;
		}
		void DrawCVImage1(System::Windows::Forms::Control^ control, cv::Mat& colorImage){
			System::Drawing::Graphics^ graphics = control->CreateGraphics();
			System::IntPtr ptr(colorImage.ptr());
			System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr);
			System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			graphics->DrawImage(b, rect);
			delete graphics;
		}
		void Image() {
			
			VideoCapture capture = VideoCapture(var); 
			Mat frame, img, hsv_img,hsv,picture,picture_2,picture_3;
			vector<Mat> hsv_split;
			capture >> frame;
			
			if (!capture.isOpened())
			{
				MessageBox::Show("B³¹d kamery! spróbuj pod³¹czyæ jeszcze raz.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}
				while (waitKey(15) != 27)
				{
					label8->Text = Convert::ToString(trackBar1->Value);
					label9->Text = Convert::ToString(trackBar2->Value);
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
					inRange(picture_3, trackBar1->Value, trackBar2->Value, picture_2);
					DrawCVImage(pictureBox1, frame);
					DrawCVImage1(pictureBox2, picture);
					DrawCVImage1(pictureBox3, picture_2);
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
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
private: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {

	if (word == "Kamera w laptopie")
		var = 0;
	else if (word == "Kamera USB")
		var = 1;
	else{
		var = -1;
		MessageBox::Show("SprawdŸ po³¹czenie kamerki!", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Help_myform ^NoweOKno = gcnew Help_myform;
	NoweOKno->Show();
}
private: System::Void synchronizacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

}
private: System::Void menuZawansowaneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (menuZawansowaneToolStripMenuItem->Checked == false) {
		this->menuZawansowaneToolStripMenuItem->Checked = true;
		this->Width = 1290;
	}
	else {
		menuZawansowaneToolStripMenuItem->Checked = false;
		this->Width = 600;
	}
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	bool fd = false;
	if (xd == true){
		serialPort1->PortName = USB_name;
		serialPort1->Open();

		if ((serialPort1->IsOpen == true)&&(fd == false))
		{
			serialPort1->WriteLine("A");
			label10->Text = znaczki;
			fd = true;
		}
		fd = false;
	}
}
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
	this->znaczki = serialPort1->ReadLine();
}
};
}
