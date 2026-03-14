#include "builder_pattern.hpp"
#include <iostream>
#include <string>

void Computer::set_cpu(std::string& cpu_model){
    cpu_model_ = cpu_model;
};

void Computer::set_gpu(std::string& gpu_model){
    gpu_model_ = gpu_model;
};

void Computer::set_ram(std::string& ram_model){
    ram_model_ = ram_model;
};

void Computer::set_memory(std::string& memory_model){
    memory_model_ = memory_model;
};
void Computer::display(){
    std::cout<<"CPU model:"<<cpu_model_<<std::endl;
    std::cout<<"GPU model:"<<gpu_model_<<std::endl;
    std::cout<<"RAM model:"<<ram_model_<<std::endl;
    std::cout<<"Memory model:"<<memory_model_<<std::endl;
};



void Computer_builder::set_cpu(std::string& cpu){
    computer_.set_cpu(cpu);
};
void Computer_builder::set_gpu(std::string& gpu){
    computer_.set_cpu(gpu);
}
void Computer_builder::set_ram(std::string& ram){
    computer_.set_ram(ram);
}
void Computer_builder::set_memory(std::string& memory){
    computer_.set_memory(memory);
};
Computer Computer_builder::get_result(void){
    return computer_;
}


Computer Director_computer_builder::assemble_computer(computer_builder_interface& builder,std::string cpu,std::string gpu,std::string ram,std::string memory){
    builder.set_cpu(cpu);
    builder.set_gpu(gpu);
    builder.set_memory(memory);
    builder.set_ram(ram);
    return builder.get_result();
}


