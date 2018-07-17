#include<bits/stdc++.h>
using namespace std;

void CalcPrime(int x);

int main()
{
    for(int i=1;i<=100;i++)
        CalcPrime(i);
    return 0;
}
void CalcPrime(int x){
int cnt=0;
int B=0;
for(int i=1;i<=10;i++)
{
    if(x%i==0) cnt+=1;
    if(x==i&&cnt<=2) {cout<<x<<"-> -> -> -> -> -> -> Prime\n"; B=1;}
}
if(B==1) cout<<"";

else if(cnt>1&&x!=0) cout<<x<<"-> Not Prime\n";

else cout<<x<<"-> -> -> -> -> -> -> Prime\n";
}
