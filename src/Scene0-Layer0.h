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
 # i n c l u d e   " S c e n e 0 - L a y e r 0 - N u m b e r 1 . h " 
 # i n c l u d e   " S c e n e 0 - L a y e r 0 - N u m b e r 2 . h " 
 c l a s s   S c e n e 0 ; 
 c l a s s   L a y e r 0   :   p u b l i c   : : g c : : C l a s s T r a i t s < L a y e r 0 > { 
 	 S c e n e 0   &   s c e n e ; 
 	 p r i v a t e : / / y o u r   p r i v a t e   v a r i a b l e s   h e r e ; 
 	 p u b l i c : / / y o u r   p u b l i c   v a r i a b l e s   h e r e ; 
 	 b o o l   i s D o n e ; ; 
 	 N u m b e r 1   O b j R e n d e r a b l e O b j e c t 0 ; 
 	 N u m b e r 2   O b j R e n d e r a b l e O b j e c t 1 ; 
 	 p u b l i c : 
 	 L a y e r 0 ( S c e n e 0   & ) ; 
 	 ~ L a y e r 0 ( ) ; 
 	 v o i d   o n S t a r t ( ) ; 
 	 v o i d   o n U p d a t e ( c o n s t   f l o a t   &   d t ) ; 
 	 t e m p l a t e < c l a s s   T > 
 	 T   &   g e t O b j e c t ( ) ; 
 	 t e m p l a t e < c l a s s   T > 
 	 c o n s t   T   &   g e t O b j e c t ( )   c o n s t ; 
 	 t e m p l a t e < > 
 	 N u m b e r 1   &   g e t O b j e c t ( ) { 
 	 	 r e t u r n   O b j R e n d e r a b l e O b j e c t 0 ; 
 	 } 
 	 t e m p l a t e < > 
 	 c o n s t   N u m b e r 1   &   g e t O b j e c t ( )   c o n s t { 
 	 	 r e t u r n   O b j R e n d e r a b l e O b j e c t 0 ; 
 	 } 
 	 t e m p l a t e < > 
 	 N u m b e r 2   &   g e t O b j e c t ( ) { 
 	 	 r e t u r n   O b j R e n d e r a b l e O b j e c t 1 ; 
 	 } 
 	 t e m p l a t e < > 
 	 c o n s t   N u m b e r 2   &   g e t O b j e c t ( )   c o n s t { 
 	 	 r e t u r n   O b j R e n d e r a b l e O b j e c t 1 ; 
 	 } 
 	 p r i v a t e : 
 	 L a y e r 0 ( c _ l r e f _ t )   =   d e l e t e ; 
 	 L a y e r 0 ( r r e f _ t )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( c _ l r e f _ t )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( r r e f _ t )   =   d e l e t e ; 
 } ; 
 t e m p l a t e < > 
 i n l i n e   v o i d   : : g c : : R e n d e r e r : : r e n d e r L a y e r ( c o n s t   L a y e r 0   &   l ) { 
 	 t h i s - > r e n d e r ( l . g e t O b j e c t < N u m b e r 1 > ( ) . g e t S p r i t e ( ) ) ; 
 	 t h i s - > r e n d e r ( l . g e t O b j e c t < N u m b e r 2 > ( ) . g e t S p r i t e ( ) ) ; 
 } 
 