#include <iostream>
#include<cmath>
using namespace std;

//double deg ;
//double rad ;
//double l1 ;
//double l2 ;
//double deg1 ;
//double deg2 ;

double findXComponent(double l1,double l2,double deg1,double deg2){
    double xcomp = l1*cos(deg1) + l2*cos(deg2) ;
    return xcomp ;
}

double findYComponent(double l1,double l2,double deg1,double deg2){
    double ycomp = l1*sin(deg1) + l2*sin(deg2) ;
    return ycomp ;
}

double pythagoras(double xcomp, double ycomp){
    double result_vec_lenght = sqrt(pow(xcomp,2)+pow(ycomp,2));
    return result_vec_lenght ;
}


void showResult(double result_vec_lenght,double result_vec_direction){
    cout << "Length of the resultant vector = " << result_vec_lenght << endl;
    cout << "Direction of the resultant vector (deg) = "<< result_vec_direction << endl ;
}


float deg2rad(double deg){
    double rad = (deg/360.00)*2*M_PI ;
    return rad;
}
float rad2deg(double rad){
    double deg = (rad*360.00)/(2*M_PI) ;
    return deg;
}


int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl ;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction) ;
    
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" ;


}
