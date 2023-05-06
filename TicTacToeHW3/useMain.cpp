//N16114306 劉倬愿
//物件導向程式設計HW3
//圈圈叉叉TicTocToe
//main()函式

#include "SettingForm.h"

using namespace System;
using namespace TicTacToeHW3;

[STAThreadAttribute]
int main(array<System::String^ >^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//Show windows
	Application::Run(gcnew SettingForm());
	return 0;
}