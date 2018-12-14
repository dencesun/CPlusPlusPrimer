//
// Created by dencesun on 2018/12/10.
//

#ifndef CPLUSPLUSPRIMER_EX07_32_H
#define CPLUSPLUSPRIMER_EX07_32_H

#include "../util.h"

#define NDEBUG

class Window_mgr;
class Screen;

//using ScreenIndex = std::vector<Screen>::size_type;

class Window_mgr {
public:
    using ScreenIndex = std::vector<Screen>::size_type;
    void clear(ScreenIndex);
private:
    std::vector<Screen> screens{Screen(80, 24, ' ')};
};

class Screen {
public:
    typedef std::string::size_type pos;

    friend void Window_mgr::clear(ScreenIndex);

    Screen() = default;
    Screen(pos ht, pos wd): height(ht), width(wd), contents(wd*ht, ' ') {}
    Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht*wd, c) {}

    inline Screen& set(char);
    inline Screen& set(pos, pos, char);

    inline char get() const { return contents[cursor]; }
    inline char get(pos r, pos c) const;
    inline Screen& move(pos r, pos c);

    Screen& display(std::ostream& os) {
        do_display(os);
        return *this;
    }
    const Screen& display(std::ostream& os) const {
        do_display(os);
        return *this;
    }

private:
    void do_display(std::ostream& os) const { os << contents;}
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};


inline Screen& Screen::move(pos r, pos c) {
    pos row = r * width;
    cursor = row + c;
    return *this;
}

inline char Screen::get(pos r, pos c) const {
    pos row = r * width;
    return contents[row + c];
}

inline Screen& Screen::set(char c) {
    contents[cursor] = c;
    return *this;
}

inline Screen& Screen::set(pos r, pos col, char c) {
    contents[r*width + col] = c;
    return *this;
}

void Window_mgr::clear(ScreenIndex i) {
    Screen &s = screens[i];
    s.contents = std::string(s.height*s.width, ' ');
}
#endif //CPLUSPLUSPRIMER_EX07_32_H
