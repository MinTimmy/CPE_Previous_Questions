https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1870
#include <iostream>
using namespace std;
int main()
{
 string s; // 宣告字串 s ，用來存取輸入者所傳入的數字
 // 讓使用者連續輸入 s
 while(cin>>s)
 {
  int Lnum=0, Rnum=0; // 宣告整數 Lnum ， Rnum ，數值為 0 ，來存去基數項和偶數項的和
  // 如果 s 是 0 ，就離開 while 迴圈
  if(s=="0")
  {
   break;
  }
  // 逐一分析使用者所輸入的字串
  for(int i=0;i<s.length();i++)
  {
   // 如果是基數項
   if((i+1)%2==1)
   {
    Lnum+=(int)s[i]-'0';
   }
   // 如果是偶數項
   else
   {
    Rnum+=(int)s[i]-'0';
   }
  }  
  // 判斷是否是 11 的倍數
  if((Lnum-Rnum)%11==0)
  {
   cout<<s<<" is a multiple of 11."<<endl;
  }
  else
  {
   cout<<s<<" is not a multiple of 11."<<endl;
  }
 }
}


