/*================================================================================
  code generated by: java2cpp
  class: android.view.SubMenu
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SUBMENU_HPP_DECL
#define J2CPP_ANDROID_VIEW_SUBMENU_HPP_DECL


namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class MenuItem; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }


#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/MenuItem.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace view {

	class SubMenu;
	class SubMenu
		: public cpp_object<SubMenu>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)

		SubMenu(jobject jobj)
		: cpp_object<SubMenu>(jobj)
		{
		}

		local_ref< android::view::SubMenu > setHeaderTitle(cpp_int const&);
		local_ref< android::view::SubMenu > setHeaderTitle(local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::SubMenu > setHeaderIcon(cpp_int const&);
		local_ref< android::view::SubMenu > setHeaderIcon(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::view::SubMenu > setHeaderView(local_ref< android::view::View > const&);
		void clearHeader();
		local_ref< android::view::SubMenu > setIcon(cpp_int const&);
		local_ref< android::view::SubMenu > setIcon(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::view::MenuItem > getItem();
	}; //class SubMenu

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SUBMENU_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SUBMENU_HPP_IMPL
#define J2CPP_ANDROID_VIEW_SUBMENU_HPP_IMPL

namespace j2cpp {


local_ref< android::view::SubMenu > android::view::SubMenu::setHeaderTitle(cpp_int const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setHeaderTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setHeaderIcon(cpp_int const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setHeaderIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setHeaderView(local_ref< android::view::View > const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::SubMenu::clearHeader()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setIcon(cpp_int const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::SubMenu > android::view::SubMenu::setIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return local_ref< android::view::SubMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::MenuItem > android::view::SubMenu::getItem()
{
	return local_ref< android::view::MenuItem >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::SubMenu,"android/view/SubMenu")
J2CPP_DEFINE_METHOD(android::view::SubMenu,0,"setHeaderTitle","(I)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,1,"setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,2,"setHeaderIcon","(I)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,3,"setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,4,"setHeaderView","(Landroid/view/View;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,5,"clearHeader","()V")
J2CPP_DEFINE_METHOD(android::view::SubMenu,6,"setIcon","(I)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,7,"setIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/SubMenu;")
J2CPP_DEFINE_METHOD(android::view::SubMenu,8,"getItem","()Landroid/view/MenuItem;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SUBMENU_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION