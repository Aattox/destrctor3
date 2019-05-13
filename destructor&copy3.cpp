// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
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
CTestCopy::~CTestCopy()                   //析构函数
{
	cout << "析构函数  x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy()                    //默认构造函数
{

}
CTestCopy::CTestCopy(int a, int b)         //构造函数
{
	x = a;
	y = b;
	cout << "x=" << x << "y=" << y << endl;
}
CTestCopy::CTestCopy(CTestCopy& om)        //复制构造函数，om为对象类型的形参
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "**************" << endl;
}
void CTestCopy::disPlay()
{
	cout << "x=" << x << "y=" << y << endl;
}
void myTest(CTestCopy od)                   //1.myTest(CTestCopy od)的参数是CTestCopy类中的对象
{                                           //2.因为myTest(CTestCopy od)的参数是对象,所以要执行复制函数
	od.disPlay();
}
int main()
{
	int x;
	CTestCopy ot(100, 200);
	myTest(ot);                             //ot是myTest(CTestCopy od)的实参
	return 0;
}
/*运行结果:
x=100y=200
**************
x=200y=400
析构函数  x=200y=400
析构函数  x=100y=200*/
