#include <iostream>
#include "player.h"
#include "mapcell.h"
#include "gamemap.h"

using namespace std;

int main()
{
    // Aplicativo elaborado en el curso de Programacion I - Universidad Mariano Galvez
    // desarrollador: daguilae - Marzo 2022


    gamemap map;
    player hero;
    map.drawPortada();
    //map.draw();
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\t\t\t\t****INSTRUCCIONES****";
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\n" << endl;
      cout << "\n  EL JUEGO CONSISTE EN LLEVAR AL ROBOT POR EL INTERIOR DEL LABERITO CON EL PROPOSITO";
      cout << "\n  DE QUE LLEGUE A EL SIGNO DEL DOLAR $ Y ASI OTORGARLE EL PREMIO GANADOR DEL LABERINTO";
      cout << "\n  PARA ELLO TENDRA QUE UTILIZAR LAS LETRAS W (Arriba) S (Abajo) A (Izquierda) D (Derecha)";
      cout << "\n" << endl;
      cout << "\n----------------------------------------------------------------------------------------" << endl;

    while(map.isGameOver==false)

    {

        //cout << "\nIntrucciones: " << endl;
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\t\t\t   ****COMANDOS DE MOVIMIENTO****";
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\n\t\tArriba|w|, Abajo |s|, Izquierda |a|, Derecha |d|" << endl;
      cout << "\n\t\t\t     Salir del Juego |x|" << endl;
      cout << "\n----------------------------------------------------------------------------------------" << endl;
      cout << "\nIntroduza Comando de Movimiento: ";

      hero.callInput();

      //Actualizar información del jugador en el mapa
      if(map.setPlayerCell(hero.getValueX(), hero.getValueY()))
      {
     //   system("cls");
        map.draw();
      } else
      {
       // system("cls");
        hero.resetToSafePosition();
        //Dibujamos el mapa
        map.draw();

      }
      //map.draw();

    }

    return 0;
}
