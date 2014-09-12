/**********************************************************************************/
/*                  Pika: Phase field snow micro-structure model                  */
/*                                                                                */
/*                     (C) 2014 Battelle Energy Alliance, LLC                     */
/*                              ALL RIGHTS RESERVED                               */
/*                                                                                */
/*                   Prepared by Battelle Energy Alliance, LLC                    */
/*                      Under Contract No. DE-AC07-05ID14517                      */
/*                      With the U. S. Department of Energy                       */
/**********************************************************************************/

#ifndef SHARPINTERFACECHECKVAPOR_H
#define SHARPINTERFACECHECKVAPOR_H

// MOOSE includes
#include "AuxKernel.h"

// Forward declarations
class SharpInterfaceCheckVapor;

template<>
InputParameters validParams<SharpInterfaceCheckVapor>();

class SharpInterfaceCheckVapor : public AuxKernel
{
  public:

  /**
   * Class constructor
   * @param name
   * @param parameters
   */
   SharpInterfaceCheckVapor(const std::string & name, InputParameters parameters);

   protected:
     virtual Real computeValue();

   private:
    const MaterialProperty<Real> & _w;
    const MaterialProperty<Real> & _dv;
    const MaterialProperty<Real> & _beta;
};
#endif //SHARPINTERFACECHECKVAPOR_H
