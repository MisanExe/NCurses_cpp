#include "../include/nc_window.h"
#include <stdexcept>
#include <iostream>

//////////////////////////////////////
//Constructors  and Destructors    //
////////////////////////////////////




ncurses_cpp::Window::Window(){

    //set default dimensions
    this->dim = {.pos_x = 20, .pos_y = 20, .height = 20, .width = 20};

}

ncurses_cpp::Window::Window(dimension_t & init_dim) : dim(init_dim){
}

ncurses_cpp::Window::Window(unsigned int pos_x, unsigned int pos_y, unsigned int width, unsigned int height)
{
    //set dimension
    this->dim = {.pos_x = pos_x, .pos_y = pos_y, .height = height, .width = width};

}

ncurses_cpp::Window::~Window()
{
    delwin(this->c_window);   
}


//////////////////////////////////////
//Methods
/////////////////////////////////////

bool ncurses_cpp::Window::create_window()
{
    //call create window
    this->c_window = newwin(this->dim.height, this->dim.width, this->dim.pos_y, this->dim.pos_x);
    if (this->c_window == NULL){
        throw std::runtime_error("Error unable to create a new window");
    }

    wprintw(this->c_window, "Hello from root\n");

    return false;
}

