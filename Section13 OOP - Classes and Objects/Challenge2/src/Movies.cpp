#include <iostream>
#include "Movies.h"

Movies::Movies() {
    movies = new std::vector<Movie>;
}

Movies::~Movies() {
    delete movies;
}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    bool found = false;
    for(const Movie &movie: *movies) {
        if(movie.get_name() == name) {
            found = true;
            break;
        }
    }
    if(found) {
        std::cout << name << " already existed" << std::endl;
        return false;
    } else {
        movies -> push_back(Movie(name, rating, watched));
        return true;
    }
}

void Movies::display() const {
    if (movies->size() == 0) {
        std::cout << "No movies found" << std::endl;
    }
    for(const Movie &movie:*movies) {
        std::cout << movie.get_name() << " " << movie.get_rating() << " " << movie.get_watched() << std::endl;
    }
}

bool Movies::increment_watched(std::string name) {
    bool found = false;
    for(auto& movie: *movies) {
        if (movie.get_name() == name) {
            movie.increase_watched();
            return true;
        }
    }
    return false;
}