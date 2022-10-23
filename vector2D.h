
#include <iostream>
#include <cmath>
using namespace std;

class Vector{
    
    private:
    double endx,endy;
    public:
    Vector(){
        endx=0;
        endy=0;
    }
    Vector(double x,double y){
        endx=x;
        endy=y;
    }
    
    void SetX(double x){
        endx=x;
    }
    void SetY(double y){
        endy=y;
    }
    double GetX(){
        return endx;
    }
    double GetY(){
        return endy;
    }
    double magnitude(){
        return sqrt(pow(GetX(),2)+pow(GetY(),2)) ;
    }
    double angle(){
        return atan(GetY()/GetX());
    }
    double angleD(){
        return atan(GetY()/GetX())* 180 /M_PI;
    }
    void multiply(double f){
        SetX(GetX()*f);
        SetY(GetY()*f);
    }
    Vector add(Vector ff){
        Vector po;
        po.SetX(GetX()+ff.GetX());
        po.SetY(GetY()+ff.GetY()); 
        return po;
    }
    Vector clone(){
        Vector s;
        s.SetX(GetX());
        s.SetY(GetY());
        return s;
    }
};

    
