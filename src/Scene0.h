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
 # i n c l u d e   " S c e n e 0 - L a y e r 0 . h " 
 # i n c l u d e   " S c e n e 0 - L a y e r 1 . h " 
 # i n c l u d e   " S c e n e 0 - L a y e r 0 . h " 
 # i n c l u d e   " S c e n e 0 - L a y e r 1 . h " 
 c l a s s   S c e n e 0   :   p u b l i c   : : g c : : C l a s s T r a i t s < S c e n e 0 > { 
 	 L a y e r 0   l a y e r O b j e c t 0 ; 
 	 L a y e r 1   l a y e r O b j e c t 1 ; 
 	 p u b l i c : 
 	 S c e n e 0 ( ) : 
 	 l a y e r O b j e c t 0 ( * t h i s ) ,   l a y e r O b j e c t 1 ( * t h i s ) 
 	 { } 
 	 	 v o i d   s t a r t ( ) 
 	 	 { 
 	 	 	 l a y e r O b j e c t 0 . o n S t a r t ( ) ; 
 	 	 	 l a y e r O b j e c t 1 . o n S t a r t ( ) ; 
 	 	 } 
 	 	 v o i d   u p d a t e ( c o n s t   f l o a t   &   d t ) 
 	 	 { 
 	 	 	 l a y e r O b j e c t 0 . o n U p d a t e ( d t ) ; 
 	 	 	 l a y e r O b j e c t 1 . o n U p d a t e ( d t ) ; 
 	 	 } 
 	 	 t e m p l a t e < c l a s s   T > 
 	 	 T   &   g e t L a y e r ( ) ; 
 	 	 t e m p l a t e < c l a s s   T > 
 	 	 c o n s t   T   &   g e t L a y e r ( )   c o n s t ; 
 	 	 t e m p l a t e < > 
 	 	 L a y e r 0   &   g e t L a y e r ( ) { 
 	 	 	 r e t u r n   l a y e r O b j e c t 0 ; 
 	 	 } 
 	 	 t e m p l a t e < > 
 	 	 c o n s t   L a y e r 0   &   g e t L a y e r ( )   c o n s t { 
 	 	 	 r e t u r n   l a y e r O b j e c t 0 ; 
 	 	 } 
 	 	 t e m p l a t e < > 
 	 	 L a y e r 1   &   g e t L a y e r ( ) { 
 	 	 	 r e t u r n   l a y e r O b j e c t 1 ; 
 	 	 } 
 	 	 t e m p l a t e < > 
 	 	 c o n s t   L a y e r 1   &   g e t L a y e r ( )   c o n s t { 
 	 	 	 r e t u r n   l a y e r O b j e c t 1 ; 
 	 	 } 
 	 } ; 
 	 t e m p l a t e < > 
 	 i n l i n e   v o i d   : : g c : : R e n d e r e r : : r e n d e r S c e n e ( c o n s t   S c e n e 0   &   s ) { 
 	 	 t h i s - > r e n d e r L a y e r ( s . g e t L a y e r < L a y e r 0 > ( ) ) ; 
 	 	 t h i s - > r e n d e r L a y e r ( s . g e t L a y e r < L a y e r 1 > ( ) ) ; 
 	 } 
 