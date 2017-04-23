#ifndef Ardumoto_h
#define Ardumoto_h

class Ardumoto {
  public:
    Ardumoto ();
    void forward(int l, int r, int t);
    void reverse(int l, int r, int t);
    void rotate(int t);
    void brake(int t);
};
#endif
