#include<iostream>
#include<queue>
using namespace std;
int main(int argc, char const *argv[])
{
    deque<int> dq;
   dq.push_back(1);
   dq.push_back(2);
   dq.push_back(3);
    printf("%d\n",dq.front());
    printf("%d\n",dq.back());
    return 0;
}
