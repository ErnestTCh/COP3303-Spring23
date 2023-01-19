// Ernest Charles 
// COP330
// This program finds the roots for quadratic equations ax^2+bx+c=0

#include <iostream> //Library for cout and cin func
#include <math.h> // Lib for use of math funcs
#include <iomanip> // Lib for stream manipulator (setw and setprecesion)

using namespace std;

int main()

{

double a=1,b=20,c=5;
double x_sol1 = 0.0, x_sol2 = 0.0;
double descriminant =0.0;


descriminant = pow(b,2)-4*a*c;

if(descriminant>=0){
x_sol1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
x_sol2 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
cout <<"\nThe two real solutions for the given quadratic equation are:"<<endl;
cout <<left<<"first solution --->"<<setw[4]<<right<<setprecision[4]<<x_sol1;
cout <<left<<"second solution --->"<<setw[4]<<right<<setprecision[4]<<x_sol2;
}
else{
cout << left <<"The given equation does not have real solutions, the descriminant value is:"<<descriminant<<endl;
}

return 0;
}
