#include "Freelancer.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
Application::EnableVisualStyles();
Application::SetCompatibleTextRenderingDefault(false);
Ekzamen::Freelancer form;
Application::Run(%form);
}
