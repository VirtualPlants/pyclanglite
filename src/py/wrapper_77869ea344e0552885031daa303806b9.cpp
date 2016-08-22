#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_77869ea344e0552885031daa303806b9()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_4ed349df60e056d189eb9bf86c90db64)(class ::clang::Type  const *) = ::clang::VariableArrayType::classof;
    bool  (::clang::VariableArrayType::*method_pointer_9cc75bfbbfc55a2f97e7ee6864f8609a)() const = &::clang::VariableArrayType::isSugared;
    boost::python::class_< class ::clang::VariableArrayType, autowig::HeldType< class ::clang::VariableArrayType >, boost::python::bases< class ::clang::ArrayType >, boost::noncopyable > class_77869ea344e0552885031daa303806b9("VariableArrayType", "", boost::python::no_init);
    class_77869ea344e0552885031daa303806b9.def("classof", method_pointer_4ed349df60e056d189eb9bf86c90db64, "");
    class_77869ea344e0552885031daa303806b9.def("is_sugared", method_pointer_9cc75bfbbfc55a2f97e7ee6864f8609a, "");
    class_77869ea344e0552885031daa303806b9.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::VariableArrayType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::VariableArrayType >, autowig::HeldType< class ::clang::ArrayType > >();
    }

}