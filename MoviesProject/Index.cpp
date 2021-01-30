#include <iostream>
#include "Movies.cpp"
#include "Movie.cpp"

using namespace std;

void addMovies(bool something)
{
    if (something)
    {
        cout << "Movie Added" << endl;
        return;
    }
    cout << "Movie Already Existed" << endl;
}

void incrementViews(bool something)
{
    if (something)
    {
        cout << "view increased" << endl;
        return;
    }
    cout << "No Such Movie Existed" << endl;
}

int main()
{
    Movies my_movies;
    addMovies(my_movies.addMovie("KGF", 4, 12));
    addMovies(my_movies.addMovie("Iron Man", 5, 22));
    incrementViews(my_movies.incrementView("Iron Man"));
    my_movies.display();
    return 0;
}