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
 c l a s s   N u m b e r 1   :   p u b l i c   : : g c : : C l a s s T r a i t s < N u m b e r 1 > { 
 	 f r i e n d   c l a s s   : : g c : : C a m e r a ; 
 	 p u b l i c : 
 	 t y p e d e f   N u m b e r 1   t h i s _ t ; 
 	 S c e n e 0   &   s c e n e ; 
 	 L a y e r 0   &   l a y e r ; 
 	 : : g c : : V e c 2   p o s ; 
 	 p r i v a t e : ; 
 	 f l o a t   e l a p s e d ; ; 
 	 : : g c : : A n i m a t i o n D i r e c t i o n   d i r ; ; 
 	 u i n t 3 2   _ t i m e s ; ; 
 	 p u b l i c : ; 
 	 : : g c : : E v e n t < l r e f _ t >   o n M o v e E v e n t ; ; 
 	 : : g c : : S p r i t e   s p r i t e ; 
 	 ; 
 	 / / p u b l i c : 
 	 N u m b e r 1 ( S c e n e 0   & ,   L a y e r 0   & ) ; 
 	 ~ N u m b e r 1 ( ) ; 
 	 v o i d   o n S t a r t ( ) ; 
 	 v o i d   o n U p d a t e ( c o n s t   f l o a t   &   d t ) ; 
 	 c o n s t   : : g c : : S p r i t e   g e t C u r r e n t S p r i t e ( )   c o n s t ; 
 	 : : g c : : S p r i t e   g e t C u r r e n t S p r i t e ( ) ; 
 	 ; 
 	 p r i v a t e : 
 	 N u m b e r 1 ( c o n s t   N u m b e r 1   & )   =   d e l e t e ; 
 	 N u m b e r 1 ( N u m b e r 1   & & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( c o n s t   N u m b e r 1   & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( N u m b e r 1   & & )   =   d e l e t e ; 
 } ; 
 