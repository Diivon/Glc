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
 c l a s s   L a y e r 1 ; 
 c l a s s   P h y s i c a l O b j e c t 2   :   p u b l i c   : : g c : : C l a s s T r a i t s < P h y s i c a l O b j e c t 2 > { 
 	 / / p u b l i c : 
 	 t y p e d e f   P h y s i c a l O b j e c t 2   t h i s _ t ; 
 	 P h y s i c a l O b j e c t 2   &   s e l f ; 
 	 S c e n e 0   &   s c e n e ; 
 	 L a y e r 1   &   l a y e r ; 
 	 p u b l i c : 
 	 p r i v a t e : 
 	 p u b l i c : 
 	 : : g c : : V e c 2   p o s ; 
 	 P h y s i c a l O b j e c t 2 ( S c e n e 0   & ,   L a y e r 1   & ) ; 
 	 ~ P h y s i c a l O b j e c t 2 ( ) ; 
 	 v o i d   o n S t a r t ( ) ; 
 	 v o i d   o n U p d a t e ( c o n s t   f l o a t   &   d t ) ; 
 	 p u b l i c : 
 	 p r i v a t e : 
 	 p r i v a t e : 
 	 P h y s i c a l O b j e c t 2 ( c _ l r e f _ t )   =   d e l e t e ; 
 	 P h y s i c a l O b j e c t 2 ( r r e f _ t )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( c _ l r e f _ t )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( r r e f _ t )   =   d e l e t e ; 
 } ; 
 