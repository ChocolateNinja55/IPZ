#pragma once
//#include "MyForm1.h"
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
	/// Summary for Sync
	/// </summary>
	public ref class Sync : public System::Windows::Forms::Form
	{
	public:System::String ^reply = "";
	public:System::String ^Port_name = "COM1";
	private: System::Windows::Forms::Label^  label4;
	public: int spr1 = 0;
	private: System::Windows::Forms::Button^  button3;
	public:
	public: int xddd = 0; // zmienna pokazuj¹ca czy otwarto po³¹czenie

	public:
		Sync(int sprawdzenie)
		{
			InitializeComponent();
			//pictureBox1->Image = imageList1->Images[0];
			checkBox2->Checked = true;
			comboBox1->Enabled = false;
			spr1 = sprawdzenie;
			if (spr1 == 1) {
				pictureBox1->Image = imageList1->Images[1];
				label3->Text = "Pod³¹czony";

			}
			else
				pictureBox1->Image = imageList1->Images[0];
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sync()
		{
			serialPort1->Close();
			timer1->Stop();
			//MyForm1 ^update = gcnew MyForm1(Port_name, xddd);
			//update->Show();
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;



	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Sync::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(327, 142);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(220, 25);
			this->comboBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button1->Location = System::Drawing::Point(66, 275);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 31);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Po³¹cz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Sync::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 26);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(254, 181);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->WaitOnLoad = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(354, 105);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 19);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Wybierz dostêpny port:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(9, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(236, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Stan po³¹czenia mikrokontrolera:";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"ar_off.png");
			this->imageList1->Images->SetKeyName(1, L"ar_on.png");
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"COM2";
			this->serialPort1->ReadTimeout = 300;
			this->serialPort1->WriteTimeout = 300;
			this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this, &Sync::serialPort1_DataReceived);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button2->Location = System::Drawing::Point(457, 318);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(83, 29);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Zamknij";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Sync::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label3->Location = System::Drawing::Point(251, 234);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(115, 19);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Niepod³¹czony";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(357, 53);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(146, 21);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Po³¹czenie rêczne";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->Click += gcnew System::EventHandler(this, &Sync::checkBox1_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(357, 26);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(183, 21);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Po³¹cznie automatyczne";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->Click += gcnew System::EventHandler(this, &Sync::checkBox2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(281, 275);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 9;
			this->label4->Text = L"label4";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->button3->Location = System::Drawing::Point(457, 183);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 33);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Odœwie¿";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Sync::button3_Click);
			// 
			// Sync
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 372);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Sync";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Okno synchronizacji";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Sync::Sync_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Sync::Sync_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		bool chceckk = false;
		bool brak = false;
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	Sync::Close();
	}
private: System::Void serialPort1_DataReceived(System::Object^  sender, System::IO::Ports::SerialDataReceivedEventArgs^  e) {
	try {
		this->reply = serialPort1->ReadLine();
	}
	catch (TimeoutException()) {}
	catch(...){}
	//catch(Exception ex){}
}
private: System::Void Sync_Load(System::Object^  sender, System::EventArgs^  e) {
	timer1->Start();
}
		 void chceck_USB(System::String ^nazwa_portu) {
			 System::String^ portName = "";
			 for each (System::String^ s in SerialPort::GetPortNames())
			 {
				 //MessageBox::Show(" {0}", s, MessageBoxButtons::OK);
				comboBox1->Items->Add(s);
				portName = s;
				nazwa_portu = s;
				this->serialPort1->PortName = s;
			 }
			 if (portName != "")
			 {
				 if (serialPort1->IsOpen == true)
					 return;
				 else
					 serialPort1->Open();
			 }
			 else {
				 comboBox1->Items->Add("Brak dostêpnego portu COM");
				 brak = true;
			 }
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	try {
		if (chceckk == false) {
			if (serialPort1->IsOpen == false)
				chceck_USB(reply);

			if (serialPort1->IsOpen == true) {
				this->serialPort1->ReadTimeout = 2000;
				this->reply = serialPort1->ReadLine();
			}
			else
				this->serialPort1->ReadTimeout = 300;
			label4->Text = reply;

			if (reply == "Siemandero") {
				label3->Text = "Pod³¹czony";
				pictureBox1->Image = imageList1->Images[1];
				serialPort1->WriteLine("X");
				chceckk = true;
				xddd = 1;
				serialPort1->Close();
			}
			else if ((reply != "Siemandero") && (reply != "")) {
				if (serialPort1->IsOpen == true) {
					this->serialPort1->ReadTimeout = 500;
					this->reply = serialPort1->ReadLine();
					if (reply == "Siemandero") {
						label3->Text = "Pod³¹czony";
						pictureBox1->Image = imageList1->Images[1];
						serialPort1->WriteLine("X");
						chceckk = true;
						xddd = 1;
						serialPort1->Close();
					}
				}
			}
			else {
				MessageBox::Show("SprawdŸ po³¹czenie pomiêdzy Ardruino a USB", "B³¹d na luzie ziomeczku", MessageBoxButtons::OK, MessageBoxIcon::Error);
				label3->Text = "Niepod³¹czony";
				pictureBox1->Image = imageList1->Images[0];
				xddd = -1;
			}
		}
		else {
			serialPort1->Close();
			label3->Text = "Niepod³¹czony";
			pictureBox1->Image = imageList1->Images[0];
			chceckk = false;
			xddd = -1;
		}
	}
	catch(...){}
	}
private: System::Void checkBox2_Click(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = false;
	checkBox2->Checked = true;
	comboBox1->Enabled = false;
	button3->Enabled = false;
}
private: System::Void checkBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	checkBox1->Checked = true;
	checkBox2->Checked = false;
	comboBox1->Enabled = true;
	chceck_USB(reply);
	if (brak == true)
		brak = false;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	chceck_USB(reply);
	if (brak == false) {
		comboBox1->Text = "";
		//comboBox1->Items->Remove(0);
	}
	
}
private: System::Void Sync_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	
}
};
}
