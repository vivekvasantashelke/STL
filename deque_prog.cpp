#include <bits/stdc++.h>

using namespace std;

int main()
{
    deque<int> d1={123,1234,12345},d2={12312,23,213,4,56,5468,9,99};
  d1.push_front(10);
  d1.push_front(112);
    d2.push_front(22);
    d2.push_back(400);
    d1.push_front(39);
    d2.push_front(100);
    d1.push_front(23);
    d2.push_back(1000);
    d2.push_back(121211);
    deque<int>::iterator i;

    for(i=d1.begin();i!=d1.end();i++)
    cout<<*i<<" ";
    cout<<"|";

    for(i=d2.begin();i!=d2.end();i++)
    cout<<*i<<" ";
    cout<<"|";


    d1.pop_back();
    d1.pop_front();
    d1.erase(d1.end()-3);

    d2.pop_back();
    d2.pop_front();
    d2.erase(d2.begin()+4);

    for(i=d1.begin();i!=d1.end();i++)
    cout<<*i<<" ";
    cout<<"|";


    for(i=d2.begin();i!=d2.end();i++)
    cout<<*i<<" ";
    cout<<"|";


    return 0;
}
