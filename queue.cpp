#include <bits/stdc++.h>

using namespace std;

void showq(queue<int> g)
{
    queue<int> u = g;
 /*   while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';*/

    for(g.size();!g.empty();g.pop())
    {
        cout<<g.front()<<endl;
   // cout<<g.back()<<endl;

    }
    cout<<"que size "<<g.size()<<endl;
}


int main()
{
    queue<int> d;
      d.push(10);
       d.push(20);
      d.push(30);
      d.push(1000);
      d.push(34);
cout<<"que size "<<d.size()<<endl;
      showq(d);
    return 0;
}