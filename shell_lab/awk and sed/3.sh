#!/bin/sh
awk '{ for ( i=0 ; i < NF ; i++ )
       {
       printf ( $(NF-i) )
       printf (" ")
       }
       printf("\n")
     }' 3.txt
