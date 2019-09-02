#include <iostream>
#include <vector>
using namespace std ;
#include <string>
#include <stdlib.h>
//for coordinate axes
#define HEIGHT 10
#define WIDTH 20

class Graph{
//	vector <string> names(45);
	string* inputLetters ;
	public:
	int height, width, paddingLeft ;
	string borderH, borderV, default_content, padding, paddingLeftText, resetter ;
		Graph(int lines = 10, int GraphWidth = 20){
			height = lines ;
			width = GraphWidth ;
			paddingLeft = 35 ;
			borderH = "=" ;
			borderV = "||" ;
			default_content = " " ;
			padding = " " ;
			resetter = "`";
			paddingLeftText = getStringWith(paddingLeft, padding) ;
//			inputLetters = (string *)malloc(( height * width + 1) * sizeof(string)) ;
			inputLetters = new string(height * width + 1);
			cout << inputLetters == NULL ;
			resetInputs() ;
		}
		void showInputArray(){
			int i ;
			for(i = 1 ; i <= height * width ; i++){
				cout << "\n[" << i << "] => " << *(inputLetters + i) ;
			}
		}
		void show(){
			cout << endl << endl ;
			int i ;
			for( i = 0 ; i <= height + 1 ; i++ ){
				showLine(i) ;
			}
			resetInputs() ;
		}
		int validateInputCoords( int lineNo, int fromLeft){
			if(fromLeft > width || lineNo > height){
				cout << "Error, cannot put in (" << lineNo << ", " << fromLeft << "), can put only inside (" << height << ", " << width << ")." ;
				return 0 ;
			}
			if(fromLeft < 0 || lineNo < 0){
				cout << "Error, coordinates must be more than (0, 0)." ;
				return 0 ;
			}
			return 1 ;			
		}
//		void putStringRegularly(string str, unsigned lineNo, unsigned fromLeft){
//			if( ! validateInputCoords(lineNo, fromLeft)) return ;
//			int i, j  ;
//			for( i = coordsToIndex(lineNo, fromLeft), j = 0 ; j < str.length() ; i++, j++ ){
//				putAtIndex(str.at(j), i) ;
//			}
//			
//		}
		void putAtIndex( string str, int index){
			if(str.length() != 1){
				cout << "Error, can put single letter only." ;
				return ;
			}
			if(str.compare(resetter) == 0){
				cout << "Error, '" << resetter << "' cannot be added in space." ;
				return ;
			}
			if(index < 0 || (index > height * width )){
				cout << "invalid index " << index << " for '" << str << "'."  ;
				return ;
			}
//			inputLetters[index] = str ;	
			*(inputLetters + index ) = str ;			
		}
		void put(string str, unsigned lineNo, unsigned fromLeft ){
			if( ! validateInputCoords(lineNo, fromLeft)) return ;
			if(str.length() != 1){
				cout << "Error, can put single letter only." ;
				return ;
			}
			if(str.compare(resetter) == 0){
				cout << "Error, '" << resetter << "' cannot be added in space." ;
				return ;
			}
//			inputLetters[coordsToIndex(lineNo, fromLeft )] = str ;
			*(inputLetters + coordsToIndex(lineNo, fromLeft )) = str ;	
			cout << "\nput " << str << " at (" << lineNo << ", " << fromLeft << "), index " << coordsToIndex(lineNo, fromLeft ) ; 
		}
	private:
		int coordsToIndex(int lineNo, int fromLeft){
			return (lineNo - 1)*width + fromLeft  ;
		}
		void resetInputs(){
			int i ;
			for( i = 1 ; i <= height * width  ; i++){
//				inputLetters[i] = resetter ;
				*(inputLetters + i) = resetter ;
			}
		}
		void showLine(int lineNumber ){
			//paddingLeft
			string lineOut = paddingLeftText ;
			//border
			lineOut.append(borderV) ;
			
			//top border and bottom border
			if((lineNumber == 0) || (lineNumber == height + 1)) {
				lineOut.append(getStringWith(width, borderH)) ;	
			}else{
			//line specific options
				int i  ;
				for( i = (lineNumber - 1)*width + 1 ; i <= lineNumber*width ; i++){
	//					cout << i << ", " ;
					string toDisplay = *(inputLetters + i) ;
					if(toDisplay.compare(resetter) == 0){
						lineOut.append(default_content) ;
					}else{
						lineOut.append(inputLetters[i]) ;
					}
				}
			
			}
			//ending border
			lineOut.append(borderV) ;
			//new line at end
			lineOut.append("\n") ;
			cout << lineOut ;
		}
		string getStringWith(int len, string s){
			int i = 0 ;
			string out ;
			for(i = 0 ; i < len ; i++){
				out.append(s);
			}
			return out ;
		}
};


main(){
	Graph Axes ;
	cout << "hi";
//	Axes.paddingLeft = 10 ;
//	Axes.put("A", 5, 8) ;
//	Axes.put("R", 5, 9) ;
//	Axes.put("J", 5, 10) ;
//	Axes.put("U", 5, 11) ;
//	Axes.put("N", 5, 12) ;
//	Axes.put("P", 1, 1);
//	Axes.showInputArray();
//	Axes.show() ;
}
