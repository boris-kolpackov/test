#include <iostream>

int main (int argc, char* argv[])
{
#ifdef _WIN32
  using namespace std;
#endif

  if (argc < 2)
  {
    cerr << "error: missing name to greet" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
}
