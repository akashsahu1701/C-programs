#ifndef _MOVIES_H
#define _MOVIES_H
#include "Movie.h"
#include <vector>

using namespace std;

class Movies
{
    vector<Movie> movies;

public:
    bool addMovie(string tempName, int tempRatings, int tempViews);
    void display();
    bool incrementView(string movieName);
};

#endif