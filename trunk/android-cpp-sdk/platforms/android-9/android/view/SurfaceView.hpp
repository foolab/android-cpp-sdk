/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.view.SurfaceView
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL
#define J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL


namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace view { class View; } } }
namespace j2cpp { namespace android { namespace view { class SurfaceHolder; } } }
namespace j2cpp { namespace android { namespace graphics { class Canvas; } } }
namespace j2cpp { namespace android { namespace graphics { class Region; } } }


#include <android/content/Context.hpp>
#include <android/graphics/Canvas.hpp>
#include <android/graphics/Region.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/SurfaceHolder.hpp>
#include <android/view/View.hpp>


namespace j2cpp {

namespace android { namespace view {

	class SurfaceView;
	class SurfaceView
		: public object<SurfaceView>
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
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)
		J2CPP_DECLARE_METHOD(13)

		explicit SurfaceView(jobject jobj)
		: object<SurfaceView>(jobj)
		{
		}

		operator local_ref<android::view::View>() const;


		SurfaceView(local_ref< android::content::Context > const&);
		SurfaceView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&);
		SurfaceView(local_ref< android::content::Context > const&, local_ref< android::util::AttributeSet > const&, jint);
		local_ref< android::view::SurfaceHolder > getHolder();
		void setVisibility(jint);
		jboolean gatherTransparentRegion(local_ref< android::graphics::Region >  const&);
		void draw(local_ref< android::graphics::Canvas >  const&);
		void setZOrderMediaOverlay(jboolean);
		void setZOrderOnTop(jboolean);
	}; //class SurfaceView

} //namespace view
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL
#define J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL

namespace j2cpp {



android::view::SurfaceView::operator local_ref<android::view::View>() const
{
	return local_ref<android::view::View>(get_jobject());
}


android::view::SurfaceView::SurfaceView(local_ref< android::content::Context > const &a0)
: object<android::view::SurfaceView>(
	call_new_object<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(0),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(0)>
	(a0)
)
{
}



android::view::SurfaceView::SurfaceView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
: object<android::view::SurfaceView>(
	call_new_object<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(1),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(1)>
	(a0, a1)
)
{
}



android::view::SurfaceView::SurfaceView(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, jint a2)
: object<android::view::SurfaceView>(
	call_new_object<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(2),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(2)>
	(a0, a1, a2)
)
{
}


local_ref< android::view::SurfaceHolder > android::view::SurfaceView::getHolder()
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(3),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(3), 
		local_ref< android::view::SurfaceHolder > >
	(get_jobject());
}



void android::view::SurfaceView::setVisibility(jint a0)
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(6),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(6), 
		void >
	(get_jobject(), a0);
}



jboolean android::view::SurfaceView::gatherTransparentRegion(local_ref< android::graphics::Region > const &a0)
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(9),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(9), 
		jboolean >
	(get_jobject(), a0);
}

void android::view::SurfaceView::draw(local_ref< android::graphics::Canvas > const &a0)
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(10),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(10), 
		void >
	(get_jobject(), a0);
}


void android::view::SurfaceView::setZOrderMediaOverlay(jboolean a0)
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(12),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(12), 
		void >
	(get_jobject(), a0);
}

void android::view::SurfaceView::setZOrderOnTop(jboolean a0)
{
	return call_method<
		android::view::SurfaceView::J2CPP_CLASS_NAME,
		android::view::SurfaceView::J2CPP_METHOD_NAME(13),
		android::view::SurfaceView::J2CPP_METHOD_SIGNATURE(13), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(android::view::SurfaceView,"android/view/SurfaceView")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,3,"getHolder","()Landroid/view/SurfaceHolder;")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,4,"onAttachedToWindow","()V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,5,"onWindowVisibilityChanged","(I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,6,"setVisibility","(I)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,7,"onDetachedFromWindow","()V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,8,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,9,"gatherTransparentRegion","(Landroid/graphics/Region;)Z")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,10,"draw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,11,"dispatchDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,12,"setZOrderMediaOverlay","(Z)V")
J2CPP_DEFINE_METHOD(android::view::SurfaceView,13,"setZOrderOnTop","(Z)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_VIEW_SURFACEVIEW_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
