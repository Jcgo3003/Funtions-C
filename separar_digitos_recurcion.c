#include<stdio.h>
#include<math.h>

using namespace std;

void separarNumeros(int numero,int digitos){

   if(digitos==0)return;

   int div=pow(10,digitos-1);
   cout<<numero/div%10<<endl;
   separarNumeros(numero,digitos-1);
}

int main()
{
   //separa el numero segun el numero de digitos
    int numero=73465;
    separarNumeros(numero,5);

    cout<<endl;
    numero=3465;
    separarNumeros(numero,4);

    return 0;
}
