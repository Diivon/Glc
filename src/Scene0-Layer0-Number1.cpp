# i n c l u d e   " S c e n e 0 . h " 
 N u m b e r 1 : : N u m b e r 1 ( S c e n e 0   &   s c ,   L a y e r 0   &   l r ) : 
 s e l f ( * t h i s ) ,   p o s ( : : g c : : V e c 2 ( 5 0 ,   5 0 ) ) ,   s c e n e ( s c ) ,   l a y e r ( l r ) 
 d i s t a n c e ( 0 ) ,   c o l l i d e r ( : : g c : : V e c 2 ( 5 0 ,     2 7 . 0 0 f ) 
 { 
 	 g c : : d e b u g . w r i t e ( " A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A A " ) ; 
 } 
 N u m b e r 1 : : ~ N u m b e r 1 ( ) { 
 } 
 v o i d   N u m b e r 1 : : o n S t a r t ( ) { 
 	 e l a p s e d   =   0 . 0 f ; 
 	 _ t i m e s   =   0 ; 
 	 d i r   =   : : g c : : A n i m a t i o n D i r e c t i o n : : F o r w a r d ; 
 } 
 v o i d   N u m b e r 1 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 	 i f ( ! l a y e r . i s D o n e ) 
 	 { 
 	 	 i f   ( p o s . x   >   1 0 0 ) 
 	 	 d i r   =   : : g c : : A n i m a t i o n D i r e c t i o n : : B a c k w a r d ; 
 	 	 i f   ( p o s . x   <   2 5 ) 
 	 	 d i r   =   : : g c : : A n i m a t i o n D i r e c t i o n : : F o r w a r d ; 
 	 	 d i r   = =   : : g c : : A n i m a t i o n D i r e c t i o n : : F o r w a r d   ?   + + p o s . x   :   - - p o s . x ; 
 	 	 o n M o v e E v e n t . e m i t ( * t h i s ) ; 
 	 } 
 	 i f   ( l a y e r . i s D o n e ) 
 	 l a y e r . g e t O b j e c t < N u m b e r 2 > ( ) . p o s   =   s c e n e . g e t L a y e r < L a y e r 1 > ( ) . g e t O b j e c t < P h y s i c a l O b j e c t 2 > ( ) . p o s ; 
 	 d i s t a n c e   =   ( p o s   -   l a y e r . g e t O b j e c t < N u m b e r 2 > ( ) . p o s ) . g e t L e n g t h ( ) ; 
 	 g c : : d e b u g 
 	 . c l e a r ( ) 
 	 . w r i t e ( d i s t a n c e ) 
 	 . n e w L i n e ( ) 
 	 . w r i t e ( l a y e r . g e t O b j e c t < N u m b e r 2 > ( ) . c o l l i d e r . i s C o l l i d e ( s e l f . c o l l i d e r ) ) ; 
 	 c o l l i d e r . m o v e T o ( p o s ) ; 
 } 
 c o n s t   : : g c : : S p r i t e   N u m b e r 1 : : g e t C u r r e n t S p r i t e ( )   c o n s t { 
 	 r e t u r n   s p r i t e ; 
 } 
 : : g c : : S p r i t e   N u m b e r 1 : : g e t C u r r e n t S p r i t e ( ) { 
 	 r e t u r n   s p r i t e ; 
 } 
 