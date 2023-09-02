#include "MyForm.h"
#include <iostream>

using namespace buttonTime;
[STAThreadAttribute]

int main() {
	MyForm^ mf = gcnew MyForm();
	mf->ShowDialog();
	return 0;
}
