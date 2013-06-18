/**********************************************************************
 *  Copyright (c) 2008-2013, Alliance for Sustainable Energy.
 *  All rights reserved.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 **********************************************************************/

#ifndef MODEL_GROUNDHEATEXCHANGERVERTICAL_IMPL_HPP
#define MODEL_GROUNDHEATEXCHANGERVERTICAL_IMPL_HPP

#include <model/ModelAPI.hpp>
#include <model/StraightComponent_Impl.hpp>

namespace openstudio {
namespace model {
namespace detail {

  /** GroundHeatExchangerVertical_Impl is a StraightComponent_Impl that is the implementation class for GroundHeatExchangerVertical.*/
  class MODEL_API GroundHeatExchangerVertical_Impl : public StraightComponent_Impl {
    Q_OBJECT;

    Q_PROPERTY(boost::optional<double> maximumFlowRate READ maximumFlowRate WRITE setMaximumFlowRate RESET resetMaximumFlowRate);

    Q_PROPERTY(boost::optional<int> numberofBoreHoles READ numberofBoreHoles WRITE setNumberofBoreHoles RESET resetNumberofBoreHoles);

    Q_PROPERTY(boost::optional<double> boreHoleLength READ boreHoleLength WRITE setBoreHoleLength RESET resetBoreHoleLength);

    Q_PROPERTY(boost::optional<double> boreHoleRadius READ boreHoleRadius WRITE setBoreHoleRadius RESET resetBoreHoleRadius);

    Q_PROPERTY(boost::optional<double> groundThermalConductivity READ groundThermalConductivity WRITE setGroundThermalConductivity RESET resetGroundThermalConductivity);

    Q_PROPERTY(boost::optional<double> groundThermalHeatCapacity READ groundThermalHeatCapacity WRITE setGroundThermalHeatCapacity RESET resetGroundThermalHeatCapacity);

    Q_PROPERTY(boost::optional<double> groundTemperature READ groundTemperature WRITE setGroundTemperature RESET resetGroundTemperature);

    Q_PROPERTY(boost::optional<double> designFlowRate READ designFlowRate WRITE setDesignFlowRate RESET resetDesignFlowRate);

    Q_PROPERTY(boost::optional<double> groutThermalConductivity READ groutThermalConductivity WRITE setGroutThermalConductivity RESET resetGroutThermalConductivity);

    Q_PROPERTY(boost::optional<double> pipeThermalConductivity READ pipeThermalConductivity WRITE setPipeThermalConductivity RESET resetPipeThermalConductivity);

    Q_PROPERTY(boost::optional<double> pipeOutDiameter READ pipeOutDiameter WRITE setPipeOutDiameter RESET resetPipeOutDiameter);

    Q_PROPERTY(boost::optional<double> uTubeDistance READ uTubeDistance WRITE setUTubeDistance RESET resetUTubeDistance);

    Q_PROPERTY(boost::optional<double> pipeThickness READ pipeThickness WRITE setPipeThickness RESET resetPipeThickness);

    Q_PROPERTY(boost::optional<double> maximumLengthofSimulation READ maximumLengthofSimulation WRITE setMaximumLengthofSimulation RESET resetMaximumLengthofSimulation);

    Q_PROPERTY(double gFunctionReferenceRatio READ gFunctionReferenceRatio WRITE setGFunctionReferenceRatio RESET resetGFunctionReferenceRatio);
    Q_PROPERTY(bool isGFunctionReferenceRatioDefaulted READ isGFunctionReferenceRatioDefaulted);

    Q_PROPERTY(boost::optional<int> numberofDataPairsoftheGFunction READ numberofDataPairsoftheGFunction WRITE setNumberofDataPairsoftheGFunction RESET resetNumberofDataPairsoftheGFunction);

    // TODO: Add relationships for objects related to this one, but not pointed to by the underlying data.
    //       Such relationships can be generated by the GenerateRelationships.rb script.
//    Q_PROPERTY(boost::optional<openstudio::model::ModelObject> inletNode READ inletNodeAsModelObject WRITE setInletNodeAsModelObject);
//    Q_PROPERTY(boost::optional<openstudio::model::ModelObject> outletNode READ outletNodeAsModelObject WRITE setOutletNodeAsModelObject);
   public:
    /** @name Constructors and Destructors */
    //@{

    GroundHeatExchangerVertical_Impl(const IdfObject& idfObject,
                                     Model_Impl* model,
                                     bool keepHandle);

    GroundHeatExchangerVertical_Impl(const openstudio::detail::WorkspaceObject_Impl& other,
                                     Model_Impl* model,
                                     bool keepHandle);

    GroundHeatExchangerVertical_Impl(const GroundHeatExchangerVertical_Impl& other,
                                     Model_Impl* model,
                                     bool keepHandle);

    virtual ~GroundHeatExchangerVertical_Impl() {}

    //@}
    /** @name Virtual Methods */
    //@{

    virtual const std::vector<std::string>& outputVariableNames() const;

    virtual IddObjectType iddObjectType() const;

    virtual ModelObject clone(Model model) const;
    
    virtual unsigned inletPort();

    virtual unsigned outletPort();


    //@}
    /** @name Getters */
    //@{

    boost::optional<double> maximumFlowRate() const;

    boost::optional<int> numberofBoreHoles() const;

    boost::optional<double> boreHoleLength() const;

    boost::optional<double> boreHoleRadius() const;

    boost::optional<double> groundThermalConductivity() const;

    boost::optional<double> groundThermalHeatCapacity() const;

    boost::optional<double> groundTemperature() const;

    boost::optional<double> designFlowRate() const;

    boost::optional<double> groutThermalConductivity() const;

    boost::optional<double> pipeThermalConductivity() const;

    boost::optional<double> pipeOutDiameter() const;

    boost::optional<double> uTubeDistance() const;

    boost::optional<double> pipeThickness() const;

    boost::optional<double> maximumLengthofSimulation() const;

    double gFunctionReferenceRatio() const;

    bool isGFunctionReferenceRatioDefaulted() const;

    boost::optional<int> numberofDataPairsoftheGFunction() const;

    // TODO: Handle this object's extensible fields.

    //@}
    /** @name Setters */
    //@{

    bool setMaximumFlowRate(boost::optional<double> maximumFlowRate);

    void resetMaximumFlowRate();

    bool setNumberofBoreHoles(boost::optional<int> numberofBoreHoles);

    void resetNumberofBoreHoles();

    bool setBoreHoleLength(boost::optional<double> boreHoleLength);

    void resetBoreHoleLength();

    bool setBoreHoleRadius(boost::optional<double> boreHoleRadius);

    void resetBoreHoleRadius();

    bool setGroundThermalConductivity(boost::optional<double> groundThermalConductivity);

    void resetGroundThermalConductivity();

    bool setGroundThermalHeatCapacity(boost::optional<double> groundThermalHeatCapacity);

    void resetGroundThermalHeatCapacity();

    bool setGroundTemperature(boost::optional<double> groundTemperature);

    void resetGroundTemperature();

    bool setDesignFlowRate(boost::optional<double> designFlowRate);

    void resetDesignFlowRate();

    bool setGroutThermalConductivity(boost::optional<double> groutThermalConductivity);

    void resetGroutThermalConductivity();

    bool setPipeThermalConductivity(boost::optional<double> pipeThermalConductivity);

    void resetPipeThermalConductivity();

    bool setPipeOutDiameter(boost::optional<double> pipeOutDiameter);

    void resetPipeOutDiameter();

    bool setUTubeDistance(boost::optional<double> uTubeDistance);

    void resetUTubeDistance();

    bool setPipeThickness(boost::optional<double> pipeThickness);

    void resetPipeThickness();

    bool setMaximumLengthofSimulation(boost::optional<double> maximumLengthofSimulation);

    void resetMaximumLengthofSimulation();

    bool setGFunctionReferenceRatio(double gFunctionReferenceRatio);

    void resetGFunctionReferenceRatio();

    bool setNumberofDataPairsoftheGFunction(boost::optional<int> numberofDataPairsoftheGFunction);

    void resetNumberofDataPairsoftheGFunction();

    bool addToNode(Node & node);

    // TODO: Handle this object's extensible fields.

    //@}
    /** @name Other */
    //@{

    //@}
   protected:
   private:
    REGISTER_LOGGER("openstudio.model.GroundHeatExchangerVertical");

    // TODO: Check the return types of these methods.
    // Optional getters for use by methods like children() so can remove() if the constructor fails.
    // There are other ways for the public versions of these getters to fail--perhaps all required
    // objects should be returned as boost::optionals

  };

} // detail

} // model
} // openstudio

#endif // MODEL_GROUNDHEATEXCHANGERVERTICAL_IMPL_HPP

