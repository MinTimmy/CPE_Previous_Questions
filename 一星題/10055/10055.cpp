https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=996
#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
  long long int Hashmat, opponent; // 宣告長整數 Hashmat ，opponent，因為輸入範圍到 2^32 所以必須用 long long int 存取
  // 連續輸入 Hashmat 和 opponent
  while(cin>>Hashmat>>opponent) 
  {
    // 輸出 Hashmat- opponent 的絕對值
    cout<<abs(Hashmat-opponent)<<endl;
  }
}

