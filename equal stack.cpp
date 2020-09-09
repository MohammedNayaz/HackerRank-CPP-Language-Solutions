#include <bits/stdc++.h>

using namespace std;

int main()
{
int a;
int b;
int c;
cin >> a >> b >> c;
vector<int> h1(a);
for(int i1 = 0 ; i1 < a ; i1++){
   cin >> h1[i1];
}
vector<int> h2(b);
for(int i2 = 0 ; i2 < b ; i2++){
   cin >> h2[i2];
}
vector<int> h3(c);
for(int i3 = 0 ; i3 < c ; i3++){
   cin >> h3[i3];
}

int sum1, sum2, sum3;
sum1=0;
sum2=0;
sum3=0;

for(int i4=0 ; i4<a ; i4++)
    {
    sum1+=h1[i4];
}

for(int i5=0 ; i5<b ; i5++)
    {
    sum2+=h2[i5];
}

for(int i6=0 ; i6<c ; i6++)
    {
    sum3+=h3[i6];
}

int x=0;
int y=0;
int z=0;

while(sum1 != sum2 || sum1 != sum3 || sum2 != sum3)
    {
    if(sum1>sum2 && sum1>sum3 || sum1==sum2 && sum1>sum3 || sum1>sum2 && sum1==sum3)
        {
        sum1-=h1[x];
        x++;
    }

    if(sum2>sum3 && sum2>sum1 || sum2==sum3 && sum2>sum1 || sum2==sum1 && sum2>sum3)
        {
        sum2-=h2[y];
        y++;
    }

    if(sum3>sum2 && sum3>sum1 || sum3==sum2 && sum3>sum1 || sum3==sum1 && sum3>sum2)
        {
        sum3-=h3[z];
        z++;
    }
}

cout <<sum1;

return 0;
}