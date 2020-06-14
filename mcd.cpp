#include "iostream"

using namespace std;

int re,ma,me;
    

 void mcd()
{
     do
     {
         re = ma % me;
         if(re != 0)
         {     
            ma = me;
            me = re;
         }
     }

     while(re != 0);
     cout << "El MCD es : " << me;    
    
}

int main()
{
   cout << "Digite el numero mayor : ";
   cin >> ma;

   cout << "Digite el numero menor : ";
   cin >> me;

   cout ; mcd();

   return 0;
   
}
