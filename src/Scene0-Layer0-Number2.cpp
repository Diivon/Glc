# i n c l u d e   " S c e n e 0 . h " 
 N u m b e r 2 : : N u m b e r 2 ( S c e n e 0   &   s c ,   L a y e r 0   &   l r ) : 
 s e l f ( * t h i s ) ,   p o s ( 5 0 ,   1 0 0 ) ,   s c e n e ( s c ) ,   l a y e r ( l r ) 
 ,   c o l l i d e r ( : : g c : : V e c 2 ( 5 0 ,     1 0 0 ) ,     : : g c : : V e c 2 ( 5 0 ,     5 0 ) ) 
 ,   a n i m a t i o n ( ) 
 { 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 1 . j p g " ,   5 0 0 . 0 0 f ) ; 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 2 . j p g " ,   5 0 0 . 0 0 f ) ; 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 3 . j p g " ,   5 0 0 . 0 0 f ) ; 
 	 a n i m a t i o n . e m p l a c e F r a m e ( " r e s o u r c e s \ \ n \ \ 4 . j p g " ,   5 0 0 . 0 0 f ) ; 
 } 
 N u m b e r 2 : : ~ N u m b e r 2 ( ) { 
 } 
 v o i d   N u m b e r 2 : : o n S t a r t ( ) { 
 	 l a y e r . g e t O b j e c t < N u m b e r 1 > ( ) . o n M o v e E v e n t . s i g n ( * t h i s ,   & t h i s _ t : : k e k ) ; 
 	 _ i s R i g h t   =   t r u e ; 
 	 _ c o u n t   =   0 ; 
 	 a n i m a t i o n . s t a r t ( ) ; 
 } 
 v o i d   N u m b e r 2 : : o n U p d a t e ( c o n s t   f l o a t   &   d t ) { 
 	 i f   ( _ c o u n t   = =   2 ) 
 	 l a y e r . i s D o n e   =   t r u e ; 
 	 c o l l i d e r . m o v e T o ( p o s ) ; 
 	 a n i m a t i o n . u p d a t e ( d t ) ; 
 } 
 c o n s t   : : g c : : S p r i t e   N u m b e r 2 : : g e t C u r r e n t S p r i t e ( )   c o n s t { 
 	 r e t u r n   a n i m a t i o n . g e t C u r r e n t S p r i t e ( ) ; 
 } 
 : : g c : : S p r i t e   N u m b e r 2 : : g e t C u r r e n t S p r i t e ( ) { 
 	 r e t u r n   a n i m a t i o n . g e t C u r r e n t S p r i t e ( ) ; 
 } 
 v o i d   N u m b e r 2 : : k e k ( N u m b e r 1   &   a ) { i f ( a . p o s . x   >   p o s . x ) 
 	 { 
 	 	 i f   ( ! _ i s R i g h t ) 
 	 	 { 
 	 	 	 _ i s R i g h t   =   t r u e ; 
 	 	 	 + + _ c o u n t ; 
 	 	 } 
 	 } 
 	 e l s e 
 	 i f   ( _ i s R i g h t ) 
 	 { 
 	 	 _ i s R i g h t   =   f a l s e ; 
 	 	 + + _ c o u n t ; 
 	 } 
 } 
 