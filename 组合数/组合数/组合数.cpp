//从m个数中挑选n个数进行组合的组合数
#include<iostream>
using namespace std;

long fac(long m);
int main()
{
    int m,n,k;
    cout<<"请输入m值和n值:";
    cin>>m>>n;
    k=fac(m)/(fac(n) * fac(m-n));
    cout<<"组合数为："<<k<<endl;
    return 0;
}
long fac(long m)
{
    if (m==0)
        return 1;
    return fac(m-1)*m;
}