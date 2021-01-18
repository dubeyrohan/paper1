#include <bits/stdc++.h>
using namespace std;
set<int> s;
int a,b;
int solve(int t)
{
    int n;
    cin>>n;
    if(n==-1)   return 1;
    s.insert(n);
    if(t==1)  a=b=n;
    else if(b<n){
        if(t%2==0){
            auto it=s.find(b);
            ++it;
            b=*(it);
        }
        else
            a=b;
    }
    else {
        if(t%2==0){
            auto it=s.find(a);
            --it;
            a=*(it);
        }
        else
            b=a;
    }
    cout<<"median ="<<(a+b)/2<<"\n";
    return 0;
}  
int main()
{
    int test_cases = 1;
    for (int t = 1; ; t++)
        if(solve(t))
            break;
    return 0;
}
