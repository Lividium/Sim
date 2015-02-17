#ifndef Queue04_h
#define Queue04_h

struct QueueException(char* m)
{
  cout << endl;
  cout << "The Queue is " << m << ".";
  cout << endl;
}

class Queue
{
  Queue() // this is my constructor
  {
    //todo fill this in
  }
  ~Queue() // this is my destructor
  {
    // todo build my destructor
  }
  void Enq(int v) // this member function will add a value to the queue
  {
    // Todo throw QueueException
    // Todo increment the value of member "newest" using the Modulo
  }
}


#endif
