#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ec9ca573ec45549fa9da5c3f72552e8f()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_fe82a614c42a56e8b54d7e96f37e8553)(class ::clang::Type  const *) = ::clang::RecordType::classof;
    class ::clang::QualType  (::clang::RecordType::*method_pointer_e8c681e1f10a5a629ef78154d6eef6c4)() const = &::clang::RecordType::desugar;
    class ::clang::RecordDecl  * (::clang::RecordType::*method_pointer_e1c57a4c4ea85ddb9ea3de2f45bfdf5c)() const = &::clang::RecordType::getDecl;
    bool  (::clang::RecordType::*method_pointer_2229e147ea4a50eba9aa5668b85823b5)() const = &::clang::RecordType::hasConstFields;
    bool  (::clang::RecordType::*method_pointer_3cb04fe3faac57d4aa2627b59bd29424)() const = &::clang::RecordType::isSugared;
    boost::python::class_< class ::clang::RecordType, autowig::HeldType< class ::clang::RecordType >, boost::python::bases< class ::clang::TagType >, boost::noncopyable > class_ec9ca573ec45549fa9da5c3f72552e8f("RecordType", "", boost::python::no_init);
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("classof", method_pointer_fe82a614c42a56e8b54d7e96f37e8553, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("desugar", method_pointer_e8c681e1f10a5a629ef78154d6eef6c4, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("get_decl", method_pointer_e1c57a4c4ea85ddb9ea3de2f45bfdf5c, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("has_const_fields", method_pointer_2229e147ea4a50eba9aa5668b85823b5, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.def("is_sugared", method_pointer_3cb04fe3faac57d4aa2627b59bd29424, "");
    class_ec9ca573ec45549fa9da5c3f72552e8f.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::RecordType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::RecordType >, autowig::HeldType< class ::clang::TagType > >();
    }

}