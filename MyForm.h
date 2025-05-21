#pragma once
#include <cmath>
#include <ctime>
#include <cstdlib>
namespace laba6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			arrayData = new int[100]; // максимум 100 елементів
			currentSize = 0;
			capacity = 100;
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
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;


	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button4;

	protected:

	private:
		int* arrayData;
		array<int>^ arr;
		int currentSize;
		int capacity;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;

		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(134, 271);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(169, 55);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Сума квадратів";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(169, 55);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Сортувати";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(447, 414);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(169, 55);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Очистити";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(134, 353);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(166, 26);
			this->textBox2->TabIndex = 5;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(432, 162);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(460, 216);
			this->dataGridView1->TabIndex = 6;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(131, 162);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(169, 55);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Заповнити";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(124, 47);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(160, 20);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Кількість елементів";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(128, 86);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(206, 26);
			this->textBox1->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 646);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		int n;
		if (Int32::TryParse(textBox1->Text, n) && n > 0) {
			arr = gcnew array<int>(n);
			dataGridView1->Rows->Clear();
			dataGridView1->Columns->Clear();

			// Один стовпець для кожного елемента масиву
			for (int i = 0; i < n; i++) {
				dataGridView1->Columns->Add("col" + i.ToString(), "a[" + i.ToString() + "]");
			}

			// Створення одного рядка
			DataGridViewRow^ row = gcnew DataGridViewRow();
			row->CreateCells(dataGridView1);

			for (int i = 0; i < n; i++) {
				arr[i] = rand() % 100 - 50;
				row->Cells[i]->Value = arr[i];
			}
			dataGridView1->Rows->Add(row);
		}
		else {
			MessageBox::Show("Введіть коректну кількість елементів.");
		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int sum = 0;
	for (int i = 0; i < currentSize; i++)
		sum += arrayData[i] * arrayData[i];

	textBox2->Text = "Сума квадратів: " + sum.ToString();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < currentSize - 1; i++) {
		for (int j = 0; j < currentSize - i - 1; j++) {
			if (arrayData[j] < arrayData[j + 1]) {
				int temp = arrayData[j];
				arrayData[j] = arrayData[j + 1];
				arrayData[j + 1] = temp;
			}
		}
	}
	dataGridView1->Rows->Clear();
	for (int i = 0; i < currentSize; i++)
		dataGridView1->Rows->Add(arrayData[i]);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
	dataGridView1->Rows->Clear();
	currentSize = 0;
}
};
}
