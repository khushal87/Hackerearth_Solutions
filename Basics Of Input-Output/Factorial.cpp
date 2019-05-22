//Problem link :- https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/

#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact=1;
    
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        fact*=i;
    }
    cout<<fact<<endl;
    return 0;
}
