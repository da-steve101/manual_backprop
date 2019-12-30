
#include <random>
#include <vector>
#include <iostream>
#include "layer.h"

namespace layers {
  
  float Layer::random_number( void ) {
    return distribution(generator);    
  };

  Dense::Dense ( int inputs, int outputs ) {
    // create random weights
    layers::Dense::weights.resize(inputs);
    for(auto i = weights.begin(); i != weights.end(); ++i) {
      i->resize(outputs);
      // initialize all values
      for (auto j = i->begin(); j != i->end(); ++j)
	*j = random_number();
    }
  }

  void Dense::dump ( void ) {
    for (auto i = weights.begin(); i != weights.end(); ++i)
      for (auto j = i->begin(); j != i->end(); ++j)
	std::cout << *j << ", ";
    std::cout << std::endl;
  }

}

