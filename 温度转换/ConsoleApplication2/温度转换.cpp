#include <iostream>
using namespace std;
void main()
{
	double HS,SS;  int a;
	cout<<"��ѡ��ת������:����->����������1��������->����������2��"<<endl;
	while(cin>>a)   
	{
		if (a==1)
		{
			cout<<"�����뻪���¶�:"<<endl;
			cin>>HS;
			SS = (5/9.0)*(HS-32);
			cout<<"��Ӧ�������¶�Ϊ:"<<SS<<endl;
			break;
		}
		else if (a==2)
		{
			cout<<"�����������¶�:"<<endl;
			cin>>SS;
			HS = (9/5.0)*SS + 32;
			cout<<"��Ӧ�Ļ����¶�Ϊ:"<<HS<<endl;
			break;

		}
		else
		{
			cout<<"�������ݴ���������1��2"<<endl;
		}
	}
	
}