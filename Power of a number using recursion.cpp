int power(int x, int n) {
  
    if (n==0) // base case
    { return 1;
    }
    else if (n==1)
    {  return x ; // kind of base case
    }
    else
    {return x*power(x,n-1); // recursive call
    }
}
