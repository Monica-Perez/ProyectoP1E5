#include <iostream>

using namespace std;

class Persona{
    private:
        string Nombre;
        string id;
        string edad;
        string telefono;
        string correo;

    public:
        Persona(string pnombre, string pidentificacion,string pedad ,string ptelefono , string pcorreoelec){
            Nombre = pnombre;
            edad = pedad;
            id = pidentificacion;
            telefono = ptelefono;
            correo = pcorreoelec;
        }

    void informacionPersona(){
        cout << "nombre: " <<Nombre<< endl;
        cout << "edad:" <<edad<< endl;
        cout << "id:" <<id<< endl;
        cout << "telefono:" <<telefono<< endl;
        cout << "correo: " <<correo<< endl;
    }
};
class empleado : public Persona{
    private:

        string codigopersonaldelempleado;

    public:empleado (string pnombre, string pid, string pedad,string ptelefono  ,string pcorreoelec, string pcodigopersonaldelempleado) :Persona ( pnombre,pid ,pedad, ptelefono ,pcorreoelec){

            codigopersonaldelempleado = pcodigopersonaldelempleado;
        }
    void datosdelempleado(){
        informacionPersona();

        cout << "Numero de acceso del empleado " <<codigopersonaldelempleado<< endl;

    }
     void Modificarelempleado(){
        cout << "Se modificara este empleado" << endl;
        informacionPersona();
    }
    void Eliminarelempleado(){
        cout << "Se eliminara este empleado" << endl;
        informacionPersona();
    }
};

int main(){

    empleado primempleado("pablo","6678920101","25","55667812","pabloj34@gmail.com","99887700");
    primempleado.datosdelempleado();
    cout << endl;
    primempleado.Modificarelempleado();
    cout << endl;
    primempleado.Eliminarelempleado();
    return 0;
}
