https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
#include <iostream>
using namespace std;
int main()
{
 
 char s; // 宣告字元 s
 int n=0;// 宣告整數 n ，數值為 0 ，這是用來判斷是字首 (n 為基數) 還是字尾 ( n 為偶數)
 
 // 每當使用者輸入 1 字元，就用 while 迴圈處理 1 次
 while(cin.get(s))
 {
  // 如果是字元 '"'
  if(s=='"')
  {
   // n 加 1
   n++;
   // 如果 n 是基數，輸出 "``"
   if(n%2==1)
    cout<<"``";
   // 如果 n 是偶數，輸出 "''"
   else
    cout<<"''";
  }
  
  // 如果是其他字元則直接輸出 s
  else
   cout<<s;
 }
}


