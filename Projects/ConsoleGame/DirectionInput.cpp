#include <iostream>
#include <time.h>
#include <cstdlib>
#include <conio.h>
using namespace std ;

//for coordinate axes
#define HEIGHT 10
#define WIDTH 15
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
//ENUMs
enum Direction{ no_dir, d_up, d_right, d_down, d_left };

class DirectionInput{
	public:
		static Direction current, last;
		char input ;
//		static int interval ;
		static Direction get(){
			cout << ""
		}
		static void listen(){
			cout <<"\nEnter a Navigation Key: " ;
			input = getch() ;
			
		}
		static Direction charToDir( char inp ){
			Direction mappedDir = no_dir ;
			switch( inp ){
				case KEY_UP:
					mappedDir = d_up ;
					break ;
				case KEY_DOWN:
					mappedDir = d_down ;
					break ;
				case KEY_LEFT:
					mappedDir = d_left ;
					break ;
				case KEY_RIGHT:
					mappedDir = d_right ;
					break ;	
				default:
					mappedDir = last ;
					cout << "invalid input '" << input << "' .\n";			
			}
			return mappedDir ;			
		}
};
Direction DirectionInput::input = d_right ;
Direction DirectionInput::current = d_right ;
Direction DirectionInput::last = d_right ;


main(){
	
}


