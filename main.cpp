#include <iostream>
#include <string>
#include "ModReader.h"

int main() {
    std::cout << "Cargando definitiones" << std::endl;
    ModReader* modReader = new ModReader(
        "/opt/projects/medieval-ii-modding-library-core/resources/miimlc.db",
        "/opt/projects/medieval-ii-modding-library-core/resources/modfiles/"
    );
    std::cout << "Definitiones cargadas" << std::endl;
    return 0;
}