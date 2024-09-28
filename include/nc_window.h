#pragma once

extern "C"{
    #include "ncurses.h"
}

#include <memory>
#include <stdexcept>

namespace ncurses_cpp{

    struct dimension_t{
        unsigned int pos_x;
        unsigned int pos_y;
        unsigned int height;
        unsigned int width;
    };
    

    class Window{
        public :
            /**
             * @brief : Default constructor of the windows class
             * @param : No Parameters
             * @return : No return value
             */
            Window();
            /**
             * @brief : Constructor takes a dimension struct on initalization
             * @param : dimension_t : (x position, y position , window width, window height)
             * @return : No return value
             */
            Window(dimension_t &init_dim);

            /**
             * @brief : Constructor takes unsigned integer to set inital positions and window dimension
             * @param : int (x position), int (y position) , int (height) , int (width)
             * @return : No return value
             */
            Window(unsigned int pos_x, unsigned int pos_y, unsigned int width, unsigned int height);

            /**
             * @brief : destructor - destroys instance of WINDOW in class
             * @param : int (x position), int (y position) , int (height) , int (width)
             * @return : No return value
             */
            ~Window();

            /**
             * @brief : create window
             */
            virtual bool create_window();


            bool setDimension(dimension_t &dim);
            dimension_t getDimension();
        protected :
            WINDOW * c_window = NULL;
        private:
            dimension_t dim;
    
            

            

    };

    class MasterWindow : public Window{
        
        public :

            /**
             * @brief : Default constructor of the Masterwindows class. There can only be one instance of this class
             * @param : No Parameters
             * @return : No return value
             */ 
            MasterWindow();
            bool startRootWindow();
            bool create_window() override;
            
            
        private :
           
    };


};
