#ifndef L9110_h
#define L9110_h

class L9110 {
  public:  
    L298N (int AIA, int AIB, int BIA, int BIB);
    
    void forward (int velocidad_L, int velocidad_R, int tiempo);
    void reverse (int velocidad_L, int velocidad_R, int tiempo);
    void drive (int velocidad_L, int velocidad_R, int tiempo);
    void rotate (int velcocidad, int tiempo);
    void brake (int tiempo);
  
    int _AIA;
    int _AIB;
    int _BIA;
    int _BIB;
    
};
#endif
