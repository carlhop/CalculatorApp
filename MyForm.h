#pragma once
/*Created by Carl R. Hopkins*/
namespace Calculator1 {

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

	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ bdelete;

	private: System::Windows::Forms::Button^ bclear;

	private: System::Windows::Forms::Button^ bclearall;

	private: System::Windows::Forms::Button^ bplusminus;
	private: System::Windows::Forms::Button^ b7;


	private: System::Windows::Forms::Button^ b8;

	private: System::Windows::Forms::Button^ b9;

	private: System::Windows::Forms::Button^ bplus;
	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b6;




	private: System::Windows::Forms::Button^ bminus;

	private: System::Windows::Forms::Button^ b1;

	private: System::Windows::Forms::Button^ b2;

	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ bx;



	private: System::Windows::Forms::Button^ b0;
	private: System::Windows::Forms::Button^ bdot;


	private: System::Windows::Forms::Button^ beq;
	private: System::Windows::Forms::Button^ bdiv;



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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->bdelete = (gcnew System::Windows::Forms::Button());
			this->bclear = (gcnew System::Windows::Forms::Button());
			this->bclearall = (gcnew System::Windows::Forms::Button());
			this->bplusminus = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->bplus = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->bminus = (gcnew System::Windows::Forms::Button());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->bx = (gcnew System::Windows::Forms::Button());
			this->b0 = (gcnew System::Windows::Forms::Button());
			this->bdot = (gcnew System::Windows::Forms::Button());
			this->beq = (gcnew System::Windows::Forms::Button());
			this->bdiv = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 80);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"Created By Carl R. Hopkins (press CE to start)";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// bdelete
			// 
			this->bdelete->Font = (gcnew System::Drawing::Font(L"Wingdings", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(2)));
			this->bdelete->Location = System::Drawing::Point(4, 98);
			this->bdelete->Name = L"bdelete";
			this->bdelete->Size = System::Drawing::Size(77, 65);
			this->bdelete->TabIndex = 2;
			this->bdelete->Text = L"";
			this->bdelete->UseVisualStyleBackColor = true;
			this->bdelete->Click += gcnew System::EventHandler(this, &MyForm::bdelete_Click);
			// 
			// bclear
			// 
			this->bclear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bclear->Location = System::Drawing::Point(85, 98);
			this->bclear->Name = L"bclear";
			this->bclear->Size = System::Drawing::Size(77, 65);
			this->bclear->TabIndex = 3;
			this->bclear->Text = L"C";
			this->bclear->UseVisualStyleBackColor = true;
			this->bclear->Click += gcnew System::EventHandler(this, &MyForm::bclear_Click);
			// 
			// bclearall
			// 
			this->bclearall->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bclearall->Location = System::Drawing::Point(166, 98);
			this->bclearall->Name = L"bclearall";
			this->bclearall->Size = System::Drawing::Size(77, 65);
			this->bclearall->TabIndex = 4;
			this->bclearall->Text = L"CE";
			this->bclearall->UseVisualStyleBackColor = true;
			this->bclearall->Click += gcnew System::EventHandler(this, &MyForm::bclearall_Click);
			// 
			// bplusminus
			// 
			this->bplusminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bplusminus->Location = System::Drawing::Point(247, 98);
			this->bplusminus->Name = L"bplusminus";
			this->bplusminus->Size = System::Drawing::Size(77, 65);
			this->bplusminus->TabIndex = 5;
			this->bplusminus->Text = L"±";
			this->bplusminus->UseVisualStyleBackColor = true;
			this->bplusminus->Click += gcnew System::EventHandler(this, &MyForm::bplusminus_Click);
			// 
			// b7
			// 
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->Location = System::Drawing::Point(6, 169);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(75, 65);
			this->b7->TabIndex = 2;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = true;
			this->b7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b8
			// 
			this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->Location = System::Drawing::Point(85, 169);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(77, 65);
			this->b8->TabIndex = 3;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = true;
			this->b8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b9
			// 
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->Location = System::Drawing::Point(166, 169);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(77, 65);
			this->b9->TabIndex = 4;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = true;
			this->b9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bplus
			// 
			this->bplus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bplus->Location = System::Drawing::Point(247, 169);
			this->bplus->Name = L"bplus";
			this->bplus->Size = System::Drawing::Size(77, 65);
			this->bplus->TabIndex = 5;
			this->bplus->Text = L"+";
			this->bplus->UseVisualStyleBackColor = true;
			this->bplus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// b4
			// 
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->Location = System::Drawing::Point(4, 240);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(77, 65);
			this->b4->TabIndex = 2;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = true;
			this->b4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b5
			// 
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->Location = System::Drawing::Point(85, 240);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(77, 65);
			this->b5->TabIndex = 3;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = true;
			this->b5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b6
			// 
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->Location = System::Drawing::Point(166, 240);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(77, 65);
			this->b6->TabIndex = 4;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = true;
			this->b6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bminus
			// 
			this->bminus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bminus->Location = System::Drawing::Point(247, 240);
			this->bminus->Name = L"bminus";
			this->bminus->Size = System::Drawing::Size(77, 65);
			this->bminus->TabIndex = 5;
			this->bminus->Text = L"-";
			this->bminus->UseVisualStyleBackColor = true;
			this->bminus->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// b1
			// 
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->Location = System::Drawing::Point(6, 311);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(77, 65);
			this->b1->TabIndex = 2;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = true;
			this->b1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b2
			// 
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->Location = System::Drawing::Point(87, 311);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(77, 65);
			this->b2->TabIndex = 3;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// b3
			// 
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->Location = System::Drawing::Point(168, 311);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(77, 65);
			this->b3->TabIndex = 4;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = true;
			this->b3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bx
			// 
			this->bx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bx->Location = System::Drawing::Point(249, 311);
			this->bx->Name = L"bx";
			this->bx->Size = System::Drawing::Size(77, 65);
			this->bx->TabIndex = 5;
			this->bx->Text = L"x";
			this->bx->UseVisualStyleBackColor = true;
			this->bx->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// b0
			// 
			this->b0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b0->Location = System::Drawing::Point(4, 382);
			this->b0->Name = L"b0";
			this->b0->Size = System::Drawing::Size(77, 65);
			this->b0->TabIndex = 2;
			this->b0->Text = L"0";
			this->b0->UseVisualStyleBackColor = true;
			this->b0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// bdot
			// 
			this->bdot->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdot->Location = System::Drawing::Point(85, 382);
			this->bdot->Name = L"bdot";
			this->bdot->Size = System::Drawing::Size(77, 65);
			this->bdot->TabIndex = 3;
			this->bdot->Text = L".";
			this->bdot->UseVisualStyleBackColor = true;
			this->bdot->Click += gcnew System::EventHandler(this, &MyForm::bdot_Click);
			// 
			// beq
			// 
			this->beq->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->beq->Location = System::Drawing::Point(166, 382);
			this->beq->Name = L"beq";
			this->beq->Size = System::Drawing::Size(77, 65);
			this->beq->TabIndex = 4;
			this->beq->Text = L"=";
			this->beq->UseVisualStyleBackColor = true;
			this->beq->Click += gcnew System::EventHandler(this, &MyForm::beq_Click);
			// 
			// bdiv
			// 
			this->bdiv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bdiv->Location = System::Drawing::Point(247, 382);
			this->bdiv->Name = L"bdiv";
			this->bdiv->Size = System::Drawing::Size(77, 65);
			this->bdiv->TabIndex = 5;
			this->bdiv->Text = L"/";
			this->bdiv->UseVisualStyleBackColor = true;
			this->bdiv->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(338, 472);
			this->Controls->Add(this->bdiv);
			this->Controls->Add(this->bx);
			this->Controls->Add(this->bminus);
			this->Controls->Add(this->bplus);
			this->Controls->Add(this->bplusminus);
			this->Controls->Add(this->beq);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->bclearall);
			this->Controls->Add(this->bdot);
			this->Controls->Add(this->b0);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->bclear);
			this->Controls->Add(this->bdelete);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double firstDigit, secondDigit, result;
		String^ operators;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);
	if (textBox1->Text == "0")
	{
		textBox1->Text = Numbers->Text;
	}
	else
	{
		textBox1->Text = textBox1->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	Button^ NumbersOps = safe_cast<Button^>(sender);
	firstDigit = Double:: Parse(textBox1 ->Text);

	textBox1->Text = "";
	operators = NumbersOps->Text;
}
private: System::Void bdot_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textBox1->Text->Contains("."))
	{
		textBox1->Text = textBox1->Text + ".";
	}
}
private: System::Void beq_Click(System::Object^ sender, System::EventArgs^ e) {
	secondDigit = Double::Parse(textBox1->Text);
	if (operators == "+")
	{
		result = firstDigit + secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "-")
	{
		result = firstDigit - secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "/")
	{
		result = firstDigit / secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
	else if (operators == "x")
	{
		result = firstDigit * secondDigit;
		textBox1->Text = System::Convert::ToString(result);
	}
}
private: System::Void bclear_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void bclearall_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "0";
}
private: System::Void bplusminus_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Contains("-"))
	{
		textBox1->Text = textBox1->Text->Remove(0, 1);
	}
	else
	{
		textBox1->Text = "-" + textBox1->Text;
	}
}
private: System::Void bdelete_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text->Length > 0)
	{
		textBox1->Text = textBox1->Text->Remove(textBox1->Text->Length - 1, 1);
	}
	if (textBox1->Text=="")
	{
		textBox1->Text = "0";
	}
}
};
}
