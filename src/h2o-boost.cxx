/* libh2oboost -- steam & water properties
 * (c) 2012 Michał Górny
 * Released under the terms of the 2-clause BSD license
 */

#ifdef HAVE_CONFIG_H
#	include "config.h"
#endif

#include "h2o-boost"

using namespace h2o::boost;

H2O::H2O(units::MPa p, units::K T)
	: ::h2o::H2O(p.value(), T.value())
{
}

units::MPa H2O::p() const
{
	units::MPa p(::h2o::H2O::p() * 1E6 * ::boost::units::si::pascals);

	return p;
}

units::K H2O::T() const
{
	units::K T(::h2o::H2O::T() * ::boost::units::si::kelvins);

	return T;
}
