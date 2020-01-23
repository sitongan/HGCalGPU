#ifndef _TYPES_CUH_
#define _TYPES_CUH_

#include <vector>

class HeterogeneousProducerConstantData {
 public:
  float a;
  std::vector<double> b;
};

class HGCUncalibratedRecHitSoA {
public:
  float *amplitude;
  float *pedestal;
  float *jitter;
  float *chi2;
  float *OOTamplitude;
  float *OOTchi2;
  uint32_t *flags;
  uint32_t *aux;
  uint32_t *id;
  size_t nbytes;
};

class HGCRecHitSoA {
 public:
  float *energy;
  float *time;
  uint32_t *id;
  uint32_t *flags;
  uint32_t *flagBits;
  size_t nbytes;
};

#endif /* _TYPES_H_ */
