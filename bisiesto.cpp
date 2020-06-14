#include "iostream"

using namespace std;

int a;

bool bis()
{
  if(a%4==0 && a%100 != 0)
  {
    cout << "Es bisiesto";
      return 1;
      return true;
  }
  if(a%400==0)
  {
    cout << "Es bisiesto";
      return 1;
      return true;
  }
  else 
  
  cout << "No es bisiesto"; 
  return 0;
  return false;
  
  }

int main()
{
    cout << "Digite el annio a comprobar : ";
    cin >> a;
    cout ; bis();
}