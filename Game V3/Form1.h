#pragma once
#include "stdafx.h"

namespace GameV3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			Input->PasswordChar='*' ; 
            
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabPage^  tabPlayer1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  Input;
	private: System::Windows::Forms::Label^  label8;



	private: System::Windows::Forms::TabPage^  tabGameOver;
	private: System::Windows::Forms::Label^  ScoreScreen2;
	private: System::Windows::Forms::Label^  GameOverScreen;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  btnGOBack;
	private: System::Windows::Forms::TabPage^  tabHallOfFame;
	private: System::Windows::Forms::Button^  btnHOFBack;

	private: System::Windows::Forms::TabPage^  tabMultiPlayer;
	private: System::Windows::Forms::Label^  HintScreen2;
	private: System::Windows::Forms::Label^  LifesScreen2;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  number0;
	private: System::Windows::Forms::Button^  number9;
	private: System::Windows::Forms::Button^  number8;
	private: System::Windows::Forms::Button^  number7;
	private: System::Windows::Forms::Button^  number6;
	private: System::Windows::Forms::Button^  number5;
	private: System::Windows::Forms::Button^  number4;
	private: System::Windows::Forms::Button^  number3;
	private: System::Windows::Forms::Button^  number2;
	private: System::Windows::Forms::Button^  number1;
	private: System::Windows::Forms::Button^  p2;
	private: System::Windows::Forms::Button^  o2;
	private: System::Windows::Forms::Button^  i2;
	private: System::Windows::Forms::Button^  u2;
	private: System::Windows::Forms::Button^  y2;
	private: System::Windows::Forms::Button^  t2;
	private: System::Windows::Forms::Button^  r2;
	private: System::Windows::Forms::Button^  e2;
	private: System::Windows::Forms::Button^  w2;
	private: System::Windows::Forms::Button^  q2;
	private: System::Windows::Forms::Button^  m2;
	private: System::Windows::Forms::Button^  n2;
	private: System::Windows::Forms::Button^  b2;
	private: System::Windows::Forms::Button^  v2;
	private: System::Windows::Forms::Button^  c2;
	private: System::Windows::Forms::Button^  x2;
	private: System::Windows::Forms::Button^  z2;
	private: System::Windows::Forms::Button^  l2;
	private: System::Windows::Forms::Button^  k2;
	private: System::Windows::Forms::Button^  j2;
	private: System::Windows::Forms::Button^  h2;
	private: System::Windows::Forms::Button^  g2;
	private: System::Windows::Forms::Button^  f2;
	private: System::Windows::Forms::Button^  d2;
	private: System::Windows::Forms::Button^  s2;
	private: System::Windows::Forms::Button^  a2;
	private: System::Windows::Forms::Label^  MPWordScreen;
	private: System::Windows::Forms::Button^  btnMPBack;
	private: System::Windows::Forms::TabPage^  tabSinglePlayer;
	private: System::Windows::Forms::Label^  ScoreScreen;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  CategoryScreen;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  LettersScreen;
	private: System::Windows::Forms::PictureBox^  Box;
	private: System::Windows::Forms::Button^  ButtonHint;
	private: System::Windows::Forms::Label^  HintScreen;
	private: System::Windows::Forms::Label^  HintsLabel;
	private: System::Windows::Forms::Label^  LevelScreen;
	private: System::Windows::Forms::Label^  LevelLabel;
	private: System::Windows::Forms::Label^  LifesScreen;
	private: System::Windows::Forms::Label^  LifesLabel;
	private: System::Windows::Forms::Button^  num0;
	private: System::Windows::Forms::Button^  num9;
	private: System::Windows::Forms::Button^  num8;
	private: System::Windows::Forms::Button^  num7;
	private: System::Windows::Forms::Button^  num6;
	private: System::Windows::Forms::Button^  num5;
	private: System::Windows::Forms::Button^  num4;
	private: System::Windows::Forms::Button^  num3;
	private: System::Windows::Forms::Button^  num2;
	private: System::Windows::Forms::Button^  num1;
	private: System::Windows::Forms::Button^  m;
	private: System::Windows::Forms::Button^  n;
	private: System::Windows::Forms::Button^  b;
	private: System::Windows::Forms::Button^  v;
	private: System::Windows::Forms::Button^  c;
	private: System::Windows::Forms::Button^  x;
	private: System::Windows::Forms::Button^  z;
	private: System::Windows::Forms::Button^  l;
	private: System::Windows::Forms::Button^  k;
	private: System::Windows::Forms::Button^  j;
	private: System::Windows::Forms::Button^  h;
	private: System::Windows::Forms::Button^  g;
	private: System::Windows::Forms::Button^  f;
	private: System::Windows::Forms::Button^  p;
	private: System::Windows::Forms::Button^  i;
	private: System::Windows::Forms::Button^  u;
	private: System::Windows::Forms::Button^  y;
	private: System::Windows::Forms::Button^  r;
	private: System::Windows::Forms::Button^  e;
	private: System::Windows::Forms::Button^  q;
	private: System::Windows::Forms::Button^  w;
	private: System::Windows::Forms::Button^  d;
	private: System::Windows::Forms::Button^  s;
	private: System::Windows::Forms::Label^  word;
	private: System::Windows::Forms::Button^  t;
	private: System::Windows::Forms::Button^  o;
	private: System::Windows::Forms::Button^  a;
	private: System::Windows::Forms::Button^  btnSPBack;
	private: System::Windows::Forms::TabPage^  tabMainMenu;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  btnExit;
	private: System::Windows::Forms::Button^  btnAboutUs;
	private: System::Windows::Forms::Button^  btnHallOfFame;
	private: System::Windows::Forms::Button^  btnMultiPlayer;
	private: System::Windows::Forms::Button^  btnSinglePlayer;
private: System::Windows::Forms::TabControl^  tabControl1;


private: System::Windows::Forms::PictureBox^  Box2;
private: System::Windows::Forms::TabPage^  GOTab2;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::PictureBox^  pictureBox2;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Label^  CorrectWordScreen;
private: System::Windows::Forms::Button^  button3;








private: System::Windows::Forms::Label^  label24;


private: System::Windows::Forms::Label^  label21;

private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::TabPage^  FinishTab;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::TabPage^  tabAboutUs;
private: System::Windows::Forms::PictureBox^  pictureBox3;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label22;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::Button^  btnAUBack;
private: System::Windows::Forms::Panel^  panel1;









	protected: 

	protected: 

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->tabPlayer1 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Input = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabGameOver = (gcnew System::Windows::Forms::TabPage());
			this->ScoreScreen2 = (gcnew System::Windows::Forms::Label());
			this->GameOverScreen = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->btnGOBack = (gcnew System::Windows::Forms::Button());
			this->tabHallOfFame = (gcnew System::Windows::Forms::TabPage());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnHOFBack = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabMultiPlayer = (gcnew System::Windows::Forms::TabPage());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->Box2 = (gcnew System::Windows::Forms::PictureBox());
			this->HintScreen2 = (gcnew System::Windows::Forms::Label());
			this->LifesScreen2 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->number0 = (gcnew System::Windows::Forms::Button());
			this->number9 = (gcnew System::Windows::Forms::Button());
			this->number8 = (gcnew System::Windows::Forms::Button());
			this->number7 = (gcnew System::Windows::Forms::Button());
			this->number6 = (gcnew System::Windows::Forms::Button());
			this->number5 = (gcnew System::Windows::Forms::Button());
			this->number4 = (gcnew System::Windows::Forms::Button());
			this->number3 = (gcnew System::Windows::Forms::Button());
			this->number2 = (gcnew System::Windows::Forms::Button());
			this->number1 = (gcnew System::Windows::Forms::Button());
			this->p2 = (gcnew System::Windows::Forms::Button());
			this->o2 = (gcnew System::Windows::Forms::Button());
			this->i2 = (gcnew System::Windows::Forms::Button());
			this->u2 = (gcnew System::Windows::Forms::Button());
			this->y2 = (gcnew System::Windows::Forms::Button());
			this->t2 = (gcnew System::Windows::Forms::Button());
			this->r2 = (gcnew System::Windows::Forms::Button());
			this->e2 = (gcnew System::Windows::Forms::Button());
			this->w2 = (gcnew System::Windows::Forms::Button());
			this->q2 = (gcnew System::Windows::Forms::Button());
			this->m2 = (gcnew System::Windows::Forms::Button());
			this->n2 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->v2 = (gcnew System::Windows::Forms::Button());
			this->c2 = (gcnew System::Windows::Forms::Button());
			this->x2 = (gcnew System::Windows::Forms::Button());
			this->z2 = (gcnew System::Windows::Forms::Button());
			this->l2 = (gcnew System::Windows::Forms::Button());
			this->k2 = (gcnew System::Windows::Forms::Button());
			this->j2 = (gcnew System::Windows::Forms::Button());
			this->h2 = (gcnew System::Windows::Forms::Button());
			this->g2 = (gcnew System::Windows::Forms::Button());
			this->f2 = (gcnew System::Windows::Forms::Button());
			this->d2 = (gcnew System::Windows::Forms::Button());
			this->s2 = (gcnew System::Windows::Forms::Button());
			this->a2 = (gcnew System::Windows::Forms::Button());
			this->MPWordScreen = (gcnew System::Windows::Forms::Label());
			this->btnMPBack = (gcnew System::Windows::Forms::Button());
			this->tabSinglePlayer = (gcnew System::Windows::Forms::TabPage());
			this->ScoreScreen = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->CategoryScreen = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->LettersScreen = (gcnew System::Windows::Forms::Label());
			this->Box = (gcnew System::Windows::Forms::PictureBox());
			this->ButtonHint = (gcnew System::Windows::Forms::Button());
			this->HintScreen = (gcnew System::Windows::Forms::Label());
			this->HintsLabel = (gcnew System::Windows::Forms::Label());
			this->LevelScreen = (gcnew System::Windows::Forms::Label());
			this->LevelLabel = (gcnew System::Windows::Forms::Label());
			this->LifesScreen = (gcnew System::Windows::Forms::Label());
			this->LifesLabel = (gcnew System::Windows::Forms::Label());
			this->num0 = (gcnew System::Windows::Forms::Button());
			this->num9 = (gcnew System::Windows::Forms::Button());
			this->num8 = (gcnew System::Windows::Forms::Button());
			this->num7 = (gcnew System::Windows::Forms::Button());
			this->num6 = (gcnew System::Windows::Forms::Button());
			this->num5 = (gcnew System::Windows::Forms::Button());
			this->num4 = (gcnew System::Windows::Forms::Button());
			this->num3 = (gcnew System::Windows::Forms::Button());
			this->num2 = (gcnew System::Windows::Forms::Button());
			this->num1 = (gcnew System::Windows::Forms::Button());
			this->m = (gcnew System::Windows::Forms::Button());
			this->n = (gcnew System::Windows::Forms::Button());
			this->b = (gcnew System::Windows::Forms::Button());
			this->v = (gcnew System::Windows::Forms::Button());
			this->c = (gcnew System::Windows::Forms::Button());
			this->x = (gcnew System::Windows::Forms::Button());
			this->z = (gcnew System::Windows::Forms::Button());
			this->l = (gcnew System::Windows::Forms::Button());
			this->k = (gcnew System::Windows::Forms::Button());
			this->j = (gcnew System::Windows::Forms::Button());
			this->h = (gcnew System::Windows::Forms::Button());
			this->g = (gcnew System::Windows::Forms::Button());
			this->f = (gcnew System::Windows::Forms::Button());
			this->p = (gcnew System::Windows::Forms::Button());
			this->i = (gcnew System::Windows::Forms::Button());
			this->u = (gcnew System::Windows::Forms::Button());
			this->y = (gcnew System::Windows::Forms::Button());
			this->r = (gcnew System::Windows::Forms::Button());
			this->e = (gcnew System::Windows::Forms::Button());
			this->q = (gcnew System::Windows::Forms::Button());
			this->w = (gcnew System::Windows::Forms::Button());
			this->d = (gcnew System::Windows::Forms::Button());
			this->s = (gcnew System::Windows::Forms::Button());
			this->word = (gcnew System::Windows::Forms::Label());
			this->t = (gcnew System::Windows::Forms::Button());
			this->o = (gcnew System::Windows::Forms::Button());
			this->a = (gcnew System::Windows::Forms::Button());
			this->btnSPBack = (gcnew System::Windows::Forms::Button());
			this->tabMainMenu = (gcnew System::Windows::Forms::TabPage());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnAboutUs = (gcnew System::Windows::Forms::Button());
			this->btnHallOfFame = (gcnew System::Windows::Forms::Button());
			this->btnMultiPlayer = (gcnew System::Windows::Forms::Button());
			this->btnSinglePlayer = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->GOTab2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->CorrectWordScreen = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->FinishTab = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->btnAUBack = (gcnew System::Windows::Forms::Button());
			this->tabAboutUs = (gcnew System::Windows::Forms::TabPage());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tabPlayer1->SuspendLayout();
			this->tabGameOver->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->tabHallOfFame->SuspendLayout();
			this->tabMultiPlayer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Box2))->BeginInit();
			this->tabSinglePlayer->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Box))->BeginInit();
			this->tabMainMenu->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->GOTab2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->FinishTab->SuspendLayout();
			this->tabAboutUs->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// tabPlayer1
			// 
			this->tabPlayer1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabPlayer1.BackgroundImage")));
			this->tabPlayer1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabPlayer1->Controls->Add(this->button1);
			this->tabPlayer1->Controls->Add(this->Input);
			this->tabPlayer1->Controls->Add(this->label8);
			this->tabPlayer1->Location = System::Drawing::Point(4, 25);
			this->tabPlayer1->Name = L"tabPlayer1";
			this->tabPlayer1->Padding = System::Windows::Forms::Padding(3);
			this->tabPlayer1->Size = System::Drawing::Size(1485, 758);
			this->tabPlayer1->TabIndex = 6;
			this->tabPlayer1->Text = L"Player 1 ";
			this->tabPlayer1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button1->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Yellow;
			this->button1->Location = System::Drawing::Point(545, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(319, 113);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Input
			// 
			this->Input->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->Input->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->Input->Location = System::Drawing::Point(223, 236);
			this->Input->Name = L"Input";
			this->Input->Size = System::Drawing::Size(1058, 54);
			this->Input->TabIndex = 1;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Cyan;
			this->label8->Location = System::Drawing::Point(345, 119);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(734, 101);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Enter the word :";
			// 
			// tabGameOver
			// 
			this->tabGameOver->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabGameOver.BackgroundImage")));
			this->tabGameOver->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabGameOver->Controls->Add(this->ScoreScreen2);
			this->tabGameOver->Controls->Add(this->GameOverScreen);
			this->tabGameOver->Controls->Add(this->textBox1);
			this->tabGameOver->Controls->Add(this->label11);
			this->tabGameOver->Controls->Add(this->label10);
			this->tabGameOver->Controls->Add(this->label9);
			this->tabGameOver->Controls->Add(this->label3);
			this->tabGameOver->Controls->Add(this->pictureBox1);
			this->tabGameOver->Controls->Add(this->btnGOBack);
			this->tabGameOver->ForeColor = System::Drawing::Color::Yellow;
			this->tabGameOver->Location = System::Drawing::Point(4, 25);
			this->tabGameOver->Name = L"tabGameOver";
			this->tabGameOver->Padding = System::Windows::Forms::Padding(3);
			this->tabGameOver->Size = System::Drawing::Size(1485, 758);
			this->tabGameOver->TabIndex = 4;
			this->tabGameOver->Text = L"Game Over";
			this->tabGameOver->UseVisualStyleBackColor = true;
			// 
			// ScoreScreen2
			// 
			this->ScoreScreen2->AutoSize = true;
			this->ScoreScreen2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->ScoreScreen2->ForeColor = System::Drawing::Color::Fuchsia;
			this->ScoreScreen2->Location = System::Drawing::Point(1120, 478);
			this->ScoreScreen2->Name = L"ScoreScreen2";
			this->ScoreScreen2->Size = System::Drawing::Size(46, 62);
			this->ScoreScreen2->TabIndex = 99;
			this->ScoreScreen2->Text = L"-";
			this->ScoreScreen2->Click += gcnew System::EventHandler(this, &Form1::ScoreScreen2_Click);
			// 
			// GameOverScreen
			// 
			this->GameOverScreen->AutoSize = true;
			this->GameOverScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->GameOverScreen->ForeColor = System::Drawing::Color::Yellow;
			this->GameOverScreen->Location = System::Drawing::Point(242, 367);
			this->GameOverScreen->Name = L"GameOverScreen";
			this->GameOverScreen->Size = System::Drawing::Size(41, 62);
			this->GameOverScreen->TabIndex = 98;
			this->GameOverScreen->Text = L" ";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::Yellow;
			this->textBox1->Location = System::Drawing::Point(184, 542);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(704, 67);
			this->textBox1->TabIndex = 97;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Fuchsia;
			this->label11->Location = System::Drawing::Point(918, 478);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(207, 62);
			this->label11->TabIndex = 96;
			this->label11->Text = L"Score :";
			this->label11->Click += gcnew System::EventHandler(this, &Form1::label11_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Yellow;
			this->label10->Location = System::Drawing::Point(172, 471);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(676, 62);
			this->label10->TabIndex = 95;
			this->label10->Text = L"Please enter your name :";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Yellow;
			this->label9->Location = System::Drawing::Point(172, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(414, 62);
			this->label9->TabIndex = 94;
			this->label9->Text = L"The word was :";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 55.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Tomato;
			this->label3->Location = System::Drawing::Point(302, 147);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(642, 118);
			this->label3->TabIndex = 93;
			this->label3->Text = L"Game Over";
			this->label3->Click += gcnew System::EventHandler(this, &Form1::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(929, 108);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(412, 367);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 92;
			this->pictureBox1->TabStop = false;
			// 
			// btnGOBack
			// 
			this->btnGOBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnGOBack.BackgroundImage")));
			this->btnGOBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnGOBack->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnGOBack->ForeColor = System::Drawing::Color::Cyan;
			this->btnGOBack->Location = System::Drawing::Point(1102, 682);
			this->btnGOBack->Name = L"btnGOBack";
			this->btnGOBack->Size = System::Drawing::Size(349, 58);
			this->btnGOBack->TabIndex = 1;
			this->btnGOBack->Text = L"Play Again";
			this->btnGOBack->UseVisualStyleBackColor = true;
			this->btnGOBack->Click += gcnew System::EventHandler(this, &Form1::btnGOBack_Click);
			// 
			// tabHallOfFame
			// 
			this->tabHallOfFame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabHallOfFame.BackgroundImage")));
			this->tabHallOfFame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabHallOfFame->Controls->Add(this->label24);
			this->tabHallOfFame->Controls->Add(this->label21);
			this->tabHallOfFame->Controls->Add(this->label19);
			this->tabHallOfFame->Controls->Add(this->label18);
			this->tabHallOfFame->Controls->Add(this->label17);
			this->tabHallOfFame->Controls->Add(this->label16);
			this->tabHallOfFame->Controls->Add(this->label4);
			this->tabHallOfFame->Controls->Add(this->btnHOFBack);
			this->tabHallOfFame->Controls->Add(this->label2);
			this->tabHallOfFame->Location = System::Drawing::Point(4, 25);
			this->tabHallOfFame->Name = L"tabHallOfFame";
			this->tabHallOfFame->Padding = System::Windows::Forms::Padding(3);
			this->tabHallOfFame->Size = System::Drawing::Size(1485, 758);
			this->tabHallOfFame->TabIndex = 3;
			this->tabHallOfFame->Text = L"Hall Of Fame";
			this->tabHallOfFame->UseVisualStyleBackColor = true;
			this->tabHallOfFame->Click += gcnew System::EventHandler(this, &Form1::tabHallOfFame_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label24->Location = System::Drawing::Point(281, 505);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(69, 76);
			this->label24->TabIndex = 11;
			this->label24->Text = L"3";
			this->label24->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label24->Click += gcnew System::EventHandler(this, &Form1::label24_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label21->Location = System::Drawing::Point(281, 412);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(70, 76);
			this->label21->TabIndex = 8;
			this->label21->Text = L"2";
			this->label21->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label21->Click += gcnew System::EventHandler(this, &Form1::label21_Click);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label19->Location = System::Drawing::Point(505, 329);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(249, 76);
			this->label19->TabIndex = 6;
			this->label19->Text = L"label19";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label18->Location = System::Drawing::Point(281, 329);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 76);
			this->label18->TabIndex = 5;
			this->label18->Text = L"1";
			this->label18->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Yellow;
			this->label17->Location = System::Drawing::Point(782, 265);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(207, 62);
			this->label17->TabIndex = 4;
			this->label17->Text = L"Score :";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Yellow;
			this->label16->Location = System::Drawing::Point(503, 264);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(208, 62);
			this->label16->TabIndex = 3;
			this->label16->Text = L"Name :";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(199, 251);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 76);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Rank :";
			// 
			// btnHOFBack
			// 
			this->btnHOFBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHOFBack.BackgroundImage")));
			this->btnHOFBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHOFBack->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnHOFBack->ForeColor = System::Drawing::Color::Yellow;
			this->btnHOFBack->Location = System::Drawing::Point(1275, 679);
			this->btnHOFBack->Name = L"btnHOFBack";
			this->btnHOFBack->Size = System::Drawing::Size(175, 70);
			this->btnHOFBack->TabIndex = 1;
			this->btnHOFBack->Text = L"Back";
			this->btnHOFBack->UseVisualStyleBackColor = true;
			this->btnHOFBack->Click += gcnew System::EventHandler(this, &Form1::btnHOFBack_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 79.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Lime;
			this->label2->Location = System::Drawing::Point(265, 81);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(986, 170);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Hall Of Fame";
			// 
			// tabMultiPlayer
			// 
			this->tabMultiPlayer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabMultiPlayer.BackgroundImage")));
			this->tabMultiPlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabMultiPlayer->Controls->Add(this->button3);
			this->tabMultiPlayer->Controls->Add(this->Box2);
			this->tabMultiPlayer->Controls->Add(this->HintScreen2);
			this->tabMultiPlayer->Controls->Add(this->LifesScreen2);
			this->tabMultiPlayer->Controls->Add(this->label13);
			this->tabMultiPlayer->Controls->Add(this->label1);
			this->tabMultiPlayer->Controls->Add(this->number0);
			this->tabMultiPlayer->Controls->Add(this->number9);
			this->tabMultiPlayer->Controls->Add(this->number8);
			this->tabMultiPlayer->Controls->Add(this->number7);
			this->tabMultiPlayer->Controls->Add(this->number6);
			this->tabMultiPlayer->Controls->Add(this->number5);
			this->tabMultiPlayer->Controls->Add(this->number4);
			this->tabMultiPlayer->Controls->Add(this->number3);
			this->tabMultiPlayer->Controls->Add(this->number2);
			this->tabMultiPlayer->Controls->Add(this->number1);
			this->tabMultiPlayer->Controls->Add(this->p2);
			this->tabMultiPlayer->Controls->Add(this->o2);
			this->tabMultiPlayer->Controls->Add(this->i2);
			this->tabMultiPlayer->Controls->Add(this->u2);
			this->tabMultiPlayer->Controls->Add(this->y2);
			this->tabMultiPlayer->Controls->Add(this->t2);
			this->tabMultiPlayer->Controls->Add(this->r2);
			this->tabMultiPlayer->Controls->Add(this->e2);
			this->tabMultiPlayer->Controls->Add(this->w2);
			this->tabMultiPlayer->Controls->Add(this->q2);
			this->tabMultiPlayer->Controls->Add(this->m2);
			this->tabMultiPlayer->Controls->Add(this->n2);
			this->tabMultiPlayer->Controls->Add(this->b2);
			this->tabMultiPlayer->Controls->Add(this->v2);
			this->tabMultiPlayer->Controls->Add(this->c2);
			this->tabMultiPlayer->Controls->Add(this->x2);
			this->tabMultiPlayer->Controls->Add(this->z2);
			this->tabMultiPlayer->Controls->Add(this->l2);
			this->tabMultiPlayer->Controls->Add(this->k2);
			this->tabMultiPlayer->Controls->Add(this->j2);
			this->tabMultiPlayer->Controls->Add(this->h2);
			this->tabMultiPlayer->Controls->Add(this->g2);
			this->tabMultiPlayer->Controls->Add(this->f2);
			this->tabMultiPlayer->Controls->Add(this->d2);
			this->tabMultiPlayer->Controls->Add(this->s2);
			this->tabMultiPlayer->Controls->Add(this->a2);
			this->tabMultiPlayer->Controls->Add(this->MPWordScreen);
			this->tabMultiPlayer->Controls->Add(this->btnMPBack);
			this->tabMultiPlayer->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tabMultiPlayer->Location = System::Drawing::Point(4, 25);
			this->tabMultiPlayer->Name = L"tabMultiPlayer";
			this->tabMultiPlayer->Padding = System::Windows::Forms::Padding(3);
			this->tabMultiPlayer->Size = System::Drawing::Size(1485, 758);
			this->tabMultiPlayer->TabIndex = 2;
			this->tabMultiPlayer->Text = L"Multi Player";
			this->tabMultiPlayer->UseVisualStyleBackColor = true;
			this->tabMultiPlayer->Click += gcnew System::EventHandler(this, &Form1::tabMultiPlayer_Click);
			// 
			// button3
			// 
			this->button3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button3.BackgroundImage")));
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button3->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button3->Location = System::Drawing::Point(788, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(155, 65);
			this->button3->TabIndex = 44;
			this->button3->Text = L"Hint";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Box2
			// 
			this->Box2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Box2.BackgroundImage")));
			this->Box2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box2->Location = System::Drawing::Point(991, 136);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(345, 337);
			this->Box2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box2->TabIndex = 43;
			this->Box2->TabStop = false;
			// 
			// HintScreen2
			// 
			this->HintScreen2->AutoSize = true;
			this->HintScreen2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HintScreen2->ForeColor = System::Drawing::Color::Yellow;
			this->HintScreen2->Location = System::Drawing::Point(518, 28);
			this->HintScreen2->Name = L"HintScreen2";
			this->HintScreen2->Size = System::Drawing::Size(46, 62);
			this->HintScreen2->TabIndex = 42;
			this->HintScreen2->Text = L"-";
			// 
			// LifesScreen2
			// 
			this->LifesScreen2->AutoSize = true;
			this->LifesScreen2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->LifesScreen2->ForeColor = System::Drawing::Color::Yellow;
			this->LifesScreen2->Location = System::Drawing::Point(249, 17);
			this->LifesScreen2->Name = L"LifesScreen2";
			this->LifesScreen2->Size = System::Drawing::Size(46, 62);
			this->LifesScreen2->TabIndex = 41;
			this->LifesScreen2->Text = L"-";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Yellow;
			this->label13->Location = System::Drawing::Point(352, 17);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(177, 62);
			this->label13->TabIndex = 40;
			this->label13->Text = L"Hints :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Yellow;
			this->label1->Location = System::Drawing::Point(114, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 62);
			this->label1->TabIndex = 39;
			this->label1->Text = L"Lifes :";
			// 
			// number0
			// 
			this->number0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number0.BackgroundImage")));
			this->number0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number0->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number0->ForeColor = System::Drawing::Color::Cyan;
			this->number0->Location = System::Drawing::Point(900, 325);
			this->number0->Name = L"number0";
			this->number0->Size = System::Drawing::Size(75, 70);
			this->number0->TabIndex = 38;
			this->number0->Text = L"0";
			this->number0->UseVisualStyleBackColor = true;
			this->number0->Click += gcnew System::EventHandler(this, &Form1::number0_Click);
			// 
			// number9
			// 
			this->number9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number9.BackgroundImage")));
			this->number9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number9->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number9->ForeColor = System::Drawing::Color::Cyan;
			this->number9->Location = System::Drawing::Point(819, 325);
			this->number9->Name = L"number9";
			this->number9->Size = System::Drawing::Size(75, 70);
			this->number9->TabIndex = 37;
			this->number9->Text = L"9";
			this->number9->UseVisualStyleBackColor = true;
			this->number9->Click += gcnew System::EventHandler(this, &Form1::number9_Click);
			// 
			// number8
			// 
			this->number8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number8.BackgroundImage")));
			this->number8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number8->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number8->ForeColor = System::Drawing::Color::Cyan;
			this->number8->Location = System::Drawing::Point(738, 325);
			this->number8->Name = L"number8";
			this->number8->Size = System::Drawing::Size(75, 70);
			this->number8->TabIndex = 36;
			this->number8->Text = L"8";
			this->number8->UseVisualStyleBackColor = true;
			this->number8->Click += gcnew System::EventHandler(this, &Form1::number8_Click);
			// 
			// number7
			// 
			this->number7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number7.BackgroundImage")));
			this->number7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number7->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number7->ForeColor = System::Drawing::Color::Cyan;
			this->number7->Location = System::Drawing::Point(657, 327);
			this->number7->Name = L"number7";
			this->number7->Size = System::Drawing::Size(75, 70);
			this->number7->TabIndex = 35;
			this->number7->Text = L"7";
			this->number7->UseVisualStyleBackColor = true;
			this->number7->Click += gcnew System::EventHandler(this, &Form1::number7_Click);
			// 
			// number6
			// 
			this->number6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number6.BackgroundImage")));
			this->number6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number6->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number6->ForeColor = System::Drawing::Color::Cyan;
			this->number6->Location = System::Drawing::Point(578, 327);
			this->number6->Name = L"number6";
			this->number6->Size = System::Drawing::Size(75, 70);
			this->number6->TabIndex = 34;
			this->number6->Text = L"6";
			this->number6->UseVisualStyleBackColor = true;
			this->number6->Click += gcnew System::EventHandler(this, &Form1::number6_Click);
			// 
			// number5
			// 
			this->number5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number5.BackgroundImage")));
			this->number5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number5->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number5->ForeColor = System::Drawing::Color::Cyan;
			this->number5->Location = System::Drawing::Point(497, 327);
			this->number5->Name = L"number5";
			this->number5->Size = System::Drawing::Size(75, 70);
			this->number5->TabIndex = 33;
			this->number5->Text = L"5";
			this->number5->UseVisualStyleBackColor = true;
			this->number5->Click += gcnew System::EventHandler(this, &Form1::number5_Click);
			// 
			// number4
			// 
			this->number4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number4.BackgroundImage")));
			this->number4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number4->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number4->ForeColor = System::Drawing::Color::Cyan;
			this->number4->Location = System::Drawing::Point(414, 327);
			this->number4->Name = L"number4";
			this->number4->Size = System::Drawing::Size(75, 70);
			this->number4->TabIndex = 32;
			this->number4->Text = L"4";
			this->number4->UseVisualStyleBackColor = true;
			this->number4->Click += gcnew System::EventHandler(this, &Form1::number4_Click);
			// 
			// number3
			// 
			this->number3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number3.BackgroundImage")));
			this->number3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number3->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number3->ForeColor = System::Drawing::Color::Cyan;
			this->number3->Location = System::Drawing::Point(333, 327);
			this->number3->Name = L"number3";
			this->number3->Size = System::Drawing::Size(75, 70);
			this->number3->TabIndex = 31;
			this->number3->Text = L"3";
			this->number3->UseVisualStyleBackColor = true;
			this->number3->Click += gcnew System::EventHandler(this, &Form1::number3_Click);
			// 
			// number2
			// 
			this->number2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number2.BackgroundImage")));
			this->number2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number2->ForeColor = System::Drawing::Color::Cyan;
			this->number2->Location = System::Drawing::Point(252, 325);
			this->number2->Name = L"number2";
			this->number2->Size = System::Drawing::Size(75, 70);
			this->number2->TabIndex = 30;
			this->number2->Text = L"2";
			this->number2->UseVisualStyleBackColor = true;
			this->number2->Click += gcnew System::EventHandler(this, &Form1::number2_Click);
			// 
			// number1
			// 
			this->number1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"number1.BackgroundImage")));
			this->number1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->number1->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->number1->ForeColor = System::Drawing::Color::Cyan;
			this->number1->Location = System::Drawing::Point(171, 325);
			this->number1->Name = L"number1";
			this->number1->Size = System::Drawing::Size(75, 70);
			this->number1->TabIndex = 29;
			this->number1->Text = L"1";
			this->number1->UseVisualStyleBackColor = true;
			this->number1->Click += gcnew System::EventHandler(this, &Form1::number1_Click);
			// 
			// p2
			// 
			this->p2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p2.BackgroundImage")));
			this->p2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p2->ForeColor = System::Drawing::Color::Cyan;
			this->p2->Location = System::Drawing::Point(900, 403);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(75, 70);
			this->p2->TabIndex = 28;
			this->p2->Text = L"p";
			this->p2->UseVisualStyleBackColor = true;
			this->p2->Click += gcnew System::EventHandler(this, &Form1::p2_Click);
			// 
			// o2
			// 
			this->o2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"o2.BackgroundImage")));
			this->o2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->o2->ForeColor = System::Drawing::Color::Cyan;
			this->o2->Location = System::Drawing::Point(819, 403);
			this->o2->Name = L"o2";
			this->o2->Size = System::Drawing::Size(75, 70);
			this->o2->TabIndex = 27;
			this->o2->Text = L"o";
			this->o2->UseVisualStyleBackColor = true;
			this->o2->Click += gcnew System::EventHandler(this, &Form1::o2_Click);
			// 
			// i2
			// 
			this->i2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"i2.BackgroundImage")));
			this->i2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->i2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i2->ForeColor = System::Drawing::Color::Cyan;
			this->i2->Location = System::Drawing::Point(738, 403);
			this->i2->Name = L"i2";
			this->i2->Size = System::Drawing::Size(75, 70);
			this->i2->TabIndex = 26;
			this->i2->Text = L"i";
			this->i2->UseVisualStyleBackColor = true;
			this->i2->Click += gcnew System::EventHandler(this, &Form1::i2_Click);
			// 
			// u2
			// 
			this->u2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"u2.BackgroundImage")));
			this->u2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->u2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->u2->ForeColor = System::Drawing::Color::Cyan;
			this->u2->Location = System::Drawing::Point(657, 403);
			this->u2->Name = L"u2";
			this->u2->Size = System::Drawing::Size(75, 70);
			this->u2->TabIndex = 25;
			this->u2->Text = L"u";
			this->u2->UseVisualStyleBackColor = true;
			this->u2->Click += gcnew System::EventHandler(this, &Form1::u2_Click);
			// 
			// y2
			// 
			this->y2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"y2.BackgroundImage")));
			this->y2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->y2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->y2->ForeColor = System::Drawing::Color::Cyan;
			this->y2->Location = System::Drawing::Point(576, 403);
			this->y2->Name = L"y2";
			this->y2->Size = System::Drawing::Size(75, 70);
			this->y2->TabIndex = 24;
			this->y2->Text = L"y";
			this->y2->UseVisualStyleBackColor = true;
			this->y2->Click += gcnew System::EventHandler(this, &Form1::y2_Click);
			// 
			// t2
			// 
			this->t2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"t2.BackgroundImage")));
			this->t2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->t2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t2->ForeColor = System::Drawing::Color::Cyan;
			this->t2->Location = System::Drawing::Point(495, 403);
			this->t2->Name = L"t2";
			this->t2->Size = System::Drawing::Size(75, 70);
			this->t2->TabIndex = 23;
			this->t2->Text = L"t";
			this->t2->UseVisualStyleBackColor = true;
			this->t2->Click += gcnew System::EventHandler(this, &Form1::t2_Click);
			// 
			// r2
			// 
			this->r2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r2.BackgroundImage")));
			this->r2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->r2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r2->ForeColor = System::Drawing::Color::Cyan;
			this->r2->Location = System::Drawing::Point(414, 403);
			this->r2->Name = L"r2";
			this->r2->Size = System::Drawing::Size(75, 70);
			this->r2->TabIndex = 22;
			this->r2->Text = L"r";
			this->r2->UseVisualStyleBackColor = true;
			this->r2->Click += gcnew System::EventHandler(this, &Form1::r2_Click);
			// 
			// e2
			// 
			this->e2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"e2.BackgroundImage")));
			this->e2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->e2->ForeColor = System::Drawing::Color::Cyan;
			this->e2->Location = System::Drawing::Point(333, 403);
			this->e2->Name = L"e2";
			this->e2->Size = System::Drawing::Size(75, 70);
			this->e2->TabIndex = 21;
			this->e2->Text = L"e";
			this->e2->UseVisualStyleBackColor = true;
			this->e2->Click += gcnew System::EventHandler(this, &Form1::e2_Click);
			// 
			// w2
			// 
			this->w2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"w2.BackgroundImage")));
			this->w2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->w2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->w2->ForeColor = System::Drawing::Color::Cyan;
			this->w2->Location = System::Drawing::Point(252, 401);
			this->w2->Name = L"w2";
			this->w2->Size = System::Drawing::Size(75, 70);
			this->w2->TabIndex = 20;
			this->w2->Text = L"w";
			this->w2->UseVisualStyleBackColor = true;
			this->w2->Click += gcnew System::EventHandler(this, &Form1::w2_Click);
			// 
			// q2
			// 
			this->q2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"q2.BackgroundImage")));
			this->q2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->q2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q2->ForeColor = System::Drawing::Color::Cyan;
			this->q2->Location = System::Drawing::Point(171, 401);
			this->q2->Name = L"q2";
			this->q2->Size = System::Drawing::Size(75, 70);
			this->q2->TabIndex = 19;
			this->q2->Text = L"q";
			this->q2->UseVisualStyleBackColor = true;
			this->q2->Click += gcnew System::EventHandler(this, &Form1::q2_Click);
			// 
			// m2
			// 
			this->m2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"m2.BackgroundImage")));
			this->m2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->m2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m2->ForeColor = System::Drawing::Color::Cyan;
			this->m2->Location = System::Drawing::Point(657, 555);
			this->m2->Name = L"m2";
			this->m2->Size = System::Drawing::Size(75, 70);
			this->m2->TabIndex = 18;
			this->m2->Text = L"m";
			this->m2->UseVisualStyleBackColor = true;
			this->m2->Click += gcnew System::EventHandler(this, &Form1::m2_Click);
			// 
			// n2
			// 
			this->n2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"n2.BackgroundImage")));
			this->n2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n2->ForeColor = System::Drawing::Color::Cyan;
			this->n2->Location = System::Drawing::Point(576, 555);
			this->n2->Name = L"n2";
			this->n2->Size = System::Drawing::Size(75, 70);
			this->n2->TabIndex = 17;
			this->n2->Text = L"n";
			this->n2->UseVisualStyleBackColor = true;
			this->n2->Click += gcnew System::EventHandler(this, &Form1::n2_Click);
			// 
			// b2
			// 
			this->b2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"b2.BackgroundImage")));
			this->b2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::Color::Cyan;
			this->b2->Location = System::Drawing::Point(495, 555);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(75, 70);
			this->b2->TabIndex = 16;
			this->b2->Text = L"b";
			this->b2->UseVisualStyleBackColor = true;
			this->b2->Click += gcnew System::EventHandler(this, &Form1::b2_Click);
			// 
			// v2
			// 
			this->v2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"v2.BackgroundImage")));
			this->v2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->v2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->v2->ForeColor = System::Drawing::Color::Cyan;
			this->v2->Location = System::Drawing::Point(414, 553);
			this->v2->Name = L"v2";
			this->v2->Size = System::Drawing::Size(75, 70);
			this->v2->TabIndex = 15;
			this->v2->Text = L"v";
			this->v2->UseVisualStyleBackColor = true;
			this->v2->Click += gcnew System::EventHandler(this, &Form1::v2_Click);
			// 
			// c2
			// 
			this->c2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"c2.BackgroundImage")));
			this->c2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c2->ForeColor = System::Drawing::Color::Cyan;
			this->c2->Location = System::Drawing::Point(333, 555);
			this->c2->Name = L"c2";
			this->c2->Size = System::Drawing::Size(75, 70);
			this->c2->TabIndex = 14;
			this->c2->Text = L"c";
			this->c2->UseVisualStyleBackColor = true;
			this->c2->Click += gcnew System::EventHandler(this, &Form1::c2_Click);
			// 
			// x2
			// 
			this->x2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"x2.BackgroundImage")));
			this->x2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->x2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x2->ForeColor = System::Drawing::Color::Cyan;
			this->x2->Location = System::Drawing::Point(252, 553);
			this->x2->Name = L"x2";
			this->x2->Size = System::Drawing::Size(75, 70);
			this->x2->TabIndex = 13;
			this->x2->Text = L"x";
			this->x2->UseVisualStyleBackColor = true;
			this->x2->Click += gcnew System::EventHandler(this, &Form1::x2_Click);
			// 
			// z2
			// 
			this->z2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"z2.BackgroundImage")));
			this->z2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->z2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->z2->ForeColor = System::Drawing::Color::Cyan;
			this->z2->Location = System::Drawing::Point(171, 553);
			this->z2->Name = L"z2";
			this->z2->Size = System::Drawing::Size(75, 70);
			this->z2->TabIndex = 12;
			this->z2->Text = L"z";
			this->z2->UseVisualStyleBackColor = true;
			this->z2->Click += gcnew System::EventHandler(this, &Form1::z2_Click);
			// 
			// l2
			// 
			this->l2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"l2.BackgroundImage")));
			this->l2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->l2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l2->ForeColor = System::Drawing::Color::Cyan;
			this->l2->Location = System::Drawing::Point(819, 479);
			this->l2->Name = L"l2";
			this->l2->Size = System::Drawing::Size(75, 70);
			this->l2->TabIndex = 11;
			this->l2->Text = L"l";
			this->l2->UseVisualStyleBackColor = true;
			this->l2->Click += gcnew System::EventHandler(this, &Form1::l2_Click);
			// 
			// k2
			// 
			this->k2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"k2.BackgroundImage")));
			this->k2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->k2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->k2->ForeColor = System::Drawing::Color::Cyan;
			this->k2->Location = System::Drawing::Point(738, 479);
			this->k2->Name = L"k2";
			this->k2->Size = System::Drawing::Size(75, 70);
			this->k2->TabIndex = 10;
			this->k2->Text = L"k";
			this->k2->UseVisualStyleBackColor = true;
			this->k2->Click += gcnew System::EventHandler(this, &Form1::k2_Click);
			// 
			// j2
			// 
			this->j2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"j2.BackgroundImage")));
			this->j2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->j2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->j2->ForeColor = System::Drawing::Color::Cyan;
			this->j2->Location = System::Drawing::Point(657, 479);
			this->j2->Name = L"j2";
			this->j2->Size = System::Drawing::Size(75, 70);
			this->j2->TabIndex = 9;
			this->j2->Text = L"j";
			this->j2->UseVisualStyleBackColor = true;
			this->j2->Click += gcnew System::EventHandler(this, &Form1::j2_Click);
			// 
			// h2
			// 
			this->h2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"h2.BackgroundImage")));
			this->h2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->h2->ForeColor = System::Drawing::Color::Cyan;
			this->h2->Location = System::Drawing::Point(576, 479);
			this->h2->Name = L"h2";
			this->h2->Size = System::Drawing::Size(75, 70);
			this->h2->TabIndex = 8;
			this->h2->Text = L"h";
			this->h2->UseVisualStyleBackColor = true;
			this->h2->Click += gcnew System::EventHandler(this, &Form1::h2_Click);
			// 
			// g2
			// 
			this->g2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"g2.BackgroundImage")));
			this->g2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->g2->ForeColor = System::Drawing::Color::Cyan;
			this->g2->Location = System::Drawing::Point(495, 479);
			this->g2->Name = L"g2";
			this->g2->Size = System::Drawing::Size(75, 70);
			this->g2->TabIndex = 7;
			this->g2->Text = L"g";
			this->g2->UseVisualStyleBackColor = true;
			this->g2->Click += gcnew System::EventHandler(this, &Form1::g2_Click);
			// 
			// f2
			// 
			this->f2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f2.BackgroundImage")));
			this->f2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f2->ForeColor = System::Drawing::Color::Cyan;
			this->f2->Location = System::Drawing::Point(414, 477);
			this->f2->Name = L"f2";
			this->f2->Size = System::Drawing::Size(75, 70);
			this->f2->TabIndex = 6;
			this->f2->Text = L"f";
			this->f2->UseVisualStyleBackColor = true;
			this->f2->Click += gcnew System::EventHandler(this, &Form1::f2_Click);
			// 
			// d2
			// 
			this->d2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"d2.BackgroundImage")));
			this->d2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d2->ForeColor = System::Drawing::Color::Cyan;
			this->d2->Location = System::Drawing::Point(333, 479);
			this->d2->Name = L"d2";
			this->d2->Size = System::Drawing::Size(75, 70);
			this->d2->TabIndex = 5;
			this->d2->Text = L"d";
			this->d2->UseVisualStyleBackColor = true;
			this->d2->Click += gcnew System::EventHandler(this, &Form1::d2_Click);
			// 
			// s2
			// 
			this->s2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"s2.BackgroundImage")));
			this->s2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->s2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s2->ForeColor = System::Drawing::Color::Cyan;
			this->s2->Location = System::Drawing::Point(252, 477);
			this->s2->Name = L"s2";
			this->s2->Size = System::Drawing::Size(75, 70);
			this->s2->TabIndex = 4;
			this->s2->Text = L"s";
			this->s2->UseVisualStyleBackColor = true;
			this->s2->Click += gcnew System::EventHandler(this, &Form1::s2_Click);
			// 
			// a2
			// 
			this->a2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"a2.BackgroundImage")));
			this->a2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a2->ForeColor = System::Drawing::Color::Cyan;
			this->a2->Location = System::Drawing::Point(171, 477);
			this->a2->Name = L"a2";
			this->a2->Size = System::Drawing::Size(75, 70);
			this->a2->TabIndex = 3;
			this->a2->Text = L"a";
			this->a2->UseVisualStyleBackColor = true;
			this->a2->Click += gcnew System::EventHandler(this, &Form1::a2_Click);
			// 
			// MPWordScreen
			// 
			this->MPWordScreen->AutoSize = true;
			this->MPWordScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->MPWordScreen->ForeColor = System::Drawing::Color::Yellow;
			this->MPWordScreen->Location = System::Drawing::Point(314, 189);
			this->MPWordScreen->Name = L"MPWordScreen";
			this->MPWordScreen->Size = System::Drawing::Size(274, 62);
			this->MPWordScreen->TabIndex = 2;
			this->MPWordScreen->Text = L"The Word";
			// 
			// btnMPBack
			// 
			this->btnMPBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnMPBack.BackgroundImage")));
			this->btnMPBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMPBack->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnMPBack->ForeColor = System::Drawing::Color::Lime;
			this->btnMPBack->Location = System::Drawing::Point(1214, 682);
			this->btnMPBack->Name = L"btnMPBack";
			this->btnMPBack->Size = System::Drawing::Size(222, 67);
			this->btnMPBack->TabIndex = 1;
			this->btnMPBack->Text = L"Back";
			this->btnMPBack->UseVisualStyleBackColor = true;
			this->btnMPBack->Click += gcnew System::EventHandler(this, &Form1::btnMPBack_Click);
			// 
			// tabSinglePlayer
			// 
			this->tabSinglePlayer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabSinglePlayer.BackgroundImage")));
			this->tabSinglePlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabSinglePlayer->Controls->Add(this->ScoreScreen);
			this->tabSinglePlayer->Controls->Add(this->label12);
			this->tabSinglePlayer->Controls->Add(this->label6);
			this->tabSinglePlayer->Controls->Add(this->CategoryScreen);
			this->tabSinglePlayer->Controls->Add(this->label5);
			this->tabSinglePlayer->Controls->Add(this->LettersScreen);
			this->tabSinglePlayer->Controls->Add(this->Box);
			this->tabSinglePlayer->Controls->Add(this->ButtonHint);
			this->tabSinglePlayer->Controls->Add(this->HintScreen);
			this->tabSinglePlayer->Controls->Add(this->HintsLabel);
			this->tabSinglePlayer->Controls->Add(this->LevelScreen);
			this->tabSinglePlayer->Controls->Add(this->LevelLabel);
			this->tabSinglePlayer->Controls->Add(this->LifesScreen);
			this->tabSinglePlayer->Controls->Add(this->LifesLabel);
			this->tabSinglePlayer->Controls->Add(this->num0);
			this->tabSinglePlayer->Controls->Add(this->num9);
			this->tabSinglePlayer->Controls->Add(this->num8);
			this->tabSinglePlayer->Controls->Add(this->num7);
			this->tabSinglePlayer->Controls->Add(this->num6);
			this->tabSinglePlayer->Controls->Add(this->num5);
			this->tabSinglePlayer->Controls->Add(this->num4);
			this->tabSinglePlayer->Controls->Add(this->num3);
			this->tabSinglePlayer->Controls->Add(this->num2);
			this->tabSinglePlayer->Controls->Add(this->num1);
			this->tabSinglePlayer->Controls->Add(this->m);
			this->tabSinglePlayer->Controls->Add(this->n);
			this->tabSinglePlayer->Controls->Add(this->b);
			this->tabSinglePlayer->Controls->Add(this->v);
			this->tabSinglePlayer->Controls->Add(this->c);
			this->tabSinglePlayer->Controls->Add(this->x);
			this->tabSinglePlayer->Controls->Add(this->z);
			this->tabSinglePlayer->Controls->Add(this->l);
			this->tabSinglePlayer->Controls->Add(this->k);
			this->tabSinglePlayer->Controls->Add(this->j);
			this->tabSinglePlayer->Controls->Add(this->h);
			this->tabSinglePlayer->Controls->Add(this->g);
			this->tabSinglePlayer->Controls->Add(this->f);
			this->tabSinglePlayer->Controls->Add(this->p);
			this->tabSinglePlayer->Controls->Add(this->i);
			this->tabSinglePlayer->Controls->Add(this->u);
			this->tabSinglePlayer->Controls->Add(this->y);
			this->tabSinglePlayer->Controls->Add(this->r);
			this->tabSinglePlayer->Controls->Add(this->e);
			this->tabSinglePlayer->Controls->Add(this->q);
			this->tabSinglePlayer->Controls->Add(this->w);
			this->tabSinglePlayer->Controls->Add(this->d);
			this->tabSinglePlayer->Controls->Add(this->s);
			this->tabSinglePlayer->Controls->Add(this->word);
			this->tabSinglePlayer->Controls->Add(this->t);
			this->tabSinglePlayer->Controls->Add(this->o);
			this->tabSinglePlayer->Controls->Add(this->a);
			this->tabSinglePlayer->Controls->Add(this->btnSPBack);
			this->tabSinglePlayer->Location = System::Drawing::Point(4, 25);
			this->tabSinglePlayer->Name = L"tabSinglePlayer";
			this->tabSinglePlayer->Padding = System::Windows::Forms::Padding(3);
			this->tabSinglePlayer->Size = System::Drawing::Size(1485, 758);
			this->tabSinglePlayer->TabIndex = 1;
			this->tabSinglePlayer->Text = L"Single Player";
			this->tabSinglePlayer->UseVisualStyleBackColor = true;
			this->tabSinglePlayer->Click += gcnew System::EventHandler(this, &Form1::tabSinglePlayer_Click);
			// 
			// ScoreScreen
			// 
			this->ScoreScreen->AutoSize = true;
			this->ScoreScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ScoreScreen->ForeColor = System::Drawing::Color::Cyan;
			this->ScoreScreen->Location = System::Drawing::Point(1053, 27);
			this->ScoreScreen->Name = L"ScoreScreen";
			this->ScoreScreen->Size = System::Drawing::Size(34, 44);
			this->ScoreScreen->TabIndex = 98;
			this->ScoreScreen->Text = L"-";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::Cyan;
			this->label12->Location = System::Drawing::Point(855, 16);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(207, 62);
			this->label12->TabIndex = 97;
			this->label12->Text = L"Score :";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe Print", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Yellow;
			this->label6->Location = System::Drawing::Point(960, 478);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 58);
			this->label6->TabIndex = 96;
			// 
			// CategoryScreen
			// 
			this->CategoryScreen->AutoSize = true;
			this->CategoryScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CategoryScreen->ForeColor = System::Drawing::Color::Yellow;
			this->CategoryScreen->Location = System::Drawing::Point(456, 118);
			this->CategoryScreen->Name = L"CategoryScreen";
			this->CategoryScreen->Size = System::Drawing::Size(46, 62);
			this->CategoryScreen->TabIndex = 95;
			this->CategoryScreen->Text = L"-";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Yellow;
			this->label5->Location = System::Drawing::Point(159, 118);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(304, 62);
			this->label5->TabIndex = 94;
			this->label5->Text = L"Category :";
			// 
			// LettersScreen
			// 
			this->LettersScreen->AutoSize = true;
			this->LettersScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LettersScreen->ForeColor = System::Drawing::Color::Yellow;
			this->LettersScreen->Location = System::Drawing::Point(923, 547);
			this->LettersScreen->Name = L"LettersScreen";
			this->LettersScreen->Size = System::Drawing::Size(748, 51);
			this->LettersScreen->TabIndex = 92;
			this->LettersScreen->Text = L"Your Letters                                          ";
			this->LettersScreen->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Box
			// 
			this->Box->BackColor = System::Drawing::Color::Black;
			this->Box->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"Box.BackgroundImage")));
			this->Box->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Box->Location = System::Drawing::Point(929, 108);
			this->Box->Name = L"Box";
			this->Box->Size = System::Drawing::Size(412, 367);
			this->Box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box->TabIndex = 91;
			this->Box->TabStop = false;
			this->Box->Click += gcnew System::EventHandler(this, &Form1::Box_Click);
			// 
			// ButtonHint
			// 
			this->ButtonHint->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"ButtonHint.BackgroundImage")));
			this->ButtonHint->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ButtonHint->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->ButtonHint->ForeColor = System::Drawing::Color::Khaki;
			this->ButtonHint->Location = System::Drawing::Point(743, 118);
			this->ButtonHint->Name = L"ButtonHint";
			this->ButtonHint->Size = System::Drawing::Size(156, 72);
			this->ButtonHint->TabIndex = 90;
			this->ButtonHint->Text = L"Hint";
			this->ButtonHint->UseVisualStyleBackColor = true;
			this->ButtonHint->Click += gcnew System::EventHandler(this, &Form1::ButtonHint_Click);
			// 
			// HintScreen
			// 
			this->HintScreen->AutoSize = true;
			this->HintScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HintScreen->ForeColor = System::Drawing::Color::Cyan;
			this->HintScreen->Location = System::Drawing::Point(723, 12);
			this->HintScreen->Name = L"HintScreen";
			this->HintScreen->Size = System::Drawing::Size(46, 62);
			this->HintScreen->TabIndex = 89;
			this->HintScreen->Text = L"-";
			// 
			// HintsLabel
			// 
			this->HintsLabel->AutoSize = true;
			this->HintsLabel->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->HintsLabel->ForeColor = System::Drawing::Color::Cyan;
			this->HintsLabel->Location = System::Drawing::Point(560, 12);
			this->HintsLabel->Name = L"HintsLabel";
			this->HintsLabel->Size = System::Drawing::Size(177, 62);
			this->HintsLabel->TabIndex = 88;
			this->HintsLabel->Text = L"Hints :";
			// 
			// LevelScreen
			// 
			this->LevelScreen->AutoSize = true;
			this->LevelScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LevelScreen->ForeColor = System::Drawing::Color::Cyan;
			this->LevelScreen->Location = System::Drawing::Point(481, 16);
			this->LevelScreen->Name = L"LevelScreen";
			this->LevelScreen->Size = System::Drawing::Size(60, 62);
			this->LevelScreen->TabIndex = 87;
			this->LevelScreen->Text = L" -";
			// 
			// LevelLabel
			// 
			this->LevelLabel->AutoSize = true;
			this->LevelLabel->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LevelLabel->ForeColor = System::Drawing::Color::Cyan;
			this->LevelLabel->Location = System::Drawing::Point(300, 16);
			this->LevelLabel->Name = L"LevelLabel";
			this->LevelLabel->Size = System::Drawing::Size(192, 62);
			this->LevelLabel->TabIndex = 86;
			this->LevelLabel->Text = L"Level :";
			// 
			// LifesScreen
			// 
			this->LifesScreen->AutoSize = true;
			this->LifesScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LifesScreen->ForeColor = System::Drawing::Color::Cyan;
			this->LifesScreen->Location = System::Drawing::Point(224, 16);
			this->LifesScreen->Name = L"LifesScreen";
			this->LifesScreen->Size = System::Drawing::Size(60, 62);
			this->LifesScreen->TabIndex = 85;
			this->LifesScreen->Text = L" -";
			// 
			// LifesLabel
			// 
			this->LifesLabel->AutoSize = true;
			this->LifesLabel->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->LifesLabel->ForeColor = System::Drawing::Color::Cyan;
			this->LifesLabel->Location = System::Drawing::Point(71, 16);
			this->LifesLabel->Name = L"LifesLabel";
			this->LifesLabel->Size = System::Drawing::Size(185, 62);
			this->LifesLabel->TabIndex = 84;
			this->LifesLabel->Text = L"Lifes : ";
			// 
			// num0
			// 
			this->num0->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num0->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num0.BackgroundImage")));
			this->num0->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num0->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num0->ForeColor = System::Drawing::Color::Fuchsia;
			this->num0->Location = System::Drawing::Point(842, 358);
			this->num0->Name = L"num0";
			this->num0->Size = System::Drawing::Size(70, 65);
			this->num0->TabIndex = 36;
			this->num0->Text = L"0";
			this->num0->UseVisualStyleBackColor = false;
			this->num0->Click += gcnew System::EventHandler(this, &Form1::num0_Click);
			// 
			// num9
			// 
			this->num9->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num9.BackgroundImage")));
			this->num9->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num9->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num9->ForeColor = System::Drawing::Color::Fuchsia;
			this->num9->Location = System::Drawing::Point(766, 358);
			this->num9->Name = L"num9";
			this->num9->Size = System::Drawing::Size(70, 65);
			this->num9->TabIndex = 35;
			this->num9->Text = L"9";
			this->num9->UseVisualStyleBackColor = false;
			this->num9->Click += gcnew System::EventHandler(this, &Form1::num9_Click);
			// 
			// num8
			// 
			this->num8->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num8.BackgroundImage")));
			this->num8->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num8->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num8->ForeColor = System::Drawing::Color::Fuchsia;
			this->num8->Location = System::Drawing::Point(690, 358);
			this->num8->Name = L"num8";
			this->num8->Size = System::Drawing::Size(70, 65);
			this->num8->TabIndex = 34;
			this->num8->Text = L"8";
			this->num8->UseVisualStyleBackColor = false;
			this->num8->Click += gcnew System::EventHandler(this, &Form1::num8_Click);
			// 
			// num7
			// 
			this->num7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num7.BackgroundImage")));
			this->num7->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num7->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num7->ForeColor = System::Drawing::Color::Fuchsia;
			this->num7->Location = System::Drawing::Point(614, 358);
			this->num7->Name = L"num7";
			this->num7->Size = System::Drawing::Size(70, 65);
			this->num7->TabIndex = 33;
			this->num7->Text = L"7";
			this->num7->UseVisualStyleBackColor = false;
			this->num7->Click += gcnew System::EventHandler(this, &Form1::num7_Click);
			// 
			// num6
			// 
			this->num6->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num6.BackgroundImage")));
			this->num6->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num6->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num6->ForeColor = System::Drawing::Color::Fuchsia;
			this->num6->Location = System::Drawing::Point(538, 358);
			this->num6->Name = L"num6";
			this->num6->Size = System::Drawing::Size(70, 65);
			this->num6->TabIndex = 32;
			this->num6->Text = L"6";
			this->num6->UseVisualStyleBackColor = false;
			this->num6->Click += gcnew System::EventHandler(this, &Form1::num6_Click);
			// 
			// num5
			// 
			this->num5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num5.BackgroundImage")));
			this->num5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num5->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num5->ForeColor = System::Drawing::Color::Fuchsia;
			this->num5->Location = System::Drawing::Point(462, 358);
			this->num5->Name = L"num5";
			this->num5->Size = System::Drawing::Size(70, 65);
			this->num5->TabIndex = 31;
			this->num5->Text = L"5";
			this->num5->UseVisualStyleBackColor = false;
			this->num5->Click += gcnew System::EventHandler(this, &Form1::num5_Click);
			// 
			// num4
			// 
			this->num4->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num4.BackgroundImage")));
			this->num4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num4->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num4->ForeColor = System::Drawing::Color::Fuchsia;
			this->num4->Location = System::Drawing::Point(386, 358);
			this->num4->Name = L"num4";
			this->num4->Size = System::Drawing::Size(70, 65);
			this->num4->TabIndex = 30;
			this->num4->Text = L"4";
			this->num4->UseVisualStyleBackColor = false;
			this->num4->Click += gcnew System::EventHandler(this, &Form1::num4_Click);
			// 
			// num3
			// 
			this->num3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num3.BackgroundImage")));
			this->num3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num3->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num3->ForeColor = System::Drawing::Color::Fuchsia;
			this->num3->Location = System::Drawing::Point(311, 358);
			this->num3->Name = L"num3";
			this->num3->Size = System::Drawing::Size(70, 65);
			this->num3->TabIndex = 29;
			this->num3->Text = L"3";
			this->num3->UseVisualStyleBackColor = false;
			this->num3->Click += gcnew System::EventHandler(this, &Form1::num3_Click);
			// 
			// num2
			// 
			this->num2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num2.BackgroundImage")));
			this->num2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num2->ForeColor = System::Drawing::Color::Fuchsia;
			this->num2->Location = System::Drawing::Point(235, 358);
			this->num2->Name = L"num2";
			this->num2->Size = System::Drawing::Size(70, 65);
			this->num2->TabIndex = 28;
			this->num2->Text = L"2";
			this->num2->UseVisualStyleBackColor = false;
			this->num2->Click += gcnew System::EventHandler(this, &Form1::num2_Click);
			// 
			// num1
			// 
			this->num1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->num1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"num1.BackgroundImage")));
			this->num1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->num1->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->num1->ForeColor = System::Drawing::Color::Fuchsia;
			this->num1->Location = System::Drawing::Point(159, 358);
			this->num1->Name = L"num1";
			this->num1->Size = System::Drawing::Size(70, 65);
			this->num1->TabIndex = 27;
			this->num1->Text = L"1";
			this->num1->UseVisualStyleBackColor = false;
			this->num1->Click += gcnew System::EventHandler(this, &Form1::num1_Click);
			// 
			// m
			// 
			this->m->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->m->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"m.BackgroundImage")));
			this->m->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->m->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->m->ForeColor = System::Drawing::Color::Fuchsia;
			this->m->Location = System::Drawing::Point(701, 566);
			this->m->Name = L"m";
			this->m->Size = System::Drawing::Size(70, 65);
			this->m->TabIndex = 26;
			this->m->Text = L"m";
			this->m->UseVisualStyleBackColor = false;
			this->m->Click += gcnew System::EventHandler(this, &Form1::m_Click);
			// 
			// n
			// 
			this->n->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->n->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"n.BackgroundImage")));
			this->n->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->n->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->n->ForeColor = System::Drawing::Color::Fuchsia;
			this->n->Location = System::Drawing::Point(625, 566);
			this->n->Name = L"n";
			this->n->Size = System::Drawing::Size(70, 65);
			this->n->TabIndex = 25;
			this->n->Text = L"n";
			this->n->UseVisualStyleBackColor = false;
			this->n->Click += gcnew System::EventHandler(this, &Form1::n_Click);
			// 
			// b
			// 
			this->b->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->b->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"b.BackgroundImage")));
			this->b->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->b->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->b->ForeColor = System::Drawing::Color::Fuchsia;
			this->b->Location = System::Drawing::Point(550, 566);
			this->b->Name = L"b";
			this->b->Size = System::Drawing::Size(70, 65);
			this->b->TabIndex = 24;
			this->b->Text = L"b";
			this->b->UseVisualStyleBackColor = false;
			this->b->Click += gcnew System::EventHandler(this, &Form1::b_Click);
			// 
			// v
			// 
			this->v->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->v->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"v.BackgroundImage")));
			this->v->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->v->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->v->ForeColor = System::Drawing::Color::Fuchsia;
			this->v->Location = System::Drawing::Point(473, 566);
			this->v->Name = L"v";
			this->v->Size = System::Drawing::Size(70, 65);
			this->v->TabIndex = 23;
			this->v->Text = L"v";
			this->v->UseVisualStyleBackColor = false;
			this->v->Click += gcnew System::EventHandler(this, &Form1::v_Click);
			// 
			// c
			// 
			this->c->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->c->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"c.BackgroundImage")));
			this->c->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->c->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->c->ForeColor = System::Drawing::Color::Fuchsia;
			this->c->Location = System::Drawing::Point(397, 566);
			this->c->Name = L"c";
			this->c->Size = System::Drawing::Size(70, 65);
			this->c->TabIndex = 22;
			this->c->Text = L"c";
			this->c->UseVisualStyleBackColor = false;
			this->c->Click += gcnew System::EventHandler(this, &Form1::c_Click);
			// 
			// x
			// 
			this->x->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->x->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"x.BackgroundImage")));
			this->x->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->x->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->x->ForeColor = System::Drawing::Color::Fuchsia;
			this->x->Location = System::Drawing::Point(321, 566);
			this->x->Name = L"x";
			this->x->Size = System::Drawing::Size(70, 65);
			this->x->TabIndex = 21;
			this->x->Text = L"x";
			this->x->UseVisualStyleBackColor = false;
			this->x->Click += gcnew System::EventHandler(this, &Form1::x_Click);
			// 
			// z
			// 
			this->z->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->z->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"z.BackgroundImage")));
			this->z->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->z->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->z->ForeColor = System::Drawing::Color::Fuchsia;
			this->z->Location = System::Drawing::Point(245, 566);
			this->z->Name = L"z";
			this->z->Size = System::Drawing::Size(70, 65);
			this->z->TabIndex = 20;
			this->z->Text = L"z";
			this->z->UseVisualStyleBackColor = false;
			this->z->Click += gcnew System::EventHandler(this, &Form1::z_Click);
			// 
			// l
			// 
			this->l->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->l->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"l.BackgroundImage")));
			this->l->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->l->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->l->ForeColor = System::Drawing::Color::Fuchsia;
			this->l->Location = System::Drawing::Point(842, 500);
			this->l->Name = L"l";
			this->l->Size = System::Drawing::Size(75, 60);
			this->l->TabIndex = 19;
			this->l->Text = L"l";
			this->l->UseVisualStyleBackColor = false;
			this->l->Click += gcnew System::EventHandler(this, &Form1::l_Click);
			// 
			// k
			// 
			this->k->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->k->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"k.BackgroundImage")));
			this->k->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->k->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->k->ForeColor = System::Drawing::Color::Fuchsia;
			this->k->Location = System::Drawing::Point(761, 500);
			this->k->Name = L"k";
			this->k->Size = System::Drawing::Size(75, 60);
			this->k->TabIndex = 18;
			this->k->Text = L"k";
			this->k->UseVisualStyleBackColor = false;
			this->k->Click += gcnew System::EventHandler(this, &Form1::k_Click);
			// 
			// j
			// 
			this->j->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->j->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"j.BackgroundImage")));
			this->j->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->j->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->j->ForeColor = System::Drawing::Color::Fuchsia;
			this->j->Location = System::Drawing::Point(680, 500);
			this->j->Name = L"j";
			this->j->Size = System::Drawing::Size(75, 60);
			this->j->TabIndex = 17;
			this->j->Text = L"j";
			this->j->UseVisualStyleBackColor = false;
			this->j->Click += gcnew System::EventHandler(this, &Form1::j_Click);
			// 
			// h
			// 
			this->h->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->h->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"h.BackgroundImage")));
			this->h->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->h->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->h->ForeColor = System::Drawing::Color::Fuchsia;
			this->h->Location = System::Drawing::Point(599, 500);
			this->h->Name = L"h";
			this->h->Size = System::Drawing::Size(75, 60);
			this->h->TabIndex = 16;
			this->h->Text = L"h";
			this->h->UseVisualStyleBackColor = false;
			this->h->Click += gcnew System::EventHandler(this, &Form1::h_Click);
			// 
			// g
			// 
			this->g->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->g->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"g.BackgroundImage")));
			this->g->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->g->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->g->ForeColor = System::Drawing::Color::Fuchsia;
			this->g->Location = System::Drawing::Point(518, 500);
			this->g->Name = L"g";
			this->g->Size = System::Drawing::Size(75, 60);
			this->g->TabIndex = 15;
			this->g->Text = L"g";
			this->g->UseVisualStyleBackColor = false;
			this->g->Click += gcnew System::EventHandler(this, &Form1::g_Click);
			// 
			// f
			// 
			this->f->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->f->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"f.BackgroundImage")));
			this->f->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->f->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->f->ForeColor = System::Drawing::Color::Fuchsia;
			this->f->Location = System::Drawing::Point(437, 500);
			this->f->Name = L"f";
			this->f->Size = System::Drawing::Size(75, 60);
			this->f->TabIndex = 14;
			this->f->Text = L"f";
			this->f->UseVisualStyleBackColor = false;
			this->f->Click += gcnew System::EventHandler(this, &Form1::f_Click);
			// 
			// p
			// 
			this->p->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->p->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"p.BackgroundImage")));
			this->p->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->p->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->p->ForeColor = System::Drawing::Color::Fuchsia;
			this->p->Location = System::Drawing::Point(853, 429);
			this->p->Name = L"p";
			this->p->Size = System::Drawing::Size(70, 65);
			this->p->TabIndex = 13;
			this->p->Text = L"p";
			this->p->UseVisualStyleBackColor = false;
			this->p->Click += gcnew System::EventHandler(this, &Form1::p_Click);
			// 
			// i
			// 
			this->i->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->i->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"i.BackgroundImage")));
			this->i->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->i->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->i->ForeColor = System::Drawing::Color::Fuchsia;
			this->i->Location = System::Drawing::Point(701, 429);
			this->i->Name = L"i";
			this->i->Size = System::Drawing::Size(70, 65);
			this->i->TabIndex = 12;
			this->i->Text = L"i";
			this->i->UseVisualStyleBackColor = false;
			this->i->Click += gcnew System::EventHandler(this, &Form1::i_Click);
			// 
			// u
			// 
			this->u->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->u->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"u.BackgroundImage")));
			this->u->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->u->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->u->ForeColor = System::Drawing::Color::Fuchsia;
			this->u->Location = System::Drawing::Point(625, 429);
			this->u->Name = L"u";
			this->u->Size = System::Drawing::Size(70, 65);
			this->u->TabIndex = 11;
			this->u->Text = L"u";
			this->u->UseVisualStyleBackColor = false;
			this->u->Click += gcnew System::EventHandler(this, &Form1::u_Click);
			// 
			// y
			// 
			this->y->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->y->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"y.BackgroundImage")));
			this->y->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->y->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->y->ForeColor = System::Drawing::Color::Fuchsia;
			this->y->Location = System::Drawing::Point(550, 429);
			this->y->Name = L"y";
			this->y->Size = System::Drawing::Size(70, 65);
			this->y->TabIndex = 10;
			this->y->Text = L"y";
			this->y->UseVisualStyleBackColor = false;
			this->y->Click += gcnew System::EventHandler(this, &Form1::y_Click);
			// 
			// r
			// 
			this->r->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->r->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"r.BackgroundImage")));
			this->r->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->r->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->r->ForeColor = System::Drawing::Color::Fuchsia;
			this->r->Location = System::Drawing::Point(398, 429);
			this->r->Name = L"r";
			this->r->Size = System::Drawing::Size(70, 65);
			this->r->TabIndex = 9;
			this->r->Text = L"r";
			this->r->UseVisualStyleBackColor = false;
			this->r->Click += gcnew System::EventHandler(this, &Form1::r_Click);
			// 
			// e
			// 
			this->e->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->e->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"e.BackgroundImage")));
			this->e->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->e->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->e->ForeColor = System::Drawing::Color::Fuchsia;
			this->e->Location = System::Drawing::Point(321, 429);
			this->e->Name = L"e";
			this->e->Size = System::Drawing::Size(70, 65);
			this->e->TabIndex = 8;
			this->e->Text = L"e";
			this->e->UseVisualStyleBackColor = false;
			this->e->Click += gcnew System::EventHandler(this, &Form1::e_Click);
			// 
			// q
			// 
			this->q->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->q->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"q.BackgroundImage")));
			this->q->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->q->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->q->ForeColor = System::Drawing::Color::Fuchsia;
			this->q->Location = System::Drawing::Point(169, 429);
			this->q->Name = L"q";
			this->q->Size = System::Drawing::Size(70, 65);
			this->q->TabIndex = 7;
			this->q->Text = L"q";
			this->q->UseVisualStyleBackColor = false;
			this->q->Click += gcnew System::EventHandler(this, &Form1::q_Click);
			// 
			// w
			// 
			this->w->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->w->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"w.BackgroundImage")));
			this->w->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->w->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->w->ForeColor = System::Drawing::Color::Fuchsia;
			this->w->Location = System::Drawing::Point(245, 429);
			this->w->Name = L"w";
			this->w->Size = System::Drawing::Size(70, 65);
			this->w->TabIndex = 6;
			this->w->Text = L"w";
			this->w->UseVisualStyleBackColor = false;
			this->w->Click += gcnew System::EventHandler(this, &Form1::w_Click);
			// 
			// d
			// 
			this->d->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->d->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"d.BackgroundImage")));
			this->d->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->d->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->d->ForeColor = System::Drawing::Color::Fuchsia;
			this->d->Location = System::Drawing::Point(356, 500);
			this->d->Name = L"d";
			this->d->Size = System::Drawing::Size(75, 60);
			this->d->TabIndex = 5;
			this->d->Text = L"d";
			this->d->UseVisualStyleBackColor = false;
			this->d->Click += gcnew System::EventHandler(this, &Form1::d_Click);
			// 
			// s
			// 
			this->s->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->s->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"s.BackgroundImage")));
			this->s->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->s->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->s->ForeColor = System::Drawing::Color::Fuchsia;
			this->s->Location = System::Drawing::Point(275, 500);
			this->s->Name = L"s";
			this->s->Size = System::Drawing::Size(75, 60);
			this->s->TabIndex = 4;
			this->s->Text = L"s";
			this->s->UseVisualStyleBackColor = false;
			this->s->Click += gcnew System::EventHandler(this, &Form1::s_Click);
			// 
			// word
			// 
			this->word->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->word->ForeColor = System::Drawing::Color::Yellow;
			this->word->Location = System::Drawing::Point(206, 226);
			this->word->Name = L"word";
			this->word->Size = System::Drawing::Size(658, 73);
			this->word->TabIndex = 93;
			this->word->Text = L"Click Any button to start";
			// 
			// t
			// 
			this->t->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->t->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"t.BackgroundImage")));
			this->t->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->t->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->t->ForeColor = System::Drawing::Color::Fuchsia;
			this->t->Location = System::Drawing::Point(474, 429);
			this->t->Name = L"t";
			this->t->Size = System::Drawing::Size(70, 65);
			this->t->TabIndex = 2;
			this->t->Text = L"t";
			this->t->UseVisualStyleBackColor = false;
			this->t->Click += gcnew System::EventHandler(this, &Form1::t_Click);
			// 
			// o
			// 
			this->o->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->o->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"o.BackgroundImage")));
			this->o->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->o->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->o->ForeColor = System::Drawing::Color::Fuchsia;
			this->o->Location = System::Drawing::Point(777, 429);
			this->o->Name = L"o";
			this->o->Size = System::Drawing::Size(70, 65);
			this->o->TabIndex = 1;
			this->o->Text = L"o";
			this->o->UseVisualStyleBackColor = false;
			this->o->Click += gcnew System::EventHandler(this, &Form1::o_Click);
			// 
			// a
			// 
			this->a->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->a->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"a.BackgroundImage")));
			this->a->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->a->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->a->ForeColor = System::Drawing::Color::Fuchsia;
			this->a->Location = System::Drawing::Point(194, 500);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(75, 60);
			this->a->TabIndex = 0;
			this->a->Text = L"a";
			this->a->UseVisualStyleBackColor = false;
			this->a->Click += gcnew System::EventHandler(this, &Form1::a_Click);
			// 
			// btnSPBack
			// 
			this->btnSPBack->BackColor = System::Drawing::Color::Transparent;
			this->btnSPBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnSPBack.BackgroundImage")));
			this->btnSPBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSPBack->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnSPBack->ForeColor = System::Drawing::Color::Yellow;
			this->btnSPBack->Location = System::Drawing::Point(1225, 681);
			this->btnSPBack->Name = L"btnSPBack";
			this->btnSPBack->Size = System::Drawing::Size(231, 68);
			this->btnSPBack->TabIndex = 0;
			this->btnSPBack->Text = L"Back";
			this->btnSPBack->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->btnSPBack->UseVisualStyleBackColor = false;
			this->btnSPBack->Click += gcnew System::EventHandler(this, &Form1::btnSPBack_Click);
			// 
			// tabMainMenu
			// 
			this->tabMainMenu->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabMainMenu.BackgroundImage")));
			this->tabMainMenu->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabMainMenu->Controls->Add(this->label7);
			this->tabMainMenu->Controls->Add(this->btnExit);
			this->tabMainMenu->Controls->Add(this->btnAboutUs);
			this->tabMainMenu->Controls->Add(this->btnHallOfFame);
			this->tabMainMenu->Controls->Add(this->btnMultiPlayer);
			this->tabMainMenu->Controls->Add(this->btnSinglePlayer);
			this->tabMainMenu->Location = System::Drawing::Point(4, 25);
			this->tabMainMenu->Name = L"tabMainMenu";
			this->tabMainMenu->Padding = System::Windows::Forms::Padding(3);
			this->tabMainMenu->Size = System::Drawing::Size(1485, 758);
			this->tabMainMenu->TabIndex = 0;
			this->tabMainMenu->Text = L"Main Menu";
			this->tabMainMenu->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 61.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Fuchsia;
			this->label7->Location = System::Drawing::Point(141, 122);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(1157, 130);
			this->label7->TabIndex = 5;
			this->label7->Text = L"HangMan the Game";
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnExit->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnExit->ForeColor = System::Drawing::Color::Red;
			this->btnExit->Location = System::Drawing::Point(1148, 571);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(190, 66);
			this->btnExit->TabIndex = 4;
			this->btnExit->Text = L"Exit";
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &Form1::btnExit_Click);
			// 
			// btnAboutUs
			// 
			this->btnAboutUs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnAboutUs.BackgroundImage")));
			this->btnAboutUs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAboutUs->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAboutUs->ForeColor = System::Drawing::Color::Cyan;
			this->btnAboutUs->Location = System::Drawing::Point(846, 571);
			this->btnAboutUs->Name = L"btnAboutUs";
			this->btnAboutUs->Size = System::Drawing::Size(286, 66);
			this->btnAboutUs->TabIndex = 3;
			this->btnAboutUs->Text = L"About Us";
			this->btnAboutUs->UseVisualStyleBackColor = true;
			this->btnAboutUs->Click += gcnew System::EventHandler(this, &Form1::btnAboutUs_Click);
			// 
			// btnHallOfFame
			// 
			this->btnHallOfFame->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnHallOfFame.BackgroundImage")));
			this->btnHallOfFame->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnHallOfFame->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnHallOfFame->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnHallOfFame->Location = System::Drawing::Point(500, 456);
			this->btnHallOfFame->Name = L"btnHallOfFame";
			this->btnHallOfFame->Size = System::Drawing::Size(460, 98);
			this->btnHallOfFame->TabIndex = 2;
			this->btnHallOfFame->Text = L"Hall Of Fame";
			this->btnHallOfFame->UseVisualStyleBackColor = true;
			this->btnHallOfFame->Click += gcnew System::EventHandler(this, &Form1::btnHallOfFame_Click);
			// 
			// btnMultiPlayer
			// 
			this->btnMultiPlayer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnMultiPlayer.BackgroundImage")));
			this->btnMultiPlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnMultiPlayer->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnMultiPlayer->ForeColor = System::Drawing::Color::Lime;
			this->btnMultiPlayer->Location = System::Drawing::Point(769, 269);
			this->btnMultiPlayer->Name = L"btnMultiPlayer";
			this->btnMultiPlayer->Size = System::Drawing::Size(418, 167);
			this->btnMultiPlayer->TabIndex = 1;
			this->btnMultiPlayer->Text = L"Multi Player";
			this->btnMultiPlayer->UseVisualStyleBackColor = true;
			this->btnMultiPlayer->Click += gcnew System::EventHandler(this, &Form1::btnMultiPlayer_Click);
			// 
			// btnSinglePlayer
			// 
			this->btnSinglePlayer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnSinglePlayer.BackgroundImage")));
			this->btnSinglePlayer->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnSinglePlayer->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->btnSinglePlayer->ForeColor = System::Drawing::Color::Yellow;
			this->btnSinglePlayer->Location = System::Drawing::Point(259, 269);
			this->btnSinglePlayer->Name = L"btnSinglePlayer";
			this->btnSinglePlayer->Size = System::Drawing::Size(419, 167);
			this->btnSinglePlayer->TabIndex = 0;
			this->btnSinglePlayer->Text = L"Single Player";
			this->btnSinglePlayer->UseVisualStyleBackColor = true;
			this->btnSinglePlayer->Click += gcnew System::EventHandler(this, &Form1::btnSinglePlayer_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabMainMenu);
			this->tabControl1->Controls->Add(this->tabSinglePlayer);
			this->tabControl1->Controls->Add(this->tabMultiPlayer);
			this->tabControl1->Controls->Add(this->tabHallOfFame);
			this->tabControl1->Controls->Add(this->tabGameOver);
			this->tabControl1->Controls->Add(this->tabAboutUs);
			this->tabControl1->Controls->Add(this->tabPlayer1);
			this->tabControl1->Controls->Add(this->GOTab2);
			this->tabControl1->Controls->Add(this->FinishTab);
			this->tabControl1->Location = System::Drawing::Point(7, 15);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1493, 787);
			this->tabControl1->SizeMode = System::Windows::Forms::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 0;
			// 
			// GOTab2
			// 
			this->GOTab2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"GOTab2.BackgroundImage")));
			this->GOTab2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->GOTab2->Controls->Add(this->button2);
			this->GOTab2->Controls->Add(this->CorrectWordScreen);
			this->GOTab2->Controls->Add(this->label15);
			this->GOTab2->Controls->Add(this->label14);
			this->GOTab2->Controls->Add(this->pictureBox2);
			this->GOTab2->Location = System::Drawing::Point(4, 25);
			this->GOTab2->Name = L"GOTab2";
			this->GOTab2->Padding = System::Windows::Forms::Padding(3);
			this->GOTab2->Size = System::Drawing::Size(1485, 758);
			this->GOTab2->TabIndex = 7;
			this->GOTab2->Text = L"Game Over Multi";
			this->GOTab2->UseVisualStyleBackColor = true;
			this->GOTab2->Click += gcnew System::EventHandler(this, &Form1::GOTab2_Click);
			// 
			// button2
			// 
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(1182, 675);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(245, 74);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Back";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// CorrectWordScreen
			// 
			this->CorrectWordScreen->AutoSize = true;
			this->CorrectWordScreen->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->CorrectWordScreen->ForeColor = System::Drawing::Color::Yellow;
			this->CorrectWordScreen->Location = System::Drawing::Point(333, 383);
			this->CorrectWordScreen->Name = L"CorrectWordScreen";
			this->CorrectWordScreen->Size = System::Drawing::Size(38, 49);
			this->CorrectWordScreen->TabIndex = 3;
			this->CorrectWordScreen->Text = L"-";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Cyan;
			this->label15->Location = System::Drawing::Point(168, 288);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(343, 49);
			this->label15->TabIndex = 2;
			this->label15->Text = L"The word was :";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 31.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Tomato;
			this->label14->Location = System::Drawing::Point(144, 174);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(875, 68);
			this->label14->TabIndex = 1;
			this->label14->Text = L"Game Over , Player 1 has won";
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(991, 136);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(345, 337);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// FinishTab
			// 
			this->FinishTab->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"FinishTab.BackgroundImage")));
			this->FinishTab->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->FinishTab->Controls->Add(this->button4);
			this->FinishTab->Controls->Add(this->textBox2);
			this->FinishTab->Controls->Add(this->label47);
			this->FinishTab->Controls->Add(this->label46);
			this->FinishTab->Controls->Add(this->label45);
			this->FinishTab->Controls->Add(this->label44);
			this->FinishTab->Controls->Add(this->label43);
			this->FinishTab->Controls->Add(this->label42);
			this->FinishTab->Controls->Add(this->label41);
			this->FinishTab->Controls->Add(this->label40);
			this->FinishTab->Controls->Add(this->label39);
			this->FinishTab->Controls->Add(this->label38);
			this->FinishTab->Controls->Add(this->label37);
			this->FinishTab->Controls->Add(this->label36);
			this->FinishTab->Controls->Add(this->label35);
			this->FinishTab->Controls->Add(this->label34);
			this->FinishTab->Controls->Add(this->label33);
			this->FinishTab->Location = System::Drawing::Point(4, 25);
			this->FinishTab->Name = L"FinishTab";
			this->FinishTab->Padding = System::Windows::Forms::Padding(3);
			this->FinishTab->Size = System::Drawing::Size(1485, 758);
			this->FinishTab->TabIndex = 8;
			this->FinishTab->Text = L"Finish Tab";
			this->FinishTab->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button4.BackgroundImage")));
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->button4->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Yellow;
			this->button4->Location = System::Drawing::Point(1276, 670);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 79);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Back";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(182, 444);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(857, 67);
			this->textBox2->TabIndex = 16;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::GreenYellow;
			this->label47->Location = System::Drawing::Point(169, 269);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(835, 76);
			this->label47->TabIndex = 15;
			this->label47->Text = L"Please Enter your name :";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label46->Location = System::Drawing::Point(1181, 91);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(117, 127);
			this->label46->TabIndex = 14;
			this->label46->Text = L"n";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::Red;
			this->label45->Location = System::Drawing::Point(1086, 91);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(123, 127);
			this->label45->TabIndex = 13;
			this->label45->Text = L"o";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label44->Location = System::Drawing::Point(1035, 91);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(85, 127);
			this->label44->TabIndex = 12;
			this->label44->Text = L"i";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::Blue;
			this->label43->Location = System::Drawing::Point(970, 91);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(96, 127);
			this->label43->TabIndex = 11;
			this->label43->Text = L"t";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::Cyan;
			this->label42->Location = System::Drawing::Point(876, 91);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(126, 127);
			this->label42->TabIndex = 10;
			this->label42->Text = L"a";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->label41->Location = System::Drawing::Point(825, 91);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(81, 127);
			this->label41->TabIndex = 9;
			this->label41->Text = L"l";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::Fuchsia;
			this->label40->Location = System::Drawing::Point(731, 91);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(117, 127);
			this->label40->TabIndex = 8;
			this->label40->Text = L"u";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::Blue;
			this->label39->Location = System::Drawing::Point(660, 91);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(96, 127);
			this->label39->TabIndex = 7;
			this->label39->Text = L"t";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::Cyan;
			this->label38->Location = System::Drawing::Point(571, 91);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(126, 127);
			this->label38->TabIndex = 6;
			this->label38->Text = L"a";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label37->Location = System::Drawing::Point(497, 91);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(108, 127);
			this->label37->TabIndex = 5;
			this->label37->Text = L"r";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Yellow;
			this->label36->Location = System::Drawing::Point(404, 91);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(127, 127);
			this->label36->TabIndex = 4;
			this->label36->Text = L"g";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(323, 91);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(117, 127);
			this->label35->TabIndex = 3;
			this->label35->Text = L"n";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 60, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::Red;
			this->label34->Location = System::Drawing::Point(234, 96);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(123, 127);
			this->label34->TabIndex = 2;
			this->label34->Text = L"o";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::Lime;
			this->label33->Location = System::Drawing::Point(165, 117);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(100, 101);
			this->label33->TabIndex = 1;
			this->label33->Text = L"C";
			// 
			// btnAUBack
			// 
			this->btnAUBack->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"btnAUBack.BackgroundImage")));
			this->btnAUBack->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnAUBack->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->btnAUBack->ForeColor = System::Drawing::Color::Yellow;
			this->btnAUBack->Location = System::Drawing::Point(1239, 682);
			this->btnAUBack->Name = L"btnAUBack";
			this->btnAUBack->Size = System::Drawing::Size(221, 67);
			this->btnAUBack->TabIndex = 1;
			this->btnAUBack->Text = L"Back";
			this->btnAUBack->UseVisualStyleBackColor = true;
			this->btnAUBack->Click += gcnew System::EventHandler(this, &Form1::btnAUBack_Click);
			// 
			// tabAboutUs
			// 
			this->tabAboutUs->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"tabAboutUs.BackgroundImage")));
			this->tabAboutUs->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tabAboutUs->Controls->Add(this->pictureBox3);
			this->tabAboutUs->Controls->Add(this->label29);
			this->tabAboutUs->Controls->Add(this->label28);
			this->tabAboutUs->Controls->Add(this->label27);
			this->tabAboutUs->Controls->Add(this->label26);
			this->tabAboutUs->Controls->Add(this->label25);
			this->tabAboutUs->Controls->Add(this->label23);
			this->tabAboutUs->Controls->Add(this->label22);
			this->tabAboutUs->Controls->Add(this->label20);
			this->tabAboutUs->Controls->Add(this->btnAUBack);
			this->tabAboutUs->Location = System::Drawing::Point(4, 25);
			this->tabAboutUs->Name = L"tabAboutUs";
			this->tabAboutUs->Padding = System::Windows::Forms::Padding(3);
			this->tabAboutUs->Size = System::Drawing::Size(1485, 758);
			this->tabAboutUs->TabIndex = 5;
			this->tabAboutUs->Text = L"About Us";
			this->tabAboutUs->UseVisualStyleBackColor = true;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 61.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Lime;
			this->label20->Location = System::Drawing::Point(159, 92);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(1189, 132);
			this->label20->TabIndex = 2;
			this->label20->Text = L"Hang Man the game";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Cyan;
			this->label22->Location = System::Drawing::Point(155, 224);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(1140, 144);
			this->label22->TabIndex = 3;
			this->label22->Text = resources->GetString(L"label22.Text");
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 22.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Fuchsia;
			this->label23->Location = System::Drawing::Point(172, 368);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(103, 49);
			this->label23->TabIndex = 4;
			this->label23->Text = L"By : ";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Yellow;
			this->label25->Location = System::Drawing::Point(182, 505);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(444, 44);
			this->label25->TabIndex = 5;
			this->label25->Text = L"- Mirna Tharwat Ebied .";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::Yellow;
			this->label26->Location = System::Drawing::Point(182, 461);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(669, 44);
			this->label26->TabIndex = 6;
			this->label26->Text = L"- Mina Abd-El Massih Abd-El Sayed .";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::Yellow;
			this->label27->Location = System::Drawing::Point(182, 549);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(630, 44);
			this->label27->TabIndex = 7;
			this->label27->Text = L"- Mohammed Mosaad Mahmoud .";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Yellow;
			this->label28->Location = System::Drawing::Point(182, 417);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(646, 44);
			this->label28->TabIndex = 8;
			this->label28->Text = L"- Mahmoud Gaber Abd El-Dayem .";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"KG Second Chances Sketch", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::Yellow;
			this->label29->Location = System::Drawing::Point(182, 593);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(523, 44);
			this->label29->TabIndex = 9;
			this->label29->Text = L"- Mohamed Nabeel Refaat .";
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(1007, 333);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(324, 303);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1483, 30);
			this->panel1->TabIndex = 1;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1491, 786);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->tabControl1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Hang Man the game";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->tabPlayer1->ResumeLayout(false);
			this->tabPlayer1->PerformLayout();
			this->tabGameOver->ResumeLayout(false);
			this->tabGameOver->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->tabHallOfFame->ResumeLayout(false);
			this->tabHallOfFame->PerformLayout();
			this->tabMultiPlayer->ResumeLayout(false);
			this->tabMultiPlayer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Box2))->EndInit();
			this->tabSinglePlayer->ResumeLayout(false);
			this->tabSinglePlayer->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->Box))->EndInit();
			this->tabMainMenu->ResumeLayout(false);
			this->tabMainMenu->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->GOTab2->ResumeLayout(false);
			this->GOTab2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->FinishTab->ResumeLayout(false);
			this->FinishTab->PerformLayout();
			this->tabAboutUs->ResumeLayout(false);
			this->tabAboutUs->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

  
		

/* ----------- A function that's repeated on ech key press to get the input and update the word ----------------------*/
		    
		void repeat ()
		{
			if (CorrectWords==9)
			{
				tabControl1->SelectedTab=FinishTab ;
			}
			else 
			{
			std::string Temp=check(); /* a standard temporary string to store the word */
		    word->Text = gcnew String(Temp.c_str()); /*converting from standard string to system string */
			
			System::String^ str = Lifes.ToString() ; /*converting lifes integer into a system string */
			System::String^ str2 = Level.ToString() ; /*converting Level integer into a system string */
			System::String^ str3 = Hints.ToString() ; /*converting Hints number integer into a system string */
			System::String^ str4 = Score.ToString() ; /*converting Score integer into a system string */

			LettersScreen->Text = gcnew String(Letters.c_str()); /*converting from standard string to system string */
		    LifesScreen->Text =str ; /*change the text property of the screen to it's string */
			LevelScreen->Text =str2 ; /*change the text property of the screen to it's string */
			HintScreen->Text = str3; /*change the text property of the screen to it's string */
			ScoreScreen->Text = str4; /*change the text property of the screen to it's string */
			ScoreScreen2->Text = str4; /*change the text property of the screen to it's string */
			

			CategoryScreen->Text = gcnew String(Category.c_str()); /*converting from standard string to system string */
		    label6->Text=" " ;
			

            if(Lifes==11)
			{
				Box-> Load("001.jpg");
			}
			else if(Lifes==10)
			{
				Box-> Load("002.jpg");
			}
			else if(Lifes==9)
			{
				Box-> Load("003.jpg");
			}
			else if(Lifes==8)
			{
				Box-> Load("004.jpg");
			}
			else if(Lifes==7)
			{
				Box-> Load("005.jpg");
			}
			else if(Lifes==6)
			{
				Box-> Load("006.jpg");
			}
			else if(Lifes==5)
			{
				Box-> Load("007.jpg");
			}
			else if(Lifes==4)
			{
				Box-> Load("008.jpg");
			}
			else if(Lifes==3)
			{
				Box-> Load("09.jpg");
			}
			else if(Lifes==2)
			{
				Box-> Load("010.jpg");
			}
			else if(Lifes==1)
			{
				Box-> Load("011.jpg");
			}
			else if (Lifes<=0)
			{

				word->Text=" Game Over , Try again " ;
				LettersScreen->Text=gcnew String(Original.c_str());
				GameOverScreen->Text=gcnew String(Original.c_str());
				label6->Text="Your word was : " ;
				LifesScreen->Text ="0" ;
				tabControl1->SelectedTab=tabGameOver ;
			}
		}
		}

		/*---------------------------- end of the function -------------------------------------*/

		/*-----------------------Function repeated in the multiplayer---------------------------*/

		void repeat2 ()
		{
			std::string Temp2=check2();
			MPWordScreen->Text = gcnew String(Temp2.c_str()); /*converting from standard string to system string */

			System::String^ str5 = Lifes2.ToString() ;
			System::String^ str6 = Hints2.ToString() ;
			
			HintScreen2->Text=str6;
			LifesScreen2->Text=str5 ;

			
			if (Show2==Player1Word)
			{
				MPWordScreen->Text ="You Win :D " ;
			}

		    if(Lifes2==4)
			{
				Box2-> Load("007.jpg");
			}
			else if(Lifes2==3)
			{
				Box2-> Load("09.jpg");
			}
			else if(Lifes2==2)
			{
				Box2-> Load("010.jpg");
			}
			else if(Lifes2==1)
			{
				Box2-> Load("011.jpg");
			}
			else if (Lifes2==0)
			{
				MPWordScreen->Text="Player 1 has won" ;
				Lifes2=0 ;
				tabControl1->SelectedTab=GOTab2 ;
				CorrectWordScreen->Text=gcnew String(Player1Word.c_str());

			}
			

		}

		 
      /*---------------------------End of function --------------------------------------*/

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
			private: System::Void ButtonHint_Click(System::Object^  sender, System::EventArgs^  e) {
							if (Hints>0)
							{
							 hint ();
							}
							repeat();
				 }
			private: System::Void a_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='a';						 
						 repeat();
						 }
			private: System::Void o_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='o';		 
						 repeat();
				 
					 }
			private: System::Void t_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='t';
						 repeat();		 
					 }
           private: System::Void d_Click(System::Object^  sender, System::EventArgs^  e) {
							 InputLetter='d';							  
							 repeat();
						 }
			private: System::Void f_Click(System::Object^  sender, System::EventArgs^  e) {
						     InputLetter='f';						  
							 repeat();
								  }
			private: System::Void g_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='g';						  
							 repeat();
					 }
			private: System::Void h_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='h';						 
							repeat();
					 }
			private: System::Void j_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='j';					  
							 repeat();
					 }
			private: System::Void k_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='k';						  
							 repeat();
					 }
			private: System::Void l_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='l';						  
							 repeat();
					 }
			private: System::Void z_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='z';						  
							 repeat();
					 }
			private: System::Void x_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='x';						  
							 repeat();
					 }
			private: System::Void c_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='c';					  
							 repeat();
					 }
			private: System::Void v_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='v';
							 repeat();
					 }
			private: System::Void b_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='b';						  
							repeat();
					 }
			private: System::Void n_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='n';					  
							 repeat();
					 }
			private: System::Void m_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='m';					  
							repeat();
					 }
			private: System::Void num1_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='1';					  
							repeat();
					 }
			private: System::Void num2_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='2';					  
							 repeat();
					 }
			private: System::Void num3_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='3';						 
							 repeat();
					 }
			private: System::Void num4_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='4';						 
							repeat();
					 }
			private: System::Void num5_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='5';					  
							 repeat();
					 }
			private: System::Void num6_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='6';						 
							repeat();
					 }
			private: System::Void num7_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='7';
							 repeat();
					 }
			private: System::Void num8_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='8';						 
							repeat();
					 }
			private: System::Void num9_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='9';						  
							 repeat();
					 }
			private: System::Void num0_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='0';					 
						repeat();
					 }
			private: System::Void q_Click(System::Object^  sender, System::EventArgs^  e) {
							 InputLetter='q';						
							 repeat();
					 }
			private: System::Void w_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='w';
							 repeat();
					 }
			private: System::Void e_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='e';						   
							repeat();
					 }
			private: System::Void r_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='r';
							repeat();
					 }
			private: System::Void y_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='y';				 
							repeat();
					 }
			private: System::Void u_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='u';						 
							repeat();
					 }
			private: System::Void i_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='i';						 
							repeat();
					 }
			private: System::Void p_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='p';					 
							repeat();
					 }
			private: System::Void s_Click(System::Object^  sender, System::EventArgs^  e) {
						 InputLetter='s';
							repeat();
					 }
	        private: System::Void btnSinglePlayer_Click(System::Object^  sender, System::EventArgs^  e) {

				 tabControl1->SelectedTab=tabSinglePlayer ;
				 newgame();
				 repeat();
			 }
			private: System::Void btnMultiPlayer_Click(System::Object^  sender, System::EventArgs^  e) {
						 tabControl1->SelectedTab=tabPlayer1 ;
					 }
			private: System::Void btnHallOfFame_Click(System::Object^  sender, System::EventArgs^  e) {
						
						 //Stream^ myStream;
						 String^ Readfile=File::ReadAllText("Players.txt");

						 label19->Text=Readfile ;

						/* label19->Text=gcnew String(player1.name.c_str());
						 System::String^ str11 = player1.score.ToString() ;
						 label20->Text=str11 ;

					     label22->Text=gcnew String(player2.name.c_str());
						 System::String^ str12 = player2.score.ToString() ;
						 label23->Text=str12 ;

						 label25->Text=gcnew String(player3.name.c_str());
						 System::String^ str13 = player3.score.ToString() ;
						 label26->Text=str13 ; */

                       tabControl1->SelectedTab=tabHallOfFame ;
					 }
			private: System::Void btnAboutUs_Click(System::Object^  sender, System::EventArgs^  e) {
						 tabControl1->SelectedTab=tabAboutUs ;
					 }
			private: System::Void btnExit_Click(System::Object^  sender, System::EventArgs^  e) {
						  Application::Exit();
					 }
			private: System::Void btnAUBack_Click(System::Object^  sender, System::EventArgs^  e) {
						 tabControl1->SelectedTab=tabMainMenu ;
					 }
			private: System::Void btnGOBack_Click(System::Object^  sender, System::EventArgs^  e) {
						 

						   /*Player Name A standard string to store the user input in */
						 String^ UserInput2 = textBox1->Text; /*A system string that has the value of the user input */	 
                         string PlayerName;  /*A standard string to store the user input in */
						 MarshalString(UserInput2, PlayerName); 
						 High(PlayerName);
						 tabControl1->SelectedTab=tabMainMenu ;

					 }
			private: System::Void btnHOFBack_Click(System::Object^  sender, System::EventArgs^  e) {
						 tabControl1->SelectedTab=tabMainMenu ;
					 }
			private: System::Void btnMPBack_Click(System::Object^  sender, System::EventArgs^  e) {
						 Lifes2=5 ;
						 Hints2=2;
						 Box2-> Load("005.jpg");
						 std::string Temp2=check2();
			MPWordScreen->Text = gcnew String(Temp2.c_str()); /*converting from standard string to system string */
             			HintScreen2->Text="2";
		            	LifesScreen2->Text="5" ;
						 tabControl1->SelectedTab=tabMainMenu ;
						 
					 }
			private: System::Void btnSPBack_Click(System::Object^  sender, System::EventArgs^  e) {
						 tabControl1->SelectedTab=tabMainMenu ;
						 newgame();
						 Box-> Load("000.jpg");
						 repeat();
					 }
			private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
					      Player1Word;  /*A standard string to store the user input in */
						String^ UserInput = Input->Text; /*A system string that has the value of the user input */
						 MarshalString(UserInput, Player1Word); 
						 /* switching from the system string into standard string using the marshal function */
						 tabControl1->SelectedTab=tabMultiPlayer ;
						 Input->Text="" ;
						 /* clear the textbox Input */
						 convert();

						 MPWordScreen->Text = gcnew String(Show2.c_str());
						 
					 }
private: System::Void a2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='a';
			 repeat2();
		 }
private: System::Void s2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='s';
			 repeat2();
		 }
private: System::Void d2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='d';
			 repeat2();
		 }
private: System::Void f2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='f';
			 repeat2();
		 }
private: System::Void g2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='g';
			 repeat2();
		 }
private: System::Void h2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='h';
			 repeat2();
		 }
private: System::Void j2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='j';
			 repeat2();
		 }
private: System::Void k2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='k';
			 repeat2();
		 }
private: System::Void l2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='l';
			 repeat2();
		 }
private: System::Void z2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='z';
			 repeat2();
		 }
private: System::Void n2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='n';
			 repeat2();
		 }
private: System::Void b2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='b';
			 repeat2();
		 }
private: System::Void v2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='v';
			 repeat2();
		 }
private: System::Void c2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='c';
			 repeat2();
		 }
private: System::Void x2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='x';
			 repeat2();
		 }
private: System::Void e2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='e';
			 repeat2();
		 }
private: System::Void r2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='r';
			 repeat2();
		 }
private: System::Void t2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='t';
			 repeat2();
		 }
private: System::Void i2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='i';
			 repeat2();
		 }
private: System::Void u2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='u';
			 repeat2();
		 }
private: System::Void y2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='y';
			 repeat2();
		 }
private: System::Void tabMultiPlayer_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void number1_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='1';
			 repeat2();
		 }
private: System::Void number2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='2';
			 repeat2();
		 }
private: System::Void number3_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='3';
			 repeat2();
		 }
private: System::Void number4_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='4';
			 repeat2();
		 }
private: System::Void number5_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='5';
			 repeat2();
		 }
private: System::Void number6_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='6';
			 repeat2();
		 }
private: System::Void number7_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='7';
			 repeat2();
		 }
private: System::Void number8_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='8';
			 repeat2();
		 }
private: System::Void number9_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='9';
			 repeat2();
		 }
private: System::Void number0_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='0';
			 repeat2();
		 }
private: System::Void q2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='q';
			 repeat2();
		 }
private: System::Void w2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='w';
			 repeat2();
		 }
private: System::Void o2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='o';
			 repeat2();
		 }
private: System::Void p2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='p';
			 repeat2();
		 }
private: System::Void m2_Click(System::Object^  sender, System::EventArgs^  e) {
			 InputLetter2='m';
			 repeat2();
		 }
private: System::Void tabSinglePlayer_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Box_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label11_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void GOTab2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
           tabControl1->SelectedTab=tabMainMenu ;
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 hint2();
			 repeat2();
		 }
private: System::Void ScoreScreen2_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void tabHallOfFame_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
						   /*Player Name A standard string to store the user input in */
						 String^ UserInput2 = textBox1->Text; /*A system string that has the value of the user input */	 
                         string PlayerName;  /*A standard string to store the user input in */
						 MarshalString(UserInput2, PlayerName); 
						 High(PlayerName);
						 tabControl1->SelectedTab=tabMainMenu ;
		 }
		
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		 }
};
			}

