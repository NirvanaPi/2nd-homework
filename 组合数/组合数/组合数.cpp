//��m��������ѡn����������ϵ������
#include<iostream>
using namespace std;

long fac(long m);
int main()
{
    int m,n,k;
    cout<<"������mֵ��nֵ:";
    cin>>m>>n;
    k=fac(m)/(fac(n) * fac(m-n));
    cout<<"�����Ϊ��"<<k<<endl;
    return 0;
}
long fac(long m)
{
    if (m==0)
        return 1;
    return fac(m-1)*m;
}