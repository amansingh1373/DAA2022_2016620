/*
to find three indices i,j and k such that array[i]+array[j] = array[k]
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
        int flag=1;
        for(int i=2,j=0;i<num;i++)
        {
                int ptr1=j,ptr2=i-1;
                while(ptr1<ptr2)
                {
                        if(arr[ptr1]+arr[ptr2]==arr[i])
                        {
                                flag=1;
                                cout<<"<"<<arr[i]<<" "<<ptr1<<" "<<ptr2<<">";
                                ptr1++;
                                ptr2--;
                        }
                        else if(arr[ptr1]+arr[ptr2]>arr[i])
                        {
                                ptr2--;
                        }
                        else if(arr[ptr1]+arr[ptr2]<arr[i])
                        {
                                ptr1++;
                        }
                }
                cout<<endl;
        }
        return 0;
}
