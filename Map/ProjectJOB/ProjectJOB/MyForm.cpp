#include "MyForm.h"



using namespace ProjectJOB;

using namespace System;
using namespace System::Windows::Forms;
void main( )
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	
	Application::Run(gcnew MyForm());
}