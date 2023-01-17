#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <vector>

namespace csvParsing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const char text[] = "january";

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button1;


	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart2;



	private: System::Windows::Forms::Button^ button5;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart3;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button7;

	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart6;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea13 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series25 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series26 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea14 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series27 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series28 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea15 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend15 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series29 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series30 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea16 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend16 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series31 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series32 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea17 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend17 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series33 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series34 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea18 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend18 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series35 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series36 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->chart5 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart6 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea13->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea13);
			legend13->Name = L"Legend1";
			this->chart1->Legends->Add(legend13);
			this->chart1->Location = System::Drawing::Point(12, 25);
			this->chart1->Name = L"chart1";
			series25->ChartArea = L"ChartArea1";
			series25->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series25->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series25->Legend = L"Legend1";
			series25->Name = L"Price";
			series25->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series26->ChartArea = L"ChartArea1";
			series26->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series26->Legend = L"Legend1";
			series26->Name = L"5-Period MA";
			series26->YValuesPerPoint = 4;
			this->chart1->Series->Add(series25);
			this->chart1->Series->Add(series26);
			this->chart1->Size = System::Drawing::Size(450, 236);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &MyForm::chart1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 509);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Yearly";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// chart2
			// 
			chartArea14->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea14);
			legend14->Name = L"Legend1";
			this->chart2->Legends->Add(legend14);
			this->chart2->Location = System::Drawing::Point(12, 267);
			this->chart2->Name = L"chart2";
			series27->ChartArea = L"ChartArea1";
			series27->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series27->IsXValueIndexed = true;
			series27->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series27->Legend = L"Legend1";
			series27->Name = L"Price";
			series27->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series27->YValuesPerPoint = 2;
			series28->ChartArea = L"ChartArea1";
			series28->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series28->IsXValueIndexed = true;
			series28->Legend = L"Legend1";
			series28->Name = L"Regression Line";
			series28->YValuesPerPoint = 4;
			this->chart2->Series->Add(series27);
			this->chart2->Series->Add(series28);
			this->chart2->Size = System::Drawing::Size(450, 236);
			this->chart2->TabIndex = 2;
			this->chart2->Text = L"chart2";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(93, 509);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Monthly";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Brent Crude Oil Prices ($/Barrel)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(465, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(153, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"WTI Crude Oil Prices ($/Barrel)";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// chart3
			// 
			chartArea15->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea15);
			legend15->Name = L"Legend1";
			this->chart3->Legends->Add(legend15);
			this->chart3->Location = System::Drawing::Point(468, 25);
			this->chart3->Name = L"chart3";
			series29->ChartArea = L"ChartArea1";
			series29->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series29->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series29->Legend = L"Legend1";
			series29->Name = L"Price";
			series29->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series30->ChartArea = L"ChartArea1";
			series30->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series30->Legend = L"Legend1";
			series30->Name = L"5-Period MA";
			series30->YValuesPerPoint = 4;
			this->chart3->Series->Add(series29);
			this->chart3->Series->Add(series30);
			this->chart3->Size = System::Drawing::Size(450, 236);
			this->chart3->TabIndex = 10;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea16->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea16);
			legend16->Name = L"Legend1";
			this->chart4->Legends->Add(legend16);
			this->chart4->Location = System::Drawing::Point(468, 267);
			this->chart4->Name = L"chart4";
			series31->ChartArea = L"ChartArea1";
			series31->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series31->IsXValueIndexed = true;
			series31->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series31->Legend = L"Legend1";
			series31->Name = L"Price";
			series31->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series31->YValuesPerPoint = 2;
			series32->ChartArea = L"ChartArea1";
			series32->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series32->IsXValueIndexed = true;
			series32->Legend = L"Legend1";
			series32->Name = L"Regression Line";
			series32->YValuesPerPoint = 4;
			this->chart4->Series->Add(series31);
			this->chart4->Series->Add(series32);
			this->chart4->Size = System::Drawing::Size(450, 236);
			this->chart4->TabIndex = 11;
			this->chart4->Text = L"chart4";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(921, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 13);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Philippine Petrol Prices (P/Gallon)";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(549, 509);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 15;
			this->button7->Text = L"Monthly";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(468, 509);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 13;
			this->button9->Text = L"Yearly";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1005, 514);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 20;
			this->button10->Text = L"Monthly";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(924, 514);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 18;
			this->button12->Text = L"Yearly";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// chart5
			// 
			chartArea17->Name = L"ChartArea1";
			this->chart5->ChartAreas->Add(chartArea17);
			legend17->Name = L"Legend1";
			this->chart5->Legends->Add(legend17);
			this->chart5->Location = System::Drawing::Point(924, 267);
			this->chart5->Name = L"chart5";
			series33->ChartArea = L"ChartArea1";
			series33->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Point;
			series33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series33->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series33->Legend = L"Legend1";
			series33->Name = L"Price";
			series33->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series33->YValuesPerPoint = 2;
			series34->ChartArea = L"ChartArea1";
			series34->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series34->Legend = L"Legend1";
			series34->Name = L"Regression Line";
			series34->YValuesPerPoint = 4;
			this->chart5->Series->Add(series33);
			this->chart5->Series->Add(series34);
			this->chart5->Size = System::Drawing::Size(450, 236);
			this->chart5->TabIndex = 17;
			this->chart5->Text = L"chart5";
			// 
			// chart6
			// 
			chartArea18->Name = L"ChartArea1";
			this->chart6->ChartAreas->Add(chartArea18);
			legend18->Name = L"Legend1";
			this->chart6->Legends->Add(legend18);
			this->chart6->Location = System::Drawing::Point(924, 25);
			this->chart6->Name = L"chart6";
			series35->ChartArea = L"ChartArea1";
			series35->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			series35->LabelBorderDashStyle = System::Windows::Forms::DataVisualization::Charting::ChartDashStyle::Dash;
			series35->Legend = L"Legend1";
			series35->Name = L"Price";
			series35->SmartLabelStyle->AllowOutsidePlotArea = System::Windows::Forms::DataVisualization::Charting::LabelOutsidePlotAreaStyle::No;
			series36->ChartArea = L"ChartArea1";
			series36->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series36->Legend = L"Legend1";
			series36->Name = L"5-Period MA";
			series36->YValuesPerPoint = 4;
			this->chart6->Series->Add(series35);
			this->chart6->Series->Add(series36);
			this->chart6->Size = System::Drawing::Size(450, 236);
			this->chart6->TabIndex = 16;
			this->chart6->Text = L"chart6";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(174, 509);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 21;
			this->button2->Text = L"Weekly";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(630, 509);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Weekly";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1086, 514);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 23;
			this->button4->Text = L"Weekly";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 537);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(149, 13);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Brent Crude Oil Price Analysis:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(9, 556);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 13);
			this->label5->TabIndex = 25;
			this->label5->Text = L"WTI Crude Oil Price Analysis:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(9, 573);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(153, 13);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Philippine Petrol Price Analysis:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(165, 591);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 27;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1384, 618);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->chart5);
			this->Controls->Add(this->chart6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->chart1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void chart1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {		//BRENT YEARLY BUTTON===========================

		this->chart1->Series["Price"]->Points->Clear();
		this->chart1->Series["5-Period MA"]->Points->Clear();

		this->chart2->Series["Price"]->Points->Clear();
		this->chart2->Series["Regression Line"]->Points->Clear();

		this->chart1->Series["Price"]->IsXValueIndexed = false;
		this->chart2->Series["Price"]->IsXValueIndexed = false;

		this->chart1->Series["5-Period MA"]->IsXValueIndexed = false;
		this->chart2->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("brentyear.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <std::string> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					//date[dateIndex] = val;
					dateV.push_back(val);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart1->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;

		}

		//PRICE DOTS
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart2->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}


		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i-1] + priceV[i-2] + priceV[i-3] + priceV[i-4])/5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart1->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);

			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 10;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + stod(dateV[i].substr(0, 4));
			totalY = totalY + priceV[i];

			std::cout << "x: " << stod(dateV[i].substr(0, 4)) << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((stod(dateV[i].substr(0, 4)) - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((stod(dateV[i].substr(0, 4)) - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * stod(dateV[i].substr(0, 4))) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart2->Series["Regression Line"]->Points->AddXY(brentFirstYearY, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Year Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following year.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Year Average with the regression line sloping downwards, denoting that the price is currently going down until the following year.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Year Average with the regression line sloping upwards, denoting that the price is currently going up until the following year.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Year Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following year.";

		}


		


	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

		/*char yrMonth[] = "Nov 2019";
		const char yrMonth2[] = "Dec 2019";
		const char yrMonth3[] = "Jan 2020";
		const char yrMonth4[] = "Feb 2020";

		this->chart5->Series["Price"]->Points->AddXY(2019.11, 64.3);
		this->chart5->Series["Price"]->Points->AddXY(2019.12, 41.96);
		this->chart5->Series["Price"]->Points->AddXY(2020.01, 70.86);
		this->chart5->Series["Price"]->Points->AddXY(2020.02, 68.86);

		this->chart5->Series["Regression Line"]->Points->AddXY(2019.11, 64.3);
		this->chart5->Series["Regression Line"]->Points->AddXY(2019.12, 41.96);
		this->chart5->Series["Regression Line"]->Points->AddXY(2020.01, 70.86);
		this->chart5->Series["Regression Line"]->Points->AddXY(2020.02, 68.86);*/

		


	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->chart1->Series["Price"]->Points->Clear();
		this->chart1->Series["5-Period MA"]->Points->Clear();

	}

	
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {		//WTI YEARLY BUTTON=======================

		this->chart3->Series["Price"]->Points->Clear();
		this->chart3->Series["5-Period MA"]->Points->Clear();

		this->chart4->Series["Price"]->Points->Clear();
		this->chart4->Series["Regression Line"]->Points->Clear();

		this->chart3->Series["Price"]->IsXValueIndexed = false;
		this->chart4->Series["Price"]->IsXValueIndexed = false;

		this->chart3->Series["5-Period MA"]->IsXValueIndexed = false;
		this->chart4->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("wtiyear.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <std::string> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					//date[dateIndex] = val;
					dateV.push_back(val);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart3->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart4->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}

		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart3->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);
			avgComp = valAvgV[i];
		}


		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 10;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + stod(dateV[i].substr(0, 4));
			totalY = totalY + priceV[i];

			std::cout << "x: " << stod(dateV[i].substr(0, 4)) << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((stod(dateV[i].substr(0, 4)) - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((stod(dateV[i].substr(0, 4)) - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * stod(dateV[i].substr(0, 4))) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart4->Series["Regression Line"]->Points->AddXY(brentFirstYearY, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Year Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following year.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Year Average with the regression line sloping downwards, denoting that the price is currently going down until the following year.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Year Average with the regression line sloping upwards, denoting that the price is currently going up until the following year.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Year Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following year.";

		}



	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {		//PH PETROL YEARLY BUTTON=====================

		this->chart6->Series["Price"]->Points->Clear();
		this->chart6->Series["5-Period MA"]->Points->Clear();

		this->chart5->Series["Price"]->Points->Clear();
		this->chart5->Series["Regression Line"]->Points->Clear();

		this->chart6->Series["Price"]->IsXValueIndexed = false;
		this->chart5->Series["Price"]->IsXValueIndexed = false;

		this->chart6->Series["5-Period MA"]->IsXValueIndexed = false;
		this->chart5->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("phyear2.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <std::string> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					//date[dateIndex] = val;
					dateV.push_back(val);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart6->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart5->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}

		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart6->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);
			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 10;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + stod(dateV[i].substr(0, 4));
			totalY = totalY + priceV[i];

			std::cout << "x: " << stod(dateV[i].substr(0, 4)) << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((stod(dateV[i].substr(0, 4)) - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((stod(dateV[i].substr(0, 4)) - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * stod(dateV[i].substr(0, 4))) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = stoi(dateV[i].substr(0, 4));
			this->chart5->Series["Regression Line"]->Points->AddXY(brentFirstYearY, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Year Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following year.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following year.";
		}

		else if (priceComp < avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Year Average with the regression line sloping downwards, denoting that the price is currently going down until the following year.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following year.";
		}

		else if (priceComp > avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Year Average with the regression line sloping upwards, denoting that the price is currently going up until the following year.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following year.";
		}

		else if (priceComp < avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Year Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following year.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following year.";
		}


	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {		//PH PETROL MONTHLY BUTTON==================

		this->chart6->Series["Price"]->Points->Clear();
		this->chart6->Series["5-Period MA"]->Points->Clear();

		this->chart5->Series["Price"]->Points->Clear();
		this->chart5->Series["Regression Line"]->Points->Clear();

		this->chart6->Series["Price"]->IsXValueIndexed = true;
		this->chart5->Series["Price"]->IsXValueIndexed = false;

		this->chart6->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart5->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("phmonth.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double displayDateVal = yearVal + monthVal;
					
					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart6->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart5->Series["Price"]->Points->AddY(priceInput);

		}

		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart6->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);
			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart5->Series["Regression Line"]->Points->AddXY(i,y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Month Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following month.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following month.";
		}

		else if (priceComp < avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Month Average with the regression line sloping downwards, denoting that the price is currently going down until the following month.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following month.";
		}

		else if (priceComp > avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Month Average with the regression line sloping upwards, denoting that the price is currently going up until the following month.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following month.";
		}

		else if (priceComp < avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Month Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following month.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following month.";
		}



	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {		//WTI MONTHLY BUTTON=======================

		this->chart3->Series["Price"]->Points->Clear();
		this->chart3->Series["5-Period MA"]->Points->Clear();

		this->chart4->Series["Price"]->Points->Clear();
		this->chart4->Series["Regression Line"]->Points->Clear();

		this->chart3->Series["Price"]->IsXValueIndexed = true;
		this->chart4->Series["Price"]->IsXValueIndexed = false;

		this->chart3->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart4->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("wtimonth.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double displayDateVal = yearVal + monthVal;

					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart3->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		/*double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = priceDotStartIndex; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart4->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}*/

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart4->Series["Price"]->Points->AddY(priceInput);

		}

		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart3->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);

			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart4->Series["Regression Line"]->Points->AddXY(i, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Month Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following month.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Month Average with the regression line sloping downwards, denoting that the price is currently going down until the following month.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Month Average with the regression line sloping upwards, denoting that the price is currently going up until the following month.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Month Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following month.";

		}



	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {		//BRENT MONTHLY BUTTON===========================

		this->chart1->Series["Price"]->Points->Clear();
		this->chart1->Series["5-Period MA"]->Points->Clear();

		this->chart2->Series["Price"]->Points->Clear();
		this->chart2->Series["Regression Line"]->Points->Clear();

		this->chart1->Series["Price"]->IsXValueIndexed = true;
		this->chart2->Series["Price"]->IsXValueIndexed = false;

		this->chart1->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart2->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("brentmonth.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double displayDateVal = yearVal + monthVal;

					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart1->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		/*double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = priceDotStartIndex; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart2->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}*/

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart2->Series["Price"]->Points->AddY(priceInput);

		}


		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart1->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);

			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart2->Series["Regression Line"]->Points->AddXY(i, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Month Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following month.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Month Average with the regression line sloping downwards, denoting that the price is currently going down until the following month.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Month Average with the regression line sloping upwards, denoting that the price is currently going up until the following month.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Month Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following month.";

		}



	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {		//BRENT WEEKLY BUTTON==============

		this->chart1->Series["Price"]->Points->Clear();
		this->chart1->Series["5-Period MA"]->Points->Clear();

		this->chart2->Series["Price"]->Points->Clear();
		this->chart2->Series["Regression Line"]->Points->Clear();

		this->chart1->Series["Price"]->IsXValueIndexed = true;
		this->chart2->Series["Price"]->IsXValueIndexed = false;

		this->chart1->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart2->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("brentweek.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double dayVal = (stod(val.substr(8, 2))) / 10000;
					double displayDateVal = yearVal + monthVal + dayVal;

					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart1->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		/*double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = priceDotStartIndex; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart2->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}*/

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart2->Series["Price"]->Points->AddY(priceInput);

		}


		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart1->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);

			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart2->Series["Regression Line"]->Points->AddXY(i, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Week Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following week.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Week Average with the regression line sloping downwards, denoting that the price is currently going down until the following week.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is above the 5-Week Average with the regression line sloping upwards, denoting that the price is currently going up until the following week.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label4->Text = "Brent Crude Oil Price Analysis: Price is below the 5-Week Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following week.";

		}



	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {		//WTI WEEKLY BUTTON==============================

		this->chart3->Series["Price"]->Points->Clear();
		this->chart3->Series["5-Period MA"]->Points->Clear();

		this->chart4->Series["Price"]->Points->Clear();
		this->chart4->Series["Regression Line"]->Points->Clear();

		this->chart3->Series["Price"]->IsXValueIndexed = true;
		this->chart4->Series["Price"]->IsXValueIndexed = false;

		this->chart3->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart4->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("wtiweek.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double dayVal = (stod(val.substr(8, 2))) / 10000;
					double displayDateVal = yearVal + monthVal + dayVal;

					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart3->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		/*double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = priceDotStartIndex; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart4->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}*/

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart4->Series["Price"]->Points->AddY(priceInput);

		}


		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart3->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);
			avgComp = valAvgV[i];
		}

		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart4->Series["Regression Line"]->Points->AddXY(i, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Week Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following week.";

		}

		else if (priceComp < avgComp && m < 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Week Average with the regression line sloping downwards, denoting that the price is currently going down until the following week.";

		}

		else if (priceComp > avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is above the 5-Week Average with the regression line sloping upwards, denoting that the price is currently going up until the following week.";

		}

		else if (priceComp < avgComp && m > 0) {

			this->label5->Text = "WTI Crude Oil Price Analysis: Price is below the 5-Week Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following week.";

		}


	}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {		//PH WEEKLY BUTTON

		this->chart6->Series["Price"]->Points->Clear();
		this->chart6->Series["5-Period MA"]->Points->Clear();

		this->chart5->Series["Price"]->Points->Clear();
		this->chart5->Series["Regression Line"]->Points->Clear();

		this->chart6->Series["Price"]->IsXValueIndexed = true;
		this->chart5->Series["Price"]->IsXValueIndexed = false;

		this->chart6->Series["5-Period MA"]->IsXValueIndexed = true;
		this->chart5->Series["Regression Line"]->IsXValueIndexed = false;

		std::string filename;
		std::ifstream myFile;
		myFile.open("phweek.csv");

		std::string line;

		int columnNum = 1;
		int maxIndex = 0;

		std::vector <double> dateV;
		std::vector <double> priceV;

		while (getline(myFile, line)) {

			std::string val;
			std::stringstream s(line);

			while (getline(s, val, ',')) {

				if (columnNum == 1) {

					double yearVal = stod(val.substr(0, 4));
					double monthVal = (stod(val.substr(5, 2))) / 100;
					double dayVal = (stod(val.substr(8, 2))) / 10000;
					double displayDateVal = yearVal + monthVal + dayVal;

					//date[dateIndex] = val;
					dateV.push_back(displayDateVal);
					columnNum = 2;
					//dateIndex++;

				}

				else if (columnNum == 2) {

					//price[priceIndex] = stod(val);
					priceV.push_back(stod(val));
					columnNum = 1;
					//priceIndex ++;

				}
			}

			maxIndex++;

		}

		myFile.close();

		double priceComp;
		double avgComp;

		//PRICE LINE
		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart6->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);
			priceComp = priceInput;
		}

		//PRICE DOTS

		/*double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = priceDotStartIndex; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart5->Series["Price"]->Points->AddXY(brentFirstYearY, priceInput);

		}*/

		//PRICE DOTS

		double priceDotLength = 24;
		double priceDotStartIndex = maxIndex - priceDotLength;

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart5->Series["Price"]->Points->AddY(priceInput);

		}


		//5 PERIOD MOVING AVG

		std::vector <double> valAvgV;

		for (int i = 0; i < maxIndex; i++) {

			if (i == 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);
				valAvgV.push_back(valAvg);

			}

			else if (i > 4) {

				double valAvg = (priceV[i] + priceV[i - 1] + priceV[i - 2] + priceV[i - 3] + priceV[i - 4]) / 5;
				valAvgV.push_back(valAvg);

			}
		}

		for (int i = 0; i < maxIndex; i++) {

			double priceInput = priceV[i];
			double brentFirstYearY = dateV[i];
			this->chart6->Series["5-Period MA"]->Points->AddXY(brentFirstYearY, valAvgV[i]);
			avgComp = valAvgV[i];
		}


		//5 YEAR REGRESSION TREND

		double totalX = 0;
		double totalY = 0;

		double regressionLength = 24;
		double regressionStartIndex = maxIndex - regressionLength;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalX = totalX + i;
			totalY = totalY + priceV[i];

			std::cout << "x: " << i << std::endl;
			std::cout << "y: " << priceV[i] << std::endl;

		}

		double meanX = totalX / (maxIndex - regressionStartIndex);
		double meanY = totalY / (maxIndex - regressionStartIndex);

		std::cout << "x total:" << totalX << std::endl;
		std::cout << "y total:" << totalY << std::endl;

		std::cout << "x mean:" << meanX << std::endl;
		std::cout << "y mean:" << meanY << std::endl;

		double totalXminXBsqrd = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBsqrd = totalXminXBsqrd + pow((i - meanX), 2);
			std::cout << "(x-xb)^2: " << totalXminXBsqrd << std::endl;

		}

		double totalXminXBmulYminYB = 0;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			totalXminXBmulYminYB = totalXminXBmulYminYB + ((i - meanX) * (priceV[i] - meanY));

		}

		double m = totalXminXBmulYminYB / totalXminXBsqrd;

		double b = meanY - (m * meanX);

		std::cout << "m: " << m << std::endl;
		std::cout << "b: " << b << std::endl;

		for (int i = regressionStartIndex; i < maxIndex; i++) {

			double y = (m * i) + b;

			double priceInput = priceV[i];
			int brentFirstYearY = dateV[i];
			this->chart5->Series["Regression Line"]->Points->AddXY(i, y);

		}

		if (priceComp > avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Week Average with the regression line sloping downwards, denoting a short price increase before continuing down in the following week.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following week.";
		}

		else if (priceComp < avgComp && m < 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Week Average with the regression line sloping downwards, denoting that the price is currently going down until the following week.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following week.";
		}

		else if (priceComp > avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is above the 5-Week Average with the regression line sloping upwards, denoting that the price is currently going up until the following week.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following week.";
		}

		else if (priceComp < avgComp && m > 0) {

			this->label6->Text = "Philippine Petrol Price Analysis: Price is below the 5-Week Average with the regression line sloping upwards, denoting a short price decrease before continuing up in the following week.";
			this->label7->Text = "Philippine Petrol prices may still follow the price direction of Brent and WTI Oil in the following week.";
		}



	}
};
}
