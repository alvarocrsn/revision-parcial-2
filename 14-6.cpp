#include <iostream>
#include <vector>

using namespace std;

/// el void puede devolver algo o nada
void imprimirArray(vector<int>unArray){
    for(int i = 0; i < unArray.size(); i++){
        cout << unArray[i] << " ";
    }
    cout << endl;
}

int main(){
    ///parte 1
    vector<int> numeros = {10, 20, 30, 40, 50};
    cout << "Vector original: ";
    imprimirArray(numeros);

    ///parte 2, agregar valores
    numeros.push_back(60);
    numeros.push_back(70);
    cout << "El vector despues de pushear los datos: ";
    imprimirArray(numeros);

    ///parte 3 quitar valores
    vector<int>nuevoArray;
    size_t index = 0;
    for(const int elementos : numeros){
        if(index != 2){
            nuevoArray.push_back(elementos);
        }
        index++;
    }
    cout << "Array sin el 2do elemento: ";
    imprimirArray(nuevoArray);

    return 0;
}


string asientosDisponibles(vector<int> asientosDisponibles, int asientoElegido){
    
    string mensaje;
    bool asientoDisponible = false;
    
    for(int i = 0; i < asientosDisponibles.size(); i++){
        
        if(asientosDisponibles[i] == asientosElegidos){
            asientoDisponible = true;
            break;
        }
        
    }
    
    if(asientoDisponible){
        mensaje = "Felicidades el asiento: "+ to_string(asientoElegido)+"esta libre"
    }
    
}



int main(){
    
    vector<int>asientos = {15, 28, 44, 45, 70};
    
    
    
    return 0;
}

