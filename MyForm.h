#pragma once
#include "Carta.h"
#include "Pila.h"

namespace Laboratorio3JavierMorales1210219 {

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
	private: System::Windows::Forms::Button^ start_btn;




	private: System::Windows::Forms::RichTextBox^ txt_orden;
	private: System::Windows::Forms::RichTextBox^ txt_desorden;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ txt_pila1;
	private: System::Windows::Forms::RichTextBox^ txt_pila2;
	private: System::Windows::Forms::RichTextBox^ txt_pila3;
	private: System::Windows::Forms::RichTextBox^ txt_pila4;
	private: System::Windows::Forms::RichTextBox^ txt_pila5;
	private: System::Windows::Forms::RichTextBox^ txt_pila6;
	private: System::Windows::Forms::RichTextBox^ txt_pila7;
	private: System::Windows::Forms::Label^ label3;






	private: System::Windows::Forms::ComboBox^ origen_txt;
	private: System::Windows::Forms::ComboBox^ destino_txt;


	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::TextBox^ cantidad_txt;

	private: System::Windows::Forms::Label^ label12;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::ComboBox^ Destino_de_baraja;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ txt_restantes_baraja;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ txt_cima_baraja;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ p1_nelementos;
	private: System::Windows::Forms::Label^ p2_nelementos;
	private: System::Windows::Forms::Label^ p3_nelementos;
	private: System::Windows::Forms::Label^ p4_nelementos;
	private: System::Windows::Forms::Label^ p5_nelementos;
	private: System::Windows::Forms::Label^ p6_nelementos;
	private: System::Windows::Forms::Label^ p7_nelementos;

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
			this->start_btn = (gcnew System::Windows::Forms::Button());
			this->txt_orden = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_desorden = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txt_pila1 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila2 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila3 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila4 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila5 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila6 = (gcnew System::Windows::Forms::RichTextBox());
			this->txt_pila7 = (gcnew System::Windows::Forms::RichTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->origen_txt = (gcnew System::Windows::Forms::ComboBox());
			this->destino_txt = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->cantidad_txt = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->Destino_de_baraja = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_cima_baraja = (gcnew System::Windows::Forms::Label());
			this->txt_restantes_baraja = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->p1_nelementos = (gcnew System::Windows::Forms::Label());
			this->p2_nelementos = (gcnew System::Windows::Forms::Label());
			this->p3_nelementos = (gcnew System::Windows::Forms::Label());
			this->p4_nelementos = (gcnew System::Windows::Forms::Label());
			this->p5_nelementos = (gcnew System::Windows::Forms::Label());
			this->p6_nelementos = (gcnew System::Windows::Forms::Label());
			this->p7_nelementos = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// start_btn
			// 
			this->start_btn->Location = System::Drawing::Point(677, 432);
			this->start_btn->Name = L"start_btn";
			this->start_btn->Size = System::Drawing::Size(99, 39);
			this->start_btn->TabIndex = 0;
			this->start_btn->Text = L"INICIO";
			this->start_btn->UseVisualStyleBackColor = true;
			this->start_btn->Click += gcnew System::EventHandler(this, &MyForm::Start_btn_Click);
			// 
			// txt_orden
			// 
			this->txt_orden->Location = System::Drawing::Point(34, 18);
			this->txt_orden->Name = L"txt_orden";
			this->txt_orden->Size = System::Drawing::Size(10, 10);
			this->txt_orden->TabIndex = 5;
			this->txt_orden->Text = L"";
			this->txt_orden->Visible = false;
			// 
			// txt_desorden
			// 
			this->txt_desorden->Location = System::Drawing::Point(762, 18);
			this->txt_desorden->Name = L"txt_desorden";
			this->txt_desorden->Size = System::Drawing::Size(10, 10);
			this->txt_desorden->TabIndex = 6;
			this->txt_desorden->Text = L"";
			this->txt_desorden->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(677, 478);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 39);
			this->button1->TabIndex = 7;
			this->button1->Text = L"MOSTRAR PILAS";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// txt_pila1
			// 
			this->txt_pila1->Location = System::Drawing::Point(32, 94);
			this->txt_pila1->Name = L"txt_pila1";
			this->txt_pila1->Size = System::Drawing::Size(100, 273);
			this->txt_pila1->TabIndex = 8;
			this->txt_pila1->Text = L"";
			// 
			// txt_pila2
			// 
			this->txt_pila2->Location = System::Drawing::Point(138, 94);
			this->txt_pila2->Name = L"txt_pila2";
			this->txt_pila2->Size = System::Drawing::Size(100, 273);
			this->txt_pila2->TabIndex = 9;
			this->txt_pila2->Text = L"";
			// 
			// txt_pila3
			// 
			this->txt_pila3->Location = System::Drawing::Point(246, 94);
			this->txt_pila3->Name = L"txt_pila3";
			this->txt_pila3->Size = System::Drawing::Size(100, 273);
			this->txt_pila3->TabIndex = 10;
			this->txt_pila3->Text = L"";
			// 
			// txt_pila4
			// 
			this->txt_pila4->Location = System::Drawing::Point(352, 94);
			this->txt_pila4->Name = L"txt_pila4";
			this->txt_pila4->Size = System::Drawing::Size(100, 273);
			this->txt_pila4->TabIndex = 11;
			this->txt_pila4->Text = L"";
			// 
			// txt_pila5
			// 
			this->txt_pila5->Location = System::Drawing::Point(458, 94);
			this->txt_pila5->Name = L"txt_pila5";
			this->txt_pila5->Size = System::Drawing::Size(100, 273);
			this->txt_pila5->TabIndex = 12;
			this->txt_pila5->Text = L"";
			// 
			// txt_pila6
			// 
			this->txt_pila6->Location = System::Drawing::Point(564, 94);
			this->txt_pila6->Name = L"txt_pila6";
			this->txt_pila6->Size = System::Drawing::Size(100, 273);
			this->txt_pila6->TabIndex = 13;
			this->txt_pila6->Text = L"";
			// 
			// txt_pila7
			// 
			this->txt_pila7->Location = System::Drawing::Point(670, 94);
			this->txt_pila7->Name = L"txt_pila7";
			this->txt_pila7->Size = System::Drawing::Size(100, 273);
			this->txt_pila7->TabIndex = 14;
			this->txt_pila7->Text = L"";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(74, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 28);
			this->label3->TabIndex = 15;
			this->label3->Text = L"1";
			// 
			// origen_txt
			// 
			this->origen_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->origen_txt->FormattingEnabled = true;
			this->origen_txt->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->origen_txt->Location = System::Drawing::Point(13, 58);
			this->origen_txt->Name = L"origen_txt";
			this->origen_txt->Size = System::Drawing::Size(100, 21);
			this->origen_txt->TabIndex = 22;
			// 
			// destino_txt
			// 
			this->destino_txt->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->destino_txt->FormattingEnabled = true;
			this->destino_txt->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->destino_txt->Location = System::Drawing::Point(118, 59);
			this->destino_txt->Name = L"destino_txt";
			this->destino_txt->Size = System::Drawing::Size(100, 21);
			this->destino_txt->TabIndex = 23;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 42);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"ORIGEN";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(115, 42);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(55, 13);
			this->label11->TabIndex = 25;
			this->label11->Text = L"DESTINO";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 37);
			this->button2->TabIndex = 26;
			this->button2->Text = L"MOVER";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// cantidad_txt
			// 
			this->cantidad_txt->Location = System::Drawing::Point(224, 59);
			this->cantidad_txt->Name = L"cantidad_txt";
			this->cantidad_txt->Size = System::Drawing::Size(100, 20);
			this->cantidad_txt->TabIndex = 28;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(223, 43);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(62, 13);
			this->label12->TabIndex = 29;
			this->label12->Text = L"CANTIDAD";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(145, 50);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 29);
			this->button3->TabIndex = 31;
			this->button3->Text = L"AGREGAR CARTA";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::Button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(39, 39);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(55, 13);
			this->label14->TabIndex = 32;
			this->label14->Text = L"DESTINO";
			// 
			// Destino_de_baraja
			// 
			this->Destino_de_baraja->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->Destino_de_baraja->FormattingEnabled = true;
			this->Destino_de_baraja->Items->AddRange(gcnew cli::array< System::Object^  >(7) { L"1", L"2", L"3", L"4", L"5", L"6", L"7" });
			this->Destino_de_baraja->Location = System::Drawing::Point(19, 55);
			this->Destino_de_baraja->Name = L"Destino_de_baraja";
			this->Destino_de_baraja->Size = System::Drawing::Size(100, 21);
			this->Destino_de_baraja->TabIndex = 33;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->origen_txt);
			this->groupBox1->Controls->Add(this->destino_txt);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->cantidad_txt);
			this->groupBox1->Location = System::Drawing::Point(326, 416);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(338, 151);
			this->groupBox1->TabIndex = 34;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Movimiento entre pilas";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->txt_cima_baraja);
			this->groupBox2->Controls->Add(this->txt_restantes_baraja);
			this->groupBox2->Controls->Add(this->Destino_de_baraja);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Location = System::Drawing::Point(38, 416);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(279, 151);
			this->groupBox2->TabIndex = 35;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Baraja";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(75, 135);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 13);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Siguiente carta:";
			this->label2->Visible = false;
			// 
			// txt_cima_baraja
			// 
			this->txt_cima_baraja->AutoSize = true;
			this->txt_cima_baraja->Location = System::Drawing::Point(154, 135);
			this->txt_cima_baraja->Name = L"txt_cima_baraja";
			this->txt_cima_baraja->Size = System::Drawing::Size(27, 13);
			this->txt_cima_baraja->TabIndex = 35;
			this->txt_cima_baraja->Text = L"N/A";
			this->txt_cima_baraja->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->txt_cima_baraja->Visible = false;
			// 
			// txt_restantes_baraja
			// 
			this->txt_restantes_baraja->AutoSize = true;
			this->txt_restantes_baraja->Location = System::Drawing::Point(66, 94);
			this->txt_restantes_baraja->Name = L"txt_restantes_baraja";
			this->txt_restantes_baraja->Size = System::Drawing::Size(153, 13);
			this->txt_restantes_baraja->TabIndex = 34;
			this->txt_restantes_baraja->Text = L"Quedan 52 cartas en la baraja.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(178, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 28);
			this->label4->TabIndex = 36;
			this->label4->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(285, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 28);
			this->label5->TabIndex = 37;
			this->label5->Text = L"3";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(389, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 28);
			this->label6->TabIndex = 38;
			this->label6->Text = L"4";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(494, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 28);
			this->label7->TabIndex = 39;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(602, 63);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 28);
			this->label8->TabIndex = 40;
			this->label8->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(710, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 28);
			this->label9->TabIndex = 41;
			this->label9->Text = L"7";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(331, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 38);
			this->label1->TabIndex = 42;
			this->label1->Text = L"Solitario";
			// 
			// p1_nelementos
			// 
			this->p1_nelementos->AutoSize = true;
			this->p1_nelementos->Location = System::Drawing::Point(57, 370);
			this->p1_nelementos->Name = L"p1_nelementos";
			this->p1_nelementos->Size = System::Drawing::Size(41, 13);
			this->p1_nelementos->TabIndex = 43;
			this->p1_nelementos->Text = L"label13";
			// 
			// p2_nelementos
			// 
			this->p2_nelementos->AutoSize = true;
			this->p2_nelementos->Location = System::Drawing::Point(161, 370);
			this->p2_nelementos->Name = L"p2_nelementos";
			this->p2_nelementos->Size = System::Drawing::Size(41, 13);
			this->p2_nelementos->TabIndex = 44;
			this->p2_nelementos->Text = L"label15";
			// 
			// p3_nelementos
			// 
			this->p3_nelementos->AutoSize = true;
			this->p3_nelementos->Location = System::Drawing::Point(287, 370);
			this->p3_nelementos->Name = L"p3_nelementos";
			this->p3_nelementos->Size = System::Drawing::Size(41, 13);
			this->p3_nelementos->TabIndex = 45;
			this->p3_nelementos->Text = L"label16";
			// 
			// p4_nelementos
			// 
			this->p4_nelementos->AutoSize = true;
			this->p4_nelementos->Location = System::Drawing::Point(391, 370);
			this->p4_nelementos->Name = L"p4_nelementos";
			this->p4_nelementos->Size = System::Drawing::Size(41, 13);
			this->p4_nelementos->TabIndex = 46;
			this->p4_nelementos->Text = L"label17";
			// 
			// p5_nelementos
			// 
			this->p5_nelementos->AutoSize = true;
			this->p5_nelementos->Location = System::Drawing::Point(496, 370);
			this->p5_nelementos->Name = L"p5_nelementos";
			this->p5_nelementos->Size = System::Drawing::Size(41, 13);
			this->p5_nelementos->TabIndex = 47;
			this->p5_nelementos->Text = L"label18";
			// 
			// p6_nelementos
			// 
			this->p6_nelementos->AutoSize = true;
			this->p6_nelementos->Location = System::Drawing::Point(595, 370);
			this->p6_nelementos->Name = L"p6_nelementos";
			this->p6_nelementos->Size = System::Drawing::Size(41, 13);
			this->p6_nelementos->TabIndex = 48;
			this->p6_nelementos->Text = L"label19";
			// 
			// p7_nelementos
			// 
			this->p7_nelementos->AutoSize = true;
			this->p7_nelementos->Location = System::Drawing::Point(702, 370);
			this->p7_nelementos->Name = L"p7_nelementos";
			this->p7_nelementos->Size = System::Drawing::Size(41, 13);
			this->p7_nelementos->TabIndex = 49;
			this->p7_nelementos->Text = L"label20";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(798, 601);
			this->Controls->Add(this->p7_nelementos);
			this->Controls->Add(this->p6_nelementos);
			this->Controls->Add(this->p5_nelementos);
			this->Controls->Add(this->p4_nelementos);
			this->Controls->Add(this->p3_nelementos);
			this->Controls->Add(this->p2_nelementos);
			this->Controls->Add(this->p1_nelementos);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txt_pila7);
			this->Controls->Add(this->txt_pila6);
			this->Controls->Add(this->txt_pila5);
			this->Controls->Add(this->txt_pila4);
			this->Controls->Add(this->txt_pila3);
			this->Controls->Add(this->txt_pila2);
			this->Controls->Add(this->txt_pila1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_desorden);
			this->Controls->Add(this->txt_orden);
			this->Controls->Add(this->start_btn);
			this->Name = L"MyForm";
			this->Text = L"Solitario simple";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		Pila* baraja = new Pila();
		Pila* pila_1 = new Pila();
		Pila* pila_2 = new Pila();
		Pila* pila_3 = new Pila();
		Pila* pila_4 = new Pila();
		Pila* pila_5 = new Pila();
		Pila* pila_6 = new Pila();
		Pila* pila_7 = new Pila();

	private: System::Void Start_btn_Click(System::Object^ sender, System::EventArgs^ e)
	{
		button2->Enabled = true;
		button3->Enabled = true;
		Carta Mazo[52];
		int pos_actual = 0;
		for (int i = 1; i < 3; i++)
		{
			for (int j = 1; j < 27; j++)
			{
				Mazo[pos_actual].Crear_Carta(j, i);
				pos_actual++;
			}
		}

		Carta Mazo_Desordenado[52];

		for (int i = 0; i < 52; i++)
		{
			Mazo_Desordenado[i] = Mazo[i];
		}

		Random^ elRandom = gcnew Random;

		for (int r = 0; r < 50; r++)
		{
			int random_uno;
			int random_dos;
			do
			{
				random_uno = elRandom->Next(0, 52);
				random_dos = elRandom->Next(0, 52);
			} while (random_uno == random_dos);
			Carta Temp = Mazo_Desordenado[random_uno];
			Mazo_Desordenado[random_uno] = Mazo_Desordenado[random_dos];
			Mazo_Desordenado[random_dos] = Temp;
		}

		String^ orden ="";
		String^ desorden;
		for (int i = 0; i < 52; i++)
		{
			orden += "\n" + Mazo[i].Mostrar_Carta();
			desorden += "\n" + Mazo_Desordenado[i].Mostrar_Carta();
		}
		for (int i = 0; i < 52; i++)
		{
			baraja->Apilar(Mazo_Desordenado[i]);
		}
		txt_orden->Text = orden;
		txt_desorden->Text = desorden;
		

		for (int i = 0; i < 7; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 6)
			{
				P.mostrar = true;
			}
			pila_1->Apilar(P);
		}
		txt_pila1->Text = pila_1->ObtenerPila(pila_1);

		for (int i = 0; i < 6; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 5)
			{
				P.mostrar = true;
			}
			pila_2->Apilar(P);
		}
		txt_pila2->Text = pila_2->ObtenerPila(pila_2);

		for (int i = 0; i < 5; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 4)
			{
				P.mostrar = true;
			}
			pila_3->Apilar(P);
		}
		txt_pila3->Text = pila_3->ObtenerPila(pila_3);

		for (int i = 0; i < 4; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 3)
			{
				P.mostrar = true;
			}
			pila_4->Apilar(P);
		}
		txt_pila4->Text = pila_4->ObtenerPila(pila_4);

		for (int i = 0; i < 3; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 2)
			{
				P.mostrar = true;
			}
			pila_5->Apilar(P);
		}
		txt_pila5->Text = pila_5->ObtenerPila(pila_5);

		for (int i = 0; i < 2; i++)
		{
			Carta P = baraja->Desapilar();
			if (i == 1)
			{
				P.mostrar = true;
			}
			pila_6->Apilar(P);
		}
		txt_pila6->Text = pila_6->ObtenerPila(pila_6);

		for (int i = 0; i < 1; i++)
		{
			Carta P = baraja->Desapilar();
			P.mostrar = true;
			pila_7->Apilar(P);
		}
		txt_pila7->Text = pila_7->ObtenerPila(pila_7);
		start_btn->Enabled = false;
		Carta Cima_Baraja = baraja->ObtenerCima();
		String^ color;
		if (Cima_Baraja.color_carta == 1)
		{
			color = "Rojo";
		}
		else
		{
			color = "Negro";
		}
		txt_cima_baraja->Text = Cima_Baraja.numero_carta + " " + color;
		label2->Visible = true;
		txt_cima_baraja->Visible = true;
		txt_restantes_baraja->Text = "Quedan " + baraja->Elementos_en_la_pila + " cartas en la baraja.";
		p1_nelementos->Text = "Cartas: " + pila_1->Elementos_en_la_pila;
		p2_nelementos->Text = "Cartas: " + pila_2->Elementos_en_la_pila;
		p3_nelementos->Text = "Cartas: " + pila_3->Elementos_en_la_pila;
		p4_nelementos->Text = "Cartas: " + pila_4->Elementos_en_la_pila;
		p5_nelementos->Text = "Cartas: " + pila_5->Elementos_en_la_pila;
		p6_nelementos->Text = "Cartas: " + pila_6->Elementos_en_la_pila;
		p7_nelementos->Text = "Cartas: " + pila_7->Elementos_en_la_pila;

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		button2->Enabled = false;
		button3->Enabled = false;
		p1_nelementos->Text = "Cartas: " + pila_1->Elementos_en_la_pila;
		p2_nelementos->Text = "Cartas: " + pila_2->Elementos_en_la_pila;
		p3_nelementos->Text = "Cartas: " + pila_3->Elementos_en_la_pila;
		p4_nelementos->Text = "Cartas: " + pila_4->Elementos_en_la_pila;
		p5_nelementos->Text = "Cartas: " + pila_5->Elementos_en_la_pila;
		p6_nelementos->Text = "Cartas: " + pila_6->Elementos_en_la_pila;
		p7_nelementos->Text = "Cartas: " + pila_7->Elementos_en_la_pila;
	}
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	System::Windows::Forms::MessageBox::Show("Baraja\n" + baraja->ObtenerPila(baraja));
	System::Windows::Forms::MessageBox::Show("Pila 1\n" + pila_1->ObtenerPila(pila_1));
	System::Windows::Forms::MessageBox::Show("Pila 2\n" + pila_2->ObtenerPila(pila_2));
	System::Windows::Forms::MessageBox::Show("Pila 3\n" + pila_3->ObtenerPila(pila_3));
	System::Windows::Forms::MessageBox::Show("Pila 4\n" + pila_4->ObtenerPila(pila_4));
	System::Windows::Forms::MessageBox::Show("Pila 5\n" + pila_5->ObtenerPila(pila_5));
	System::Windows::Forms::MessageBox::Show("Pila 6\n" + pila_6->ObtenerPila(pila_6));
	System::Windows::Forms::MessageBox::Show("Pila 7\n" + pila_7->ObtenerPila(pila_7));
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int cant;
	int origen;
	int destino;
	try
	{
		cant = Convert::ToInt32(cantidad_txt->Text);
		origen = Convert::ToInt32(origen_txt->Text);
		destino = Convert::ToInt32(destino_txt->Text);
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Error. No hay valores de origen, destino o cantidad seleccionados.");
	}
	int max;
	switch (origen)
	{
	case 1:
		max = pila_1->Elementos_en_la_pila;
		break;
	case 2:
		max = pila_2->Elementos_en_la_pila;
		break;
	case 3:
		max = pila_3->Elementos_en_la_pila;
		break;
	case 4:
		max = pila_4->Elementos_en_la_pila;
		break;
	case 5:
		max = pila_5->Elementos_en_la_pila;
		break;
	case 6:
		max = pila_6->Elementos_en_la_pila;
		break;
	case 7:
		max = pila_7->Elementos_en_la_pila;
	}
	if (cant <= max)
	{
		Pila* Auxiliar_Mover = new Pila();
		for (int i = 0; i < cant; i++)
		{
			Carta T;
			switch (origen)
			{
			case 1:
				T = pila_1->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_1->ObtenerCima();
				}
				catch (...){}
				break;
			case 2:
				T = pila_2->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_2->ObtenerCima();
				}
				catch (...) {}
				break;
			case 3:
				T = pila_3->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_3->ObtenerCima();
				}
				catch (...) {}
				break;
			case 4:
				T = pila_4->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_4->ObtenerCima();
				}
				catch (...) {}
				break;
			case 5:
				T = pila_5->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_5->ObtenerCima();
				}
				catch (...) {}
				break;
			case 6:
				T = pila_6->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_6->ObtenerCima();
				}
				catch (...) {}
				break;
			case 7:
				T = pila_7->Desapilar();
				T.mostrar = true;
				Auxiliar_Mover->Apilar(T);
				try
				{
					pila_7->ObtenerCima();
				}
				catch (...) {}
				break;
			}
		}
		for (int j = 0; j < cant; j++)
		{
			switch (destino)
			{
			case 1:
				pila_1->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 2:
				pila_2->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 3:
				pila_3->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 4:
				pila_4->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 5:
				pila_5->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 6:
				pila_6->Apilar(Auxiliar_Mover->Desapilar());
				break;
			case 7:
				pila_7->Apilar(Auxiliar_Mover->Desapilar());
				break;
			}
		}
		


	}
	else
	{
		System::Windows::Forms::MessageBox::Show("Error. Ese movimiento no es posible, la pila " + origen + " no tiene " + cant + " cartas. Vuelve a intentarlo.");
	}
	txt_pila1->Text = pila_1->ObtenerPila(pila_1);
	txt_pila2->Text = pila_2->ObtenerPila(pila_2);
	txt_pila3->Text = pila_3->ObtenerPila(pila_3);
	txt_pila4->Text = pila_4->ObtenerPila(pila_4);
	txt_pila5->Text = pila_5->ObtenerPila(pila_5);
	txt_pila6->Text = pila_6->ObtenerPila(pila_6);
	txt_pila7->Text = pila_7->ObtenerPila(pila_7);
	p1_nelementos->Text = "Cartas: " + pila_1->Elementos_en_la_pila;
	p2_nelementos->Text = "Cartas: " + pila_2->Elementos_en_la_pila;
	p3_nelementos->Text = "Cartas: " + pila_3->Elementos_en_la_pila;
	p4_nelementos->Text = "Cartas: " + pila_4->Elementos_en_la_pila;
	p5_nelementos->Text = "Cartas: " + pila_5->Elementos_en_la_pila;
	p6_nelementos->Text = "Cartas: " + pila_6->Elementos_en_la_pila;
	p7_nelementos->Text = "Cartas: " + pila_7->Elementos_en_la_pila;

	//COMPROBACIÓN PILA 1 INICIO
	int comprobaciones_p1 = 0;
	if (pila_1->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_1->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_1->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p1++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p1++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p1++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_1->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p1 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 1 FINAL

	//COMPROBACIÓN PILA 2 INICIO
	int comprobaciones_p2 = 0;
	if (pila_2->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_2->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_2->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p2++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p2++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p2++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_2->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p2 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 2 FINAL

	//COMPROBACIÓN PILA 3 INICIO
	int comprobaciones_p3 = 0;
	if (pila_3->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_3->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_3->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p3++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p3++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p3++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_3->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p3 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 3 FINAL

	//COMPROBACIÓN PILA 4 INICIO
	int comprobaciones_p4 = 0;
	if (pila_4->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_4->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_4->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p4++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p4++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p4++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_4->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p4 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 4 FINAL

	//COMPROBACIÓN PILA 5 INICIO
	int comprobaciones_p5 = 0;
	if (pila_5->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_5->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_5->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p5++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p5++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p5++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_5->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p5 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 5 FINAL

	//COMPROBACIÓN PILA 6 INICIO
	int comprobaciones_p6 = 0;
	if (pila_6->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_6->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_6->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p6++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p6++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p6++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_6->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p6 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 6 FINAL

	//COMPROBACIÓN PILA 7 INICIO
	int comprobaciones_p7 = 0;
	if (pila_7->Elementos_en_la_pila >= 5)
	{
		Carta CimaOriginal = pila_7->Desapilar();
		int color_o = CimaOriginal.color_carta;
		int valor_o = CimaOriginal.numero_carta;
		Pila* Pila_Temporal = new Pila();
		for (int i = 0; i < 4; i++)
		{
			Pila_Temporal->Apilar(CimaOriginal);
			CimaOriginal = pila_7->Desapilar();
			if (color_o == 1 && CimaOriginal.color_carta == 2)
			{
				comprobaciones_p7++;
			}
			if (color_o == 2 && CimaOriginal.color_carta == 1)
			{
				comprobaciones_p7++;
			}
			if ((valor_o + 1) == CimaOriginal.numero_carta)
			{
				comprobaciones_p7++;
			}
			color_o = CimaOriginal.color_carta;
			valor_o = CimaOriginal.numero_carta;
		}
		Pila_Temporal->Apilar(CimaOriginal);
		for (int j = 0; j < 5; j++)
		{
			pila_7->Apilar(Pila_Temporal->Desapilar());
		}

	}
	if (comprobaciones_p7 == 8)
	{
		System::Windows::Forms::MessageBox::Show("Ganó. Felicidades.");
		start_btn->Enabled = false;
		button3->Enabled = false;
		button2->Enabled = false;
	}
	//COMPROBACIÓN PILA 7 FINAL

	txt_pila1->Text = pila_1->ObtenerPila(pila_1);
	txt_pila2->Text = pila_2->ObtenerPila(pila_2);
	txt_pila3->Text = pila_3->ObtenerPila(pila_3);
	txt_pila4->Text = pila_4->ObtenerPila(pila_4);
	txt_pila5->Text = pila_5->ObtenerPila(pila_5);
	txt_pila6->Text = pila_6->ObtenerPila(pila_6);
	txt_pila7->Text = pila_7->ObtenerPila(pila_7);
	

}
private: System::Void Label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Carta C;
	int destino;
	try
	{
		destino = Convert::ToInt32(Destino_de_baraja->Text);
		C = baraja->Desapilar();
		C.mostrar = true;
		switch (destino)
		{
		case 1:
			pila_1->Apilar(C);
			break;
		case 2:
			pila_2->Apilar(C);
			break;
		case 3:
			pila_3->Apilar(C);
			break;
		case 4:
			pila_4->Apilar(C);
			break;
		case 5:
			pila_5->Apilar(C);
			break;
		case 6:
			pila_6->Apilar(C);
			break;
		case 7:
			pila_7->Apilar(C);
			break;
		}
		txt_pila1->Text = pila_1->ObtenerPila(pila_1);
		txt_pila2->Text = pila_2->ObtenerPila(pila_2);
		txt_pila3->Text = pila_3->ObtenerPila(pila_3);
		txt_pila4->Text = pila_4->ObtenerPila(pila_4);
		txt_pila5->Text = pila_5->ObtenerPila(pila_5);
		txt_pila6->Text = pila_6->ObtenerPila(pila_6);
		txt_pila7->Text = pila_7->ObtenerPila(pila_7);
		if (baraja->Elementos_en_la_pila == 0)
		{
			System::Windows::Forms::MessageBox::Show("Se han acabado las cartas en la baraja.");
			button3->Enabled = false;
			label2->Visible = false;
			txt_cima_baraja->Visible = false;
		}
		txt_restantes_baraja->Text = "Quedan " + baraja->Elementos_en_la_pila + " cartas en la baraja.";
		Carta Cima_Baraja = baraja->ObtenerCima();
		String^ color;
		if (Cima_Baraja.color_carta == 1)
		{
			color = "Rojo";
		}
		else
		{
			color = "Negro";
		}
		txt_cima_baraja->Text = Cima_Baraja.numero_carta + " " + color;
		p1_nelementos->Text = "Cartas: " + pila_1->Elementos_en_la_pila;
		p2_nelementos->Text = "Cartas: " + pila_2->Elementos_en_la_pila;
		p3_nelementos->Text = "Cartas: " + pila_3->Elementos_en_la_pila;
		p4_nelementos->Text = "Cartas: " + pila_4->Elementos_en_la_pila;
		p5_nelementos->Text = "Cartas: " + pila_5->Elementos_en_la_pila;
		p6_nelementos->Text = "Cartas: " + pila_6->Elementos_en_la_pila;
		p7_nelementos->Text = "Cartas:  " + pila_7->Elementos_en_la_pila;
	}
	catch (...)
	{
		System::Windows::Forms::MessageBox::Show("Error. Ingresa un destino.");
	}

}
};
}
