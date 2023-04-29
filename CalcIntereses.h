//funciones
#include<iostream>
using namespace std;
float interesSimple(){
float capital, tasa, intereSsimple;
    int tiempoMes;
    cout<<"Dime el monto de tu capital: "<<endl;
    cout<<"» ";
    cin>>capital;
    cout<<"Dime a el porcentaje de tasa de interes: "<<endl;
    cout<<"» ";
    cin>>tasa;
    cout<<"Dime a cuantos meses: "<<endl;
    cout<<"» ";
    cin>>tiempoMes;
    intereSsimple = capital * (tasa/100) * tiempoMes;

    return intereSsimple;

}
float interesCompuesto(){
    float capital, tasa, intereScompuesto, intereSsimple;
    int tiempoMes;
    cout<<"Dime el monto de tu capital: "<<endl;
    cout<<"» ";
    cin>>capital;
    cout<<"Dime a el porcentaje de tasa de interes: "<<endl;
    cout<<"» ";
    cin>>tasa;
    cout<<"Dime a cuantos meses: "<<endl;
    cout<<"» ";
    cin>>tiempoMes;
    intereScompuesto = 0;
    for (int i = 0; i < tiempoMes; i++)
    {
        /* code */
        intereSsimple = capital * (tasa/100);
        intereScompuesto = intereSsimple + intereScompuesto;
        capital = capital + intereScompuesto;
    }
        return intereScompuesto;

}
int menu(){
    int meNu;
    cout<<"Favor de teclar el nuemero correspondiente al interes que desea calcular"<<endl;
    cout<<"1 - Interés simple"<<endl;
    cout<<"2 - Interés compuesto"<<endl;
    cout<<"3 - Salir"<<endl;
    cin>>meNu;

    return meNu;
}