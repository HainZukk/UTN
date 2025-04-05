/*Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara. Se sabe que para producir caramelos tienen los siguientes costos:

Costo de alquiler de $10000
Costo por caramelo producido de $2.50
Costo por mantenimiento cada 100 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
"El presupuesto es suficiente para cubrir los costos de $XXXX"
"El presupuesto no es suficiente, necesita un crédito de $XXXX"
*/

#include <iostream>
using namespace std;
int main (){

    //Variables modificables
    int presupuesto , cantidad_caramelos , mantenimiento_requerido;
    float costo_total , credito_necesario;

    //Precios fijos
    int costo_alquiler = 10000;
    float costo_por_caramelo = 2.50;
    int costo_mantenimiento = 5000; 

    //Inputs
    cout << "Ingrese el presupuesto inicial: ";
    cin >> presupuesto;
    cout << "Ingrese la cantidad de caramelos a producir: ";
    cin >> cantidad_caramelos;

    mantenimiento_requerido = cantidad_caramelos / 100;
    if (cantidad_caramelos % 100 != 0){
        mantenimiento_requerido ++;
    }
    costo_total = costo_alquiler + (cantidad_caramelos * costo_por_caramelo) + (mantenimiento_requerido * costo_mantenimiento);

    if (presupuesto >= costo_total){
        cout << "El presupuesto es suficiente para cubrir los costos de $" << costo_total << endl;
    }
    else{
        credito_necesario = costo_total - presupuesto;
        cout << "El presupuesto no es suficiente, necesita un crédito de $" << credito_necesario << endl;
    }

    return 0;
}