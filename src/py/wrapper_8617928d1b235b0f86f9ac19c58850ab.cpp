#include <type_traits>
#include <boost/python.hpp>
#include <clanglite/tool.h>

namespace autowig { template<class T> using HeldType = T*; }

namespace autowig
{
}


void wrapper_8617928d1b235b0f86f9ac19c58850ab()
{

    std::string name_7bbff48d109853e88270b3595c663a99 = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object module_7bbff48d109853e88270b3595c663a99(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(name_7bbff48d109853e88270b3595c663a99.c_str()))));
    boost::python::scope().attr("clang") = module_7bbff48d109853e88270b3595c663a99;
    boost::python::scope scope_7bbff48d109853e88270b3595c663a99 = module_7bbff48d109853e88270b3595c663a99;
    class ::clang::TypeAliasDecl  * (*method_pointer_92dbedf48bba5fb5a49974df597e23b1)(class ::clang::ASTContext  &, unsigned int ) = ::clang::TypeAliasDecl::CreateDeserialized;
    bool  (*method_pointer_ee3ed371cc005e09b71f7f06d6906061)(class ::clang::Decl  const *) = ::clang::TypeAliasDecl::classof;
    bool  (*method_pointer_d0bdaedcda9551f2af9c3451a0281d5c)(enum ::clang::Decl::Kind ) = ::clang::TypeAliasDecl::classofKind;
    class ::clang::TypeAliasTemplateDecl  * (::clang::TypeAliasDecl::*method_pointer_ba1487794b445e2db2a92bba8626071b)() const = &::clang::TypeAliasDecl::getDescribedAliasTemplate;
    void  (::clang::TypeAliasDecl::*method_pointer_51b8bf175bd158989698f48d999df1ae)(class ::clang::TypeAliasTemplateDecl  *) = &::clang::TypeAliasDecl::setDescribedAliasTemplate;
    boost::python::class_< class ::clang::TypeAliasDecl, autowig::HeldType< class ::clang::TypeAliasDecl >, boost::python::bases< class ::clang::TypedefNameDecl >, boost::noncopyable > class_8617928d1b235b0f86f9ac19c58850ab("TypeAliasDecl", "", boost::python::no_init);
    class_8617928d1b235b0f86f9ac19c58850ab.def("create_deserialized", method_pointer_92dbedf48bba5fb5a49974df597e23b1, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof", method_pointer_ee3ed371cc005e09b71f7f06d6906061, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("classof_kind", method_pointer_d0bdaedcda9551f2af9c3451a0281d5c, "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("get_described_alias_template", method_pointer_ba1487794b445e2db2a92bba8626071b, boost::python::return_value_policy< boost::python::reference_existing_object >(), "");
    class_8617928d1b235b0f86f9ac19c58850ab.def("set_described_alias_template", method_pointer_51b8bf175bd158989698f48d999df1ae, "");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof_kind");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("create_deserialized");
    class_8617928d1b235b0f86f9ac19c58850ab.staticmethod("classof");

    if(std::is_class< autowig::HeldType< class ::clang::TypeAliasDecl > >::value)
    {
        boost::python::implicitly_convertible< autowig::HeldType< class ::clang::TypeAliasDecl >, autowig::HeldType< class ::clang::TypedefNameDecl > >();
    }

}