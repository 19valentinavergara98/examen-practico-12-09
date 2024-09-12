#include <iostream>
#include <windows.h>
#include "haversine.h"

typedef void (*funcionCalculo)();

int main() {   
     HMODULE hModule = LoadLibraryA("haversine.dll");
    funcionCalculo calculateDistance = (funcionCalculo)GetProcAddress(hModule, "calculateDistance"); 

    // Sagrada Familia
    double lat1 = 41.4036;
    double lon1 = 2.1744;

    // Parque Güell
    double lat2 = 41.4145;
    double lon2 = 2.1527;

    double distancia = calcularDistancia(lat1, lon1, lat2, lon2);

    std::cout << "La distancia entre Sagrada Familia y Parque Güell es: "
              << distancia << " km." << std::endl;

    return 0;
}
