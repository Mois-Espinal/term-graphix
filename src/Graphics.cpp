#include <iostream>
#include </include/graphix.hpp>
#include <string>

    // a function to clear the terminal 
    void clearScreen(){cout << "\033[J2";}
    // plots a character on the screen via X and Y
    void plotChar(char letter, int X, int Y){
        X = X*2;
         string NewX = to_string(X);
				 string NewY = to_string(Y);
				 std::string positionAnsicode = "\033["+NewY+"H"+" \033["+NewX+"G";
			 std::cout << positionAnsicode << letter;
    }
   // prints a colored box with RGB
    void printPixel(int Red,int Blue,int Green, int X, int Y){
            string NewRed = to_string(Red);
            string NewBlue = to_string(Blue);
            string NewGreen = to_string(Green);
            string NewX = to_string(X);
            string NewY = to_string(Y);
            string colorAnsicode = "\033[48;2;" + NewRed + ";" + NewBlue + ";" + NewGreen + "m  \033[0m";
            string positionAnsicode = "\033["+NewY+"H"+" \033["+NewX+"G";
           cout << positionAnsicode << colorAnsicode;

    }
       //  Function to draw a colored line
		void drawPixelLine(int x,int y,int x1,int y1,int Green,int Red,int Blue){
						
		while(x != x1 && y != y1){
	     
		if(x > x1){
		this->printPixel(Red,Blue,Green,x,y);
		x--;
		}
		if(x != x1){
		this->printPixel(Red,Blue,Green,x,y);
	    x++;
		}
		if(y != y1){
		this->printPixel(Red,Blue,Green,x,y);
		y++;
		}
		if(y > y1){
		this->printPixel(Red,Blue,Green,x,y);
		y--;
		}
	     }
		}
    // Function to draw a line made of ascii characters
   void drawCharLine(int x,int y,int x1,int y1,char character){
						
		while(x != x1 && y != y1){
	     
		if(x > x1){
		this->plotChar(character,x,y);
		x--;
		}
		if(x != x1){
		this->plotChar(character,x,y);
	    x++;
		}
		if(y != y1){
		this->plotChar(character,x,y);
		y++;
		}
		if(y > y1){
		this->plotChar(character,x,y);
		y--;
		}
	     }
		}
    
    
    
    
    

