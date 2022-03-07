/*
find number of occurence of the key
*/
#include<iostream>

using namespace std;

int main()
{
    int num,key,count_ele=0;
    cout<<"enter the number of elements you want to enter:";
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++)
    {
        cout<<"element "<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"enter the value you want to find in the array:";
    cin>>key;
    for(int i=0;i<num;i++)
    {
        if(arr[i]==key)
        {
            count_ele=1;
            while(arr[i]==arr[i+1]&&i<num-1)
            {
                count_ele++;
                i++;
                if(i==num)
                {
                    break;
                }
            }
            break;
        }
    }
    cout<<"key:"<<key<<endl;
    cout<<"occurence:"<<count_ele;
    return 0;
}
