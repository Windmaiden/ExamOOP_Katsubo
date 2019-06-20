#pragma once
#include <cstdio>    // printf()
#include <ctime>     // clock_t, clock(), CLOCKS_PER_SEC

namespace LB {

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;



	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;


	private: System::Windows::Forms::Timer^  T_1;
	private: System::Windows::Forms::Timer^  T_2;
	private: System::Windows::Forms::Label^  Timer;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Timer^  B_1;
	private: System::Windows::Forms::Timer^  B_2;
	private: System::Windows::Forms::Timer^  B_3;
	private: System::Windows::Forms::PictureBox^  P_B;
	private: System::Windows::Forms::Timer^  P_T;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Timer^  V_1;
	private: System::Windows::Forms::Timer^  V_2;
	private: System::Windows::Forms::Timer^  V_3;
	private: System::Windows::Forms::Timer^  V_4;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->T_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->T_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->Timer = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->B_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->B_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->B_3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->P_B = (gcnew System::Windows::Forms::PictureBox());
			this->P_T = (gcnew System::Windows::Forms::Timer(this->components));
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->V_1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->V_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->V_3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->V_4 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->P_B))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(13, 13);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сортировка Пузырьком";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(10, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 24);
			this->label1->TabIndex = 1;
			this->label1->Text = L"3";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(10, 92);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(10, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(21, 24);
			this->label3->TabIndex = 3;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Red;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(10, 140);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 24);
			this->label4->TabIndex = 4;
			this->label4->Text = L"8";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Red;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(10, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(21, 24);
			this->label5->TabIndex = 5;
			this->label5->Text = L"7";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Red;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(10, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(21, 24);
			this->label6->TabIndex = 6;
			this->label6->Text = L"2";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Red;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(10, 212);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(21, 24);
			this->label7->TabIndex = 7;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(10, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(21, 24);
			this->label8->TabIndex = 10;
			this->label8->Text = L"4";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Red;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(10, 260);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 24);
			this->label9->TabIndex = 11;
			this->label9->Text = L"6";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Red;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(10, 284);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 24);
			this->label10->TabIndex = 12;
			this->label10->Text = L"9";
			// 
			// T_1
			// 
			this->T_1->Interval = 1200;
			this->T_1->Tick += gcnew System::EventHandler(this, &MyForm::T_1_Tick);
			// 
			// T_2
			// 
			this->T_2->Interval = 1200;
			this->T_2->Tick += gcnew System::EventHandler(this, &MyForm::T_2_Tick);
			// 
			// Timer
			// 
			this->Timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Timer->ForeColor = System::Drawing::Color::Blue;
			this->Timer->Location = System::Drawing::Point(445, 409);
			this->Timer->Name = L"Timer";
			this->Timer->Size = System::Drawing::Size(136, 48);
			this->Timer->TabIndex = 13;
			this->Timer->Text = L"0 MS";
			this->Timer->Click += gcnew System::EventHandler(this, &MyForm::Timer_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 422);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 35);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Сортировка Выбором";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// B_1
			// 
			this->B_1->Interval = 1200;
			this->B_1->Tick += gcnew System::EventHandler(this, &MyForm::B_1_Tick);
			// 
			// B_2
			// 
			this->B_2->Interval = 1200;
			this->B_2->Tick += gcnew System::EventHandler(this, &MyForm::B_2_Tick);
			// 
			// B_3
			// 
			this->B_3->Interval = 1200;
			this->B_3->Tick += gcnew System::EventHandler(this, &MyForm::B_3_Tick);
			// 
			// P_B
			// 
			this->P_B->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"P_B.Image")));
			this->P_B->Location = System::Drawing::Point(89, 116);
			this->P_B->Name = L"P_B";
			this->P_B->Size = System::Drawing::Size(482, 96);
			this->P_B->TabIndex = 15;
			this->P_B->TabStop = false;
			this->P_B->Visible = false;
			// 
			// P_T
			// 
			this->P_T->Interval = 8000;
			this->P_T->Tick += gcnew System::EventHandler(this, &MyForm::P_T_Tick);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(330, 13);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(241, 35);
			this->button3->TabIndex = 16;
			this->button3->Text = L"Сортировка Вставками";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// V_1
			// 
			this->V_1->Interval = 1400;
			this->V_1->Tick += gcnew System::EventHandler(this, &MyForm::V_1_Tick);
			// 
			// V_2
			// 
			this->V_2->Interval = 1400;
			this->V_2->Tick += gcnew System::EventHandler(this, &MyForm::V_2_Tick);
			// 
			// V_3
			// 
			this->V_3->Interval = 1200;
			this->V_3->Tick += gcnew System::EventHandler(this, &MyForm::V_3_Tick);
			// 
			// V_4
			// 
			this->V_4->Interval = 1200;
			this->V_4->Tick += gcnew System::EventHandler(this, &MyForm::V_4_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(593, 466);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->P_B);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Timer);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Stas Katsubo";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->P_B))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Обнуляем
				 this->P_B->Visible=false;
				  this->Timer->Text = "0 MS";
			 this->label1->Text ="3";
			 this->label2->Text ="0";
			 this->label3->Text ="1";
			 this->label4->Text ="8";
			 this->label5->Text ="7";
			 this->label6->Text ="2";
			 this->label7->Text ="5";
			 this->label8->Text ="4";
			 this->label9->Text ="6";
			 this->label10->Text ="9";
				  MessageBox::Show("Успешно отсортировано!Ошибок при выполнение не возникло."," Сортировка методом Пузырька...",MessageBoxButtons::OK,MessageBoxIcon::Information);
				 this->T_1->Enabled = true;
				 this->P_T->Enabled=true;
				 this->P_B->Visible=true;
				 
				 int *arr; // указатель для выделения памяти под массив
				 int size; // размер массива
				 size = 9;
				arr = new int[size]; // выделение памяти под массив
				//Заполнение массива ручками=)
				arr[0] = 3;
				arr[1] = 0;
				arr[2] = 1;
				arr[3] = 8;
				arr[4] = 7;
				arr[5] = 2;
				arr[6] = 5;
				arr[7] = 4;
				arr[8] = 6;
				arr[9] = 9;
				int temp; // временная переменная для обмена элементов местами
				 // Сортировка массива пузырьком
		 // Сортировка массива пузырьком
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // меняем элементы местами
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
	
	this->label2->Text = arr[1].ToString();
	this->label3->Text = arr[2].ToString();
	this->label4->Text = arr[3].ToString();
	this->label5->Text = arr[4].ToString();
	this->label6->Text = arr[5].ToString();
	this->label7->Text = arr[6].ToString();
	this->label8->Text = arr[7].ToString();
	this->label9->Text = arr[8].ToString();
	this->label10->Text = arr[9].ToString();

	
	
			   delete [] arr; // освобождение памяти;
				 	 
		 }


		 


private: System::Void T_1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label1->Text = "0";
			 this->label2->Text ="1";
			 this->label3 ->Text = "3";
			 this->label4 ->Text = "2";
			 this->label5 ->Text = "5";
			 this->label6 ->Text = "4";
			 this->label7 ->Text = "6";
			 this->label8 ->Text = "7";
			 this->label9 ->Text = "8";
			 this->label10 ->Text = "9";
			 this->T_2->Enabled = true;
		 }
private: System::Void T_2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label3->Text ="2";
			 this->label4 ->Text = "3";
			 this->label5 ->Text = "4";
			 this->label6 ->Text = "5";
			this->Timer->Text = "0,311ms";
			 this->T_1->Enabled=false;
			 this->T_2->Enabled=false;
		 }
private: System::Void Timer_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 //Обнуляем
			 this->P_B->Visible=false;
			 this->Timer->Text = "0 MS";
			 this->label1->Text ="3";
			 this->label2->Text ="0";
			 this->label3->Text ="1";
			 this->label4->Text ="8";
			 this->label5->Text ="7";
			 this->label6->Text ="2";
			 this->label7->Text ="5";
			 this->label8->Text ="4";
			 this->label9->Text ="6";
			 this->label10->Text ="9";
			 //Выводим Месседж бокс
			 MessageBox::Show("Успешно отсортировано!Ошибок при выполнение не возникло."," Сортировка методом Выбора...",MessageBoxButtons::OK,MessageBoxIcon::Information);
			 this->B_1->Enabled = true;
			  this->P_T->Enabled=true;
				 this->P_B->Visible=true;
		 }
private: System::Void B_1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label1->Text = "0";
			 this->label2->Text = "1";
			 this->label3->Text = "3";
			 this->B_1->Enabled = false;
			 this->B_2->Enabled = true;
		 }
private: System::Void B_2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label3->Text = "2";
			 this->label4->Text = "3";
			 this->label5->Text = "4";
			  this->B_2->Enabled = false;
			   this->B_3->Enabled = true;
		 }
private: System::Void B_3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label6->Text = "5";
			 this->label7->Text = "6";
			 this->label8->Text = "7";
			 this->label9->Text = "8";
			 this->label10->Text = "9";
			 
			 float f = 0.1232;
			 this->Timer->Text = f.ToString()+ "ms";
			 this->B_3->Enabled=false;
		 }
private: System::Void P_T_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->P_B->Visible = false;
			 this->P_T->Enabled= false;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			  //Обнуляем
			 this->P_B->Visible=false;
			 this->Timer->Text = "0 MS";
			 this->label1->Text ="3";
			 this->label2->Text ="0";
			 this->label3->Text ="1";
			 this->label4->Text ="8";
			 this->label5->Text ="7";
			 this->label6->Text ="2";
			 this->label7->Text ="5";
			 this->label8->Text ="4";
			 this->label9->Text ="6";
			 this->label10->Text ="9";
				  MessageBox::Show("Успешно отсортировано!Ошибок при выполнение не возникло."," Сортировка методом Вставками...",MessageBoxButtons::OK,MessageBoxIcon::Information);
				   this->P_T->Enabled=true;
				 this->P_B->Visible=true;
				 
				 this->V_1->Enabled = true;
		 }
private: System::Void V_1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label3->Text="2";
			 this->label4->Text="3";
			 this->label1->Text="0";
			 this->V_2->Enabled = true;
			 this->V_1->Enabled=false;
		 }
private: System::Void V_2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label2->Text="1";
			 this->label5->Text="4";
			 this->label6->Text="5";
			 this->V_3->Enabled = true;
			 this->V_2->Enabled=false;
		 }
private: System::Void V_3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 this->label7->Text="6";
			 this->label8->Text="7";
			 this->V_4->Enabled = true;
			 this->V_3->Enabled=false;
		 }
private: System::Void V_4_Tick(System::Object^  sender, System::EventArgs^  e) {
			  this->label9->Text="8";
			 this->label10->Text="9";
			 this->Timer->Text = "0,11145ms";
			 this->V_4->Enabled = false;
		 }
};
		 }
		
