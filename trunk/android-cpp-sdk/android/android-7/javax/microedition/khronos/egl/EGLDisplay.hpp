/*================================================================================
  code generated by: java2cpp
  class: javax.microedition.khronos.egl.EGLDisplay
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_DECL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_DECL






namespace j2cpp {

namespace javax { namespace microedition { namespace khronos { namespace egl {

	class EGLDisplay;
	class EGLDisplay
		: public cpp_object<EGLDisplay>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		EGLDisplay(jobject jobj)
		: cpp_object<EGLDisplay>(jobj)
		{
		}

	}; //class EGLDisplay

} //namespace egl
} //namespace khronos
} //namespace microedition
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_IMPL
#define J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::microedition::khronos::egl::EGLDisplay > create< javax::microedition::khronos::egl::EGLDisplay>()
{
	return local_ref< javax::microedition::khronos::egl::EGLDisplay >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::microedition::khronos::egl::EGLDisplay::J2CPP_CLASS_NAME>(),
			get_method_id<javax::microedition::khronos::egl::EGLDisplay::J2CPP_CLASS_NAME, javax::microedition::khronos::egl::EGLDisplay::J2CPP_METHOD_NAME(0), javax::microedition::khronos::egl::EGLDisplay::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::microedition::khronos::egl::EGLDisplay,"javax/microedition/khronos/egl/EGLDisplay")
J2CPP_DEFINE_METHOD(javax::microedition::khronos::egl::EGLDisplay,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_MICROEDITION_KHRONOS_EGL_EGLDISPLAY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION
