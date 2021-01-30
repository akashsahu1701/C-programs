#include "Movie.h"
#include <iostream>

using namespace std;

void Movie::display()
{
    cout << getName() << " " << getRatings() << " " << getViews() << endl;
}

void Movie::increaseView()
{
    views++;
    setView(views);
}

Movie::Movie(string tempName, int tempRatings, int tempViews)
    : name{tempName}, ratings{tempRatings}, views{tempViews} {}
