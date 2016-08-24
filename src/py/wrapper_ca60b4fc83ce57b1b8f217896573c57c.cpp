#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_ca60b4fc83ce57b1b8f217896573c57c()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    bool  (*method_pointer_6a97f299231756a88dc1f5565f3c546c)(class ::clang::Type  const *) = ::clang::LValueReferenceType::classof;
    class ::clang::QualType  (::clang::LValueReferenceType::*method_pointer_3746ed932fab5e21840c823b5a0827f5)() const = &::clang::LValueReferenceType::desugar;
    bool  (::clang::LValueReferenceType::*method_pointer_429ba38de33655ee86d704c7173dfdbd)() const = &::clang::LValueReferenceType::isSugared;
    boost::python::class_< class ::clang::LValueReferenceType, autowig::HeldType< class ::clang::LValueReferenceType >, boost::python::bases< class ::clang::ReferenceType >, boost::noncopyable > class_ca60b4fc83ce57b1b8f217896573c57c("LValueReferenceType", "", boost::python::no_init);
    class_ca60b4fc83ce57b1b8f217896573c57c.def("classof", method_pointer_6a97f299231756a88dc1f5565f3c546c, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("desugar", method_pointer_3746ed932fab5e21840c823b5a0827f5, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.def("is_sugared", method_pointer_429ba38de33655ee86d704c7173dfdbd, "");
    class_ca60b4fc83ce57b1b8f217896573c57c.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::LValueReferenceType > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::LValueReferenceType >, autowig::HeldType< class ::clang::ReferenceType > >();
    }

}