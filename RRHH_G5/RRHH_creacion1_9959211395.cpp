#include <iostream>

using namespace std;

class Persona{
    private:
        string Nombre;
        string dpi;
        string Numerodetelefono;
        string Direccion;
        string Edad;

    public:
        Persona(string sNombre, string sdpi, string sNumerodetel , string sDireccion , string sEdad){
            Nombre = sNombre;
            dpi = sdpi;
            Numerodetelefono = sNumerodetel;
            Direccion = sDireccion;
            Edad = sEdad;
        }

    void Datospersona(){
        cout << "Nombre: " <<Nombre<< endl;
        cout << "Dpi: " <<dpi<< endl;
        cout << "Edad: " <<Edad<< endl;
        cout << "Numero de telfono : " <<Numerodetelefono<< endl;
        cout << "Direccion : " <<Direccion<< endl;
    }
};
class Empleado : public Persona{
    private:

        string NumdeaccesoEmpleado;

    public:Empleado (string sNombre, string sdpi, string sNumerodetel ,string sDireccion , string sNumdeaccesoEmpleado , string sEdad) : Persona( sNombre, sdpi , sNumerodetel ,sDireccion, sEdad){

            NumdeaccesoEmpleado = sNumdeaccesoEmpleado;
        }
    void Mostrarelempleado(){
        Datospersona();

        cout << "Numero de acceso del empleado " <<NumdeaccesoEmpleado<< endl;

    }
     void Modificarelempleado(){
        cout << "Se modificara este empleado" << endl;
        Datospersona();
    }
    void Eliminarelempleado(){
        cout << "Se eliminara este empleado" << endl;
        Datospersona();
    }
};

int main(){

    Empleado empleado1("Armando","5050500101","41225646","28 calle zona 17","125113","25");
    empleado1.Mostrarelempleado();
    cout << endl;
    empleado1.Modificarelempleado();
    cout << endl;
    empleado1.Eliminarelempleado();
    return 0;
}
