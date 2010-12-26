/*================================================================================
  code generated by: java2cpp
  class: android.view.ContextMenu
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL
#define J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class CharSequence; } } }
namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace view { class View; } } }


#include <android/graphics/drawable/Drawable.hpp>
#include <android/view/View.hpp>
#include <java/lang/CharSequence.hpp>


namespace j2cpp {

namespace android { namespace view {

	class ContextMenu;
	namespace ContextMenu_ {

		class ContextMenuInfo;
		class ContextMenuInfo
			: public cpp_object<ContextMenuInfo>
		{
		public:

			J2CPP_DECLARE_CLASS


			ContextMenuInfo(jobject jobj)
			: cpp_object<ContextMenuInfo>(jobj)
			{
			}
		}; //class ContextMenuInfo

	} //namespace ContextMenu_

	class ContextMenu
		: public cpp_object<ContextMenu>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)

		typedef ContextMenu_::ContextMenuInfo ContextMenuInfo;

		ContextMenu(jobject jobj)
		: cpp_object<ContextMenu>(jobj)
		{
		}

		local_ref< android::view::ContextMenu > setHeaderTitle(cpp_int const&);
		local_ref< android::view::ContextMenu > setHeaderTitle(local_ref< java::lang::CharSequence > const&);
		local_ref< android::view::ContextMenu > setHeaderIcon(cpp_int const&);
		local_ref< android::view::ContextMenu > setHeaderIcon(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::view::ContextMenu > setHeaderView(local_ref< android::view::View > const&);
		void clearHeader();
	}; //class ContextMenu

} //namespace view
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL
#define J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL

namespace j2cpp {



J2CPP_DEFINE_CLASS(android::view::ContextMenu_::ContextMenuInfo,"android/view/ContextMenu$ContextMenuInfo")


local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderTitle(cpp_int const &a0)
{
	return local_ref< android::view::ContextMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderTitle(local_ref< java::lang::CharSequence > const &a0)
{
	return local_ref< android::view::ContextMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderIcon(cpp_int const &a0)
{
	return local_ref< android::view::ContextMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderIcon(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return local_ref< android::view::ContextMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::ContextMenu > android::view::ContextMenu::setHeaderView(local_ref< android::view::View > const &a0)
{
	return local_ref< android::view::ContextMenu >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::view::ContextMenu::clearHeader()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(android::view::ContextMenu,"android/view/ContextMenu")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,0,"setHeaderTitle","(I)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,1,"setHeaderTitle","(Ljava/lang/CharSequence;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,2,"setHeaderIcon","(I)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,3,"setHeaderIcon","(Landroid/graphics/drawable/Drawable;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,4,"setHeaderView","(Landroid/view/View;)Landroid/view/ContextMenu;")
J2CPP_DEFINE_METHOD(android::view::ContextMenu,5,"clearHeader","()V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_CONTEXTMENU_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
