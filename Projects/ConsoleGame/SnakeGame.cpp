#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std ;

//for coordinate axes
#define HEIGHT 10
#define WIDTH 25
//ENUMs
enum Direction{ no_dir, d_up, d_right, d_down, d_left };
enum SnakePart{ no_part, s_body, s_head };
//GLOBAL VARIABLES
SnakePart positions[ HEIGHT * WIDTH + 1] ;

class Point{
		void setUniIndex(){
			uniIndex = (lineNo - 1)*width + fromLeft  ;
		}
		void setCoords(){
			fromLeft = ( uniIndex % width == 0 ) ? width : uniIndex % width ;
			lineNo = ( uniIndex - fromLeft ) / width + 1 ;
		}
	public:
		int lineNo, fromLeft, uniIndex ;
		static int height, width ;
		Point(){
			lineNo = -1 ;
			fromLeft = -1 ;	
			uniIndex = -1 ;	
//			isValid() ;
		}
		Point(int line, int left ){
			lineNo = line ;
			fromLeft = left ;
			uniIndex = (lineNo - 1)*width + fromLeft  ;
			isValid() ;
		}
		Point(int uni_index ){
			uniIndex = uni_index ;
			fromLeft = ( uniIndex % width == 0 ) ? width : uniIndex % width ;
			lineNo = ( uniIndex - fromLeft ) / width + 1 ;
			isValid() ;
		}
		static Point above( Point a){
			if(a.isInsideBounds()){
				return Point( a.lineNo - 1, a.fromLeft) ;
			}
			cout << ", so cant find any point above. Returning itself, i.e" << a.toString() ;
		}
		static Point below( Point a){
			if(a.isInsideBounds()){
				return Point( a.lineNo + 1, a.fromLeft) ;
			}
			cout << ", so cant find any point below. Returning itself, i.e" << a.toString() ;
		}
		static Point atRightOf( Point a){
			if(a.isInsideBounds()){
				return Point( a.lineNo , a.fromLeft + 1) ;
			}
			cout << ", so cant find any point at right. Returning itself, i.e" << a.toString() ;
		}
		static Point atLeftOf( Point a){
			if(a.isInsideBounds()){
				return Point( a.lineNo , a.fromLeft - 1 ) ;
			}
			cout << ", so cant find any point at left. Returning itself, i.e" << a.toString() ;
		}
		static SnakePart getSnakePartAt( Point p){
			if(p.isInsideBounds()){
				return positions[ p.uniIndex ] ;
			}
			//for error
			cout << ", so cant get snake part and returning no_part." ;
			return SnakePart(no_part );
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
			if(isInsideBounds()){
				int i ;
				SnakePart b = s_body, h = s_head ;
				for( i = 1 ; i <= HEIGHT * WIDTH ; i++){
					if(positions[ uniIndex ] == b || positions[ uniIndex ] == h){
						return 1 ;
					}
				}
				if( i == HEIGHT * WIDTH + 1){
					return 0 ;
				}
			}
			cout << ", so cant check if this point contains snake." ;
			return 0 ;
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
		string toString(string pre = " ", string post = " "){
			string str = "" ;
			str = str + pre + "( " + to_string(lineNo) + ", " + to_string(fromLeft) + " ) => [ " + to_string(uniIndex) + " ]" + post ;
			return str ;
		}
		// Point (0, WIDTH + 1 ) is Valid
		int isValid(){
			if(lineNo >= 0 && lineNo <= height + 1 && fromLeft >= 0 && fromLeft <= width + 1 ){
				return 1 ;
			}
			cout << toString("Point", " is not valid.") ;
			return 0 ;
		}
		// Point (0, WIDTH + 1 ) is not inside bounds
		int isInsideBounds(){
			if(lineNo > 0 && lineNo <= height && fromLeft > 0 && fromLeft <= width ){
				return 1 ;
			}
			cout << "Point " << toString() << " is not within bounds (" << height << ", " << width << " )." ;
			return 0 ;			
		}		
		
};
int Point::height = HEIGHT ;
int Point::width = WIDTH ;

//Point activePositions[ HEIGHT * WIDTH + 1] ;

class Snake{
	public:
		int length = 3 ;
		Point headAt ;
//		Point activePoints[ HEIGHT * WIDTH + 1] ;
		Direction activeDirection = d_right ;
		Snake(){
			headAt = Point(5, 5) ;
		}
		void addPart( Point P, Direction dir, SnakePart part = s_body ){
			if(P.isInsideBounds()){
				
			}
		}
		
};


class Graph{
	string inputLetters[HEIGHT * WIDTH + 1] ;
	public:

	static int height, width;
	Direction directions[ HEIGHT * WIDTH + 1] ;
	Direction d_resetter  ;
	Snake snake;
	
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
		void putRegularly(string str, Point startingPoint ){
			if( ! startingPoint.isValid() ) return ;
			int i, j  ;
			string sub ;
			for( i = startingPoint.uniIndex, j = 0 ; j < str.length() ; i++, j++ ){
				sub = str.at(j) ;
				put(sub, Point(i)) ;
			}
		}
		void put( string str, Point P){
			if(str.length() != 1){
				cout << "Error, can put single letter only.\n" ;
				return ;
			}
			if(str.compare(resetter) == 0){
				cout << "Error, '" << resetter << "' cannot be added in space.\n" ;
				return ;
			}
			if(P.isInsideBounds()){
				setInput(str, P) ;	
				return ;		
			}
			cout << ", so cant put '" << str << "' at that point.\n" ;
		}
		Direction getDirection( Point at ){
			if(at.isInsideBounds()){
				return directions[at.uniIndex] ;
			}
			cout << ", so returning no_dir at this point.\n" ;
			return Direction( no_dir ) ;
		}
		void setDirection(Direction dir, Point at){
			if(at.isInsideBounds()){
				directions[at.uniIndex] = dir ;
				return ;
			}
			cout << ", so setting no_dir at this point.\n" ;
			directions[at.uniIndex] = Direction(no_dir) ;			
		}		
		void plotSnake(){
			int i ;
				
		}
	private:		
		void setInput(string str, Point at){
			if(at.isInsideBounds() && str.length() == 1 ){
				inputLetters[ at.uniIndex ] = str ;
				return ;
			}
			cout << ", so cant set input at this point.\n" ;
		}
		string getInput( Point at){
			if(at.isInsideBounds() ){
				return inputLetters[ at.uniIndex ] ;
			}
			cout << ", so cant get input from this point, returning default resetter.\n" ;
			return resetter ;
		}
		void resetInputs(){
			int i ;
			for( i = 1 ; i <= height * width  ; i++){
				setInput(resetter, Point(i)) ;
			}
		}
		void resetDirections(){
			int i ;
			for( i = 1 ; i <= height * width  ; i++){
				setDirection(d_resetter , Point(i)) ;
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
		static string getStringWith(int len, string s){
			int i = 0 ;
			string out ;
			for(i = 0 ; i < len ; i++){
				out.append(s);
			}
			return out ;
		}
};
int Graph::height = HEIGHT ;
int Graph::width = WIDTH ;



main(){
	Graph G ;
	G.setDirection(d_right, Point(2, 2)) ;
	G.setDirection(d_right, Point(2, 3)) ;
	G.setDirection(d_down, Point(2, 4)) ;
	G.setDirection(d_down, Point(3, 4)) ;
	G.setDirection(d_down, Point(4, 4)) ;
	G.setDirection(d_right, Point(5, 4)) ;
	G.setDirection(d_right, Point(5, 5)) ;
	G.setDirection(d_right, Point(5, 6)) ;
	G.snake.headAt = Point(5, 6) ;
	G.showInputArray() ;
//	G.showDirectionArray() ;
	G.show() ;
}
