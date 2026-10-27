   
 
 //hamming distance between two numbers is equal to the no of 1's in the xor of two numbers 
 
 
 int hammingDistance(int x, int y) {
      x ^= y;
      y = 0;
      while(x)
      {
          y+= x&1;
          x>>= 1;
      }
      return y;
 }
