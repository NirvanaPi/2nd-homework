#include <iostream>
using namespace std;
void main()
{
	double HS,SS;  int a;
	cout<<"请选择转换类型:华氏->摄氏请输入1，摄氏至->华氏请输入2。"<<endl;
	while(cin>>a)   
	{
		if (a==1)
		{
			cout<<"请输入华氏温度:"<<endl;
			cin>>HS;
			SS = (5/9.0)*(HS-32);
			cout<<"对应的摄氏温度为:"<<SS<<endl;
			break;
		}
		else if (a==2)
		{
			cout<<"请输入摄氏温度:"<<endl;
			cin>>SS;
			HS = (9/5.0)*SS + 32;
			cout<<"对应的华氏温度为:"<<HS<<endl;
			break;

		}
		else
		{
			cout<<"输入数据错误，请输入1或2"<<endl;
		}
	}
	
}