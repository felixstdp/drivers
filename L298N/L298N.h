#ifndef L298N_h
#define L298N_h

class L298N {
  public:  
    L298N (int IN1, int IN2, int IN3, int IN4, int ENA, int ENB);
    
    void forward (int velocidad_L, int velocidad_R, int tiempo);
    void reverse (int velocidad_L, int velocidad_R, int tiempo);
    void drive (int velocidad_L, int velocidad_R, int tiempo);
    void rotate (int velcocidad, int tiempo);
    void brake (int tiempo);
  
    int _IN1;
    int _IN2;
    int _IN3;
    int _IN4;
    int _ENA;
    int _ENB;

};
#endif
