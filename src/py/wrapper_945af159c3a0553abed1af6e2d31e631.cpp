#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_945af159c3a0553abed1af6e2d31e631()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_06f15fb5f93b54768618140301471d5b)(class ::clang::Decl  const *) = ::clang::TypeDecl::classof;
    bool  (*method_pointer_2a10a77c099258f3b5380c8bdb5d9b7d)(enum ::clang::Decl::Kind ) = ::clang::TypeDecl::classofKind;
    class ::clang::SourceLocation  (::clang::TypeDecl::*method_pointer_acf2242d0bca5246b9e1c91effc7563c)() const = &::clang::TypeDecl::getLocStart;
    class ::clang::Type  const * (::clang::TypeDecl::*method_pointer_6bb5e244e6d75771a897479d795e84f6)() const = &::clang::TypeDecl::getTypeForDecl;
    void  (::clang::TypeDecl::*method_pointer_a8096f018e59580b82601e40df73b02b)(class ::clang::SourceLocation ) = &::clang::TypeDecl::setLocStart;
    void  (::clang::TypeDecl::*method_pointer_ba17aa1545d05f59b69565e505cbb145)(class ::clang::Type  const *) = &::clang::TypeDecl::setTypeForDecl;
    boost::python::class_< class ::clang::TypeDecl, autowig::HeldType< class ::clang::TypeDecl >, boost::python::bases< class ::clang::NamedDecl >, boost::noncopyable > class_945af159c3a0553abed1af6e2d31e631("TypeDecl", "", boost::python::no_init);
    class_945af159c3a0553abed1af6e2d31e631.def("classof", method_pointer_06f15fb5f93b54768618140301471d5b, "");
    class_945af159c3a0553abed1af6e2d31e631.def("classof_kind", method_pointer_2a10a77c099258f3b5380c8bdb5d9b7d, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_loc_start", method_pointer_acf2242d0bca5246b9e1c91effc7563c, "");
    class_945af159c3a0553abed1af6e2d31e631.def("get_type_for_decl", method_pointer_6bb5e244e6d75771a897479d795e84f6, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_loc_start", method_pointer_a8096f018e59580b82601e40df73b02b, "");
    class_945af159c3a0553abed1af6e2d31e631.def("set_type_for_decl", method_pointer_ba17aa1545d05f59b69565e505cbb145, "");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof_kind");
    class_945af159c3a0553abed1af6e2d31e631.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeDecl >, autowig::HeldType< class ::clang::NamedDecl > >();
    }

}