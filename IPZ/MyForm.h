#pragma once
//#include <opencv2/opencv.hpp>
#include <iostream>
#include "MyForm1.h"
#include "Help_myform.h"
namespace IPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
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
	private: System::Windows::Forms::CheckBox^  checkBox1;
	public: System::Windows::Forms::ComboBox^  comboBox1;
	private:

	private:


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox2;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->sadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nieWiemCoTuMo¿eBycToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->menuStrip1->SuspendLayout();
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
			this->menuStrip1->Size = System::Drawing::Size(297, 28);
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
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Size = System::Drawing::Size(249, 26);
			this->nieWiemCoTuMo¿eBycToolStripMenuItem->Text = L"nie wiem co tu mo¿e byc";
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
			this->button1->Location = System::Drawing::Point(61, 288);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(161, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Uruchom program !";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->checkBox1->Location = System::Drawing::Point(61, 119);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(155, 23);
			this->checkBox1->TabIndex = 2;
			this->checkBox1->Text = L"W³¹cz oœwietlenie";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Kamera w laptopie", L"Kamera USB" });
			this->comboBox1->Location = System::Drawing::Point(60, 71);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(162, 24);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(57, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 19);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Wybierz aktywn¹ kamere";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(49, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(193, 38);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Wybierz mierzon¹ wartoœæ \r\n( mo¿esz zmieniæ póŸniej! )";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Pole powierzchni", L"Obwód", L"Iloœc przedmiotów ",
					L"Typy przedmiotów", L"Kolory przedmiotów"
			});
			this->comboBox2->Location = System::Drawing::Point(60, 228);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(162, 24);
			this->comboBox2->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 353);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkBox1);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void pomocToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Help_myform ^NoweOKno = gcnew Help_myform;
		NoweOKno->Show();
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (comboBox1->Text == "")
		MessageBox::Show("Podaj aktywn¹ kamerkê, by przejœæ dalej", "Stwierdzenie na luzie ziomeczku", MessageBoxButtons::OK, MessageBoxIcon::Information);

	else if (comboBox1->Text == "Kamera w laptopie"){
			MyForm::Visible = false;
			MyForm1 ^NoweOKno = gcnew MyForm1(comboBox1->Text);
			NoweOKno->Show();
	}
	else if (comboBox1->Text == "Kamera USB"){
			MyForm::Visible = false;
			MyForm1 ^NoweOKno = gcnew MyForm1(comboBox1->Text);
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
private: System::Void comboBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {

}		
	
};
}
