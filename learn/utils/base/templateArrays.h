#ifndef  templateArrays_H
#define templateArrays_H
namespace cc
{
  template<typename T,int N> class TArrays
  {
    public:
      TArrays() = default;
      TArrays(const TArrays& p)=delete;
      TArrays(const TArrays&& p)=delete;
      TArrays& operator=(const TArrays& a)=delete;
      TArrays& operator=(const TArrays&& a)=delete;
      ~TArrays()
      {
          delete[] t;
      }

      

    private : T t[N];
  };
}
#endif