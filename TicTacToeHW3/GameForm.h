//N16114306 劉倬愿
//物件導向程式設計HW3
//圈圈叉叉TicTocToe
//遊戲視窗

#pragma once
#include"OverForm.h"
namespace TicTacToeHW3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameForm 的摘要
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		int nowPlayer, circlePlayer;	//存取現在輪到誰，以及從設定視窗傳入之圈圈玩家
		int** record;					//紀錄遊戲資料
		DateTime timeStart;				//紀錄遊戲開始之時間
		String^ player1;				//紀錄玩家1的名字
		String^ player2;				//紀錄玩家2的名字

	private: System::Windows::Forms::PictureBox^ pictureBox23;
	public:
	private: System::Windows::Forms::PictureBox^ pictureBox33;
	private: System::Windows::Forms::PictureBox^ pictureBox32;
	private: System::Windows::Forms::PictureBox^ pictureBox31;
	private: System::Windows::Forms::PictureBox^ pictureBox22;
	private: System::Windows::Forms::PictureBox^ pictureBox21;
	private: System::Windows::Forms::PictureBox^ pictureBox13;
	private: System::Windows::Forms::PictureBox^ pictureBox12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ labelInfo;
	private: System::Windows::Forms::Panel^ panelGame;
	private: System::Windows::Forms::Label^ labelTime;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	public:
		GameForm(void)
		{
			InitializeComponent();

			//初始化遊戲紀錄
			record = new int* [3];
			for (int i = 0; i < 3; i++) {
				record[i] = new int[3]{ 0 };
			}
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~GameForm()
		{
			if (components)
			{
				delete components;
			}

			//刪除動態記憶體配置
			for (int i = 0; i < 3; i++) {
				delete[] record[i];
			}
		}
	public: System::Windows::Forms::Panel^ panelPlayFirst;
	private: System::Windows::Forms::Label^ labelFirstPlayer;
	public:
	public: System::Windows::Forms::RadioButton^ radioButtonPlayer2;
	private:
	public: System::Windows::Forms::RadioButton^ radioButtonPlayer1;
	private: System::Windows::Forms::Button^ buttonStartStop;
	private: System::ComponentModel::IContainer^ components;
	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panelPlayFirst = (gcnew System::Windows::Forms::Panel());
			this->labelFirstPlayer = (gcnew System::Windows::Forms::Label());
			this->radioButtonPlayer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPlayer1 = (gcnew System::Windows::Forms::RadioButton());
			this->buttonStartStop = (gcnew System::Windows::Forms::Button());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelInfo = (gcnew System::Windows::Forms::Label());
			this->panelGame = (gcnew System::Windows::Forms::Panel());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panelPlayFirst->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			this->panelGame->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelPlayFirst
			// 
			this->panelPlayFirst->Controls->Add(this->labelFirstPlayer);
			this->panelPlayFirst->Controls->Add(this->radioButtonPlayer2);
			this->panelPlayFirst->Controls->Add(this->radioButtonPlayer1);
			this->panelPlayFirst->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->panelPlayFirst->Location = System::Drawing::Point(417, 12);
			this->panelPlayFirst->Name = L"panelPlayFirst";
			this->panelPlayFirst->Size = System::Drawing::Size(155, 100);
			this->panelPlayFirst->TabIndex = 0;
			// 
			// labelFirstPlayer
			// 
			this->labelFirstPlayer->AutoSize = true;
			this->labelFirstPlayer->Location = System::Drawing::Point(3, 3);
			this->labelFirstPlayer->Name = L"labelFirstPlayer";
			this->labelFirstPlayer->Size = System::Drawing::Size(110, 24);
			this->labelFirstPlayer->TabIndex = 2;
			this->labelFirstPlayer->Text = L"FirstPlayer";
			// 
			// radioButtonPlayer2
			// 
			this->radioButtonPlayer2->AutoSize = true;
			this->radioButtonPlayer2->Location = System::Drawing::Point(4, 64);
			this->radioButtonPlayer2->Name = L"radioButtonPlayer2";
			this->radioButtonPlayer2->Size = System::Drawing::Size(145, 28);
			this->radioButtonPlayer2->TabIndex = 1;
			this->radioButtonPlayer2->TabStop = true;
			this->radioButtonPlayer2->Text = L"radioButton2";
			this->radioButtonPlayer2->UseVisualStyleBackColor = true;
			// 
			// radioButtonPlayer1
			// 
			this->radioButtonPlayer1->AutoSize = true;
			this->radioButtonPlayer1->Location = System::Drawing::Point(4, 30);
			this->radioButtonPlayer1->Name = L"radioButtonPlayer1";
			this->radioButtonPlayer1->Size = System::Drawing::Size(145, 28);
			this->radioButtonPlayer1->TabIndex = 0;
			this->radioButtonPlayer1->TabStop = true;
			this->radioButtonPlayer1->Text = L"radioButton1";
			this->radioButtonPlayer1->UseVisualStyleBackColor = true;
			// 
			// buttonStartStop
			// 
			this->buttonStartStop->Font = (gcnew System::Drawing::Font(L"新細明體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->buttonStartStop->Location = System::Drawing::Point(417, 460);
			this->buttonStartStop->Name = L"buttonStartStop";
			this->buttonStartStop->Size = System::Drawing::Size(155, 39);
			this->buttonStartStop->TabIndex = 1;
			this->buttonStartStop->Text = L"Start";
			this->buttonStartStop->UseVisualStyleBackColor = true;
			this->buttonStartStop->Click += gcnew System::EventHandler(this, &GameForm::buttonStartStop_Click);
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::White;
			this->pictureBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox11->Location = System::Drawing::Point(2, 8);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(120, 120);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox11->TabIndex = 2;
			this->pictureBox11->TabStop = false;
			this->pictureBox11->Click += gcnew System::EventHandler(this, &GameForm::pictureBox11_Click);
			this->pictureBox11->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox11_MouseEnter);
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::White;
			this->pictureBox23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox23->Location = System::Drawing::Point(242, 128);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(120, 120);
			this->pictureBox23->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox23->TabIndex = 3;
			this->pictureBox23->TabStop = false;
			this->pictureBox23->Click += gcnew System::EventHandler(this, &GameForm::pictureBox23_Click);
			this->pictureBox23->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox23_MouseEnter);
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::White;
			this->pictureBox33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox33->Location = System::Drawing::Point(242, 248);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(120, 120);
			this->pictureBox33->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox33->TabIndex = 4;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->Click += gcnew System::EventHandler(this, &GameForm::pictureBox33_Click);
			this->pictureBox33->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox33_MouseEnter);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::White;
			this->pictureBox32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox32->Location = System::Drawing::Point(122, 248);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(120, 120);
			this->pictureBox32->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox32->TabIndex = 5;
			this->pictureBox32->TabStop = false;
			this->pictureBox32->Click += gcnew System::EventHandler(this, &GameForm::pictureBox32_Click);
			this->pictureBox32->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox32_MouseEnter);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::White;
			this->pictureBox31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox31->Location = System::Drawing::Point(2, 248);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(120, 120);
			this->pictureBox31->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox31->TabIndex = 6;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->Click += gcnew System::EventHandler(this, &GameForm::pictureBox31_Click);
			this->pictureBox31->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox31_MouseEnter);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::White;
			this->pictureBox22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox22->Location = System::Drawing::Point(122, 128);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(120, 120);
			this->pictureBox22->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox22->TabIndex = 7;
			this->pictureBox22->TabStop = false;
			this->pictureBox22->Click += gcnew System::EventHandler(this, &GameForm::pictureBox22_Click);
			this->pictureBox22->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox22_MouseEnter);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::White;
			this->pictureBox21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox21->Location = System::Drawing::Point(2, 128);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(120, 120);
			this->pictureBox21->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox21->TabIndex = 8;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->Click += gcnew System::EventHandler(this, &GameForm::pictureBox21_Click);
			this->pictureBox21->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox21_MouseEnter);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::White;
			this->pictureBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox13->Location = System::Drawing::Point(242, 8);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(120, 120);
			this->pictureBox13->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox13->TabIndex = 9;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->Click += gcnew System::EventHandler(this, &GameForm::pictureBox13_Click);
			this->pictureBox13->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox13_MouseEnter);
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::White;
			this->pictureBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox12->Location = System::Drawing::Point(122, 8);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(120, 120);
			this->pictureBox12->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox12->TabIndex = 10;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->Click += gcnew System::EventHandler(this, &GameForm::pictureBox12_Click);
			this->pictureBox12->MouseEnter += gcnew System::EventHandler(this, &GameForm::pictureBox12_MouseEnter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label1->Location = System::Drawing::Point(6, 528);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 24);
			this->label1->TabIndex = 11;
			// 
			// labelInfo
			// 
			this->labelInfo->AutoSize = true;
			this->labelInfo->Font = (gcnew System::Drawing::Font(L"新細明體", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->labelInfo->Location = System::Drawing::Point(6, 528);
			this->labelInfo->Name = L"labelInfo";
			this->labelInfo->Size = System::Drawing::Size(74, 24);
			this->labelInfo->TabIndex = 12;
			this->labelInfo->Text = L"Player:";
			// 
			// panelGame
			// 
			this->panelGame->Controls->Add(this->pictureBox12);
			this->panelGame->Controls->Add(this->pictureBox13);
			this->panelGame->Controls->Add(this->pictureBox21);
			this->panelGame->Controls->Add(this->pictureBox22);
			this->panelGame->Controls->Add(this->pictureBox31);
			this->panelGame->Controls->Add(this->pictureBox32);
			this->panelGame->Controls->Add(this->pictureBox33);
			this->panelGame->Controls->Add(this->pictureBox23);
			this->panelGame->Controls->Add(this->pictureBox11);
			this->panelGame->Enabled = false;
			this->panelGame->Location = System::Drawing::Point(8, 52);
			this->panelGame->Name = L"panelGame";
			this->panelGame->Size = System::Drawing::Size(370, 378);
			this->panelGame->TabIndex = 13;
			this->panelGame->MouseLeave += gcnew System::EventHandler(this, &GameForm::panelGame_MouseLeave);
			// 
			// labelTime
			// 
			this->labelTime->AutoSize = true;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"新細明體", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->labelTime->Location = System::Drawing::Point(417, 518);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(149, 29);
			this->labelTime->TabIndex = 14;
			this->labelTime->Text = L"00:00:00:00";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &GameForm::timer1_Tick);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->panelGame);
			this->Controls->Add(this->labelInfo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->buttonStartStop);
			this->Controls->Add(this->panelPlayFirst);
			this->Name = L"GameForm";
			this->Text = L"GameForm";
			this->panelPlayFirst->ResumeLayout(false);
			this->panelPlayFirst->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			this->panelGame->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//遊戲開始按鈕
	private: System::Void buttonStartStop_Click(System::Object^ sender, System::EventArgs^ e) {
		//先手玩家決定的panelEnable的狀態下，則為開始鈕
		//按下後則遊戲面板開啟，時間開始計算
		if (panelPlayFirst->Enabled == true) {
			buttonStartStop->Text = "Stop";
			if (radioButtonPlayer1->Checked)	nowPlayer = 1;
			if (radioButtonPlayer2->Checked)	nowPlayer = 2;
			panelPlayFirst->Enabled = false;
			panelGame->Enabled = true;
			timer1->Enabled = true;
			timeStart = DateTime::Now;
		}
		//停止鈕
		//按下後重置遊戲紀錄，並再次開啟先手選擇面板
		else {
			buttonStartStop->Text = "Start";
			labelInfo->Text = "Player:";
			panelPlayFirst->Enabled = true;
			panelGame->Enabled = false;
			timer1->Enabled = false;
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					record[i][j] = 0;
				}
			}
			//重置遊戲紀錄
			this->pictureBox11->Image = nullptr;
			this->pictureBox12->Image = nullptr;
			this->pictureBox13->Image = nullptr;
			this->pictureBox21->Image = nullptr;
			this->pictureBox22->Image = nullptr;
			this->pictureBox23->Image = nullptr;
			this->pictureBox31->Image = nullptr;
			this->pictureBox32->Image = nullptr;
			this->pictureBox33->Image = nullptr;

			this->pictureBox11->Enabled = true;
			this->pictureBox12->Enabled = true;
			this->pictureBox13->Enabled = true;
			this->pictureBox21->Enabled = true;
			this->pictureBox22->Enabled = true;
			this->pictureBox23->Enabled = true;
			this->pictureBox31->Enabled = true;
			this->pictureBox32->Enabled = true;
			this->pictureBox33->Enabled = true;
		}
	}

		   /// <summary>
		   /// 以下function都為相同功能只是分別控制不同的PictureBox
		   /// 首先判斷是否已經使用過，如果已經使用過將不執行任何動作
		   /// 再判斷該放置circle還是cross，並將結果放入record矩陣內
		   /// 最後判斷遊戲是否已結束，若是已經結束將創建新的OverForm，並將勝利之玩家以及花費時間傳入
		   /// </summary>
	private: System::Void pictureBox11_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox11;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[0][0] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox12_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox12;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[0][1] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox13_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox13;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[0][2] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox21_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox21;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[1][0] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox22_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox22;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[1][1] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox23_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox23;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[1][2] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox31_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox31;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[2][0] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox32_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox32;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[2][1] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}
	private: System::Void pictureBox33_Click(System::Object^ sender, System::EventArgs^ e) {
		PictureBox^ pic = this->pictureBox33;
		if (!pic->Enabled) {
			return;
		}
		else {
			if (nowPlayer == circlePlayer) {
				pic->Image = pic->Image->FromFile("\circle.png");
			}
			else {
				pic->Image = pic->Image->FromFile("\cross.png");
			}
			record[2][2] = nowPlayer;
			nowPlayer = (nowPlayer % 2) + 1;
			pic->Enabled = false;
			int winner = GameOver();
			if (winner) {
				OverForm^ form = gcnew OverForm();
				if (winner == -1) {
					form->labelResult->Text = "Tie!";
				}
				else if (winner == 1) {
					form->labelResult->Text = "Winner is " + player1;
				}
				else if (winner == 2) {
					form->labelResult->Text = "Winner is " + player2;
				}
				form->labelResult->Text = form->labelResult->Text + " Time:" + (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
				timer1->Enabled = false;
				form->Show();
				labelInfo->Text = "Game Over!";
			}
		}
	}

		   /// <summary>
		   /// 以下函式為顯示滑鼠目前的位置，以及輪到哪位玩家
		   /// 若滑鼠不在遊戲的面板內將只顯示輪到哪位玩家
		   /// </summary>
	private: System::Void panelGame_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString();
	}
	private: System::Void pictureBox11_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(1,1)";
	}
	private: System::Void pictureBox12_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(1,2)";
	}
	private: System::Void pictureBox13_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(1,3)";
	}
	private: System::Void pictureBox21_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(2,1)";
	}
	private: System::Void pictureBox22_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(2,2)";
	}
	private: System::Void pictureBox23_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(2,3)";
	}
	private: System::Void pictureBox31_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(3,1)";
	}
	private: System::Void pictureBox32_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(3,2)";
	}
	private: System::Void pictureBox33_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		labelInfo->Text = "輪到Player " + nowPlayer.ToString() + " 目前位置(3,3)";
	}
		   //判斷遊戲是否已經結束
	private: int GameOver() {
		if (((record[0][0] == record[0][1] && record[0][1] == record[0][2])
			|| (record[0][0] == record[1][0] && record[1][0] == record[2][0])
			|| (record[0][0] == record[1][1] && record[1][1] == record[2][2]))
			&& record[0][0] != 0)
			return record[0][0];
		else if (((record[0][2] == record[1][2] && record[1][2] == record[2][2])
			|| (record[0][2] == record[1][1] && record[1][1] == record[2][0]))
			&& record[0][2] != 0)
			return record[0][2];
		else if (record[2][0] == record[2][1] && record[2][1] == record[2][2])
			return record[2][0];
		else if (((record[0][1] == record[1][1] && record[1][1] == record[2][1])
			|| (record[1][0] == record[1][1] && record[1][1] == record[1][2]))
			&& record[1][1] != 0)
			return record[1][1];
		else if (record[0][0] && record[0][1] && record[0][2]
			&& record[1][0] && record[1][1] && record[1][2]
			&& record[2][0] && record[2][1] && record[2][2])
			return -1;
		else
			return 0;
	}
		   //時間計算
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->labelTime->Text = (DateTime::Now - timeStart).ToString(L"hh':'mm':'ss'.'ffff");
	}
	};
}
