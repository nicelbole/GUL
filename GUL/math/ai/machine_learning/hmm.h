#pragma once
#include <stdlib.h>

struct HMM
{
	int N;
	int tau;
	double* out_p;
	double** trans_p;
	int* out_v;
};

inline struct HMM* allocHMM();
void createHMM(struct HMM*, int, int);
inline void destroyHMM();

inline struct HMM* allocHMM()
{
	struct HMM* hmm = malloc(sizeof(struct HMM));
	hmm->out_p = hmm->trans_p = hmm->out_v = NULL;
	return hmm;
}

inline void destroyHMM(struct HMM* hmm)
{
	free(hmm);
}
