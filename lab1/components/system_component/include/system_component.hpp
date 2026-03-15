#define a_max 0.5
#define delta_max 0.5
#define delta_0 0
#define g 9.81

// Объявление структур, содержащих параметры систем
typedef struct{
    int p;
    float a;
    int m;
    int u;
    float cx;
    float cy;
    float m1;
    float m2;
    int T;
    int x1_0;
    float x2_0;
    int x3_0;
    int x4_0;
    float x5_0;

}system1_parameters;


typedef struct {
    int k;
    int l;
    int m;
    int n;
    int kt;
    int b;
    int i1;
    int i2;
    int s;
    int V;
    int T;
    float x1_0;
    float x2_0;
    int x3_0;
    int x4_0;
    int x5_0;
}system2_parameters;


typedef struct {
    int k;
    int l;
    int m;
    int n;
    int kt;
    int b;
    int i1;
    int i2;
    int s;
    int V;
    int T;
    float x1_0;
    float x2_0;
    int x3_0;
    int x4_0;
    int x5_0;
}system3_parameters;


typedef struct {
    int c;
    int u;
    int T;
    int h_tb;
    int x1_0;
    int x2_0;
    int x3_0;
}system4_parameters;

//Объединение структур в одно пространсво имён, описывающего параметры систем
namespace system_parameters {
    system1_parameters sys_param_1;
    system2_parameters sys_param_2;
    system3_parameters sys_param_3; 
    system4_parameters sys_param_4;
};
