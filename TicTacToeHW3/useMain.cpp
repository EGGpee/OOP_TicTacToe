//N16114306 �B�Ӻ@
//����ɦV�{���]�pHW3
//���e�eTicTocToe
//main()�禡

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