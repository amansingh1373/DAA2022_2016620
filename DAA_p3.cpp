/*
find number of pairs whose difference is equal to the key
*/
#include<iostream>

using namespace std;

int main()
{
        int num;
        cout<<"enter the number of elements you want to enter:";
        cin>>num;
        int arr[num];
        for(int i=0;i<num;i++)
        {
                cout<<"element "<<i<<":";
                cin>>arr[i];
        }
        int key,count_ele=0;
        cout<<"enter a key:";
        cin>>key;
        for(int i=0;i<num;i++)
        {
                for(int j=i;j<num;j++)
                {
                        if(arr[i]-arr[j]==key||arr[j]-arr[i]==key)
                        {
                                count_ele++;
                        }
                }
        }
        cout<<"no of pairs found:"<<count_ele;
        return 0;
}
