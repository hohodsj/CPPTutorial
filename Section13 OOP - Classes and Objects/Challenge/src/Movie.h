#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <vector>
#include <string>

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;

public:
    bool increase_watched();
    std::string get_name() const { return name; }
    std::string get_rating() const { return rating; }
    int get_watched() const { return watched; }
    Movie(std::string name, std::string rating, int watched);
    // Move constructor
    Movie(Movie &&movie);
    // Destructor
    ~Movie();
};

#endif