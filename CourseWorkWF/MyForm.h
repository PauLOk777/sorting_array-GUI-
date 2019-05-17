#pragma once
#include "FileWork.h"
#include "Functions.h"
#include "SortMethods.h"
#include <string>

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
	private: System::Windows::Forms::Label^ label3;
	public:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button7;
	public:

	public:
		MyForm(void)
		{
			Array = nullptr;
			InitializeComponent();
			size = 1;
			rangeBegin = 0;
			rangeEnd = 1;
			typeOfFilling = 0;
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

	private: System::Windows::Forms::Button^ button2;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->telegrampaul200ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->designedByPauLInKIEVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 123);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Manualy fill";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection sort", L"Shell sort", L"Heap sort" });
			this->comboBox1->Location = System::Drawing::Point(15, 45);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(23, 31);
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
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
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
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Enabled = false;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(0, 27);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(450, 331);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::Chart1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 74);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 94);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(32, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::TextBox2_TextChanged);
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 48);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Random fill";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Location = System::Drawing::Point(456, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(124, 152);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Way of filling";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Range:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 77);
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
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(82, 94);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(32, 20);
			this->textBox3->TabIndex = 9;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"sorting_array";
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
			MessageBox::Show(comboBox1->SelectedItem->ToString());
		}
	private:
		System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		}
	private:
		System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
			
		}
	private:
		System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (comboBox1->SelectedItem->ToString() == "Selection sort") {
				selectionSort(Array, size);
			}
			if (comboBox1->SelectedItem->ToString() == "Shell sort") {
				shellSort(Array, size);
			}
			if (comboBox1->SelectedItem->ToString() == "Heap sort") {
				heapSort(Array, size);
			}

		}
	private:
		System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			int _size = Convert::ToInt32(textBox1->Text);
			int begin = Convert::ToInt32(textBox2->Text);
			int end = Convert::ToInt32(textBox3->Text);
			Array = new double[_size];
			randomFillingArray(Array, _size, begin, end);
			size = _size;
		}
	private:
		System::Void Chart1_Click(System::Object^ sender, System::EventArgs^ e) {

		}
	private: 
		System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
			delete[] Array;
			Application::Restart();
		}
	private:
		System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
			writeFile(Array, size);
			MessageBox::Show("Success", "Output file was filled");
			button4->Enabled = false;
	}
	private: 
		System::Void Button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
			ifstream fin1, fin2;
			int _size;
			openFileINPUT(fin1, "input.txt");
			readSize(fin1, _size);
			fin1.close();
			size = _size;
			Array = new double[size];
			openFileINPUT(fin2, "input.txt");
			fileFillingArray(fin2, Array, size);
			MessageBox::Show("Success", "Array was filled");

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
			MessageBox::Show("Success", "Array was filled");
			button7->Enabled = false;
	}
};
}
