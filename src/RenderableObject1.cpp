# i n c l u d e   " S c e n e 0 . h " 
 # i n c l u d e   " R e n d e r a b l e O b j e c t 1 . h " 
 R e n d e r a b l e O b j e c t 1 : : R e n d e r a b l e O b j e c t 1 ( S c e n e 0   &   s c ) : 
 p o s ( : : g c : : V e c 2 ( 1 0 0 ,   5 0 0 ) ) ,   s c e n e ( s c )   ,   s p r i t e ( " r e s o u r c e s \ \ n \ \ 2 . j p g " ) 
 { 
 } 
 R e n d e r a b l e O b j e c t 1 : : ~ R e n d e r a b l e O b j e c t 1 ( ) { 
 } 
 v o i d   R e n d e r a b l e O b j e c t 1 : : o n S t a r t ( ) { 
 	 s c e n e . g e t O b j e c t < R e n d e r a b l e O b j e c t 0 > ( ) . o n M o v e E v e n t . a d d ( * t h i s ,   & t h i s _ t : : k e k ) ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 1 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 } 
 c o n s t   s f : : S p r i t e   &   R e n d e r a b l e O b j e c t 1 : : o n R e n d e r ( : : g c : : C a m e r a   &   c a m ) { 
 	 s p r i t e . g e t S p r i t e ( ) . s e t P o s i t i o n ( p o s . x ,   p o s . y ) ; 
 	 r e t u r n   s p r i t e . g e t S p r i t e ( ) ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 1 : : k e k ( R e n d e r a b l e O b j e c t 0   &   a ) { i f ( a . p o s . x   >   p o s . x ) 
 	 s t d : : c o u t   < <   " r i g h t "   < <   s t d : : e n d l ; 
 	 e l s e 
 	 s t d : : c o u t   < <   " l e f t "   < <   s t d : : e n d l ; 
 } 
 