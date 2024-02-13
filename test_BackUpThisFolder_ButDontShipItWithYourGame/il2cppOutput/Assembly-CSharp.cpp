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
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<DTT.MinigameMemory.MemoryGameResults>
struct Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// Naninovel.Async.IAwaiter`1<Naninovel.Async.AsyncUnit>
struct IAwaiter_1_tC810BA3359AAE9BD6CDE3AE016DB7CBE5AEAC7FC;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// Naninovel.LiteralMap`1<System.Type>
struct LiteralMap_1_t0A373787D7B676A6BD89788B8FE86155F1264498;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// DTT.MinigameMemory.Board
struct Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29;
// Naninovel.BooleanParameter
struct BooleanParameter_tA9DA60DB40938BBBB165C4F5B60E677A60287E4D;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CircleSlider
struct CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058;
// Naninovel.Command
struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Naninovel.DecimalParameter
struct DecimalParameter_tAC78550EC6390C5BD697E360EBC0C0DC3B5FDC92;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// ExitMiniGame
struct ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// Naninovel.Commands.HidePrinter
struct HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654;
// Naninovel.Async.IAwaiter
struct IAwaiter_t9FBB15ABCCD94BDF578511AC8A3CECE0EF498286;
// Naninovel.ICameraManager
struct ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// Naninovel.IInputManager
struct IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30;
// Naninovel.IScriptPlayer
struct IScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F;
// Naninovel.ITextPrinterActor
struct ITextPrinterActor_t85322AB98E3AF97CED63BD1FB247050D72551934;
// Naninovel.IUIManager
struct IUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// JustRotate
struct JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// DTT.MinigameMemory.MemoryGameManager
struct MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D;
// DTT.MinigameMemory.MemoryGameResults
struct MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC;
// DTT.MinigameMemory.MemoryGameSettings
struct MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// PressedBtn
struct PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// SliderRunTo1
struct SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3;
// SliderValuePass
struct SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// StartMiniGame
struct StartMiniGame_t01429F4AFE08A290865AD13C4061000273C485D5;
// System.String
struct String_t;
// Naninovel.StringParameter
struct StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// DTT.MinigameBase.Timer.Timer
struct Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// ExitMiniGame/<NaninovelScene>d__3
struct U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEngineService_t59FEE49F6DEEEF1FEC6B22F2D254162FF228B2CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteralBDCBF3FE7BA07673C062ECF48ACD69B3F39EF467;
IL2CPP_EXTERN_C String_t* _stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B;
IL2CPP_EXTERN_C String_t* _stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D920836AD3A41CEDB4007FB9223E1287844A15;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNaninovelSceneU3Ed__3_System_Collections_IEnumerator_Reset_m6BBAF9D1BD8EB9B25EFF8DC752D82D594C42F6B1_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

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

// ExitMiniGame/<NaninovelScene>d__3
struct U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0  : public RuntimeObject
{
	// System.Int32 ExitMiniGame/<NaninovelScene>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ExitMiniGame/<NaninovelScene>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// Naninovel.Async.AsyncUnit
struct AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457__padding[1];
	};
};

struct AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457_StaticFields
{
	// Naninovel.Async.AsyncUnit Naninovel.Async.AsyncUnit::Default
	AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457 ___Default_0;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
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

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1 
{
	// System.String Naninovel.PlaybackSpot::scriptName
	String_t* ___scriptName_1;
	// System.Int32 Naninovel.PlaybackSpot::lineIndex
	int32_t ___lineIndex_2;
	// System.Int32 Naninovel.PlaybackSpot::inlineIndex
	int32_t ___inlineIndex_3;
};

struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1_StaticFields
{
	// Naninovel.PlaybackSpot Naninovel.PlaybackSpot::Invalid
	PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1 ___Invalid_0;
};
// Native definition for P/Invoke marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1_marshaled_pinvoke
{
	char* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};
// Native definition for COM marshalling of Naninovel.PlaybackSpot
struct PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1_marshaled_com
{
	Il2CppChar* ___scriptName_1;
	int32_t ___lineIndex_2;
	int32_t ___inlineIndex_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// Naninovel.UniTask`1<Naninovel.Async.AsyncUnit>
struct UniTask_1_t8644ADA1B984E0BD3BE7F3F5D9E152964908FF6E 
{
	// T Naninovel.UniTask`1::result
	AsyncUnit_tF322D82CE13800A1A3E74B0144357D3852B8A457 ___result_0;
	// Naninovel.Async.IAwaiter`1<T> Naninovel.UniTask`1::awaiter
	RuntimeObject* ___awaiter_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC 
{
	// System.Threading.CancellationToken Naninovel.AsyncToken::<CancellationToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCancellationTokenU3Ek__BackingField_0;
	// System.Threading.CancellationToken Naninovel.AsyncToken::<CompletionToken>k__BackingField
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___U3CCompletionTokenU3Ek__BackingField_1;
};
// Native definition for P/Invoke marshalling of Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC_marshaled_pinvoke
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___U3CCancellationTokenU3Ek__BackingField_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke ___U3CCompletionTokenU3Ek__BackingField_1;
};
// Native definition for COM marshalling of Naninovel.AsyncToken
struct AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC_marshaled_com
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___U3CCancellationTokenU3Ek__BackingField_0;
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com ___U3CCompletionTokenU3Ek__BackingField_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// Naninovel.Command
struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230  : public RuntimeObject
{
	// Naninovel.BooleanParameter Naninovel.Command::Wait
	BooleanParameter_tA9DA60DB40938BBBB165C4F5B60E677A60287E4D* ___Wait_2;
	// Naninovel.StringParameter Naninovel.Command::ConditionalExpression
	StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* ___ConditionalExpression_3;
	// Naninovel.PlaybackSpot Naninovel.Command::playbackSpot
	PlaybackSpot_t4D9A509F489E78BCBF6C9FDEB16FE08F9AD1A4A1 ___playbackSpot_4;
};

struct Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230_StaticFields
{
	// Naninovel.LiteralMap`1<System.Type> Naninovel.Command::commandTypesCache
	LiteralMap_1_t0A373787D7B676A6BD89788B8FE86155F1264498* ___commandTypesCache_5;
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

// DTT.MinigameMemory.MemoryGameResults
struct MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC  : public RuntimeObject
{
	// System.TimeSpan DTT.MinigameMemory.MemoryGameResults::timeTaken
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeTaken_0;
	// System.Int32 DTT.MinigameMemory.MemoryGameResults::amountOfTurns
	int32_t ___amountOfTurns_1;
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

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// Naninovel.Commands.PrinterCommand
struct PrinterCommand_tCE2C910AD7B6DF69A556466EA13608F392C2300A  : public Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230
{
	// Naninovel.ITextPrinterActor Naninovel.Commands.PrinterCommand::heldPrinterActor
	RuntimeObject* ___heldPrinterActor_6;
};

// StartMiniGame
struct StartMiniGame_t01429F4AFE08A290865AD13C4061000273C485D5  : public Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F 
{
	// Naninovel.Async.IAwaiter Naninovel.UniTask::awaiter
	RuntimeObject* ___awaiter_1;
};

struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_StaticFields
{
	// Naninovel.UniTask`1<Naninovel.Async.AsyncUnit> Naninovel.UniTask::DefaultAsyncUnitTask
	UniTask_1_t8644ADA1B984E0BD3BE7F3F5D9E152964908FF6E ___DefaultAsyncUnitTask_0;
	// Naninovel.UniTask Naninovel.UniTask::CanceledUniTask
	UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F ___CanceledUniTask_2;
};
// Native definition for P/Invoke marshalling of Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_marshaled_pinvoke
{
	RuntimeObject* ___awaiter_1;
};
// Native definition for COM marshalling of Naninovel.UniTask
struct UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_marshaled_com
{
	RuntimeObject* ___awaiter_1;
};

// System.Action`1<DTT.MinigameMemory.MemoryGameResults>
struct Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Naninovel.Commands.HidePrinter
struct HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654  : public PrinterCommand_tCE2C910AD7B6DF69A556466EA13608F392C2300A
{
	// Naninovel.StringParameter Naninovel.Commands.HidePrinter::PrinterId
	StringParameter_t75528776F4DDC47A097390780DFBD953EE2C3D53* ___PrinterId_7;
	// Naninovel.DecimalParameter Naninovel.Commands.HidePrinter::Duration
	DecimalParameter_tAC78550EC6390C5BD697E360EBC0C0DC3B5FDC92* ___Duration_8;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CircleSlider
struct CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean CircleSlider::b
	bool ___b_4;
	// UnityEngine.UI.Image CircleSlider::image
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___image_5;
	// System.Single CircleSlider::speed
	float ___speed_6;
	// System.Single CircleSlider::time
	float ___time_7;
	// UnityEngine.UI.Text CircleSlider::progress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progress_8;
};

// ExitMiniGame
struct ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// DTT.MinigameMemory.MemoryGameManager ExitMiniGame::_gameManager
	MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* ____gameManager_4;
};

// JustRotate
struct JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean JustRotate::canRotate
	bool ___canRotate_4;
	// System.Single JustRotate::speed
	float ___speed_5;
};

// DTT.MinigameMemory.MemoryGameManager
struct MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action DTT.MinigameMemory.MemoryGameManager::Started
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Started_4;
	// System.Action`1<System.Boolean> DTT.MinigameMemory.MemoryGameManager::Paused
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___Paused_5;
	// System.Action`1<DTT.MinigameMemory.MemoryGameResults> DTT.MinigameMemory.MemoryGameManager::Finish
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* ___Finish_6;
	// DTT.MinigameMemory.Board DTT.MinigameMemory.MemoryGameManager::_board
	Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* ____board_7;
	// DTT.MinigameBase.Timer.Timer DTT.MinigameMemory.MemoryGameManager::_timer
	Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* ____timer_8;
	// System.Boolean DTT.MinigameMemory.MemoryGameManager::_isPaused
	bool ____isPaused_9;
	// System.Boolean DTT.MinigameMemory.MemoryGameManager::_isGameActive
	bool ____isGameActive_10;
	// DTT.MinigameMemory.MemoryGameSettings DTT.MinigameMemory.MemoryGameManager::_settings
	MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* ____settings_11;
	// System.Int32 DTT.MinigameMemory.MemoryGameManager::_amountOfTurns
	int32_t ____amountOfTurns_12;
};

// PlayAudio
struct PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioSource PlayAudio::ass
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___ass_4;
};

// PressedBtn
struct PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PressedBtn::btn
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___btn_4;
	// UnityEngine.Transform PressedBtn::myIcon
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___myIcon_5;
};

// SliderRunTo1
struct SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean SliderRunTo1::b
	bool ___b_4;
	// UnityEngine.UI.Slider SliderRunTo1::slider
	Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* ___slider_5;
	// System.Single SliderRunTo1::speed
	float ___speed_6;
	// System.Single SliderRunTo1::time
	float ___time_7;
};

// SliderValuePass
struct SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SliderValuePass::progress
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___progress_4;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared (const RuntimeMethod* method) ;

// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, float ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void PressedBtn::OnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) ;
// System.Void PressedBtn::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<DTT.MinigameMemory.MemoryGameResults>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mDEB1E21B28C7A17921A0512F7AD510E2D2FF2E0D (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DTT.MinigameMemory.MemoryGameManager::add_Finish(System.Action`1<DTT.MinigameMemory.MemoryGameResults>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_add_Finish_m2888B034FE59C132713FB9E9F9F2E90D16F19E81 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ExitMiniGame::NaninovelScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExitMiniGame_NaninovelScene_m14A8F97130269E48BAA6AF5DC41A45A1CB2E9110 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void ExitMiniGame/<NaninovelScene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNaninovelSceneU3Ed__3__ctor_m4B3A2E2BD088A3ACC4F94C7CBDD13E702D7C8C8B (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.MemoryGameManager::remove_Finish(System.Action`1<DTT.MinigameMemory.MemoryGameResults>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_remove_Finish_m5E317935BBC80E864BA514EE2F84C22522393EAB (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.ICameraManager>()
inline RuntimeObject* Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.IScriptPlayer>()
inline RuntimeObject* Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// Naninovel.UniTask Naninovel.ScriptPlayerExtensions::PreloadAndPlayAsync(Naninovel.IScriptPlayer,System.String,System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F ScriptPlayerExtensions_PreloadAndPlayAsync_mC8424A39DE2525166813528F5475077B9D21DBF0 (RuntimeObject* ___scriptPlayer0, String_t* ___scriptName1, int32_t ___startLineIndex2, int32_t ___startInlineIndex3, String_t* ___label4, const RuntimeMethod* method) ;
// System.Void Naninovel.UniTaskExtensions::Forget(Naninovel.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskExtensions_Forget_mE106EEC1DE52F87DC6529D50F89C212559F18659 (UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F ___task0, const RuntimeMethod* method) ;
// System.Void Naninovel.Commands.HidePrinter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HidePrinter__ctor_m0E698597AC7D7FE31E477C232BD2F3BBE91B6401 (HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654* __this, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::UnloadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2 (String_t* ___sceneName0, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.IInputManager>()
inline RuntimeObject* Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// TService Naninovel.Engine::GetService<Naninovel.IUIManager>()
inline RuntimeObject* Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))Engine_GetService_TisRuntimeObject_mB3D6CEB116C55E9EBFFAB2F828CB46AF2DFE8081_gshared)(method);
}
// Naninovel.UniTask Naninovel.UniTask::get_CompletedTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E (const RuntimeMethod* method) ;
// System.Void Naninovel.Command::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A (Command_tED6E65C5D153E4FFAEAA905CA6353319A4F9F230* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
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
// System.Void CircleSlider::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider_Start_m6AE9A64452308957253285B8C3F01CB999F756DC (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_0;
		L_0 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(__this, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		__this->___image_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___image_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void CircleSlider::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider_Update_mEAE72D122EA1F00E41FF9062651F48B48E83D1FA (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(b)
		bool L_0 = __this->___b_4;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		// time+=Time.deltaTime*speed;
		float L_1 = __this->___time_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___speed_6;
		__this->___time_7 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// image.fillAmount= time;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4 = __this->___image_5;
		float L_5 = __this->___time_7;
		NullCheck(L_4);
		Image_set_fillAmount_m8A9B55F47F966A3214EAC4ACBFE198776A98FAA7(L_4, L_5, NULL);
		// if(progress)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___progress_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m93896EF7D68FA113C42D3FE2BC6F661FC7EF514A(L_6, NULL);
		if (!L_7)
		{
			goto IL_006e;
		}
	}
	{
		// progress.text = (int)(image.fillAmount*100)+"%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___progress_8;
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_9 = __this->___image_5;
		NullCheck(L_9);
		float L_10;
		L_10 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline(L_9, NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(((float)il2cpp_codegen_multiply(L_10, (100.0f))));
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_11, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
	}

IL_006e:
	{
		// if(time>1)
		float L_13 = __this->___time_7;
		if ((!(((float)L_13) > ((float)(1.0f)))))
		{
			goto IL_0086;
		}
	}
	{
		// time=0;
		__this->___time_7 = (0.0f);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void CircleSlider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircleSlider__ctor_m62FA48BB6ADA7D3F0CF5A3D515E64F662E85C0F0 (CircleSlider_tDD246504DF10243844F74794A7AC586D29B86058* __this, const RuntimeMethod* method) 
{
	{
		// public bool b=true;
		__this->___b_4 = (bool)1;
		// public float speed=0.5f;
		__this->___speed_6 = (0.5f);
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
// System.Void JustRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JustRotate_Update_mCF011C9447F4A8F52F83B8FEAA7463FDDFAF5452 (JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758* __this, const RuntimeMethod* method) 
{
	{
		// if(canRotate)
		bool L_0 = __this->___canRotate_4;
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		// transform.Rotate(speed*Vector3.forward*Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_2 = __this->___speed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_2, L_3, NULL);
		float L_5;
		L_5 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_5, NULL);
		NullCheck(L_1);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_6, NULL);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void JustRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JustRotate__ctor_mCB13490E96F212DED7A9E79F59828664A3077904 (JustRotate_t7A7AF59707484773D75628E6497B5BCE13E6B758* __this, const RuntimeMethod* method) 
{
	{
		// public bool canRotate=true;
		__this->___canRotate_4 = (bool)1;
		// public float speed=10;
		__this->___speed_5 = (10.0f);
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
// System.Void PlayAudio::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_Start_m86A14EA0830911AFD81D145AB2E7F7AEE7C6C77B (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PlayAudio::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio_Play_mC9765105BF490EA9F3816CC17DEAA7720FB002FB (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
{
	{
		// ass.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___ass_4;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// }
		return;
	}
}
// System.Void PlayAudio::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayAudio__ctor_mFB4A06CE9F21D57E725F284B2C55494834E2B421 (PlayAudio_t8D8028E5431E061B3E5C5EDF4CC8966AA4044708* __this, const RuntimeMethod* method) 
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
// System.Void PressedBtn::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_Start_m63FAB8454BD7EBF556ED9D63B7FCDC2B13CDB2B4 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// btn = GetComponent<Button>();
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0;
		L_0 = Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB(__this, Component_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mFF8BA4CA5D7158D1D6249559A3289E7A6DF0A2BB_RuntimeMethod_var);
		__this->___btn_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___btn_4), (void*)L_0);
		// if(transform.childCount>0)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Transform_get_childCount_mE9C29C702AB662CC540CA053EDE48BDAFA35B4B0(L_1, NULL);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_002c;
		}
	}
	{
		// myIcon = transform.GetChild(0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_3, 0, NULL);
		__this->___myIcon_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myIcon_5), (void*)L_4);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(myIcon!=null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myIcon_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// myIcon.localScale = Vector3.one ;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myIcon_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_3, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (myIcon != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___myIcon_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// myIcon.localScale = Vector3.one * 1.2f;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___myIcon_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (1.20000005f), NULL);
		NullCheck(L_2);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_2, L_4, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerDown_mBF113802FF349AA8B498B4A3A396093927063471 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnPressed();
		PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerClick_mF0B5834FE4812C4298947F9C267B49BF1B4FF910 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerEnter_m36DE7E1BBC84EEDDBA9424A6DFF518EDD25E50EE (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnPressed();
		PressedBtn_OnPressed_m1A864C9661EFB49A4C76E72EB336559A565F534A(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn_OnPointerExit_m495852C731419224916A6FA058390A3B2F6726FD (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	{
		// OnClick();
		PressedBtn_OnClick_m3C3F9C9A70A71532378C411B55376115C322DC6D(__this, NULL);
		// }
		return;
	}
}
// System.Void PressedBtn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PressedBtn__ctor_m826378726FDD4C7643097873E46960675F3E8BF5 (PressedBtn_t1D1747401DF9516091BFC81EC07EB49CCF614893* __this, const RuntimeMethod* method) 
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
// System.Void SliderRunTo1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1_Start_m4AAB1FDA12B530B7C49D304B95198889B57DDC14 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// slider = GetComponent<Slider>();
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_0;
		L_0 = Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA(__this, Component_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_mCE53A354B934E9BDB2E8D3094F4E33EBA8FFAFBA_RuntimeMethod_var);
		__this->___slider_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___slider_5), (void*)L_0);
		// }
		return;
	}
}
// System.Void SliderRunTo1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1_Update_m4DA8480B33A0D072A98B99ABBAA544C539DD0330 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	{
		// if(b)
		bool L_0 = __this->___b_4;
		if (!L_0)
		{
			goto IL_0051;
		}
	}
	{
		// time+=Time.deltaTime*speed;
		float L_1 = __this->___time_7;
		float L_2;
		L_2 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_3 = __this->___speed_6;
		__this->___time_7 = ((float)il2cpp_codegen_add(L_1, ((float)il2cpp_codegen_multiply(L_2, L_3))));
		// slider.value = time;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4 = __this->___slider_5;
		float L_5 = __this->___time_7;
		NullCheck(L_4);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// if(time>1)
		float L_6 = __this->___time_7;
		if ((!(((float)L_6) > ((float)(1.0f)))))
		{
			goto IL_0051;
		}
	}
	{
		// b = false;
		__this->___b_4 = (bool)0;
		// time=0;
		__this->___time_7 = (0.0f);
	}

IL_0051:
	{
		// }
		return;
	}
}
// System.Void SliderRunTo1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderRunTo1__ctor_m56F8C938A45BC24AF24076F32B8918CDEE61FBC6 (SliderRunTo1_t8F7452D80CDE3249D9823870C2160D53D56AD1A3* __this, const RuntimeMethod* method) 
{
	{
		// public bool b=true;
		__this->___b_4 = (bool)1;
		// public float speed=0.5f;
		__this->___speed_6 = (0.5f);
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
// System.Void SliderValuePass::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass_Start_m0FEC6932F01B69FD1BB800F684C7C97F5FFE6CFC (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// progress = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0;
		L_0 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___progress_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___progress_4), (void*)L_0);
		// }
		return;
	}
}
// System.Void SliderValuePass::UpdateProgress(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass_UpdateProgress_mD6E59B90095418375D083F59CC8DB2AD902B576B (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, float ___content0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// progress.text = Mathf.Round( content*100) +"%";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___progress_4;
		float L_1 = ___content0;
		float L_2;
		L_2 = bankers_roundf(((float)il2cpp_codegen_multiply(L_1, (100.0f))));
		V_0 = L_2;
		String_t* L_3;
		L_3 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_3, _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_4);
		// }
		return;
	}
}
// System.Void SliderValuePass::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SliderValuePass__ctor_m9BA53DA42B8045C5FD6D811719B5C782930CA890 (SliderValuePass_tFD10A012689F14AD72B5BD934906580C2D619C34* __this, const RuntimeMethod* method) 
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
// System.Void ExitMiniGame::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitMiniGame_OnEnable_mA00B620A5F71918AAFE2B7D12C84D837A3B89636 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameManager.Finish += ExitMemoryGame;
		MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* L_0 = __this->____gameManager_4;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_1 = (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)il2cpp_codegen_object_new(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDEB1E21B28C7A17921A0512F7AD510E2D2FF2E0D(L_1, __this, (intptr_t)((void*)ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		MemoryGameManager_add_Finish_m2888B034FE59C132713FB9E9F9F2E90D16F19E81(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitMiniGame::ExitMemoryGame(DTT.MinigameMemory.MemoryGameResults)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* ___results0, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(NaninovelScene());
		RuntimeObject* L_0;
		L_0 = ExitMiniGame_NaninovelScene_m14A8F97130269E48BAA6AF5DC41A45A1CB2E9110(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ExitMiniGame::NaninovelScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExitMiniGame_NaninovelScene_m14A8F97130269E48BAA6AF5DC41A45A1CB2E9110 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* L_0 = (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0*)il2cpp_codegen_object_new(U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CNaninovelSceneU3Ed__3__ctor_m4B3A2E2BD088A3ACC4F94C7CBDD13E702D7C8C8B(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void ExitMiniGame::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitMiniGame_OnDisable_m9941D17820B2F51422C9F7033B7C1FF8737A9E62 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _gameManager.Finish -= ExitMemoryGame;
		MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* L_0 = __this->____gameManager_4;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_1 = (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)il2cpp_codegen_object_new(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_mDEB1E21B28C7A17921A0512F7AD510E2D2FF2E0D(L_1, __this, (intptr_t)((void*)ExitMiniGame_ExitMemoryGame_mAEABC3EADC8D1CE2355070CCD19A75A5BE198F61_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		MemoryGameManager_remove_Finish_m5E317935BBC80E864BA514EE2F84C22522393EAB(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void ExitMiniGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExitMiniGame__ctor_m1D5CD0007403C48F52A43E3A7B8DEEBA56955357 (ExitMiniGame_t799DBE0E053820A463AD57B97B28E390828E93AC* __this, const RuntimeMethod* method) 
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
// System.Void ExitMiniGame/<NaninovelScene>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNaninovelSceneU3Ed__3__ctor_m4B3A2E2BD088A3ACC4F94C7CBDD13E702D7C8C8B (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ExitMiniGame/<NaninovelScene>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNaninovelSceneU3Ed__3_System_IDisposable_Dispose_m5B5DED5AB80BDBFD3564D0E27EB64D244706B93A (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ExitMiniGame/<NaninovelScene>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNaninovelSceneU3Ed__3_MoveNext_m6B0912E4ACCAA05694E54096F5B3A196A39671C2 (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDCBF3FE7BA07673C062ECF48ACD69B3F39EF467);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D920836AD3A41CEDB4007FB9223E1287844A15);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_008b;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var naniCamera = Engine.GetService<ICameraManager>().Camera;
		il2cpp_codegen_runtime_class_init_inline(Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71(Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71_RuntimeMethod_var);
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(0 /* UnityEngine.Camera Naninovel.ICameraManager::get_Camera() */, ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_il2cpp_TypeInfo_var, L_3);
		// naniCamera.enabled = true;
		NullCheck(L_4);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)1, NULL);
		// var scriptPlayer = Engine.GetService<IScriptPlayer>();
		RuntimeObject* L_5;
		L_5 = Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB(Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB_RuntimeMethod_var);
		// scriptPlayer.PreloadAndPlayAsync("Scene2", label: "DialogAfterGame").Forget();
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_6;
		L_6 = ScriptPlayerExtensions_PreloadAndPlayAsync_mC8424A39DE2525166813528F5475077B9D21DBF0(L_5, _stringLiteralBDCBF3FE7BA07673C062ECF48ACD69B3F39EF467, 0, 0, _stringLiteralF6D920836AD3A41CEDB4007FB9223E1287844A15, NULL);
		UniTaskExtensions_Forget_mE106EEC1DE52F87DC6529D50F89C212559F18659(L_6, NULL);
		// var hidePrinter = new HidePrinter();
		HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654* L_7 = (HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654*)il2cpp_codegen_object_new(HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		HidePrinter__ctor_m0E698597AC7D7FE31E477C232BD2F3BBE91B6401(L_7, NULL);
		// hidePrinter.ExecuteAsync().Forget();
		il2cpp_codegen_initobj((&V_1), sizeof(AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC));
		AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC L_8 = V_1;
		NullCheck(L_7);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_9;
		L_9 = VirtualFuncInvoker1< UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC >::Invoke(4 /* Naninovel.UniTask Naninovel.Command::ExecuteAsync(Naninovel.AsyncToken) */, L_7, L_8);
		UniTaskExtensions_Forget_mE106EEC1DE52F87DC6529D50F89C212559F18659(L_9, NULL);
		// SceneManager.LoadSceneAsync("SampleScene");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_10;
		L_10 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(_stringLiteralDB4D83D6871102EE8099E4F8AF38EB3DFE88EB6B, NULL);
		// SceneManager.UnloadSceneAsync("PlayGame");
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_11;
		L_11 = SceneManager_UnloadSceneAsync_mF6F4161EF48C6622AA1B5BC66B4A2CA736C4D2B2(_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03, NULL);
		// var inputManager = Engine.GetService<IInputManager>();
		RuntimeObject* L_12;
		L_12 = Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C(Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C_RuntimeMethod_var);
		// inputManager.ProcessInput = true;
		NullCheck(L_12);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Naninovel.IInputManager::set_ProcessInput(System.Boolean) */, IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_il2cpp_TypeInfo_var, L_12, (bool)1);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008b:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object ExitMiniGame/<NaninovelScene>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNaninovelSceneU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0A1CBC83EC18FF7469CB78BB75D81EB4D0E28462 (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ExitMiniGame/<NaninovelScene>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNaninovelSceneU3Ed__3_System_Collections_IEnumerator_Reset_m6BBAF9D1BD8EB9B25EFF8DC752D82D594C42F6B1 (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNaninovelSceneU3Ed__3_System_Collections_IEnumerator_Reset_m6BBAF9D1BD8EB9B25EFF8DC752D82D594C42F6B1_RuntimeMethod_var)));
	}
}
// System.Object ExitMiniGame/<NaninovelScene>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CNaninovelSceneU3Ed__3_System_Collections_IEnumerator_get_Current_m49D2E110452E3B01E6E06BD10CE9A010A9BCCF72 (U3CNaninovelSceneU3Ed__3_t8F27AFE70BB636B715157640ED0857DA4AB1E6F0* __this, const RuntimeMethod* method) 
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
// Naninovel.UniTask StartMiniGame::ExecuteAsync(Naninovel.AsyncToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F StartMiniGame_ExecuteAsync_m591AF49359CB967910917479C39E247F9DB245DD (StartMiniGame_t01429F4AFE08A290865AD13C4061000273C485D5* __this, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC ___asyncToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEngineService_t59FEE49F6DEEEF1FEC6B22F2D254162FF228B2CA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var inputManager = Engine.GetService<IInputManager>();
		il2cpp_codegen_runtime_class_init_inline(Engine_t78D4BF67E4A8B8B4470ADB2F3B4F0CC6A6A5D4EA_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C(Engine_GetService_TisIInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_mADB3943E2873DD992FC067F6E89DC11CB23EA48C_RuntimeMethod_var);
		// inputManager.ProcessInput = false;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(1 /* System.Void Naninovel.IInputManager::set_ProcessInput(System.Boolean) */, IInputManager_t736F5D8377DFCE344BDE0FF9733FEBBA35153A30_il2cpp_TypeInfo_var, L_0, (bool)0);
		// var scriptPlayer = Engine.GetService<IScriptPlayer>();
		RuntimeObject* L_1;
		L_1 = Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB(Engine_GetService_TisIScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_m2F7592F0179E74555761B361EF6E56905FC445BB_RuntimeMethod_var);
		// scriptPlayer.Stop();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(33 /* System.Void Naninovel.IScriptPlayer::Stop() */, IScriptPlayer_t717766F7E637BE16D2CFE617921D9555AECE992F_il2cpp_TypeInfo_var, L_1);
		// var hidePrinter = new HidePrinter();
		HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654* L_2 = (HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654*)il2cpp_codegen_object_new(HidePrinter_t40C43C8FAD38C4A6239A1C60C39986CCF0A27654_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HidePrinter__ctor_m0E698597AC7D7FE31E477C232BD2F3BBE91B6401(L_2, NULL);
		// hidePrinter.ExecuteAsync(asyncToken).Forget();
		AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC L_3 = ___asyncToken0;
		NullCheck(L_2);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_4;
		L_4 = VirtualFuncInvoker1< UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F, AsyncToken_t97A434FB5AACA459F220428E39BD49D17A5D01AC >::Invoke(4 /* Naninovel.UniTask Naninovel.Command::ExecuteAsync(Naninovel.AsyncToken) */, L_2, L_3);
		UniTaskExtensions_Forget_mE106EEC1DE52F87DC6529D50F89C212559F18659(L_4, NULL);
		// var naniCamera = Engine.GetService<ICameraManager>().Camera;
		RuntimeObject* L_5;
		L_5 = Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71(Engine_GetService_TisICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_m3D42C8ABB38406CF2A153E6EEA6B4F5D8A7AAC71_RuntimeMethod_var);
		NullCheck(L_5);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6;
		L_6 = InterfaceFuncInvoker0< Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* >::Invoke(0 /* UnityEngine.Camera Naninovel.ICameraManager::get_Camera() */, ICameraManager_t36EEFE00136BF5C7A34F1EE8E0FB86CBE3F4516E_il2cpp_TypeInfo_var, L_5);
		// naniCamera.enabled = false;
		NullCheck(L_6);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)0, NULL);
		// var stateManage = Engine.GetService<IUIManager>();
		RuntimeObject* L_7;
		L_7 = Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72(Engine_GetService_TisIUIManager_t633A623DF7EA7478C61CE5B7D66CCBDD6ADAC89D_mD69C3AF9C1A01AA2D554B2552FCBFA8912088C72_RuntimeMethod_var);
		// stateManage.ResetService();
		NullCheck(L_7);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Naninovel.IEngineService::ResetService() */, IEngineService_t59FEE49F6DEEEF1FEC6B22F2D254162FF228B2CA_il2cpp_TypeInfo_var, L_7);
		// SceneManager.LoadSceneAsync("PlayGame");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_8;
		L_8 = SceneManager_LoadSceneAsync_m84D316B1993A4E69F9E8CDE30531687B701F9300(_stringLiteralF66B0BB72ECF80981CDE899B3EDB277B2ACCBF03, NULL);
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F_il2cpp_TypeInfo_var);
		UniTask_t02B19207DA12296944C66ECF5D9D16B02955725F L_9;
		L_9 = UniTask_get_CompletedTask_m5EBD05E23B0C07E376AC552DEFB812495F17B84E(NULL);
		return L_9;
	}
}
// System.Void StartMiniGame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StartMiniGame__ctor_mCBDD578FDDA4ECBB24220B62C5781FBD4875548F (StartMiniGame_t01429F4AFE08A290865AD13C4061000273C485D5* __this, const RuntimeMethod* method) 
{
	{
		Command__ctor_mE994C72AB71761E80DD18F9591502EAE0ABE301A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// public float fillAmount { get { return m_FillAmount; } set { if (SetPropertyUtility.SetStruct(ref m_FillAmount, Mathf.Clamp01(value))) SetVerticesDirty(); } }
		float L_0 = __this->___m_FillAmount_43;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___d0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a1;
		float L_1 = L_0.___x_2;
		float L_2 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a1;
		float L_4 = L_3.___y_3;
		float L_5 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a1;
		float L_7 = L_6.___z_4;
		float L_8 = ___d0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mC9B289F1E15C42C597180C9FE6FB492495B51D02_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
