#include <iostream>
#include "Movies.h"

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    bool found = false;
    for(const Movie &movie: movies) {
        if(movie.get_name() == name) {
            found = true;
            break;
        }
    }
    if(found) {
        std::cout << name << " already existed" << std::endl;
        return false;
    } else {
        this -> movies.push_back(Movie(name, rating, watched));
        return true;
    }
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "No movies found" << std::endl;
    }
    for(const Movie &movie:movies) {
        std::cout << movie.get_name() << " " << movie.get_rating() << " " << movie.get_watched() << std::endl;
    }
}

bool Movies::increment_watched(std::string name) {
    bool found = false;
    for(int i = 0; i < movies.size(); i++) {
        if(movies.at(i).get_name() == name) {
            found = true;
            movies.at(i).increase_watched();
        }
    }
    return found;
}