#include "Movies.h"
#include <iostream>
#include <vector>

using namespace std;

bool Movies::addMovie(string tempName, int tempRatings, int tempViews)
{
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].getName() == tempName)
        {
            return false;
        }
    }
    movies.push_back(Movie(tempName, tempRatings, tempViews));
    return true;
}

bool Movies::incrementView(string movieName)
{
    for (int i = 0; i < movies.size(); i++)
    {
        if (movies[i].getName() == movieName)
        {
            movies[i].increaseView();
            return true;
        }
    }
    return false;
}

void Movies::display()
{
    if (!movies.size())
    {
        cout << "No Movies To Display\n";
        return;
    }

    for (int i = 0; i < movies.size(); i++)
    {
        movies[i].display();
    }
}