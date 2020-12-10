/*
圆
*/



#include <bits/stdc++.h>
using namespace std;
const int N = 10010;


int x[N],y[N],r[N];

bool dis(int rr,int xx1,int xx2,int yy1,int yy2)
{
    if(sqrt((xx1-xx2)*(xx1-xx2) + (yy1-yy2)*(yy1-yy2)) <rr) return true;
    else return false;
}

int main()
{
    int n;
    int x1,x2,y1,y2;
    cin >> n ;
    for(int i = 1;i<=n;i++)
    {
        cin >>x[i];
    }
    for(int i =1;i<=n;i++) cin >> y[i];
    for(int i = 1;i<=n;i++) cin >> r[i];
    cin >>x1>>y1>>x2>>y2;
    int cnt = 0;
    for(int i = 1;i<=n;i++)
    {
        if(dis(r[i],x1,x[i],y1,y[i]) ^ dis(r[i],x2,x[i],y2,y[i]) ) cnt++;
    }
    cout<<cnt<<endl;


    return 0;
}