//main
#include<iostream>
#include"CalcIntereses.h"
using namespace std;
int main(){
    int menU;
    float intereSCompuesto, intereSSimple;
    menU = menu();
    do
    {
        /* code */
        switch (menU)
        {
        case 1:
            intereSSimple = interesSimple();
            cout<<"El Interes Simple que me solicitaste es: "<<intereSSimple<<endl;
            menU = menu();
            break;
        case 2:
            intereSCompuesto = interesCompuesto();
            cout<<"El Interes Compuesto que me solicitaste es: "<<intereSCompuesto<<endl;
            menU = menu();
            break;
        default:
            break;
        }
    } while (menU != 3);
    
    return 0;
}