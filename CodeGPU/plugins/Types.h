#ifndef _TYPES_CUH_
#define _TYPES_CUH_

#include <vector>

typedef int LENGTHSIZE;

enum FlagsGPU {kGood=0, kPoorReco, kOutOfTime, kFaultyHardware, kNoisy, kPoorCalib, kSaturated, kDead, kKilled, kWeird, kDiWerid, kUnknown};

class HGCConstantVectorData {
 public:
  std::vector<double> fCPerMIP;
  std::vector<double> cce;
  std::vector<double> noise_fC;
  std::vector<double> rcorr;
  std::vector<double> weights;
  std::vector<int> waferTypeL;
};

class HGCeeUncalibratedRecHitConstantData {
 public:
  double hgcEE_keV2DIGI_;
  double hgceeUncalib2GeV_;
  double *hgcEE_fCPerMIP_;  
  double *hgcEE_cce_;
  double *hgcEE_noise_fC_;
  double *rcorr_;
  double *weights_;
  int *waferTypeL_;
  float xmin_;
  float xmax_;
  float aterm_;
  float cterm_;
  uint32_t rangeMatch_;
  uint32_t rangeMask_;
  bool hgcEE_isSiFE_;
  LENGTHSIZE nbytes;
  LENGTHSIZE ndelem;
  LENGTHSIZE nfelem;
  LENGTHSIZE nuelem;
  LENGTHSIZE nielem;
  LENGTHSIZE nbelem;
  LENGTHSIZE s_hgcEE_fCPerMIP_;
  LENGTHSIZE s_hgcEE_cce_;
  LENGTHSIZE s_hgcEE_noise_fC_;
  LENGTHSIZE s_rcorr_;
  LENGTHSIZE s_weights_;
  LENGTHSIZE s_waferTypeL_;
};

class HGChefUncalibratedRecHitConstantData {
 public:
  double hgcHEF_keV2DIGI_;
  double hgchefUncalib2GeV_;
  double *hgcHEF_fCPerMIP_;
  double *hgcHEF_cce_;
  double *hgcHEF_noise_fC_;
  double *rcorr_;
  double *weights_;
  int *waferTypeL_;
  float xmin_;
  float xmax_;
  float aterm_;
  float cterm_;
  uint32_t rangeMatch_;
  uint32_t rangeMask_;
  uint32_t fhOffset_;
  bool hgcHEF_isSiFE_;
  LENGTHSIZE nbytes;
  LENGTHSIZE ndelem;
  LENGTHSIZE nfelem;
  LENGTHSIZE nuelem;
  LENGTHSIZE nielem;
  LENGTHSIZE nbelem;
  LENGTHSIZE s_hgcHEF_fCPerMIP_;
  LENGTHSIZE s_hgcHEF_cce_;
  LENGTHSIZE s_hgcHEF_noise_fC_;
  LENGTHSIZE s_rcorr_;
  LENGTHSIZE s_weights_;
  LENGTHSIZE s_waferTypeL_;
};

class HGChebUncalibratedRecHitConstantData {
 public:
  double hgcHEB_keV2DIGI_;
  double hgchebUncalib2GeV_;
  double hgcHEB_noise_MIP_;
  double *weights_;
  uint32_t rangeMatch_;
  uint32_t rangeMask_;
  uint32_t fhOffset_;
  bool hgcHEB_isSiFE_;
  LENGTHSIZE nbytes;
  LENGTHSIZE ndelem;
  LENGTHSIZE nfelem;
  LENGTHSIZE nuelem;
  LENGTHSIZE nielem;
  LENGTHSIZE nbelem;
  LENGTHSIZE s_weights_;
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
  LENGTHSIZE nbytes;
};

class HGCRecHitSoA {
 public:
  float *energy;
  float *time;
  float *timeError;
  uint32_t *id;
  uint32_t *flagBits;
  uint8_t *son;
  LENGTHSIZE nbytes;
};

#endif /* _TYPES_H_ */
