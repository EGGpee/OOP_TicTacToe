//N16114306 劉倬愿
//物件導向程式設計HW3
//圈圈叉叉TicTocToe
//結束視窗

#pragma once
namespace TicTacToeHW3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// OverForm 的摘要
	/// </summary>
	public ref class OverForm : public System::Windows::Forms::Form
	{
	public:
		TimeSpan endTime;
		String^ player1;
		String^ player2;
	public: System::Windows::Forms::Label^ labelResult;
	private: System::Windows::Forms::Button^ buttonClose;
	public:
		int^ winner;
		OverForm(void)
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
		~OverForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->labelResult = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// labelResult
			// 
			this->labelResult->AutoSize = true;
			this->labelResult->Font = (gcnew System::Drawing::Font(L"新細明體", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->labelResult->Location = System::Drawing::Point(12, 111);
			this->labelResult->Name = L"labelResult";
			this->labelResult->Size = System::Drawing::Size(53, 19);
			this->labelResult->TabIndex = 0;
			this->labelResult->Text = L"label1";
			// 
			// buttonClose
			// 
			this->buttonClose->Location = System::Drawing::Point(173, 200);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(75, 23);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->Text = L"Close";
			this->buttonClose->UseVisualStyleBackColor = true;
			this->buttonClose->Click += gcnew System::EventHandler(this, &OverForm::buttonClose_Click);
			// 
			// OverForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(434, 261);
			this->Controls->Add(this->buttonClose);
			this->Controls->Add(this->labelResult);
			this->Name = L"OverForm";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->Text = L"GameOver";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//close按鈕按下後，試窗關閉
	private: System::Void buttonClose_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
