#include <stdio.h>
#include <string>
#include <iostream>
#include "builder_pattern.hpp"


int main(){

    Director_computer_builder director;
    Computer_builder builder;
    Computer desktop = director.assemble_computer(builder,"Intecl core i-9","RTX 3070","1128 GB","256 TB");
    printf("First try succesfull\n");
    std::cout << "Desktop Computer Configuration:" << std::endl;
    desktop.display();
;
    return 0;
}