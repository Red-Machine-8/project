#pragma once
#include <string>
#include <windows.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  Num1;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Num1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(371, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Ввод";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Num1
			// 
			this->Num1->Location = System::Drawing::Point(32, 40);
			this->Num1->Name = L"Num1";
			this->Num1->Size = System::Drawing::Size(282, 20);
			this->Num1->TabIndex = 1;
			this->Num1->TextChanged += gcnew System::EventHandler(this, &MyForm::Num1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(73, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(206, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Информационная последовательность";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(32, 106);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(57, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(76, 90);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"k";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(141, 106);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(57, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(183, 90);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(15, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"m";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(301, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"n";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(257, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(57, 20);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(32, 161);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(282, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(117, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Кодовая комбинация";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(32, 211);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(282, 20);
			this->textBox6->TabIndex = 11;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(89, 195);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(166, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"Принятая кодовая комбинация";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(371, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 23);
			this->button2->TabIndex = 13;
			this->button2->Text = L"Кодировать";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(372, 161);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(100, 21);
			this->comboBox1->TabIndex = 14;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(371, 211);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Декодировать";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(372, 280);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(100, 21);
			this->comboBox2->TabIndex = 16;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(371, 334);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 23);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Выход";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 280);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(57, 20);
			this->textBox1->TabIndex = 18;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(141, 280);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(57, 20);
			this->textBox7->TabIndex = 19;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(257, 280);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(57, 20);
			this->textBox8->TabIndex = 20;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(11, 261);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(105, 13);
			this->label7->TabIndex = 21;
			this->label7->Text = L"Контрольное число";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(188, 261);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(10, 13);
			this->label8->TabIndex = 22;
			this->label8->Text = L"r";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(299, 264);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(15, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"N";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(32, 334);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(282, 20);
			this->textBox9->TabIndex = 24;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(138, 315);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(59, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Результат";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(415, 145);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(13, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"a";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(415, 261);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(14, 13);
			this->label12->TabIndex = 27;
			this->label12->Text = L"E";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(507, 405);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Num1);
			this->Controls->Add(this->button1);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Расширенный код Хемминга";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			//Кнопка ввод
		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";
		textBox4->Text = "";
		textBox5->Text = "";
		textBox6->Text = "";
		textBox7->Text = "";
		textBox8->Text = "";
		textBox9->Text = "";
		comboBox1->Items->Clear();
		comboBox2->Items->Clear();
		//Получение и проверка входных данных
		String^ s=Num1->Text;
		bool f=0;
		int k = s->Length;
		int m=0,n;
		if (k>20)
			MessageBox::Show("Превышение максимальной длины последовательности!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		else {
			for (int i = 0; i < k; i++) {
				if ((s[i] != '0') && (s[i] != '1'))
				{
					f = 1;
				}
			}
			if (f == 1)
				MessageBox::Show("Введены неверные символы!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			else {
				//Заполнение полей k,m,n
				textBox2->Text = System::Convert::ToString(k);
				while (pow(2, m) <= k + m) {
					m++;
				}
				n = m + k + 1;
				textBox3->Text = System::Convert::ToString(m);
				textBox4->Text = System::Convert::ToString(n);
				}
			//********************************************************************************


		}
	}
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//Кнопка кодировать
		String^ s = textBox2->Text;
		int k;
		k = k.Parse(s);

		int mas[20];
		for (int i = 0; i < 20; i++)
			mas[i] = 0;
		int m=m.Parse(textBox3->Text);//Количество необхлдимых проверок
		
		int a[26];
		for (int i = 0; i < 26; i++)
			a[i] = 0;
		
		int newlong = newlong.Parse(textBox4->Text);
		s = Num1->Text;
		for (int i = 0; i < s->Length; i++)
		{
			char c = s[i];
			mas[i] = std::atoi(&c);
		}
		int u = 0;
		for (int i = 0; i < newlong; i++) {
			if ((i != 0) && (i != 1) && (i != 2) && (i != 4) && (i != 8) && (i != 16)) {
				a[i] = mas[u];
				u++;
			}
		}
		a[1] = (a[3] + a[5] + a[7] + a[9] + a[11] + a[13] + a[15] + a[17] + a[19] + a[21] + a[23] + a[25])&1;
		a[2] = (a[3] + a[6] + a[7] + a[10] + a[11] + a[14] + a[15] + a[18] + a[19] + a[22] + a[23])&1;
		a[4] = (a[5] + a[6] + a[7] + a[12] + a[13] + a[14] + a[15] + a[20] + a[21] + a[22]+ a[23])&1;
		a[8] = (a[9] + a[10] + a[11] + a[12] + a[13] + a[14] + a[15] + a[24] + a[25])&1;
		a[16] = (a[17] + a[18] + a[19] + a[20]+ a[21] + a[22] + a[23] + a[24] + a[25])&1;
		a[0] = (a[1] + a[2] + a[3] + a[4] +a[5]+a[6]+a[7] +a[8]+a[9]+a[10]+a[11]+a[12]+a[13]+a[14]+a[15] + a[16]+a[17]+a[18]+a[19]+a[20]+a[21]+a[22]+a[23]+a[24]+a[25]) & 1;

		for (int i=0;i<newlong;i++)
		textBox5->Text = textBox5->Text + System::Convert::ToString(a[i]);
		if (m >= 1)
		comboBox1->Items->Add("a0 = "+a[0]);
		if (m>=1)
		comboBox1->Items->Add("a1 = " + a[1]);
		if (m>=2)
		comboBox1->Items->Add("a2 = " + a[2]);
		if (m>=3)
		comboBox1->Items->Add("a3 = " + a[4]);
		if (m>=4)
		comboBox1->Items->Add("a4 = " + a[8]);
		if (m>=5)
		comboBox1->Items->Add("a5 = " + a[16]);
	}
			 //**************************************************************************************
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	//Кнопка декодировать
	textBox1->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	comboBox2->Items->Clear();
	int E[6] = { 0,0,0,0,0,0 };//массив ошибок
	int a[26];
	for (int i = 0; i < 26; i++)
		a[i] = 0;
	String^s=textBox6->Text;//чтене входной строки
	int length = s->Length;
	for (int i = 0; i < s->Length; i++)//заполнение массива данными строки
	{
		char c = s[i];
		a[i] = std::atoi(&c);
	}
	int S=0;
	E[1] = (a[1]+a[3]+a[5]+a[7]+a[9]+a[11]+a[13]+a[15]+a[17]+a[19]+a[21]+a[23]+a[25]) & 1;
	E[2] = (a[2] + a[3] + a[6] + a[7] + a[10] + a[11] + a[14] + a[15] + a[18] + a[19] + a[22] + a[23]) & 1;
	E[3] = (a[4] + a[5] + a[6] + a[7] + a[12] + a[13] + a[14] + a[15] + a[20] + a[21] + a[22] + a[23]) & 1;
	E[4] = (a[8]+a[9] + a[10] + a[11] + a[12] + a[13] + a[14]+a[15] + a[24] + a[25]) & 1;
	E[5] = (a[16] + a[17] + a[18] + a[19] + a[20] + a[21] + a[22] + a[23] + a[24] + a[25]) & 1;
	for (int i = 0; i < 26; i++)
		E[0] = (E[0] + a[i]) & 1;

	S = E[1]*pow(2, 0) + E[2]*pow(2, 1) + E[3]*pow(2, 2) + E[4]*pow(2, 3) + E[5]*pow(2, 4);
	
	if ((S == 0) && (E[0] == 0))
		//ошибок нет
	{	comboBox2->Items->Clear();
	
		if (length >= 1)
			comboBox2->Items->Add("E0 = " + E[0]);
		if (length >= 1)
			comboBox2->Items->Add("E1 = " + E[1]);
		if (length >= 2)
			comboBox2->Items->Add("E2 = " + E[2]);
		if (length >= 4)
			comboBox2->Items->Add("E3 = " + E[3]);
		if (length >= 8)
			comboBox2->Items->Add("E4 = " + E[4]);
		if (length >= 16)
			comboBox2->Items->Add("E5 = " + E[5]);
		textBox1->Text = "";

		if (length >= 16)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[5]);
		if (length >= 8)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[4]);
		if (length >= 4)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[3]);
		if (length >= 2)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[2]);
		if (length >= 1)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[1]);
		textBox7->Text = "0";
		textBox9->Text = "";
		for (int i = 0; i < length; i++)
		{
			if ((i!=0) && (i != 1) && (i != 2) && (i != 4) && (i != 8) && (i != 16))
			textBox9->Text = textBox9->Text + System::Convert::ToString(a[i]);
		}
	}
	if ((S != 0) && (E[0] != 0))
		//произошла однократная ошибка
	{
		if (length >= 1)
			comboBox2->Items->Add("E0 = " + E[0]);
		if (length >= 1)
			comboBox2->Items->Add("E1 = " + E[1]);
		if (length >= 2)
			comboBox2->Items->Add("E2 = " + E[2]);
		if (length >= 4)
			comboBox2->Items->Add("E3 = " + E[3]);
		if (length >= 8)
			comboBox2->Items->Add("E4 = " + E[4]);
		if (length >= 16)
			comboBox2->Items->Add("E5 = " + E[5]);
		textBox8->Text = "";
		textBox8->Text = System::Convert::ToString(S);
		textBox1->Text = "";
		if (length >= 16)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[5]);
		if (length >= 8)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[4]);
		if (length >= 4)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[3]);
		if (length >= 2)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[2]);
		if (length >= 1)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[1]);
		textBox7->Text = "1";

		if (a[S] == 0)//Исправление ошибки
			a[S] = 1;
		else a[S] = 0;

		for (int i = 0; i < length; i++)
		{
			if ((i != 0) && (i != 1) && (i != 2) && (i != 4) && (i != 8) && (i != 16))
				textBox9->Text = textBox9->Text + System::Convert::ToString(a[i]);
		}
	}
	if ((S != 0) && (E[0] == 0))
		//произошла двукратная ошибка
	{
		if (length >= 1)
			comboBox2->Items->Add("E0 = " + E[0]);
		if (length >= 1)
			comboBox2->Items->Add("E1 = " + E[1]);
		if (length >= 2)
			comboBox2->Items->Add("E2 = " + E[2]);
		if (length >= 4)
			comboBox2->Items->Add("E3 = " + E[3]);
		if (length >= 8)
			comboBox2->Items->Add("E4 = " + E[4]);
		if (length >= 16)
			comboBox2->Items->Add("E5 = " + E[5]);
		textBox1->Text = "";
		if (length >= 16)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[5]);
		if (length >= 8)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[4]);
		if (length >= 4)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[3]);
		if (length >= 2)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[2]);
		if (length >= 1)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[1]);
		textBox7->Text = "2";
		textBox9->Text = "Повторная передача";
	}
	if ((S == 0) && (E[0] != 0))
		//произошла многократная нечётная ошибка
	{
		if (length >= 1)
			comboBox2->Items->Add("E0 = " + E[0]);
		if (length >= 1)
			comboBox2->Items->Add("E1 = " + E[1]);
		if (length >= 2)
			comboBox2->Items->Add("E2 = " + E[2]);
		if (length >= 4)
			comboBox2->Items->Add("E3 = " + E[3]);
		if (length >= 8)
			comboBox2->Items->Add("E4 = " + a[4]);
		if (length >= 16)
			comboBox2->Items->Add("E5 = " + E[5]);
		//textBox7->Text = System::Convert::ToString(S);
		if (length >= 16)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[5]);
		if (length >= 8)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[4]);
		if (length >= 4)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[3]);
		if (length >= 2)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[2]);
		if (length >= 1)
			textBox1->Text = textBox1->Text + System::Convert::ToString(E[1]);
		textBox7->Text = ">=3";
		textBox9->Text = "Повторная передача";
	}
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	//Кнопка выход
	Application::Exit();//для всего приложения
	//или Close();//для одной формы
}
private: System::Void textBox6_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	comboBox2->Items->Clear();
}
private: System::Void Num1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
	textBox7->Text = "";
	textBox8->Text = "";
	textBox9->Text = "";
	comboBox1->Items->Clear();
	comboBox2->Items->Clear();
}
};
}
