#include <iostream>

// This is the main function (in case you haven't noticed).
int main (int argc, char* argv[])
{
  using namespace std;

  if (argc < 2)
  {
    cerr << "error: missing name to greet" << endl;
    return 1;
  }

  cout << "Hello, " << argv[1] << '!' << endl;
}
