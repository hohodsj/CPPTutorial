#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
    std::vector<Movie> movies;
public:
    bool add_movie(std::string name, std::string rating, int watched);
    void display() const;
    bool increment_watched(std::string name);
};

#endif