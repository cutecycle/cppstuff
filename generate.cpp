#include <iostream>
#include <vector>
#include <algorithm> 

int main() {
    auto x = rand() % 15;
  std::vector<int> thingy(30);
  std::generate(thingy.begin(), thingy.end(), [ n = 0 ] () mutable {
    return rand() % 15; 
  });
  for(auto i: thingy) {
    std::cout << thingy[i] << "\n";
    }
    return 0;
}
