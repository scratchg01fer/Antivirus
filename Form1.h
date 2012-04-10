#pragma once
#include "Scanner.h"


namespace Antivirus
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary> 
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the 
	///          'Resource File Name' property for the managed resource compiler tool 
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public __gc class Form1 : public System::Windows::Forms::Form
	{	
	public:
		Form1(void)
		{
			InitializeComponent();
		}
  
	protected:
		void Dispose(Boolean disposing)
		{
			if (disposing && components)
			{
				components->Dispose();
			}
			__super::Dispose(disposing);
		}
	private: System::Windows::Forms::Button *  button1;
	private: System::Windows::Forms::TextBox *  textBox1;
	private: System::Windows::Forms::Button *  button2;
	private: System::Windows::Forms::ProgressBar *  progressBar1;
	private: System::Windows::Forms::TextBox *  textBox2;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container * components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = new System::Windows::Forms::Button();
			this->textBox1 = new System::Windows::Forms::TextBox();
			this->button2 = new System::Windows::Forms::Button();
			this->progressBar1 = new System::Windows::Forms::ProgressBar();
			this->textBox2 = new System::Windows::Forms::TextBox();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(8, 168);
			this->button1->Name = S"button1";
			this->button1->Size = System::Drawing::Size(128, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = S"Scan";
			this->button1->Click += new System::EventHandler(this, button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(48, 48);
			this->textBox1->Name = S"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(184, 20);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = S"Press Scan to check for viruses";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(144, 168);
			this->button2->Name = S"button2";
			this->button2->Size = System::Drawing::Size(128, 64);
			this->button2->TabIndex = 2;
			this->button2->Text = S"Clean";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(32, 120);
			this->progressBar1->Name = S"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(208, 24);
			this->progressBar1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(48, 72);
			this->textBox2->Name = S"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(184, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = S"Press Clean to exterminate viruses";
			this->textBox2->TextChanged += new System::EventHandler(this, textBox2_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(284, 262);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = S"Form1";
			this->Text = S"The Exterminator";
			this->Load += new System::EventHandler(this, Form1_Load);
			this->ResumeLayout(false);

		}	
	private: System::Void button1_Click(System::Object *  sender, System::EventArgs *  e)
			 {
				 DirectoryInfo* di = new DirectoryInfo(S"c:\\");
				 Scanner::Scan(di);
			 }

	private: System::Void textBox2_TextChanged(System::Object *  sender, System::EventArgs *  e)
			 {
			 }

private: System::Void Form1_Load(System::Object *  sender, System::EventArgs *  e)
		 {
		 }

};
}


