# i n c l u d e   " S c e n e 0 . h " 
 L a y e r 1 : : L a y e r 1 ( S c e n e 0   &   s c ) : 
 s c e n e ( s c ) 
 ,   O b j P h y s i c a l O b j e c t 2 ( s c e n e ,   * t h i s ) 
 { 
 } 
 L a y e r 1 : : ~ L a y e r 1 ( ) { 
 } 
 v o i d   L a y e r 1 : : o n S t a r t ( ) { 
 	 O b j P h y s i c a l O b j e c t 2 . o n S t a r t ( ) ; 
 } 
 v o i d   L a y e r 1 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 	 O b j P h y s i c a l O b j e c t 2 . o n U p d a t e ( d t ) ; 
 } 
 