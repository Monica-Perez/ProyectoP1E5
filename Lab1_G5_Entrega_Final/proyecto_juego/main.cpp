#include <iostream>
#include "player.h"
#include "mapcell.h"
#include "gamemap.h"

using namespace std;

int main()
{
    gamemap map;//Monica Perez 9959-21-1840
    player hero;
    map.drawPortada();//Alan Galicia 9959-21-3632
    //Daniel Hall 9959-21-1395
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\t\t\t\t****INSTRUCCIONES****";
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\n" << endl;
      cout << "\n  EL JUEGO CONSISTE EN LLEVAR AL ROBOT POR EL INTERIOR DEL LABERITO CON EL PROPOSITO";
      cout << "\n  DE QUE LLEGUE A EL SIGNO DEL DOLAR $ Y ASI OTORGARLE EL PREMIO GANADOR DEL LABERINTO";
      cout << "\n  PARA ELLO TENDRA QUE UTILIZAR LAS LETRAS W (Arriba) S (Abajo) A (Izquierda) D (Derecha)";
      cout << "\n" << endl;
      cout << "\n----------------------------------------------------------------------------------------" << endl;

    int contador=0;
    while(map.isGameOver==false){//Monica Perez 9959-21-1840

      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\t\t\t   ****COMANDOS DE MOVIMIENTO****";
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\n\t\tArriba|w|, Abajo |s|, Izquierda |a|, Derecha |d|" << endl;
      cout << "\n\t\t\t     Salir del Juego |x|" << endl;
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\nIntroduza Comando de Movimiento: ";

      hero.callInput();
      contador+=1;
      cout<<"\nNumero de Movimientos: "<<contador<<endl<<endl;

      //Actualizar información del jugador en el mapa
      if(map.setPlayerCell(hero.getValueX(), hero.getValueY())){
        map.draw();
      }else{
        hero.resetToSafePosition();
        map.draw();
      }
    }
    return 0;
}
