#pragma once
//#include <opencv2/opencv.hpp>
#include <iostream>
#include "MyForm1.h"
#include "Help_myform.h"
#include "Sync.h"
#include <fstream>
#using <System.dll>
namespace IPZ {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	using namespace System::IO::Ports;
	using namespace System::ComponentModel;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:System::String ^znak = "";	
	public:System::String ^port_Name = "COM1";
	public: int xyz = 0, tst=0;

	private: System::Windows::Forms::Label^  label4;

	public:
		static SerialPort^ _serialPort;
		MyForm(void)
		{
			InitializeComponent();
			label3->Text = "Niepod³¹czony";
			//
			//TODO: Add the constructor code here
			//
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button2;
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			serialPort1->Close();
			timer1->Stop();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  sadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nieWiemCoTuMo¿eBycToolStripMenuItem;
	private: System::Windows::Forms::Button^  button1;

	public: System::Windows::Forms::ComboBox^  comboBox1;
	private:

	private:


	private: System::Windows::Forms::Label^  label1;


	private: System::IO::Ports::SerialPort^  serialPort1;

	private: System::ComponentModel::IContainer^  components;



	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nieWiemCoTuMo¿eBycToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->sadToolStripMenuItem,
					this->oProgramieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(378, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// sadToolStripMenuItem
			// 
			this->sadToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->nieWiemCoTuMo¿eBycToolStripMenuItem });
			this->sadToolStripMenuItem->Name = L"sadToolStripMenuItem";
			this->sadToolStripMenuItem->Size = System::Drawing::Size(52, 24);
			this->sadToolStripMenuItem->Text = L"&Start";
			// 
			// nieWiemCoTuMo¿eBycToolStripMenuItem
			// 
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Name = L"nieWiemCoTuMo¿eBycToolStripMenuItem";
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Size = System::Drawing::Size(229, 26);
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Text = L"&Synchronizacja rêczna";
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::nieWiemCoTuMo¿eBycToolStripMenuItem_Click);
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->pomocToolStripMenuItem,
					this->zamknijToolStripMenuItem
			});
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(106, 24);
			this->oProgramieToolStripMenuItem->Text = L"&O programie";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(137, 26);
			this->pomocToolStripMenuItem->Text = L"&Pomoc";
			this->pomocToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::pomocToolStripMenuItem_Click);
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(137, 26);
			this->zamknijToolStripMenuItem->Text = L"&Zamknij";
			this->zamknijToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::zamknijToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(96, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Uruchom program !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Kamera w laptopie", L"Kamera USB" });
			this->comboBox1->Location = System::Drawing::Point(85, 80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(180, 24);
			this->comboBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(81, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Wybierz aktywn¹ kamere";
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			this->serialPort1->ReadTimeout = 300;
			this->serialPort1->WriteTimeout = 300;
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &MyForm::serialPort1_DataReceived);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"ar_off.png");
			this->imageList1->Images->SetKeyName(1, L"ar_on.png");
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Location = System::Drawing::Point(53, 127);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(254, 181);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(50, 331);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(163, 19);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Status mikrokontrolera:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(211, 331);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 19);
			this->label3->TabIndex = 7;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(96, 369);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(161, 33);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Pod³¹cz / Roz³¹cz";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(291, 385);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 499);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Morfologia";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: bool chceck = false;
public:System::String^ dafug = "";


	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Help_myform ^NoweOKno = gcnew Help_myform;
		NoweOKno->Show();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "")
		MessageBox::Show("Podaj aktywn¹ kamerkê, by przejœæ dalej", "Stwierdzenie na luzie ziomeczku", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else if (comboBox1->Text == "Kamera w laptopie"){
			MyForm::Visible = false;
			MyForm1 ^NoweOKno = gcnew MyForm1(comboBox1->Text,dafug,xyz);
			NoweOKno->Show();
	}
	else if (comboBox1->Text == "Kamera USB"){
		
			MyForm::Visible = false;
			MyForm1 ^NoweOKno = gcnew MyForm1(comboBox1->Text,port_Name,xyz);
			NoweOKno->Show();
	}
	else {
		MessageBox::Show("Podaj poprawne urz¹dzenie ziomeczku!", "B³¹d na luzie ziomeczku", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		return;
	}
}
private: System::Void zamknijToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (MessageBox::Show("Czy na pewno chcesz zamkn¹æ program ?", "Pytanko na luzie", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
		Application::Exit();
}
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
	try {
		this->znak = serialPort1->ReadLine();
	}
	catch (TimeoutException()) {}
	catch (...) {};
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	pictureBox1->Image = imageList1->Images[0];
	timer1->Start();
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
}
void chceck_USB(System::String ^nazwa_portu){
				 System::String^ portName ="";
				 for each (System::String^ s in SerialPort::GetPortNames())
				 {
					//MessageBox::Show(" {0}", s, MessageBoxButtons::OK);
					 portName = s;
					 nazwa_portu = s;
					 dafug = s;
					 this->serialPort1->PortName = s;
				 }
				 if (portName != "")
				 {
					 if (serialPort1->IsOpen == true)
						 return;
					 else
					serialPort1->Open();
				 }
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (chceck == false) {
			if (serialPort1->IsOpen == false)
				chceck_USB(port_Name);

			if (serialPort1->IsOpen == true) {
				this->serialPort1->ReadTimeout = 2000;
				this->znak = serialPort1->ReadLine();
			}
			else
				this->serialPort1->ReadTimeout = 300;
			label4->Text = znak;

			if (znak == "Siemandero") {
				label3->Text = "Pod³¹czony";
				pictureBox1->Image = imageList1->Images[1];
				serialPort1->WriteLine("X");
				chceck = true;
				xyz = 1;
				serialPort1->Close();
			}
			else if ((znak != "Siemandero") && (znak != "")) {
				if (serialPort1->IsOpen == true) {
					this->serialPort1->ReadTimeout = 500;
					this->znak = serialPort1->ReadLine();
					if (znak == "Siemandero") {
						label3->Text = "Pod³¹czony";
						pictureBox1->Image = imageList1->Images[1];
						serialPort1->WriteLine("X");
						chceck = true;
						xyz = 1;
						serialPort1->Close();
					}

				}
				else
					this->serialPort1->ReadTimeout = 300;
				label4->Text = znak;
			}
			else {
				MessageBox::Show("SprawdŸ po³¹czenie pomiêdzy Ardruino a USB", "B³¹d na luzie ziomeczku", MessageBoxButtons::OK, MessageBoxIcon::Error);
				label3->Text = "Niepod³¹czony";
				pictureBox1->Image = imageList1->Images[0];
				xyz = -1;
			}
		}
		else {
			serialPort1->Close();
			label3->Text = "Niepod³¹czony";
			pictureBox1->Image = imageList1->Images[0];
			chceck = false;
			xyz = -1;
		}
	}
	catch(...){}
}
private: System::Void nieWiemCoTuMo¿eBycToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Sync^NoweOKno = gcnew Sync(xyz);
	NoweOKno->Show();
	tst = NoweOKno->test;
	cout << tst<<endl;
	
	
	
}
};
}
