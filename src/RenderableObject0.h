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
 c l a s s   R e n d e r a b l e O b j e c t 0 { 
 	 f r i e n d   c l a s s   : : g c : : C a m e r a ; 
 	 p u b l i c : 
 	 t y p e d e f   R e n d e r a b l e O b j e c t 0   t h i s _ t ; 
 	 S c e n e 0   &   s c e n e ; 
 	 : : g c : : V e c 2   p o s ; 
 	 : : g c : : S o u n d   s o u n d ; 
 	 ; 
 	 f l o a t   e l a p s e d ; ; 
 	 : : g c : : C l a s s E v e n t < t h i s _ t   & >   o n M o v e E v e n t ; ; 
 	 t y p e d e f   : : g c : : A n i m a t i o n < R e n d e r a b l e O b j e c t 0 ,   : : g c : : A n i m a t i o n T y p e : : C y c l i c >   a n i m a t i o n _ t ; 
 	 a n i m a t i o n _ t   a n i m a t i o n ; 
 	 ; 
 	 / / p u b l i c : 
 	 R e n d e r a b l e O b j e c t 0 ( S c e n e 0   &   s c ) ; 
 	 ~ R e n d e r a b l e O b j e c t 0 ( ) ; 
 	 v o i d   o n S t a r t ( ) ; 
 	 v o i d   o n U p d a t e ( c o n s t   f l o a t   &   d t ) ; 
 	 c o n s t   s f : : S p r i t e   &   o n R e n d e r ( : : g c : : C a m e r a   &   c a m ) ; 
 	 ; 
 	 v o i d   o n F e n c e D i e E v e n t ( ) ; 
 	 v o i d   o n A n i m a t i o n E n d ( a n i m a t i o n _ t   &   a ) ; 
 	 v o i d   o n A n i m a t i o n N e x t F r a m e ( a n i m a t i o n _ t   &   a ) ; 
 	 p r i v a t e : 
 	 R e n d e r a b l e O b j e c t 0 ( c o n s t   R e n d e r a b l e O b j e c t 0   & )   =   d e l e t e ; 
 	 R e n d e r a b l e O b j e c t 0 ( R e n d e r a b l e O b j e c t 0   & & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( c o n s t   R e n d e r a b l e O b j e c t 0   & )   =   d e l e t e ; 
 	 v o i d   o p e r a t o r   =   ( R e n d e r a b l e O b j e c t 0   & & )   =   d e l e t e ; 
 } ; 
 