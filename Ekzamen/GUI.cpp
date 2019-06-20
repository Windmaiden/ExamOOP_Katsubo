#include "GUI.h"

using namespace LB;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
 // Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
 Application::EnableVisualStyles();
 Application::SetCompatibleTextRenderingDefault(false);

 // Создание главного окна и его запуск
 Application::Run(gcnew GUI());
 return 0;
}