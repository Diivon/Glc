# i n c l u d e   " S c e n e 0 . h " 
 L a y e r 0 : : L a y e r 0 ( S c e n e 0   &   s c ) : 
 s c e n e ( s c ) 
 ,   O b j R e n d e r a b l e O b j e c t 0 ( s c e n e ,   * t h i s ) ,   O b j R e n d e r a b l e O b j e c t 1 ( s c e n e ,   * t h i s ) 
 { 
 } 
 L a y e r 0 : : ~ L a y e r 0 ( ) { 
 } 
 v o i d   L a y e r 0 : : o n S t a r t ( ) { 
 	 i s D o n e   =   f a l s e ; 
 	 O b j R e n d e r a b l e O b j e c t 0 . o n S t a r t ( ) ; 
 	 O b j R e n d e r a b l e O b j e c t 1 . o n S t a r t ( ) ; 
 } 
 v o i d   L a y e r 0 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 	 O b j R e n d e r a b l e O b j e c t 0 . o n U p d a t e ( d t ) ; 
 	 O b j R e n d e r a b l e O b j e c t 1 . o n U p d a t e ( d t ) ; 
 } 
 