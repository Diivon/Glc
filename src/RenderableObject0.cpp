# i n c l u d e   " S c e n e 0 . h " 
 # i n c l u d e   " R e n d e r a b l e O b j e c t 0 . h " 
 R e n d e r a b l e O b j e c t 0 : : R e n d e r a b l e O b j e c t 0 ( S c e n e 0   &   s c ) : 
 p o s ( : : g c : : V e c 2 ( 1 0 0 ,   1 0 0 ) ) ,   s c e n e ( s c )   ,   s o u n d ( " r e s o u r c e s \ \ k e k . w a v " ) 
 ,   a n i m a t i o n ( t h i s ) 
 { 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 1 . j p g " ,   5 0 0 . 0 0 f ) ; 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 2 . j p g " ,   5 0 0 . 0 0 f ) ; 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 3 . j p g " ,   5 0 0 . 0 0 f ) ; 
 } 
 R e n d e r a b l e O b j e c t 0 : : ~ R e n d e r a b l e O b j e c t 0 ( ) { 
 } 
 v o i d   R e n d e r a b l e O b j e c t 0 : : o n S t a r t ( ) { 
 	 e l a p s e d   =   0 . 0 f ; 
 	 a n i m a t i o n . s t a r t ( ) ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 0 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 	 e l a p s e d   + =   d t   /   2 0 0 0 0 ; 
 	 p o s . x   + =   ( c o s ( e l a p s e d   *   1 8 0   /   3 . 1 4 1 5 2 7 )   *   1 ) ; 
 	 p o s . y   + =   ( s i n ( e l a p s e d   *   1 8 0   /   3 . 1 4 1 5 2 7 )   *   1 ) ; 
 	 o n M o v e E v e n t . e m i t ( * t h i s ) ; 
 	 a n i m a t i o n . u p d a t e ( d t ) ; 
 	 a n i m a t i o n . g e t C u r r e n t S p r i t e F r a m e ( ) . g e t S p r i t e ( ) . s e t P o s i t i o n ( p o s ) ; 
 } 
 c o n s t   s f : : S p r i t e   &   R e n d e r a b l e O b j e c t 0 : : o n R e n d e r ( : : g c : : C a m e r a   &   c a m ) { 
 	 r e t u r n   a n i m a t i o n . g e t C u r r e n t S p r i t e F r a m e ( ) . g e t S p r i t e ( ) ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 0 : : o n F e n c e D i e E v e n t ( ) { s t d : : c o u t   < <   " F E N C E   D I E ,   M Y   L O R D "   < <   s t d : : e n d l ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 0 : : o n A n i m a t i o n E n d ( a n i m a t i o n _ t   &   a ) { s o u n d . p l a y ( ) ; 
 } 
 v o i d   R e n d e r a b l e O b j e c t 0 : : o n A n i m a t i o n N e x t F r a m e ( a n i m a t i o n _ t   &   a ) { } 
 