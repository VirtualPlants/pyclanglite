#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_cbd3f716be3f50e88e8e811688f1e3aa()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_8ac372b00ea158f68ca4bc36f5e022bd)(class ::clang::Type  const *) = ::clang::AdjustedType::classof;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_3504e3d88b75569396822b7587e192e4)() const = &::clang::AdjustedType::desugar;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_472b1172d34b59c8ba633cea8e908e5a)() const = &::clang::AdjustedType::getAdjustedType;
    class ::clang::QualType  (::clang::AdjustedType::*method_pointer_1695421194905b1d897b097c6f023d1f)() const = &::clang::AdjustedType::getOriginalType;
    bool  (::clang::AdjustedType::*method_pointer_401584fc337e56618b30a07a8da32231)() const = &::clang::AdjustedType::isSugared;
    boost::python::class_< class ::clang::AdjustedType, autowig::HeldType< class ::clang::AdjustedType >, boost::python::bases< class ::clang::Type >, boost::noncopyable > class_cbd3f716be3f50e88e8e811688f1e3aa("AdjustedType", "", boost::python::no_init);
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("classof", method_pointer_8ac372b00ea158f68ca4bc36f5e022bd, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("desugar", method_pointer_3504e3d88b75569396822b7587e192e4, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_adjusted_type", method_pointer_472b1172d34b59c8ba633cea8e908e5a, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("get_original_type", method_pointer_1695421194905b1d897b097c6f023d1f, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.def("is_sugared", method_pointer_401584fc337e56618b30a07a8da32231, "");
    class_cbd3f716be3f50e88e8e811688f1e3aa.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::AdjustedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::AdjustedType >, autowig::HeldType< class ::clang::Type > >();
    }

}