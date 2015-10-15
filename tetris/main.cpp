#include<iostream>
using namespace std;
int main()
{
    int i,j,arr[20][20];
    for(i = 1;i <= 15;++i)
        for(j = 1;j <= 15;++j)
            arr[i][j] = 0;
    while(1)
    {
        char c;
        cin>>c;
        if(c == 'g')
            break;
        if(c == '1')
        {
            flag = 0;
            flag1 = 0;
            cin>>no;
            if(no == 1)
            {
                for(i = 15;i <= 1;--i)
                {
                    if(flag1 == 2)
                        break;
                    for(j = 15;j <= 1;--j)
                    {
                        if(flag == 1)
                        {
                            flag1 = 2;
                            break;
                        }
                        if(arr[i][j] == 0)
                        {
                            flag = 1;
                            cout<<"b"<<" "<<i<<" "<<j<<endl;
                            arr[i][j] = arr[i-1][j] = arr[i-2][j] = arr[i-3][j] = 1;
                            for(k = 1;k <= 15;++k)
                            {
                                if(arr[i][k] == 1)
                                    ++count;
                            }
                            if(count == 15)
                            {
                                for(k = 1;k <= 15;++k)
                                {
                                    arr[i][k] = 0;
                                }
                                count = 0;
                            }
                            else
                                count = 0;
                        }
                    }
                }

            }
        }
        else if(no == 2)
        {

        }
    }
}
