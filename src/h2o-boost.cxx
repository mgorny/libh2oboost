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
	return quantity::MPa(::h2o::H2O::p() * unit::MPa);
}

quantity::K H2O::T() const
{
	return quantity::K(::h2o::H2O::T() * unit::K);
}

quantity::dimless H2O::x() const
{
	return ::h2o::H2O::x();
}

quantity::kg_m3 H2O::rho() const
{
	return quantity::kg_m3(::h2o::H2O::rho() * unit::kg_m3);
}

quantity::m3_kg H2O::v() const
{
	return quantity::m3_kg(::h2o::H2O::v() * unit::m3_kg);
}

quantity::kJ_kg H2O::u() const
{
	return quantity::kJ_kg(::h2o::H2O::u() * unit::kJ_kg);
}

quantity::kJ_kg H2O::h() const
{
	return quantity::kJ_kg(::h2o::H2O::h() * unit::kJ_kg);
}

quantity::kJ_kgK H2O::s() const
{
	return quantity::kJ_kgK(::h2o::H2O::s() * unit::kJ_kgK);
}
