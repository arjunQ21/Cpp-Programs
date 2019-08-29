#include <iostream>
using namespace std ;
#include <stdlib.h>
#include <time.h>

//for coordinate axes
#define HEIGHT 10
#define WIDTH 20

class Coordinate{
	string inputLetters[ HEIGHT * WIDTH + 1 ] ;
	public:
	int height, width, paddingLeft ;
	string border, default_content, padding, paddingLeftText, resetter ;
		Coordinate(){
			height = HEIGHT ;
			width = WIDTH ;
			paddingLeft = 10 ;
			border = "|" ;
			default_content = "." ;
			padding = " " ;
			resetter = "`";
			paddingLeftText = getStringWith(paddingLeft, padding) ;
			resetInputs() ;
		}
		void show(){
			cout << endl << endl ;
			int i ;
			for( i = 0 ; i <= height + 1 ; i++ ){
				showLine(i) ;
			}
			resetInputs() ;
		}
		void put(string str, unsigned lineNo, unsigned fromLeft ){
			if(str.length() != 1){
				cout << "Error, can put single letter only." ;
				return ;
			}
			if(fromLeft > width || lineNo > height){
				cout << "Error, cannot put in (" << lineNo << ", " << fromLeft << "), can put only inside (" << height << ", " << width << ")." ;
				return ;
			}
			if(fromLeft < 0 || lineNo < 0){
				cout << "Error, coordinates start with(1, 1)." ;
				return ;
			}
			if(str.compare(resetter) == 0){
				cout << "Error, '" << resetter << "' cannot be added in space." ;
				return ;
			}
			inputLetters[coordsToIndex(lineNo, fromLeft )] = str ;
			cout << "\nput " << str << " at (" << lineNo << ", " << fromLeft << ") ie, index " << coordsToIndex(lineNo, fromLeft ) ; 
		}
	private:
		int coordsToIndex(int lineNo, int fromLeft){
			return (lineNo - 1)*width + fromLeft  ;
		}
		void resetInputs(){
			int i ;
			for( i = 1 ; i < height * width + 1 ; i++){
				inputLetters[i] = resetter ;
			}
		}
		void showLine(int lineNumber ){
			//paddingLeft
			string lineOut = paddingLeftText ;
			//border
			lineOut.append(border) ;
			
			//top border and bottom border
			if((lineNumber == 0) || (lineNumber == height + 1)) {
				lineOut.append(getStringWith(width, border)) ;	
			}else{
			//line specific options
				int i  ;
				for( i = (lineNumber - 1)*width + 1 ; i <= lineNumber*width ; i++){
	//					cout << i << ", " ;
					if(inputLetters[i].compare(resetter) == 0){
						lineOut.append(default_content) ;
					}else{
						lineOut.append(inputLetters[i]) ;
					}
				}
			
			}
			//ending border
			lineOut.append(border) ;
			//new line at end
			lineOut.append("\n") ;
			cout << lineOut ;
		}
		string getStringWith(int l, string s){
			int i = 0 ;
			string out ;
			for(i = 0 ; i < l ; i++){
				out.append(s);
			}
			return out ;
		}
};

main(){
	Coordinate Space ;
	Space.put("A", 5, 8) ;
	Space.put("R", 5, 9) ;
	Space.put("J", 5, 10) ;
	Space.put("U", 5, 11) ;
	Space.put("N", 5, 12) ;
	Space.show() ;
}
