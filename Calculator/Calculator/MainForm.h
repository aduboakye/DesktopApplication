#pragma once

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button5;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(202, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 33);
			this->label1->TabIndex = 1;
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(201, 60);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 43);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button2->Location = System::Drawing::Point(201, 109);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 43);
			this->button2->TabIndex = 4;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(202, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(55, 43);
			this->button3->TabIndex = 5;
			this->button3->Text = L"x";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->button4->Location = System::Drawing::Point(202, 207);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(56, 43);
			this->button4->TabIndex = 6;
			this->button4->Text = L"�";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MainForm::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(431, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 33);
			this->label2->TabIndex = 7;
			this->label2->Text = L"=";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(17, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(168, 40);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(267, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(168, 40);
			this->textBox2->TabIndex = 9;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Red;
			this->button5->Location = System::Drawing::Point(202, 256);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(56, 43);
			this->button5->TabIndex = 10;
			this->button5->Text = L"C";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click_1);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(555, 423);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(571, 462);
			this->MinimumSize = System::Drawing::Size(571, 462);
			this->Name = L"MainForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	label1->Text = "x";

	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "-";
	
}
private:
	System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		label1->Text = "+";
		
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label1->Text = "�";
	
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	/*if (label1->Text == "+")
	{
		int output = System::Convert::ToInt16(textBox1->Text) + System::Convert::ToInt16(textBox2->Text);
		label2->Text = "=" + System::Convert::ToString(output);
}*/
	if (label1->Text == "+") {
		double value1 = System::Convert::ToDouble(textBox1->Text);
		double value2 = System::Convert::ToDouble(textBox2->Text);

		if (value1 == (int)value1 && value2 == (int)value2) {
			int output = (int)value1 + (int)value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
		else {
			double output = value1 + value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
	}
	/*
	else if (label1->Text == "-") {
		int output = System::Convert::ToInt16(textBox1->Text) - System::Convert::ToInt16(textBox2->Text);
		label2->Text = "=" + System::Convert::ToString(output);
	}*/
	if (label1->Text == "-") {
		double value1 = System::Convert::ToDouble(textBox1->Text);
		double value2 = System::Convert::ToDouble(textBox2->Text);

		if (value1 == (int)value1 && value2 == (int)value2) {
			int output = (int)value1 - (int)value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
		else {
			double output = value1 - value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
	}
	/*else if (label1->Text == "/")
	{
		double output = System::Convert::ToInt16(textBox1->Text) / System::Convert::ToInt16(textBox2->Text);
		label2->Text = "=" + System::Convert::ToString(output);
	}*/
	if (label1->Text == "�") {
		double value1 = System::Convert::ToDouble(textBox1->Text);
		double value2 = System::Convert::ToDouble(textBox2->Text);

		if (value1 == (int)value1 && value2 == (int)value2) {
			int output = (int)value1 / (int)value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
		else {
			double output = value1 / value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
	}
	/*else if (label1->Text == "x")
	{ 
		int ouput= System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text);
	label2->Text = "=" + System::Convert::ToString(System::Convert::ToInt16(textBox1->Text) * System::Convert::ToInt16(textBox2->Text));
	}
	double output = System::Convert::ToDouble(textBox1->Text) *  System::Convert::ToDouble(textBox2->Text);
label2->Text = "=" + System::Convert::ToString(output);*/
	if (label1->Text == "x") {
		double value1 = System::Convert::ToDouble(textBox1->Text);
		double value2 = System::Convert::ToDouble(textBox2->Text);

		if (value1 == (int)value1 && value2 == (int)value2) {
			int output = (int)value1 * (int)value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
		else {
			double output = value1 * value2;
			label2->Text = "=" + System::Convert::ToString(output);
		}
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private:
	System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	
			textBox1->Text = "";
			textBox2->Text = "";
			
			label1->Text = "";
			if (label1->Text == "") {
				label2->Text = "=";
			}
			
	}
};
}
