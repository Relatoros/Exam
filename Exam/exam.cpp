
#include <Windows.h>
#include "FormMain.h"

//[STAThreadAttribute]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {


	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	System::Windows::Forms::Application::Run(gcnew Exam::FormMain);

	// MessageBox::Show("Program cannot be used", "Ðrogram is compromised", MessageBoxButtons::OK, MessageBoxIcon::Error);
	return 0;
}