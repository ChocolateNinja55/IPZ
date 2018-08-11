#pragma once
#include <iostream>
#include "Sync.h"
#include <string>
#include <fstream>
#using <System.dll>
namespace IPZ {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// Summary for MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public: static double test_height=0, test_width=0,tolerancja=0;
	private: System::Windows::Forms::Label^  label3;
	public:
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  tolerance_box;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button1;
	public:

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  height_box;
	private: System::Windows::Forms::TextBox^  width_box;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->height_box = (gcnew System::Windows::Forms::TextBox());
			this->width_box = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tolerance_box = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"wysokoœæ:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"szerokoœæ:";
			// 
			// height_box
			// 
			this->height_box->Location = System::Drawing::Point(101, 80);
			this->height_box->Name = L"height_box";
			this->height_box->Size = System::Drawing::Size(100, 22);
			this->height_box->TabIndex = 2;
			this->height_box->TextChanged += gcnew System::EventHandler(this, &MyForm2::height_box_TextChanged);
			// 
			// width_box
			// 
			this->width_box->Location = System::Drawing::Point(101, 121);
			this->width_box->Name = L"width_box";
			this->width_box->Size = System::Drawing::Size(100, 22);
			this->width_box->TabIndex = 3;
			this->width_box->TextChanged += gcnew System::EventHandler(this, &MyForm2::width_box_TextChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(101, 200);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::button1_Click);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(258, 71);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Podaj rzeczywiste wymiary przedmiotu w mm. Gdzie wysokoœæ jest krótszym bokiem.";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(207, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(30, 17);
			this->label4->TabIndex = 6;
			this->label4->Text = L"mm";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(207, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(30, 17);
			this->label5->TabIndex = 7;
			this->label5->Text = L"mm";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(8, 160);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 17);
			this->label6->TabIndex = 8;
			this->label6->Text = L"tolerancja:";
			// 
			// textBox1
			// 
			this->tolerance_box->Location = System::Drawing::Point(101, 160);
			this->tolerance_box->Name = L"tolerance_box";
			this->tolerance_box->Size = System::Drawing::Size(100, 22);
			this->tolerance_box->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(207, 165);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 17);
			this->label7->TabIndex = 10;
			this->label7->Text = L"mm";
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 235);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tolerance_box);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->width_box);
			this->Controls->Add(this->height_box);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm2";
			this->Text = L"Kalibracja";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
	private: System::Void height_box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
		
	}
	
	private: System::Void width_box_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	test_height = double::Parse(height_box->Text);
	test_width = double::Parse(width_box->Text);
	tolerancja = double::Parse(tolerance_box->Text);
	MyForm2::Close();
}
};
}
