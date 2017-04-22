#ifndef L298D_h
#define L298D_h

class L298D {
  public:
    L298D ();
    void forward(int l, int r, int t);
    void reverse(int l, int r, int t);
    void rotate(int t);
    void brake(int t);
    void march();
};
#endif
