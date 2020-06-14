#include "iostream"

using namespace std;

int main()
{
  int d = 0, m = 0, a = 0;  

  cout << "Digite el dia : ";
  cin >> d;
  cout << "1.enero,2.febrero,3.marzo,4.abril,5.mayo,6.junio,7.julio,8.agosto,9.septiembre,10.octubre,11.noviembre y 12.diciembre "<< endl; 
  cout << "Seleccione el numero de el mes:"; 
 cin >> m;
  cout << "Digite el annio : ";
  cin >> a;
  
  cout  << "fecha digitada :" <<d<<"/"<<m<<"/"<<a;

   d++;
     
 if(m == 1 && d == 32 ) 
  {
    d = 1;
    m++;
  }
  if(m == 1 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }if(a%4==0 && a%100 != 0 && m==2 && d==28)
  {
     d++;
  }
  if(a%400==0 && m==2 && d==28)
  {
    d++;

  } 
  if(a%4==0 && a%100 != 0 && m==2 && d==29)
  {
    cout << endl;
    cout << "fecha despues :" <<d<<"/"<<m<<"/"<<a ;
   exit(29);
  }
  if(a%400==0 && m==2 && d==29)
  {
    cout << endl;
    cout << "fecha despues :" <<d<<"/"<<m<<"/"<<a ;
 exit(29);
  }
   if(m == 2 && d == 29 ) 
  {
    d = 1;
    m++;
  }
  if(m == 2 && d > 29 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 3 && d == 32 ) 
  {
    d = 1;
    m++;
  }if(m == 3 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 4 && d == 31 ) 
  {
    d = 1;
    m++;
  }if(m == 4 && d > 30 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 5 && d == 32 ) 
  {
    d = 1;
    m++;
  }if(m == 5 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 6 && d == 31 ) 
  {
    d = 1;
    m++;
  }if(m == 6 && d > 30 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 7 && d == 32 ) 
  {
    d = 1;
    m++;
  }if(m == 7 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 8 && d == 32 ) 
  {
    d = 1;
    m++;
  }if(m == 8 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 9 && d == 31 ) 
  {
    d = 1;
    m++;
  }if(m == 9 && d > 30 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 10 && d == 32 ) 
  {
    d = 1;
    m++;
  }if(m == 10 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
 if(m == 11 && d == 31 ) 
  {
    d = 1;
    m++;
  }if(m == 11 && d > 30 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }

  if(m == 12 && d == 32 ) 
  {
    d = 1;
    m = 1;
    a++;
     }if(m == 12 && d > 31 ) 
  {
    cout << "fecha no valida";
    exit(d);
  }
     
  
 cout << endl;
    cout << "fecha despues :" <<d<<"/"<<m<<"/"<<a ;
  
  
   return 0;
}
