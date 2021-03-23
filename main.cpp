//
//  main.cpp
//  Assignment_6
//
//  Created by Noah Honickman on 12/26/20.
//This program declares an array of three variables in the CandyBar struct and prints their //contents

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
struct CandyBar{
    string name;
    double weight;
    int cal;
};
int main() {
    CandyBar vars[3] = {
        {"Milky Way", 3.5, 300},
        {"Snickers", 4.5, 350},
        {"3 Musketeers", 5, 400}
    };
    
    cout << "Here is the info for the first candy bar: \n";
    cout << "Name: " << vars[0].name << "\n";
    cout << "Weight: " << vars[0].weight << " ounces \n";
    cout << "Calories: " << vars[0].cal << " calories \n";
    cout<< "\n";
    
    cout << "Here is the info for the second candy bar: \n";
    cout << "Name: " << vars[1].name << "\n";
    cout << "Weight: " << vars[1].weight << " ounces \n";
    cout << "Calories: " << vars[1].cal << " calories\n";
    cout << "\n";
    
    cout << "Here is the info for the third candy bar: \n";
    cout << "Name: " << vars[2].name << "\n";
    cout << "Weight: " << vars[2].weight << " ounces \n";
    cout << "Calories: " << vars[2].cal << " calories \n";
    
    
    return 0;
}
