
template<typename T>
class Vector
{
//how stl container are design

int cs;
int ms;
T *arr;
public:
     Vector()
     {
          cs=0;
          ms=1;
          arr=new T [ms];
     }

     void push_back(T d)
     {
          if(cs=ms)
          {
               T *oldarr=arr;
               arr=new T[2*ms];
               ms=2*ms;
               for(int i=0;i<cs;i++)
               {
                    arr[i]=oldarr[i];
               }
               delete [] oldarr;
          }
          arr[cs]=d;
          cs++;
     }


     void pop_back()
     {

          cs--;
     }
     T front()
     {

          return arr[0];
     }

     T back() const
     {

          return arr[cs-1];

     }
     bool empty() const
     {

          return cs==0;
     }

     int capacity() const
     {

          return ms;
     }
     T at(const int i)
     {

          return arr[i];
     }

     // operator overloading

     T operator[](const int i)
     {

          return arr[i];

               }
     int size() const{
               return cs;
               }
};
