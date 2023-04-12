#include "Pais.h"

int main()
{
    Pais objPais;
    objPais.setNombrePais("Peru");

    Regiones region1;
    region1.agregarRegion("Lima");
    objPais.agregarRegion(region1);

    objPais.listarPaises();

    /*
    vector <string> paises;


    paises.push_back("Peru");
    paises.push_back("Paraguay");
    paises.push_back("Chile");
    paises.push_back("Colombia");
    paises.push_back("Brasil");
    paises.push_back("Brasil");

    for (int i = 0; i < paises.size(); i++)
    {
        cout << paises[i] << endl;
    }

    string palabra = "Brasil";

    for (int i = 0; i < paises.size(); i++)
    {
        if (paises[i] == palabra)
        {
            cout << "elemento encontrado en la posicion: " << i + 1 << endl;
            break;
        }
    }

    string palabra2 = "Chile";

    cout << "tamano: " << paises.size();

    for (int i = 0; i < paises.size(); i++)
    {
        if (paises[i] == palabra2)
        {
            paises.erase(paises.begin() + i);
            cout << "Elemento eliminado en la posicion " << i << endl;
        }
    }

    for (int i = 0; i < paises.size(); i++)
    {
        cout << paises[i] << endl;
    }

    cout << "tamano: " << paises.size();

    */


    _getch();
    return 0;
}
