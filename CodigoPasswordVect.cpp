#include <iostream>
#include <conio.h>
#include <string>
#include <vector>
#include <random>

using namespace std;

class Password {
private:
    int lngt;
    string pass;
public:
    char abecedarioMayusculas[26] = {'A','B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J','K', 'L', 'M','N','O','P','Q','R','S','T','U','V','W', 'X','Y','Z'};
    char abecedarioMinusculas[26] = {'a','b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j','k', 'l', 'm','n','o','p','q','r','s','t','u','v','w', 'x','y','z'};
    char numeros[10] = {'0','1','2','3','4','5','6','7','8','9'};

    Password()
    {
        this->lngt = 8;
    }
    Password(int _lngt)
    {
        this->lngt = _lngt;
    }

    ~Password() {}

    //Setters
    void SetLong(int _longit)
    {
        this->lngt = _longit;
    }

    //Getters
    int GetLong()
    {
        return this->lngt;
    }
    
    string GetPass()
    {
        return this->pass;
    }

    void SetPass(string _pass)
    {
        this->pass = _pass;
    }

    string GenerarPassword()
    {
        //LIBRERIA RANDOM
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dist(1, 3);

        //variable para randomizar la eleccion de los caracteres (minus, mayus, numeros)
        int caracter = 0;

        string cadena;

        for (int i = 0; i < this->lngt; i++)
        {
            caracter = dist(gen);

            switch (caracter)
            {
            case 1:
                cadena += abecedarioMayusculas[rand() % 26];
                break;
            case 2:
                cadena += abecedarioMinusculas[rand() % 26];
                break;
            case 3:
                cadena += numeros[rand() % 10];
                break;
            default:
                break;
            }
        }
        

        this->SetPass(cadena);

        return this->GetPass();
    }

    
    bool esFuerte(string _cadena)
    {
        //numero de caracteres en una contraseña
        int caracteres = _cadena.length();

        int countNum = 0, countMayus = 0, countMinus = 0;
        
        for (int i = 0; i < caracteres; i++)
        {
            //deteccion de mayusculas
            if (int(_cadena[i]) >= 48 && int(_cadena[i]) <= 57)
            {
                countNum++;
            }
            //deteccion de mayusculas
            if (int(_cadena[i]) >= 65 && int(_cadena[i]) <= 90)
            {
                countMayus++;
            }
            //deteccion de minusculas
            if (int(_cadena[i]) >= 97 && int(_cadena[i]) <= 122)
            {
                countMinus++;
            }
        }

        cout << endl;

        //descomentar estas 3 lineas para verificar el boolean de "EsSeguro()"
        /*
        cout << "Num: " << countNum << endl;
        cout << "Mayus: " << countMayus << endl;
        cout << "Minus: " << countMinus << endl;
        */

        if (countNum > 5 && countMayus > 2 && countMinus > 1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    
    


};
int main()
{

    //LIBRERIA RANDOM
    random_device rd2;
    mt19937 gen(rd2());
    uniform_int_distribution<> dist2(10, 15);
    int ncontr;
    cout << "Ingrese el numero de contrasenias a generar: ";
    cin >> ncontr;
    //vector para guardar distintos objetos
    vector<Password> contrasenias(ncontr);

    for (int i = 0; i < contrasenias.size(); i++)
    {

        contrasenias[i].SetLong(dist2(gen));
        contrasenias[i].GenerarPassword();
        cout << "Contrasenia [" << i + 1 << "]: ";
        cout << contrasenias[i].GetPass() << endl;

        if (contrasenias[i].esFuerte(contrasenias[i].GenerarPassword()) == true)
        {
            cout << "es fuerte" << endl;
        }
        else
        {
            cout << "no es fuerte" << endl;
        }

        cout << endl << endl;
    }

    _getch();
    return 0;
}
