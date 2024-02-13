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
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C;
// System.Action`1<DTT.MinigameMemory.Card>
struct Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD;
// System.Action`1<DTT.MinigameMemory.MemoryGameResults>
struct Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>
struct Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24;
// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C;
// System.Collections.Generic.IList`1<UnityEngine.Sprite>
struct IList_1_tE3BFA40B7BF923102A15606BA82E1D0CF1BC9578;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<DTT.MinigameMemory.Card>
struct List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>
struct ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// DTT.MinigameMemory.Card[]
struct CardU5BU5D_t33EB763D3145AE63FD70E594657935773C965F73;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// DTT.MinigameMemory.AssignedValueShuffleAlgorithm
struct AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// DTT.MinigameMemory.Board
struct Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// DTT.MinigameMemory.Card
struct Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// DTT.MinigameMemory.FisherYatesShuffleAlgorithm
struct FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// DTT.MinigameMemory.IShuffleAlgorithm
struct IShuffleAlgorithm_t218D11982F99FF2BD4F93022EF2469C5B1294F9F;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// DTT.MinigameMemory.KnuthShuffleAlgorithm
struct KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0;
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
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectOffset
struct RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// DTT.MinigameBase.Timer.Timer
struct Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// DTT.MinigameMemory.Board/<>c
struct U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE;
// DTT.MinigameMemory.Board/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316;
// DTT.MinigameMemory.Board/<CompareDelay>d__32
struct U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// DTT.MinigameMemory.Card/<FadeInCard>d__29
struct U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51;
// DTT.MinigameMemory.Card/<FadeOutCard>d__28
struct U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848;
// DTT.MinigameMemory.Card/<Flip>d__27
struct U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral67D6A56F002B5413056AEF8A210BE2021B2CF98E;
IL2CPP_EXTERN_C String_t* _stringLiteralB3CCA58F28E1003103BB6E6DC8943FE17C5E8744;
IL2CPP_EXTERN_C String_t* _stringLiteralB4BD97AB9F27A0322B285DCA30CD7974EF4C3AA0;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA733DAE4BD136322173FA194B85079A4D46B3A;
IL2CPP_EXTERN_C const RuntimeMethod* Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTimer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1_mFE066EF8496C4FEB1CE50027AC7314F19A1192B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCard_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D_mA674C7B7081D11C0CD9B82B7DE9321D4594142E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IShuffleAlgorithm_Shuffle_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m931C2385CAC2BFDE0DAC0A5568D9FF084A0D7F5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetRange_m299D3BF11D70BF46058A6C15A8929D04B345860E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m21B25A26C68BC5166CF33BCEE62F835DC412939C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCompareDelayU3Ed__32_System_Collections_IEnumerator_Reset_mE355822761B0D204BC43DE42E28112EFCC5B21CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeInCardU3Ed__29_System_Collections_IEnumerator_Reset_mDC4D3D14A4E2325F111003C33B0069624F9C8925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFadeOutCardU3Ed__28_System_Collections_IEnumerator_Reset_mB650903F037336D163C4DC052891F53371202402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CFlipU3Ed__27_System_Collections_IEnumerator_Reset_m13E173337D6D40F0EFB0C8D62D26CCAF01005F36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CClearCardsU3Eb__27_0_m76BBC808F538E57C5572848C797DBC63F2E642ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass31_0_U3CLockCardsU3Eb__0_mA92CBE0DA59B53167928F80559CD09FAEE24BAEB_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tB3F2667DE473BB2B72BECC7C8461B482FDD568F2 
{
};

// System.Collections.Generic.List`1<DTT.MinigameMemory.Card>
struct List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CardU5BU5D_t33EB763D3145AE63FD70E594657935773C965F73* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CardU5BU5D_t33EB763D3145AE63FD70E594657935773C965F73* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SpriteU5BU5D_tCEE379E10CAD9DBFA770B331480592548ED0EA1B* ___s_emptyArray_5;
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>
struct ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};
struct Il2CppArrayBounds;

// DTT.MinigameMemory.AssignedValueShuffleAlgorithm
struct AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82  : public RuntimeObject
{
	// System.Random DTT.MinigameMemory.AssignedValueShuffleAlgorithm::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
	// System.Collections.Generic.List`1<System.Double> DTT.MinigameMemory.AssignedValueShuffleAlgorithm::_randoms
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* ____randoms_1;
};

// DTT.MinigameMemory.FisherYatesShuffleAlgorithm
struct FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11  : public RuntimeObject
{
	// System.Random DTT.MinigameMemory.FisherYatesShuffleAlgorithm::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
};

// DTT.MinigameMemory.KnuthShuffleAlgorithm
struct KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0  : public RuntimeObject
{
	// System.Random DTT.MinigameMemory.KnuthShuffleAlgorithm::_random
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ____random_0;
};

// System.Random
struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8  : public RuntimeObject
{
	// System.Int32 System.Random::_inext
	int32_t ____inext_0;
	// System.Int32 System.Random::_inextp
	int32_t ____inextp_1;
	// System.Int32[] System.Random::_seedArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____seedArray_2;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_StaticFields
{
	// System.Random System.Random::s_globalRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___s_globalRandom_4;
};

struct Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_ThreadStaticFields
{
	// System.Random System.Random::t_threadRandom
	Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* ___t_threadRandom_3;
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

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// DTT.MinigameMemory.Board/<>c
struct U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE  : public RuntimeObject
{
};

struct U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields
{
	// DTT.MinigameMemory.Board/<>c DTT.MinigameMemory.Board/<>c::<>9
	U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* ___U3CU3E9_0;
	// System.Action`1<DTT.MinigameMemory.Card> DTT.MinigameMemory.Board/<>c::<>9__27_0
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___U3CU3E9__27_0_1;
};

// DTT.MinigameMemory.Board/<>c__DisplayClass31_0
struct U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316  : public RuntimeObject
{
	// System.Boolean DTT.MinigameMemory.Board/<>c__DisplayClass31_0::lockCards
	bool ___lockCards_0;
};

// DTT.MinigameMemory.Board/<CompareDelay>d__32
struct U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B  : public RuntimeObject
{
	// System.Int32 DTT.MinigameMemory.Board/<CompareDelay>d__32::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.MinigameMemory.Board/<CompareDelay>d__32::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DTT.MinigameMemory.Board DTT.MinigameMemory.Board/<CompareDelay>d__32::<>4__this
	Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* ___U3CU3E4__this_2;
	// DTT.MinigameMemory.Card DTT.MinigameMemory.Board/<CompareDelay>d__32::clickedCard
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___clickedCard_3;
};

// DTT.MinigameMemory.Card/<FadeInCard>d__29
struct U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51  : public RuntimeObject
{
	// System.Int32 DTT.MinigameMemory.Card/<FadeInCard>d__29::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.MinigameMemory.Card/<FadeInCard>d__29::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DTT.MinigameMemory.Card DTT.MinigameMemory.Card/<FadeInCard>d__29::<>4__this
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___U3CU3E4__this_2;
	// System.Single DTT.MinigameMemory.Card/<FadeInCard>d__29::time
	float ___time_3;
	// System.Single DTT.MinigameMemory.Card/<FadeInCard>d__29::<t>5__2
	float ___U3CtU3E5__2_4;
};

// DTT.MinigameMemory.Card/<FadeOutCard>d__28
struct U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848  : public RuntimeObject
{
	// System.Int32 DTT.MinigameMemory.Card/<FadeOutCard>d__28::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.MinigameMemory.Card/<FadeOutCard>d__28::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DTT.MinigameMemory.Card DTT.MinigameMemory.Card/<FadeOutCard>d__28::<>4__this
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___U3CU3E4__this_2;
	// System.Single DTT.MinigameMemory.Card/<FadeOutCard>d__28::time
	float ___time_3;
	// System.Single DTT.MinigameMemory.Card/<FadeOutCard>d__28::<t>5__2
	float ___U3CtU3E5__2_4;
};

// System.Collections.Generic.List`1/Enumerator<DTT.MinigameMemory.Card>
struct Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
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

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// DTT.MinigameMemory.Card/<Flip>d__27
struct U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC  : public RuntimeObject
{
	// System.Int32 DTT.MinigameMemory.Card/<Flip>d__27::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DTT.MinigameMemory.Card/<Flip>d__27::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DTT.MinigameMemory.Card DTT.MinigameMemory.Card/<Flip>d__27::<>4__this
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___U3CU3E4__this_2;
	// UnityEngine.Quaternion DTT.MinigameMemory.Card/<Flip>d__27::targetRotation
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation_3;
	// UnityEngine.Sprite DTT.MinigameMemory.Card/<Flip>d__27::sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite_4;
	// System.Single DTT.MinigameMemory.Card/<Flip>d__27::time
	float ___time_5;
	// UnityEngine.Quaternion DTT.MinigameMemory.Card/<Flip>d__27::<myRotation>5__2
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___U3CmyRotationU3E5__2_6;
	// System.Single DTT.MinigameMemory.Card/<Flip>d__27::<t>5__3
	float ___U3CtU3E5__3_7;
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

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action`1<System.Boolean>
struct Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C  : public MulticastDelegate_t
{
};

// System.Action`1<DTT.MinigameMemory.Card>
struct Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD  : public MulticastDelegate_t
{
};

// System.Action`1<DTT.MinigameMemory.MemoryGameResults>
struct Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>
struct Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24  : public MulticastDelegate_t
{
};

// System.Action`2<System.Object,System.Object>
struct Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DTT.MinigameMemory.MemoryGameSettings
struct MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// DTT.MinigameMemory.ShuffleAlgorithms DTT.MinigameMemory.MemoryGameSettings::_shuffleAlgorithm
	int32_t ____shuffleAlgorithm_4;
	// System.Boolean DTT.MinigameMemory.MemoryGameSettings::_alignLastRow
	bool ____alignLastRow_5;
	// DTT.MinigameMemory.CardModes DTT.MinigameMemory.MemoryGameSettings::_cardMode
	int32_t ____cardMode_6;
	// System.Int32 DTT.MinigameMemory.MemoryGameSettings::_amountOfCards
	int32_t ____amountOfCards_7;
	// DTT.MinigameMemory.BoardModes DTT.MinigameMemory.MemoryGameSettings::_boardMode
	int32_t ____boardMode_8;
	// System.Int32 DTT.MinigameMemory.MemoryGameSettings::_cardsOnBoardLimit
	int32_t ____cardsOnBoardLimit_9;
	// System.Int32 DTT.MinigameMemory.MemoryGameSettings::_refillAtFoundPercentage
	int32_t ____refillAtFoundPercentage_10;
	// System.Single DTT.MinigameMemory.MemoryGameSettings::_cardAnimationSpeed
	float ____cardAnimationSpeed_11;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::_cardBacks
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____cardBacks_12;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::_cardSprites
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____cardSprites_13;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// DTT.MinigameMemory.Board
struct Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action DTT.MinigameMemory.Board::CardsTurned
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___CardsTurned_4;
	// System.Action DTT.MinigameMemory.Board::AllCardsMatched
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___AllCardsMatched_5;
	// UnityEngine.UI.GridLayoutGroup DTT.MinigameMemory.Board::_grid
	GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* ____grid_6;
	// System.Single DTT.MinigameMemory.Board::_cardSpacing
	float ____cardSpacing_7;
	// System.Single DTT.MinigameMemory.Board::_maximumCardSize
	float ____maximumCardSize_8;
	// UnityEngine.GameObject DTT.MinigameMemory.Board::_cardPrefab
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cardPrefab_9;
	// System.Collections.Generic.List`1<UnityEngine.Sprite> DTT.MinigameMemory.Board::_cardsInGame
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* ____cardsInGame_10;
	// System.Collections.Generic.List`1<DTT.MinigameMemory.Card> DTT.MinigameMemory.Board::_cardsOnBoard
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* ____cardsOnBoard_11;
	// System.Collections.Generic.List`1<DTT.MinigameMemory.Card> DTT.MinigameMemory.Board::_activeCards
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* ____activeCards_12;
	// System.Collections.Generic.List`1<DTT.MinigameMemory.Card> DTT.MinigameMemory.Board::_inactiveCards
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* ____inactiveCards_13;
	// DTT.MinigameMemory.IShuffleAlgorithm DTT.MinigameMemory.Board::_shuffleAlgorithm
	RuntimeObject* ____shuffleAlgorithm_14;
	// System.Int32 DTT.MinigameMemory.Board::_maxCardsInRow
	int32_t ____maxCardsInRow_15;
	// DTT.MinigameMemory.Card DTT.MinigameMemory.Board::_firstSelectedCard
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ____firstSelectedCard_16;
	// System.Int32 DTT.MinigameMemory.Board::_activateAtMatchesFoundPecentage
	int32_t ____activateAtMatchesFoundPecentage_17;
	// System.Single DTT.MinigameMemory.Board::_cardAnimationSpeed
	float ____cardAnimationSpeed_18;
};

// DTT.MinigameMemory.Card
struct Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Action`1<DTT.MinigameMemory.Card> DTT.MinigameMemory.Card::Clicked
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___Clicked_4;
	// System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card> DTT.MinigameMemory.Card::GoodMatch
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___GoodMatch_5;
	// System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card> DTT.MinigameMemory.Card::BadMatch
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___BadMatch_6;
	// System.Boolean DTT.MinigameMemory.Card::canClick
	bool ___canClick_7;
	// UnityEngine.Sprite DTT.MinigameMemory.Card::_frontSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____frontSprite_8;
	// UnityEngine.Sprite DTT.MinigameMemory.Card::_backSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____backSprite_9;
	// UnityEngine.GameObject DTT.MinigameMemory.Card::_cardContent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____cardContent_10;
	// UnityEngine.UI.Button DTT.MinigameMemory.Card::_cardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ____cardButton_11;
	// System.Boolean DTT.MinigameMemory.Card::_isShowing
	bool ____isShowing_12;
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

// DTT.MinigameBase.Timer.Timer
struct Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Diagnostics.Stopwatch DTT.MinigameBase.Timer.Timer::_stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ____stopwatch_4;
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

// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectOffset UnityEngine.UI.LayoutGroup::m_Padding
	RectOffset_t6358774A0DEEABA4586840CB9BC7DC88B39660B5* ___m_Padding_4;
	// UnityEngine.TextAnchor UnityEngine.UI.LayoutGroup::m_ChildAlignment
	int32_t ___m_ChildAlignment_5;
	// UnityEngine.RectTransform UnityEngine.UI.LayoutGroup::m_Rect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_Rect_6;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.LayoutGroup::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_7;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalMinSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalMinSize_8;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalPreferredSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalPreferredSize_9;
	// UnityEngine.Vector2 UnityEngine.UI.LayoutGroup::m_TotalFlexibleSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_TotalFlexibleSize_10;
	// System.Collections.Generic.List`1<UnityEngine.RectTransform> UnityEngine.UI.LayoutGroup::m_RectChildren
	List_1_t5ED555E220A2C0CA4F1CC393401AF0D7BA5B456B* ___m_RectChildren_11;
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

// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940  : public LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE
{
	// UnityEngine.UI.GridLayoutGroup/Corner UnityEngine.UI.GridLayoutGroup::m_StartCorner
	int32_t ___m_StartCorner_12;
	// UnityEngine.UI.GridLayoutGroup/Axis UnityEngine.UI.GridLayoutGroup::m_StartAxis
	int32_t ___m_StartAxis_13;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_CellSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_CellSize_14;
	// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::m_Spacing
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Spacing_15;
	// UnityEngine.UI.GridLayoutGroup/Constraint UnityEngine.UI.GridLayoutGroup::m_Constraint
	int32_t ___m_Constraint_16;
	// System.Int32 UnityEngine.UI.GridLayoutGroup::m_ConstraintCount
	int32_t ___m_ConstraintCount_17;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<System.Object>::GetRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Object,System.Object>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Object>::AsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;

// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// DTT.MinigameMemory.IShuffleAlgorithm DTT.MinigameMemory.MemoryGameSettings::get_ShuffleAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryGameSettings_get_ShuffleAlgorithm_m6B9A434E923F5D59918225259C81B8FA7ED73DF9 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_RefillAtFoundPercentage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_RefillAtFoundPercentage_mD187B915C5E931AFDB5848376736D37192070165_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Single DTT.MinigameMemory.MemoryGameSettings::get_CardAnimationSpeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryGameSettings_get_CardAnimationSpeed_m615500D3D1E00BE9889615A14ED8B75D6F6013D9_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::ClearCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_ClearCards_m1533DE99786DF20478D4A057DA8F3B456491B01C (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) ;
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_AmountOfCardsInGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_AmountOfCardsInGame_m57CC64F65E96232A92DCD12684B20A7995D54309 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::get_CardSprites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* MemoryGameSettings_get_CardSprites_mA7AB5B6DBBCE0D86928503E48243207D25230399 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::CreateCards(System.Int32,System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_CreateCards_m0644F37B58930009FD9AD41197C0C1E2010D4B24 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___amountOfCards0, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___CardSprites1, const RuntimeMethod* method) ;
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_AmountOfCardsOnBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_AmountOfCardsOnBoard_mB424C27D3AAF0CC0D3A2670E3FD0D48CF85C3D3E (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::SetupGrid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SetupGrid_m821946BB5000A086A7EA3F3CB7018DBC3B563168 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___numberOfCards0, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::get_CardBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* MemoryGameSettings_get_CardBacks_m8817DB2CD75A558DD475B68CF644533C8C8E51B4 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::CreateBoardCards(System.Int32,System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_CreateBoardCards_m6500094999BB046CE9CC79DC5F75D9CB187BBDCF (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___amountOfCardsOnBoard0, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___backSprites1, const RuntimeMethod* method) ;
// System.Boolean DTT.MinigameMemory.MemoryGameSettings::get_AlignLastRow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryGameSettings_get_AlignLastRow_m3B69A6FF0215C52C6064286A162367EF8FADEF29_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::AlignLastRowCards(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_AlignLastRowCards_m4D2C04F50D325FEA93E47B9F8DD5672DADE0DE2D (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___backSprites0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::ActivateCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_ActivateCards_m4F163E8DC71F849E9CE0DC0CFC217A1C6CC0E911 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::GetEnumerator()
inline Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<DTT.MinigameMemory.Card>::Dispose()
inline void Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689 (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<DTT.MinigameMemory.Card>::get_Current()
inline Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_inline (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48* __this, const RuntimeMethod* method)
{
	return ((  Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* (*) (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Action`1<DTT.MinigameMemory.Card>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865 (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DTT.MinigameMemory.Card::add_Clicked(System.Action`1<DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_Clicked_m554697B76F2279E5DE3883E5EA01C8627E4D681F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6 (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m6A0E7FE9DF9AE6C4BEE58611CB55F64FC3D79052_gshared)(__this, ___object0, ___method1, method);
}
// System.Void DTT.MinigameMemory.Card::add_GoodMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_GoodMatch_mEB7D512115A491CE1D346A44D18C68F66386DD28 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::add_BadMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_BadMatch_mB06940C278A83A5D7B28BCFA6CADC6EA397549AC (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<DTT.MinigameMemory.Card>::MoveNext()
inline bool Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23 (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void DTT.MinigameMemory.Card::remove_Clicked(System.Action`1<DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_Clicked_m3A2A91065F58BBCA4D803B2272B75D09715E1AE5 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::remove_GoodMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_GoodMatch_m96AF03BA53EE9BA167B4438201A5B7C08BA30F57 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::remove_BadMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_BadMatch_m9FD68301D565F7C771F642C7A72758C3EE1A918F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>::get_Count()
inline int32_t ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170 (ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156*, const RuntimeMethod*))ReadOnlyCollection_1_get_Count_mE6BED30C94187FC8CC2C7E5CAF0163455240223C_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) ;
// T System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC (ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156*, int32_t, const RuntimeMethod*))ReadOnlyCollection_1_get_Item_m88FE6EF1106EAB22F63554956C77E25339159136_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Add(T)
inline void List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Min(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_cellSize(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_spacing(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraint(UnityEngine.UI.GridLayoutGroup/Constraint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_constraint_m632CB37D0D79A12DE81372EE819348CD1226B84A (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.GridLayoutGroup::set_constraintCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GridLayoutGroup_set_constraintCount_m685F6D5254B6D77AF8BE070EF3DCA5F049B3D043 (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::Clear()
inline void List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m75BF3B0A3747B60491845FA41612FE7F795F0A59_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<DTT.MinigameMemory.Card>()
inline Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* GameObject_GetComponent_TisCard_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D_mA674C7B7081D11C0CD9B82B7DE9321D4594142E7 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void DTT.MinigameMemory.Card::Init(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Init_mA1875233EE60CF17F290165FC530A8F904AC011C (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___backSprite0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::Add(T)
inline void List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::.ctor()
inline void List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::get_Count()
inline int32_t List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Count()
inline int32_t List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1<UnityEngine.Sprite>::GetRange(System.Int32,System.Int32)
inline List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* List_1_GetRange_m299D3BF11D70BF46058A6C15A8929D04B345860E (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	return ((  List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, int32_t, const RuntimeMethod*))List_1_GetRange_m8F5CCE68284D0E231F22C5C2DBBA51B856D70F25_gshared)(__this, ___index0, ___count1, method);
}
// T System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::get_Item(System.Int32)
inline Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Sprite>::get_Item(System.Int32)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void DTT.MinigameMemory.Card::SetFrontsprite(UnityEngine.Sprite)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_SetFrontsprite_m95BD65CE16F636798DC811AFD7892D92E96F4D1B_inline (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___frontSprite0, const RuntimeMethod* method) ;
// System.Boolean DTT.MinigameMemory.Card::get_IsShowing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Card_get_IsShowing_m7E3BF6637CA4506B93A487C779A25B40ABEC1DAE_inline (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::FlipCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::EnableCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_EnableCard_m09BC05CED4624C77B5D1DB1243560F28558814B0 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m21B25A26C68BC5166CF33BCEE62F835DC412939C (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m0D2A25C95EFDC6E9CD22B663D9633426B51E3699_gshared)(__this, ___index0, ___count1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Sprite>::Clear()
inline void List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_cellSize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.UI.GridLayoutGroup::get_spacing()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::MoveToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_MoveToPosition_m91ACDC17A539423AFD0362218392BF36D02C5A77 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::ForEach(System.Action`1<T>)
inline void List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*, const RuntimeMethod*))List_1_ForEach_m47052B1B7C82747D3D5D2CAD15A30DB9AB95FF68_gshared)(__this, ___action0, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::LockCards(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_LockCards_mFBFEA50485ED018AEF74DDC8AF3DB7BAB26A7DBE (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, bool ___lockCards0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.MinigameMemory.Board::CompareDelay(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Board_CompareDelay_m22D935131596478DA2D891153FE8A7750E3B85D5 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___clickedCard0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::Remove(T)
inline bool List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2 (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void DTT.MinigameMemory.Card::DisableCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_DisableCard_m85718BBCFAE0FA9F37269665C43CFB7164E3379F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mB464C309CDCC8638D3E03E9F42DFB8B99C5BFCAD (U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board/<CompareDelay>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompareDelayU3Ed__32__ctor_m68D503C709995992567B7A60C5D5621FF033DDBC (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<DTT.MinigameMemory.Card>::.ctor()
inline void List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64 (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F79602E18B9FFF696A205C5880D8D131540B547 (U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card::CompairToCard(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_CompairToCard_m1D2E2C32336E85F56C5E44FAA0190447FF5C48B8 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___otherCard0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.MinigameMemory.Card::Flip(UnityEngine.Quaternion,UnityEngine.Sprite,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_Flip_m9275E35E6945BFBB32D15B00A1DD3BB669C0C01E (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, float ___time2, const RuntimeMethod* method) ;
// System.Void System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>::Invoke(T1,T2)
inline void Action_2_Invoke_mAC9E04A8652C3F932379EFD51F33C8D8608519F9_inline (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___arg10, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*, const RuntimeMethod*))Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline)(__this, ___arg10, ___arg21, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.MinigameMemory.Card::FadeOutCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_FadeOutCard_mA94A21D57CDC38710022C584C37BE48828E55478 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___time0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DTT.MinigameMemory.Card::FadeInCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_FadeInCard_mD64DA57BC4F1D2982BA9287EA14168D349DA4530 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___time0, const RuntimeMethod* method) ;
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302 (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityEvent::RemoveListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C (UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___call0, const RuntimeMethod* method) ;
// System.Void System.Action`1<DTT.MinigameMemory.Card>::Invoke(T)
inline void Action_1_Invoke_m5B3A11EB9DDE90FD514DAB79871FB85D079A8312_inline (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Void DTT.MinigameMemory.Card/<Flip>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlipU3Ed__27__ctor_m9E9B56F939B6D5B82C1F179F14D39F7FE4B53589 (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card/<FadeOutCard>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCardU3Ed__28__ctor_mBBD7C3D87D2FDE09B51386035D49E575EE5BAE7B (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Card/<FadeInCard>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCardU3Ed__29__ctor_m5052052262B4E42206CE932EC38203F1B236145F (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Lerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___a0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.TimeSpan DTT.MinigameBase.Timer.Timer::get_TimePassed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Timer_get_TimePassed_mE695AA3375BF4710897C0EC00263E737CBEEC166 (Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameBase.Timer.Timer::Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Begin_m5F18E9143CF69BC629274B1ED9124A57A3A55339 (Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::SetupGame(DTT.MinigameMemory.MemoryGameSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SetupGame_m4020409E7A5B9E0CCC3DCCDEFB0F637CFCAFF551 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* ___settings0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameBase.Timer.Timer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Pause_mDB3FBF4DD4969E1D12E5884C3583C1555696C0B0 (Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Boolean>::Invoke(T)
inline void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*, bool, const RuntimeMethod*))Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline)(__this, ___obj0, method);
}
// System.Void DTT.MinigameBase.Timer.Timer::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Resume_mCA1C9A24416DD04DAD1ECC520B4436463988E1DD (Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.MemoryGameManager::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Continue_m534E8EAA773615AC2D3813A20A35D2377BDDDB39 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.MemoryGameManager::StartGame(DTT.MinigameMemory.MemoryGameSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_StartGame_m6580E2FEC64EAA93CF050DD7A92B0EC6E39BD83C (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* ___settings0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameBase.Timer.Timer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_Stop_mB4F6727665D47B1DC601C4D9A0B4D1F93497D4B1 (Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.MemoryGameResults::.ctor(System.TimeSpan,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameResults__ctor_mA4C85C67843830AA48AB417308F2BD0F33C18B33 (MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeTaken0, int32_t ___amountOfTurns1, const RuntimeMethod* method) ;
// System.Void System.Action`1<DTT.MinigameMemory.MemoryGameResults>::Invoke(T)
inline void Action_1_Invoke_m1521731AF4738754577A66777793ABD76A01C144_inline (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* __this, MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*, MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T UnityEngine.GameObject::AddComponent<DTT.MinigameBase.Timer.Timer>()
inline Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* GameObject_AddComponent_TisTimer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1_mFE066EF8496C4FEB1CE50027AC7314F19A1192B0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::add_CardsTurned(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_add_CardsTurned_m2898FACCE3EBAD4108BD949FD18E3A133708F6F5 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::add_AllCardsMatched(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_add_AllCardsMatched_mCA598FF008E8D4ED339469487731BEF5EBD9A7CD (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::remove_CardsTurned(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_remove_CardsTurned_mFFC728FA3C710221F4DAAB11407E9F350984282F (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.Board::remove_AllCardsMatched(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_remove_AllCardsMatched_mE365153B68814B4065D9838D7C22A9F77AFED20D (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.TimeSpan::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TimeSpan_ToString_m5B50613FCD29547F04EAE305B2226CB9F490C432 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// DTT.MinigameMemory.IShuffleAlgorithm DTT.MinigameMemory.MemoryGameSettings::GetAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryGameSettings_GetAlgorithm_m21709CD16CB8BE27CC0C73F336690B2408CD1A07 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::GetAmountOfCardsInGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_GetAmountOfCardsInGame_m817318F5ED80B16F6A0048759671563E9E5FB4C4 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::GetAmountOfCardsOnBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_GetAmountOfCardsOnBoard_m22287ED4EDD300CCBE08054872F85466C74AF316 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.Sprite>::AsReadOnly()
inline ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831 (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* __this, const RuntimeMethod* method)
{
	return ((  ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* (*) (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, const RuntimeMethod*))List_1_AsReadOnly_m69D18D2353099DC61F87AD42FF87F25B1A4D299B_gshared)(__this, method);
}
// System.Void DTT.MinigameMemory.FisherYatesShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FisherYatesShuffleAlgorithm__ctor_m3870D9A763000589E7FBCD946CB620A399F6C8AA (FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.KnuthShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KnuthShuffleAlgorithm__ctor_mBB819962E6E6D1842D823D8437B21FB997BF2BE0 (KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0* __this, const RuntimeMethod* method) ;
// System.Void DTT.MinigameMemory.AssignedValueShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssignedValueShuffleAlgorithm__ctor_m253236BB287DC6C02507B5AEB37968392C711975 (AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
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
// System.Void DTT.MinigameMemory.Board::add_CardsTurned(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_add_CardsTurned_m2898FACCE3EBAD4108BD949FD18E3A133708F6F5 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CardsTurned_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CardsTurned_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::remove_CardsTurned(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_remove_CardsTurned_mFFC728FA3C710221F4DAAB11407E9F350984282F (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___CardsTurned_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___CardsTurned_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::add_AllCardsMatched(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_add_AllCardsMatched_mCA598FF008E8D4ED339469487731BEF5EBD9A7CD (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___AllCardsMatched_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___AllCardsMatched_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::remove_AllCardsMatched(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_remove_AllCardsMatched_mE365153B68814B4065D9838D7C22A9F77AFED20D (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___AllCardsMatched_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___AllCardsMatched_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::SetupGame(DTT.MinigameMemory.MemoryGameSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SetupGame_m4020409E7A5B9E0CCC3DCCDEFB0F637CFCAFF551 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* ___settings0, const RuntimeMethod* method) 
{
	{
		// _shuffleAlgorithm = settings.ShuffleAlgorithm;
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_0 = ___settings0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = MemoryGameSettings_get_ShuffleAlgorithm_m6B9A434E923F5D59918225259C81B8FA7ED73DF9(L_0, NULL);
		__this->____shuffleAlgorithm_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____shuffleAlgorithm_14), (void*)L_1);
		// _activateAtMatchesFoundPecentage = settings.RefillAtFoundPercentage;
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_2 = ___settings0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = MemoryGameSettings_get_RefillAtFoundPercentage_mD187B915C5E931AFDB5848376736D37192070165_inline(L_2, NULL);
		__this->____activateAtMatchesFoundPecentage_17 = L_3;
		// _cardAnimationSpeed = settings.CardAnimationSpeed;
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_4 = ___settings0;
		NullCheck(L_4);
		float L_5;
		L_5 = MemoryGameSettings_get_CardAnimationSpeed_m615500D3D1E00BE9889615A14ED8B75D6F6013D9_inline(L_4, NULL);
		__this->____cardAnimationSpeed_18 = L_5;
		// ClearCards();
		Board_ClearCards_m1533DE99786DF20478D4A057DA8F3B456491B01C(__this, NULL);
		// CreateCards(settings.AmountOfCardsInGame, settings.CardSprites);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_6 = ___settings0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = MemoryGameSettings_get_AmountOfCardsInGame_m57CC64F65E96232A92DCD12684B20A7995D54309(L_6, NULL);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_8 = ___settings0;
		NullCheck(L_8);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_9;
		L_9 = MemoryGameSettings_get_CardSprites_mA7AB5B6DBBCE0D86928503E48243207D25230399(L_8, NULL);
		Board_CreateCards_m0644F37B58930009FD9AD41197C0C1E2010D4B24(__this, L_7, L_9, NULL);
		// SetupGrid(settings.AmountOfCardsOnBoard);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_10 = ___settings0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = MemoryGameSettings_get_AmountOfCardsOnBoard_mB424C27D3AAF0CC0D3A2670E3FD0D48CF85C3D3E(L_10, NULL);
		Board_SetupGrid_m821946BB5000A086A7EA3F3CB7018DBC3B563168(__this, L_11, NULL);
		// CreateBoardCards(settings.AmountOfCardsOnBoard, settings.CardBacks);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_12 = ___settings0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = MemoryGameSettings_get_AmountOfCardsOnBoard_mB424C27D3AAF0CC0D3A2670E3FD0D48CF85C3D3E(L_12, NULL);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_14 = ___settings0;
		NullCheck(L_14);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_15;
		L_15 = MemoryGameSettings_get_CardBacks_m8817DB2CD75A558DD475B68CF644533C8C8E51B4(L_14, NULL);
		Board_CreateBoardCards_m6500094999BB046CE9CC79DC5F75D9CB187BBDCF(__this, L_13, L_15, NULL);
		// if (settings.AlignLastRow)
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_16 = ___settings0;
		NullCheck(L_16);
		bool L_17;
		L_17 = MemoryGameSettings_get_AlignLastRow_m3B69A6FF0215C52C6064286A162367EF8FADEF29_inline(L_16, NULL);
		if (!L_17)
		{
			goto IL_006e;
		}
	}
	{
		// AlignLastRowCards(settings.CardBacks);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_18 = ___settings0;
		NullCheck(L_18);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_19;
		L_19 = MemoryGameSettings_get_CardBacks_m8817DB2CD75A558DD475B68CF644533C8C8E51B4(L_18, NULL);
		Board_AlignLastRowCards_m4D2C04F50D325FEA93E47B9F8DD5672DADE0DE2D(__this, L_19, NULL);
	}

IL_006e:
	{
		// ActivateCards();
		Board_ActivateCards_m4F163E8DC71F849E9CE0DC0CFC217A1C6CC0E911(__this, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_OnEnable_m3134F50868B9C94BD151AA28DFE6A3A0999A6D10 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Card card in _cardsOnBoard)
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____cardsOnBoard_11;
		NullCheck(L_0);
		Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 L_1;
		L_1 = List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A(L_0, List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689((&V_0), Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_000e_1:
			{
				// foreach (Card card in _cardsOnBoard)
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_2;
				L_2 = Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_inline((&V_0), Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
				// card.Clicked += OnCardClicked;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_3 = L_2;
				Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_4 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_4, __this, (intptr_t)((void*)Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var), NULL);
				NullCheck(L_3);
				Card_add_Clicked_m554697B76F2279E5DE3883E5EA01C8627E4D681F(L_3, L_4, NULL);
				// card.GoodMatch += RemoveMatchedCards;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_5 = L_3;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_6, __this, (intptr_t)((void*)Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var), NULL);
				NullCheck(L_5);
				Card_add_GoodMatch_mEB7D512115A491CE1D346A44D18C68F66386DD28(L_5, L_6, NULL);
				// card.BadMatch += FlipMatchedCards;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_7, __this, (intptr_t)((void*)Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var), NULL);
				NullCheck(L_5);
				Card_add_BadMatch_mB06940C278A83A5D7B28BCFA6CADC6EA397549AC(L_5, L_7, NULL);
			}

IL_004a_1:
			{
				// foreach (Card card in _cardsOnBoard)
				bool L_8;
				L_8 = Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23((&V_0), Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_OnDisable_mD62F7B63B6F9DCA2CC0F026E4D3DFF03B0FB0AA9 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (Card card in _cardsOnBoard)
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____cardsOnBoard_11;
		NullCheck(L_0);
		Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 L_1;
		L_1 = List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A(L_0, List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0055:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689((&V_0), Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_000e_1:
			{
				// foreach (Card card in _cardsOnBoard)
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_2;
				L_2 = Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_inline((&V_0), Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
				// card.Clicked -= OnCardClicked;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_3 = L_2;
				Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_4 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_4, __this, (intptr_t)((void*)Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var), NULL);
				NullCheck(L_3);
				Card_remove_Clicked_m3A2A91065F58BBCA4D803B2272B75D09715E1AE5(L_3, L_4, NULL);
				// card.GoodMatch -= RemoveMatchedCards;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_5 = L_3;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_6);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_6, __this, (intptr_t)((void*)Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var), NULL);
				NullCheck(L_5);
				Card_remove_GoodMatch_m96AF03BA53EE9BA167B4438201A5B7C08BA30F57(L_5, L_6, NULL);
				// card.BadMatch -= FlipMatchedCards;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_7, __this, (intptr_t)((void*)Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var), NULL);
				NullCheck(L_5);
				Card_remove_BadMatch_m9FD68301D565F7C771F642C7A72758C3EE1A918F(L_5, L_7, NULL);
			}

IL_004a_1:
			{
				// foreach (Card card in _cardsOnBoard)
				bool L_8;
				L_8 = Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23((&V_0), Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0063;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::CreateCards(System.Int32,System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_CreateCards_m0644F37B58930009FD9AD41197C0C1E2010D4B24 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___amountOfCards0, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___CardSprites1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// for (int i = 0; i < (amountOfCards / 2); i++)
		V_1 = 0;
		goto IL_0040;
	}

IL_0004:
	{
		// index = Mathf.FloorToInt( Mathf.Repeat(i, CardSprites.Count));
		int32_t L_0 = V_1;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_1 = ___CardSprites1;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_1, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		float L_3;
		L_3 = Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline(((float)L_0), ((float)L_2), NULL);
		int32_t L_4;
		L_4 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(L_3, NULL);
		V_0 = L_4;
		// _cardsInGame.Add(CardSprites[index]);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = __this->____cardsInGame_10;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_6 = ___CardSprites1;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_8;
		L_8 = ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC(L_6, L_7, ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline(L_5, L_8, List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		// _cardsInGame.Add(CardSprites[index]);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_9 = __this->____cardsInGame_10;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_10 = ___CardSprites1;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_12;
		L_12 = ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC(L_10, L_11, ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		NullCheck(L_9);
		List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_inline(L_9, L_12, List_1_Add_mFA81ADB069A1847FCBD99BF79F75DCBC3B5BA284_RuntimeMethod_var);
		// for (int i = 0; i < (amountOfCards / 2); i++)
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0040:
	{
		// for (int i = 0; i < (amountOfCards / 2); i++)
		int32_t L_14 = V_1;
		int32_t L_15 = ___amountOfCards0;
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(L_15/2)))))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::SetupGrid(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_SetupGrid_m821946BB5000A086A7EA3F3CB7018DBC3B563168 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___numberOfCards0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t G_B3_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B33_0 = 0;
	int32_t G_B40_0 = 0;
	{
		// Rect gridRectangle= ((RectTransform)_grid.transform).rect;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_0 = __this->____grid_6;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_0, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)CastclassSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_0 = L_2;
		// float availableWidth = gridRectangle.width;
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_0), NULL);
		V_1 = L_3;
		// float availableHeight = gridRectangle.height;
		float L_4;
		L_4 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_0), NULL);
		V_2 = L_4;
		// bool isLandscapeOrientation = availableWidth > availableHeight;
		float L_5 = V_1;
		float L_6 = V_2;
		V_3 = (bool)((((float)L_5) > ((float)L_6))? 1 : 0);
		// int occupiedRows = isLandscapeOrientation ? 1 : numberOfCards;
		bool L_7 = V_3;
		if (L_7)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_8 = ___numberOfCards0;
		G_B3_0 = L_8;
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 1;
	}

IL_0032:
	{
		V_4 = G_B3_0;
		// int occupiedColumns = isLandscapeOrientation ? numberOfCards : 1;
		bool L_9 = V_3;
		if (L_9)
		{
			goto IL_003a;
		}
	}
	{
		G_B6_0 = 1;
		goto IL_003b;
	}

IL_003a:
	{
		int32_t L_10 = ___numberOfCards0;
		G_B6_0 = L_10;
	}

IL_003b:
	{
		V_5 = G_B6_0;
		goto IL_0078;
	}

IL_003f:
	{
		// if (isLandscapeOrientation)
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_005e;
		}
	}
	{
		// int division = occupiedColumns % 2 == 0 ? 2 : 3;
		int32_t L_12 = V_5;
		if (!((int32_t)(L_12%2)))
		{
			goto IL_004b;
		}
	}
	{
		G_B11_0 = 3;
		goto IL_004c;
	}

IL_004b:
	{
		G_B11_0 = 2;
	}

IL_004c:
	{
		V_9 = G_B11_0;
		// occupiedRows *= division;
		int32_t L_13 = V_4;
		int32_t L_14 = V_9;
		V_4 = ((int32_t)il2cpp_codegen_multiply(L_13, L_14));
		// occupiedColumns /= division;
		int32_t L_15 = V_5;
		int32_t L_16 = V_9;
		V_5 = ((int32_t)(L_15/L_16));
		goto IL_0078;
	}

IL_005e:
	{
		// int division = occupiedRows % 2 == 0 ? 2 : 3;
		int32_t L_17 = V_4;
		if (!((int32_t)(L_17%2)))
		{
			goto IL_0067;
		}
	}
	{
		G_B15_0 = 3;
		goto IL_0068;
	}

IL_0067:
	{
		G_B15_0 = 2;
	}

IL_0068:
	{
		V_10 = G_B15_0;
		// occupiedRows /= division;
		int32_t L_18 = V_4;
		int32_t L_19 = V_10;
		V_4 = ((int32_t)(L_18/L_19));
		// occupiedColumns *= division;
		int32_t L_20 = V_5;
		int32_t L_21 = V_10;
		V_5 = ((int32_t)il2cpp_codegen_multiply(L_20, L_21));
	}

IL_0078:
	{
		// while(
		//     (isLandscapeOrientation ? occupiedColumns > occupiedRows : occupiedRows > occupiedColumns) &&
		//     (isLandscapeOrientation ?
		//         ((occupiedColumns % 2 == 0 && occupiedColumns / 2 != 1) || (occupiedColumns % 3 == 0 && occupiedColumns / 3 != 1)) :
		//         ((occupiedRows % 2 == 0 && occupiedRows / 2 != 1) || (occupiedRows % 3 == 0 && occupiedRows / 3 != 1))
		//         )
		//     )
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_0083;
		}
	}
	{
		int32_t L_23 = V_4;
		int32_t L_24 = V_5;
		G_B19_0 = ((((int32_t)L_23) > ((int32_t)L_24))? 1 : 0);
		goto IL_0089;
	}

IL_0083:
	{
		int32_t L_25 = V_5;
		int32_t L_26 = V_4;
		G_B19_0 = ((((int32_t)L_25) > ((int32_t)L_26))? 1 : 0);
	}

IL_0089:
	{
		if (!G_B19_0)
		{
			goto IL_00db;
		}
	}
	{
		bool L_27 = V_3;
		if (L_27)
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_28 = V_4;
		if (((int32_t)(L_28%2)))
		{
			goto IL_009b;
		}
	}
	{
		int32_t L_29 = V_4;
		if ((!(((uint32_t)((int32_t)(L_29/2))) == ((uint32_t)1))))
		{
			goto IL_00b0;
		}
	}

IL_009b:
	{
		int32_t L_30 = V_4;
		if (((int32_t)(L_30%3)))
		{
			goto IL_00ad;
		}
	}
	{
		int32_t L_31 = V_4;
		G_B33_0 = ((((int32_t)((((int32_t)((int32_t)(L_31/3))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d6;
	}

IL_00ad:
	{
		G_B33_0 = 0;
		goto IL_00d6;
	}

IL_00b0:
	{
		G_B33_0 = 1;
		goto IL_00d6;
	}

IL_00b3:
	{
		int32_t L_32 = V_5;
		if (((int32_t)(L_32%2)))
		{
			goto IL_00c0;
		}
	}
	{
		int32_t L_33 = V_5;
		if ((!(((uint32_t)((int32_t)(L_33/2))) == ((uint32_t)1))))
		{
			goto IL_00d5;
		}
	}

IL_00c0:
	{
		int32_t L_34 = V_5;
		if (((int32_t)(L_34%3)))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_35 = V_5;
		G_B33_0 = ((((int32_t)((((int32_t)((int32_t)(L_35/3))) == ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00d6;
	}

IL_00d2:
	{
		G_B33_0 = 0;
		goto IL_00d6;
	}

IL_00d5:
	{
		G_B33_0 = 1;
	}

IL_00d6:
	{
		if (G_B33_0)
		{
			goto IL_003f;
		}
	}

IL_00db:
	{
		// _maxCardsInRow = Mathf.Max(occupiedRows, occupiedColumns);
		int32_t L_36 = V_4;
		int32_t L_37 = V_5;
		int32_t L_38;
		L_38 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(L_36, L_37, NULL);
		__this->____maxCardsInRow_15 = L_38;
		// float widthSize = availableWidth / occupiedColumns;
		float L_39 = V_1;
		int32_t L_40 = V_5;
		// float heightSize = availableHeight / occupiedRows;
		float L_41 = V_2;
		int32_t L_42 = V_4;
		V_6 = ((float)(L_41/((float)L_42)));
		// widthSize -= widthSize * _cardSpacing;
		float L_43 = ((float)(L_39/((float)L_40)));
		float L_44 = __this->____cardSpacing_7;
		// heightSize -= heightSize * _cardSpacing;
		float L_45 = V_6;
		float L_46 = V_6;
		float L_47 = __this->____cardSpacing_7;
		V_6 = ((float)il2cpp_codegen_subtract(L_45, ((float)il2cpp_codegen_multiply(L_46, L_47))));
		// float minimumSize = Mathf.Min(widthSize, heightSize);
		float L_48 = V_6;
		float L_49;
		L_49 = Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline(((float)il2cpp_codegen_subtract(L_43, ((float)il2cpp_codegen_multiply(L_43, L_44)))), L_48, NULL);
		V_7 = L_49;
		// if (_maximumCardSize > 0f && minimumSize > _maximumCardSize)
		float L_50 = __this->____maximumCardSize_8;
		if ((!(((float)L_50) > ((float)(0.0f)))))
		{
			goto IL_0135;
		}
	}
	{
		float L_51 = V_7;
		float L_52 = __this->____maximumCardSize_8;
		if ((!(((float)L_51) > ((float)L_52))))
		{
			goto IL_0135;
		}
	}
	{
		// minimumSize = _maximumCardSize;
		float L_53 = __this->____maximumCardSize_8;
		V_7 = L_53;
	}

IL_0135:
	{
		// _grid.cellSize = Vector2.one * minimumSize;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_54 = __this->____grid_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_55;
		L_55 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		float L_56 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_57;
		L_57 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_55, L_56, NULL);
		NullCheck(L_54);
		GridLayoutGroup_set_cellSize_m0A3FF07694BDBF52D973597978FC87B0941BE5F9(L_54, L_57, NULL);
		// _grid.spacing = Vector2.one * minimumSize * _cardSpacing;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_58 = __this->____grid_6;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_59;
		L_59 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		float L_60 = V_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		L_61 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_59, L_60, NULL);
		float L_62 = __this->____cardSpacing_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63;
		L_63 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_61, L_62, NULL);
		NullCheck(L_58);
		GridLayoutGroup_set_spacing_mA5550A683F7B4A7A1510B267B5D4CACEB8981306(L_58, L_63, NULL);
		// GridLayoutGroup.Constraint gridConstraint =
		//     isLandscapeOrientation ?
		//     GridLayoutGroup.Constraint.FixedColumnCount :
		//     GridLayoutGroup.Constraint.FixedRowCount;
		bool L_64 = V_3;
		if (L_64)
		{
			goto IL_0174;
		}
	}
	{
		G_B40_0 = 2;
		goto IL_0175;
	}

IL_0174:
	{
		G_B40_0 = 1;
	}

IL_0175:
	{
		V_8 = G_B40_0;
		// _grid.constraint = gridConstraint;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_65 = __this->____grid_6;
		int32_t L_66 = V_8;
		NullCheck(L_65);
		GridLayoutGroup_set_constraint_m632CB37D0D79A12DE81372EE819348CD1226B84A(L_65, L_66, NULL);
		// _grid.constraintCount = _maxCardsInRow;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_67 = __this->____grid_6;
		int32_t L_68 = __this->____maxCardsInRow_15;
		NullCheck(L_67);
		GridLayoutGroup_set_constraintCount_m685F6D5254B6D77AF8BE070EF3DCA5F049B3D043(L_67, L_68, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::CreateBoardCards(System.Int32,System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_CreateBoardCards_m6500094999BB046CE9CC79DC5F75D9CB187BBDCF (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, int32_t ___amountOfCardsOnBoard0, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___backSprites1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCard_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D_mA674C7B7081D11C0CD9B82B7DE9321D4594142E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* V_3 = NULL;
	{
		// _cardsOnBoard.Clear();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____cardsOnBoard_11;
		NullCheck(L_0);
		List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline(L_0, List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		// _inactiveCards.Clear();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_1 = __this->____inactiveCards_13;
		NullCheck(L_1);
		List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline(L_1, List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		// for (int i = 0; i < amountOfCardsOnBoard; i++)
		V_2 = 0;
		goto IL_00c0;
	}

IL_001d:
	{
		// Card card = Instantiate(_cardPrefab, _grid.transform).GetComponent<Card>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->____cardPrefab_9;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_3 = __this->____grid_6;
		NullCheck(L_3);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811(L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m58C654F1134533E29502629CA67645682B404811_RuntimeMethod_var);
		NullCheck(L_5);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_6;
		L_6 = GameObject_GetComponent_TisCard_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D_mA674C7B7081D11C0CD9B82B7DE9321D4594142E7(L_5, GameObject_GetComponent_TisCard_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D_mA674C7B7081D11C0CD9B82B7DE9321D4594142E7_RuntimeMethod_var);
		V_3 = L_6;
		// row = Mathf.FloorToInt(i / _maxCardsInRow);
		int32_t L_7 = V_2;
		int32_t L_8 = __this->____maxCardsInRow_15;
		int32_t L_9;
		L_9 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_7/L_8))), NULL);
		V_0 = L_9;
		// cardbackIndex = ((i % _maxCardsInRow) + (row % backSprites.Count)) % backSprites.Count;
		int32_t L_10 = V_2;
		int32_t L_11 = __this->____maxCardsInRow_15;
		int32_t L_12 = V_0;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_13 = ___backSprites1;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_13, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_15 = ___backSprites1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_15, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_add(((int32_t)(L_10%L_11)), ((int32_t)(L_12%L_14))))%L_16));
		// card.Init(backSprites[cardbackIndex]);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_17 = V_3;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_18 = ___backSprites1;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20;
		L_20 = ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC(L_18, L_19, ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		NullCheck(L_17);
		Card_Init_mA1875233EE60CF17F290165FC530A8F904AC011C(L_17, L_20, NULL);
		// _cardsOnBoard.Add(card);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_21 = __this->____cardsOnBoard_11;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_22 = V_3;
		NullCheck(L_21);
		List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline(L_21, L_22, List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		// _inactiveCards.Add(card);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_23 = __this->____inactiveCards_13;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_24 = V_3;
		NullCheck(L_23);
		List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline(L_23, L_24, List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		// card.Clicked += OnCardClicked;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_25 = V_3;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_26 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_26, __this, (intptr_t)((void*)Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var), NULL);
		NullCheck(L_25);
		Card_add_Clicked_m554697B76F2279E5DE3883E5EA01C8627E4D681F(L_25, L_26, NULL);
		// card.GoodMatch += RemoveMatchedCards;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_27 = V_3;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_28 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		NullCheck(L_28);
		Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_28, __this, (intptr_t)((void*)Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var), NULL);
		NullCheck(L_27);
		Card_add_GoodMatch_mEB7D512115A491CE1D346A44D18C68F66386DD28(L_27, L_28, NULL);
		// card.BadMatch += FlipMatchedCards;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_29 = V_3;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_30 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_30, __this, (intptr_t)((void*)Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var), NULL);
		NullCheck(L_29);
		Card_add_BadMatch_mB06940C278A83A5D7B28BCFA6CADC6EA397549AC(L_29, L_30, NULL);
		// for (int i = 0; i < amountOfCardsOnBoard; i++)
		int32_t L_31 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00c0:
	{
		// for (int i = 0; i < amountOfCardsOnBoard; i++)
		int32_t L_32 = V_2;
		int32_t L_33 = ___amountOfCardsOnBoard0;
		if ((((int32_t)L_32) < ((int32_t)L_33)))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::ActivateCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_ActivateCards_m4F163E8DC71F849E9CE0DC0CFC217A1C6CC0E911 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IShuffleAlgorithm_Shuffle_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m931C2385CAC2BFDE0DAC0A5568D9FF084A0D7F5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetRange_m299D3BF11D70BF46058A6C15A8929D04B345860E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m21B25A26C68BC5166CF33BCEE62F835DC412939C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* V_0 = NULL;
	int32_t V_1 = 0;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* V_2 = NULL;
	{
		// List<Sprite> sprites = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		V_0 = L_0;
		// if (_inactiveCards.Count < _cardsInGame.Count)
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_1 = __this->____inactiveCards_13;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_1, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = __this->____cardsInGame_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_3, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0038;
		}
	}
	{
		// sprites = _cardsInGame.GetRange(0, _inactiveCards.Count);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_5 = __this->____cardsInGame_10;
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_6 = __this->____inactiveCards_13;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_6, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		NullCheck(L_5);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8;
		L_8 = List_1_GetRange_m299D3BF11D70BF46058A6C15A8929D04B345860E(L_5, 0, L_7, List_1_GetRange_m299D3BF11D70BF46058A6C15A8929D04B345860E_RuntimeMethod_var);
		V_0 = L_8;
		goto IL_003f;
	}

IL_0038:
	{
		// sprites = _cardsInGame;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_9 = __this->____cardsInGame_10;
		V_0 = L_9;
	}

IL_003f:
	{
		// sprites = _shuffleAlgorithm.Shuffle(sprites);
		RuntimeObject* L_10 = __this->____shuffleAlgorithm_14;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_11 = V_0;
		NullCheck(L_10);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_12;
		L_12 = GenericInterfaceFuncInvoker1< List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*, List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* >::Invoke(IShuffleAlgorithm_Shuffle_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m931C2385CAC2BFDE0DAC0A5568D9FF084A0D7F5B_RuntimeMethod_var, L_10, L_11);
		V_0 = L_12;
		// for (int i = 0; i < sprites.Count; i++)
		V_1 = 0;
		goto IL_009a;
	}

IL_0050:
	{
		// Card card = _inactiveCards[i];
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_13 = __this->____inactiveCards_13;
		int32_t L_14 = V_1;
		NullCheck(L_13);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_15;
		L_15 = List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E(L_13, L_14, List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		V_2 = L_15;
		// card.SetFrontsprite(sprites[i]);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_16 = V_2;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_17 = V_0;
		int32_t L_18 = V_1;
		NullCheck(L_17);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19;
		L_19 = List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354(L_17, L_18, List_1_get_Item_m9F1FC9C6704A2B80B7E5AD5B3A8C88FAF4D55354_RuntimeMethod_var);
		NullCheck(L_16);
		Card_SetFrontsprite_m95BD65CE16F636798DC811AFD7892D92E96F4D1B_inline(L_16, L_19, NULL);
		// _activeCards.Add(card);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_20 = __this->____activeCards_12;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_21 = V_2;
		NullCheck(L_20);
		List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline(L_20, L_21, List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		// if (card.IsShowing)
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_22 = V_2;
		NullCheck(L_22);
		bool L_23;
		L_23 = Card_get_IsShowing_m7E3BF6637CA4506B93A487C779A25B40ABEC1DAE_inline(L_22, NULL);
		if (!L_23)
		{
			goto IL_008a;
		}
	}
	{
		// card.FlipCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_24 = V_2;
		float L_25 = __this->____cardAnimationSpeed_18;
		NullCheck(L_24);
		Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411(L_24, L_25, NULL);
	}

IL_008a:
	{
		// card.EnableCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_26 = V_2;
		float L_27 = __this->____cardAnimationSpeed_18;
		NullCheck(L_26);
		Card_EnableCard_m09BC05CED4624C77B5D1DB1243560F28558814B0(L_26, L_27, NULL);
		// for (int i = 0; i < sprites.Count; i++)
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_009a:
	{
		// for (int i = 0; i < sprites.Count; i++)
		int32_t L_29 = V_1;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_30 = V_0;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_30, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_0050;
		}
	}
	{
		// if (_inactiveCards.Count < _cardsInGame.Count)
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_32 = __this->____inactiveCards_13;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_32, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_34 = __this->____cardsInGame_10;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_34, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if ((((int32_t)L_33) >= ((int32_t)L_35)))
		{
			goto IL_00d4;
		}
	}
	{
		// _cardsInGame.RemoveRange(0, _inactiveCards.Count);
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_36 = __this->____cardsInGame_10;
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_37 = __this->____inactiveCards_13;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_37, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		NullCheck(L_36);
		List_1_RemoveRange_m21B25A26C68BC5166CF33BCEE62F835DC412939C(L_36, 0, L_38, List_1_RemoveRange_m21B25A26C68BC5166CF33BCEE62F835DC412939C_RuntimeMethod_var);
		goto IL_00df;
	}

IL_00d4:
	{
		// _cardsInGame.Clear();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_39 = __this->____cardsInGame_10;
		NullCheck(L_39);
		List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline(L_39, List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
	}

IL_00df:
	{
		// _inactiveCards.Clear();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_40 = __this->____inactiveCards_13;
		NullCheck(L_40);
		List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline(L_40, List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::AlignLastRowCards(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_AlignLastRowCards_m4D2C04F50D325FEA93E47B9F8DD5672DADE0DE2D (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* ___backSprites0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// int cardsInLastRow = _cardsOnBoard.Count % _maxCardsInRow;
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____cardsOnBoard_11;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_0, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		int32_t L_2 = __this->____maxCardsInRow_15;
		V_0 = ((int32_t)(L_1%L_2));
		// int row = Mathf.FloorToInt(_cardsOnBoard.Count / _maxCardsInRow);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_3 = __this->____cardsOnBoard_11;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_3, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		int32_t L_5 = __this->____maxCardsInRow_15;
		int32_t L_6;
		L_6 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)((int32_t)(L_4/L_5))), NULL);
		V_1 = L_6;
		// if (cardsInLastRow == _maxCardsInRow)
		int32_t L_7 = V_0;
		int32_t L_8 = __this->____maxCardsInRow_15;
		if ((!(((uint32_t)L_7) == ((uint32_t)L_8))))
		{
			goto IL_0036;
		}
	}
	{
		// return;
		return;
	}

IL_0036:
	{
		// int emptySlotsInLastRow = _maxCardsInRow - cardsInLastRow;
		int32_t L_9 = __this->____maxCardsInRow_15;
		int32_t L_10 = V_0;
		// float NumberOfCardWidths = emptySlotsInLastRow / 2f;
		V_2 = ((float)(((float)((int32_t)il2cpp_codegen_subtract(L_9, L_10)))/(2.0f)));
		// float distance = (NumberOfCardWidths * _grid.cellSize.x) + (NumberOfCardWidths * _grid.spacing.x);
		float L_11 = V_2;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_12 = __this->____grid_6;
		NullCheck(L_12);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline(L_12, NULL);
		float L_14 = L_13.___x_0;
		float L_15 = V_2;
		GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* L_16 = __this->____grid_6;
		NullCheck(L_16);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline(L_16, NULL);
		float L_18 = L_17.___x_0;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_11, L_14)), ((float)il2cpp_codegen_multiply(L_15, L_18))));
		// for (int i = 0; i < cardsInLastRow; i++)
		V_6 = 0;
		goto IL_0106;
	}

IL_0074:
	{
		// cardIndex = row * _maxCardsInRow + i;
		int32_t L_19 = V_1;
		int32_t L_20 = __this->____maxCardsInRow_15;
		int32_t L_21 = V_6;
		V_4 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, L_20)), L_21));
		// Vector3 newPosition = _cardsOnBoard[cardIndex].transform.localPosition + new Vector3(distance, 0, 0);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_22 = __this->____cardsOnBoard_11;
		int32_t L_23 = V_4;
		NullCheck(L_22);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_24;
		L_24 = List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E(L_22, L_23, List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		NullCheck(L_24);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_24, NULL);
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_25, NULL);
		float L_27 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_28), L_27, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_28, NULL);
		// _cardsOnBoard[cardIndex].MoveToPosition(new Vector3(distance, 0, 0));
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_30 = __this->____cardsOnBoard_11;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_32;
		L_32 = List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E(L_30, L_31, List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		float L_33 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		memset((&L_34), 0, sizeof(L_34));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_34), L_33, (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		Card_MoveToPosition_m91ACDC17A539423AFD0362218392BF36D02C5A77(L_32, L_34, NULL);
		// cardbackIndex = (i + (row + 1 % backSprites.Count)) % backSprites.Count;
		int32_t L_35 = V_6;
		int32_t L_36 = V_1;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_37 = ___backSprites0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_37, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_39 = ___backSprites0;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_39, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		V_5 = ((int32_t)(((int32_t)il2cpp_codegen_add(L_35, ((int32_t)il2cpp_codegen_add(L_36, ((int32_t)(1%L_38))))))%L_40));
		// _cardsOnBoard[cardIndex].Init( backSprites[cardbackIndex]);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_41 = __this->____cardsOnBoard_11;
		int32_t L_42 = V_4;
		NullCheck(L_41);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_43;
		L_43 = List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E(L_41, L_42, List_1_get_Item_m3F5011CDA5543B9CF2CED136220611DBD27DE07E_RuntimeMethod_var);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_44 = ___backSprites0;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46;
		L_46 = ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC(L_44, L_45, ReadOnlyCollection_1_get_Item_m8D1E50A9A7E6F76632D02EFDF7540BDC9593F2CC_RuntimeMethod_var);
		NullCheck(L_43);
		Card_Init_mA1875233EE60CF17F290165FC530A8F904AC011C(L_43, L_46, NULL);
		// for (int i = 0; i < cardsInLastRow; i++)
		int32_t L_47 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0106:
	{
		// for (int i = 0; i < cardsInLastRow; i++)
		int32_t L_48 = V_6;
		int32_t L_49 = V_0;
		if ((((int32_t)L_48) < ((int32_t)L_49)))
		{
			goto IL_0074;
		}
	}
	{
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::ClearCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_ClearCards_m1533DE99786DF20478D4A057DA8F3B456491B01C (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CClearCardsU3Eb__27_0_m76BBC808F538E57C5572848C797DBC63F2E642ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* G_B2_0 = NULL;
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* G_B2_1 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* G_B1_0 = NULL;
	List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* G_B1_1 = NULL;
	{
		// _cardsOnBoard.ForEach(card => Destroy(card.gameObject));
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____cardsOnBoard_11;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var);
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_1 = ((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var);
		U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* L_3 = ((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_4 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CClearCardsU3Eb__27_0_m76BBC808F538E57C5572848C797DBC63F2E642ED_RuntimeMethod_var), NULL);
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_5 = L_4;
		((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9__27_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB(G_B2_1, G_B2_0, List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB_RuntimeMethod_var);
		// foreach (Card card in _cardsOnBoard)
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_6 = __this->____cardsOnBoard_11;
		NullCheck(L_6);
		Enumerator_t69BDCA12ACC202486757567DCA3E877BE39D4F48 L_7;
		L_7 = List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A(L_6, List_1_GetEnumerator_m52D4697CD16D689753471424ADD2AE93B348971A_RuntimeMethod_var);
		V_0 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689((&V_0), Enumerator_Dispose_m8B46DDB5CEA0CBC38913A827CCE5998D6C999689_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007f_1;
			}

IL_0038_1:
			{
				// foreach (Card card in _cardsOnBoard)
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_8;
				L_8 = Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_inline((&V_0), Enumerator_get_Current_m9DB6EE1C21CF889E28336B2A97240A26FD08EE50_RuntimeMethod_var);
				// card.Clicked -= OnCardClicked;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_9 = L_8;
				Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_10 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
				NullCheck(L_10);
				Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_10, __this, (intptr_t)((void*)Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3_RuntimeMethod_var), NULL);
				NullCheck(L_9);
				Card_remove_Clicked_m3A2A91065F58BBCA4D803B2272B75D09715E1AE5(L_9, L_10, NULL);
				// card.GoodMatch -= RemoveMatchedCards;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_11 = L_9;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_12 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_12);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_12, __this, (intptr_t)((void*)Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934_RuntimeMethod_var), NULL);
				NullCheck(L_11);
				Card_remove_GoodMatch_m96AF03BA53EE9BA167B4438201A5B7C08BA30F57(L_11, L_12, NULL);
				// card.BadMatch -= FlipMatchedCards;
				Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_13 = L_11;
				Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_14 = (Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)il2cpp_codegen_object_new(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				Action_2__ctor_m5710F0B1DC96970AC42B84EF5A9E8010DD2F21C6(L_14, __this, (intptr_t)((void*)Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8_RuntimeMethod_var), NULL);
				NullCheck(L_13);
				Card_remove_BadMatch_m9FD68301D565F7C771F642C7A72758C3EE1A918F(L_13, L_14, NULL);
				// Destroy(card.gameObject);
				NullCheck(L_13);
				GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
				L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_13, NULL);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_15, NULL);
			}

IL_007f_1:
			{
				// foreach (Card card in _cardsOnBoard)
				bool L_16;
				L_16 = Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23((&V_0), Enumerator_MoveNext_m32BC8282D403A9173E287CC4F40A0C53C175AC23_RuntimeMethod_var);
				if (L_16)
				{
					goto IL_0038_1;
				}
			}
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// _cardsInGame.Clear();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_17 = __this->____cardsInGame_10;
		NullCheck(L_17);
		List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_inline(L_17, List_1_Clear_mC5CB657FBC03BB07FC784466D6DA7D22B703AD92_RuntimeMethod_var);
		// _cardsOnBoard.Clear();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_18 = __this->____cardsOnBoard_11;
		NullCheck(L_18);
		List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline(L_18, List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		// _activeCards.Clear();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_19 = __this->____activeCards_12;
		NullCheck(L_19);
		List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_inline(L_19, List_1_Clear_m1B7FCDB67F292922CEC5E698D823AB458D74D285_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::OnCardClicked(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_OnCardClicked_m7EA7502F70194027A73870BCF65DF1A128D13BA3 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___clickedCard0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clickedCard.FlipCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_0 = ___clickedCard0;
		float L_1 = __this->____cardAnimationSpeed_18;
		NullCheck(L_0);
		Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411(L_0, L_1, NULL);
		// if (_firstSelectedCard == null)
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_2 = __this->____firstSelectedCard_16;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// _firstSelectedCard = clickedCard;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_4 = ___clickedCard0;
		__this->____firstSelectedCard_16 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____firstSelectedCard_16), (void*)L_4);
		// _firstSelectedCard.canClick = false;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_5 = __this->____firstSelectedCard_16;
		NullCheck(L_5);
		L_5->___canClick_7 = (bool)0;
		// return;
		return;
	}

IL_002e:
	{
		// LockCards(true);
		Board_LockCards_mFBFEA50485ED018AEF74DDC8AF3DB7BAB26A7DBE(__this, (bool)1, NULL);
		// StartCoroutine(CompareDelay(clickedCard));
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_6 = ___clickedCard0;
		RuntimeObject* L_7;
		L_7 = Board_CompareDelay_m22D935131596478DA2D891153FE8A7750E3B85D5(__this, L_6, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_7, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::RemoveMatchedCards(DTT.MinigameMemory.Card,DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_RemoveMatchedCards_m583CB205018D3687BBE3EA4CB1995293AD8CD934 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card10, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card21, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B4_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	{
		// _activeCards.Remove(card1);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_0 = __this->____activeCards_12;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_1 = ___card10;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2(L_0, L_1, List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2_RuntimeMethod_var);
		// _inactiveCards.Add(card1);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_3 = __this->____inactiveCards_13;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_4 = ___card10;
		NullCheck(L_3);
		List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline(L_3, L_4, List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		// card1.DisableCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_5 = ___card10;
		float L_6 = __this->____cardAnimationSpeed_18;
		NullCheck(L_5);
		Card_DisableCard_m85718BBCFAE0FA9F37269665C43CFB7164E3379F(L_5, L_6, NULL);
		// _activeCards.Remove(card2);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_7 = __this->____activeCards_12;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_8 = ___card21;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2(L_7, L_8, List_1_Remove_m1B95CAC41829FDC26799DD22B98D88311E5D61E2_RuntimeMethod_var);
		// _inactiveCards.Add(card2);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_10 = __this->____inactiveCards_13;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_11 = ___card21;
		NullCheck(L_10);
		List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_inline(L_10, L_11, List_1_Add_mBCDA96C00972E3F92096072D1775AF700F5E3B64_RuntimeMethod_var);
		// card2.DisableCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_12 = ___card21;
		float L_13 = __this->____cardAnimationSpeed_18;
		NullCheck(L_12);
		Card_DisableCard_m85718BBCFAE0FA9F37269665C43CFB7164E3379F(L_12, L_13, NULL);
		// if (_cardsInGame.Count == 0 && _activeCards.Count == 0)
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_14 = __this->____cardsInGame_10;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_14, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		if (L_15)
		{
			goto IL_0075;
		}
	}
	{
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_16 = __this->____activeCards_12;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_16, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		if (L_17)
		{
			goto IL_0075;
		}
	}
	{
		// AllCardsMatched?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_18 = __this->___AllCardsMatched_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_19 = L_18;
		G_B3_0 = L_19;
		if (L_19)
		{
			G_B4_0 = L_19;
			goto IL_0070;
		}
	}
	{
		goto IL_0075;
	}

IL_0070:
	{
		NullCheck(G_B4_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B4_0, NULL);
	}

IL_0075:
	{
		// if (_inactiveCards.Count >= Mathf.FloorToInt(_cardsOnBoard.Count * (_activateAtMatchesFoundPecentage / 100f)))
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_20 = __this->____inactiveCards_13;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_20, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_22 = __this->____cardsOnBoard_11;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_inline(L_22, List_1_get_Count_m38F6006F65B91F6D4BCACF1D6565882FCB20AB21_RuntimeMethod_var);
		int32_t L_24 = __this->____activateAtMatchesFoundPecentage_17;
		int32_t L_25;
		L_25 = Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline(((float)il2cpp_codegen_multiply(((float)L_23), ((float)(((float)L_24)/(100.0f))))), NULL);
		if ((((int32_t)L_21) < ((int32_t)L_25)))
		{
			goto IL_00a7;
		}
	}
	{
		// ActivateCards();
		Board_ActivateCards_m4F163E8DC71F849E9CE0DC0CFC217A1C6CC0E911(__this, NULL);
	}

IL_00a7:
	{
		// LockCards(false);
		Board_LockCards_mFBFEA50485ED018AEF74DDC8AF3DB7BAB26A7DBE(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::FlipMatchedCards(DTT.MinigameMemory.Card,DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_FlipMatchedCards_m67FCD481C867FDE38732DF14A9FF051EB14E07F8 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card10, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card21, const RuntimeMethod* method) 
{
	{
		// card1.FlipCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_0 = ___card10;
		float L_1 = __this->____cardAnimationSpeed_18;
		NullCheck(L_0);
		Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411(L_0, L_1, NULL);
		// card2.FlipCard(_cardAnimationSpeed);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_2 = ___card21;
		float L_3 = __this->____cardAnimationSpeed_18;
		NullCheck(L_2);
		Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411(L_2, L_3, NULL);
		// LockCards(false);
		Board_LockCards_mFBFEA50485ED018AEF74DDC8AF3DB7BAB26A7DBE(__this, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Board::LockCards(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board_LockCards_mFBFEA50485ED018AEF74DDC8AF3DB7BAB26A7DBE (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, bool ___lockCards0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_U3CLockCardsU3Eb__0_mA92CBE0DA59B53167928F80559CD09FAEE24BAEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* L_0 = (U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass31_0__ctor_mB464C309CDCC8638D3E03E9F42DFB8B99C5BFCAD(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* L_1 = V_0;
		bool L_2 = ___lockCards0;
		NullCheck(L_1);
		L_1->___lockCards_0 = L_2;
		// private void LockCards(bool lockCards) => _activeCards.ForEach(card => card.canClick = !lockCards);
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_3 = __this->____activeCards_12;
		U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* L_4 = V_0;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_5 = (Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)il2cpp_codegen_object_new(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m7F2E2B260038EAE1DA727276251F9F3DBC779865(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass31_0_U3CLockCardsU3Eb__0_mA92CBE0DA59B53167928F80559CD09FAEE24BAEB_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB(L_3, L_5, List_1_ForEach_mE6A4DB3683A4C374ADB36E7489B35C76258848DB_RuntimeMethod_var);
		return;
	}
}
// System.Collections.IEnumerator DTT.MinigameMemory.Board::CompareDelay(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Board_CompareDelay_m22D935131596478DA2D891153FE8A7750E3B85D5 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___clickedCard0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* L_0 = (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B*)il2cpp_codegen_object_new(U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCompareDelayU3Ed__32__ctor_m68D503C709995992567B7A60C5D5621FF033DDBC(L_0, 0, NULL);
		U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* L_2 = L_1;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_3 = ___clickedCard0;
		NullCheck(L_2);
		L_2->___clickedCard_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___clickedCard_3), (void*)L_3);
		return L_2;
	}
}
// System.Void DTT.MinigameMemory.Board::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Board__ctor_m3285B3D9AB25AD60CD166634ECD1ABE0B962BC79 (Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<Sprite> _cardsInGame = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->____cardsInGame_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cardsInGame_10), (void*)L_0);
		// private List<Card> _cardsOnBoard = new List<Card>();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_1 = (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*)il2cpp_codegen_object_new(List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64(L_1, List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64_RuntimeMethod_var);
		__this->____cardsOnBoard_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cardsOnBoard_11), (void*)L_1);
		// private List<Card> _activeCards = new List<Card>();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_2 = (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*)il2cpp_codegen_object_new(List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64(L_2, List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64_RuntimeMethod_var);
		__this->____activeCards_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeCards_12), (void*)L_2);
		// private List<Card> _inactiveCards = new List<Card>();
		List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889* L_3 = (List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889*)il2cpp_codegen_object_new(List_1_t1DFFF8AE430BF21E2A595468578CAD3861862889_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64(L_3, List_1__ctor_m037BE6C00CC876CF9A025206126515567A135B64_RuntimeMethod_var);
		__this->____inactiveCards_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____inactiveCards_13), (void*)L_3);
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
// System.Void DTT.MinigameMemory.Board/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE865BD056E67F3215ECBD3734276FE727ECCE39B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* L_0 = (U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE*)il2cpp_codegen_object_new(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m2F79602E18B9FFF696A205C5880D8D131540B547(L_0, NULL);
		((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void DTT.MinigameMemory.Board/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m2F79602E18B9FFF696A205C5880D8D131540B547 (U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Board/<>c::<ClearCards>b__27_0(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CClearCardsU3Eb__27_0_m76BBC808F538E57C5572848C797DBC63F2E642ED (U3CU3Ec_tAE82130E1522784F15ECD1E7D8E1ECFE9F76E0FE* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _cardsOnBoard.ForEach(card => Destroy(card.gameObject));
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_0 = ___card0;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_1, NULL);
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
// System.Void DTT.MinigameMemory.Board/<>c__DisplayClass31_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0__ctor_mB464C309CDCC8638D3E03E9F42DFB8B99C5BFCAD (U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Board/<>c__DisplayClass31_0::<LockCards>b__0(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass31_0_U3CLockCardsU3Eb__0_mA92CBE0DA59B53167928F80559CD09FAEE24BAEB (U3CU3Ec__DisplayClass31_0_tA6BCB7865A38992921CA3E30BA46CC090A98B316* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___card0, const RuntimeMethod* method) 
{
	{
		// private void LockCards(bool lockCards) => _activeCards.ForEach(card => card.canClick = !lockCards);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_0 = ___card0;
		bool L_1 = __this->___lockCards_0;
		NullCheck(L_0);
		L_0->___canClick_7 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void DTT.MinigameMemory.Board/<CompareDelay>d__32::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompareDelayU3Ed__32__ctor_m68D503C709995992567B7A60C5D5621FF033DDBC (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.MinigameMemory.Board/<CompareDelay>d__32::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompareDelayU3Ed__32_System_IDisposable_Dispose_m1D521670853773081934B9C402018BDFB96C8E1D (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.Board/<CompareDelay>d__32::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCompareDelayU3Ed__32_MoveNext_m0BD1DB24621CF7405B9E74D2EB0FB4850368947C (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* V_1 = NULL;
	float V_2 = 0.0f;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B8_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B7_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// float delay = _cardAnimationSpeed;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->____cardAnimationSpeed_18;
		V_2 = L_5;
		// if (delay == 0)
		float L_6 = V_2;
		if ((!(((float)L_6) == ((float)(0.0f)))))
		{
			goto IL_0033;
		}
	}
	{
		// delay = 0.5f;
		V_2 = (0.5f);
	}

IL_0033:
	{
		// yield return new WaitForSeconds(delay);
		float L_7 = V_2;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0048:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// CardsTurned?.Invoke();
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_9 = V_1;
		NullCheck(L_9);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = L_9->___CardsTurned_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = L_10;
		G_B7_0 = L_11;
		if (L_11)
		{
			G_B8_0 = L_11;
			goto IL_005b;
		}
	}
	{
		goto IL_0060;
	}

IL_005b:
	{
		NullCheck(G_B8_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B8_0, NULL);
	}

IL_0060:
	{
		// _firstSelectedCard.CompairToCard(clickedCard);
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_12 = V_1;
		NullCheck(L_12);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_13 = L_12->____firstSelectedCard_16;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_14 = __this->___clickedCard_3;
		NullCheck(L_13);
		Card_CompairToCard_m1D2E2C32336E85F56C5E44FAA0190447FF5C48B8(L_13, L_14, NULL);
		// _firstSelectedCard = null;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_15 = V_1;
		NullCheck(L_15);
		L_15->____firstSelectedCard_16 = (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->____firstSelectedCard_16), (void*)(Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object DTT.MinigameMemory.Board/<CompareDelay>d__32::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompareDelayU3Ed__32_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4188ADD885BC8A1D35AFF14CF1D974830C832955 (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.MinigameMemory.Board/<CompareDelay>d__32::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCompareDelayU3Ed__32_System_Collections_IEnumerator_Reset_mE355822761B0D204BC43DE42E28112EFCC5B21CB (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCompareDelayU3Ed__32_System_Collections_IEnumerator_Reset_mE355822761B0D204BC43DE42E28112EFCC5B21CB_RuntimeMethod_var)));
	}
}
// System.Object DTT.MinigameMemory.Board/<CompareDelay>d__32::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCompareDelayU3Ed__32_System_Collections_IEnumerator_get_Current_mBD973BDC1998A69FF8B7B184F8DB8B9BC3BBAB02 (U3CCompareDelayU3Ed__32_t9DC7CEC9B5DD07E0EBBC43228FD5C07AD65B821B* __this, const RuntimeMethod* method) 
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
// System.Void DTT.MinigameMemory.Card::add_Clicked(System.Action`1<DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_Clicked_m554697B76F2279E5DE3883E5EA01C8627E4D681F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_0 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_1 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_2 = NULL;
	{
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_0 = __this->___Clicked_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_1 = V_0;
		V_1 = L_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_2 = V_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)Castclass((RuntimeObject*)L_4, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var));
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD** L_5 = (&__this->___Clicked_4);
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_6 = V_2;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_7 = V_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_9 = V_0;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)L_9) == ((RuntimeObject*)(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::remove_Clicked(System.Action`1<DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_Clicked_m3A2A91065F58BBCA4D803B2272B75D09715E1AE5 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_0 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_1 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* V_2 = NULL;
	{
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_0 = __this->___Clicked_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_1 = V_0;
		V_1 = L_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_2 = V_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)Castclass((RuntimeObject*)L_4, Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD_il2cpp_TypeInfo_var));
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD** L_5 = (&__this->___Clicked_4);
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_6 = V_2;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_7 = V_1;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_9 = V_0;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)L_9) == ((RuntimeObject*)(Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::add_GoodMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_GoodMatch_mEB7D512115A491CE1D346A44D18C68F66386DD28 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_1 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_2 = NULL;
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_0 = __this->___GoodMatch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_2 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)Castclass((RuntimeObject*)L_4, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var));
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24** L_5 = (&__this->___GoodMatch_5);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = V_2;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_9 = V_0;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_9) == ((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::remove_GoodMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_GoodMatch_m96AF03BA53EE9BA167B4438201A5B7C08BA30F57 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_1 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_2 = NULL;
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_0 = __this->___GoodMatch_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_2 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)Castclass((RuntimeObject*)L_4, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var));
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24** L_5 = (&__this->___GoodMatch_5);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = V_2;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_9 = V_0;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_9) == ((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::add_BadMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_add_BadMatch_mB06940C278A83A5D7B28BCFA6CADC6EA397549AC (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_1 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_2 = NULL;
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_0 = __this->___BadMatch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_2 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)Castclass((RuntimeObject*)L_4, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var));
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24** L_5 = (&__this->___BadMatch_6);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = V_2;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_9 = V_0;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_9) == ((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::remove_BadMatch(System.Action`2<DTT.MinigameMemory.Card,DTT.MinigameMemory.Card>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_remove_BadMatch_m9FD68301D565F7C771F642C7A72758C3EE1A918F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_1 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* V_2 = NULL;
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_0 = __this->___BadMatch_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_1 = V_0;
		V_1 = L_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_2 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)Castclass((RuntimeObject*)L_4, Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24_il2cpp_TypeInfo_var));
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24** L_5 = (&__this->___BadMatch_6);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_6 = V_2;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = V_1;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_9 = V_0;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_9) == ((RuntimeObject*)(Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.Card::get_IsShowing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Card_get_IsShowing_m7E3BF6637CA4506B93A487C779A25B40ABEC1DAE (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing => _isShowing;
		bool L_0 = __this->____isShowing_12;
		return L_0;
	}
}
// System.Void DTT.MinigameMemory.Card::Init(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_Init_mA1875233EE60CF17F290165FC530A8F904AC011C (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___backSprite0, const RuntimeMethod* method) 
{
	{
		// _backSprite = backSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___backSprite0;
		__this->____backSprite_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____backSprite_9), (void*)L_0);
		// _cardButton.image.sprite = _backSprite;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1 = __this->____cardButton_11;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_1, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->____backSprite_9;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::SetFrontsprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_SetFrontsprite_m95BD65CE16F636798DC811AFD7892D92E96F4D1B (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___frontSprite0, const RuntimeMethod* method) 
{
	{
		// public void SetFrontsprite(Sprite frontSprite) => _frontSprite = frontSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___frontSprite0;
		__this->____frontSprite_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frontSprite_8), (void*)L_0);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::FlipCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_FlipCard_mB71551B1FA538776DAEFB23C22C9C9F8F377C411 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) 
{
	float G_B2_0 = 0.0f;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B2_1 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B2_2 = NULL;
	float G_B1_0 = 0.0f;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B1_1 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B1_2 = NULL;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B3_2 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B3_3 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B5_1 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B5_2 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B4_0;
	memset((&G_B4_0), 0, sizeof(G_B4_0));
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B4_1 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B4_2 = NULL;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* G_B6_0 = NULL;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 G_B6_1;
	memset((&G_B6_1), 0, sizeof(G_B6_1));
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B6_2 = NULL;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* G_B6_3 = NULL;
	{
		// this.StartCoroutine(Flip(Quaternion.Euler(0, (_isShowing ? 0 : 180), 0), _isShowing ? _backSprite : _frontSprite, speed));
		bool L_0 = __this->____isShowing_12;
		G_B1_0 = (0.0f);
		G_B1_1 = __this;
		G_B1_2 = __this;
		if (L_0)
		{
			G_B2_0 = (0.0f);
			G_B2_1 = __this;
			G_B2_2 = __this;
			goto IL_0016;
		}
	}
	{
		G_B3_0 = ((int32_t)180);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0017;
	}

IL_0016:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0017:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1;
		L_1 = Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline(G_B3_1, ((float)G_B3_0), (0.0f), NULL);
		bool L_2 = __this->____isShowing_12;
		G_B4_0 = L_1;
		G_B4_1 = G_B3_2;
		G_B4_2 = G_B3_3;
		if (L_2)
		{
			G_B5_0 = L_1;
			G_B5_1 = G_B3_2;
			G_B5_2 = G_B3_3;
			goto IL_0032;
		}
	}
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->____frontSprite_8;
		G_B6_0 = L_3;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0038;
	}

IL_0032:
	{
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_4 = __this->____backSprite_9;
		G_B6_0 = L_4;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0038:
	{
		float L_5 = ___speed0;
		NullCheck(G_B6_2);
		RuntimeObject* L_6;
		L_6 = Card_Flip_m9275E35E6945BFBB32D15B00A1DD3BB669C0C01E(G_B6_2, G_B6_1, G_B6_0, L_5, NULL);
		NullCheck(G_B6_3);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(G_B6_3, L_6, NULL);
		// _isShowing = !_isShowing;
		bool L_8 = __this->____isShowing_12;
		__this->____isShowing_12 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::CompairToCard(DTT.MinigameMemory.Card)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_CompairToCard_m1D2E2C32336E85F56C5E44FAA0190447FF5C48B8 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* ___otherCard0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* G_B3_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* G_B2_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* G_B6_0 = NULL;
	Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* G_B5_0 = NULL;
	{
		// if (this._frontSprite == otherCard._frontSprite)
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->____frontSprite_8;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_1 = ___otherCard0;
		NullCheck(L_1);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_2 = L_1->____frontSprite_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// GoodMatch?.Invoke(this, otherCard);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_4 = __this->___GoodMatch_5;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_5 = L_4;
		G_B2_0 = L_5;
		if (L_5)
		{
			G_B3_0 = L_5;
			goto IL_001e;
		}
	}
	{
		return;
	}

IL_001e:
	{
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_6 = ___otherCard0;
		NullCheck(G_B3_0);
		Action_2_Invoke_mAC9E04A8652C3F932379EFD51F33C8D8608519F9_inline(G_B3_0, __this, L_6, NULL);
		return;
	}

IL_0026:
	{
		// BadMatch?.Invoke(this, otherCard);
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_7 = __this->___BadMatch_6;
		Action_2_tDF69F69153D8E40DD365B1C14F33C90F1D398C24* L_8 = L_7;
		G_B5_0 = L_8;
		if (L_8)
		{
			G_B6_0 = L_8;
			goto IL_0031;
		}
	}
	{
		return;
	}

IL_0031:
	{
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_9 = ___otherCard0;
		NullCheck(G_B6_0);
		Action_2_Invoke_mAC9E04A8652C3F932379EFD51F33C8D8608519F9_inline(G_B6_0, __this, L_9, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::MoveToPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_MoveToPosition_m91ACDC17A539423AFD0362218392BF36D02C5A77 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___target0, const RuntimeMethod* method) 
{
	{
		// public void MoveToPosition(Vector3 target) => _cardContent.transform.localPosition = target;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____cardContent_10;
		NullCheck(L_0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___target0;
		NullCheck(L_1);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_2, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::DisableCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_DisableCard_m85718BBCFAE0FA9F37269665C43CFB7164E3379F (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// public void DisableCard(float speed) => this.StartCoroutine(FadeOutCard(speed));
		float L_0 = ___speed0;
		RuntimeObject* L_1;
		L_1 = Card_FadeOutCard_mA94A21D57CDC38710022C584C37BE48828E55478(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::EnableCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_EnableCard_m09BC05CED4624C77B5D1DB1243560F28558814B0 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___speed0, const RuntimeMethod* method) 
{
	{
		// public void EnableCard(float speed) => this.StartCoroutine(FadeInCard(speed));
		float L_0 = ___speed0;
		RuntimeObject* L_1;
		L_1 = Card_FadeInCard_mD64DA57BC4F1D2982BA9287EA14168D349DA4530(__this, L_0, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_OnEnable_m946D7D4B5EA3A1C73AF6DA4C73116322896D9214 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnEnable() => _cardButton.onClick.AddListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____cardButton_11;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_AddListener_m8AA4287C16628486B41DA41CA5E7A856A706D302(L_1, L_2, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_OnDisable_mBAE9C28DB8B6017456CEEC2455F5FBF6BDF38015 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private void OnDisable() => _cardButton.onClick.RemoveListener(OnClick);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_0 = __this->____cardButton_11;
		NullCheck(L_0);
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_1;
		L_1 = Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline(L_0, NULL);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_2 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_2, __this, (intptr_t)((void*)Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A_RuntimeMethod_var), NULL);
		NullCheck(L_1);
		UnityEvent_RemoveListener_m0E138F5575CB4363019D3DA570E98FAD502B812C(L_1, L_2, NULL);
		return;
	}
}
// System.Void DTT.MinigameMemory.Card::OnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card_OnClick_mCAD4B90906F21D7920F33D37429439D689FF2C0A (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* G_B4_0 = NULL;
	Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* G_B3_0 = NULL;
	{
		// if (!canClick)
		bool L_0 = __this->___canClick_7;
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
		// Clicked?.Invoke(this);
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_1 = __this->___Clicked_4;
		Action_1_t978B00EA88371F816E0EDB957751AB7A83979EAD* L_2 = L_1;
		G_B3_0 = L_2;
		if (L_2)
		{
			G_B4_0 = L_2;
			goto IL_0014;
		}
	}
	{
		return;
	}

IL_0014:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m5B3A11EB9DDE90FD514DAB79871FB85D079A8312_inline(G_B4_0, __this, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator DTT.MinigameMemory.Card::Flip(UnityEngine.Quaternion,UnityEngine.Sprite,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_Flip_m9275E35E6945BFBB32D15B00A1DD3BB669C0C01E (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___targetRotation0, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite1, float ___time2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* L_0 = (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC*)il2cpp_codegen_object_new(U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFlipU3Ed__27__ctor_m9E9B56F939B6D5B82C1F179F14D39F7FE4B53589(L_0, 0, NULL);
		U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* L_2 = L_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___targetRotation0;
		NullCheck(L_2);
		L_2->___targetRotation_3 = L_3;
		U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* L_4 = L_2;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_5 = ___sprite1;
		NullCheck(L_4);
		L_4->___sprite_4 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___sprite_4), (void*)L_5);
		U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* L_6 = L_4;
		float L_7 = ___time2;
		NullCheck(L_6);
		L_6->___time_5 = L_7;
		return L_6;
	}
}
// System.Collections.IEnumerator DTT.MinigameMemory.Card::FadeOutCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_FadeOutCard_mA94A21D57CDC38710022C584C37BE48828E55478 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* L_0 = (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848*)il2cpp_codegen_object_new(U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeOutCardU3Ed__28__ctor_mBBD7C3D87D2FDE09B51386035D49E575EE5BAE7B(L_0, 0, NULL);
		U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->___time_3 = L_3;
		return L_2;
	}
}
// System.Collections.IEnumerator DTT.MinigameMemory.Card::FadeInCard(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Card_FadeInCard_mD64DA57BC4F1D2982BA9287EA14168D349DA4530 (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, float ___time0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* L_0 = (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51*)il2cpp_codegen_object_new(U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CFadeInCardU3Ed__29__ctor_m5052052262B4E42206CE932EC38203F1B236145F(L_0, 0, NULL);
		U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* L_2 = L_1;
		float L_3 = ___time0;
		NullCheck(L_2);
		L_2->___time_3 = L_3;
		return L_2;
	}
}
// System.Void DTT.MinigameMemory.Card::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Card__ctor_m5084DD7A4F9653F855D674D25F1E0971EAA9C6FB (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	{
		// public bool canClick = true;
		__this->___canClick_7 = (bool)1;
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
// System.Void DTT.MinigameMemory.Card/<Flip>d__27::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlipU3Ed__27__ctor_m9E9B56F939B6D5B82C1F179F14D39F7FE4B53589 (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.MinigameMemory.Card/<Flip>d__27::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlipU3Ed__27_System_IDisposable_Dispose_mDAE9B3B4F1625E6F63DDC4ABBB53324E39C02EDB (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.Card/<Flip>d__27::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFlipU3Ed__27_MoveNext_m7FCED7DC7DEF589242F79970F8A520BA0C6C3D0A (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00d4;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Quaternion myRotation = _cardContent.transform.localRotation;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->____cardContent_10;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		NullCheck(L_6);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_7;
		L_7 = Transform_get_localRotation_mD53D37611A5DAE93EC6C7BBCAC337408C5CACA77(L_6, NULL);
		__this->___U3CmyRotationU3E5__2_6 = L_7;
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		__this->___U3CtU3E5__3_7 = (0.0f);
		goto IL_00f4;
	}

IL_0047:
	{
		// _cardContent.transform.localRotation = Quaternion.Lerp(myRotation, targetRotation, t);
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->____cardContent_10;
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11 = __this->___U3CmyRotationU3E5__2_6;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = __this->___targetRotation_3;
		float L_13 = __this->___U3CtU3E5__3_7;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14;
		L_14 = Quaternion_Lerp_m259606226726C2F46E079A5A688B9E24FF7E9A0D(L_11, L_12, L_13, NULL);
		NullCheck(L_10);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_10, L_14, NULL);
		// if (t > 0.5f && _cardButton.image.sprite != sprite)
		float L_15 = __this->___U3CtU3E5__3_7;
		if ((!(((float)L_15) > ((float)(0.5f)))))
		{
			goto IL_00c4;
		}
	}
	{
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_16 = V_1;
		NullCheck(L_16);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = L_16->____cardButton_11;
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_17, NULL);
		NullCheck(L_18);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19;
		L_19 = Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline(L_18, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20 = __this->___sprite_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		// _cardButton.image.sprite = sprite;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_22 = V_1;
		NullCheck(L_22);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = L_22->____cardButton_11;
		NullCheck(L_23);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_23, NULL);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25 = __this->___sprite_4;
		NullCheck(L_24);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_24, L_25, NULL);
		// _cardButton.transform.localRotation = targetRotation;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_26 = V_1;
		NullCheck(L_26);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_27 = L_26->____cardButton_11;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_29 = __this->___targetRotation_3;
		NullCheck(L_28);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_28, L_29, NULL);
	}

IL_00c4:
	{
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00d4:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_30 = __this->___U3CtU3E5__3_7;
		float L_31;
		L_31 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_32 = __this->___time_5;
		__this->___U3CtU3E5__3_7 = ((float)il2cpp_codegen_add(L_30, ((float)(L_31/L_32))));
	}

IL_00f4:
	{
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_33 = __this->___U3CtU3E5__3_7;
		if ((((float)L_33) < ((float)(1.0f))))
		{
			goto IL_0047;
		}
	}
	{
		// _cardContent.transform.localRotation = targetRotation;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_34 = V_1;
		NullCheck(L_34);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = L_34->____cardContent_10;
		NullCheck(L_35);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_35, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37 = __this->___targetRotation_3;
		NullCheck(L_36);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_36, L_37, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DTT.MinigameMemory.Card/<Flip>d__27::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlipU3Ed__27_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m306FD83D695D24BB089D327417877AC2DFA36836 (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.MinigameMemory.Card/<Flip>d__27::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFlipU3Ed__27_System_Collections_IEnumerator_Reset_m13E173337D6D40F0EFB0C8D62D26CCAF01005F36 (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFlipU3Ed__27_System_Collections_IEnumerator_Reset_m13E173337D6D40F0EFB0C8D62D26CCAF01005F36_RuntimeMethod_var)));
	}
}
// System.Object DTT.MinigameMemory.Card/<Flip>d__27::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFlipU3Ed__27_System_Collections_IEnumerator_get_Current_m2D2EDB64B4A267561E75BC08D098DFA00F454CB7 (U3CFlipU3Ed__27_tC999BFE5017BFA419E95B0012A14B0E3E71FE2EC* __this, const RuntimeMethod* method) 
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
// System.Void DTT.MinigameMemory.Card/<FadeOutCard>d__28::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCardU3Ed__28__ctor_mBBD7C3D87D2FDE09B51386035D49E575EE5BAE7B (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.MinigameMemory.Card/<FadeOutCard>d__28::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCardU3Ed__28_System_IDisposable_Dispose_m7420913EF3A4B236B30ACB179AE434E26F9D969E (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.Card/<FadeOutCard>d__28::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeOutCardU3Ed__28_MoveNext_mF5901FE3EF549997FFAC41C34F15E561D71FA2EF (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0094;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// _cardButton.enabled = false;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_4 = V_1;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->____cardButton_11;
		NullCheck(L_5);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_5, (bool)0, NULL);
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		__this->___U3CtU3E5__2_4 = (0.0f);
		goto IL_00b4;
	}

IL_0037:
	{
		// Color color = _cardButton.image.color;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_6 = V_1;
		NullCheck(L_6);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = L_6->____cardButton_11;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_7, NULL);
		NullCheck(L_8);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		L_9 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_8);
		V_2 = L_9;
		// _cardButton.image.color = new Color(color.r, color.g, color.b, Mathf.Lerp(1f, 0f, t));
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_10 = V_1;
		NullCheck(L_10);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = L_10->____cardButton_11;
		NullCheck(L_11);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_12;
		L_12 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_11, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_2;
		float L_14 = L_13.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_2;
		float L_16 = L_15.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_2;
		float L_18 = L_17.___b_2;
		float L_19 = __this->___U3CtU3E5__2_4;
		float L_20;
		L_20 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((1.0f), (0.0f), L_19, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_21), L_14, L_16, L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_21);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0094:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_22 = __this->___U3CtU3E5__2_4;
		float L_23;
		L_23 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_24 = __this->___time_3;
		__this->___U3CtU3E5__2_4 = ((float)il2cpp_codegen_add(L_22, ((float)(L_23/L_24))));
	}

IL_00b4:
	{
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_25 = __this->___U3CtU3E5__2_4;
		if ((((float)L_25) < ((float)(1.0f))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object DTT.MinigameMemory.Card/<FadeOutCard>d__28::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCardU3Ed__28_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB0F0E812533DFFC87FC1A1ACADB5C6E67604AD28 (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.MinigameMemory.Card/<FadeOutCard>d__28::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeOutCardU3Ed__28_System_Collections_IEnumerator_Reset_mB650903F037336D163C4DC052891F53371202402 (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeOutCardU3Ed__28_System_Collections_IEnumerator_Reset_mB650903F037336D163C4DC052891F53371202402_RuntimeMethod_var)));
	}
}
// System.Object DTT.MinigameMemory.Card/<FadeOutCard>d__28::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeOutCardU3Ed__28_System_Collections_IEnumerator_get_Current_mC47BE7BB69277897595B70116FC6D46046AE23F0 (U3CFadeOutCardU3Ed__28_tF608E5F38EDD810E07138C2B53B87CEA361B9848* __this, const RuntimeMethod* method) 
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
// System.Void DTT.MinigameMemory.Card/<FadeInCard>d__29::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCardU3Ed__29__ctor_m5052052262B4E42206CE932EC38203F1B236145F (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DTT.MinigameMemory.Card/<FadeInCard>d__29::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCardU3Ed__29_System_IDisposable_Dispose_m2A35A594D9FDED1BBFD8938DD7C0B06518C61E2D (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.Card/<FadeInCard>d__29::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CFadeInCardU3Ed__29_MoveNext_mB6C1148DAFD2636EAF1EFD284A0B1B1DC5903BBB (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* V_1 = NULL;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		__this->___U3CtU3E5__2_4 = (0.0f);
		goto IL_00a8;
	}

IL_002b:
	{
		// Color color = _cardButton.image.color;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_4 = V_1;
		NullCheck(L_4);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_5 = L_4->____cardButton_11;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_5, NULL);
		NullCheck(L_6);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		V_2 = L_7;
		// _cardButton.image.color = new Color(color.r, color.g, color.b, Mathf.Lerp(0f, 1f, t));
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_8 = V_1;
		NullCheck(L_8);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_9 = L_8->____cardButton_11;
		NullCheck(L_9);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_10;
		L_10 = Selectable_get_image_m88664022F6BC90E7B8D4BFCBA7FE24B48E90C639(L_9, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = V_2;
		float L_12 = L_11.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = V_2;
		float L_14 = L_13.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_15 = V_2;
		float L_16 = L_15.___b_2;
		float L_17 = __this->___U3CtU3E5__2_4;
		float L_18;
		L_18 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline((0.0f), (1.0f), L_17, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_19), L_12, L_14, L_16, L_18, /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_19);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0088:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_20 = __this->___U3CtU3E5__2_4;
		float L_21;
		L_21 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		float L_22 = __this->___time_3;
		__this->___U3CtU3E5__2_4 = ((float)il2cpp_codegen_add(L_20, ((float)(L_21/L_22))));
	}

IL_00a8:
	{
		// for (float t = 0; t < 1; t += Time.deltaTime / time)
		float L_23 = __this->___U3CtU3E5__2_4;
		if ((((float)L_23) < ((float)(1.0f))))
		{
			goto IL_002b;
		}
	}
	{
		// _cardButton.enabled = true;
		Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* L_24 = V_1;
		NullCheck(L_24);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_25 = L_24->____cardButton_11;
		NullCheck(L_25);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object DTT.MinigameMemory.Card/<FadeInCard>d__29::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCardU3Ed__29_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9589E826F2CC23D6A956C05F11DB38D37B9884E3 (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DTT.MinigameMemory.Card/<FadeInCard>d__29::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CFadeInCardU3Ed__29_System_Collections_IEnumerator_Reset_mDC4D3D14A4E2325F111003C33B0069624F9C8925 (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CFadeInCardU3Ed__29_System_Collections_IEnumerator_Reset_mDC4D3D14A4E2325F111003C33B0069624F9C8925_RuntimeMethod_var)));
	}
}
// System.Object DTT.MinigameMemory.Card/<FadeInCard>d__29::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CFadeInCardU3Ed__29_System_Collections_IEnumerator_get_Current_m8C68D9CE66F4DCAB3D32B1B0EE078F2511FE2706 (U3CFadeInCardU3Ed__29_tE4D8FD63D04FD2FF3E399151F78BCE026EDAEC51* __this, const RuntimeMethod* method) 
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
// System.Void DTT.MinigameMemory.MemoryGameManager::add_Started(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_add_Started_m3719F52E38985CECF7192C70926D9B0847459D21 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Started_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Started_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::remove_Started(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_remove_Started_m1CC291FC64CD315EDF3028BDE3E649E59A536EDD (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Started_4;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Started_4);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::add_Paused(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_add_Paused_m2E75FF632308E10B30FC1F2D8A41CBE7B534679F (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___Paused_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___Paused_5);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::remove_Paused(System.Action`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_remove_Paused_mDC9160679E8F44407E90F3EAA247CEA0B3DE5EB1 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_1 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* V_2 = NULL;
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_0 = __this->___Paused_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = V_0;
		V_1 = L_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)Castclass((RuntimeObject*)L_4, Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C_il2cpp_TypeInfo_var));
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C** L_5 = (&__this->___Paused_5);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_6 = V_2;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_7 = V_1;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_9 = V_0;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_9) == ((RuntimeObject*)(Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::add_Finish(System.Action`1<DTT.MinigameMemory.MemoryGameResults>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_add_Finish_m2888B034FE59C132713FB9E9F9F2E90D16F19E81 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_0 = NULL;
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_1 = NULL;
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_2 = NULL;
	{
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_0 = __this->___Finish_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_1 = V_0;
		V_1 = L_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_2 = V_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)Castclass((RuntimeObject*)L_4, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var));
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD** L_5 = (&__this->___Finish_6);
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_6 = V_2;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_7 = V_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_9 = V_0;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)L_9) == ((RuntimeObject*)(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::remove_Finish(System.Action`1<DTT.MinigameMemory.MemoryGameResults>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_remove_Finish_m5E317935BBC80E864BA514EE2F84C22522393EAB (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_0 = NULL;
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_1 = NULL;
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* V_2 = NULL;
	{
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_0 = __this->___Finish_6;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_1 = V_0;
		V_1 = L_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_2 = V_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_3 = ___value0;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)Castclass((RuntimeObject*)L_4, Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD_il2cpp_TypeInfo_var));
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD** L_5 = (&__this->___Finish_6);
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_6 = V_2;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_7 = V_1;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_9 = V_0;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)L_9) == ((RuntimeObject*)(Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean DTT.MinigameMemory.MemoryGameManager::get_IsPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryGameManager_get_IsPaused_m512C92E52350547058B62368B9FB0862060B3A83 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsPaused => _isPaused;
		bool L_0 = __this->____isPaused_9;
		return L_0;
	}
}
// System.Boolean DTT.MinigameMemory.MemoryGameManager::get_IsGameActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryGameManager_get_IsGameActive_m668748ED6B12ED9A6000D5F0E14D8BF6366C2E0C (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsGameActive => _isGameActive;
		bool L_0 = __this->____isGameActive_10;
		return L_0;
	}
}
// System.TimeSpan DTT.MinigameMemory.MemoryGameManager::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A MemoryGameManager_get_Time_mACD16C09ECD74D6990260B50155E22CE7EA611AE (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// public TimeSpan Time => _timer.TimePassed;
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		NullCheck(L_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = Timer_get_TimePassed_mE695AA3375BF4710897C0EC00263E737CBEEC166(L_0, NULL);
		return L_1;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::StartGame(DTT.MinigameMemory.MemoryGameSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_StartGame_m6580E2FEC64EAA93CF050DD7A92B0EC6E39BD83C (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* ___settings0, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// _settings = settings;
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_0 = ___settings0;
		__this->____settings_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____settings_11), (void*)L_0);
		// _amountOfTurns = 0;
		__this->____amountOfTurns_12 = 0;
		// _isPaused = false;
		__this->____isPaused_9 = (bool)0;
		// _isGameActive = true;
		__this->____isGameActive_10 = (bool)1;
		// _timer.Begin();
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_1 = __this->____timer_8;
		NullCheck(L_1);
		Timer_Begin_m5F18E9143CF69BC629274B1ED9124A57A3A55339(L_1, NULL);
		// _board.SetupGame(_settings);
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_2 = __this->____board_7;
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_3 = __this->____settings_11;
		NullCheck(L_2);
		Board_SetupGame_m4020409E7A5B9E0CCC3DCCDEFB0F637CFCAFF551(L_2, L_3, NULL);
		// Started?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = __this->___Started_4;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = L_4;
		G_B1_0 = L_5;
		if (L_5)
		{
			G_B2_0 = L_5;
			goto IL_0043;
		}
	}
	{
		return;
	}

IL_0043:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Pause_mAFC20C930F10DC075A4F3A8AC0A16D2DDA8ECCD2 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// _isPaused = true;
		__this->____isPaused_9 = (bool)1;
		// _timer.Pause();
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		NullCheck(L_0);
		Timer_Pause_mDB3FBF4DD4969E1D12E5884C3583C1555696C0B0(L_0, NULL);
		// Paused?.Invoke(_isPaused);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = __this->___Paused_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_3 = __this->____isPaused_9;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::Continue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Continue_m534E8EAA773615AC2D3813A20A35D2377BDDDB39 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B2_0 = NULL;
	Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* G_B1_0 = NULL;
	{
		// _isPaused = false;
		__this->____isPaused_9 = (bool)0;
		// _timer.Resume();
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		NullCheck(L_0);
		Timer_Resume_mCA1C9A24416DD04DAD1ECC520B4436463988E1DD(L_0, NULL);
		// Paused?.Invoke(_isPaused);
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_1 = __this->___Paused_5;
		Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		bool L_3 = __this->____isPaused_9;
		NullCheck(G_B2_0);
		Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_inline(G_B2_0, L_3, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Restart_mFE01F721D3511FDB8A275418CB0AE20E0F389E0E (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// if (_isPaused)
		bool L_0 = __this->____isPaused_9;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// Continue();
		MemoryGameManager_Continue_m534E8EAA773615AC2D3813A20A35D2377BDDDB39(__this, NULL);
	}

IL_000e:
	{
		// StartGame(_settings);
		MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* L_1 = __this->____settings_11;
		MemoryGameManager_StartGame_m6580E2FEC64EAA93CF050DD7A92B0EC6E39BD83C(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::ForceFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_ForceFinish_m6B0D550BB96E42A3A061151E62F1C68090CAAC9D (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* G_B2_0 = NULL;
	Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* G_B1_0 = NULL;
	{
		// _timer.Stop();
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		NullCheck(L_0);
		Timer_Stop_mB4F6727665D47B1DC601C4D9A0B4D1F93497D4B1(L_0, NULL);
		// _isGameActive = false;
		__this->____isGameActive_10 = (bool)0;
		// Finish?.Invoke(new MemoryGameResults(_timer.TimePassed, _amountOfTurns));
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_1 = __this->___Finish_6;
		Action_1_tDF5D88B5FDF827BE325BB63E75EF7E00B09960FD* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_3 = __this->____timer_8;
		NullCheck(L_3);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = Timer_get_TimePassed_mE695AA3375BF4710897C0EC00263E737CBEEC166(L_3, NULL);
		int32_t L_5 = __this->____amountOfTurns_12;
		MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* L_6 = (MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC*)il2cpp_codegen_object_new(MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		MemoryGameResults__ctor_mA4C85C67843830AA48AB417308F2BD0F33C18B33(L_6, L_4, L_5, NULL);
		NullCheck(G_B2_0);
		Action_1_Invoke_m1521731AF4738754577A66777793ABD76A01C144_inline(G_B2_0, L_6, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Awake_mDA1EB12D084106D7D8E7284BACB7889225F1DCC5 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTimer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1_mFE066EF8496C4FEB1CE50027AC7314F19A1192B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* G_B2_0 = NULL;
	MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* G_B1_0 = NULL;
	Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* G_B3_0 = NULL;
	MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* G_B3_1 = NULL;
	{
		// private void Awake() => _timer = (_timer == null) ? this.gameObject.AddComponent<Timer>() : _timer;
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_2 = __this->____timer_8;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0017:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_4;
		L_4 = GameObject_AddComponent_TisTimer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1_mFE066EF8496C4FEB1CE50027AC7314F19A1192B0(L_3, GameObject_AddComponent_TisTimer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1_mFE066EF8496C4FEB1CE50027AC7314F19A1192B0_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		NullCheck(G_B3_1);
		G_B3_1->____timer_8 = G_B3_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B3_1->____timer_8), (void*)G_B3_0);
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_OnEnable_m3FA5C906D0EDB7A040878F2BF1CB17CBF65562A7 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _board.CardsTurned += IncreaseTurnAmount;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_0 = __this->____board_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Board_add_CardsTurned_m2898FACCE3EBAD4108BD949FD18E3A133708F6F5(L_0, L_1, NULL);
		// _board.AllCardsMatched += ForceFinish;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_2 = __this->____board_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		NullCheck(L_2);
		Board_add_AllCardsMatched_mCA598FF008E8D4ED339469487731BEF5EBD9A7CD(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_OnDisable_m71E89DFCA97DC4C0F487AED8748CF6190A4E334F (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _board.CardsTurned -= IncreaseTurnAmount;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_0 = __this->____board_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		Board_remove_CardsTurned_mFFC728FA3C710221F4DAAB11407E9F350984282F(L_0, L_1, NULL);
		// _board.AllCardsMatched -= ForceFinish;
		Board_t7517E79C9E3E2C02FC449E4F396573547A5D6C29* L_2 = __this->____board_7;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 13)), NULL);
		NullCheck(L_2);
		Board_remove_AllCardsMatched_mE365153B68814B4065D9838D7C22A9F77AFED20D(L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::IncreaseTurnAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_IncreaseTurnAmount_m0EB87F2ED88B60A3C6CEAC69ACA292C3D5A51498 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// private void IncreaseTurnAmount() => _amountOfTurns++;
		int32_t L_0 = __this->____amountOfTurns_12;
		__this->____amountOfTurns_12 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager_Stop_m3A0EAA770B8A7AF1FF981A0F2F07ED1A6323ABF7 (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
{
	{
		// _isGameActive = false;
		__this->____isGameActive_10 = (bool)0;
		// _timer.Stop();
		Timer_t2AE209C20EA0085D6802F88FEC6ADD4E1CF6F1A1* L_0 = __this->____timer_8;
		NullCheck(L_0);
		Timer_Stop_mB4F6727665D47B1DC601C4D9A0B4D1F93497D4B1(L_0, NULL);
		// }
		return;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameManager__ctor_m9D6C72D2B5EA1F382B48FFED29239B1E0D786D0A (MemoryGameManager_t6507C670C1D4E0EBAE15C38332AB8BC8179F039D* __this, const RuntimeMethod* method) 
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
// System.Void DTT.MinigameMemory.MemoryGameResults::.ctor(System.TimeSpan,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameResults__ctor_mA4C85C67843830AA48AB417308F2BD0F33C18B33 (MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeTaken0, int32_t ___amountOfTurns1, const RuntimeMethod* method) 
{
	{
		// public MemoryGameResults(TimeSpan timeTaken, int amountOfTurns)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.timeTaken = timeTaken;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = ___timeTaken0;
		__this->___timeTaken_0 = L_0;
		// this.amountOfTurns = amountOfTurns;
		int32_t L_1 = ___amountOfTurns1;
		__this->___amountOfTurns_1 = L_1;
		// }
		return;
	}
}
// System.String DTT.MinigameMemory.MemoryGameResults::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MemoryGameResults_ToString_m7676760CA2183EB8D4EBD66C2C4B78B838770F0F (MemoryGameResults_t96FCDFA6B9C971CF83210BE5A3CD5080FAF271DC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67D6A56F002B5413056AEF8A210BE2021B2CF98E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3CCA58F28E1003103BB6E6DC8943FE17C5E8744);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA733DAE4BD136322173FA194B85079A4D46B3A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StringBuilder sb = new StringBuilder();
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		// sb.Append("Time taken (s): ");
		StringBuilder_t* L_1 = L_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, _stringLiteral67D6A56F002B5413056AEF8A210BE2021B2CF98E, NULL);
		// sb.Append(timeTaken.ToString(@"hh\:mm\:ss"));
		StringBuilder_t* L_3 = L_1;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_4 = (&__this->___timeTaken_0);
		String_t* L_5;
		L_5 = TimeSpan_ToString_m5B50613FCD29547F04EAE305B2226CB9F490C432(L_4, _stringLiteralB3CCA58F28E1003103BB6E6DC8943FE17C5E8744, NULL);
		NullCheck(L_3);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_3, L_5, NULL);
		// sb.Append('\t');
		StringBuilder_t* L_7 = L_3;
		NullCheck(L_7);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_7, ((int32_t)9), NULL);
		// sb.Append("Amount of turns taken: ");
		StringBuilder_t* L_9 = L_7;
		NullCheck(L_9);
		StringBuilder_t* L_10;
		L_10 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_9, _stringLiteralBDA733DAE4BD136322173FA194B85079A4D46B3A, NULL);
		// sb.Append(amountOfTurns);
		StringBuilder_t* L_11 = L_9;
		int32_t L_12 = __this->___amountOfTurns_1;
		NullCheck(L_11);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_11, L_12, NULL);
		// return sb.ToString();
		NullCheck(L_11);
		String_t* L_14;
		L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		return L_14;
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
// DTT.MinigameMemory.IShuffleAlgorithm DTT.MinigameMemory.MemoryGameSettings::get_ShuffleAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryGameSettings_get_ShuffleAlgorithm_m6B9A434E923F5D59918225259C81B8FA7ED73DF9 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public IShuffleAlgorithm ShuffleAlgorithm => GetAlgorithm();
		RuntimeObject* L_0;
		L_0 = MemoryGameSettings_GetAlgorithm_m21709CD16CB8BE27CC0C73F336690B2408CD1A07(__this, NULL);
		return L_0;
	}
}
// DTT.MinigameMemory.CardModes DTT.MinigameMemory.MemoryGameSettings::get_CardMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_CardMode_m02DE916E961E1F04A664CD1146885FC2F6E918C7 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public CardModes CardMode => _cardMode;
		int32_t L_0 = __this->____cardMode_6;
		return L_0;
	}
}
// DTT.MinigameMemory.BoardModes DTT.MinigameMemory.MemoryGameSettings::get_BoardMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_BoardMode_m826148A552CD411F66DC200F45910017BB3D2894 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public BoardModes BoardMode => _boardMode;
		int32_t L_0 = __this->____boardMode_8;
		return L_0;
	}
}
// System.Boolean DTT.MinigameMemory.MemoryGameSettings::get_AlignLastRow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MemoryGameSettings_get_AlignLastRow_m3B69A6FF0215C52C6064286A162367EF8FADEF29 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public bool AlignLastRow => _alignLastRow;
		bool L_0 = __this->____alignLastRow_5;
		return L_0;
	}
}
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_AmountOfCardsInGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_AmountOfCardsInGame_m57CC64F65E96232A92DCD12684B20A7995D54309 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public int AmountOfCardsInGame => GetAmountOfCardsInGame();
		int32_t L_0;
		L_0 = MemoryGameSettings_GetAmountOfCardsInGame_m817318F5ED80B16F6A0048759671563E9E5FB4C4(__this, NULL);
		return L_0;
	}
}
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_AmountOfCardsOnBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_AmountOfCardsOnBoard_mB424C27D3AAF0CC0D3A2670E3FD0D48CF85C3D3E (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public int AmountOfCardsOnBoard => GetAmountOfCardsOnBoard();
		int32_t L_0;
		L_0 = MemoryGameSettings_GetAmountOfCardsOnBoard_m22287ED4EDD300CCBE08054872F85466C74AF316(__this, NULL);
		return L_0;
	}
}
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::get_RefillAtFoundPercentage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_RefillAtFoundPercentage_mD187B915C5E931AFDB5848376736D37192070165 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public int RefillAtFoundPercentage => _refillAtFoundPercentage;
		int32_t L_0 = __this->____refillAtFoundPercentage_10;
		return L_0;
	}
}
// System.Single DTT.MinigameMemory.MemoryGameSettings::get_CardAnimationSpeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MemoryGameSettings_get_CardAnimationSpeed_m615500D3D1E00BE9889615A14ED8B75D6F6013D9 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public float CardAnimationSpeed =>_cardAnimationSpeed;
		float L_0 = __this->____cardAnimationSpeed_11;
		return L_0;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::get_CardBacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* MemoryGameSettings_get_CardBacks_m8817DB2CD75A558DD475B68CF644533C8C8E51B4 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ReadOnlyCollection<Sprite> CardBacks => _cardBacks.AsReadOnly();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->____cardBacks_12;
		NullCheck(L_0);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_1;
		L_1 = List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831(L_0, List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831_RuntimeMethod_var);
		return L_1;
	}
}
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Sprite> DTT.MinigameMemory.MemoryGameSettings::get_CardSprites()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* MemoryGameSettings_get_CardSprites_mA7AB5B6DBBCE0D86928503E48243207D25230399 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ReadOnlyCollection<Sprite> CardSprites => _cardSprites.AsReadOnly();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = __this->____cardSprites_13;
		NullCheck(L_0);
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_1;
		L_1 = List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831(L_0, List_1_AsReadOnly_m4C041D4A35809BC9E5DA3DEF50F7E145B1CF7831_RuntimeMethod_var);
		return L_1;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameSettings::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameSettings_Reset_m966F01305FF8D9578C60CF79088523FCE57F1D16 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _shuffleAlgorithm = ShuffleAlgorithms.FISHER_YATES;
		__this->____shuffleAlgorithm_4 = 0;
		// _cardMode = CardModes.USE_CARDS_ONCE;
		__this->____cardMode_6 = 0;
		// _boardMode = BoardModes.ALL_CARDS_ON_BOARD;
		__this->____boardMode_8 = 0;
		// _amountOfCards = 10;
		__this->____amountOfCards_7 = ((int32_t)10);
		// _cardsOnBoardLimit = 4;
		__this->____cardsOnBoardLimit_9 = 4;
		// _refillAtFoundPercentage = 100;
		__this->____refillAtFoundPercentage_10 = ((int32_t)100);
		// _cardAnimationSpeed = 1f;
		__this->____cardAnimationSpeed_11 = (1.0f);
		// _alignLastRow = true;
		__this->____alignLastRow_5 = (bool)1;
		// _cardBacks = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_0 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_0, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->____cardBacks_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cardBacks_12), (void*)L_0);
		// _cardSprites = new List<Sprite>();
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_1 = (List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206*)il2cpp_codegen_object_new(List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2(L_1, List_1__ctor_mC8A044C0E3A50C1EA1BF3DF15150A942C3E86DC2_RuntimeMethod_var);
		__this->____cardSprites_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____cardSprites_13), (void*)L_1);
		// }
		return;
	}
}
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::GetAmountOfCardsInGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_GetAmountOfCardsInGame_m817318F5ED80B16F6A0048759671563E9E5FB4C4 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// switch (_cardMode)
		int32_t L_0 = __this->____cardMode_6;
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
			goto IL_001e;
		}
	}
	{
		goto IL_003d;
	}

IL_0010:
	{
		// return _cardSprites.Count * 2;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_3 = __this->____cardSprites_13;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_3, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_multiply(L_4, 2));
	}

IL_001e:
	{
		// if (_amountOfCards % 2 != 0)
		int32_t L_5 = __this->____amountOfCards_7;
		if (!((int32_t)(L_5%2)))
		{
			goto IL_0036;
		}
	}
	{
		// _cardsOnBoardLimit--;
		int32_t L_6 = __this->____cardsOnBoardLimit_9;
		__this->____cardsOnBoardLimit_9 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
	}

IL_0036:
	{
		// return _amountOfCards;
		int32_t L_7 = __this->____amountOfCards_7;
		return L_7;
	}

IL_003d:
	{
		// return _cardSprites.Count * 2;
		List_1_t7BE9C297880B5B41D1E6B89174D4394BF535D206* L_8 = __this->____cardSprites_13;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_inline(L_8, List_1_get_Count_mF949A7522EA5DF1109EDAD6E4D8454EFDC54B63F_RuntimeMethod_var);
		return ((int32_t)il2cpp_codegen_multiply(L_9, 2));
	}
}
// System.Int32 DTT.MinigameMemory.MemoryGameSettings::GetAmountOfCardsOnBoard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_GetAmountOfCardsOnBoard_m22287ED4EDD300CCBE08054872F85466C74AF316 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// int cardsInGame = GetAmountOfCardsInGame();
		int32_t L_0;
		L_0 = MemoryGameSettings_GetAmountOfCardsInGame_m817318F5ED80B16F6A0048759671563E9E5FB4C4(__this, NULL);
		V_0 = L_0;
		// int cardsOnBoard = 0;
		V_1 = 0;
		// switch (_boardMode)
		int32_t L_1 = __this->____boardMode_8;
		V_2 = L_1;
		int32_t L_2 = V_2;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0053;
	}

IL_0019:
	{
		// cardsOnBoard = AmountOfCardsInGame;
		int32_t L_4;
		L_4 = MemoryGameSettings_get_AmountOfCardsInGame_m57CC64F65E96232A92DCD12684B20A7995D54309(__this, NULL);
		V_1 = L_4;
		// break;
		goto IL_0061;
	}

IL_0022:
	{
		// if (_cardsOnBoardLimit < 4)
		int32_t L_5 = __this->____cardsOnBoardLimit_9;
		if ((((int32_t)L_5) >= ((int32_t)4)))
		{
			goto IL_0032;
		}
	}
	{
		// _cardsOnBoardLimit = 4;
		__this->____cardsOnBoardLimit_9 = 4;
	}

IL_0032:
	{
		// if (_cardsOnBoardLimit % 2 != 0)
		int32_t L_6 = __this->____cardsOnBoardLimit_9;
		if (!((int32_t)(L_6%2)))
		{
			goto IL_004a;
		}
	}
	{
		// _cardsOnBoardLimit--;
		int32_t L_7 = __this->____cardsOnBoardLimit_9;
		__this->____cardsOnBoardLimit_9 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
	}

IL_004a:
	{
		// cardsOnBoard = _cardsOnBoardLimit;
		int32_t L_8 = __this->____cardsOnBoardLimit_9;
		V_1 = L_8;
		// break;
		goto IL_0061;
	}

IL_0053:
	{
		// cardsOnBoard = CardSprites.Count * 2;
		ReadOnlyCollection_1_t94E7F071D04D3C7FFD3D87EA537562D5C4C48156* L_9;
		L_9 = MemoryGameSettings_get_CardSprites_mA7AB5B6DBBCE0D86928503E48243207D25230399(__this, NULL);
		NullCheck(L_9);
		int32_t L_10;
		L_10 = ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170(L_9, ReadOnlyCollection_1_get_Count_mC4D5C9722010B3C0859278FD9F122B19A22E8170_RuntimeMethod_var);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_10, 2));
	}

IL_0061:
	{
		// if (cardsOnBoard > cardsInGame)
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		if ((((int32_t)L_11) <= ((int32_t)L_12)))
		{
			goto IL_0067;
		}
	}
	{
		// cardsOnBoard = cardsInGame;
		int32_t L_13 = V_0;
		V_1 = L_13;
	}

IL_0067:
	{
		// return cardsOnBoard;
		int32_t L_14 = V_1;
		return L_14;
	}
}
// DTT.MinigameMemory.IShuffleAlgorithm DTT.MinigameMemory.MemoryGameSettings::GetAlgorithm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MemoryGameSettings_GetAlgorithm_m21709CD16CB8BE27CC0C73F336690B2408CD1A07 (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4BD97AB9F27A0322B285DCA30CD7974EF4C3AA0);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// switch (_shuffleAlgorithm)
		int32_t L_0 = __this->____shuffleAlgorithm_4;
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_0023;
			}
			case 2:
			{
				goto IL_002b;
			}
		}
	}
	{
		goto IL_0033;
	}

IL_001b:
	{
		// algorithm = new FisherYatesShuffleAlgorithm();
		FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11* L_2 = (FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11*)il2cpp_codegen_object_new(FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		FisherYatesShuffleAlgorithm__ctor_m3870D9A763000589E7FBCD946CB620A399F6C8AA(L_2, NULL);
		V_0 = L_2;
		// break;
		goto IL_0043;
	}

IL_0023:
	{
		// algorithm = new KnuthShuffleAlgorithm();
		KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0* L_3 = (KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0*)il2cpp_codegen_object_new(KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		KnuthShuffleAlgorithm__ctor_mBB819962E6E6D1842D823D8437B21FB997BF2BE0(L_3, NULL);
		V_0 = L_3;
		// break;
		goto IL_0043;
	}

IL_002b:
	{
		// algorithm = new AssignedValueShuffleAlgorithm();
		AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82* L_4 = (AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82*)il2cpp_codegen_object_new(AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		AssignedValueShuffleAlgorithm__ctor_m253236BB287DC6C02507B5AEB37968392C711975(L_4, NULL);
		V_0 = L_4;
		// break;
		goto IL_0043;
	}

IL_0033:
	{
		// Debug.LogError("[DTT] - [Minigame - Memory] - [GameSettings] - " +
		//     "ShuffleAlgorithm not recognised, using Fisher-Yates shuffle instead.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB4BD97AB9F27A0322B285DCA30CD7974EF4C3AA0, NULL);
		// algorithm = new FisherYatesShuffleAlgorithm();
		FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11* L_5 = (FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11*)il2cpp_codegen_object_new(FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		FisherYatesShuffleAlgorithm__ctor_m3870D9A763000589E7FBCD946CB620A399F6C8AA(L_5, NULL);
		V_0 = L_5;
	}

IL_0043:
	{
		// return algorithm;
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Void DTT.MinigameMemory.MemoryGameSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryGameSettings__ctor_m0065D4264CAEDB97C520F1A3A55D06C4A31CBCDD (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// private bool _alignLastRow = true;
		__this->____alignLastRow_5 = (bool)1;
		// private int _amountOfCards = 10;
		__this->____amountOfCards_7 = ((int32_t)10);
		// private int _cardsOnBoardLimit = 4;
		__this->____cardsOnBoardLimit_9 = 4;
		// private int _refillAtFoundPercentage = 100;
		__this->____refillAtFoundPercentage_10 = ((int32_t)100);
		// private float _cardAnimationSpeed = 1f;
		__this->____cardAnimationSpeed_11 = (1.0f);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
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
// System.Void DTT.MinigameMemory.AssignedValueShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssignedValueShuffleAlgorithm__ctor_m253236BB287DC6C02507B5AEB37968392C711975 (AssignedValueShuffleAlgorithm_t76FB7C90FF9A473B6BBA4500163E9102D30C5F82* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____random_0), (void*)L_0);
		// private List<double> _randoms = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_1 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_1, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		__this->____randoms_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____randoms_1), (void*)L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void DTT.MinigameMemory.FisherYatesShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FisherYatesShuffleAlgorithm__ctor_m3870D9A763000589E7FBCD946CB620A399F6C8AA (FisherYatesShuffleAlgorithm_t4DFA4A5E11870873458A824C9C99EEE7FF6D1D11* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____random_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void DTT.MinigameMemory.KnuthShuffleAlgorithm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KnuthShuffleAlgorithm__ctor_mBB819962E6E6D1842D823D8437B21FB997BF2BE0 (KnuthShuffleAlgorithm_t42CCE116A576AAD4E86742B729E60B45EC2F68D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private System.Random _random = new System.Random();
		Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8* L_0 = (Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8*)il2cpp_codegen_object_new(Random_t79716069EDE67D1D7734F60AE402D0CA3FB6B4C8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Random__ctor_m151183BD4F021499A98B9DE8502DAD4B12DD16AC(L_0, NULL);
		__this->____random_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____random_0), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t MemoryGameSettings_get_RefillAtFoundPercentage_mD187B915C5E931AFDB5848376736D37192070165_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public int RefillAtFoundPercentage => _refillAtFoundPercentage;
		int32_t L_0 = __this->____refillAtFoundPercentage_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float MemoryGameSettings_get_CardAnimationSpeed_m615500D3D1E00BE9889615A14ED8B75D6F6013D9_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public float CardAnimationSpeed =>_cardAnimationSpeed;
		float L_0 = __this->____cardAnimationSpeed_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MemoryGameSettings_get_AlignLastRow_m3B69A6FF0215C52C6064286A162367EF8FADEF29_inline (MemoryGameSettings_t70834DA399C1BB1968526B59D733D793E268CC92* __this, const RuntimeMethod* method) 
{
	{
		// public bool AlignLastRow => _alignLastRow;
		bool L_0 = __this->____alignLastRow_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Repeat_m6F1560A163481BB311D685294E1B463C3E4EB3BA_inline (float ___t0, float ___length1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___t0;
		float L_1 = ___t0;
		float L_2 = ___length1;
		float L_3;
		L_3 = floorf(((float)(L_1/L_2)));
		float L_4 = ___length1;
		float L_5 = ___length1;
		float L_6;
		L_6 = Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline(((float)il2cpp_codegen_subtract(L_0, ((float)il2cpp_codegen_multiply(L_3, L_4)))), (0.0f), L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m2A39AE881CAEE6B6A4B3BFEF9CA1ED40625F5AB7_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = floor(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___a0;
		int32_t L_1 = ___b1;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Min_m747CA71A9483CDB394B13BD0AD048EE17E48FFE4_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) < ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Card_SetFrontsprite_m95BD65CE16F636798DC811AFD7892D92E96F4D1B_inline (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___frontSprite0, const RuntimeMethod* method) 
{
	{
		// public void SetFrontsprite(Sprite frontSprite) => _frontSprite = frontSprite;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = ___frontSprite0;
		__this->____frontSprite_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____frontSprite_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Card_get_IsShowing_m7E3BF6637CA4506B93A487C779A25B40ABEC1DAE_inline (Card_t70D4C7E660B6AE77D22C72D272D4970AC7134E2D* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsShowing => _isShowing;
		bool L_0 = __this->____isShowing_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_cellSize_m30D8A051F44C8EE0C87B6D6CDDC00C2592A78B6D_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 cellSize { get { return m_CellSize; } set { SetProperty(ref m_CellSize, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_CellSize_14;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GridLayoutGroup_get_spacing_m19BC15652BF18D051B0998C14F13DB83191F3E58_inline (GridLayoutGroup_tEE9C68F88C13E6BD716BBD356D008ACFB63F1940* __this, const RuntimeMethod* method) 
{
	{
		// public Vector2 spacing { get { return m_Spacing; } set { SetProperty(ref m_Spacing, value); } }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___m_Spacing_15;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m9262AB29E3E9CE94EF71051F38A28E82AEC73F90_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* Button_get_onClick_m701712A7F7F000CC80D517C4510697E15722C35C_inline (Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* L_0 = __this->___m_OnClick_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Image_get_sprite_mB2AA377708722E100574F6F75BC102513BB3BCB1_inline (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Sprite; }
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->___m_Sprite_37;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m7BFCE0BBCF67689D263059B56A8D79161B698587_gshared_inline (Action_2_t156C43F079E7E68155FCDCD12DC77DD11AEF7E3C* __this, RuntimeObject* ___arg10, RuntimeObject* ___arg21, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg10, ___arg21, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m69C8773D6967F3B224777183E24EA621CE056F8F_gshared_inline (Action_1_t10DCB0C07D0D3C565CEACADC80D1152B35A45F6C* __this, bool ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, bool, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_mEB9AEA827D27D20FCC787F7375156AF46BB12BBF_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
