#include <iomanip>
#include <conio.h>
#include <ModulesUstynovych.h>

using namespace std;

int main()
{
    system("chcp 1251 & cls");

    string inPuttext [3] = {"sfds",
                            "³� ���� ������� �� ������",
                            ".�����7��9�2��"};
    int uppAmount [3] = {0, 1, 3};
    double x [3] = {1,2,3};
    double y [3] = {1,2,3};
    double z [3] = {1,2,3};
    int b [3] = {0,14,52};
    double expS [3] = {0.158529, 0.31136, 0.423068};
    double expB [3] = {00000000000000000000000000000000,00000000000000000000000000001110,00000000000000000000000000110100};

    for(int i = 0; i < 3; i++) {
        checkFile("fileOut.txt", "fileIn.txt");
        cout << boolalpha
             << "����� �����: " << textInfile("fileIn.txt", inPuttext[i]) << endl;
        cout << boolalpha
             << "����� ��������� ����������: " << copyright("fileOut.txt") << endl;
        cout << boolalpha
             << "��������� ��������� ������� ���� ���������  �������:"<< (upAmount("fileOut.txt", inPuttext[i]) == uppAmount[i]) << endl;
        cout << boolalpha
             << "��������� ������ �����: " << findString("fileOut.txt", inPuttext[i]) << endl;
        cout << boolalpha
             << "������� ���� ����������� �����: "<< fileTime("fileIn.txt") << endl;
        cout << boolalpha
             << "������� ��'��� �����: "<< fileSize("fileIn.txt")<< endl;
        cout << boolalpha
             << "���������� ������� s_calculation: "<< (s_calculationres("fileOut.txt", x[i], y[i], z[i]) <= expS[i] + 0.005) << endl;
        cout << boolalpha
             << "������������� ����������� ����� � �������: " << (decimalToBinary("fileOut.txt", b[i]) <= expB[i]) << endl << endl << endl;

        getch();
    }
    return 0;
}
