// ConsoleApplication1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	CTestCopy(CTestCopy & om);
	CTestCopy::~CTestCopy();
	void disPlay();
};
CTestCopy::~CTestCopy()                   //��������
{
	cout << "��������  x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy()                    //Ĭ�Ϲ��캯��
{

}
CTestCopy::CTestCopy(int a, int b)         //���캯��
{
	x = a;
	y = b;
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy& om)        //���ƹ��캯����omΪ�������͵��β�
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "**************" << endl;
}
void CTestCopy::disPlay()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest(CTestCopy od)                   //1.myTest(CTestCopy od)�Ĳ�����CTestCopy���еĶ���
{                                           //2.��ΪmyTest(CTestCopy od)�Ĳ����Ƕ���,����Ҫִ�и��ƺ���
	od.disPlay();
}
int main()
{
	int x;
	CTestCopy ot(100, 200);
	myTest(ot);                             //ot��myTest(CTestCopy od)��ʵ��
	return 0;
}
/*���н��:
x=100y=200
**************
x=200y=400
��������  x=200y=400
��������  x=100y=200*/
