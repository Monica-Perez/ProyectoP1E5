#include <iostream>

using namespace std;

class Persona{
    private:
        string Nombre;
        string dpi;
    public:
        Persona(string mNombre, string mdpi){
            Nombre = mNombre;
            dpi = mdpi;
        }

    void MostrarPersona(){
        cout << "Nombre: " <<Nombre<< endl;
        cout << "DPI: " <<dpi<< endl;
    }
};
class Empleado : public Persona{
    private:
        string codigoEmpleado;
        string numero;
    public:
        Empleado(string mNombre, string mdpi, string codEmpleado, string mnum) : Persona(mNombre, mdpi){
            codigoEmpleado = codEmpleado;
            numero = mnum;
        }
    void mostrarEmpleado(){
        MostrarPersona();
        cout << "Codigo de Empleado: " <<codigoEmpleado<< endl;
        cout << "Numero de Empleado: " <<numero<< endl;
    }
     void modificarEmpleado(){
        cout << "Usted Modificara este Empleado" << endl;
        MostrarPersona();
    }
    void eliminarEmpleado(){
        cout << "Usted Eliminara este Empleado" << endl;
        MostrarPersona();
    }
};

int main(){

    Empleado empleado1("Carmen", "15829840101","0123","4589-3620");
    empleado1.mostrarEmpleado();
    cout << endl;
    empleado1.modificarEmpleado();
    cout << endl;
    empleado1.eliminarEmpleado();
    return 0;
}
