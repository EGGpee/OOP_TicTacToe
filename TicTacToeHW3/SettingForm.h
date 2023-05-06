//N16114306 劉倬愿
//物件導向程式設計HW3
//圈圈叉叉TicTocToe
//設定視窗

#pragma once
#include"GameForm.h"

namespace TicTacToeHW3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm 的摘要
	/// </summary>
	public ref class SettingForm : public System::Windows::Forms::Form
	{
	public:
		SettingForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~SettingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBoxPlayer1;
	private: System::Windows::Forms::Label^ labelPlayer1;
	private: System::Windows::Forms::Label^ labelPlayer2;
	private: System::Windows::Forms::TextBox^ textBoxPlayer2;
	private: System::Windows::Forms::Button^ buttonEnter;
	private: System::Windows::Forms::Button^ buttonReset;
	private: System::Windows::Forms::Panel^ panelPlayCircle;
	private: System::Windows::Forms::RadioButton^ radioButtonPlayer2;
	private: System::Windows::Forms::RadioButton^ radioButtonPlayer1;
	private: System::Windows::Forms::Label^ labelQuestion;

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxPlayer1 = (gcnew System::Windows::Forms::TextBox());
			this->labelPlayer1 = (gcnew System::Windows::Forms::Label());
			this->labelPlayer2 = (gcnew System::Windows::Forms::Label());
			this->textBoxPlayer2 = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->panelPlayCircle = (gcnew System::Windows::Forms::Panel());
			this->radioButtonPlayer2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonPlayer1 = (gcnew System::Windows::Forms::RadioButton());
			this->labelQuestion = (gcnew System::Windows::Forms::Label());
			this->panelPlayCircle->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBoxPlayer1
			// 
			this->textBoxPlayer1->Font = (gcnew System::Drawing::Font(L"新細明體", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBoxPlayer1->Location = System::Drawing::Point(25, 162);
			this->textBoxPlayer1->Name = L"textBoxPlayer1";
			this->textBoxPlayer1->Size = System::Drawing::Size(247, 65);
			this->textBoxPlayer1->TabIndex = 0;
			this->textBoxPlayer1->Text = L"Blue";
			this->textBoxPlayer1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// labelPlayer1
			// 
			this->labelPlayer1->AutoSize = true;
			this->labelPlayer1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->labelPlayer1->Enabled = false;
			this->labelPlayer1->Font = (gcnew System::Drawing::Font(L"新細明體", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->labelPlayer1->Location = System::Drawing::Point(26, 66);
			this->labelPlayer1->Name = L"labelPlayer1";
			this->labelPlayer1->Size = System::Drawing::Size(246, 64);
			this->labelPlayer1->TabIndex = 1;
			this->labelPlayer1->Text = L"Player 1:";
			this->labelPlayer1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// labelPlayer2
			// 
			this->labelPlayer2->AutoSize = true;
			this->labelPlayer2->BackColor = System::Drawing::Color::Red;
			this->labelPlayer2->Enabled = false;
			this->labelPlayer2->Font = (gcnew System::Drawing::Font(L"新細明體", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->labelPlayer2->ForeColor = System::Drawing::Color::Black;
			this->labelPlayer2->Location = System::Drawing::Point(316, 66);
			this->labelPlayer2->Name = L"labelPlayer2";
			this->labelPlayer2->Size = System::Drawing::Size(246, 64);
			this->labelPlayer2->TabIndex = 2;
			this->labelPlayer2->Text = L"Player 2:";
			this->labelPlayer2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// textBoxPlayer2
			// 
			this->textBoxPlayer2->Font = (gcnew System::Drawing::Font(L"新細明體", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->textBoxPlayer2->Location = System::Drawing::Point(315, 162);
			this->textBoxPlayer2->Name = L"textBoxPlayer2";
			this->textBoxPlayer2->Size = System::Drawing::Size(247, 65);
			this->textBoxPlayer2->TabIndex = 3;
			this->textBoxPlayer2->Text = L"Red";
			this->textBoxPlayer2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// buttonEnter
			// 
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"新細明體", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->buttonEnter->Location = System::Drawing::Point(25, 479);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(247, 55);
			this->buttonEnter->TabIndex = 4;
			this->buttonEnter->Text = L"進入遊戲";
			this->buttonEnter->UseVisualStyleBackColor = true;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &SettingForm::buttonEnter_Click);
			// 
			// buttonReset
			// 
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"新細明體", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->buttonReset->Location = System::Drawing::Point(315, 479);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(247, 55);
			this->buttonReset->TabIndex = 5;
			this->buttonReset->Text = L"重設";
			this->buttonReset->UseVisualStyleBackColor = true;
			this->buttonReset->Click += gcnew System::EventHandler(this, &SettingForm::buttonReset_Click);
			// 
			// panelPlayCircle
			// 
			this->panelPlayCircle->Controls->Add(this->radioButtonPlayer2);
			this->panelPlayCircle->Controls->Add(this->radioButtonPlayer1);
			this->panelPlayCircle->Controls->Add(this->labelQuestion);
			this->panelPlayCircle->Font = (gcnew System::Drawing::Font(L"新細明體", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->panelPlayCircle->Location = System::Drawing::Point(25, 253);
			this->panelPlayCircle->Name = L"panelPlayCircle";
			this->panelPlayCircle->Size = System::Drawing::Size(308, 132);
			this->panelPlayCircle->TabIndex = 6;
			// 
			// radioButtonPlayer2
			// 
			this->radioButtonPlayer2->AutoSize = true;
			this->radioButtonPlayer2->Location = System::Drawing::Point(10, 81);
			this->radioButtonPlayer2->Name = L"radioButtonPlayer2";
			this->radioButtonPlayer2->Size = System::Drawing::Size(132, 36);
			this->radioButtonPlayer2->TabIndex = 2;
			this->radioButtonPlayer2->Text = L"Player 2";
			this->radioButtonPlayer2->UseVisualStyleBackColor = true;
			// 
			// radioButtonPlayer1
			// 
			this->radioButtonPlayer1->AutoSize = true;
			this->radioButtonPlayer1->Checked = true;
			this->radioButtonPlayer1->Location = System::Drawing::Point(12, 39);
			this->radioButtonPlayer1->Name = L"radioButtonPlayer1";
			this->radioButtonPlayer1->Size = System::Drawing::Size(132, 36);
			this->radioButtonPlayer1->TabIndex = 1;
			this->radioButtonPlayer1->TabStop = true;
			this->radioButtonPlayer1->Text = L"Player 1";
			this->radioButtonPlayer1->UseVisualStyleBackColor = true;
			// 
			// labelQuestion
			// 
			this->labelQuestion->AutoSize = true;
			this->labelQuestion->Location = System::Drawing::Point(4, 4);
			this->labelQuestion->Name = L"labelQuestion";
			this->labelQuestion->Size = System::Drawing::Size(303, 32);
			this->labelQuestion->TabIndex = 0;
			this->labelQuestion->Text = L"Who will play in circle\?";
			// 
			// SettingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(584, 561);
			this->Controls->Add(this->panelPlayCircle);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->textBoxPlayer2);
			this->Controls->Add(this->labelPlayer2);
			this->Controls->Add(this->labelPlayer1);
			this->Controls->Add(this->textBoxPlayer1);
			this->Name = L"SettingForm";
			this->Text = L"玩家設定";
			this->panelPlayCircle->ResumeLayout(false);
			this->panelPlayCircle->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//進入遊戲按鈕
		//將輸入的玩家姓名、圈圈玩家傳入遊戲視窗
	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		GameForm^ form = gcnew GameForm();
		form->player1 = textBoxPlayer1->Text;
		form->player2 = textBoxPlayer2->Text;
		form->radioButtonPlayer1->Text = "Player 1:" + textBoxPlayer1->Text;
		form->radioButtonPlayer2->Text = "Player 2:" + textBoxPlayer2->Text;
		if (radioButtonPlayer1->Checked)	form->circlePlayer = 1;
		if (radioButtonPlayer2->Checked)	form->circlePlayer = 2;
		form->Show();
	}

		   //重設按鈕
		   //將輸入框進行重設
	private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxPlayer1->Text = "Blue";
		textBoxPlayer2->Text = "Red";
	}
	};
}