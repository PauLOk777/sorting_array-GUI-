#pragma once
#include <string>
#include <fstream>
#include "MyStream.h"
#include <Windows.h>
#include <cmath>
#include "MyArray.h"
#include <msclr\marshal_cppstd.h>

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
	private:
		MyArray Array;
		int rangeBegin;
		int rangeEnd;
		int speed;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button7;
	public:
		MyForm(void)
		{
			InitializeComponent();
			rangeBegin = 0;
			rangeEnd = 1;
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
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Selection sort", L"Shell sort", L"Heap sort" });
			this->comboBox1->Location = System::Drawing::Point(16, 34);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(99, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(83, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Sorting methods";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(16, 59);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(99, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Write to file";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::Button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(16, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 33);
			this->button5->TabIndex = 8;
			this->button5->Text = L"RESET";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::Button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(16, 85);
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
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
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
			series2->ChartArea = L"ChartArea1";
			series2->Color = System::Drawing::Color::Red;
			series2->Legend = L"Legend1";
			series2->Name = L"changed";
			series3->ChartArea = L"ChartArea1";
			series3->Color = System::Drawing::Color::Lime;
			series3->Legend = L"Legend1";
			series3->Name = L"sorted";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(652, 531);
			this->chart1->TabIndex = 11;
			this->chart1->Text = L"chart1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(45, 101);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 3;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(45, 122);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// button1
			// 
			this->button1->AutoSize = true;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(15, 76);
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
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->button7);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(656, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(124, 148);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Way of filling";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(2, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(42, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Range:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(75, 125);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(10, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"-";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(15, 16);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(99, 23);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Fill from file";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::Button7_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(85, 122);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(29, 20);
			this->textBox3->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(2, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Name:";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(40, 42);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(74, 20);
			this->textBox5->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(2, 104);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(30, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Size:";
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->button6);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Location = System::Drawing::Point(655, 402);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(124, 156);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Actions and Algorithm";
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(668, 271);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Speed:";
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->trackBar1->LargeChange = 10;
			this->trackBar1->Location = System::Drawing::Point(661, 287);
			this->trackBar1->Maximum = 0;
			this->trackBar1->Minimum = -300;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(118, 45);
			this->trackBar1->TabIndex = 16;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MyForm::TrackBar1_ValueChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(725, 271);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(747, 271);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 18;
			this->label8->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private:
		System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Array.getArray() == nullptr) {
				MessageBox::Show("Please, fill array", "Error");
				return;
			}
			speed = abs(Convert::ToInt32(trackBar1->Value));
			if (comboBox1->SelectedItem->ToString() == "Selection sort") {
				Array.selectionSort(chart1, speed);
			}
			if (comboBox1->SelectedItem->ToString() == "Shell sort") {
				Array.shellSort(chart1, speed);
			}
			if (comboBox1->SelectedItem->ToString() == "Heap sort") {
				Array.heapSort(chart1, speed);
			}
			this->chart1->Series["value"]->Points->Clear();
			this->chart1->Series["changed"]->Points->Clear();
			for (int i = 0; i < Array.getSize(); i++) {
				this->chart1->Series["value"]->Points->AddXY(i + 1, Array[i]);
			}
			for (int l = 0; l < Array.getSize(); l++) {
				this->chart1->Series["value"]->Points->Clear();
				this->chart1->Series["sorted"]->Points->Clear();
				for (int j = 0; j < Array.getSize(); j++) {
					if (l > j) {
						this->chart1->Series["sorted"]->Points->AddXY(j + 1, Array[j]);
						continue;
					}
					this->chart1->Series["value"]->Points->AddXY(j + 1, Array[j]);
				}
				chart1->Update();
				Sleep(speed);
			}
			this->chart1->Series["value"]->Points->Clear();
			this->chart1->Series["changed"]->Points->Clear();
			this->chart1->Series["sorted"]->Points->Clear();
			for (int i = 0; i < Array.getSize(); i++) {
				this->chart1->Series["sorted"]->Points->AddXY(i + 1, Array[i]);
			}
			chart1->Update();
			Sleep(speed);
			MessageBox::Show("Success", "Array was sorted");
		}
	private:
		System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
				MessageBox::Show("Fill all fields!", "Error");
				return;
			}
			if (Convert::ToInt32(textBox1->Text) <= 0) {
				MessageBox::Show("Size must be more then 0", "Error");
				return;
			}
			int _size = Convert::ToInt32(textBox1->Text);
			int begin = Convert::ToInt32(textBox2->Text);
			int end = Convert::ToInt32(textBox3->Text);
			if (begin >= end) {
				MessageBox::Show("Range can't be a negative number!", "Error");
				return;
			}
			Array.setSize(_size);
			Array.randomFillingArray(begin, end);
			button1->Enabled = false;
			button7->Enabled = false;
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			for (int i = 0; i < Array.getSize(); i++) {
				this->chart1->Series["value"]->Points->AddXY(i + 1, Array[i]);
			}
			MessageBox::Show("Success", "Array was filled");
		}
	private: 
		System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e) {
			Array.clear();
			button4->Enabled = true;
			button1->Enabled = true;
			button7->Enabled = true;
			textBox1->Enabled = true;
			textBox2->Enabled = true;
			textBox3->Enabled = true;
			textBox5->Enabled = true;
			textBox1->Text = "";
			textBox2->Text = "";
			textBox3->Text = "";
			textBox5->Text = "";
			this->chart1->Series["sorted"]->Points->Clear();
			this->chart1->Series["changed"]->Points->Clear();
			this->chart1->Series["value"]->Points->Clear();	
		}
	private:
		System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
			if (Array.getArray() == nullptr) return;
			MyStream newStream;
			newStream.writeFile(Array.getArray(), Array.getSize());
			MessageBox::Show("Success", "Output file was filled");
	}
	private:
		System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e) {
			MyStream stream;
			int _size;
			msclr::interop::marshal_context context;
			std::string stdString = context.marshal_as<std::string>(textBox5->Text);
			if (!stream.openFileINPUT(stdString)) {
				MessageBox::Show("Invalid file", "Error");
				return;
			}
			stream.readSize(_size);
			if (!_size) {
				MessageBox::Show("Wrong input data", "Error");
				return;
			}
			double* newArray = new double[_size];
			stream.fileFillingArray(newArray);
			for (int i = 0; i < _size; i++) {
				Array.add(newArray[i]);
			}
			delete[] newArray;
			button1->Enabled = false;
			button7->Enabled = false;
			textBox1->Enabled = false;
			textBox2->Enabled = false;
			textBox3->Enabled = false;
			textBox5->Enabled = false;
			for (int i = 0; i < Array.getSize(); i++) {
				this->chart1->Series["value"]->Points->AddXY(i + 1, Array[i]);
			}
			MessageBox::Show("Success", "Array was filled");
		}
	private: 
		System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
			Application::Exit();
		}
	private:
		System::Void TrackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
			label8->Text = Convert::ToString(abs(trackBar1->Value));
		}
	};
}