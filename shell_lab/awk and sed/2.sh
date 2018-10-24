#!/bin/bash
 awk '{for ( i=1 ; i <= NF; i++ ) 
      { if ( $i > 75 )
      { print ; break  }
      }
      }' 2.txt
   
