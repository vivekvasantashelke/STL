#include <bits/stdc++.h>
using namespace std;

int main()
{
     vector<int> arr1 = { 1,54,66, 4, 6, 3, 2 };

     vector<int> arr2 = { 6, 2, 5, 7, 5,67,7 };

     vector<int> arr3(14  );

     sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

      merge(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), arr3.begin());

      vector<int>::iterator i;
    for(i=arr3.begin();i!=arr3.end();i++)
    cout<<*i<<" ";
    return 0;
}


