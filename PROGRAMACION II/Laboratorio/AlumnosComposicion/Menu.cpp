#include <iostream>
using namespace std;
#include "Menu.h"
#include "Alumno.h"
#include "Fecha.h"
#include "Domicilio.h"

// ---------- Utilidades de entrada ----------

int leerEntero(string mensaje){
    int valor;
    cout << mensaje;
    while(!(cin >> valor)){
        cout << "Valor invalido. Ingrese un numero: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore(1000, '\n');
    return valor;
}

string leerLinea(string mensaje){
    string valor;
    cout << mensaje;
    getline(cin, valor);
    return valor;
}

// Convierte una fecha a un numero comparable AAAAMMDD
int fechaAValor(Fecha f){
    return f.getAnio() * 10000 + f.getMes() * 100 + f.getDia();
}

// ---------- Opciones del menu ----------

void cargarAlumnos(Alumno vec[], int cant){
    for(int i = 0; i < cant; i++){
        cout << "\n--- Alumno " << (i + 1) << " de " << cant << " ---" << endl;
        Alumno a;

        a.setLegajo(leerEntero("Legajo: "));
        a.setApellido(leerLinea("Apellido: "));
        a.setNombre(leerLinea("Nombre: "));

        int dia = leerEntero("Dia de nacimiento: ");
        int mes = leerEntero("Mes de nacimiento: ");
        int anio = leerEntero("Anio de nacimiento: ");
        a.setFechaNacimiento(dia, mes, anio);

        string calle = leerLinea("Calle: ");
        string numero = leerLinea("Numero: ");
        string piso = leerLinea("Piso (enter si no tiene): ");
        string depto = leerLinea("Departamento (enter si no tiene): ");
        string localidad = leerLinea("Localidad: ");
        string cp = leerLinea("Codigo postal: ");
        Domicilio dom(calle, numero, piso, depto, localidad, cp);
        a.setDomicilio(dom);

        a.setTelefono(leerLinea("Telefono: "));
        a.setEmail(leerLinea("Email: "));

        int diaIng = leerEntero("Dia de ingreso: ");
        int mesIng = leerEntero("Mes de ingreso: ");
        int anioIng = leerEntero("Anio de ingreso: ");
        a.setFechaIngreso(diaIng, mesIng, anioIng);

        vec[i] = a;
    }
    cout << "\nSe cargaron " << cant << " alumno(s) correctamente." << endl;
}

void mostrarAlumnos(Alumno vec[], int cant){
    for(int i = 0; i < cant; i++){
        cout << "\n--- Alumno " << (i + 1) << " ---" << endl;
        vec[i].mostrar();
    }
}

void buscarPorLegajo(Alumno vec[], int cant){
    int legajo = leerEntero("\nIngrese el legajo a buscar: ");
    for(int i = 0; i < cant; i++){
        if(vec[i].getLegajo() == legajo){
            cout << "\nAlumno encontrado:" << endl;
            vec[i].mostrar();
            return;
        }
    }
    cout << "\nNo se encontro ningun alumno con legajo " << legajo << "." << endl;
}

void listarPorApellido(Alumno vec[], int cant){
    string apellido = leerLinea("\nIngrese el apellido a buscar: ");
    bool encontrado = false;
    for(int i = 0; i < cant; i++){
        if(vec[i].getApellido() == apellido){
            cout << "\n--- Alumno " << (i + 1) << " ---" << endl;
            vec[i].mostrar();
            encontrado = true;
        }
    }
    if(!encontrado)
        cout << "\nNo se encontraron alumnos con apellido \"" << apellido << "\"." << endl;
}

void listarInscriptosAntesDe(Alumno vec[], int cant){
    cout << "\nIngrese la fecha limite de inscripcion:" << endl;
    int dia = leerEntero("Dia: ");
    int mes = leerEntero("Mes: ");
    int anio = leerEntero("Anio: ");
    Fecha limite(dia, mes, anio);
    int valorLimite = fechaAValor(limite);

    bool encontrado = false;
    for(int i = 0; i < cant; i++){
        if(fechaAValor(vec[i].getFechaIngreso()) < valorLimite){
            cout << "\n--- Alumno " << (i + 1) << " ---" << endl;
            vec[i].mostrar();
            encontrado = true;
        }
    }
    if(!encontrado)
        cout << "\nNingun alumno se inscribio antes de " << limite.toString() << "." << endl;
}

// ---------- Menu principal ----------

void menuPrincipal(){
    int opc;
    Alumno *vecAlumnos = nullptr;
    int cant;

    cout << "INGRESE LA CANTIDAD DE ALUMNOS A CARGAR: ";
    cin >> cant;
    cin.ignore(1000, '\n');

    // Valido la cantidad ingresada
    if(cant <= 0){
        cout << "LA CANTIDAD INGRESADA NO ES VALIDA." << endl;
        return;
    }

    // Solicito memoria para mi puntero
    vecAlumnos = new Alumno[cant];

    // Compruebo que se haya podido reservar la memoria para el puntero
    if(vecAlumnos == nullptr){
        cout << "ERROR DE ASIGNACION DE MEMORIA." << endl;
        return;
    }

    do{
        cout << "\n===== MENU =====" << endl;
        cout << "1- Cargar alumnos" << endl;
        cout << "2- Mostrar alumnos" << endl;
        cout << "3- Buscar alumno por legajo" << endl;
        cout << "4- Listar alumnos por apellido" << endl;
        cout << "5- Listar alumnos inscriptos antes de una fecha" << endl;
        cout << "0- Salir" << endl;
        opc = leerEntero("Seleccione una opcion: ");

        switch(opc){
            case 1:
                cargarAlumnos(vecAlumnos, cant);
                break;
            case 2:
                mostrarAlumnos(vecAlumnos, cant);
                break;
            case 3:
                buscarPorLegajo(vecAlumnos, cant);
                break;
            case 4:
                listarPorApellido(vecAlumnos, cant);
                break;
            case 5:
                listarInscriptosAntesDe(vecAlumnos, cant);
                break;
            case 0:
                cout << "\nSaliendo del programa..." << endl;
                break;
            default:
                cout << "\nOpcion invalida. Intente de nuevo." << endl;
        }

    } while(opc != 0);

    delete[] vecAlumnos;
}
