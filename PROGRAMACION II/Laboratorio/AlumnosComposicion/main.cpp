#include <iostream>
using namespace std;
#include "Alumno.h"
#include "Fecha.h"
#include "Docente.h"

int main(){

  Alumno alu;

  alu.setLegajo(34437);
  alu.setApellido("Chiotta");
  alu.setNombre("Brian");
  alu.setFechaNacimiento(14, 3, 2002);
  // alu.setCalle("Av. Rivadavia");
  // alu.setNumero("4520");
  // alu.setPiso("3");
  // alu.setDepartamento("B");
  // alu.setLocalidad("Caballito, CABA");
  // alu.setCodigoPostal("C1424");
  alu.setTelefono("011-4555-1234");
  alu.setEmail("brian.chiotta@gmail.com");
  Fecha f(1, 3, 2026);
  alu.setFechaIngreso(f);
  Domicilio aux("Nicolas Mascardi","2405","3","","Grand Bourg","1615B");
  alu.setDomicilio(aux);
  alu.mostrar();

  cout << endl;

  // ----- Docente -----
  Docente doc;
  doc.setLegajo(501);
  doc.setApellido("Perez");
  doc.setNombre("Ana");
  doc.setCuil("27-30111222-4");
  doc.setFechaNacimiento(15, 6, 1985);
  doc.setFechaContratacion(1, 3, 2015);
  doc.setTelefono("011-5555-6666");
  doc.setEmail("ana.perez@instituto.edu");
  Domicilio auxDoc("Av. Corrientes","1234","5","A","CABA","C1043");
  doc.setDomicilio(auxDoc);
 
  doc.mostrar();
  cout << "CSV: " << doc.toCSV() << endl;


  return 0;
}
