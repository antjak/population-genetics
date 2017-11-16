#ifndef RANDOM_H
#define RANDOM_H

#include <random>
#include <vector>

/*!
  This is a random number class based on standard c++-11 generators
 */
class c11random {
    
public:
/*!
  Initializes the generator \ref rng with the Mersenne twister *mt19937* engine. 
  Must provide mean *m*, standard deviation *sd* and sample size *ns*, 
  set whether to use normal distribution (default uniform) and can provide a seed *s*.
 */
    c11random(double m, double sd, int ns, bool n=false, unsigned long int s=0);
/*!
  Returns a vector of random doubles corresponding to the parameters set in the constructor.
*/
    std::vector<double> generate_numbers();
     
private:
    void uniform( std::vector< double >& );
    void normal( std::vector< double >& );
    std::mt19937 rng;
    double mean, sd;
    int nsample;
    bool normdist;

};

#endif
