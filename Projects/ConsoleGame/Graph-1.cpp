#include <iostream>
#include <vector>
using namespace std ;
#include <string>
#include <stdlib.h>
//for coordinate axes
#define HEIGHT 10
#define WIDTH 10
//ENUMs
enum Direction{ no_dir, d_up, d_right, d_down, d_left };
enum SnakePart{ no_part, s_body, s_head };
//GLOBAL VARIABLES
SnakePart positions[ HEIGHT * WIDTH + 1] ;

class Graph{
	string inputLetters[HEIGHT * WIDTH + 1] ;
	public:

	static int height, width;
	Direction directions[ HEIGHT * WIDTH + 1] ;
	Direction d_resetter  ;
//	Snake snake;
	
	int paddingLeft ;
	string borderH, borderV, default_content, padding, paddingLeftText, resetter ;
		Graph(){
			height = HEIGHT ;
			width = WIDTH ;
			paddingLeft = 35 ;
			borderH = "=" ;
			borderV = "||" ;
			default_content = " " ;
			padding = " " ;
			resetter = "`";
			d_resetter = no_dir ;
			paddingLeftText = getStringWith(paddingLeft, padding) ;
//			cout << inputLetters == NULL ;
			resetInputs() ;
			resetDirections() ;
		}
		void showInputArray(){
			int i ;
			for(i = 1 ; i <= height * width ; i++){
				cout << "\n[" << i << "] => " << getInput(i) ;
			}
		}
		void showDirectionArray(){
			int i ;
			for(i = 1 ; i <= height * width ; i++){
				cout << "\n[" << i << "] => " << getDirection(i) ;
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
		void putRegularly(string str, unsigned lineNo , unsigned fromLeft = 1){
			if( ! validateInputCoords(lineNo, fromLeft)) return ;
			int i, j  ;
			string sub ;
			for( i = coordsToIndex(lineNo, fromLeft), j = 0 ; j < str.length() ; i++, j++ ){
				sub = str.at(j) ;
				putAtIndex(sub,  i) ;
			}
		}
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
//			*(inputLetters + index ) = str ;
			setInput(str, index) ;			
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
//			*(inputLetters + coordsToIndex(lineNo, fromLeft )) = str ;	
			setInput(str, coordsToIndex(lineNo, fromLeft )) ;
			cout << "\nput " << str << " at (" << lineNo << ", " << fromLeft << "), index " << coordsToIndex(lineNo, fromLeft ) ; 
		}
		Direction getDirection( int atIndex ){
			if(isValidUniIndex(atIndex)){
				return directions[atIndex] ;
			}else{
				cout << "invalid index " << atIndex << ", so no_dir returned." ;
				Direction d = no_dir ;
				return d ;
			}
		}
		void setDirection(Direction dir, int atIndex){
			if(isValidUniIndex(atIndex)){
				directions[atIndex] = dir ;
			}else{
//				directions[atIndex] = dir ;
				cout << "invalid index " << atIndex << ", so no direction set at " << atIndex ;
//				return no_dir ;
			}			
		}
		void putDirection( Direction dir, int lineNo, int fromLeft){
			if(validateInputCoords(lineNo, fromLeft)){
				setDirection(dir, coordsToIndex(lineNo, fromLeft)) ;
			}
		}
		static int coordsToIndex(int lineNo, int fromLeft){
			return (lineNo - 1)*width + fromLeft  ;
		}
		static int isValidUniIndex( int index ){
			if(index >= 0 && index <= height * width ){
				return 1 ;
			}
			cout << "Invalid unidirectional array index ["<< index <<"]." ;
			return 0 ;
		}		
		void plotSnake(){
			int i ;
				
		}
	private:
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
		void setInput(string str, int atIndex){
			if(isValidUniIndex(atIndex) && str.length() == 1 ){
				inputLetters[atIndex] = str ;
			}else{
				cout << "Error, invalid index " << atIndex  << ", or invalid input string '" << str << "'.";
			}
		}

		string getInput(int atIndex){
			if(isValidUniIndex(atIndex) ){
				return inputLetters[atIndex] ;
			}
			string def = "~";	
			return def ;
		}

		void resetInputs(){
			int i ;
			for( i = 1 ; i <= height * width  ; i++){
				setInput(resetter, i) ;
			}
		}
		void resetDirections(){
			int i ;
			for( i = 1 ; i <= height * width  ; i++){
				setDirection(d_resetter , i) ;
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
//					string toDisplay = *(inputLetters + i) ;
					if(getInput(i).compare(resetter) == 0){
						lineOut.append(default_content) ;
					}else{
						lineOut.append(getInput(i)) ;
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
int Graph::width ;
int Graph::height ;


class Snake{
	public:
		int length, lineNo, fromLeft  ;
		Direction activeDirection ;
		Point headAt ;
		SnakePart defaultPart  ;
		string headLetter, bodyLetter, tailLetter ;
//		directions dir ;
//		Snake(int line = 5, int leftOffset = 2, int l = 1, int dir = 2){
		Snake(){
			length = 4 ;
			lineNo = 3 ;
			fromLeft = 4 ;
			activeDirection =  d_right ;
			defaultPart = no_part ;
			headLetter = ">" ;
			bodyLetter = "*" ;
			tailLetter = "+" ;
			resetPositions() ;
		}
		void resetPositions(){
			int i ;
			for( i = 1 ; i<= HEIGHT * WIDTH ; i++){
				positions[i] = defaultPart ;
			}
		}
		void setPosition( SnakePart part, int index){
			if(Graph::isValidUniIndex( index )){
				positions[index] = part ;
			}
		}
		SnakePart getPosition(int ind){
			if(Graph::isValidUniIndex( ind )){
				return positions[ ind ] ; ;
			}
			cout << "Invalid index '"<< ind <<"', so returning no_part." ;
			return defaultPart ;
		}
		
};


class Point{
	public:
		int lineNo, fromLeft, height, width ;
//		int isInBorder, isInBodyOfSnake ;
		Point(){
			lineNo = 1 ;
			fromLeft = 1 ;
			height = HEIGHT ;
			width = WIDTH ;
//			isInBorder = 0 ;
//			isInBodyOfSnake = 0 ;			
		}
		Point(int line, int left, int AxesH = HEIGHT, int AxesW = WIDTH ){
			lineNo = line ;
			fromLeft = left ;
			height = AxesH ;
			width = AxesW ;
//			isInBorder = 0 ;
//			isInBodyOfSnake = 0 ;
		}
		static Point above( Point a){
			if(a.isValid()){
				Point Out( a.lineNo, a.fromLeft) ;
				int fLineNo;
				fLineNo = a.lineNo - 1 ;
//				if(fLineNo == 0){
//					cout << "Point above " << " ( " << a.lineNo << ", " << a.fromLeft << " ) " << " is border." ;
//					Out.isInBorder = 1 ;
//				}
				Out.lineNo = fLineNo ;
				return Out ;
			}else{
				cout << "Invalid Point " << " ( " << a.lineNo << ", " << a.fromLeft << " ) " << ", cant find any point above. So, returning this invalid point ." ;
				return a ;
			}
		}
		static Point below( Point a ){
			if(a.isValid()){
				Point Out( a.lineNo, a.fromLeft) ;
				int fLineNo;
				fLineNo = a.lineNo + 1 ;
//				if(fLineNo == a.height + 1){
//					cout << "Point below " << " ( " << a.lineNo << ", " << a.fromLeft << " ) " << " is border." ;
//					Out.isInBorder = 1 ;
//				}
				Out.lineNo = fLineNo ;
				return Out ;
			}else{
				cout << "Invalid Point " <<  " ( " << a.lineNo << ", " << a.fromLeft << " ) " << ", cant find any point below. So, returning this invalid point ." ;
				return a ;
			}			
		}
		static Point atRightOf( Point a ){
			if(a.isValid()){
				Point Out( a.lineNo, a.fromLeft) ;
				int fFromLeft = a.fromLeft + 1 ;
//				if(fFromLeft == a.width + 1){
//					cout << "Point at right of " << " ( " << a.lineNo << ", " << a.fromLeft << " ) " << " is border." ;
//					Out.isInBorder = 1 ;
//				}
				Out.fromLeft = fFromLeft ;
				return Out ;
			}else{
				cout << "Invalid Point " <<  " ( " << a.lineNo << ", " << a.fromLeft << " ) " << ", cant find any point at right. So, returning this invalid point ." ;
				return a ;
			}			
		}
		static Point atLeftOf( Point a ){
			if(a.isValid()){
				Point Out( a.lineNo, a.fromLeft) ;
				int fFromLeft = a.fromLeft - 1 ;
//				if(fFromLeft == 0){
//					cout << "Point at left of " << " ( " << a.lineNo << ", " << a.fromLeft << " ) " << " is border." ;
//					Out.isInBorder = 1 ;
//				}
				Out.fromLeft = fFromLeft ;
				return Out ;
			}else{
				cout << "Invalid Point " <<  " ( " << a.lineNo << ", " << a.fromLeft << " ) " << ", cant find any point at left. So, returning this invalid point ." ;
				return a ;
			}			
		}
		int isInBorder(){
			if(lineNo >= 0 && lineNo <= height + 1  && fromLeft >= 0 && fromLeft <= width + 1 ){
				if(lineNo == 0 || lineNo == height + 1  || fromLeft == 0 || fromLeft == width + 1 ){
					return 1 ;
				}
				return 0 ;
			}else{
				cout << "Invalid Point ( " << lineNo << ", " << fromLeft  << ") for border touch check." ;
				return 0 ;
			}			
		}	
		int containsSnake(){
			if(isValid()){
				int i ;
				SnakePart b = s_body, h = s_head ;
				for( i = 1 ; i <= HEIGHT * WIDTH ; i++){
					if(positions[Graph::coordsToIndex(lineNo, fromLeft)] == b || positions[Graph::coordsToIndex(lineNo, fromLeft)] == h){
						return 1 ;
					}
				}
				if( i == HEIGHT * WIDTH + 1){
					return 0 ;
				}
			}
			cout << "Invalid Point ( " << lineNo << ", " << fromLeft << ") for body touch check." ;
			return 0 ;
		}
		static SnakePart getSnakePartByPoint( Point p){
			if(p.isValid()){
				return positions[ Graph::coordsToIndex(p.lineNo, p.fromLeft) ] ;
			}
			cout << "Invalid point " ;
			p.show() ;
			cout << ", so returning no_part." ;
			return SnakePart(no_part );
		}
//		int isValidSnakePart(){
//			if(isValid()){
//				int uniIndex = Graph::coordsToIndex(lineNo, fromLeft) ;
////				Point 
//				SnakePart part = positions[uniIndex] ;
//				Point atRight = Point::atRightOf( this ) , atLeft = Point::atLeftOf( this ) , above = Point::above( this ), below = Point::below( this ) ;
//				int bodyAtRight = getSnakePartByPoint(atRight) == SnakePart(s_body) ;
//				int bodyAtLeft = getSnakePartByPoint(atLeft) == SnakePart(s_body) ;
//				if(part == SnakePart(no_part)){
//					return 0 ;
//				}
//				if(part == SnakePart(s_tail) || part == SnakePart(s_head)){
//					if(		getSnakePartByPoint(atRight) == SnakePart(s_body) 
//						||  getSnakePartByPoint(atLeft) == SnakePart(s_body) 
//						||  getSnakePartByPoint(above) == SnakePart(s_body) 
//						||  getSnakePartByPoint(below) == SnakePart(s_body) 
//					){
//						return 1 ;
//					}
//					return 0 ;
//				}
//				if(part == SnakePart(s_body)){
//					
//				}
//			}
//		}	
		void show(){
			cout << " ( " << lineNo << ", " << fromLeft << " ) ";
		}
		int isValid(){
			if(lineNo > 0 && lineNo <= height && fromLeft > 0 && fromLeft <= width ){
				return 1 ;
			}
			cout << "Invalid point( " << lineNo << ", " << fromLeft  << " ), inside bounds (" << height << ", " << width << " )." ;
			return 0 ;
		}
		
};

main(){
	Graph g ;
////	g.putRegularly("Arjun Adhikari", 3, 15);
//	g.putRegularly("Yoges", 7);
//	g.show() ;
//	g.putDirection(d_right, 1, 2) ;
//	g.putDirection(d_right, 1, 3) ;
//	g.putDirection(d_right, 1, 4) ;
//	g.putDirection(d_down, 2, 4) ;
//	g.putDirection(d_down, 3, 4) ;
//	g.putDirection(d_down, 4, 4) ;
//	g.putDirection(d_left, 5, 4) ;
//	g.putDirection(d_left, 5, 3) ;
//	g.putDirection(d_down, 6, 3) ;
//	g.putDirection(d_down, 7, 3) ;
//	g.putDirection(d_down, 8, 3) ;
//	g.putDirection(d_right, 8, 4) ;
//	g.putDirection(d_right, 8, 5) ;
//	//data of head of snake
////	g.snake.activeDirection = d_right ;
////	g.snake.length = 13 ;
////	g.snake.fromLeft = 5 ;
////	g.snake.lineNo = 8 ;
////	g.plotSnake();	
////	Point p(1, 4) ;
//	Point q = Point::atLeftOf( Point(1, 1) ) ;
//	q.show() ;
////	g.showDirectionArray() ;
//	g.show() ;
}
