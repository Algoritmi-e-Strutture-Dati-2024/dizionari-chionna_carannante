#include <string>
#include "DizionarioEsteso.cpp"

int main() {

    Dizionario<std::string> dict;

    dict.inserisci("apple", "fruit");
    dict.inserisci("car", "vehicle");
    dict.inserisci("book", "object");

    std::cout << "Value for 'apple': " << dict.recupera("apple") << "\n";
    std::cout << "Value for 'car': " << dict.recupera("car") << "\n";
    std::cout << "Value for 'pen': " << dict.recupera("pen") << "\n";

    dict.stampa();
    //appartiene
    std::cout <<"Key 'car' exists: "<<(dict.appartiene("car")? "true":"false");
    std::cout <<"Key 'pen' exists: "<<(dict.appartiene("pen")? "true":"false");

    //possibile collisione
    dict.inserisci("ppale", "collisione");

    //cancellazione chiave
    dict.cancella("car");
    dict.stampa();



    return 0;
}
