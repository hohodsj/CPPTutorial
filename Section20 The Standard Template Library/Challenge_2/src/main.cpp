// Section 20
// Challenge 2
//  Lists

#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <iomanip>
#include <limits>

class Song {
    friend std::ostream &operator<<(std::ostream &os, const Song &s);
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating)
            : name{name}, artist{artist}, rating{rating} {}
    std::string get_name() const {
        return name;
    }
    std::string get_artist() const {
        return artist;
    }
    int get_rating() const {
        return rating;
    }
    
    bool operator<(const Song &rhs) const  {
        return this->name < rhs.name;
    }
    
    bool operator==(const Song &rhs) const  {
        return this->name == rhs.name;
    }
};

std::ostream &operator<<(std::ostream &os, const Song &s) {
    os << std::setw(20) << std::left << s.name
       << std::setw(30) << std::left << s.artist
       << std::setw(2) << std::left << s.rating;
       return os;
}

void display_menu() {
    std::cout << "\nF - Play First Song" << std::endl;
    std::cout << "N - Play Next song" << std::endl;
    std::cout << "P - Play Previous song" << std::endl;
    std::cout << "A - Add and play a new Song at current location" << std::endl;
    std::cout << "L - List the current playlist" << std::endl;
    std::cout << "===============================================" << std::endl;
    std::cout << "Enter a selection (Q to quit): ";
}

void play_current_song(const Song &song) {
    // This function should display 
    // Playing: followed by the song that is playing
   
    std::cout << song << std::endl;
}

void display_playlist(const std::list<Song> &playlist, const Song &current_song) {
    // This function should display the current playlist 
    // and then the current song playing.
    
    for(const auto &song:playlist) {
        std::cout << song << std::endl;
    }

    std::cout << current_song << std::endl;
}

void add_song(std::list<Song>::iterator &iter, std::list<Song> &playlist) {
    std::string name;
    std::cout << "Name: ";
    std::cin >> name;

    std::string artist;
    std::cout << "Artist: ";
    std::cin >> artist;

    int rating;
    std::cout << "Rating: ";
    std::cin >> rating;
    
    playlist.insert(iter, Song{name, artist, rating});
}

int main() {

    std::list<Song> playlist{
            {"God's Plan",        "Drake",                     5},
            {"Never Be The Same", "Camila Cabello",            5},
            {"Pray For Me",       "The Weekend and K. Lamar",  4},
            {"The Middle",        "Zedd, Maren Morris & Grey", 5},
            {"Wait",              "Maroone 5",                 4},
            {"Whatever It Takes", "Imagine Dragons",           3}          
    };
    
    std::list<Song>::iterator current_song = playlist.begin();
    
    while(true) {
        display_menu();
        char input;
        std::cin >> input;
        input = std::tolower(input);
        switch (input)
        {
            case 'f':
                current_song = playlist.begin();
                break;
            case 'n':
                current_song++;
                break;
            case 'p':
                current_song--;
                break;
            case 'a':
                add_song(current_song, playlist);
                break;
            case 'l':
                display_playlist(playlist, *current_song);
                break;
            case 'q':
                return 0;
            default:
                break;
        }
        if(input != 'a' && input != 'l')
            play_current_song(*current_song);
    }

    std::cout << "Thanks for listening!" << std::endl;
    return 0;
}