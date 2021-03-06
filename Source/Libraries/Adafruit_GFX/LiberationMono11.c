
#include "TheDotFactory.h"

// 
//  Font data for Liberation Mono 11pt
//  http://en.wikipedia.org/wiki/Liberation_fonts

// Character bitmaps for Liberation Mono 11pt
static const uint8_t liberationMono_11ptBitmaps[] = 
{
	// @0 ' ' (2 pixels wide)
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	//   
	0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 

	// @4 '!' (1 pixels wide)
	//  
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	//  
	//  
	// #
	//  
	//  
	//  
	0b11111110, 
	0b00000100, 

	// @6 '"' (5 pixels wide)
	// ## ##
	// ## ##
	// ## ##
	// #   #
	// #   #
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	0b00011111, 0b00000111, 0b00000000, 0b00000111, 0b00011111, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @16 '#' (9 pixels wide)
	//          
	//    #   # 
	//    #  #  
	//    #  #  
	//  ########
	//   #   #  
	//   #   #  
	// ######## 
	//   #  #   
	//  #   #   
	//  #   #   
	//          
	//          
	//          
	0b10000000, 0b10010000, 0b11110000, 0b10011110, 0b10010000, 0b10010000, 0b11111100, 0b10010010, 0b00010000, 
	0b00000000, 0b00000110, 0b00000001, 0b00000000, 0b00000000, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 

	// @34 '$' (7 pixels wide)
	//    #   
	//  ##### 
	// ## # ##
	// #  #  #
	// ## #   
	//  ####  
	//    # ##
	//    #  #
	// #  #  #
	// ## #  #
	//  ##### 
	//    #   
	//        
	//        
	0b00011100, 0b00110110, 0b00100010, 0b11111111, 0b00100010, 0b01000110, 0b11001100, 
	0b00000011, 0b00000110, 0b00000100, 0b00001111, 0b00000100, 0b00000100, 0b00000011, 

	// @48 '%' (9 pixels wide)
	//          
	//  ###   # 
	// #  #  #  
	// #  #  #  
	// #  # #   
	//  ####    
	//     #### 
	//    # #  #
	//   #  #  #
	//   #  #  #
	//  #   ### 
	//          
	//          
	//          
	0b00011100, 0b00100010, 0b00100010, 0b10111110, 0b01100000, 0b11010000, 0b01001100, 0b01000010, 0b10000000, 
	0b00000000, 0b00000100, 0b00000011, 0b00000000, 0b00000000, 0b00000111, 0b00000100, 0b00000100, 0b00000011, 

	// @66 '&' (9 pixels wide)
	//          
	//    ###   
	//   #   #  
	//   #   #  
	//   # ##   
	//   ##     
	//  # #   # 
	// ##  # #  
	// ##  # #  
	//  #   ##  
	//  #### ###
	//          
	//          
	//          
	0b10000000, 0b11000000, 0b00111100, 0b01100010, 0b10010010, 0b00010010, 0b10001100, 0b01000000, 0b00000000, 
	0b00000001, 0b00000111, 0b00000100, 0b00000100, 0b00000101, 0b00000010, 0b00000111, 0b00000100, 0b00000100, 

	// @84 ''' (1 pixels wide)
	// #
	// #
	// #
	// #
	// #
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	0b00011111, 
	0b00000000, 

	// @86 '(' (3 pixels wide)
	//   #
	//  # 
	// ## 
	// #  
	// #  
	// #  
	// #  
	// #  
	// #  
	// #  
	// #  
	// ## 
	//  # 
	//   #
	0b11111100, 0b00000110, 0b00000001, 
	0b00001111, 0b00011000, 0b00100000, 

	// @92 ')' (3 pixels wide)
	// #  
	//  # 
	//  ##
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #
	//   #
	//  ##
	//  # 
	// #  
	0b00000001, 0b00000110, 0b11111100, 
	0b00100000, 0b00011000, 0b00001111, 

	// @98 '*' (5 pixels wide)
	//   #  
	// # # #
	//  ### 
	//  # # 
	//  # # 
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	0b00000010, 0b00011100, 0b00000111, 0b00011100, 0b00000010, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @108 '+' (7 pixels wide)
	//        
	//        
	//    #   
	//    #   
	//    #   
	// #######
	//    #   
	//    #   
	//    #   
	//        
	//        
	//        
	//        
	//        
	0b00100000, 0b00100000, 0b00100000, 0b11111100, 0b00100000, 0b00100000, 0b00100000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 

	// @122 ',' (3 pixels wide)
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//  ##
	//  # 
	// ## 
	// #  
	//    
	0b00000000, 0b00000000, 0b00000000, 
	0b00011000, 0b00001110, 0b00000010, 

	// @128 '-' (5 pixels wide)
	//      
	//      
	//      
	//      
	//      
	//      
	// #####
	//      
	//      
	//      
	//      
	//      
	//      
	//      
	0b01000000, 0b01000000, 0b01000000, 0b01000000, 0b01000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @138 '.' (1 pixels wide)
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	//  
	// #
	// #
	//  
	//  
	//  
	0b00000000, 
	0b00000110, 

	// @140 '/' (7 pixels wide)
	//       #
	//      # 
	//     ## 
	//     #  
	//    ##  
	//    #   
	//   ##   
	//   #    
	//  ##    
	//  #     
	// #      
	//        
	//        
	//        
	0b00000000, 0b00000000, 0b11000000, 0b01110000, 0b00011100, 0b00000110, 0b00000001, 
	0b00000100, 0b00000011, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @154 '0' (7 pixels wide)
	//        
	//   ###  
	//  #   # 
	// ##   ##
	// #     #
	// #  #  #
	// #  #  #
	// #     #
	// ##   ##
	//  #   # 
	//   ###  
	//        
	//        
	//        
	0b11111000, 0b00001100, 0b00000010, 0b01100010, 0b00000010, 0b00001100, 0b11111000, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 0b00000001, 

	// @168 '1' (7 pixels wide)
	//        
	//    ##  
	//   ###  
	// ## ##  
	//    ##  
	//    ##  
	//    ##  
	//    ##  
	//    ##  
	//    ##  
	// #######
	//        
	//        
	//        
	0b00001000, 0b00001000, 0b00000100, 0b11111110, 0b11111110, 0b00000000, 0b00000000, 
	0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000111, 0b00000100, 0b00000100, 

	// @182 '2' (7 pixels wide)
	//        
	//   #### 
	//  #   ##
	// ##   ##
	//      ##
	//      # 
	//    ##  
	//   ##   
	//  ##    
	// ##     
	// #######
	//        
	//        
	//        
	0b00001000, 0b00001100, 0b10000010, 0b11000010, 0b01000010, 0b00111110, 0b00011100, 
	0b00000110, 0b00000111, 0b00000101, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 

	// @196 '3' (7 pixels wide)
	//        
	//   #### 
	//  #   ##
	// ##   ##
	//      # 
	//   ###  
	//      ##
	//       #
	// #     #
	// ##   ##
	//  ##### 
	//        
	//        
	//        
	0b00001000, 0b00001100, 0b00100010, 0b00100010, 0b00100010, 0b01011110, 0b11001100, 
	0b00000011, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @210 '4' (7 pixels wide)
	//        
	//     ## 
	//    # # 
	//   ## # 
	//   #  # 
	//  #   # 
	// #    # 
	// #######
	//      # 
	//      # 
	//      # 
	//        
	//        
	//        
	0b11000000, 0b10100000, 0b10011000, 0b10001100, 0b10000010, 0b11111110, 0b10000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000000, 

	// @224 '5' (7 pixels wide)
	//        
	//  ##### 
	// ##     
	// ##     
	// ###### 
	// ##   ##
	//       #
	//       #
	// #     #
	// ##   # 
	//  ####  
	//        
	//        
	//        
	0b00111100, 0b00111110, 0b00010010, 0b00010010, 0b00010010, 0b00110010, 0b11100000, 
	0b00000011, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000010, 0b00000001, 

	// @238 '6' (7 pixels wide)
	//        
	//   #### 
	//  #   ##
	//  #     
	// # #### 
	// ##   ##
	// ##    #
	// ##    #
	// ##    #
	//  #   ##
	//   #### 
	//        
	//        
	//        
	0b11110000, 0b11101100, 0b00010010, 0b00010010, 0b00010010, 0b00110110, 0b11100100, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @252 '7' (7 pixels wide)
	//        
	// #######
	//      # 
	//      # 
	//     #  
	//    ##  
	//    #   
	//    #   
	//   ##   
	//   #    
	//   #    
	//        
	//        
	//        
	0b00000010, 0b00000010, 0b00000010, 0b11100010, 0b00110010, 0b00001110, 0b00000010, 
	0b00000000, 0b00000000, 0b00000111, 0b00000001, 0b00000000, 0b00000000, 0b00000000, 

	// @266 '8' (7 pixels wide)
	//        
	//  ##### 
	// ##   ##
	// ##   ##
	//  #   # 
	//   ###  
	// ##   ##
	// #     #
	// #     #
	// ##   ##
	//  ##### 
	//        
	//        
	//        
	0b11001100, 0b01011110, 0b00100010, 0b00100010, 0b00100010, 0b01011110, 0b11001100, 
	0b00000011, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @280 '9' (7 pixels wide)
	//        
	//  ####  
	//  #   # 
	// ##   ##
	// #     #
	// ##   ##
	//  #   ##
	//  #### #
	//      ##
	// ##   # 
	//  ####  
	//        
	//        
	//        
	0b00111000, 0b11101110, 0b10000010, 0b10000010, 0b10000010, 0b01101100, 0b11111000, 
	0b00000010, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 0b00000001, 

	// @294 ':' (1 pixels wide)
	//  
	//  
	//  
	// #
	// #
	//  
	//  
	//  
	//  
	// #
	// #
	//  
	//  
	//  
	0b00011000, 
	0b00000110, 

	// @296 ';' (2 pixels wide)
	//   
	//   
	//   
	//  #
	//  #
	//   
	//   
	//   
	//   
	//  #
	// ##
	// # 
	// # 
	//   
	0b00000000, 0b00011000, 
	0b00011100, 0b00000110, 

	// @300 '<' (7 pixels wide)
	//        
	//        
	//       #
	//    ### 
	//  ###   
	// #      
	//  ###   
	//    ### 
	//       #
	//        
	//        
	//        
	//        
	//        
	0b00100000, 0b01010000, 0b01010000, 0b11011000, 0b10001000, 0b10001000, 0b00000100, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 

	// @314 '=' (7 pixels wide)
	//        
	//        
	//        
	//        
	// #######
	//        
	//        
	// #######
	//        
	//        
	//        
	//        
	//        
	//        
	0b10010000, 0b10010000, 0b10010000, 0b10010000, 0b10010000, 0b10010000, 0b10010000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @328 '>' (7 pixels wide)
	//        
	//        
	// #      
	//  ###   
	//    ### 
	//       #
	//    ### 
	//  ###   
	// #      
	//        
	//        
	//        
	//        
	//        
	0b00000100, 0b10001000, 0b10001000, 0b11011000, 0b01010000, 0b01010000, 0b00100000, 
	0b00000001, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @342 '?' (7 pixels wide)
	//        
	//  ##### 
	// ##   ##
	// #     #
	//      ##
	//     ## 
	//    ##  
	//   ##   
	//        
	//        
	//   ##   
	//        
	//        
	//        
	0b00001100, 0b00000110, 0b10000010, 0b11000010, 0b01100010, 0b00110110, 0b00011100, 
	0b00000000, 0b00000000, 0b00000100, 0b00000100, 0b00000000, 0b00000000, 0b00000000, 

	// @356 '@' (9 pixels wide)
	//    ####  
	//   #   ## 
	//  #     # 
	//  # #### #
	//  # #  # #
	// # #   # #
	// # #  #  #
	// # #  #  #
	// # #  # # 
	//  # ## ## 
	//  #       
	//  ##   ## 
	//    ###   
	//          
	0b11100000, 0b00011100, 0b11100010, 0b00011001, 0b00001001, 0b11001001, 0b00111011, 0b00000110, 0b11111000, 
	0b00000001, 0b00001110, 0b00001001, 0b00010010, 0b00010010, 0b00010001, 0b00001010, 0b00001011, 0b00000000, 

	// @374 'A' (9 pixels wide)
	//          
	//     ##   
	//    # #   
	//    # #   
	//   ## ##  
	//   #   #  
	//   #   #  
	//  ####### 
	//  #     # 
	//  #     # 
	// ##     ##
	//          
	//          
	//          
	0b00000000, 0b10000000, 0b11110000, 0b10011100, 0b10000010, 0b10011110, 0b11110000, 0b10000000, 0b00000000, 
	0b00000100, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000100, 

	// @392 'B' (7 pixels wide)
	//        
	// ###### 
	// ##   ##
	// ##   ##
	// ##   # 
	// #####  
	// ##   ##
	// ##    #
	// ##    #
	// ##   ##
	// ###### 
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00100010, 0b00100010, 0b00100010, 0b01011110, 0b11001100, 
	0b00000111, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @406 'C' (7 pixels wide)
	//        
	//   #### 
	//  #   ##
	// ##    #
	// #      
	// #      
	// #      
	// #      
	// ##    #
	//  #   ##
	//   #### 
	//        
	//        
	//        
	0b11111000, 0b00001100, 0b00000010, 0b00000010, 0b00000010, 0b00000110, 0b00001100, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @420 'D' (7 pixels wide)
	//        
	// #####  
	// ##   # 
	// ##   ##
	// ##    #
	// ##    #
	// ##    #
	// ##    #
	// ##   ##
	// ##   # 
	// #####  
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00000010, 0b00000010, 0b00000010, 0b00001100, 0b11111000, 
	0b00000111, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 0b00000001, 

	// @434 'E' (7 pixels wide)
	//        
	// #######
	// ##     
	// ##     
	// ##     
	// ###### 
	// ##     
	// ##     
	// ##     
	// ##     
	// #######
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00100010, 0b00100010, 0b00100010, 0b00100010, 0b00000010, 
	0b00000111, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 

	// @448 'F' (7 pixels wide)
	//        
	// #######
	// ##     
	// ##     
	// ##     
	// #######
	// ##     
	// ##     
	// ##     
	// ##     
	// ##     
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00100010, 0b00100010, 0b00100010, 0b00100010, 0b00100010, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @462 'G' (7 pixels wide)
	//        
	//   ###  
	//  #   # 
	// ##    #
	// #      
	// #      
	// #   ###
	// #     #
	// ##    #
	//  #    #
	//   #### 
	//        
	//        
	//        
	0b11111000, 0b00001100, 0b00000010, 0b00000010, 0b01000010, 0b01000100, 0b11001000, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 

	// @476 'H' (7 pixels wide)
	//        
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// #######
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00100000, 0b00100000, 0b00100000, 0b11111110, 0b11111110, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000111, 

	// @490 'I' (7 pixels wide)
	//        
	// #######
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	// #######
	//        
	//        
	//        
	0b00000010, 0b00000010, 0b00000010, 0b11111110, 0b00000010, 0b00000010, 0b00000010, 
	0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 

	// @504 'J' (6 pixels wide)
	//       
	//    ###
	//      #
	//      #
	//      #
	//      #
	//      #
	//      #
	// ##   #
	//  #  ##
	//  #### 
	//       
	//       
	//       
	0b00000000, 0b00000000, 0b00000000, 0b00000010, 0b00000010, 0b11111110, 
	0b00000001, 0b00000111, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @516 'K' (8 pixels wide)
	//         
	// ##   ## 
	// ##   #  
	// ##  #   
	// ## #    
	// ####    
	// ## ##   
	// ##  #   
	// ##   #  
	// ##   ## 
	// ##    ##
	//         
	//         
	//         
	0b11111110, 0b11111110, 0b00100000, 0b01110000, 0b11001000, 0b00000110, 0b00000010, 0b00000000, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000110, 0b00000100, 

	// @532 'L' (6 pixels wide)
	//       
	// #     
	// #     
	// #     
	// #     
	// #     
	// #     
	// #     
	// #     
	// #     
	// ######
	//       
	//       
	//       
	0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 

	// @544 'M' (7 pixels wide)
	//        
	// ##   ##
	// ##   ##
	// ##   ##
	// # # # #
	// # # # #
	// # # # #
	// #  #  #
	// #     #
	// #     #
	// #     #
	//        
	//        
	//        
	0b11111110, 0b00001110, 0b01110000, 0b10000000, 0b01110000, 0b00001110, 0b11111110, 
	0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 

	// @558 'N' (7 pixels wide)
	//        
	// ##    #
	// ##    #
	// # #   #
	// # #   #
	// #  #  #
	// #  #  #
	// #   # #
	// #   # #
	// #   ###
	// #    ##
	//        
	//        
	//        
	0b11111110, 0b00000110, 0b00011000, 0b01100000, 0b10000000, 0b00000000, 0b11111110, 
	0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000110, 0b00000111, 

	// @572 'O' (7 pixels wide)
	//        
	//   ###  
	//  #   # 
	// ##   ##
	// #     #
	// #     #
	// #     #
	// #     #
	// ##   ##
	//  #   # 
	//   ###  
	//        
	//        
	//        
	0b11111000, 0b00001100, 0b00000010, 0b00000010, 0b00000010, 0b00001100, 0b11111000, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 0b00000001, 

	// @586 'P' (7 pixels wide)
	//        
	// ###### 
	// ##   ##
	// ##    #
	// ##    #
	// ##   ##
	// ###### 
	// ##     
	// ##     
	// ##     
	// ##     
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b01000010, 0b01000010, 0b01000010, 0b01100110, 0b00111100, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @600 'Q' (7 pixels wide)
	//        
	//   ###  
	//  #   # 
	// ##   ##
	// #     #
	// #     #
	// #     #
	// #     #
	// ##   ##
	//  #   # 
	//   ###  
	//    ##  
	//     #  
	//     ###
	0b11111000, 0b00001100, 0b00000010, 0b00000010, 0b00000010, 0b00001100, 0b11111000, 
	0b00000001, 0b00000011, 0b00000100, 0b00001100, 0b00111100, 0b00100011, 0b00100001, 

	// @614 'R' (7 pixels wide)
	//        
	// ###### 
	// ##   ##
	// ##    #
	// ##   ##
	// ###### 
	// ##  #  
	// ##  ## 
	// ##   # 
	// ##   ##
	// ##    #
	//        
	//        
	//        
	0b11111110, 0b11111110, 0b00100010, 0b00100010, 0b11100010, 0b10110110, 0b00011100, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000110, 

	// @628 'S' (7 pixels wide)
	//        
	//  ##### 
	// ##   ##
	// #     #
	// ##     
	//  ####  
	//     ###
	//       #
	// #     #
	// ##   ##
	//  ##### 
	//        
	//        
	//        
	0b00011100, 0b00110110, 0b00100010, 0b00100010, 0b01100010, 0b01000110, 0b11001100, 
	0b00000011, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000011, 

	// @642 'T' (7 pixels wide)
	//        
	// #######
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//        
	//        
	//        
	0b00000010, 0b00000010, 0b00000010, 0b11111110, 0b00000010, 0b00000010, 0b00000010, 
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 

	// @656 'U' (7 pixels wide)
	//        
	// #     #
	// #     #
	// #     #
	// #     #
	// #     #
	// #     #
	// #     #
	// ##   ##
	// ##   ##
	//  ##### 
	//        
	//        
	//        
	0b11111110, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b11111110, 
	0b00000011, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000011, 

	// @670 'V' (9 pixels wide)
	//          
	// ##     ##
	//  #     # 
	//  #     # 
	//  ##   ## 
	//   #   #  
	//   #   #  
	//   ## ##  
	//    # #   
	//    # #   
	//     #    
	//          
	//          
	//          
	0b00000010, 0b00011110, 0b11110000, 0b10000000, 0b00000000, 0b10000000, 0b11110000, 0b00011110, 0b00000010, 
	0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000100, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 

	// @688 'W' (9 pixels wide)
	//          
	// #       #
	// ##     ##
	// ##     ##
	//  #  #  # 
	//  # # # # 
	//  # # # # 
	//  # # # # 
	//  # # # # 
	//  ##   ## 
	//  ##   ## 
	//          
	//          
	//          
	0b00001110, 0b11111100, 0b00000000, 0b11100000, 0b00010000, 0b11100000, 0b00000000, 0b11111100, 0b00001110, 
	0b00000000, 0b00000111, 0b00000110, 0b00000001, 0b00000000, 0b00000001, 0b00000110, 0b00000111, 0b00000000, 

	// @706 'X' (7 pixels wide)
	//        
	// #     #
	//  #   # 
	//  ## ## 
	//   # #  
	//    #   
	//   ###  
	//   # #  
	//  #   # 
	// ##   ##
	// #     #
	//        
	//        
	//        
	0b00000010, 0b00001100, 0b11011000, 0b01100000, 0b11011000, 0b00001100, 0b00000010, 
	0b00000110, 0b00000011, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b00000110, 

	// @720 'Y' (7 pixels wide)
	//        
	// #     #
	// #     #
	//  #   # 
	//  #   # 
	//   # #  
	//   # #  
	//    #   
	//    #   
	//    #   
	//    #   
	//        
	//        
	//        
	0b00000110, 0b00011000, 0b01100000, 0b10000000, 0b01100000, 0b00011000, 0b00000110, 
	0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 

	// @734 'Z' (7 pixels wide)
	//        
	// #######
	//      ##
	//     ## 
	//     #  
	//    #   
	//   ##   
	//  ##    
	//  #     
	// #      
	// #######
	//        
	//        
	//        
	0b00000010, 0b10000010, 0b11000010, 0b01100010, 0b00011010, 0b00001110, 0b00000110, 
	0b00000110, 0b00000101, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 

	// @748 '[' (4 pixels wide)
	// ####
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// #   
	// ####
	0b11111111, 0b00000001, 0b00000001, 0b00000001, 
	0b00111111, 0b00100000, 0b00100000, 0b00100000, 

	// @756 '\' (7 pixels wide)
	// #      
	//  #     
	//  ##    
	//   #    
	//   ##   
	//    #   
	//    ##  
	//     #  
	//     ## 
	//      # 
	//       #
	//        
	//        
	//        
	0b00000001, 0b00000110, 0b00011100, 0b01110000, 0b11000000, 0b00000000, 0b00000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000001, 0b00000011, 0b00000100, 

	// @770 ']' (4 pixels wide)
	// ####
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	//    #
	// ####
	0b00000001, 0b00000001, 0b00000001, 0b11111111, 
	0b00100000, 0b00100000, 0b00100000, 0b00111111, 

	// @778 '^' (7 pixels wide)
	//        
	//    #   
	//   # #  
	//   # #  
	//  #   # 
	//  #   # 
	//  #   # 
	// #     #
	//        
	//        
	//        
	//        
	//        
	//        
	0b10000000, 0b01110000, 0b00001100, 0b00000010, 0b00001100, 0b01110000, 0b10000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @792 '_' (9 pixels wide)
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	//          
	// #########
	//          
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
	0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 0b00010000, 

	// @810 '`' (3 pixels wide)
	// ## 
	//   #
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	//    
	0b00000001, 0b00000001, 0b00000010, 
	0b00000000, 0b00000000, 0b00000000, 

	// @816 'a' (8 pixels wide)
	//         
	//         
	//         
	//  ####   
	// ##   #  
	//      #  
	//  #####  
	// ##   #  
	// #    #  
	// ##  ##  
	//  ### ###
	//         
	//         
	//         
	0b10010000, 0b11011000, 0b01001000, 0b01001000, 0b01001000, 0b11110000, 0b00000000, 0b00000000, 
	0b00000011, 0b00000110, 0b00000100, 0b00000100, 0b00000010, 0b00000111, 0b00000100, 0b00000100, 

	// @832 'b' (7 pixels wide)
	// ##     
	// ##     
	// ##     
	// ###### 
	// ##   ##
	// ##   ##
	// ##    #
	// ##    #
	// ##   ##
	// ##   ##
	// ###### 
	//        
	//        
	//        
	0b11111111, 0b11111111, 0b00001000, 0b00001000, 0b00001000, 0b00111000, 0b11110000, 
	0b00000111, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000011, 

	// @846 'c' (7 pixels wide)
	//        
	//        
	//        
	//   #### 
	//  #   ##
	// ##     
	// #      
	// #      
	// ##     
	//  #   ##
	//   #### 
	//        
	//        
	//        
	0b11100000, 0b00110000, 0b00001000, 0b00001000, 0b00001000, 0b00011000, 0b00010000, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000010, 

	// @860 'd' (7 pixels wide)
	//      ##
	//      ##
	//      ##
	//  ######
	// ##   ##
	// ##   ##
	// #    ##
	// #    ##
	// ##   ##
	// ##   ##
	//  ######
	//        
	//        
	//        
	0b11110000, 0b00111000, 0b00001000, 0b00001000, 0b00001000, 0b11111111, 0b11111111, 
	0b00000011, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000111, 

	// @874 'e' (7 pixels wide)
	//        
	//        
	//        
	//   #### 
	//  #   ##
	// #     #
	// #######
	// #      
	// ##     
	//  #   ##
	//   #### 
	//        
	//        
	//        
	0b11100000, 0b01010000, 0b01001000, 0b01001000, 0b01001000, 0b01011000, 0b01110000, 
	0b00000001, 0b00000011, 0b00000100, 0b00000100, 0b00000100, 0b00000110, 0b00000010, 

	// @888 'f' (7 pixels wide)
	//    ####
	//   ##   
	//   #    
	// #######
	//   #    
	//   #    
	//   #    
	//   #    
	//   #    
	//   #    
	//   #    
	//        
	//        
	//        
	0b00001000, 0b00001000, 0b11111110, 0b00001011, 0b00001001, 0b00001001, 0b00001001, 
	0b00000000, 0b00000000, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @902 'g' (7 pixels wide)
	//        
	//        
	//        
	//  ######
	// ##   ##
	// ##   ##
	// #    ##
	// #    ##
	// ##   ##
	// ##   ##
	//  ######
	//      ##
	//  #   # 
	//  ##### 
	0b11110000, 0b00111000, 0b00001000, 0b00001000, 0b00001000, 0b11111000, 0b11111000, 
	0b00000011, 0b00110111, 0b00100100, 0b00100100, 0b00100100, 0b00111111, 0b00001111, 

	// @916 'h' (7 pixels wide)
	// ##     
	// ##     
	// ##     
	// ###### 
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	//        
	//        
	//        
	0b11111111, 0b11111111, 0b00001000, 0b00001000, 0b00001000, 0b11111000, 0b11110000, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000111, 

	// @930 'i' (7 pixels wide)
	//    #   
	//        
	//        
	//  ###   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	// #######
	//        
	//        
	//        
	0b00000000, 0b00001000, 0b00001000, 0b11111001, 0b00000000, 0b00000000, 0b00000000, 
	0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 

	// @944 'j' (5 pixels wide)
	//     #
	//      
	//      
	//  ####
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//     #
	//    ##
	// #### 
	0b00000000, 0b00001000, 0b00001000, 0b00001000, 0b11111001, 
	0b00100000, 0b00100000, 0b00100000, 0b00110000, 0b00011111, 

	// @954 'k' (6 pixels wide)
	// #     
	// #     
	// #     
	// #   ##
	// #  ## 
	// # ##  
	// ###   
	// ####  
	// #  #  
	// #   # 
	// #   ##
	//       
	//       
	//       
	0b11111111, 0b11000000, 0b11100000, 0b10110000, 0b00011000, 0b00001000, 
	0b00000111, 0b00000000, 0b00000000, 0b00000001, 0b00000110, 0b00000100, 

	// @966 'l' (7 pixels wide)
	//  ###   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	//    #   
	// #######
	//        
	//        
	//        
	0b00000000, 0b00000001, 0b00000001, 0b11111111, 0b00000000, 0b00000000, 0b00000000, 
	0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 

	// @980 'm' (7 pixels wide)
	//        
	//        
	//        
	// #######
	// #  #  #
	// #  #  #
	// #  #  #
	// #  #  #
	// #  #  #
	// #  #  #
	// #  #  #
	//        
	//        
	//        
	0b11111000, 0b00001000, 0b00001000, 0b11111000, 0b00001000, 0b00001000, 0b11111000, 
	0b00000111, 0b00000000, 0b00000000, 0b00000111, 0b00000000, 0b00000000, 0b00000111, 

	// @994 'n' (7 pixels wide)
	//        
	//        
	//        
	// ###### 
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	//        
	//        
	//        
	0b11111000, 0b11111000, 0b00001000, 0b00001000, 0b00001000, 0b11111000, 0b11110000, 
	0b00000111, 0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000111, 0b00000111, 

	// @1008 'o' (7 pixels wide)
	//        
	//        
	//        
	//  ##### 
	//  #   ##
	// ##   ##
	// #     #
	// #     #
	// ##   ##
	//  #   # 
	//  ####  
	//        
	//        
	//        
	0b11100000, 0b00111000, 0b00001000, 0b00001000, 0b00001000, 0b00111000, 0b11110000, 
	0b00000001, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000011, 0b00000001, 

	// @1022 'p' (7 pixels wide)
	//        
	//        
	//        
	// ###### 
	// ##   ##
	// ##   ##
	// ##    #
	// ##    #
	// ##   ##
	// ##   ##
	// ###### 
	// ##     
	// ##     
	// ##     
	0b11111000, 0b11111000, 0b00001000, 0b00001000, 0b00001000, 0b00111000, 0b11110000, 
	0b00111111, 0b00111111, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000011, 

	// @1036 'q' (7 pixels wide)
	//        
	//        
	//        
	//  ######
	// ##   ##
	// ##   ##
	// #    ##
	// #    ##
	// ##   ##
	// ##   ##
	//  ######
	//      ##
	//      ##
	//      ##
	0b11110000, 0b00111000, 0b00001000, 0b00001000, 0b00001000, 0b11111000, 0b11111000, 
	0b00000011, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00111111, 0b00111111, 

	// @1050 'r' (6 pixels wide)
	//       
	//       
	//       
	// # ####
	// # #   
	// ##    
	// ##    
	// #     
	// #     
	// #     
	// #     
	//       
	//       
	//       
	0b11111000, 0b01100000, 0b00011000, 0b00001000, 0b00001000, 0b00001000, 
	0b00000111, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 

	// @1062 's' (7 pixels wide)
	//        
	//        
	//        
	//  ##### 
	//  #   # 
	//  #     
	//  ###   
	//     ## 
	//      ##
	// ##   ##
	//  ##### 
	//        
	//        
	//        
	0b00000000, 0b01111000, 0b01001000, 0b01001000, 0b10001000, 0b10011000, 0b00000000, 
	0b00000010, 0b00000110, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000011, 

	// @1076 't' (6 pixels wide)
	//       
	//   #   
	//   #   
	// ######
	//   #   
	//   #   
	//   #   
	//   #   
	//   #   
	//   #   
	//   ####
	//       
	//       
	//       
	0b00001000, 0b00001000, 0b11111110, 0b00001000, 0b00001000, 0b00001000, 
	0b00000000, 0b00000000, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 

	// @1088 'u' (7 pixels wide)
	//        
	//        
	//        
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	// ##   ##
	//  #   ##
	//  ######
	//        
	//        
	//        
	0b11111000, 0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b11111000, 0b11111000, 
	0b00000001, 0b00000111, 0b00000100, 0b00000100, 0b00000100, 0b00000111, 0b00000111, 

	// @1102 'v' (7 pixels wide)
	//        
	//        
	//        
	// #     #
	// ##   ##
	// ##   # 
	//  #   # 
	//  ## ## 
	//   # #  
	//   # #  
	//   ##   
	//        
	//        
	//        
	0b00111000, 0b11110000, 0b10000000, 0b00000000, 0b10000000, 0b11110000, 0b00011000, 
	0b00000000, 0b00000000, 0b00000111, 0b00000100, 0b00000011, 0b00000000, 0b00000000, 

	// @1116 'w' (9 pixels wide)
	//          
	//          
	//          
	// ##     ##
	// ##     ##
	//  #  #  # 
	//  # # # # 
	//  # # # # 
	//  # # # # 
	//  ##  # # 
	//  ##   ## 
	//          
	//          
	//          
	0b00011000, 0b11111000, 0b00000000, 0b11000000, 0b00100000, 0b11000000, 0b00000000, 0b11111000, 0b00011000, 
	0b00000000, 0b00000111, 0b00000110, 0b00000001, 0b00000000, 0b00000011, 0b00000100, 0b00000111, 0b00000000, 

	// @1134 'x' (7 pixels wide)
	//        
	//        
	//        
	// ##   ##
	//  #   # 
	//   # #  
	//   ###  
	//   ###  
	//   # #  
	//  #   # 
	// #    ##
	//        
	//        
	//        
	0b00001000, 0b00011000, 0b11100000, 0b11000000, 0b11100000, 0b00011000, 0b00001000, 
	0b00000100, 0b00000010, 0b00000001, 0b00000000, 0b00000001, 0b00000110, 0b00000100, 

	// @1148 'y' (7 pixels wide)
	//        
	//        
	//        
	// #     #
	// #     #
	//  #   # 
	//  #   # 
	//  ## ## 
	//   # #  
	//   # #  
	//    #   
	//    #   
	//   #    
	// ###    
	0b00011000, 0b11100000, 0b10000000, 0b00000000, 0b10000000, 0b11100000, 0b00011000, 
	0b00100000, 0b00100000, 0b00110011, 0b00001100, 0b00000011, 0b00000000, 0b00000000, 

	// @1162 'z' (7 pixels wide)
	//        
	//        
	//        
	// #######
	//      # 
	//     #  
	//    #   
	//   ##   
	//  ##    
	//  #     
	// #######
	//        
	//        
	//        
	0b00001000, 0b00001000, 0b10001000, 0b11001000, 0b00101000, 0b00011000, 0b00001000, 
	0b00000100, 0b00000111, 0b00000101, 0b00000100, 0b00000100, 0b00000100, 0b00000100, 

	// @1176 '{' (6 pixels wide)
	//   ####
	//   #   
	//   #   
	//   #   
	//   #   
	//   #   
	//  ##   
	// #     
	//  ##   
	//   #   
	//   #   
	//   #   
	//   #   
	//   ####
	0b10000000, 0b01000000, 0b01111111, 0b00000001, 0b00000001, 0b00000001, 
	0b00000000, 0b00000001, 0b00111111, 0b00100000, 0b00100000, 0b00100000, 

	// @1188 '|' (1 pixels wide)
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	// #
	0b11111111, 
	0b00111111, 

	// @1190 '}' (6 pixels wide)
	// ####  
	//    #  
	//    #  
	//    #  
	//    #  
	//    ## 
	//      #
	//    ## 
	//    #  
	//    #  
	//    #  
	//    #  
	//    #  
	// ####  
	0b00000001, 0b00000001, 0b00000001, 0b10111111, 0b10100000, 0b01000000, 
	0b00100000, 0b00100000, 0b00100000, 0b00111111, 0b00000000, 0b00000000, 

	// @1202 '~' (7 pixels wide)
	//        
	//        
	//        
	//        
	//        
	// ####   
	//    ####
	//        
	//        
	//        
	//        
	//        
	//        
	//        
	0b00100000, 0b00100000, 0b00100000, 0b01100000, 0b01000000, 0b01000000, 0b01000000, 
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 
};

// Character descriptors for Liberation Mono 11pt
// { [Char width in bits], [Offset into liberationMono_11ptCharBitmaps in bytes] }
const FONT_CHAR_INFO liberationMono_11ptDescriptors[] = 
{
	{2, 0}, 		//   ASCII 32
	{1, 4}, 		// ! 
	{5, 6}, 		// " 
	{9, 16}, 		// # 
	{7, 34}, 		// $ 
	{9, 48}, 		// % 
	{9, 66}, 		// & 
	{1, 84}, 		// ' 
	{3, 86}, 		// (  ASCII 40
	{3, 92}, 		// ) 
	{5, 98}, 		// * 
	{7, 108}, 		// + 
	{3, 122}, 		// , 
	{5, 128}, 		// - 
	{1, 138}, 		// . 
	{7, 140}, 		// / 
	{7, 154}, 		// 0 
	{7, 168}, 		// 1 
	{7, 182}, 		// 2 ASCII 50
	{7, 196}, 		// 3 
	{7, 210}, 		// 4 
	{7, 224}, 		// 5 
	{7, 238}, 		// 6 
	{7, 252}, 		// 7 
	{7, 266}, 		// 8 
	{7, 280}, 		// 9 
	{1, 294}, 		// : 
	{2, 296}, 		// ; 
	{7, 300}, 		// < ASCII 60
	{7, 314}, 		// = 
	{7, 328}, 		// > 
	{7, 342}, 		// ? 
	{9, 356}, 		// @ 
	{9, 374}, 		// A 
	{7, 392}, 		// B 
	{7, 406}, 		// C 
	{7, 420}, 		// D 
	{7, 434}, 		// E 
	{7, 448}, 		// F ASCII 70
	{7, 462}, 		// G 
	{7, 476}, 		// H 
	{7, 490}, 		// I 
	{6, 504}, 		// J 
	{8, 516}, 		// K 
	{6, 532}, 		// L 
	{7, 544}, 		// M 
	{7, 558}, 		// N 
	{7, 572}, 		// O 
	{7, 586}, 		// P ASCII 80
	{7, 600}, 		// Q 
	{7, 614}, 		// R 
	{7, 628}, 		// S 
	{7, 642}, 		// T 
	{7, 656}, 		// U 
	{9, 670}, 		// V 
	{9, 688}, 		// W 
	{7, 706}, 		// X 
	{7, 720}, 		// Y 
	{7, 734}, 		// Z ASCII 90
	{4, 748}, 		// [ 
	{7, 756}, 		// slash (Don't say it)
	{4, 770}, 		// ] 
	{7, 778}, 		// ^ 
	{9, 792}, 		// _ 
	{3, 810}, 		// ` 
	{8, 816}, 		// a 
	{7, 832}, 		// b 
	{7, 846}, 		// c 
	{7, 860}, 		// d ASCII 100
	{7, 874}, 		// e 
	{7, 888}, 		// f 
	{7, 902}, 		// g 
	{7, 916}, 		// h 
	{7, 930}, 		// i 
	{5, 944}, 		// j 
	{6, 954}, 		// k 
	{7, 966}, 		// l 
	{7, 980}, 		// m 
	{7, 994}, 		// n ASCII 110
	{7, 1008}, 		// o 
	{7, 1022}, 		// p 
	{7, 1036}, 		// q 
	{6, 1050}, 		// r 
	{7, 1062}, 		// s 
	{6, 1076}, 		// t 
	{7, 1088}, 		// u 
	{7, 1102}, 		// v 
	{9, 1116}, 		// w 
	{7, 1134}, 		// x ASCII 120
	{7, 1148}, 		// y 
	{7, 1162}, 		// z 
	{6, 1176}, 		// { 
	{1, 1188}, 		// | 
	{6, 1190}, 		// } 
	{7, 1202}, 		// ~ 
};

// Font information for Liberation Mono 11pt
const FONT_INFO liberationMono_11ptFontInfo =
{
	14, //  Character height
	' ', //  Start character
	'~', //  End character
	"Liberation Mono 11pt", // Name of font
	liberationMono_11ptDescriptors, //  Character descriptor array
	liberationMono_11ptBitmaps, //  Character bitmap array
};
