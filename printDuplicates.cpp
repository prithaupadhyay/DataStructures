#include<iostream>
using namespace std::tr1;

int main()
{
    int a[]={1,2,3,4,5,7,2,1,3};

    unordered_set<int> intSet;
    unordered_set<int> duplicate;

    for(int i=0;i<9;i++)
    {
        if(intSet.find(a[i])==intSet.end())
        {
            intSet.insert(a[i]);
        }
        else
        {
            duplicate.insert(a[i]);
        }
        
    }
    //now we want to print all the elements in the duplicates list
    unordered_set<int> :: iterator itr;

    for(itr=duplicate.begin();itr!=duplicate.end();itr++)
    {
        cout<<(*itr)<<endl;
    }

    return 0;
}