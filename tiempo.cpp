#include "iostream"
using namespace std;

int main()
{
  int h = 0, m = 0, s = 0;  

  cout << "Digite la hora : ";
  cin >> h;
  cout << "Digite los minutos : ";
  cin >> m;
  cout << "Digite los segundos : ";
  cin >> s;
  
if(s<0||s>59)
  {
     cout << " s no cumple el formato";  
  }
if(m<0||m>59)
  {
     cout << " m no cumple el formato";  
  }
if(h<0||h>23)
  {
     cout << " h no cumple el formato";  
  }
  
  cout  << "Tiempo digitado :" <<h<<":"<<m<<"."<<s;

   s++;

  if(s == 60 ) 
  {
    s = 0;
    m++;
     }
   
   if( m == 60 )
  { 
    m++;
    m = 0;
    s = 0;
    h++;
  }
   if( h == 24 )
  { 
    
    m = 0;
    s = 0;
    h = 0;
  }
 cout << endl;
    cout << "Tiempo despues :" <<h<<":"<<m<<"."<<s ;
  
  
   return 0;
}