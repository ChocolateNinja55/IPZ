#pragma once
#include <iostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>
#include <string.h>
//#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp> 
#include "opencv2/imgproc/imgproc.hpp"
#include "Help_myform.h"
#include "MyForm2.h"
#include "Sync.h"
#include <msclr\marshal_cppstd.h>
#include <fstream>


namespace IPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace cv;
	using namespace std;

	

	
	bool DoEvents();

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:System::String^ word;
	static int xd;
	static long double px_mm_ratio=0.0, basic_height=0, basic_width=0, diff=0;
	System::String^ USB_name;
	
	private: static bool is_running = false;
			 long double temp_h=0, temp_w=0;



	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Button^  button6;

	private:

	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;

	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  startAutomationProcessButton;
	private: System::Windows::Forms::Button^  stopAutomationProcessButton;
	private: System::Windows::Forms::Label^  processIsRunningLabel;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  iloscPomiarowLabel;
	private: System::Windows::Forms::Label^  PrawidlowychLabel;
	private: System::Windows::Forms::Label^  niezgodnychLabel;
	private: System::Windows::Forms::Label^  howManyMeasuresLabel;
	public: System::Windows::Forms::Label^  OkMeasuresLabel;
	private: System::Windows::Forms::Label^  wrongMeasuersLabel;






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
		MyForm1(System::String^ text, System::String ^usb_name, int var)
		{
			InitializeComponent();
			word = text;
			xd = var; //spr czy jest po��czenie -1 brak, 1 jest 
			USB_name = usb_name;
			label8->Text = Convert::ToString(trackBar1->Value);
			label9->Text = Convert::ToString(trackBar2->Value);
			this->Width = 1000;
			//TODO: Add the constructor code here
			//
		}
		MyForm1(System::String ^usb_name, int var)
		{
			InitializeComponent();
			xd = var; //spr czy jest po��czenie -1 brak, 1 jest 
			USB_name = usb_name;
			label8->Text = Convert::ToString(trackBar1->Value);
			label9->Text = Convert::ToString(trackBar2->Value);
			this->Width = 1000;
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
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->startAutomationProcessButton = (gcnew System::Windows::Forms::Button());
			this->stopAutomationProcessButton = (gcnew System::Windows::Forms::Button());
			this->processIsRunningLabel = (gcnew System::Windows::Forms::Label());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->iloscPomiarowLabel = (gcnew System::Windows::Forms::Label());
			this->PrawidlowychLabel = (gcnew System::Windows::Forms::Label());
			this->niezgodnychLabel = (gcnew System::Windows::Forms::Label());
			this->howManyMeasuresLabel = (gcnew System::Windows::Forms::Label());
			this->OkMeasuresLabel = (gcnew System::Windows::Forms::Label());
			this->wrongMeasuersLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			this->button2->Location = System::Drawing::Point(13, 325);
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
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
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
			this->pictureBox2->Location = System::Drawing::Point(706, 596);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(550, 250);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->WaitOnLoad = true;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox3->Location = System::Drawing::Point(706, 292);
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
			this->label2->Text = L"Dolna warto�� progowania";
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
			this->label3->Text = L"G�rna warto�� progowania";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label4->Location = System::Drawing::Point(899, 254);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(162, 19);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Obraz po progowaniu";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(786, 555);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(309, 17);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Obraz po rozdzieleniu na ka�dy z kolor�w(HSV)";
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
			this->label6->Text = L"Obecna warto��:";
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
			this->label7->Text = L"Obecna warto��:";
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
			this->menuStrip1->Size = System::Drawing::Size(1256, 28);
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
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(67, 24);
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
			this->button4->Text = L"Zr�b zdj�cie";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->numericUpDown1->Location = System::Drawing::Point(1099, 82);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 180, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 23);
			this->numericUpDown1->TabIndex = 23;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Pole powierzchni", L"Obw�d", L"D�ugo�� kraw�dzi",
					L"Jako�� powierzchni"
			});
			this->comboBox1->Location = System::Drawing::Point(706, 233);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(160, 24);
			this->comboBox1->TabIndex = 24;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(12, 555);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(550, 250);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 25;
			this->pictureBox4->TabStop = false;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button5->Location = System::Drawing::Point(1099, 112);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(120, 31);
			this->button5->TabIndex = 26;
			this->button5->Text = L"Prze�lij";
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
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label11->Location = System::Drawing::Point(1061, 50);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(195, 19);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Obr�t serwomechanizmem";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->Location = System::Drawing::Point(718, 50);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(175, 23);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"Pod��czone Ardruino";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(673, 194);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(271, 19);
			this->label12->TabIndex = 30;
			this->label12->Text = L"Wybierz jaki parametr chcesz mierzy�:";
			this->label12->Click += gcnew System::EventHandler(this, &MyForm1::label12_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox2->Location = System::Drawing::Point(718, 82);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(213, 23);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"W��cz/Wy��cz o�wietlenie";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm1::checkBox2_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label13->Location = System::Drawing::Point(179, 808);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(170, 19);
			this->label13->TabIndex = 32;
			this->label13->Text = L"Ostatnie zdj�cie detalu";
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Location = System::Drawing::Point(512, 755);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 33;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			this->pictureBox5->WaitOnLoad = true;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::White;
			this->imageList1->Images->SetKeyName(0, L"pobrane.ico");
			this->imageList1->Images->SetKeyName(1, L"maxresdefault-300x300.ico");
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(487, 848);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 34;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm1::button6_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button7->Location = System::Drawing::Point(718, 126);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(123, 54);
			this->button7->TabIndex = 35;
			this->button7->Text = L"Wybierz folder zapisu\r\n";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm1::button7_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label14->ForeColor = System::Drawing::Color::Red;
			this->label14->Location = System::Drawing::Point(868, 145);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(361, 19);
			this->label14->TabIndex = 36;
			this->label14->Text = L"D:\\Studia\\Semestr 6\\IPZ P\\IPZ\\IPZ\\Obrazy zapisane";
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->SelectedPath = L"D:\\Studia\\Semestr 6\\IPZ P\\IPZ\\IPZ\\Obrazy zapisane";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->label15->Location = System::Drawing::Point(899, 126);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 17);
			this->label15->TabIndex = 37;
			this->label15->Text = L"�cie�ka domy�lna:";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Obraz normalny", L"Obraz progowany", L"Obraz HSV",
					L"Obraz normalny + progowany", L"Obraz normalny + progowany + HSV", L"Kontury", L"Kalibracja"
			});
			this->comboBox2->Location = System::Drawing::Point(266, 523);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(271, 25);
			this->comboBox2->TabIndex = 38;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label10->Location = System::Drawing::Point(9, 528);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(251, 19);
			this->label10->TabIndex = 39;
			this->label10->Text = L"Wybierz typ zapisywanego obrazu:";
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button8->Location = System::Drawing::Point(219, 842);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(151, 29);
			this->button8->TabIndex = 40;
			this->button8->Text = L"Generuj raport";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm1::button8_Click);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"Plik CSV (*.csv)|*.csv|Plik tekstowy (*.txt)|*.txt|Wszystkie pliki (*.*)|*.*";
			// 
			// startAutomationProcessButton
			// 
			this->startAutomationProcessButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->startAutomationProcessButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->startAutomationProcessButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->startAutomationProcessButton->Location = System::Drawing::Point(512, 98);
			this->startAutomationProcessButton->Name = L"startAutomationProcessButton";
			this->startAutomationProcessButton->Size = System::Drawing::Size(140, 80);
			this->startAutomationProcessButton->TabIndex = 41;
			this->startAutomationProcessButton->Text = L"Rozpocznij nowy pomiar automatyczny";
			this->startAutomationProcessButton->UseVisualStyleBackColor = false;
			this->startAutomationProcessButton->Click += gcnew System::EventHandler(this, &MyForm1::startAutomationProcessButton_Click);
			// 
			// stopAutomationProcessButton
			// 
			this->stopAutomationProcessButton->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->stopAutomationProcessButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->stopAutomationProcessButton->Enabled = false;
			this->stopAutomationProcessButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(238)));
			this->stopAutomationProcessButton->Location = System::Drawing::Point(512, 184);
			this->stopAutomationProcessButton->Name = L"stopAutomationProcessButton";
			this->stopAutomationProcessButton->Size = System::Drawing::Size(121, 42);
			this->stopAutomationProcessButton->TabIndex = 42;
			this->stopAutomationProcessButton->Text = L"Zatrzymaj pomiar";
			this->stopAutomationProcessButton->UseVisualStyleBackColor = false;
			this->stopAutomationProcessButton->Click += gcnew System::EventHandler(this, &MyForm1::stopAutomationProcessButton_Click);
			// 
			// processIsRunningLabel
			// 
			this->processIsRunningLabel->AutoSize = true;
			this->processIsRunningLabel->BackColor = System::Drawing::SystemColors::Control;
			this->processIsRunningLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->processIsRunningLabel->ForeColor = System::Drawing::Color::Red;
			this->processIsRunningLabel->Location = System::Drawing::Point(509, 66);
			this->processIsRunningLabel->Name = L"processIsRunningLabel";
			this->processIsRunningLabel->Size = System::Drawing::Size(143, 20);
			this->processIsRunningLabel->TabIndex = 43;
			this->processIsRunningLabel->Text = L"Pomiar w toku...";
			this->processIsRunningLabel->Visible = false;
			// 
			// backgroundWorker1
			// 
			this->backgroundWorker1->WorkerSupportsCancellation = true;
			this->backgroundWorker1->DoWork += gcnew System::ComponentModel::DoWorkEventHandler(this, &MyForm1::backgroundWorker1_DoWork);
			// 
			// iloscPomiarowLabel
			// 
			this->iloscPomiarowLabel->AutoSize = true;
			this->iloscPomiarowLabel->Enabled = false;
			this->iloscPomiarowLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->iloscPomiarowLabel->Location = System::Drawing::Point(513, 254);
			this->iloscPomiarowLabel->Name = L"iloscPomiarowLabel";
			this->iloscPomiarowLabel->Size = System::Drawing::Size(141, 20);
			this->iloscPomiarowLabel->TabIndex = 44;
			this->iloscPomiarowLabel->Text = L"Ilo�� pomiar�w:";
			// 
			// PrawidlowychLabel
			// 
			this->PrawidlowychLabel->AutoSize = true;
			this->PrawidlowychLabel->Enabled = false;
			this->PrawidlowychLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->PrawidlowychLabel->Location = System::Drawing::Point(513, 292);
			this->PrawidlowychLabel->Name = L"PrawidlowychLabel";
			this->PrawidlowychLabel->Size = System::Drawing::Size(129, 20);
			this->PrawidlowychLabel->TabIndex = 45;
			this->PrawidlowychLabel->Text = L"Prawid�owych:";
			// 
			// niezgodnychLabel
			// 
			this->niezgodnychLabel->AutoSize = true;
			this->niezgodnychLabel->Enabled = false;
			this->niezgodnychLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->niezgodnychLabel->Location = System::Drawing::Point(513, 328);
			this->niezgodnychLabel->Name = L"niezgodnychLabel";
			this->niezgodnychLabel->Size = System::Drawing::Size(122, 20);
			this->niezgodnychLabel->TabIndex = 46;
			this->niezgodnychLabel->Text = L"Niezgodnych:";
			// 
			// howManyMeasuresLabel
			// 
			this->howManyMeasuresLabel->AutoSize = true;
			this->howManyMeasuresLabel->Enabled = false;
			this->howManyMeasuresLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->howManyMeasuresLabel->Location = System::Drawing::Point(673, 254);
			this->howManyMeasuresLabel->Name = L"howManyMeasuresLabel";
			this->howManyMeasuresLabel->Size = System::Drawing::Size(19, 20);
			this->howManyMeasuresLabel->TabIndex = 47;
			this->howManyMeasuresLabel->Text = L"0";
			// 
			// OkMeasuresLabel
			// 
			this->OkMeasuresLabel->AutoSize = true;
			this->OkMeasuresLabel->Enabled = false;
			this->OkMeasuresLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->OkMeasuresLabel->Location = System::Drawing::Point(673, 292);
			this->OkMeasuresLabel->Name = L"OkMeasuresLabel";
			this->OkMeasuresLabel->Size = System::Drawing::Size(19, 20);
			this->OkMeasuresLabel->TabIndex = 48;
			this->OkMeasuresLabel->Text = L"0";
			// 
			// wrongMeasuersLabel
			// 
			this->wrongMeasuersLabel->AutoSize = true;
			this->wrongMeasuersLabel->Enabled = false;
			this->wrongMeasuersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->wrongMeasuersLabel->Location = System::Drawing::Point(673, 328);
			this->wrongMeasuersLabel->Name = L"wrongMeasuersLabel";
			this->wrongMeasuersLabel->Size = System::Drawing::Size(19, 20);
			this->wrongMeasuersLabel->TabIndex = 49;
			this->wrongMeasuersLabel->Text = L"0";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(982, 1066);
			this->Controls->Add(this->wrongMeasuersLabel);
			this->Controls->Add(this->OkMeasuresLabel);
			this->Controls->Add(this->howManyMeasuresLabel);
			this->Controls->Add(this->niezgodnychLabel);
			this->Controls->Add(this->PrawidlowychLabel);
			this->Controls->Add(this->iloscPomiarowLabel);
			this->Controls->Add(this->processIsRunningLabel);
			this->Controls->Add(this->stopAutomationProcessButton);
			this->Controls->Add(this->startAutomationProcessButton);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:int var;
		   bool chceck_id = false;
		   bool id_photo = false;
		   int numer = 0;

		   void DrawCVImage(System::Windows::Forms::Control^ control, cv::Mat& colorImage) {
			   System::Drawing::Graphics^ graphics = control->CreateGraphics();
			   System::IntPtr ptr(colorImage.ptr());
			   System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format24bppRgb, ptr);
			   System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			   graphics->DrawImage(b, rect);
			   delete graphics;
		   }
		   void DrawCVImage1(System::Windows::Forms::Control^ control, cv::Mat& colorImage) {
			   System::Drawing::Graphics^ graphics = control->CreateGraphics();
			   System::IntPtr ptr(colorImage.ptr());
			   System::Drawing::Bitmap^ b = gcnew System::Drawing::Bitmap(colorImage.cols, colorImage.rows, colorImage.step, System::Drawing::Imaging::PixelFormat::Format8bppIndexed, ptr);
			   System::Drawing::RectangleF rect(0, 0, control->Width, control->Height);
			   graphics->DrawImage(b, rect);
			   delete graphics;
		   }
		   void Image() {
			   id_photo = true;
			   VideoCapture capture = VideoCapture(var);
			   Mat frame, ing, img, hsv_img, hsv, picture, picture_2, picture_3;
			   vector<Mat> hsv_split;
			   capture >> frame;

			   if (!capture.isOpened())
			   {
				   MessageBox::Show("B��d kamery! spr�buj pod��czy� jeszcze raz.", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Error);
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
				   inRange(hsv_split[0], x, y, picture);
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
		else {
			var = -1;
			MessageBox::Show("Sprawd� po��czenie kamerki!", "B��d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Help_myform ^NoweOKno = gcnew Help_myform;
		NoweOKno->Show();
	}
	private: System::Void synchronizacjaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Sync ^NoweOKno = gcnew Sync(xd);
		NoweOKno->Show();
	}
	private: System::Void menuZawansowaneToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

		if (menuZawansowaneToolStripMenuItem->Checked == false) {
			this->menuZawansowaneToolStripMenuItem->Checked = true;
			this->Width = 1290;
			if ((xd == -1) || (xd == 0)) {
				checkBox2->Enabled = false;
				numericUpDown1->Enabled = false;
				button5->Enabled = false;
			}
			else {
				checkBox1->Checked = true;
				checkBox1->Enabled = false;
			}
		}
		else {
			menuZawansowaneToolStripMenuItem->Checked = false;
			this->Width = 600;
		}
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		bool fd = false;
		int value = 0;

		if (xd == 1) {
			if (serialPort1->PortName != USB_name)
				serialPort1->PortName = USB_name;
			if (serialPort1->IsOpen == false)
				serialPort1->Open();

			if ((serialPort1->IsOpen == true) && (fd == false))
			{
				serialPort1->WriteLine("D");
				serialPort1->WriteLine(Convert::ToString(numericUpDown1->Value));
				fd = true;
			}
			fd = false;
		}
		else {
			if (MessageBox::Show("Brak pod��czonego ardruino! Czy chcesz si� po��czy� ponownie?", "Pytanie na luzie", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
				Sync ^NoweOKno = gcnew Sync(xd);
				NoweOKno->Show();
			}
		}
	}
	private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
		this->znaczki = serialPort1->ReadLine();

	}
	private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		pictureBox5->Visible = true;
		if (chceck_id == false) {
			pictureBox5->Image = imageList1->Images[0];
			chceck_id = true;
		}
		else {
			pictureBox5->Image = imageList1->Images[1];
			chceck_id = false;
		}
	}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
int i = 0;
string path1;
		if (comboBox2->Text == "Obraz normalny" || comboBox2->Text == "Obraz progowany" || comboBox2->Text == "Obraz HSV" || comboBox2->Text == "Obraz normalny + progowany" || comboBox2->Text == "Obraz normalny + progowany + HSV" || comboBox2->Text == "Kontury" || comboBox2->Text == "Kalibracja" )
		{
			VideoCapture capture1 = VideoCapture(var);
			Mat frame, photo, pic1,pic2, pic_hsv,pic3, pic_kontury;
			vector<Mat> hsv_split;
			capture1 >> frame;

			vector<int> compression_params;
			compression_params.push_back(IMWRITE_PNG_COMPRESSION);
			compression_params.push_back(1);
			while (waitKey(20) != 27)
			{
				capture1 >> frame;
				frame.copyTo(photo);
				cvtColor(photo, pic1, CV_RGB2GRAY);
				cvtColor(photo, pic_hsv, CV_BGR2HSV);
				split(pic_hsv, hsv_split);
				inRange(pic1, trackBar1->Value, trackBar2->Value, pic2);
				inRange(hsv_split[0], trackBar1->Value, trackBar2->Value, pic3);
				i++;
				if (i == 1)
					break;
			}
		 if (comboBox2->Text == "Kalibracja") {

			 Calibration(pic2).copyTo(pic_kontury);
			DrawCVImage(pictureBox4, pic_kontury);
		}
			
			else if (comboBox2->Text == "Kontury") {
				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);
				
				Contours(pic2).copyTo(pic_kontury); //Funkcja contours rysuje kontur obiektu i zwraca go do "pic_kontury"
				DrawCVImage(pictureBox4, pic_kontury);
				check_geometry(temp_h,temp_w);
				imwrite(path1, pic_kontury, compression_params);

			}

			
			else if (comboBox2->Text == "Obraz normalny") {
				DrawCVImage(pictureBox4, photo);

				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);

				imwrite(path1, photo, compression_params);
			}
			else if (comboBox2->Text == "Obraz progowany") {
				DrawCVImage1(pictureBox4, pic2);

				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);

				imwrite(path1, pic2, compression_params);
			}
			else if (comboBox2->Text == "Obraz HSV") {
				DrawCVImage1(pictureBox4, pic3);

				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);

				imwrite(path1, pic3, compression_params);
			}
			else if (comboBox2->Text == "Obraz normalny + progowany") {
				int numer2 = 0;
				DrawCVImage1(pictureBox4, pic2);

				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);

				System::String^ managed1 = "test";
				managed1 = folderBrowserDialog1->SelectedPath;
				managed1 = managed1 + "\\protok�" + numer + numer2 + ".png";
				string path2 = msclr::interop::marshal_as<std::string>(managed1);

				imwrite(path1, photo, compression_params); //obraz normalny
				imwrite(path2, pic2, compression_params); // obraz progowany
			}
			else if (comboBox2->Text == "Obraz normalny + progowany + HSV") {
				int numer2 = 0;
				int numer3 = 0;
				DrawCVImage1(pictureBox4, pic2);

				System::String^ managed = "test";
				managed = folderBrowserDialog1->SelectedPath;
				managed = managed + "\\protok�" + numer + ".png";
				string path1 = msclr::interop::marshal_as<std::string>(managed);

				System::String^ managed1 = "test";
				managed1 = folderBrowserDialog1->SelectedPath;
				managed1 = managed1 + "\\protok�" + numer + numer2 + ".png";
				string path2 = msclr::interop::marshal_as<std::string>(managed1);

				System::String^ managed2 = "test";
				managed2 = folderBrowserDialog1->SelectedPath;
				managed2 = managed2 + "\\protok�" + numer + numer2 + numer3 + ".png";
				string path3 = msclr::interop::marshal_as<std::string>(managed2);

				imwrite(path1, photo, compression_params); //obraz normalny
				imwrite(path2, pic2, compression_params); // obraz progowany
				imwrite(path3, pic3, compression_params); // obraz HSV
			}
			numer++;
			capture1.release();
			if (id_photo == true)
				Image();
		}
		else
			MessageBox::Show("B��dnie wybrane typy plik�w do zapisu! Wybierz poprawny typ z listy!", "B��d na luzie", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	folderBrowserDialog1->ShowDialog();
	if (folderBrowserDialog1->SelectedPath != "D:\Studia\Semestr 6\IPZ P\IPZ\IPZ\Obrazy zapisane")
		label14->Text = folderBrowserDialog1->SelectedPath;
		label15->Visible = false;
		label14 ->ForeColor = System::Drawing::SystemColors::ControlText;

}
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	if (xd == 1) {
		if(serialPort1->PortName != USB_name)
		serialPort1->PortName = USB_name;
		if(serialPort1->IsOpen == false)
		serialPort1->Open();
	}
	if ((serialPort1->IsOpen == true) && (checkBox2->Checked == true))
		serialPort1->WriteLine("B");
	else
		serialPort1->WriteLine("C");
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	saveFileDialog1->ShowDialog();
	System::String^ file_path = "";
	file_path = saveFileDialog1->FileName;
	string path = msclr::interop::marshal_as<std::string>(file_path);

	ofstream pliczek(path);
	pliczek << "Jaki� tekst" << endl;
	//https://stackoverflow.com/questions/25201131/writing-csv-files-from-c
	pliczek.close();
}
		 cv::Mat Contours(Mat cont)
		 {
			 Mat pic_blur;
			 vector<vector<cv::Point> > contours;
			 vector<cv::Point> pts, ConvexHullPoints;
			 Rect boundRect;
			 Canny(cont, cont, 50, 100);				
			 GaussianBlur(cont, pic_blur, cv::Size(3, 3),0);        //Rozmycie 
			 erode(pic_blur, pic_blur, cv::Mat());            //Erozja 
			 findContours(pic_blur, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_TC89_L1, cv::Point(0, 0));
			 int max = 0, i_cont = -1;
			
			 Mat drawing = Mat::zeros(pic_blur.size(), CV_8UC3);
			 for (int i = 0; i< contours.size(); i++)
			 {
				 if (abs(contourArea(Mat(contours[i]))) > max)
				 {
					 max = abs(contourArea(Mat(contours[i])));
					 i_cont = i;
				 }
			 }
			 if (i_cont >= 0)
			 {
				 //aproksymacja kszta�tu konturu
				 for (size_t i = 0; i< contours.size(); i++)		
					 for (size_t j = 0; j< contours[i].size(); j++)
						 pts.push_back(contours[i][j]);
				 convexHull(pts, ConvexHullPoints);
				 //
				 boundRect = boundingRect(Mat(ConvexHullPoints));	//otoczenie prostokatem
				 polylines(drawing, ConvexHullPoints, true, Scalar(0, 0, 255), 2);
				 rectangle(drawing, boundRect, Scalar(5, 0, 155), 5);		//nalozenie prostokata

				 temp_h = boundRect.height;
				 temp_w = boundRect.width;
				 
			 }

			 return drawing;
		}
		 cv::Mat Calibration(Mat cont)
		 {
			 long double height = 0, width = 0;
			 Mat pic_blur;
			 vector<vector<cv::Point> > contours;
			 vector<cv::Point> pts, ConvexHullPoints;
			 Rect boundRect;
			 MyForm2 ^Input_window = gcnew MyForm2();
			 Input_window->ShowDialog();
			
				 cout <<"podana wysokosc: "<< Input_window->test_height << endl;
				 cout <<"podana szerokosc: " << Input_window->test_width << endl;
		
				 height = Input_window->test_height;		
				 width = Input_window->test_width;
				 diff = Input_window->tolerancja;
				 Canny(cont, cont, 50, 100);
				 GaussianBlur(cont, pic_blur, cv::Size(3, 3), 0);        //Rozmycie 
				 erode(pic_blur, pic_blur, cv::Mat());            //Erozja 
				 findContours(pic_blur, contours, CV_RETR_EXTERNAL, CV_CHAIN_APPROX_TC89_L1, cv::Point(0, 0));
				 int max = 0, i_cont = -1;

				 Mat drawing = Mat::zeros(pic_blur.size(), CV_8UC3);
				 for (int i = 0; i < contours.size(); i++)
				 {
					 if (abs(contourArea(Mat(contours[i]))) > max)
					 {
						 max = abs(contourArea(Mat(contours[i])));
						 i_cont = i;
					 }
				 }
				 if (i_cont >= 0)
				 {
					 //aproksymacja kszta�tu konturu
					 for (size_t i = 0; i < contours.size(); i++)
						 for (size_t j = 0; j < contours[i].size(); j++)
							 pts.push_back(contours[i][j]);
					 convexHull(pts, ConvexHullPoints);
					 //
					 boundRect = boundingRect(Mat(ConvexHullPoints));	//otoczenie prostokatem
					 polylines(drawing, ConvexHullPoints, true, Scalar(0, 0, 255), 2);
					 rectangle(drawing, boundRect, Scalar(5, 0, 155), 5);		//nalozenie prostokat

				 }
				 //Obliczenie wspolczynnika do pomairow geometrii
				 long double px_mm_ratio_1 = height/ boundRect.height;
				 long double px_mm_ratio_2 = width / boundRect.width;
				 px_mm_ratio = (px_mm_ratio_1 + px_mm_ratio_2) / 2;
				 //
				 cout << px_mm_ratio << endl;
			
				 basic_height = height;
				 basic_width = width;
				 return drawing;

		 }
		
private: System::Void startAutomationProcessButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (px_mm_ratio == 0)
	{
		MessageBox::Show("Najpierw nale�y dokona� kalibracji", "WARNING", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else
	{
		backgroundWorker1->RunWorkerAsync(this->OkMeasuresLabel->Text);
		//zarz�dzanie wygl�dem i dostepno�ci� przycisk�w:
		this->stopAutomationProcessButton->Enabled = true;
		this->stopAutomationProcessButton->BackColor = System::Drawing::Color::Red;
		this->processIsRunningLabel->Visible = true;
		this->startAutomationProcessButton->BackColor = System::Drawing::SystemColors::ButtonShadow;
		this->startAutomationProcessButton->Enabled = false;
		this->iloscPomiarowLabel->Enabled = true;
		this->niezgodnychLabel->Enabled = true;
		this->PrawidlowychLabel->Enabled = true;
		this->howManyMeasuresLabel->Enabled = true;
		this->OkMeasuresLabel->Enabled = true;
		this->wrongMeasuersLabel->Enabled = true;
		//

		
		

	}
}
private: System::Void stopAutomationProcessButton_Click(System::Object^  sender, System::EventArgs^  e) {
	this->backgroundWorker1->CancelAsync();
	this->stopAutomationProcessButton->BackColor = System::Drawing::SystemColors::ButtonShadow;
	this->stopAutomationProcessButton->Enabled = false;
	this->processIsRunningLabel->Visible = false;
	this->startAutomationProcessButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
	this->startAutomationProcessButton->Enabled = true;
	this->iloscPomiarowLabel->Enabled = false;
	this->niezgodnychLabel->Enabled = false;
	this->PrawidlowychLabel->Enabled = false;
	this->howManyMeasuresLabel->Enabled = false;
	this->OkMeasuresLabel->Enabled = false;
	this->wrongMeasuersLabel->Enabled = false;
}
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	int i = 0, tmpHowManyMeasure = 0, tmpOkMeasure = 0, tmpWrongMeausre = 0;
	while (true)
	{
		if (backgroundWorker1->CancellationPending)
		{
			
			e->Cancel = true;
			break;
		}
		
		//VideoCapture capture1 = VideoCapture(var);
		//Mat frame, photo, pic1, pic2, pic_hsv, pic3, pic_kontury;
		//vector<Mat> hsv_split;
		//capture1 >> frame;

		//vector<int> compression_params;
		//compression_params.push_back(IMWRITE_PNG_COMPRESSION);
		//compression_params.push_back(1);
		//while (waitKey(20) != 27)
		//{
		//	
		//	capture1 >> frame;
		//	frame.copyTo(photo);
		//	cvtColor(photo, pic1, CV_RGB2GRAY);
		//	cvtColor(photo, pic_hsv, CV_BGR2HSV);
		//	split(pic_hsv, hsv_split);
		//	inRange(pic1, trackBar1->Value, trackBar2->Value, pic2);
		//	inRange(hsv_split[0], trackBar1->Value, trackBar2->Value, pic3);
		//	i++;
		//	if (i == 1)
		//		break;
		//}

		//System::String^ managed = "test";
		//managed = folderBrowserDialog1->SelectedPath;
		//managed = managed + "\\protok�" + numer + ".png";
		//string path1 = msclr::interop::marshal_as<std::string>(managed);

		//Contours(pic2).copyTo(pic_kontury); //Funkcja contours rysuje kontur obiektu i zwraca go do "pic_kontury"
		//DrawCVImage(pictureBox4, pic_kontury);
		//check_geometry(temp_h, temp_w);
		//imwrite(path1, pic_kontury, compression_params);

		//capture1.release();
		//if (id_photo == true)
		//	Image();
	

		// If the operation was canceled by the user, 
		// set the DoWorkEventArgs.Cancel property to true.
			tmpOkMeasure++;
		e->Result = System::Convert::ToString(tmpOkMeasure);	
		

			/*tmpWrongMeausre++;
			this->wrongMeasuersLabel->Text = System::Convert::ToString(tmpWrongMeausre);


		tmpHowManyMeasure++;
		this->howManyMeasuresLabel->Text = System::Convert::ToString(tmpHowManyMeasure);*/
		cout << "elo" << endl;
		Thread::Sleep(1000);
	}
	

}
		 bool check_geometry(long double h, long double w)
		 {
			 bool width_check=false, height_check=false;
			 if (px_mm_ratio != 0)
			 {
				 long double t_height = h*px_mm_ratio;
				 long double t_width =w*px_mm_ratio;
				 if (basic_height - diff <= t_height && t_height <= basic_height + diff)
					  height_check = true;
				 if (basic_width - diff <= t_width && t_width <= basic_width + diff)
					 width_check = true;


				 //if(width_check&&height_check)
					// MessageBox::Show("Element zgodny z norm�", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 //else
					// MessageBox::Show("Element niezgodny z norm�", "INFO", MessageBoxButtons::OK, MessageBoxIcon::Information);
				 if (width_check&&height_check)
					 return true;
				 else
					 return false;
			 }

		 }


};
}
