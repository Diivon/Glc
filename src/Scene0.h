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
 # i n c l u d e   " R e n d e r a b l e O b j e c t 0 . h " 
 # i n c l u d e   " R e n d e r a b l e O b j e c t 1 . h " 
 c l a s s   S c e n e 0 { 
 	 p u b l i c : 
 	 f r i e n d   c l a s s   R e n d e r a b l e O b j e c t 0 ; 
 	 R e n d e r a b l e O b j e c t 0   O b j P h y s i c a l O b j e c t 0 ; 
 	 f r i e n d   c l a s s   R e n d e r a b l e O b j e c t 1 ; 
 	 R e n d e r a b l e O b j e c t 1   O b j P h y s i c a l O b j e c t 1 ; 
 	 S c e n e 0 ( ) : 
 	 O b j P h y s i c a l O b j e c t 0 ( * t h i s ) ,   O b j P h y s i c a l O b j e c t 1 ( * t h i s ) 
 	 { } 
 	 	 v o i d   s t a r t ( ) 
 	 	 { 
 	 	 	 O b j P h y s i c a l O b j e c t 0 . o n S t a r t ( ) ; 
 	 	 	 O b j P h y s i c a l O b j e c t 1 . o n S t a r t ( ) ; 
 	 	 } 
 	 	 v o i d   u p d a t e ( c o n s t   f l o a t   &   d t ) 
 	 	 { 
 	 	 	 O b j P h y s i c a l O b j e c t 0 . o n U p d a t e ( d t ) ; 
 	 	 	 O b j P h y s i c a l O b j e c t 1 . o n U p d a t e ( d t ) ; 
 	 	 } 
 	 	 v o i d   r e n d e r ( : : g c : : C a m e r a   &   c a m ) 
 	 	 { 
 	 	 	 c a m . r e n d e r ( O b j P h y s i c a l O b j e c t 0 . o n R e n d e r ( c a m ) ) ; c a m . r e n d e r ( O b j P h y s i c a l O b j e c t 1 . o n R e n d e r ( c a m ) ) ; 
 	 	 } 
 	 	 t e m p l a t e < c l a s s   T > 
 	 	 T   &   g e t O b j e c t ( ) ; 
 	 	 t e m p l a t e < > 
 	 	 R e n d e r a b l e O b j e c t 0   &   g e t O b j e c t < R e n d e r a b l e O b j e c t 0 > ( ) { 
 	 	 	 r e t u r n   O b j P h y s i c a l O b j e c t 0 ; 
 	 	 } 
 	 	 t e m p l a t e < > 
 	 	 R e n d e r a b l e O b j e c t 1   &   g e t O b j e c t < R e n d e r a b l e O b j e c t 1 > ( ) { 
 	 	 	 r e t u r n   O b j P h y s i c a l O b j e c t 1 ; 
 	 	 } 
 	 } ; 
 