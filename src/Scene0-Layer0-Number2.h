# p r a g m a   o n c e 
 # i n c l u d e   < s t r i n g > 
 # i n c l u d e   < i o s t r e a m > 
 # i n c l u d e   < u t i l i t y > 
 # i n c l u d e   " G l a n c e . h " 
 # i n c l u d e   " S F M L / G r a p h i c s . h p p " 
 # i n c l u d e   " S F M L / S y s t e m . h p p " 
 # i n c l u d e   " S F M L / A u d i o . h p p " 
 # i n c l u d e   " S F M L / N e t w o r k . h p p " 
 # i n c l u d e   < c m a t h > 
 c l a s s   S c e n e 0 ; 
 c l a s s   L a y e r 0 ; 
 c l a s s   N u m b e r 2   :   p u b l i c   : : g c : : C l a s s T r a i t s < N u m b e r 2 > { 
 	 f r i e n d   c l a s s   : : g c : : C a m e r a ; 
 	 p u b l i c : 
 	 t y p e d e f   N u m b e r 2   t h i s _ t ; 
 	 N u m b e r 2   &   s e l f ; 
 	 S c e n e 0   &   s c e n e ; 
 	 L a y e r 0   &   l a y e r ; 
 	 : : g c : : V e c 2   p o s ; 
 	 p r i v a t e : ; 
 	 i n t   _ c o u n t ; ; 
 	 b o o l   _ i s R i g h t ; ; 
 	 p u b l i c : ; 
 	 t y p e d e f   : : g c : : C o l l i d e r < : : g c : : C o l l i d e r T y p e : : C i r c l e >   c o l l i d e r _ t ; 
 	 c o l l i d e r _ t   c o l l i d e r 
 	 ; 
 	 t y p e d e f   : : g c : : A n i m a t i o n < : : g c : : A n i m a t i o n T y p e : : P i n g P o n g >   a n i m a t i o n _ t ; 
 	 a n i m a t i o n _ t   a n i m a t i o n ; 
 	 ; 
 	 p u b l i c : 
 	 N u m b e r 2 ( S c e n e 0   & ,   L a y e r 0   & ) ; 
 	 ~ N u m b e r 2 ( ) ; 
 	 v o i d   o n S t a r t ( ) ; 
 	 v o i d   o n U p d a t e ( c o n s t   f l o a t   &   d t ) ; 
 	 c o n s t   : : g c : : S p r i t e   g e t C u r r e n t S p r i t e ( )   c o n s t ; 
 	 : : g c : : S p r i t e   g e t C u r r e n t S p r i t e ( ) ; 
 	 v o i d   k e k ( N u m b e r 1   &   a ) ; 
 	 ; 
 	 p r i v a t e : 
 	 N u m b e r 2 ( c o n s t   N u m b e r 2   & )   =   d e l e t e ; 
 	 N u m b e r 2 ( N u m b e r 2   & & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( c o n s t   N u m b e r 2   & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( N u m b e r 2   & & )   =   d e l e t e ; 
 } ; 
 