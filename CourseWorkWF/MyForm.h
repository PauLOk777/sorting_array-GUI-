#pragma once
#include "FileWork.h"
#include "Functions.h"
#include "SortMethods.h"
#include <string>
#include <Windows.h>

namespace CourseWorkWF {

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
		double* Array;
		int size;
		int rangeBegin;
		int rangeEnd;
		int typeOfFilling;
		int counter;
		int speed;
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button7;
	public:

	public:
		MyForm(void)
		{
			Array = nullptr;
			InitializeComponent();
			size = 1;
			counter = 0;
			rangeBegin = 0;
			rangeEnd = 1;
			typeOfFilling = 0;
			speed = 150;
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


	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ telegrampaul200ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ designedByPauLInKIEVToolStripMenuItem;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;


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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->telegrampaul200ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->designedByPauLInKIEVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection sort", L"Shell sort", L"Heap sort" });
			this->comboBox1->Location = System::Drawing::Point(15, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sorting methods";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(15, 70);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Write to file";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(15, 134);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 33);
			this->button5->TabIndex = 8;
			this->button5->Text = L"RESET";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(15, 98);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 33);
			this->button6->TabIndex = 9;
			this->button6->Text = L"RUN";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::Button6_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->aboutToolStripMenuItem,
					this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(584, 24);
			this->menuStrip1->TabIndex = 10;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->telegrampaul200ToolStripMenuItem,
					this->designedByPauLInKIEVToolStripMenuItem
			});
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// telegrampaul200ToolStripMenuItem
			// 
			this->telegrampaul200ToolStripMenuItem->Name = L"telegrampaul200ToolStripMenuItem";
			this->telegrampaul200ToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->telegrampaul200ToolStripMenuItem->Text = L"Telegram: @paul200";
			// 
			// designedByPauLInKIEVToolStripMenuItem
			// 
			this->designedByPauLInKIEVToolStripMenuItem->Name = L"designedByPauLInKIEVToolStripMenuItem";
			this->designedByPauLInKIEVToolStripMenuItem->Size = System::Drawing::Size(207, 22);
			this->designedByPauLInKIEVToolStripMenuItem->Text = L"Designed by PauL in KIEV";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 27);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"value";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(452, 331);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::Chart1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 72);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 45);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Random fill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(456, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(124, 123);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Way of filling";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"-";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 98);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(29, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 100);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Range:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 76);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Size:";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(15, 19);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Fill from file";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(455, 185);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(124, 173);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Actions and Algorithm";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(456, 159);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(60, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Speed(ms):";
			// 
			// textBox4
			// 
			this->textBox4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox4->Location = System::Drawing::Point(517, 156);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(62, 20);
			this->textBox4->TabIndex = 15;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox4_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"sorting_array";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private:
		System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
			
		}
	private:
		System::Void TextBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
		}
	private:
		System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		}
	private:
		System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		}
	private:
		System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
		}
	private:
		System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Array == nullptr) {
				MessageBox::Show("Please, fill array", "Error");
				return;
			}
			if (textBox4->Text != "") {
				speed = Convert::ToInt32(textBox4->Text);
			}
			if (comboBox1->SelectedItem->ToString() == "Selection sort") {
				for (int i = 0; i < size; i++) {
					selectionSort(Array, size, i);
					this->chart1->Series["value"]->Points->Clear();
					for (int j = 0; j < size; j++) {
						this->chart1->Series["value"]->Points->AddXY(j + 1, Array[j]);
					}
					chart1->Update();
					Sleep(speed);
				}
			}
			if (comboBox1->SelectedItem->ToString() == "Shell sort") {
				for (int i = (size - 1) / 2; i > 0; i /= 2) {
					for (int j = i; j != size; j++) {
						for (int k = j; k >= i; k -= i) {
							if (Array[k - i] > Array[k]) {
								swap(Array[k - i], Array[k]);
								this->chart1->Series["value"]->Points->Clear();
								for (int l = 0; l < size; l++) {
									this->chart1->Series["value"]->Points->AddXY(l + 1, Array[l]);
								}
								chart1->Update();
								Sleep(speed);
							}
						}
					}
				}
			}
			if (comboBox1->SelectedItem->ToString() == "Heap sort") {
				heapSort(Array, size);
			}
			MessageBox::Show("Success", "Array was sorted");
		}
	private:
		System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
				MessageBox::Show("Fill all fields!", "Error");
				return;
			}
			int _size = Convert::ToInt32(textBox1->Text);
			int begin = Convert::ToInt32(textBox2->Text);
			int end = Convert::ToInt32(textBox3->Text);
			if (begin >= end) {
				MessageBox::Show("Range can't be a negative number!", "Error");
				return;
			}
			Array = new double[_size];
			randomFillingArray(Array, _size, begin, end);
			size = _size;
			button1->Enabled = false;
			button7->Enabled = false;
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			for (int i = 0; i < size; i++) {
				this->chart1->Series["value"]->Points->AddXY(i + 1, Array[i]);
			}
			MessageBox::Show("Success", "Array was filled");
		}
	private:
		System::Void Chart1_Click(System::Object^ sender, System::EventArgs^ e) {
			
		}
	private: 
		System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
			delete[] Array;
			size = 0;
			button4->Enabled = true;
			button1->Enabled = true;
			button7->Enabled = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			this->chart1->Series["value"]->Points->Clear();	
		}
	private:
		System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
			writeFile(Array, size);
			MessageBox::Show("Success", "Output file was filled");
	}
	private: 
		System::Void Button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		}
	private:
		System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
			ifstream fin1, fin2;
			int _size;
			openFileINPUT(fin1, "input.txt");
			readSize(fin1, _size);
			fin1.close();
			size = _size;
			Array = new double[size];
			openFileINPUT(fin2, "input.txt");
			fileFillingArray(fin2, Array, size);
			button1->Enabled = false;
			button7->Enabled = false;
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			for (int i = 0; i < size; i++) {
				this->chart1->Series["value"]->Points->AddXY(i + 1, Array[i]);
			}
			MessageBox::Show("Success", "Array was filled");
		}
	
		void down(double* Array, int Size, int i)
		{
			while (2 * i + 1 < Size) {
				if (2 * i + 2 >= Size)
				{
					if (Array[i] <= Array[2 * i + 1])
					{
						swap(Array[i], Array[2 * i + 1]);
						this->chart1->Series["value"]->Points->Clear();
						for (int l = 0; l < size; l++) {
							this->chart1->Series["value"]->Points->AddXY(l + 1, Array[l]);
						}
						chart1->Update();
						Sleep(speed);
						i = 2 * i + 1;
						break;
					}
				}
				else
				{
					if (Array[2 * i + 1] > Array[2 * i + 2] && Array[i] < Array[2 * i + 1])
					{
						swap(Array[i], Array[2 * i + 1]);
						this->chart1->Series["value"]->Points->Clear();
						for (int l = 0; l < size; l++) {
							this->chart1->Series["value"]->Points->AddXY(l + 1, Array[l]);
						}
						chart1->Update();
						Sleep(speed);
						i = 2 * i + 1;
						continue;
					}
					if (Array[2 * i + 1] <= Array[2 * i + 2] && Array[i] < Array[2 * i + 2])
					{
						swap(Array[i], Array[2 * i + 2]);
						this->chart1->Series["value"]->Points->Clear();
						for (int l = 0; l < size; l++) {
							this->chart1->Series["value"]->Points->AddXY(l + 1, Array[l]);
						}
						chart1->Update();
						Sleep(speed);
						i = 2 * i + 2;
						continue;
					}
				}
				break;
			}
		}

		void heapSort(double* Array, int Size)
		{
			int k = Size / 2 - 1, i = Size;
			while (k != -1)
			{
				down(Array, Size, k);
				k--;
			}
			Size--;
			while (Size != 0)
			{
				swap(Array[0], Array[Size]);
				this->chart1->Series["value"]->Points->Clear();
				for (int l = 0; l < size; l++) {
					this->chart1->Series["value"]->Points->AddXY(l + 1, Array[l]);
				}
				chart1->Update();
				Sleep(speed);
				down(Array, Size, 0);
				Size--;
			}
		}
	private: 
		System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Array != nullptr) delete[] Array;
			Application::Exit();
		}
	private: 
		System::Void TextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
			
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
