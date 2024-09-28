
#include "../include/nc_window.h"


namespace ncurses_cpp{
    static unsigned int _max_root_count; 
}

ncurses_cpp::MasterWindow::MasterWindow(){

    _max_root_count += 1;

    if(_max_root_count > 1){
        _max_root_count -=1;
        throw std::runtime_error("There can only be one master window");
        delete this;
        
    }

}

bool ncurses_cpp::MasterWindow::create_window(){

        this->c_window = initscr();
        raw();
        wprintw(this->c_window, "Hello from main window");
        wrefresh(this->c_window);


        getch();
        
        endwin();

}
