// adding guards
#ifndef _MOVIE_H
#define _MOVIE_H
#include <string>
using namespace std;

class Movie
{
    string name;
    int ratings;
    int views;

public:
    void setView(int tempView) { views = tempView; }
    string getName() { return name; }
    int getRatings() { return ratings; }
    int getViews() { return views; }
    void display();
    void increaseView();

    Movie(string tempName, int tempRatings = 0, int tempViews = 0);
};

#endif