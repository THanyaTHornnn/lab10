//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    float sum = 0;
    float sumsq = 0;
    string text;
    ifstream source("score.txt");
    while (getline(source,text))
    {
      sum = sum + atof(text.c_str());
      sumsq = sumsq + pow(atof(text.c_str()),2);
      count++;
    }
    
    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << sum/count << endl;
    cout << "Standard deviation = " << sqrt((sumsq/count)-pow(sum/count,2));
}