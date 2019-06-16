
#include <iostream>
using namespace std;

int uniqueno(int a[], int n)
{
    int cnt[64] = {0};

    for(int i = 0; i < n; i++)
    {
        int no = a[i];
        int j = 0;
        while(no>0)
        {
            cnt[j] += no & 1;
            no = no >> 1;
            j++;
        }
    }

    int result = 0, p = 1;

    for(int i = 0; i < 64; i++)
    {
        cnt[i] %= 3;
        result += cnt[i] * p;
        p = p << 1;
    }
    return result;
}

int main()
{
    int a[7] = {1 ,1, 1, 2, 2, 2 ,3};
    cout<<uniqueno(a, 7);
    return 0;
}

