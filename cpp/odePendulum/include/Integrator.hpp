/*
 * Integrator.hpp
 *
 *  Created on: Jun 15, 2020
 *      Author: sam
 */

#ifndef INCLUDE_INTEGRATOR_HPP_
#define INCLUDE_INTEGRATOR_HPP_
#include <iostream>
#include <boost/numeric/odeint.hpp>

//typedef typename std::vector<double> Vector;

template<typename Vector, typename System>
class Integrator {
    public:
        Integrator();
        virtual ~Integrator();
        virtual double SomeMethod () = 0;  // This method is not implemented in the base class, making it a pure virtual method. Subclasses must implement it
        virtual void integrate(std::vector<Vector> *vec, System* system) = 0;
 };

template <typename Vector, typename System>
Integrator<Vector, System>::Integrator() {

}
template <typename Vector, typename System>
Integrator<Vector, System>::~Integrator() {
  // TODO Auto-generated destructor stub
}
#endif /* INCLUDE_INTEGRATOR_HPP_ */
