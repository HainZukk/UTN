#include <iostream>
using namespace std;
/**
switch (decisión múltiple)
menú
banderas
https://codeshare.io/

un sistema de facturacion tiene para ingresar el importe de una venta y el tipo de pago.
Hacer un menú para contemplar las siguientes opciones
si tipo de pago es 1, la venta fue efectivo, el precio se mantiene
si tipo de pago es 2, la venta fue credito y el precio se incrementa en un 20%
si tipo de pago es 3, la venta fue débito y el precio se incrementa un 10%
si el tipo de pago es 4, el pago está bonificado y el importe es 0;

*/
int main()
{
    float importe;
    int tipoPago;

    cout<<"Ingrese el importe: ";
    cin>>importe;

    while(true)
    {
        system("clear");

        cout<<"----Tipo de pago---"<<endl;
        cout<<"1- Efectivo"<<endl;
        cout<<"2- Credito"<<endl;
        cout<<"3- Debito"<<endl;
        cout<<"4- Bonificada"<<endl;
        cout<<"0- Salir"<<endl;
        cout<<"Ingrese el tipo de pago: "<<endl;
        cin>>tipoPago;

        switch (tipoPago)
        {
        case 1:
            cout<<"1- Efectivo"<<endl;
            cout<<"Importe: "<<importe<<endl;;
            break;
        case 2:
            cout<<"2- Credito"<<endl;
            cout<<"Importe: "<<importe*1.2<<endl;;
            break;
        case 3:
            cout<<"3- Debito"<<endl;
            cout<<"Importe: "<<importe*1.1<<endl;
            break;
        case 4:
            cout<<"4- Bonificada"<<endl;
            cout<<"Importe: "<<0<<endl;
            break;
        case 0:
            return 0;
            break;

        default:
            cout<<"No ingreso un valor entre 1 y 4"<<endl;
            break;
        }
        cin.get();
    }

    return 0;
}


