// OOP1case1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Test {
						//��� ��� ������������ ������� �� ������
						//������ ���������� ����� �� ��������� �������
						//��� ������� ��� ������ (private);
	int one;
						//������������ ������� public
						//��� �����, ������ ����� ����
						//����� ������� ��� ������� �����
public:
						//���������������� ���������� � ������
						//��� �������� ���������, ������� �� ����������
						//�����, ����������� ������ ��������
	void Initial(int o, int t) {
		one = o;
		two = t;
	}
						//����� ������������ ���������� ������
						//�� �����
	void Show() {

		cout << "\n\n" << one << "\t" << two << "\n\n";
	}

	int two;
};
void main() {
						//��������� ������ � ����� Test
	Test obj;
						//���������� �������, ���������������� ��� ��������
	obj.Initial(2, 5);
						//����� �� �����
	obj.Show();			// 2 5
						//������ ������ � �������� ���������� two
						//� ���������� one ����� ������ ����������, ���
						//��� ������ � ��� ������
	obj.two = 45;
						//����� ����� �� �����
	obj.Show();			//2 45
}
