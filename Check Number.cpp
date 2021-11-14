bool checkNumber(int input[], int size, int x) {
  if (size==0)
  {
      return false;
  }
    if(size==1)
    {
        return (input[0]==x);
    }
    else
    {
        if(input[0]==x)
        {
            return true;
        }
        return checkNumber(input+1,size-1,x);
    }
}
