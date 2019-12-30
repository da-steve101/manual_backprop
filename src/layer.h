#ifndef __LAYER_H__
#define __LAYER_H__

#include <random>
#include <vector>
#include <iostream>

namespace layers {

class Layer {
 public:
  float random_number( void );
 private:
  std::random_device r;
  std::default_random_engine generator = std::default_random_engine(r());
  std::normal_distribution<float> distribution = std::normal_distribution<float>(0.0,1.0);
};

class Dense : public Layer {
 public:
  Dense ( int inputs, int outputs );
  void dump ( void );
 private:
  std::vector<std::vector<float>> weights;
};

}

#endif // __LAYER_H__
