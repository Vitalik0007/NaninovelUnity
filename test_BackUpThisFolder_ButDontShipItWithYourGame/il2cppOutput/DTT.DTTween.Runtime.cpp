#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A;
// System.Collections.Generic.Dictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71;
// System.Collections.Generic.IDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct IDictionary_2_tB9C9683C3BE621C1FC15E27748392020F7C877AF;
// System.Collections.Generic.IDictionary`2<System.Int32Enum,System.Object>
struct IDictionary_2_t26A9ADAE3C0899968223186C771F174885EE1032;
// System.Collections.Generic.IEqualityComparer`1<DTT.Tweening.Easing>
struct IEqualityComparer_1_t103B87724FDB227ACEBAE2467D6F1DC383454DD4;
// System.Collections.Generic.Dictionary`2/KeyCollection<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct KeyCollection_t56ACE97D080DBF63CFF994C60ACD6D29E10D2765;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct KeyCollection_t8275102E54B3C3829233AC6D153A19CAFC26FFAD;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32Enum,System.Object>
struct ReadOnlyDictionary_2_t1B8FC1A3E9E6CD069A677744F3E133770BE5DD7C;
// System.Collections.Generic.Dictionary`2/ValueCollection<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct ValueCollection_t878FB84261FB719D32A02EC2BD71D0772F91B493;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct ValueCollection_tAABED50B25A294EF7DAC3F6B5348ED1470E74BDE;
// System.Collections.Generic.Dictionary`2/Entry<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>[]
struct EntryU5BU5D_t813874DD41F30AC303D38C08CD870D89A03B4DF5;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DTT.Tweening.DTTweenWorker
struct DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// DTT.Tweening.DTTween/<ValueC>d__4
struct U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5;
// DTT.Tweening.TweenDefinitions/TweenFunction
struct TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E;

IL2CPP_EXTERN_C RuntimeClass* DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral9E4F4CFBBE933E5495203ECA02AC2D094B420147;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB6EDA5F9BBEA2A6D6FE21C23E625F3F6538BAC87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisDTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A_m1B06F1F31A87CC68A7940B6CF69FDA67910F55C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2__ctor_m0352EA29028410EECDBAA6634DC33EFA53169B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyDictionary_2_get_Item_mF4D357DAB5BAEE1240DBE84BE886C835375467D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInBack_m4C9759647F4DAA6FB12BCC770F0CBF0948927DC0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInBounce_m3B71864B7DB785E8B9049A4D09A9682831619F60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInCirc_mDA0D3F59AE3E36DE60CBFAFF5E3A88754606147B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInCubic_mB3290F9F8EDDC16ECB40C15430DB3520DD63312D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInElastic_m25B060D17C5BD976B3C8013272928F7E0506892B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInExpo_mAC12A66562B9B3DE580F24CB71612CB25434D8A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutBack_mBC0861A3248F36B1979E44DFACE41894D098647A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutBounce_m38B7CE2841C42A4C13549DC21A527C1A506A8F18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutCirc_m3726D80658201C37CBB3CA171EC00DE21DEAEBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutCubic_mD2888F8350606F62E608E7BCC552AB90DBBF7B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutElastic_m128DA83EABB0D66D4B6137854FEF7BC61017E44A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutExpo_m89FFB87FD6F4D6A70FE539EA948D6B15B865440D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutQuad_m50E3DB26C317AAD39DC147C5A1F5C0B51D6B2F85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutQuart_m9F78C05288E0D3D4E2ED8F0165A5B688CAD4C989_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutQuint_mF8610138E711B565ECFFE763423A027F59809801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInOutSine_m2874BD7C6CAFFA4B9E969C0257413D57C1EAF2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInQuad_m627E28CA6EA06C7F6BFA6103D8114EDDE4B0A57E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInQuart_mB26D32DF4BD3AB5A3B794C929AF46FDA70F3D706_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInQuint_mED34E46C54AC7DC7F9584A4428A157B8BD081D6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseInSine_m7B70CA40E35A2318F803039F05901CCC5599F981_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutBack_mA4D4871C986827EE3130CFABDE4874680F255173_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutCirc_mCBE63BBF3F9F3F9F978DFCFC8D31A3008164AC7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutCubic_mAA4988D40DCA476CE907D78D6893F45FC69E9A8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutElastic_m83CB4224918D22063997EBF9455FE69AE70F81F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutExpo_mFA2C1384A325A6CDF6802FD2CC18861E0EDB29C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutQuad_m28F8C975E643FF49F6EEA267BF48849FC32E7D33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutQuart_m223DF318D9683D22FE54399F26D3243AB2BEA0B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutQuint_mCED32372314B3356067D6B05E7ABA1E6422673D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TweenDefinitions_EaseOutSine_m47A47FF30EE06529CB2E0ED8D86B475E27C76457_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CValueCU3Ed__4_System_Collections_IEnumerator_Reset_m8660F4E7F15FF88A1078E53CCC26A729028A8FC4_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t766D5FDB94A70DF173DBACA3866CE042D799065A 
{
};

// System.Collections.Generic.Dictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t813874DD41F30AC303D38C08CD870D89A03B4DF5* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t56ACE97D080DBF63CFF994C60ACD6D29E10D2765* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t878FB84261FB719D32A02EC2BD71D0772F91B493* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.ObjectModel.ReadOnlyDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>
struct ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_keys
	KeyCollection_t8275102E54B3C3829233AC6D153A19CAFC26FFAD* ____keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::_values
	ValueCollection_tAABED50B25A294EF7DAC3F6B5348ED1470E74BDE* ____values_3;
};
struct Il2CppArrayBounds;

// DTT.Tweening.DTTween
struct DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415  : public RuntimeObject
{
};

struct DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields
{
	// DTT.Tweening.DTTweenWorker DTT.Tweening.DTTween::_worker
	DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* ____worker_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// DTT.Tweening.TweenDefinitions
struct TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E  : public RuntimeObject
{
};

struct TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_StaticFields
{
	// System.Collections.ObjectModel.ReadOnlyDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction> DTT.Tweening.TweenDefinitions::TweenMap
	ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8* ___TweenMap_0;
};

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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DTT.Tweening.DTTween/<ValueC>d__4
struct U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5  : public RuntimeObject
{
	// System.Int32 DTT.Tweening.DTTween/<ValueC>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.Tweening.DTTween/<ValueC>d__4::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// System.Single DTT.Tweening.DTTween/<ValueC>d__4::delay
	float ___delay_2;
	// System.Single DTT.Tweening.DTTween/<ValueC>d__4::from
	float ___from_3;
	// System.Single DTT.Tweening.DTTween/<ValueC>d__4::time
	float ___time_4;
	// System.Single DTT.Tweening.DTTween/<ValueC>d__4::to
	float ___to_5;
	// DTT.Tweening.Easing DTT.Tweening.DTTween/<ValueC>d__4::easing
	int32_t ___easing_6;
	// System.Action`1<System.Single> DTT.Tweening.DTTween/<ValueC>d__4::onValueChanged
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged_7;
	// System.Action DTT.Tweening.DTTween/<ValueC>d__4::onComplete
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete_8;
	// System.Single DTT.Tweening.DTTween/<ValueC>d__4::<startTime>5__2
	float ___U3CstartTimeU3E5__2_9;
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

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Single>
struct Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// DTT.Tweening.TweenDefinitions/TweenFunction
struct TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// DTT.Tweening.DTTweenWorker
struct DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// TValue System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32Enum,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyDictionary_2_get_Item_mD2B4E49F2C4E75D6566B05C9E576A91D5BABCE19_gshared (ReadOnlyDictionary_2_t1B8FC1A3E9E6CD069A677744F3E133770BE5DD7C* __this, int32_t ___key0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared (Dictionary_2_t514396B90715EDD83BB0470C76C2F426F9381C71* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32Enum,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyDictionary_2__ctor_m9D86A80A31394F14ACE2378E3564026E46C5458E_gshared (ReadOnlyDictionary_2_t1B8FC1A3E9E6CD069A677744F3E133770BE5DD7C* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method) ;

// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<DTT.Tweening.DTTweenWorker>()
inline DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* GameObject_AddComponent_TisDTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A_m1B06F1F31A87CC68A7940B6CF69FDA67910F55C0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.Tweening.DTTween::ValueC(System.Single,System.Single,System.Single,System.Single,DTT.Tweening.Easing,System.Action`1<System.Single>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DTTween_ValueC_m96BCBB82F52467F3D42AE482EF705FCE2BAB2F00 (float ___from0, float ___to1, float ___time2, float ___delay3, int32_t ___easing4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete6, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void DTT.Tweening.DTTween/<ValueC>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValueCU3Ed__4__ctor_mCD9AB64E7CF6B56F6932E06301CA28CB893F52ED (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B (const RuntimeMethod* method) ;
// TValue System.Collections.ObjectModel.ReadOnlyDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>::get_Item(TKey)
inline TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* ReadOnlyDictionary_2_get_Item_mF4D357DAB5BAEE1240DBE84BE886C835375467D7 (ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8* __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* (*) (ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8*, int32_t, const RuntimeMethod*))ReadOnlyDictionary_2_get_Item_mD2B4E49F2C4E75D6566B05C9E576A91D5BABCE19_gshared)(__this, ___key0, method);
}
// System.Single DTT.Tweening.TweenDefinitions/TweenFunction::Invoke(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_inline (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Single>::Invoke(T)
inline void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A*, float, const RuntimeMethod*))Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline)(__this, ___obj0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Single DTT.Tweening.TweenDefinitions::EaseOutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA (float ___x0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>::.ctor()
inline void Dictionary_2__ctor_mB6EDA5F9BBEA2A6D6FE21C23E625F3F6538BAC87 (Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897*, const RuntimeMethod*))Dictionary_2__ctor_mCC9983804D8DC41E938E080075F9EA7BDD0C7059_gshared)(__this, method);
}
// System.Void DTT.Tweening.TweenDefinitions/TweenFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441 (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>::Add(TKey,TValue)
inline void Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251 (Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* __this, int32_t ___key0, TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897*, int32_t, TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*, const RuntimeMethod*))Dictionary_2_Add_mC515884C0546021A29DC0A00DBCABD89B1B65872_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<DTT.Tweening.Easing,DTT.Tweening.TweenDefinitions/TweenFunction>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline void ReadOnlyDictionary_2__ctor_m0352EA29028410EECDBAA6634DC33EFA53169B13 (ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8* __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method)
{
	((  void (*) (ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8*, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m9D86A80A31394F14ACE2378E3564026E46C5458E_gshared)(__this, ___dictionary0, method);
}
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
// System.Void DTT.Tweening.DTTween::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTTween__cctor_mB64DB9BFF2B6E26AF1202F0EF7A8D19E1976BF68 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisDTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A_m1B06F1F31A87CC68A7940B6CF69FDA67910F55C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E4F4CFBBE933E5495203ECA02AC2D094B420147);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _worker = new GameObject("DTTween Worker").AddComponent<DTTweenWorker>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteral9E4F4CFBBE933E5495203ECA02AC2D094B420147, NULL);
		NullCheck(L_0);
		DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* L_1;
		L_1 = GameObject_AddComponent_TisDTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A_m1B06F1F31A87CC68A7940B6CF69FDA67910F55C0(L_0, GameObject_AddComponent_TisDTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A_m1B06F1F31A87CC68A7940B6CF69FDA67910F55C0_RuntimeMethod_var);
		((DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields*)il2cpp_codegen_static_fields_for(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var))->____worker_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields*)il2cpp_codegen_static_fields_for(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var))->____worker_0), (void*)L_1);
		// Object.DontDestroyOnLoad(_worker);
		DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* L_2 = ((DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields*)il2cpp_codegen_static_fields_for(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var))->____worker_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_2, NULL);
		// }
		return;
	}
}
// UnityEngine.Coroutine DTT.Tweening.DTTween::Value(System.Single,System.Single,System.Single,System.Single,DTT.Tweening.Easing,System.Action`1<System.Single>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* DTTween_Value_m83CA5ED5B60221AE41E80CAA0C7D36B7F6D5E8F1 (float ___from0, float ___to1, float ___time2, float ___delay3, int32_t ___easing4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _worker.StartCoroutine(ValueC(from, to, time, delay, easing, onValueChanged, onComplete));
		il2cpp_codegen_runtime_class_init_inline(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var);
		DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* L_0 = ((DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields*)il2cpp_codegen_static_fields_for(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var))->____worker_0;
		float L_1 = ___from0;
		float L_2 = ___to1;
		float L_3 = ___time2;
		float L_4 = ___delay3;
		int32_t L_5 = ___easing4;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_6 = ___onValueChanged5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___onComplete6;
		RuntimeObject* L_8;
		L_8 = DTTween_ValueC_m96BCBB82F52467F3D42AE482EF705FCE2BAB2F00(L_1, L_2, L_3, L_4, L_5, L_6, L_7, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_8, NULL);
		return L_9;
	}
}
// UnityEngine.Coroutine DTT.Tweening.DTTween::Value(System.Single,System.Single,System.Single,DTT.Tweening.Easing,System.Action`1<System.Single>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* DTTween_Value_m75B7D6B66C1021B5F972BA69A4171070749910BA (float ___from0, float ___to1, float ___time2, int32_t ___easing3, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _worker.StartCoroutine(ValueC(from, to, time, 0, easing, onValueChanged, onComplete));
		il2cpp_codegen_runtime_class_init_inline(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var);
		DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* L_0 = ((DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_StaticFields*)il2cpp_codegen_static_fields_for(DTTween_tC4C42926A3FF98E706CDE04123FE4D3D91498415_il2cpp_TypeInfo_var))->____worker_0;
		float L_1 = ___from0;
		float L_2 = ___to1;
		float L_3 = ___time2;
		int32_t L_4 = ___easing3;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_5 = ___onValueChanged4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___onComplete5;
		RuntimeObject* L_7;
		L_7 = DTTween_ValueC_m96BCBB82F52467F3D42AE482EF705FCE2BAB2F00(L_1, L_2, L_3, (0.0f), L_4, L_5, L_6, NULL);
		NullCheck(L_0);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_0, L_7, NULL);
		return L_8;
	}
}
// System.Collections.IEnumerator DTT.Tweening.DTTween::ValueC(System.Single,System.Single,System.Single,System.Single,DTT.Tweening.Easing,System.Action`1<System.Single>,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DTTween_ValueC_m96BCBB82F52467F3D42AE482EF705FCE2BAB2F00 (float ___from0, float ___to1, float ___time2, float ___delay3, int32_t ___easing4, Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* ___onValueChanged5, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___onComplete6, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_0 = (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5*)il2cpp_codegen_object_new(U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CValueCU3Ed__4__ctor_mCD9AB64E7CF6B56F6932E06301CA28CB893F52ED(L_0, 0, NULL);
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_1 = L_0;
		float L_2 = ___from0;
		NullCheck(L_1);
		L_1->___from_3 = L_2;
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_3 = L_1;
		float L_4 = ___to1;
		NullCheck(L_3);
		L_3->___to_5 = L_4;
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_5 = L_3;
		float L_6 = ___time2;
		NullCheck(L_5);
		L_5->___time_4 = L_6;
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_7 = L_5;
		float L_8 = ___delay3;
		NullCheck(L_7);
		L_7->___delay_2 = L_8;
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_9 = L_7;
		int32_t L_10 = ___easing4;
		NullCheck(L_9);
		L_9->___easing_6 = L_10;
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_11 = L_9;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_12 = ___onValueChanged5;
		NullCheck(L_11);
		L_11->___onValueChanged_7 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___onValueChanged_7), (void*)L_12);
		U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* L_13 = L_11;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_14 = ___onComplete6;
		NullCheck(L_13);
		L_13->___onComplete_8 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___onComplete_8), (void*)L_14);
		return L_13;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DTT.Tweening.DTTween/<ValueC>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValueCU3Ed__4__ctor_mCD9AB64E7CF6B56F6932E06301CA28CB893F52ED (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.Tweening.DTTween/<ValueC>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValueCU3Ed__4_System_IDisposable_Dispose_mD00DBC490D87031FBCD1CCA7317E0A7E023799BF (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.Tweening.DTTween/<ValueC>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CValueCU3Ed__4_MoveNext_m2E9DCCC201150B62B94349496534120FA23ACF4F (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_get_Item_mF4D357DAB5BAEE1240DBE84BE886C835375467D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B6_0 = NULL;
	Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* G_B5_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B13_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B12_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001f;
			}
			case 1:
			{
				goto IL_0040;
			}
			case 2:
			{
				goto IL_00b9;
			}
			case 3:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(delay);
		float L_2 = __this->___delay_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, L_2, NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0040:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float value = from;
		float L_4 = __this->___from_3;
		V_1 = L_4;
		// float startTime = Time.time;
		float L_5;
		L_5 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		__this->___U3CstartTimeU3E5__2_9 = L_5;
		goto IL_00c0;
	}

IL_005b:
	{
		// float normalized = (Time.time - startTime) / time;
		float L_6;
		L_6 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		float L_7 = __this->___U3CstartTimeU3E5__2_9;
		float L_8 = __this->___time_4;
		V_2 = ((float)(((float)il2cpp_codegen_subtract(L_6, L_7))/L_8));
		// value = Mathf.LerpUnclamped(from, to, TweenDefinitions.TweenMap[easing](normalized));
		float L_9 = __this->___from_3;
		float L_10 = __this->___to_5;
		il2cpp_codegen_runtime_class_init_inline(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8* L_11 = ((TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_StaticFields*)il2cpp_codegen_static_fields_for(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var))->___TweenMap_0;
		int32_t L_12 = __this->___easing_6;
		NullCheck(L_11);
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_13;
		L_13 = ReadOnlyDictionary_2_get_Item_mF4D357DAB5BAEE1240DBE84BE886C835375467D7(L_11, L_12, ReadOnlyDictionary_2_get_Item_mF4D357DAB5BAEE1240DBE84BE886C835375467D7_RuntimeMethod_var);
		float L_14 = V_2;
		NullCheck(L_13);
		float L_15;
		L_15 = TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_inline(L_13, L_14, NULL);
		float L_16;
		L_16 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_9, L_10, L_15, NULL);
		V_1 = L_16;
		// onValueChanged?.Invoke(value);
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_17 = __this->___onValueChanged_7;
		Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* L_18 = L_17;
		G_B5_0 = L_18;
		if (L_18)
		{
			G_B6_0 = L_18;
			goto IL_00a3;
		}
	}
	{
		goto IL_00a9;
	}

IL_00a3:
	{
		float L_19 = V_1;
		NullCheck(G_B6_0);
		Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_inline(G_B6_0, L_19, NULL);
	}

IL_00a9:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00b9:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00c0:
	{
		// while (startTime + time > Time.time)
		float L_20 = __this->___U3CstartTimeU3E5__2_9;
		float L_21 = __this->___time_4;
		float L_22;
		L_22 = Time_get_time_m3A271BB1B20041144AC5B7863B71AB1F0150374B(NULL);
		if ((((float)((float)il2cpp_codegen_add(L_20, L_21))) > ((float)L_22)))
		{
			goto IL_005b;
		}
	}
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 3;
		return (bool)1;
	}

IL_00e4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// onComplete?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = __this->___onComplete_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = L_23;
		G_B12_0 = L_24;
		if (L_24)
		{
			G_B13_0 = L_24;
			goto IL_00f7;
		}
	}
	{
		goto IL_00fc;
	}

IL_00f7:
	{
		NullCheck(G_B13_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B13_0, NULL);
	}

IL_00fc:
	{
		// }
		return (bool)0;
	}
}
// System.Object DTT.Tweening.DTTween/<ValueC>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValueCU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m2D76554221DAD46354F6A7B56632EE0C9F53FBC9 (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.Tweening.DTTween/<ValueC>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CValueCU3Ed__4_System_Collections_IEnumerator_Reset_m8660F4E7F15FF88A1078E53CCC26A729028A8FC4 (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CValueCU3Ed__4_System_Collections_IEnumerator_Reset_m8660F4E7F15FF88A1078E53CCC26A729028A8FC4_RuntimeMethod_var)));
	}
}
// System.Object DTT.Tweening.DTTween/<ValueC>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CValueCU3Ed__4_System_Collections_IEnumerator_get_Current_m6AA195946FBB384FF6B4E77A61D27D6AFCA5479F (U3CValueCU3Ed__4_tB158436B7B57CE4F932ADA18D6CFF63F64A615A5* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void DTT.Tweening.DTTweenWorker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DTTweenWorker__ctor_m8DA016E93A060B24CAFD3B616B38E77EB1D6D33A (DTTweenWorker_tC39F19785B97307B830E59108B929B5F52E48C0A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single DTT.Tweening.TweenDefinitions::EaseInSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInSine_m7B70CA40E35A2318F803039F05901CCC5599F981 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInSine(float x) => 1 - Mathf.Cos((x * Mathf.PI) / 2);
		float L_0 = ___x0;
		float L_1;
		L_1 = cosf(((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(2.0f))));
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutSine_m47A47FF30EE06529CB2E0ED8D86B475E27C76457 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutSine(float x) => Mathf.Sin((x * Mathf.PI) / 2);
		float L_0 = ___x0;
		float L_1;
		L_1 = sinf(((float)(((float)il2cpp_codegen_multiply(L_0, (3.14159274f)))/(2.0f))));
		return L_1;
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutSine(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutSine_m2874BD7C6CAFFA4B9E969C0257413D57C1EAF2AE (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInOutSine(float x) => -(Mathf.Cos(Mathf.PI * x) - 1) / 2;
		float L_0 = ___x0;
		float L_1;
		L_1 = cosf(((float)il2cpp_codegen_multiply((3.14159274f), L_0)));
		return ((float)(((-((float)il2cpp_codegen_subtract(L_1, (1.0f)))))/(2.0f)));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInCubic_mB3290F9F8EDDC16ECB40C15430DB3520DD63312D (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInCubic(float x) => x * x * x;
		float L_0 = ___x0;
		float L_1 = ___x0;
		float L_2 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutCubic_mAA4988D40DCA476CE907D78D6893F45FC69E9A8C (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutCubic(float x) => 1 - Mathf.Pow(1 - x, 3);
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract((1.0f), L_0)), (3.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutCubic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutCubic_mD2888F8350606F62E608E7BCC552AB90DBBF7B06 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInOutCubic(float x) => x < 0.5 ? 4 * x * x * x : 1 - Mathf.Pow(-2 * x + 2, 3) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_1)), (2.0f))), (3.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/(2.0f)))));
	}

IL_0031:
	{
		float L_3 = ___x0;
		float L_4 = ___x0;
		float L_5 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((4.0f), L_3)), L_4)), L_5));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInQuint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInQuint_mED34E46C54AC7DC7F9584A4428A157B8BD081D6F (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInQuint(float x) => x * x * x * x * x;
		float L_0 = ___x0;
		float L_1 = ___x0;
		float L_2 = ___x0;
		float L_3 = ___x0;
		float L_4 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3)), L_4));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutQuint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutQuint_mCED32372314B3356067D6B05E7ABA1E6422673D6 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutQuint(float x) => 1 - Mathf.Pow(1 - x, 5);
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract((1.0f), L_0)), (5.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutQuint(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutQuint_mF8610138E711B565ECFFE763423A027F59809801 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInOutQuint(float x) => x < 0.5 ? 16 * x * x * x * x * x : 1 - Mathf.Pow(-2 * x + 2, 5) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_1)), (2.0f))), (5.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/(2.0f)))));
	}

IL_0031:
	{
		float L_3 = ___x0;
		float L_4 = ___x0;
		float L_5 = ___x0;
		float L_6 = ___x0;
		float L_7 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((16.0f), L_3)), L_4)), L_5)), L_6)), L_7));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInCirc_mDA0D3F59AE3E36DE60CBFAFF5E3A88754606147B (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInCirc(float x) => 1 - Mathf.Sqrt(1 - Mathf.Pow(x, 2));
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(L_0, (2.0f));
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), L_1)));
		return ((float)il2cpp_codegen_subtract((1.0f), L_2));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutCirc_mCBE63BBF3F9F3F9F978DFCFC8D31A3008164AC7E (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutCirc(float x) => Mathf.Sqrt(1 - Mathf.Pow(x - 1, 2));
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract(L_0, (1.0f))), (2.0f));
		float L_2;
		L_2 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), L_1)));
		return L_2;
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutCirc(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutCirc_m3726D80658201C37CBB3CA171EC00DE21DEAEBE0 (float ___x0, const RuntimeMethod* method) 
{
	{
		// x < 0.5
		//     ? (1 - Mathf.Sqrt(1 - Mathf.Pow(2 * x, 2))) / 2
		//     : (Mathf.Sqrt(1 - Mathf.Pow(-2 * x + 2, 2)) + 1) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_003c;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_1)), (2.0f))), (2.0f));
		float L_3;
		L_3 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), L_2)));
		return ((float)(((float)il2cpp_codegen_add(L_3, (1.0f)))/(2.0f)));
	}

IL_003c:
	{
		float L_4 = ___x0;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_multiply((2.0f), L_4)), (2.0f));
		float L_6;
		L_6 = sqrtf(((float)il2cpp_codegen_subtract((1.0f), L_5)));
		return ((float)(((float)il2cpp_codegen_subtract((1.0f), L_6))/(2.0f)));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInElastic_m25B060D17C5BD976B3C8013272928F7E0506892B (float ___x0, const RuntimeMethod* method) 
{
	{
		// return x == 0
		//     ? 0
		//     : x == 1
		//         ? 1
		//         : -Mathf.Pow(2, 10 * x - 10) * Mathf.Sin((x * 10 - 10.75f) * C4);
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0048;
		}
	}
	{
		float L_1 = ___x0;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_0042;
		}
	}
	{
		float L_2 = ___x0;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((10.0f), L_2)), (10.0f))));
		float L_4 = ___x0;
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, (10.0f))), (10.75f))), (2.09439516f))));
		return ((float)il2cpp_codegen_multiply(((-L_3)), L_5));
	}

IL_0042:
	{
		return (1.0f);
	}

IL_0048:
	{
		return (0.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutElastic_m83CB4224918D22063997EBF9455FE69AE70F81F2 (float ___x0, const RuntimeMethod* method) 
{
	{
		// return x == 0
		//     ? 0
		//     : x == 1
		//         ? 1
		//         : Mathf.Pow(2, -10 * x) * Mathf.Sin((x * 10 - 0.75f) * C4) + 1;
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0047;
		}
	}
	{
		float L_1 = ___x0;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_0041;
		}
	}
	{
		float L_2 = ___x0;
		float L_3;
		L_3 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_2)));
		float L_4 = ___x0;
		float L_5;
		L_5 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_4, (10.0f))), (0.75f))), (2.09439516f))));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_3, L_5)), (1.0f)));
	}

IL_0041:
	{
		return (1.0f);
	}

IL_0047:
	{
		return (0.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutElastic(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutElastic_m128DA83EABB0D66D4B6137854FEF7BC61017E44A (float ___x0, const RuntimeMethod* method) 
{
	{
		// return x == 0
		//     ? 0 : x == 1
		//         ? 1
		//         : x < 0.5
		//             ? -(Mathf.Pow(2, 20 * x - 10) * Mathf.Sin((20 * x - 11.125f) * c5)) / 2
		//             : (Mathf.Pow(2, -20 * x + 10) * Mathf.Sin((20 * x - 11.125f) * c5)) / 2 + 1;
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_009e;
		}
	}
	{
		float L_1 = ___x0;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_0098;
		}
	}
	{
		float L_2 = ___x0;
		if ((((double)((double)L_2)) < ((double)(0.5))))
		{
			goto IL_0060;
		}
	}
	{
		float L_3 = ___x0;
		float L_4;
		L_4 = powf((2.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-20.0f), L_3)), (10.0f))));
		float L_5 = ___x0;
		float L_6;
		L_6 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((20.0f), L_5)), (11.125f))), (1.39626348f))));
		return ((float)il2cpp_codegen_add(((float)(((float)il2cpp_codegen_multiply(L_4, L_6))/(2.0f))), (1.0f)));
	}

IL_0060:
	{
		float L_7 = ___x0;
		float L_8;
		L_8 = powf((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((20.0f), L_7)), (10.0f))));
		float L_9 = ___x0;
		float L_10;
		L_10 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((20.0f), L_9)), (11.125f))), (1.39626348f))));
		return ((float)(((-((float)il2cpp_codegen_multiply(L_8, L_10))))/(2.0f)));
	}

IL_0098:
	{
		return (1.0f);
	}

IL_009e:
	{
		return (0.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInQuad_m627E28CA6EA06C7F6BFA6103D8114EDDE4B0A57E (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInQuad(float x) => x * x;
		float L_0 = ___x0;
		float L_1 = ___x0;
		return ((float)il2cpp_codegen_multiply(L_0, L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutQuad_m28F8C975E643FF49F6EEA267BF48849FC32E7D33 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutQuad(float x) => 1 - (1 - x) * (1 - x);
		float L_0 = ___x0;
		float L_1 = ___x0;
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_0)), ((float)il2cpp_codegen_subtract((1.0f), L_1))))));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutQuad(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutQuad_m50E3DB26C317AAD39DC147C5A1F5C0B51D6B2F85 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInOutQuad(float x) => x < 0.5 ? 2 * x * x : 1 - Mathf.Pow(-2 * x + 2, 2) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_1)), (2.0f))), (2.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/(2.0f)))));
	}

IL_0031:
	{
		float L_3 = ___x0;
		float L_4 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.0f), L_3)), L_4));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInQuart(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInQuart_mB26D32DF4BD3AB5A3B794C929AF46FDA70F3D706 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInQuart(float x) => x * x * x * x;
		float L_0 = ___x0;
		float L_1 = ___x0;
		float L_2 = ___x0;
		float L_3 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_0, L_1)), L_2)), L_3));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutQuart(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutQuart_m223DF318D9683D22FE54399F26D3243AB2BEA0B0 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutQuart(float x) => 1 - Mathf.Pow(1 - x, 4);
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract((1.0f), L_0)), (4.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutQuart(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutQuart_m9F78C05288E0D3D4E2ED8F0165A5B688CAD4C989 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInOutQuart(float x) => x < 0.5 ? 8 * x * x * x * x : 1 - Mathf.Pow(-2 * x + 2, 4) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_0031;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-2.0f), L_1)), (2.0f))), (4.0f));
		return ((float)il2cpp_codegen_subtract((1.0f), ((float)(L_2/(2.0f)))));
	}

IL_0031:
	{
		float L_3 = ___x0;
		float L_4 = ___x0;
		float L_5 = ___x0;
		float L_6 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((8.0f), L_3)), L_4)), L_5)), L_6));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInExpo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInExpo_mAC12A66562B9B3DE580F24CB71612CB25434D8A0 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseInExpo(float x) => x == 0 ? 0 : Mathf.Pow(2, 10 * x - 10);
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((10.0f), L_1)), (10.0f))));
		return L_2;
	}

IL_0020:
	{
		return (0.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutExpo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutExpo_mFA2C1384A325A6CDF6802FD2CC18861E0EDB29C8 (float ___x0, const RuntimeMethod* method) 
{
	{
		// public static float EaseOutExpo(float x) => x == 1 ? 1 : 1 - Mathf.Pow(2, -10 * x);
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(1.0f))))
		{
			goto IL_0020;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf((2.0f), ((float)il2cpp_codegen_multiply((-10.0f), L_1)));
		return ((float)il2cpp_codegen_subtract((1.0f), L_2));
	}

IL_0020:
	{
		return (1.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutExpo(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutExpo_m89FFB87FD6F4D6A70FE539EA948D6B15B865440D (float ___x0, const RuntimeMethod* method) 
{
	{
		// return x == 0
		//     ? 0
		//     : x == 1
		//         ? 1
		//         : x < 0.5 ? Mathf.Pow(2, 20 * x - 10) / 2
		//             : (2 - Mathf.Pow(2, -20 * x + 10)) / 2;
		float L_0 = ___x0;
		if ((((float)L_0) == ((float)(0.0f))))
		{
			goto IL_0065;
		}
	}
	{
		float L_1 = ___x0;
		if ((((float)L_1) == ((float)(1.0f))))
		{
			goto IL_005f;
		}
	}
	{
		float L_2 = ___x0;
		if ((((double)((double)L_2)) < ((double)(0.5))))
		{
			goto IL_0041;
		}
	}
	{
		float L_3 = ___x0;
		float L_4;
		L_4 = powf((2.0f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-20.0f), L_3)), (10.0f))));
		return ((float)(((float)il2cpp_codegen_subtract((2.0f), L_4))/(2.0f)));
	}

IL_0041:
	{
		float L_5 = ___x0;
		float L_6;
		L_6 = powf((2.0f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((20.0f), L_5)), (10.0f))));
		return ((float)(L_6/(2.0f)));
	}

IL_005f:
	{
		return (1.0f);
	}

IL_0065:
	{
		return (0.0f);
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInBack_m4C9759647F4DAA6FB12BCC770F0CBF0948927DC0 (float ___x0, const RuntimeMethod* method) 
{
	{
		// return C3 * x * x * x - C1 * x * x;
		float L_0 = ___x0;
		float L_1 = ___x0;
		float L_2 = ___x0;
		float L_3 = ___x0;
		float L_4 = ___x0;
		return ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((2.70158005f), L_0)), L_1)), L_2)), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((1.70158005f), L_3)), L_4))));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutBack_mA4D4871C986827EE3130CFABDE4874680F255173 (float ___x0, const RuntimeMethod* method) 
{
	{
		// return 1 + C3 * Mathf.Pow(x - 1, 3) + C1 * Mathf.Pow(x - 1, 2);
		float L_0 = ___x0;
		float L_1;
		L_1 = powf(((float)il2cpp_codegen_subtract(L_0, (1.0f))), (3.0f));
		float L_2 = ___x0;
		float L_3;
		L_3 = powf(((float)il2cpp_codegen_subtract(L_2, (1.0f))), (2.0f));
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add((1.0f), ((float)il2cpp_codegen_multiply((2.70158005f), L_1)))), ((float)il2cpp_codegen_multiply((1.70158005f), L_3))));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutBack(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutBack_mBC0861A3248F36B1979E44DFACE41894D098647A (float ___x0, const RuntimeMethod* method) 
{
	{
		// return x < 0.5
		//     ? (Mathf.Pow(2 * x, 2) * ((C2 + 1) * 2 * x - C2)) / 2
		//     : (Mathf.Pow(2 * x - 2, 2) * ((C2 + 1) * (x * 2 - 2) + C2) + 2) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_004b;
		}
	}
	{
		float L_1 = ___x0;
		float L_2;
		L_2 = powf(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (2.0f))), (2.0f));
		float L_3 = ___x0;
		return ((float)(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_2, ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((3.59490943f), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_3, (2.0f))), (2.0f))))), (2.59490943f))))), (2.0f)))/(2.0f)));
	}

IL_004b:
	{
		float L_4 = ___x0;
		float L_5;
		L_5 = powf(((float)il2cpp_codegen_multiply((2.0f), L_4)), (2.0f));
		float L_6 = ___x0;
		return ((float)(((float)il2cpp_codegen_multiply(L_5, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((7.18981886f), L_6)), (2.59490943f)))))/(2.0f)));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInBounce_m3B71864B7DB785E8B9049A4D09A9682831619F60 (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float EaseInBounce(float x) => 1 - EaseOutBounce(1 - x);
		float L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA(((float)il2cpp_codegen_subtract((1.0f), L_0)), NULL);
		return ((float)il2cpp_codegen_subtract((1.0f), L_1));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseOutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA (float ___x0, const RuntimeMethod* method) 
{
	{
		// if (x < 1 / D1)
		float L_0 = ___x0;
		if ((!(((float)L_0) < ((float)(0.363636374f)))))
		{
			goto IL_0012;
		}
	}
	{
		// return N1 * x * x;
		float L_1 = ___x0;
		float L_2 = ___x0;
		return ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_1)), L_2));
	}

IL_0012:
	{
		// if (x < 2 / D1)
		float L_3 = ___x0;
		if ((!(((float)L_3) < ((float)(0.727272749f)))))
		{
			goto IL_0033;
		}
	}
	{
		// return N1 * (x -= 1.5f / D1) * x + 0.75f;
		float L_4 = ___x0;
		float L_5 = ((float)il2cpp_codegen_subtract(L_4, (0.545454562f)));
		___x0 = L_5;
		float L_6 = ___x0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_5)), L_6)), (0.75f)));
	}

IL_0033:
	{
		// if (x < 2.5 / D1)
		float L_7 = ___x0;
		if ((!(((double)((double)L_7)) < ((double)(0.90909090909090906)))))
		{
			goto IL_0059;
		}
	}
	{
		// return N1 * (x -= 2.25f / D1) * x + 0.9375f;
		float L_8 = ___x0;
		float L_9 = ((float)il2cpp_codegen_subtract(L_8, (0.818181813f)));
		___x0 = L_9;
		float L_10 = ___x0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_9)), L_10)), (0.9375f)));
	}

IL_0059:
	{
		// return N1 * (x -= 2.625f / D1) * x + 0.984375f;
		float L_11 = ___x0;
		float L_12 = ((float)il2cpp_codegen_subtract(L_11, (0.954545438f)));
		___x0 = L_12;
		float L_13 = ___x0;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((7.5625f), L_12)), L_13)), (0.984375f)));
	}
}
// System.Single DTT.Tweening.TweenDefinitions::EaseInOutBounce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenDefinitions_EaseInOutBounce_m38B7CE2841C42A4C13549DC21A527C1A506A8F18 (float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// x < 0.5
		//     ? (1 - EaseOutBounce(1 - 2 * x)) / 2
		//     : (1 + EaseOutBounce(2 * x - 1)) / 2;
		float L_0 = ___x0;
		if ((((double)((double)L_0)) < ((double)(0.5))))
		{
			goto IL_002c;
		}
	}
	{
		float L_1 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		float L_2;
		L_2 = TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((2.0f), L_1)), (1.0f))), NULL);
		return ((float)(((float)il2cpp_codegen_add((1.0f), L_2))/(2.0f)));
	}

IL_002c:
	{
		float L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		float L_4;
		L_4 = TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA(((float)il2cpp_codegen_subtract((1.0f), ((float)il2cpp_codegen_multiply((2.0f), L_3)))), NULL);
		return ((float)(((float)il2cpp_codegen_subtract((1.0f), L_4))/(2.0f)));
	}
}
// System.Void DTT.Tweening.TweenDefinitions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenDefinitions__cctor_mF6C26228C19B085918149776271BD4A50CCA8FA2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB6EDA5F9BBEA2A6D6FE21C23E625F3F6538BAC87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2__ctor_m0352EA29028410EECDBAA6634DC33EFA53169B13_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInBack_m4C9759647F4DAA6FB12BCC770F0CBF0948927DC0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInBounce_m3B71864B7DB785E8B9049A4D09A9682831619F60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInCirc_mDA0D3F59AE3E36DE60CBFAFF5E3A88754606147B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInCubic_mB3290F9F8EDDC16ECB40C15430DB3520DD63312D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInElastic_m25B060D17C5BD976B3C8013272928F7E0506892B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInExpo_mAC12A66562B9B3DE580F24CB71612CB25434D8A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutBack_mBC0861A3248F36B1979E44DFACE41894D098647A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutBounce_m38B7CE2841C42A4C13549DC21A527C1A506A8F18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutCirc_m3726D80658201C37CBB3CA171EC00DE21DEAEBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutCubic_mD2888F8350606F62E608E7BCC552AB90DBBF7B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutElastic_m128DA83EABB0D66D4B6137854FEF7BC61017E44A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutExpo_m89FFB87FD6F4D6A70FE539EA948D6B15B865440D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutQuad_m50E3DB26C317AAD39DC147C5A1F5C0B51D6B2F85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutQuart_m9F78C05288E0D3D4E2ED8F0165A5B688CAD4C989_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutQuint_mF8610138E711B565ECFFE763423A027F59809801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInOutSine_m2874BD7C6CAFFA4B9E969C0257413D57C1EAF2AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInQuad_m627E28CA6EA06C7F6BFA6103D8114EDDE4B0A57E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInQuart_mB26D32DF4BD3AB5A3B794C929AF46FDA70F3D706_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInQuint_mED34E46C54AC7DC7F9584A4428A157B8BD081D6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseInSine_m7B70CA40E35A2318F803039F05901CCC5599F981_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutBack_mA4D4871C986827EE3130CFABDE4874680F255173_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutCirc_mCBE63BBF3F9F3F9F978DFCFC8D31A3008164AC7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutCubic_mAA4988D40DCA476CE907D78D6893F45FC69E9A8C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutElastic_m83CB4224918D22063997EBF9455FE69AE70F81F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutExpo_mFA2C1384A325A6CDF6802FD2CC18861E0EDB29C8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutQuad_m28F8C975E643FF49F6EEA267BF48849FC32E7D33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutQuart_m223DF318D9683D22FE54399F26D3243AB2BEA0B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutQuint_mCED32372314B3356067D6B05E7ABA1E6422673D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_EaseOutSine_m47A47FF30EE06529CB2E0ED8D86B475E27C76457_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly ReadOnlyDictionary<Easing, TweenFunction> TweenMap =
		//     new ReadOnlyDictionary<Easing, TweenFunction>(new Dictionary<Easing, TweenFunction>()
		//     {
		//         { Easing.EASE_IN_SINE, EaseInSine },
		//         { Easing.EASE_OUT_SINE, EaseOutSine },
		//         { Easing.EASE_IN_OUT_SINE, EaseInOutSine },
		// 
		//         { Easing.EASE_IN_CUBIC, EaseInCubic },
		//         { Easing.EASE_OUT_CUBIC, EaseOutCubic },
		//         { Easing.EASE_IN_OUT_CUBIC, EaseInOutCubic },
		// 
		//         { Easing.EASE_IN_QUINT, EaseInQuint },
		//         { Easing.EASE_OUT_QUINT, EaseOutQuint },
		//         { Easing.EASE_IN_OUT_QUINT, EaseInOutQuint },
		// 
		//         { Easing.EASE_IN_CIRC, EaseInCirc },
		//         { Easing.EASE_OUT_CIRC, EaseOutCirc },
		//         { Easing.EASE_IN_OUT_CIRC, EaseInOutCirc },
		// 
		//         { Easing.EASE_IN_ELASTIC, EaseInElastic },
		//         { Easing.EASE_OUT_ELASTIC, EaseOutElastic },
		//         { Easing.EASE_IN_OUT_ELASTIC, EaseInOutElastic },
		// 
		//         { Easing.EASE_IN_QUAD, EaseInQuad },
		//         { Easing.EASE_OUT_QUAD, EaseOutQuad },
		//         { Easing.EASE_IN_OUT_QUAD, EaseInOutQuad },
		// 
		//         { Easing.EASE_IN_QUART, EaseInQuart },
		//         { Easing.EASE_OUT_QUART, EaseOutQuart },
		//         { Easing.EASE_IN_OUT_QUART, EaseInOutQuart },
		// 
		//         { Easing.EASE_IN_EXPO, EaseInExpo },
		//         { Easing.EASE_OUT_EXPO, EaseOutExpo },
		//         { Easing.EASE_IN_OUT_EXPO, EaseInOutExpo },
		// 
		//         { Easing.EASE_IN_BACK, EaseInBack },
		//         { Easing.EASE_OUT_BACK, EaseOutBack },
		//         { Easing.EASE_IN_OUT_BACK, EaseInOutBack },
		// 
		//         { Easing.EASE_IN_BOUNCE, EaseInBounce },
		//         { Easing.EASE_OUT_BOUNCE, EaseOutBounce },
		//         { Easing.EASE_IN_OUT_BOUNCE, EaseInOutBounce },
		//     });
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_0 = (Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897*)il2cpp_codegen_object_new(Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mB6EDA5F9BBEA2A6D6FE21C23E625F3F6538BAC87(L_0, Dictionary_2__ctor_mB6EDA5F9BBEA2A6D6FE21C23E625F3F6538BAC87_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_1 = L_0;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_2 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_2, NULL, (intptr_t)((void*)TweenDefinitions_EaseInSine_m7B70CA40E35A2318F803039F05901CCC5599F981_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_1, 0, L_2, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_3 = L_1;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_4 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_4, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutSine_m47A47FF30EE06529CB2E0ED8D86B475E27C76457_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_3, 1, L_4, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_5 = L_3;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_6 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_6, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutSine_m2874BD7C6CAFFA4B9E969C0257413D57C1EAF2AE_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_5, 2, L_6, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_7 = L_5;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_8 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_8, NULL, (intptr_t)((void*)TweenDefinitions_EaseInCubic_mB3290F9F8EDDC16ECB40C15430DB3520DD63312D_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_7, 3, L_8, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_9 = L_7;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_10 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_10, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutCubic_mAA4988D40DCA476CE907D78D6893F45FC69E9A8C_RuntimeMethod_var), NULL);
		NullCheck(L_9);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_9, 4, L_10, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_11 = L_9;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_12 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_12, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutCubic_mD2888F8350606F62E608E7BCC552AB90DBBF7B06_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_11, 5, L_12, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_13 = L_11;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_14 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_14, NULL, (intptr_t)((void*)TweenDefinitions_EaseInQuint_mED34E46C54AC7DC7F9584A4428A157B8BD081D6F_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_13, 6, L_14, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_15 = L_13;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_16 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_16, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutQuint_mCED32372314B3356067D6B05E7ABA1E6422673D6_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_15, 7, L_16, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_17 = L_15;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_18 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_18, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutQuint_mF8610138E711B565ECFFE763423A027F59809801_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_17, 8, L_18, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_19 = L_17;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_20 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_20, NULL, (intptr_t)((void*)TweenDefinitions_EaseInCirc_mDA0D3F59AE3E36DE60CBFAFF5E3A88754606147B_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_19, ((int32_t)9), L_20, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_21 = L_19;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_22 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_22, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutCirc_mCBE63BBF3F9F3F9F978DFCFC8D31A3008164AC7E_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_21, ((int32_t)10), L_22, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_23 = L_21;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_24 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_24, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutCirc_m3726D80658201C37CBB3CA171EC00DE21DEAEBE0_RuntimeMethod_var), NULL);
		NullCheck(L_23);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_23, ((int32_t)11), L_24, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_25 = L_23;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_26 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_26, NULL, (intptr_t)((void*)TweenDefinitions_EaseInElastic_m25B060D17C5BD976B3C8013272928F7E0506892B_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_25, ((int32_t)12), L_26, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_27 = L_25;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_28 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_28, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutElastic_m83CB4224918D22063997EBF9455FE69AE70F81F2_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_27, ((int32_t)13), L_28, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_29 = L_27;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_30 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_30, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutElastic_m128DA83EABB0D66D4B6137854FEF7BC61017E44A_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_29, ((int32_t)14), L_30, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_31 = L_29;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_32 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_32, NULL, (intptr_t)((void*)TweenDefinitions_EaseInQuad_m627E28CA6EA06C7F6BFA6103D8114EDDE4B0A57E_RuntimeMethod_var), NULL);
		NullCheck(L_31);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_31, ((int32_t)15), L_32, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_33 = L_31;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_34 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_34, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutQuad_m28F8C975E643FF49F6EEA267BF48849FC32E7D33_RuntimeMethod_var), NULL);
		NullCheck(L_33);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_33, ((int32_t)16), L_34, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_35 = L_33;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_36 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_36, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutQuad_m50E3DB26C317AAD39DC147C5A1F5C0B51D6B2F85_RuntimeMethod_var), NULL);
		NullCheck(L_35);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_35, ((int32_t)17), L_36, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_37 = L_35;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_38 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_38);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_38, NULL, (intptr_t)((void*)TweenDefinitions_EaseInQuart_mB26D32DF4BD3AB5A3B794C929AF46FDA70F3D706_RuntimeMethod_var), NULL);
		NullCheck(L_37);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_37, ((int32_t)18), L_38, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_39 = L_37;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_40 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_40);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_40, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutQuart_m223DF318D9683D22FE54399F26D3243AB2BEA0B0_RuntimeMethod_var), NULL);
		NullCheck(L_39);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_39, ((int32_t)19), L_40, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_41 = L_39;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_42 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_42);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_42, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutQuart_m9F78C05288E0D3D4E2ED8F0165A5B688CAD4C989_RuntimeMethod_var), NULL);
		NullCheck(L_41);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_41, ((int32_t)20), L_42, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_43 = L_41;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_44 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_44);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_44, NULL, (intptr_t)((void*)TweenDefinitions_EaseInExpo_mAC12A66562B9B3DE580F24CB71612CB25434D8A0_RuntimeMethod_var), NULL);
		NullCheck(L_43);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_43, ((int32_t)21), L_44, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_45 = L_43;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_46 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_46);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_46, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutExpo_mFA2C1384A325A6CDF6802FD2CC18861E0EDB29C8_RuntimeMethod_var), NULL);
		NullCheck(L_45);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_45, ((int32_t)22), L_46, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_47 = L_45;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_48 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_48, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutExpo_m89FFB87FD6F4D6A70FE539EA948D6B15B865440D_RuntimeMethod_var), NULL);
		NullCheck(L_47);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_47, ((int32_t)23), L_48, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_49 = L_47;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_50 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_50);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_50, NULL, (intptr_t)((void*)TweenDefinitions_EaseInBack_m4C9759647F4DAA6FB12BCC770F0CBF0948927DC0_RuntimeMethod_var), NULL);
		NullCheck(L_49);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_49, ((int32_t)24), L_50, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_51 = L_49;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_52 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_52);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_52, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutBack_mA4D4871C986827EE3130CFABDE4874680F255173_RuntimeMethod_var), NULL);
		NullCheck(L_51);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_51, ((int32_t)25), L_52, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_53 = L_51;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_54 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_54, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutBack_mBC0861A3248F36B1979E44DFACE41894D098647A_RuntimeMethod_var), NULL);
		NullCheck(L_53);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_53, ((int32_t)26), L_54, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_55 = L_53;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_56 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_56, NULL, (intptr_t)((void*)TweenDefinitions_EaseInBounce_m3B71864B7DB785E8B9049A4D09A9682831619F60_RuntimeMethod_var), NULL);
		NullCheck(L_55);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_55, ((int32_t)27), L_56, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_57 = L_55;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_58 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_58);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_58, NULL, (intptr_t)((void*)TweenDefinitions_EaseOutBounce_mB8984988849B198C7744BB6E46965B29397AEBAA_RuntimeMethod_var), NULL);
		NullCheck(L_57);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_57, ((int32_t)28), L_58, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		Dictionary_2_t52BBDF539922E2CB002E2A4E04C89071030E4897* L_59 = L_57;
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* L_60 = (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*)il2cpp_codegen_object_new(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441(L_60, NULL, (intptr_t)((void*)TweenDefinitions_EaseInOutBounce_m38B7CE2841C42A4C13549DC21A527C1A506A8F18_RuntimeMethod_var), NULL);
		NullCheck(L_59);
		Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251(L_59, ((int32_t)29), L_60, Dictionary_2_Add_mD968EE455982947B7705352B2B4F1F31C9444251_RuntimeMethod_var);
		ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8* L_61 = (ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4D4FAEAC587F886751CFD89551B0993B129256F8_il2cpp_TypeInfo_var);
		NullCheck(L_61);
		ReadOnlyDictionary_2__ctor_m0352EA29028410EECDBAA6634DC33EFA53169B13(L_61, L_59, ReadOnlyDictionary_2__ctor_m0352EA29028410EECDBAA6634DC33EFA53169B13_RuntimeMethod_var);
		((TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_StaticFields*)il2cpp_codegen_static_fields_for(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var))->___TweenMap_0 = L_61;
		Il2CppCodeGenWriteBarrier((void**)(&((TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_StaticFields*)il2cpp_codegen_static_fields_for(TweenDefinitions_tB35C664580A5AC5FC78107554368C2F2AA69652E_il2cpp_TypeInfo_var))->___TweenMap_0), (void*)L_61);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_Multicast(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	float retVal = 0.0f;
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* currentDelegate = reinterpret_cast<TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E*>(delegatesToInvoke[i]);
		typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
		retVal = ((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___x0, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
	return retVal;
}
float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_OpenInst(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___x0, method);
}
float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_OpenStatic(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	typedef float (*FunctionPointerType) (float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___method_ptr_0)(___x0, method);
}
float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_OpenStaticInvoker(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker1< float, float >::Invoke(__this->___method_ptr_0, method, NULL, ___x0);
}
float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_ClosedStaticInvoker(TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	return InvokerFuncInvoker2< float, RuntimeObject*, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___x0);
}
IL2CPP_EXTERN_C  float DelegatePInvokeWrapper_TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method)
{
	typedef float (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	float returnValue = il2cppPInvokeFunc(___x0);

	return returnValue;
}
// System.Void DTT.Tweening.TweenDefinitions/TweenFunction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TweenFunction__ctor_mF278D1352840C6821BE7033464F93E70B68E0441 (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = parameterCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___object0 == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_Multicast;
}
// System.Single DTT.Tweening.TweenDefinitions/TweenFunction::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7 (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult DTT.Tweening.TweenDefinitions/TweenFunction::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TweenFunction_BeginInvoke_m8D5362A09013DEE55853356E34048D8B474AE86B (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___x0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Single DTT.Tweening.TweenDefinitions/TweenFunction::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TweenFunction_EndInvoke_m1CB3F36F1D1AA7543D73E9B1458DFE9C569C8928 (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(float*)UnBox ((RuntimeObject*)__result);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float TweenFunction_Invoke_m4980AEE854D82DA263D06116C238A57E81B499E7_inline (TweenFunction_t1D7AC0C0AA94B5EF0F7A8FD23E8563A7F5D1D95E* __this, float ___x0, const RuntimeMethod* method) 
{
	typedef float (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___x0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mA8F89FB04FEA0F48A4F22EC84B5F9ADB2914341F_gshared_inline (Action_1_t310F18CB4338A2740CA701F160C62E2C3198E66A* __this, float ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
