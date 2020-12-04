#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>

double convertToDouble(System::String^ operand);
System::String^ convertToString(double oper);

namespace Project4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button12;

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(258, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 147);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 40);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(60, 147);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(42, 40);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(108, 147);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(42, 40);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(108, 101);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(42, 40);
			this->button4->TabIndex = 6;
			this->button4->Text = L"6";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(60, 101);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(42, 40);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(12, 101);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(42, 40);
			this->button6->TabIndex = 4;
			this->button6->Text = L"4";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(108, 55);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(42, 40);
			this->button7->TabIndex = 9;
			this->button7->Text = L"9";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(60, 55);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(42, 40);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(12, 55);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(42, 40);
			this->button9->TabIndex = 7;
			this->button9->Text = L"7";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(60, 193);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(42, 41);
			this->button10->TabIndex = 10;
			this->button10->Text = L".";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::buttonPtr_Click);
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->Location = System::Drawing::Point(12, 193);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(42, 40);
			this->button11->TabIndex = 11;
			this->button11->Text = L"0";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button13->Location = System::Drawing::Point(224, 76);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(42, 40);
			this->button13->TabIndex = 13;
			this->button13->Text = L"/";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::divide);
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button14->Location = System::Drawing::Point(176, 76);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(42, 40);
			this->button14->TabIndex = 14;
			this->button14->Text = L"x";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::multiplier);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(176, 122);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(42, 40);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::minus);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button18->Location = System::Drawing::Point(176, 168);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(42, 40);
			this->button18->TabIndex = 18;
			this->button18->Text = L"+";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::addition);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::Salmon;
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button19->Location = System::Drawing::Point(108, 194);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(42, 40);
			this->button19->TabIndex = 19;
			this->button19->Text = L"C";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::buttonC_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::Highlight;
			this->button12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button12->ForeColor = System::Drawing::Color::Snow;
			this->button12->Location = System::Drawing::Point(224, 122);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(42, 86);
			this->button12->TabIndex = 20;
			this->button12->Text = L"=";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::expression);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(282, 253);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	char main_operator;
	bool operator_trigger = false;
	double x;
	double y;
	double res;
	bool numberbegin_trigger = true;
	
	private: System::Void button0_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true) 
		{
			button11->Enabled = false;
			textBox1->Text += "0";
			numberbegin_trigger = false;
		} else {
			textBox1->Text += "0";
		}
	}

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 1;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 2;
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 3;
	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 4;
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 5;
	}

	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 6;
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 7;
	}

	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 8;
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger) { numberbegin_trigger = false; }
		textBox1->Text += 9;
	}

	private: System::Void buttonPtr_Click(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true)
		{
			MessageBox::Show("Wrong expression");
			textBox1->Clear();
		} else {
			button10->Enabled = false;
			button11->Enabled = true;
			textBox1->Text += ".";
		}
	}

	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		button10->Enabled = true;
		textBox1->Clear();
		operator_trigger = false;
		numberbegin_trigger = true;
	}

	private: System::Void addition(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true)
		{
			MessageBox::Show("WrongExpression");

		}
		else
		{
			if (operator_trigger)
			{
				textBox1->Clear();
				main_operator = '+';
			}
			else
			{
				x = convertToDouble(textBox1->Text);
				textBox1->Clear();
				main_operator = '+';
				operator_trigger = true;
			}
			button10->Enabled = true;
		}
	}

	private: System::Void expression(System::Object^ sender, System::EventArgs^ e) {
		switch (main_operator) {
		case '+':
			y = convertToDouble(textBox1->Text);
			x += y;
			textBox1->Text = convertToString(x);
			break;
		case '-':
			y = convertToDouble(textBox1->Text);
			x += y;
			textBox1->Text = convertToString(x);
			break;
		case '*':
			y = convertToDouble(textBox1->Text);
			x *= y;
			textBox1->Text = convertToString(x);
			break;
		case '/':
			y = convertToDouble(textBox1->Text);
			if (y != 0)
			{
				x = x / y;
				textBox1->Text = convertToString(x);
				break;
			}
			else { MessageBox::Show("Divide by zero"); textBox1->Clear(); }
			break;
		}
	}

	private: System::Void minus(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true)
		{
			MessageBox::Show("WrongExpression");

		}
		else
		{
			if (operator_trigger)
			{
				textBox1->Clear();
				main_operator = '-';
			}
			else
			{
				x = convertToDouble(textBox1->Text);
				textBox1->Clear();
				main_operator = '-';
				operator_trigger = true;
			}
			button10->Enabled = true;
		}
	}

	private: System::Void multiplier(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true)
		{
			MessageBox::Show("WrongExpression");

		}
		else
		{
			if (operator_trigger)
			{
				textBox1->Clear();
				main_operator = '*';
			}
			else
			{
				x = convertToDouble(textBox1->Text);
				textBox1->Clear();
				main_operator = '*';
				operator_trigger = true;
			}
			button10->Enabled = true;
		}
	}

	private: System::Void divide(System::Object^ sender, System::EventArgs^ e) {
		if (numberbegin_trigger == true)
		{
			MessageBox::Show("WrongExpression");

		}
		else
		{
			if (operator_trigger)
			{
				textBox1->Clear();
				main_operator = '/';
			}
			else
			{
				x = convertToDouble(textBox1->Text);
				textBox1->Clear();
				main_operator = '/';
				operator_trigger = true;
			}
			button10->Enabled = true;
		}
	}
};
}

double convertToDouble(System::String^ operand)
{
	std::string unmanaged = msclr::interop::marshal_as<std::string>(operand);
	return std::stod(unmanaged);
}

System::String^ convertToString(double oper)
{
	return oper.ToString();
}