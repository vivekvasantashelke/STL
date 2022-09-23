#include <bits/stdc++.h>

using namespace std;

int main()
{
 map<int,string> is;
 is.insert(pair<int,string>(1,"vivek"));
  is.insert(pair<int,string>(2,"akash"));
  is.insert(pair<int,string>(3,"vikas"));
  is.insert(pair<int,string>(4,"rahul"));
  is.insert(pair<int,string>(5,"dipak"));
   is.insert(pair<int,string>(6,"dyaneshawr"));
    is.insert(pair<int,string>(7,"mohit"));
     is.insert(pair<int,string>(8,"saurabh"));



     map<int,string>::iterator i;
     for(i=is.begin();i!=is.end();i++)
       cout<<i->first<<" "<<i->second<<endl;

     map<int,string>::iterator i1;
     i1=is.find(5);
       cout<<i1->first<<" "<<i1->second<<endl;

      /* int k;
       for(k=10;k<20;k++)
        {
           if(k%2==0)
          {
           map<int,string>::iterator i2;
           i2=is.find(k);
             cout<<i2->first<<" "<<i2->second<<endl;
         }

        }*/


    return 0;
}