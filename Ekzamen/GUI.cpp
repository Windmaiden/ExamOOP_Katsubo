#include "GUI.h"

using namespace LB;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
 // ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
 Application::EnableVisualStyles();
 Application::SetCompatibleTextRenderingDefault(false);

 // �������� �������� ���� � ��� ������
 Application::Run(gcnew GUI());
 return 0;
}