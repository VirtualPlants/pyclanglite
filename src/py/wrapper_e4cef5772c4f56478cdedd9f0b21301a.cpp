#include "_clanglite.h"


namespace autowig
{
}


void wrapper_e4cef5772c4f56478cdedd9f0b21301a()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_c9bcbd2955f052faa8a205b543e72916)(class ::clang::Type  const *) = ::clang::ElaboratedType::classof;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_c3f47f1524a254c294dbd1808e4966ef)() const = &::clang::ElaboratedType::desugar;
    class ::clang::QualType  (::clang::ElaboratedType::*method_pointer_e040f4f1b3b8526c836444346d9cb998)() const = &::clang::ElaboratedType::getNamedType;
    bool  (::clang::ElaboratedType::*method_pointer_88a2bb989485546ea6a118f3182fd8c1)() const = &::clang::ElaboratedType::isSugared;
    boost::python::class_< class ::clang::ElaboratedType, autowig::HeldType< class ::clang::ElaboratedType >, boost::python::bases< class ::clang::TypeWithKeyword >, boost::noncopyable > class_e4cef5772c4f56478cdedd9f0b21301a("ElaboratedType", "", boost::python::no_init);
    class_e4cef5772c4f56478cdedd9f0b21301a.def("classof", method_pointer_c9bcbd2955f052faa8a205b543e72916, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("desugar", method_pointer_c3f47f1524a254c294dbd1808e4966ef, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("get_named_type", method_pointer_e040f4f1b3b8526c836444346d9cb998, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.def("is_sugared", method_pointer_88a2bb989485546ea6a118f3182fd8c1, "");
    class_e4cef5772c4f56478cdedd9f0b21301a.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::ElaboratedType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::ElaboratedType >, autowig::HeldType< class ::clang::TypeWithKeyword > >();
    }

}