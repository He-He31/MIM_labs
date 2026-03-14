#include <stdio.h>
#include <string>
class Computer{
    public:
        void set_cpu(std::string& cpu_model);
        void set_gpu(std::string& gpu_model);
        void set_ram(std::string& ram_model);
        void set_memory(std::string& memory_model);
        void display();        
    private:
    std::string cpu_model_;
    std::string gpu_model_;
    std::string ram_model_;
    std::string memory_model_;
};


class computer_builder_interface{

    public:
        virtual void set_cpu(std::string& cpu_model) = 0;
        virtual void set_gpu(std::string& gpu_model) = 0;
        virtual void set_ram(std::string& ram_model) = 0 ;
        virtual void set_memory(std::string& memory_model) = 0;  
        virtual Computer get_result(void) = 0;
};


class Computer_builder : public computer_builder_interface {
    public:
        void set_cpu(std::string& cpu) override;
        void set_gpu(std::string& gpu) override;
        void set_ram(std::string& ram_model) override;
        void set_memory(std::string& memory_model) override;
        Computer get_result(void) override;
    private:
    Computer computer_;
};

class Director_computer_builder{
    public:
    Computer assemble_computer(computer_builder_interface& builder,std::string cpu,std::string gpu,std::string ram,std::string memory);

};


