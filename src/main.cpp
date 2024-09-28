#include <iostream>
#include <ncurses.h>
#include "../include/nc_window.h"
int main(int argc, char **argv){

    auto mainWindow = new ncurses_cpp::MasterWindow();
    mainWindow->create_window();
    
    try{
        auto mW = new ncurses_cpp::MasterWindow();
    }catch(const std::exception & e){
        std::cout<<"Exception says : "<<e.what()<<std::endl;
    }
    

    ///auto * win = new ncurses_cpp::Window(10,10,10,10);

    /*initscr();
    attron(A_BOLD);
    printw("This is some text\n");
    refresh();

    attron(A_STANDOUT);
    printw("This is anothertext\n");
    attroff(A_STANDOUT);

    if(has_colors())
    {
        printw("Terminal supports colors");
        getch();
    }

    start_color();
    init_pair(1, COLOR_CYAN, COLOR_WHITE);
    attron(COLOR_PAIR(1));
    printw("With flying colors lol\n");
    refresh();
    getch();


    getch();

    endwin();*/

    return 0;
}