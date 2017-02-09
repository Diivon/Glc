# i n c l u d e   " m a i n . h " 
 i n l i n e   v o i d   p r o c e s s E v e n t s ( s f : : R e n d e r W i n d o w   &   w ) { 
 	 s f : : E v e n t   e v e n t ; 
 	 w h i l e   ( w . p o l l E v e n t ( e v e n t ) )   { 
 	 	 i f   ( e v e n t . t y p e   = =   s f : : E v e n t : : C l o s e d ) { 
 	 	 	 w . c l o s e ( ) ;   c o n t i n u e ; 
 	 	 } 
 	 	 i f   ( e v e n t . t y p e   = =   s f : : E v e n t : : K e y P r e s s e d ) 
 	 	 i f   ( e v e n t . k e y . c o d e   = =   s f : : K e y b o a r d : : E s c a p e ) 
 	 	 w . c l o s e ( ) ; 
 	 } 
 } 
 c o n s t   i n t   c _ f r a m e s P e r S e c o n d   =   3 0 ; 
 c o n s t   f l o a t   c _ M i l l i s e c o n d s F o r O n e F r a m e   =   1 ' 0 0 0   /   c _ f r a m e s P e r S e c o n d ; 
 i n t   m a i n ( ) { 
 	 s f : : R e n d e r W i n d o w   m a i n W i n d o w ( s f : : V i d e o M o d e ( 8 0 0 , 6 0 0 ) ,   " s f m l " ,   s f : : S t y l e : : C l o s e ) ; 
 	 g c : : C a m e r a   m a i n C a m e r a ( g c : : V e c 2 ( 0 ,   0 ) ,   g c : : V e c 2 ( 8 0 0 , 6 0 0 ) ) ; 
 	 g c : : R e n d e r e r   r e n d e r e r ; 
 	 r e n d e r e r . s e t W i n d o w ( m a i n W i n d o w ) . s e t C a m e r a ( m a i n C a m e r a ) ; 
 	 f l o a t   d t   =   0 . 5 f ; 
 	 a u t o   &   c u r r e n t S c e n e   =   S c e n e 0 ( ) ; 
 	 s f : : C l o c k   c l o c k ; 
 	 c u r r e n t S c e n e . s t a r t ( ) ; 
 	 w h i l e ( m a i n W i n d o w . i s O p e n ( ) ) { 
 	 	 c l o c k . r e s t a r t ( ) ; 
 	 	 p r o c e s s E v e n t s ( m a i n W i n d o w ) ; 
 	 	 m a i n W i n d o w . c l e a r ( ) ; 
 	 	 c u r r e n t S c e n e . u p d a t e ( c _ M i l l i s e c o n d s F o r O n e F r a m e ) ; 
 	 	 r e n d e r e r . r e n d e r ( c u r r e n t S c e n e ) ; 
 	 	 m a i n C a m e r a . d i s p l a y ( ) ; 
 	 	 d t   =   c l o c k . g e t E l a p s e d T i m e ( ) . a s M i l l i s e c o n d s ( ) ; 
 	 	 i f   ( d t   <   c _ M i l l i s e c o n d s F o r O n e F r a m e )   s f : : s l e e p ( s f : : m i l l i s e c o n d s ( s t a t i c _ c a s t < s f : : I n t 3 2 > ( c _ M i l l i s e c o n d s F o r O n e F r a m e   -   d t ) ) ) ; 
 	 } 
 } 
 