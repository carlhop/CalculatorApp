#include "MyForm.h"
/*Created by Carl R. Hopkins*/
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //WinformCDemo is your project name
    Calculator1::MyForm form;
    Application::Run(% form);
}