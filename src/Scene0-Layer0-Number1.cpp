# i n c l u d e   " S c e n e 0 . h " 
 N u m b e r 1 : : N u m b e r 1 ( S c e n e 0   &   s c ,   L a y e r 0   &   l r ) : 
 p o s ( : : g c : : V e c 2 ( 5 0 ,   5 0 ) ) ,   s c e n e ( s c ) ,   l a y e r ( l r ) 
 ,   s p r i t e ( " r e s o u r c e s \ \ n \ \ 1 . j p g " ) 
 { 
 } 
 N u m b e r 1 : : ~ N u m b e r 1 ( ) { 
 } 
 v o i d   N u m b e r 1 : : o n S t a r t ( ) { 
 	 e l a p s e d   =   0 . 0 f ; 
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
 	 l a y e r . g e t O b j e c t < N u m b e r 2 > ( ) . p o s   =   g c : : V e c 2 ( 0 , 0 ) ; 
 } 
 c o n s t   : : g c : : S p r i t e   N u m b e r 1 : : g e t C u r r e n t S p r i t e ( )   c o n s t { 
 	 r e t u r n   s p r i t e ; 
 } 
 : : g c : : S p r i t e   N u m b e r 1 : : g e t C u r r e n t S p r i t e ( ) { 
 	 r e t u r n   s p r i t e ; 
 } 
 