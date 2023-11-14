/* Author: Aaftab Gowani
Date: 09/23/2023
Description: Program to help simulate the outcome of the batter’s hit
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int distance;
    // Seed the random number generator
    srand(time(0));

    distance = 0 + rand() % 451;
    if(distance > 400)
    cout<<"Distance is "<<distance<<" batter hit a home run and scored a run for the team"<<endl;
    else if(distance >=135 && distance <= 400)
    cout<<"Distance is "<<distance<<" batter hit the ball into the outfield and made it to third base"<<endl;
    else if(distance >=10 && distance <= 134)
    cout<<"Distance is "<<distance<<" batter hit the ball into the infield and made it to second base"<<endl;
    else if(distance >=1 && distance <= 9)
    cout<<"Distance is "<<distance<<" the batter bunted and made it to first base"<<endl;
    else
    cout<<"Distance is "<<distance<<" batter made a strike"<<endl;
    return 0;
}