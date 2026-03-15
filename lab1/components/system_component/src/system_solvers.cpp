#include "system_solvers.hpp"
#include <vector>
#include <math.h>


std::vector<float> system_description::get_x1_result(void){
    return x1;
};

std::vector<float> system_description::get_x2_result(void){
    return x2;
};

std::vector<float> system_description::get_x3_result(void){
    return x3;
};

std::vector<float> system_description::get_x4_result(void){
    return x4;
};

std::vector<float> system_description::get_x5_result(void){
    return x5;
};

std::vector<float> system_description::get_t_result(void){
    retrun t;
};


void system_1::system_1(){

    p_ = 0;
    a_ = 0;
    m_ = 0;
    u_ = 0;
    cx_ = 0;
    cy_ = 0;
    m1_ = 0;
    m2_ = 0;
    T_ = 0;
    x1_0_ = 0;
    x2_0_ = 0;
    x3_0_ = 0;
    x4_0_ = 0;
    x5_0_ = 0;
    inital_step_ = 0;
    initial_complete = fasle;

};


void system_2::system_2(){


    k_ = 0;
    l_ = 0;
    m_ = 0;
    n_ = 0;
    kt_ = 0;
    b_ = 0;
    i1_ = 0;
    i2_ = 0;
    s_ = 0;
    V_ = 0;
    T_ = 0;
    x1_0_ = 0;
    x2_0_ = 0;
    x3_0_ = 0;
    x4_0_ = 0;
    x5_0_ = 0;
    inital_step_ = 0;
    initial_complete = fasle;

};


void system_3::system_3(){

    k_ = 0;
    l_ = 0;
    m_ = 0;
    n_ = 0;
    kt_ = 0;
    b_ = 0;
    i1_ = 0;
    i2_ = 0;
    s_ = 0;
    V_ = 0;
    T_ = 0;
    x1_0_ = 0;
    x2_0_ = 0;
    x3_0_ = 0;
    x4_0_ = 0;
    x5_0_ = 0;
    inital_step_ = 0;
    initial_complete = fasle;
    
};


void system_4::system_4(){

    c_ =  0;
    u_ = 0;
    T_ = 0;
    h_tb_ = 0;
    x1_0_ = 0;
    x2_0_ = 0;
    x3_0_ = 0;
    inital_step_ = 0;
    x4_0 = 0;//Инициализация в 0, как для неипспользуемого параметра
    x5_0 = 0;//Инициализация в 0, как для неипспользуемого параметра
    initial_complete = fasle;

    
};




void system_1::init(const system1_parameters param,float inital_step){

    p_ = param.p;
    a_ = param.a;
    m_ = param.m;
    u_ = param.u;
    cx_ = param.cx;
    cy_ = param.cy;
    m1_ = param.m1;
    m2_ = param.m2;
    T_ = param.T;
    x1_0_ = param.x1_0;
    x2_0_ = param.x2_0;
    x3_0_ = param.x3_0;
    x4_0_ = param.x4_0;
    x5_0_ = param.x5_0;
    inital_step_ = inital_step;
    initial_complete = true;

    x1.resize(1);
    x1[0] = x1_0_;


    x2.resize(1);
    x2[0] = x2_0_;


    x3.resize(1);
    x3[0] = x3_0_;


    x4.resize(1);
    x4[0] = x4_0_;


    x5.resize(1);
    x5[0] = x5_0_;

    t.resize(1);
    t[0]=0;

};

void system_2::init(const system2_parameters param,float inital_step){

    k_ = param.k;
    l_ = param.l;
    m_ = param.m;
    n_ = param.n;
    kt_ = param.kt;
    b_ = param.b;
    i1_ = param.i1;
    i2_ = param.i2;
    s_ = param.s;
    V_ = param.V;
    T_ = param.T;
    x1_0_ = param.x1_0;
    x2_0_ = param.x2_0;
    x3_0_ = param.x3_0;
    x4_0_ = param.x4_0;
    x5_0_ = param.x5_0;
    inital_step_ = inital_step;
    initial_complete = true;

    x1.resize(1);
    x1[0] = x1_0_;


    x2.resize(1);
    x2[0] = x2_0_;


    x3.resize(1);
    x3[0] = x3_0_;


    x4.resize(1);
    x4[0] = x4_0_;


    x5.resize(1);
    x5[0] = x5_0_;

    t.resize(1);
    t[0]=0;

};

void system_3::init(const system3_parameters param,float inital_step){


    k_ = param.k;
    l_ = param.l;
    m_ = param.m;
    n_ = param.n;
    kt_ = param.kt;
    b_ = param.b;
    i1_ = param.i1;
    i2_ = param.i2;
    s_ = param.s;
    V_ = param.V;
    T_ = param.T;
    x1_0_ = param.x1_0;
    x2_0_ = param.x2_0;
    x3_0_ = param.x3_0;
    x4_0_ = param.x4_0;
    x5_0_ = param.x5_0;
    inital_step_ = inital_step;
    initial_complete = true;

    x1.resize(1);
    x1[0] = x1_0_;


    x2.resize(1);
    x2[0] = x2_0_;


    x3.resize(1);
    x3[0] = x3_0_;


    x4.resize(1);
    x4[0] = x4_0_;


    x5.resize(1);
    x5[0] = x5_0_;

    t.resize(1);
    t[0]=0;

};

void system_4::init(const system4_parameters param,float inital_step){

    c_ =  param.c;
    u_ = param.u;
    T_ = param.T;
    h_tb_ = param.h_tb;
    x1_0_ = param.x1_0;
    x2_0_ = param.x2_0;
    x3_0_ = param.x3_0;
    inital_step_ = inital_step;
    x4_0 = 0;//Инициализация в 0, как для неипспользуемого параметра
    x5_0 = 0;//Инициализация в 0, как для неипспользуемого параметра
    initial_complete = true;

    x1.resize(1);
    x1[0] = x1_0_;


    x2.resize(1);
    x2[0] = x2_0_;


    x3.resize(1);
    x3[0] = x3_0_;


    x4.resize(1);
    x4[0] = x4_0_;


    x5.resize(1);
    x5[0] = x5_0_;

    t.resize(1);
    t[0]=0;
};




void system_1::solve(void){
if(initial_complete){
        int delta = 100;// значение относительной погрешности
        float h = inital_step_;

        //Вектора для хранения результатов первого прохода
        std::vector<float> x1_1;
        std::vector<float> x2_1;
        std::vector<float> x3_1;
        std::vector<float> x4_1;
        std::vector<float> x5_1;
        std::vector<float> t_1;

        //Вектора для хранения результатов второго прохода
        std::vector<float> x1_2;
        std::vector<float> x2_2;
        std::vector<float> x3_2;
        std::vector<float> x4_2;
        std::vector<float> x5_2;
        std::vector<float> t_2;



        while(delta > 0.01){

            system1_calculate_system_primitive(x1_1,x2_1,x3_1,x4_1,x5_1,t_1,h);

            h /=2;

            system1_calculate_system_primitive(x1_2,x2_2,x3_2,x4_2,x5_2,t_2,h);

            h /=2;


            delta = abs((x4_2[last] - x4_1[last]) / x4_2[last]) * 100;
        }
    }
    else{
        fprintf(stderr, "System must be initialized first\n");
    }

}


void system_2::solve(void){
    if(initial_complete){
        int delta = 100;// значение относительной погрешности
        float h = inital_step_;

        //Вектора для хранения результатов первого прохода
        std::vector<float> x1_1;
        std::vector<float> x2_1;
        std::vector<float> x3_1;
        std::vector<float> x4_1;
        std::vector<float> x5_1;
        std::vector<float> t_1;

        //Вектора для хранения результатов второго прохода
        std::vector<float> x1_2;
        std::vector<float> x2_2;
        std::vector<float> x3_2;
        std::vector<float> x4_2;
        std::vector<float> x5_2;
        std::vector<float> t_2;



        while(delta > 0.01){

            system2_calculate_system_primitive(x1_1,x2_1,x3_1,x4_1,x5_1,t_1,h);

            h /=2;

            system2_calculate_system_primitive(x1_2,x2_2,x3_2,x4_2,x5_2,t_2,h);

            h /=2;


            delta = abs((x5_2[last] - x5_1[last]) / x5_2[last]) * 100;
        }
    }
    else{
        fprintf(stderr, "System must be initialized first\n");
    }

}


void system_3::solve(void){

    if(initial_complete){
        int delta = 100;// значение относительной погрешности
        float h = inital_step_;

        //Вектора для хранения результатов первого прохода в рамках одной итерации
        std::vector<float> x1_1;
        std::vector<float> x2_1;
        std::vector<float> x3_1;
        std::vector<float> x4_1;
        std::vector<float> x5_1;
        std::vector<float> t_1;

        //Вектора для хранения результатов второго прохода в рамках одной итерации
        std::vector<float> x1_2;
        std::vector<float> x2_2;
        std::vector<float> x3_2;
        std::vector<float> x4_2;
        std::vector<float> x5_2;
        std::vector<float> t_2;



        while(delta > 0.01){

            system3_calculate_system_primitive(x1_1,x2_1,x3_1,x4_1,x5_1,t_1,h);

            h /=2;

            system3_calculate_system_primitive(x1_2,x2_2,x3_2,x4_2,x5_2,t_2,h);

            h /=2;


            delta = abs((x5_2[last] - x5_1[last]) / x5_2[last]) * 100;
        }
    }
    else{
        fprintf(stderr, "System must be initialized first\n");
    }

}


void system_4::solve(void){
    if(initial_complete){
        int delta = 100;// значение относительной погрешности
        float h = inital_step_;

        //Вектора для хранения результатов первого прохода
        std::vector<float> x1_1;
        std::vector<float> x2_1;
        std::vector<float> x3_1;
        std::vector<float> t_1;

        //Вектора для хранения результатов второго прохода
        std::vector<float> x1_2;
        std::vector<float> x2_2;
        std::vector<float> x3_2;
        std::vector<float> t_2;



        while(delta > 0.01){

            system4_calculate_system_primitive(x1_1,x2_1,x3_1,t_1,h);

            h /=2;

            system4_calculate_system_primitive(x1_2,x2_2,x3_2,t_2,h);

            h /=2;


            delta = abs((x1_2[last] - x1_1[last]) / x1н_2[last]) * 100;
        }
    }
    else{
        fprintf(stderr, "System must be initialized first\n");
    }

}






void system_1::system1_calculate_system_primitive(std::vector<float>& x1,std::vector<float>& x2,std::vector<float>& x3,std::vector<float>& x4,std::vector<float>& x5,std::vector<float>& t,float h);

    int num = ceil(T_ / h);

    float t = h;

    for(int i = 1; i< num; i++){
        
        x1 = x1[i-1] + h * (-g * sin(x2[i-1] )+ (p_-a_*cx_*pow(x1[i-1] ,2)) / (m_ - u_ * t[i-1] ) );
        x2 = x2[i-1]  + h * ( (-g + (p_*sin(x5[i-1] -x2[i-1] )+a_*cy_*pow(x1[i-1] ,2)) / (m_ - u_*t[i-1] ) ) / (x1[i-1] ) );
        x3 = x3[i-1]  + h * ( (m1_ * a_ * (x5[i-1]  - x2[i-1] )*pow(x1[i-1] ,2) - m2_ * a_ * pow(x1[i-1] ,2) * x3[i-1] ) / (m_ - u_ * t[i-1] ));
        x4 = x4[i-1]  + h * ( x1[i-1]  * sin(x2[i-1] ));
        x5 = x5[i-1]  + h * (x3[i-1] );

        t+=h;

        x1.push_back(x1);
        x2.push_back(x2);
        x3.push_back(x3);
        x4.push_back(x1);
        x5.push_back(x5);
        t.push_back(t);
    }


