/* libh2oboost -- steam & water properties
 * (c) 2012 Michał Górny
 * Released under the terms of the 2-clause BSD license
 */

#ifdef HAVE_CONFIG_H
#	include "config.h"
#endif

#include "h2o-boost"

using namespace h2o::boost;

H2O::H2O(quantity::MPa p, quantity::K T)
	: ::h2o::H2O(p.value(), T.value())
{
}

quantity::MPa H2O::p() const
{
	quantity::MPa p(::h2o::H2O::p() * 1E6 * ::boost::units::si::pascals);

	return p;
}

quantity::K H2O::T() const
{
	quantity::K T(::h2o::H2O::T() * ::boost::units::si::kelvins);

	return T;
}

quantity::dimless H2O::x() const
{
	return ::h2o::H2O::x();
}

quantity::kg_m3 H2O::rho() const
{
	quantity::kg_m3 rho(::h2o::H2O::rho()
			* ::boost::units::si::kilogrammes_per_cubic_metre);

	return rho;
}
