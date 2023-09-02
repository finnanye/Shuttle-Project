#pragma once

namespace buttonTime {

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

		// which stage you are in
		int currentStage;

		// if correct round input is given
		bool round1complete = false;
		bool round2complete = false;
		bool round3complete = false;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ introp1;
	private: System::Windows::Forms::Label^ introp2;
	private: System::Windows::Forms::Label^ StageDirections;

	private: System::Windows::Forms::Label^ StageP;
	private: System::Windows::Forms::TextBox^ inputBox;
	private: System::Windows::Forms::Label^ stage1lock;
	private: System::Windows::Forms::Label^ stage2lock;
	private: System::Windows::Forms::Label^ stage3lock;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ stage3out;
	private: System::Windows::Forms::Button^ finish;
	private: System::Windows::Forms::Button^ hint1;
	private: System::Windows::Forms::Button^ hint2;
	private: System::Windows::Forms::Button^ hint3;
	private: System::Windows::Forms::Label^ hint;



	private: System::Windows::Forms::Label^ introp3;


	public:

		// function makes stage buttons disappear and menu button appear
		void stageButtons() {
			this->StageDirections->Visible = true;
			this->StageP->Visible = true;			
			this->button1->Enabled = false;
			this->button1->Visible = false;
			this->button2->Enabled = false;
			this->button2->Visible = false;
			this->button3->Enabled = false;
			this->button3->Visible = false;
			this->Menu->Enabled = true;
			this->Menu->Visible = true;
			this->pictureBox1->Visible = false;

			this->inputBox->Visible = true;
			this->inputBox->Enabled = true;
			this->inputBox->Text = L"";

			this->stage1lock->Visible = false;
			this->stage2lock->Visible = false;
			this->stage3lock->Visible = false;

			this->panel1->Visible = false;

			this->hint1->Visible = true;
			this->hint1->Enabled = true;
			this->hint2->Visible = true;
			this->hint3->Visible = true;

		}

		void menuSettings() {
			this->pictureBox1->Visible = true;
			this->pictureBox1->Enabled = true;
			this->button1->Enabled = true;
			this->button1->Visible = true;
			this->button2->Enabled = round1complete;
			this->button2->Visible = true;
			this->button3->Enabled = round1complete && round2complete;
			this->button3->Visible = true;
			this->Menu->Enabled = false;
			this->Menu->Visible = false;
			this->Menu->Text = L"Menu";
			this->Menu->Location = System::Drawing::Point(12, 12);
			this->introp1->Visible = false;
			this->introp2->Visible = false;
			this->introp3->Visible = false;
			this->StageDirections->Visible = false;
			this->StageP->Visible = false;
			this->inputBox->Visible = false;
			this->inputBox->Enabled = false;
			this->panel1->Visible = false;
			this->hint1->Visible = false;
			this->hint2->Visible = false;
			this->hint3->Visible = false;			
			this->hint1->Enabled = false;
			this->hint2->Enabled = false;
			this->hint3->Enabled = false;
			this->hint->Visible = false;
		}

	public:


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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ Menu;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Menu = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->introp1 = (gcnew System::Windows::Forms::Label());
			this->introp2 = (gcnew System::Windows::Forms::Label());
			this->introp3 = (gcnew System::Windows::Forms::Label());
			this->StageDirections = (gcnew System::Windows::Forms::Label());
			this->StageP = (gcnew System::Windows::Forms::Label());
			this->inputBox = (gcnew System::Windows::Forms::TextBox());
			this->stage1lock = (gcnew System::Windows::Forms::Label());
			this->stage2lock = (gcnew System::Windows::Forms::Label());
			this->stage3lock = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->stage3out = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->finish = (gcnew System::Windows::Forms::Button());
			this->hint1 = (gcnew System::Windows::Forms::Button());
			this->hint2 = (gcnew System::Windows::Forms::Button());
			this->hint3 = (gcnew System::Windows::Forms::Button());
			this->hint = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(196, 68);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(109, 52);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Stage 1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(701, 68);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(109, 52);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Stage 2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(1199, 68);
			this->button3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 52);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Stage 3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// Menu
			// 
			this->Menu->BackColor = System::Drawing::SystemColors::GrayText;
			this->Menu->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Menu->Location = System::Drawing::Point(725, 530);
			this->Menu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Menu->Name = L"Menu";
			this->Menu->Size = System::Drawing::Size(64, 34);
			this->Menu->TabIndex = 3;
			this->Menu->Text = L"START";
			this->Menu->UseVisualStyleBackColor = false;
			this->Menu->Click += gcnew System::EventHandler(this, &MyForm::Menu_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox1->Enabled = false;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(348, -42);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(845, 732);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// introp1
			// 
			this->introp1->AutoSize = true;
			this->introp1->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introp1->ForeColor = System::Drawing::SystemColors::Control;
			this->introp1->Location = System::Drawing::Point(91, 103);
			this->introp1->Name = L"introp1";
			this->introp1->Size = System::Drawing::Size(608, 96);
			this->introp1->TabIndex = 5;
			this->introp1->Text = resources->GetString(L"introp1.Text");
			this->introp1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// introp2
			// 
			this->introp2->AutoSize = true;
			this->introp2->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introp2->ForeColor = System::Drawing::SystemColors::Control;
			this->introp2->Location = System::Drawing::Point(91, 266);
			this->introp2->Name = L"introp2";
			this->introp2->Size = System::Drawing::Size(668, 72);
			this->introp2->TabIndex = 6;
			this->introp2->Text = resources->GetString(L"introp2.Text");
			this->introp2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// introp3
			// 
			this->introp3->AutoSize = true;
			this->introp3->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introp3->ForeColor = System::Drawing::SystemColors::Control;
			this->introp3->Location = System::Drawing::Point(91, 423);
			this->introp3->Name = L"introp3";
			this->introp3->Size = System::Drawing::Size(646, 72);
			this->introp3->TabIndex = 7;
			this->introp3->Text = L"The output you see here on your screen will guide you through this investigation\r"
				L"\nand track your progress. If you are ready to get started click start to see the"
				L" \r\nmain menu!";
			this->introp3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// StageDirections
			// 
			this->StageDirections->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->StageDirections->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StageDirections->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StageDirections->Location = System::Drawing::Point(0, 175);
			this->StageDirections->Name = L"StageDirections";
			this->StageDirections->Padding = System::Windows::Forms::Padding(0, 0, 0, 50);
			this->StageDirections->Size = System::Drawing::Size(1489, 438);
			this->StageDirections->TabIndex = 8;
			this->StageDirections->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->StageDirections->Visible = false;
			// 
			// StageP
			// 
			this->StageP->Dock = System::Windows::Forms::DockStyle::Top;
			this->StageP->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->StageP->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->StageP->Location = System::Drawing::Point(0, 0);
			this->StageP->Name = L"StageP";
			this->StageP->Padding = System::Windows::Forms::Padding(0, 50, 0, 0);
			this->StageP->Size = System::Drawing::Size(1489, 208);
			this->StageP->TabIndex = 9;
			this->StageP->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->StageP->Visible = false;
			// 
			// inputBox
			// 
			this->inputBox->Enabled = false;
			this->inputBox->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputBox->ForeColor = System::Drawing::SystemColors::WindowFrame;
			this->inputBox->Location = System::Drawing::Point(725, 537);
			this->inputBox->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->inputBox->Name = L"inputBox";
			this->inputBox->Size = System::Drawing::Size(64, 30);
			this->inputBox->TabIndex = 10;
			this->inputBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->inputBox->Visible = false;
			this->inputBox->TextChanged += gcnew System::EventHandler(this, &MyForm::inputBox_TextChanged);
			// 
			// stage1lock
			// 
			this->stage1lock->AutoSize = true;
			this->stage1lock->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stage1lock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stage1lock->Location = System::Drawing::Point(205, 47);
			this->stage1lock->Name = L"stage1lock";
			this->stage1lock->Size = System::Drawing::Size(53, 18);
			this->stage1lock->TabIndex = 11;
			this->stage1lock->Text = L"unlocked";
			this->stage1lock->Visible = false;
			// 
			// stage2lock
			// 
			this->stage2lock->AutoSize = true;
			this->stage2lock->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stage2lock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stage2lock->Location = System::Drawing::Point(715, 47);
			this->stage2lock->Name = L"stage2lock";
			this->stage2lock->Size = System::Drawing::Size(53, 18);
			this->stage2lock->TabIndex = 12;
			this->stage2lock->Text = L"unlocked";
			this->stage2lock->Visible = false;
			// 
			// stage3lock
			// 
			this->stage3lock->AutoSize = true;
			this->stage3lock->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stage3lock->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stage3lock->Location = System::Drawing::Point(1208, 47);
			this->stage3lock->Name = L"stage3lock";
			this->stage3lock->Size = System::Drawing::Size(53, 18);
			this->stage3lock->TabIndex = 13;
			this->stage3lock->Text = L"unlocked";
			this->stage3lock->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(4, 4);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 79);
			this->button4->TabIndex = 0;
			this->button4->Text = L"1\nEngine fire";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->stage3out);
			this->panel1->Controls->Add(this->button13);
			this->panel1->Controls->Add(this->button12);
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Location = System::Drawing::Point(291, 212);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(957, 217);
			this->panel1->TabIndex = 14;
			this->panel1->Visible = false;
			// 
			// stage3out
			// 
			this->stage3out->AutoSize = true;
			this->stage3out->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->stage3out->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->stage3out->Location = System::Drawing::Point(4, 176);
			this->stage3out->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->stage3out->Name = L"stage3out";
			this->stage3out->Size = System::Drawing::Size(463, 18);
			this->stage3out->TabIndex = 10;
			this->stage3out->Text = L"select the button that corresponds with the final event in the disaster";
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->Location = System::Drawing::Point(772, 90);
			this->button13->Margin = System::Windows::Forms::Padding(4);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(184, 79);
			this->button13->TabIndex = 9;
			this->button13->Text = L"10\nCommunication";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(580, 90);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(184, 79);
			this->button12->TabIndex = 8;
			this->button12->Text = L"9\nHelmets";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(388, 90);
			this->button11->Margin = System::Windows::Forms::Padding(4);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(184, 79);
			this->button11->TabIndex = 7;
			this->button11->Text = L"8\nRobotic arm";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(196, 90);
			this->button10->Margin = System::Windows::Forms::Padding(4);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(184, 79);
			this->button10->TabIndex = 6;
			this->button10->Text = L"7\nAtmospheric gases";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(4, 90);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(184, 79);
			this->button9->TabIndex = 5;
			this->button9->Text = L"6\nCabin pressure";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(772, 4);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(184, 79);
			this->button8->TabIndex = 4;
			this->button8->Text = L"5\nPoor management";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(580, 4);
			this->button7->Margin = System::Windows::Forms::Padding(4);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(184, 79);
			this->button7->TabIndex = 3;
			this->button7->Text = L"4\nLack of repair kit";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(388, 4);
			this->button6->Margin = System::Windows::Forms::Padding(4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 79);
			this->button6->TabIndex = 2;
			this->button6->Text = L"3\nTire pressure";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(196, 4);
			this->button5->Margin = System::Windows::Forms::Padding(4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 79);
			this->button5->TabIndex = 1;
			this->button5->Text = L"2\nTemperature sensors";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// finish
			// 
			this->finish->BackColor = System::Drawing::SystemColors::GrayText;
			this->finish->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->finish->Location = System::Drawing::Point(727, 530);
			this->finish->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->finish->Name = L"finish";
			this->finish->Size = System::Drawing::Size(64, 34);
			this->finish->TabIndex = 15;
			this->finish->Text = L"FINISH";
			this->finish->UseVisualStyleBackColor = false;
			this->finish->Visible = false;
			this->finish->Click += gcnew System::EventHandler(this, &MyForm::finish_Click);
			// 
			// hint1
			// 
			this->hint1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->hint1->Enabled = false;
			this->hint1->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hint1->Location = System::Drawing::Point(1341, 185);
			this->hint1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hint1->Name = L"hint1";
			this->hint1->Size = System::Drawing::Size(63, 41);
			this->hint1->TabIndex = 16;
			this->hint1->Text = L"hint 1";
			this->hint1->UseVisualStyleBackColor = false;
			this->hint1->Visible = false;
			this->hint1->Click += gcnew System::EventHandler(this, &MyForm::hint1_Click);
			// 
			// hint2
			// 
			this->hint2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->hint2->Enabled = false;
			this->hint2->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hint2->Location = System::Drawing::Point(1341, 254);
			this->hint2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hint2->Name = L"hint2";
			this->hint2->Size = System::Drawing::Size(63, 41);
			this->hint2->TabIndex = 17;
			this->hint2->Text = L"hint 2";
			this->hint2->UseVisualStyleBackColor = false;
			this->hint2->Visible = false;
			this->hint2->Click += gcnew System::EventHandler(this, &MyForm::hint2_Click);
			// 
			// hint3
			// 
			this->hint3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->hint3->Enabled = false;
			this->hint3->Font = (gcnew System::Drawing::Font(L"Bahnschrift Condensed", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hint3->Location = System::Drawing::Point(1341, 319);
			this->hint3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->hint3->Name = L"hint3";
			this->hint3->Size = System::Drawing::Size(63, 41);
			this->hint3->TabIndex = 18;
			this->hint3->Text = L"hint 3";
			this->hint3->UseVisualStyleBackColor = false;
			this->hint3->Visible = false;
			this->hint3->Click += gcnew System::EventHandler(this, &MyForm::hint3_Click);
			// 
			// hint
			// 
			this->hint->AutoSize = true;
			this->hint->Enabled = false;
			this->hint->Font = (gcnew System::Drawing::Font(L"ISOCPEUR", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->hint->ForeColor = System::Drawing::SystemColors::Control;
			this->hint->Location = System::Drawing::Point(845, 535);
			this->hint->Name = L"hint";
			this->hint->Size = System::Drawing::Size(44, 24);
			this->hint->TabIndex = 19;
			this->hint->Text = L"Hint:";
			this->hint->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->hint->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(1489, 613);
			this->Controls->Add(this->hint);
			this->Controls->Add(this->hint3);
			this->Controls->Add(this->hint2);
			this->Controls->Add(this->hint1);
			this->Controls->Add(this->finish);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->stage3lock);
			this->Controls->Add(this->stage2lock);
			this->Controls->Add(this->stage1lock);
			this->Controls->Add(this->inputBox);
			this->Controls->Add(this->introp3);
			this->Controls->Add(this->introp2);
			this->Controls->Add(this->introp1);
			this->Controls->Add(this->Menu);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->StageP);
			this->Controls->Add(this->StageDirections);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		stageButtons();
		currentStage = 1;

		this->StageP->Text = L"Welcome to Stage 1\n\
			During the initial launch of Columbia on January 11, 2001, there were\n\
			some issues with external parts of the shuttle. Specifically, a chunk of \n\
			material was not secured and disregarded when it came loose.When you put\n\
			the puzzle in front of you together, you will see a diagram of the shuttle.\n\
			Identify which labeled hazard was the true issue that initiated the disaster.";

		this->StageDirections->Text = L"Instructions:\n\
			Put together jigsaw puzzle\n\
			observe hazards labeled on puzzle\n\
			input the number of the hazard that\n\
			you believe caused the explosion";


	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


		stageButtons();
		currentStage = 2;

		this->StageP->Text = L"Welcome to Stage 2\n\
			You have correctly identified the object that caused damage to the shuttle.\n\
			Now it is time to determine the part of the shuttle that was affected by the\n\
			piece of foam. The foam was attached to an external tank on the left side of\n\
			the shuttle. The foam created a dent which affected the shuttle’s ability to\n\
			maneuver through the atmosphere. The blinking light on the diagram you see\n\
			will indicate the affected part of the shuttle after you press the correct button.";

		this->StageDirections->Text = L"Instructions:\n\
			Press the button corresponding with the\n\
			number answer you got in the Stage 1\n\
			Observe the blinking light on the diagram\n\
			enter the part of the plane that was affected";


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


		stageButtons();
		currentStage = 3;
		this->StageP->Text = L"Welcome to Stage 3\n\
				So far we know that a foam piece fell off of an external tankand damaged the\n\
				left wing.Determine the final factor that caused the shuttle to explode! Keep in\n\
				mind that the shuttle was entering the atmosphere as it disintegrated.";

		this->panel1->Visible = true;
	}

	private: System::Void Menu_Click(System::Object^ sender, System::EventArgs^ e) {

		//menu settings
		menuSettings();

		currentStage = 0;

		this->stage1lock->Visible = true;
		if (round1complete) { 
			this->stage2lock->Visible = true;
			if (round2complete) {
				this->stage3lock->Visible = true;
				if (round3complete) { this->finish->Visible = true; }
			}
		}

	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void inputBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

		// Stage 1 inputBox
		if (currentStage == 1) {
			if (this->inputBox->Text == L"3") {
				this->StageP->Text = L"Correct! It was the falling foam piece that caused the damage!\n\
								You have unlocked Stage 2! Return to the main menu to move to the next stage!";
				round1complete = true;
			}
			else {
				this->StageP->Text = L"Sorry! That isn't correct! Please try again!\nEnter the # hazard that caused the damage to the shuttle:";
			}
		}
		else if (currentStage == 2) {
			if (this->inputBox->Text == L"2") {
				this->StageP->Text = L"Correct! It was the left wing that was damaged by the foam!\n\
								You have unlocked Stage 3! Return to the main menu to move to the next stage!";
				round2complete = true;
			}
			else {
				this->StageP->Text = L"Sorry! That isn't correct! Please try again!\nEnter the # part of the shuttle that was damaged:";
			}
		}
		else if (currentStage == 3) {
			if (this->inputBox->Text == L"7") {
				this->StageP->Text = L"Correct! It was the atmospheric gas that casued the shuttle to finally disintegrate!\n\
								You have solved the puzzle! Return to the main menu to move to finish the game!";
				round3complete = true;
			}
			else {
				this->StageP->Text = L"Sorry! That isn't correct! Please try again!\n\
									Enter the # of the box on the table corresponding with the correct hazard!";
			}
		}
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"There didn’t seem to be anything wrong with the engine initially";
}private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"Mission control stopped receiving temperature readings from the left wing";
}private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"The tire pressure readings from the left side of the shuttle disappeared";
}private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"There was no protocol for on-board repair kits prior to Columbia’s launch";
}private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"8 minutes before the shuttle disintegrated, signs of rising temperature were detected, but no one at mission control was monitoring it";
}private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"As the shuttle fell apart, the crew was exposed to the atmosphere and the drop in air pressure caused the crew to lose consciousness";
}private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"Damage caused to the left wing prevented the heat shield from working properly and the heat from atmospheric reentry began melting the shuttle";
}private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"There was no camera to monitor the outside panels of the shuttle active for mission control to monitor";
}private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"There were not adequate head/neck supports in the crew’s helmets which caused the crew to suffer head injury during extreme turbulence";
}private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
	this->stage3out->Text = L"Mission control lost contact with the astronauts at 9am";
}
private: System::Void finish_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button1->Visible = false;
	this->button2->Visible = false;
	this->button3->Visible = false;
	this->stage1lock->Visible = false;
	this->stage2lock->Visible = false;
	this->stage3lock->Visible = false;
	this->pictureBox1->Visible = false;
	this->finish->Visible = false;
	this->introp1->Visible = true;
	this->introp1->Text = L"Columbia initially launched on January 16, 2003. During the launch,\n\
							large pieces of foam fell off of external tanks on the shuttle, but it was\n\
							disregarded as mission control did not anticipate the following effects.\n\
							The foam struck the left wing of the shuttle which caused damage to its leading edge.\n\
							This damage made the heat shield ineffective which caused issues during Columbia’s descent.";
	this->introp2->Visible = true;
	this->introp2->Text = L"Columbia could not sustain the extreme heat caused by the atmospheric reentry of the shuttle,\n\
							and the wing began melting. Eventually the shuttle disintegrated, killing the crew and sending\n\
							almost 85,000 pieces of debris spread across the state of Texas.";

	this->introp3->Visible = true;
	this->introp3->Text = L"This disaster halted launches for many years as NASA worked to improve safety precautions to prevent\n\
							another similar catastrophe. The Columbia Disaster was a tragedy that prompted many critical changes\n\
							to the space program to keep astronauts safe. The crew is remembered in many ways to honor their work and\n\
							loss including the naming of seven asteroids in orbit between Mars and Jupiter.";
}
private: System::Void hint1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->hint->Visible = true;
	this->hint->Enabled = true;
	this->hint2->Enabled = true;
	if (currentStage == 1) {
		this->hint->Text = L"Hint 1:\n\Make sure the painted side is down, and the numbers are grouped together";
	}
	if (currentStage == 2) {
		this->hint->Text = L"Hint 1:\n\First press the button with the number that you got in Stage 1";
	}
	if (currentStage == 3) {
		this->hint->Text = L"Hint 1:\n\Read the caption of each hazard when you click on it";
	}
}	
private: System::Void hint2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->hint->Visible = true;
	this->hint->Enabled = true;
	this->hint3->Enabled = true;
	if (currentStage == 1) {
		this->hint->Text = L"Hint 2:\n\Which of the 4 hazards could have to do with the falling material?";
	}
	if (currentStage == 2) {
		this->hint->Text = L"Hint 2:\n\What part of the shuttle is indicated by the light on the diagram?";
	}
	if (currentStage == 3) {
		this->hint->Text = L"Hint 2:\n\Which hazard has the most to do with the atmosphere";
	}
}
private: System::Void hint3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->hint->Visible = true;
	this->hint->Enabled = true;
	if (currentStage == 1) {
		this->hint->Text = L"Hint 3:\n\Hazard #3 is the foam piece which is what ended up damaging the shuttle";
	}
	if (currentStage == 2) {
		this->hint->Text = L"Hint 3:\n\The left wing which is labelled with a 2 is what was damaged";
	}
	if (currentStage == 3) {
		this->hint->Text = L"Hint 3:\n\The atmospheric gases were what caused the shuttle to disintigrate";
	}
}
};
}
