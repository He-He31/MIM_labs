#include <vector>
#include "system_parameters.hpp"

class system_description{

    public:
    std::vector<float> get_x1_result(void);
    std::vector<float> get_x2_result(void);
    std::vector<float> get_x3_result(void);
    std::vector<float> get_x4_result(void);
    std::vector<float> get_x5_result(void);
    std::vector<float> get_t_result(void);

    private:
    std::vector<float> x1;
    std::vector<float> x2;
    std::vector<float> x3;
    std::vector<float> x4;
    std::vector<float> x5;
    std::vector<float> t;
    bool initial_complete;
    
};


class system_1: public system_description{

    public:
    system_1();
    void init(const system_parameters::sys_param_1,float inital_step);
    void solve(void);

    private:
    void system1_calculate_system_primitive(std::vector<float>& x1,std::vector<float>& x2,std::vector<float>& x3,std::vector<float>& x4,std::vector<float>& x5,std::vector<float>& t,float h;
    int p_;
    float a_;
    int m_;
    int u_;
    float cx_;
    float cy_;
    float m1_;
    float m2_;
    int T_;
    int x1_0_;
    float x2_0_;
    int x3_0_;
    int x4_0_;
    float x5_0_;
    float inital_step_;
};



class system_2: public system_description{

    public:
    system_2();
    void init(const system_parameters::sys_param_2,float inital_step);
    void solve(void);

    private:
    void system2_calculate_system_primitive(std::vector<float>& x1,std::vector<float>& x2,std::vector<float>& x3,std::vector<float>& x4,std::vector<float>& x5,std::vector<float>& t,float h);
    int k_;
    int l_;
    int m_;
    int n_;
    int kt_;
    int b_;
    int i1_;
    int i2_;
    int s_;
    int V_;
    int T_;
    float x1_0_;
    float x2_0_;
    int x3_0_;
    int x4_0_;
    int x5_0_;
    float inital_step_;
};



class system_3: public system_description{

    public:
    system_3();
    void init(const system_parameters::sys_param_3,float inital_step);
    void solve(void);

    private:
    void system3_calculate_system_primitive(std::vector<float>& x1,std::vector<float>& x2,std::vector<float>& x3,std::vector<float>& x4,std::vector<float>& x5,std::vector<float>& t,float h);
    int k_;
    int l_;
    int m_;
    int n_;
    int kt_;
    int b_;
    int i1_;
    int i2_;
    int s_;
    int V_;
    int T_;
    float x1_0_;
    float x2_0_;
    int x3_0_;
    int x4_0_;
    int x5_0_;
    float inital_step_;
};



class system_4 : public system_description{

    public:
    system_4();
    void init(const system_parameters::sys_param_4,float inital_step);
    void solve(void);

    private:
    void system4calculate_system_primitive(std::vector<float>& x1,std::vector<float>& x2,std::vector<float>& x3,std::vector<float>& t,float h);
    int c_;
    int u_;
    int T_;
    int h_tb_;
    int x1_0_;
    int x2_0_;
    int x3_0_;
    float inital_step_;
};