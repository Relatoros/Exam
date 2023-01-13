#include "FormMain.h"

namespace Exam {

	System::Void FormMain::buttonClick(System::Object^ sender, System::EventArgs^ e) {
		Button^ obj = safe_cast<Button^>(sender);
		obj->Enabled = false;
		unsigned int changeNum = gameSaver_->getNumByIndex(obj->TabIndex);
		changeProgress += changeNum;
		obj->Text = changeNum.ToString();
		textBox1->Text = changeProgress.ToString();
		changeCount++;
		if (changeCount == 3) {
			MessageBox::Show("Your progress: " + changeProgress.ToString(), "Game over", MessageBoxButtons::OK, MessageBoxIcon::Information);
			formReset();
		}
	}
	System::Void FormMain::buttonRestart_Click(System::Object^ sender, System::EventArgs^ e) {
		formReset();
	}
	
}