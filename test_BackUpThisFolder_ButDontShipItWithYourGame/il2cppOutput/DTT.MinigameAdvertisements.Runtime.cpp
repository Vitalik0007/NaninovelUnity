#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// DTT.MinigameBase.Advertisements.BaseAd
struct BaseAd_t06E4B7D9B6E896EB136E3EA6E12AE0F6933087C7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.String
struct String_t;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;



IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t9140640A74BD70790C7A305AB14BC427FEEBEDB6 
{
};
struct Il2CppArrayBounds;

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DTT.MinigameBase.Advertisements.BaseAd
struct BaseAd_t06E4B7D9B6E896EB136E3EA6E12AE0F6933087C7  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DTT.MinigameBase.Advertisements.AdAwakeAction DTT.MinigameBase.Advertisements.BaseAd::_onAwakeAction
	int32_t ____onAwakeAction_4;
	// UnityEngine.Events.UnityEvent DTT.MinigameBase.Advertisements.BaseAd::onLoad
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onLoad_5;
	// UnityEngine.Events.UnityEvent DTT.MinigameBase.Advertisements.BaseAd::onShow
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onShow_6;
	// UnityEngine.Events.UnityEvent DTT.MinigameBase.Advertisements.BaseAd::onClick
	UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* ___onClick_7;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif



// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DTT.MinigameBase.Advertisements.BaseAd::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAd_Awake_m107AC33DB571540B357605373D1753A560CB74BB (BaseAd_t06E4B7D9B6E896EB136E3EA6E12AE0F6933087C7* __this, const RuntimeMethod* method) 
{
	{
		// if (_onAwakeAction == AdAwakeAction.None)
		int32_t L_0 = __this->____onAwakeAction_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// LoadAd(_onAwakeAction == AdAwakeAction.LoadAndShow);
		int32_t L_1 = __this->____onAwakeAction_4;
		VirtualActionInvoker1< bool >::Invoke(5 /* System.Void DTT.MinigameBase.Advertisements.BaseAd::LoadAd(System.Boolean) */, __this, (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0));
		// }
		return;
	}
}
// System.Void DTT.MinigameBase.Advertisements.BaseAd::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAd__ctor_m400B2F335DC5AF52611CE9FA002B4A0E173544A3 (BaseAd_t06E4B7D9B6E896EB136E3EA6E12AE0F6933087C7* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
