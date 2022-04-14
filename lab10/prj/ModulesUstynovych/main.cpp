#include <iostream>
#include <clocale>
#include <cmath>
#include <string>
#include <fstream>
#include <ctime>
#include <bitset>
#include <filesystem>


using namespace std;

string test_module(bool result)
{
    if(result){
        return "Test passed";
    }
    else{
        return "Test failed";
    }
}

double s_calculation(double x, double y, double z)
{
    double S;
    S =(abs(sqrt(abs(z-2*x))-x*sin(pow(x,2*z)*y)));
    return S;
}

void checkFile (string outPutfile, string inPutfile)
{
    ofstream infile(inPutfile);
    ofstream outfile(outPutfile);

    if (!infile || !outfile) {
		cout << "��������� ������� ���� ��� �����������\a" << endl;
        infile.close();
        outfile.close();
	}
	infile.close();
	outfile.close();
}

bool textInfile (string inPutfile, string stroke)
{
    ofstream file (inPutfile, ios::out);
	file << stroke << endl << endl;
	file.close();
	return true;
}

bool copyright(string outPutfile)
{
    ofstream file (outPutfile, ios::out);
    file << "  -------------------------------" << endl
       << " | ��������� ������, ����        |" << endl
       << " | @ustynovychm@gmail.com        |" << endl
       << " | �������������, ������, 2022  |" << endl
       << "  -------------------------------" << endl << endl;
    file.close();
}

bool findString (string outPutfile, string stroke)
{
    ofstream file(outPutfile, ios::app);
    string virsh = R"(���� ����� �� ������ ���� �� ���� -
            ��� � �� ������ ����� ����!
            ³� ���� ������� �� ������
            ���� ���� �� ���� �������.
            ���� ������� �������� � ������,
            �, ����, ��� �� ��� �������,
            � ���� � ����� ����� � �������,
            � ����� ����� ��������� �����.)";
  size_t fstring;

  fstring = virsh.find(stroke);
  if(!file.is_open())
        return -1;
  if (fstring != string::npos) {
        file << "����� " << stroke << " - ��������" << endl << endl;
        file.close();
        return true;
    }
    file << "����� "  << stroke << " - �� ��������" << endl << endl;
    file.close();
    return false;
}

int upAmount (string outPutfile, string stroke)
{
    int amount = 0;
    ofstream file(outPutfile, ios::app);
    for (int i=0; i<stroke.length(); i++)
    {
        if((stroke[i] >= 'A' && stroke[i] <= 'Z') || (stroke[i] >= '�' && stroke[i] <= '�'))
        {
            amount++;
        }
    }
    file << "ʳ������ ������� ��������� �������: " << amount << endl << endl;
    file.close();
    return amount;
}

bool fileTime(string inPutfile)
{
    ofstream file(inPutfile, ios::app);
    time_t rawtime;
    time(&rawtime);
    file << "���� �� ��� �������� �����������: " << ctime(&rawtime) << endl << endl;
    file.close();
    return true;
}

bool fileSize(string inPutfile)
{
    ofstream file (inPutfile,ios::in | ios::ate);
    file << "����� �����: " << file.tellp() << endl << endl;
    file.close();
    return true;
}

double s_calculationres(string outPutfile, double x, double y, double z)
{
    ofstream file (outPutfile, ios::app);
    file << "��������� ��������� ������� s_calculation: " << s_calculation(x, y, z) << endl << endl;
    file.close();
    return s_calculation(x, y, z);
}


bool decimalToBinary(string outPutfile, int b)
{
    ofstream file (outPutfile, ios::app);
    bitset <32> b_number(b);
    file << "����� " << b << " � ������� ������: " << b_number << endl;
    file.close();
    return 0;
}

