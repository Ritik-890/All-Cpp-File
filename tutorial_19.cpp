#include<iostream>
using namespace std;

/*Function overloading*/

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a+b+c;

}

//  Calculate the volume of a cylinder
int volume(double r, int h){
    return(3.14 * r * r * h);

}

//  Calculate the volume of cube 
int volume(int a){
    return( a * a * a );

}

//  Rectangular box
int volume(int l, int b, int h){
    return(l*b*h);

}


int main(){
    cout<<"The sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"The sum of 2, 7 and 5 is "<<sum(2,7,5)<<endl;
    cout<<"The volume of cuboid of 2, 7 and 5 is "<<volume(2,7,5)<<endl; 
    cout<<"The volume of cylinder of radius 2 and height 5 is "<<volume(2,5)<<endl;
    cout<<"The volume of cube of side 5 is "<<volume(5)<<endl;

    return 0;
}