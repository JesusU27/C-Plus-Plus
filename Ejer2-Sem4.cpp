#include "pch.h"
#include "iostream"
#include "conio.h"
#define ARRIBA 65
#define ABAJO 66
#define IZQUIERDA 73
#define DERECHA 68
using namespace std;
using namespace System;

void meta()
{
    for (int y = 0; y < 40; y++)
    {
        Console::SetCursorPosition(12, y);
        cout << char(219);
    }

    for (int y = 0; y < 40; y++)
    {
        Console::SetCursorPosition(50, y);
        cout << char(219);
    }
}

//descomenta las lineas del main que quieras
//logicamente no pueden haber 2 main juntos
/*
int main()
{
    int x= 10, y=10;
    int dx = -1;

    Console::SetWindowSize(120, 50);
    Console::CursorVisible = false;

    while (true)
    {
        //borrar
        Console::SetCursorPosition(x, y); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 1); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 2); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 3); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 4); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 5); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 6); cout << "                                                                                        ";
        Console::SetCursorPosition(x, y + 7); cout << "                                                                                        ";
        
        //mover
        if (x < 2 || x>39) dx *= -1;
        x = x + dx;
        

        
        //mostrar
        Console::ForegroundColor = ConsoleColor::Yellow;

        Console::SetCursorPosition(x, y);cout << " _                                  _  __              _ _                      ";
        Console::SetCursorPosition(x, y+1);cout << "| |                                | | \\ \\       /\\   | (_)                             ";
        Console::SetCursorPosition(x, y+2);cout << "| |     __ _  __   _____   ___ __ _| |  \\ \\     /  \\  | |_  __ _ _ __  ______ _         ";
        Console::SetCursorPosition(x, y+3);cout << "| |    / _` | \\ \\ / / _ \\ / __/ _` | |   > >   / /\\ \\ | | |/ _` | '_ \\|_  / _` |        ";
        Console::SetCursorPosition(x, y+4);cout << "| |___| (_| |  \\ V / (_) | (_| (_| | |  / /   / ____ \\| | | (_| | | | |/ / (_| |        ";
        Console::SetCursorPosition(x, y+5);cout << "|______\\__,_|   \\_/ \\___/ \\___\\__,_|_| /_/   /_/    \\_\\_|_|\\__,_|_| |_/___\\__,_|        ";
        Console::SetCursorPosition(x, y+6);cout << "                                                                                        ";
        Console::SetCursorPosition(x, y+7);cout << "                                                                                        ";
        
        

        _sleep(100);

        
    }
   
    _getch();
    return 0;
}
*/



int main()
{
    Console::SetWindowSize(80, 40);
    Console::CursorVisible = false;

    int x, y;
    x = 40; y = 20;
    
   
    while (true)
    {
        
        //borrar
        
        Console::SetCursorPosition(x, y); cout << "               ";
        Console::SetCursorPosition(x, y+1); cout << "               ";
        Console::SetCursorPosition(x, y+2); cout << "               ";
        Console::SetCursorPosition(x, y+3); cout << "               ";
        Console::SetCursorPosition(x, y+4); cout << "               ";
        Console::SetCursorPosition(x, y+5); cout << "               ";
        Console::SetCursorPosition(x, y+6); cout << "               ";
        Console::SetCursorPosition(x, y+7); cout << "               ";
        Console::SetCursorPosition(x, y+8); cout << "               ";
        Console::SetCursorPosition(x, y+9); cout << "               ";
        Console::SetCursorPosition(x, y+10); cout << "               ";
        

        
        
        

        //mover
        if (kbhit())
        {
            char tecla = getch();
            tecla = toupper(tecla);

            if (tecla == ARRIBA && y > 0)        y-=2;
            if (tecla == ABAJO && y < 40)      y+=2;
            if (tecla == DERECHA && x + 15 < 80)   x+=2;
            if (tecla == IZQUIERDA && x > 0)      x-=2;
            
        }

        //mostrar
        
       
        Console::ForegroundColor = ConsoleColor::Gray;
        Console::SetCursorPosition(x, y); cout << "       .";
        Console::SetCursorPosition(x, y + 1); cout << "       |";
        Console::SetCursorPosition(x, y + 2); cout << "       |";
        Console::SetCursorPosition(x, y + 3); cout << "    ,-'\"`-.";
        Console::SetCursorPosition(x, y + 4); cout << "  ,'       `.";
        Console::SetCursorPosition(x, y + 5); cout << "  |  _____  |";
        Console::SetCursorPosition(x, y + 6); cout << "  | (_o_o_) |";
        Console::SetCursorPosition(x, y + 7); cout << "  |         |";
        Console::SetCursorPosition(x, y + 8); cout << "  | |HHHHH| |";
        Console::SetCursorPosition(x, y + 9); cout << "  | |HHHHH| |";
        Console::SetCursorPosition(x, y + 10); cout << "-'`-._____.-'`-";
        

        _sleep(100);
        
    }



    _getch();
    return 0;
}


