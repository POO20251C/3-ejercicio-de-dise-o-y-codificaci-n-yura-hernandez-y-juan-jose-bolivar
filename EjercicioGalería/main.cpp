#include <iostream>

#include "src/Obra.h"
#include "src/Artista.h"
#include "src/Galeria.h"

using namespace std;
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    Galeria gale("Museolandia","Calle 5ta");
    Obra miobra("La decadencia","1050","20252002"); // instancia del objeto Obra
    cout << "El nombre de la obra es:" << miobra.getTitulo() << "\ny mi id es: "<<miobra.getId() << endl;
    Obra miobra2("La belleza", "1051","20250503");
    Artista art("1234","Maestro Lemus","20250301");
    Artista art2("1235","Maestro Botero","20250306");
    cout << "El artista se llama: " << art.getName() << endl;
    cout << art.registrarObra(miobra) << endl;
    cout << art.registrarObra(miobra2) << endl;
    cout << art.mostrarObras() << endl;
    cout << "\n" << "DESDE AQUI LO NUEVO" << endl;
    cout << gale.registrarArtista(art) << endl;
    cout << gale.registrarArtista(art2) << endl;
    cout << "ESTOS SON LOS ARTISTAS REGISTRADOS EN LA GALERIA: " << gale.getName() << endl;
    cout << gale.mostrarArtistas() << endl;
    cout << "El Artista: " << gale.getArtistas()[0].getName() << " Presentara sus obras:\n" << gale.getArtistas()[0].mostrarObras() << endl;
    cout << "El Artista: " << gale.getArtistas()[1].getName() << " Presentara sus obras:\n" << gale.getArtistas()[1].mostrarObras() << endl;


    return 0;
}

// TIP See CLion help at <a
// href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>.
//  Also, you can try interactive lessons for CLion by selecting
//  'Help | Learn IDE Features' from the main menu.