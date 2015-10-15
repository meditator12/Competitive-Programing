#include<iostream>
long long int a[100000][100000];
using namespace std;
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i =0;i < n;++i)
            cin>>arr[i][0]>>arr[i][1];
        for(i = 0;i < n;++i)
        {
            if(arr[i][0] > 0 && arr[i][1] > 0)
                ++first;
            else if(arr[i][0] < 0 && arr[i][1] < 0)
                ++third;
            else if(arr[i][0] < 0 && arr[i][1] > 0)
                ++second;
            else if(arr[i][0] > 0 && arr[i][1] < 0)
                ++fourth;
            else if(arr[i][0] >= 0 && arr[i][1] == 0)
            {
                if(first == 0)
                    ++fourth;
                else
                    ++first;
            }
            else if(arr[i][0] < 0 && arr[i][1] == 0)
            {
                if(second == 0)
                    ++third;
                else
                    ++second;
            }
            else if(arr[i][0] == 0 && arr[i][1] < 0)
            {
                if(third == 0)
                    ++fourth;
                else
                    ++third;
            }
            else if(arr[i][0] == 0 && arr[i][1] > 0)
            {
                if(second == 0)
                    ++first;
                else
                    ++second;
            }
        }
        s = first+second+third+fourth;
        if(s == 0)

    }
}
