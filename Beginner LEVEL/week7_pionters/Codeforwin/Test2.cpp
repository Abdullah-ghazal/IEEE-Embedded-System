#include<iostream>
#include<deque>
using namespace std;
int main(int argc, char const *argv[])
{
    deque<int> q;
    int n;
    long long k;
    cin >> n >> k;
    int x;
    int mx = -1e9;
    for (int i = 0; i < n; i++)
    { 
       cin>>x;
        q.push_back(x);
        mx=max(mx,x);
    }
     
    if(k > n)
    {
        cout<<mx<<"\n";
        return 0;
    }
    bool flag = true;
    int freq[n] = {0};
    while (flag)
    {
        x = q.front();
        q.pop_front();
        if(x < q.front())
        {
            q.push_back(x);
            freq[q.front()]++;
        }
        else
        {
            q.push_back(q.front());
            q.pop_front();
            q.push_front(x);
            freq[x]++;
        }
        
        for (int i = 0; i < n-1; i++)
        {
            if(freq[i] > k)
            {
                flag = false;
            }
        }
        
    }
    
    printf("%d\n",q.front());
    

    return 0;
}
