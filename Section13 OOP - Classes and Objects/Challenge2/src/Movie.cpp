#include <iostream>
#include "Movie.h"

bool Movie::increase_watched() {
    this -> watched++;
    return true;
}

Movie::Movie(std::string name, std::string rating, int watched)
    :name{name}, rating{rating}, watched{watched} {
        std::cout << name << " created" << std::endl;
    }

Movie::Movie(Movie &&movie) 
    : name{movie.get_name()}, rating{movie.get_rating()}, watched{movie.get_watched()} {
        std::cout << name << " moved" << std::endl;
}

Movie::~Movie() {
    std::cout << this -> get_name() << " deleted " << std::endl;
}