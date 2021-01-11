#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    set<int> s;
    
    int N;
    cin>>N;
    
    while(N--)
    {
        int query;
        cin >> query;
        int number;
        switch (query) {
           case 1:
           cin >> number;
           s.insert(number);
           break;
           case 2:
           cin >> number;
           s.erase(number);
           break;
           default:
           cin >> number;
           set<int>::iterator it = s.find(number);
           if(it != s.end()){
                cout<<"Yes\n";
            }
           else{
                cout<<"No\n";
            }
        }
    }
    return 0;
}
