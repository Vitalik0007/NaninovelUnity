#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
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
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>
struct Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry>
struct Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7;
// System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>
struct Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>
struct IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_tC189DB2F3849FDE7C64E0E497B557212046F70ED;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<Naninovel.Antlr.Runtime.Tree.CommonTree>
struct IEnumerable_1_t6F9FE0D3C782DB5B04B9E83764BAA1609B00D436;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2CA7720C7ADCCDECD3B02E45878B4478619D5347;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>
struct IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.IList>
struct KeyCollection_t5D372DB336DC2F33B239A7CA00D4290F1D738B90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.List`1<Naninovel.Antlr.Runtime.IToken>
struct List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>
struct LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.IList>
struct ValueCollection_tD2AC12FFB29B4114271DAF1D53E07E3B04894E71;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement>
struct WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.IList>[]
struct EntryU5BU5D_tF6131033BA8B8DE544E7177054CC71ADB156C6E4;
// System.Collections.Generic.Dictionary`2/Entry<System.Object,System.Int32>[]
struct EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>[]
struct IDictionary_2U5BU5D_tF539C288CAC9EE20955F9583B351746F45A75704;
// Naninovel.Antlr.Runtime.BitSet[]
struct BitSetU5BU5D_tE5BE9A38BC353137DFAA51CDE7636185CA4E3498;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// Naninovel.Antlr.Runtime.IToken[]
struct ITokenU5BU5D_t92C7BEC8178929ECE7002BE5C7A67DBEC462C61A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// Naninovel.Antlr.Runtime.BaseRecognizer
struct BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5;
// Naninovel.Antlr.Runtime.Tree.BaseTree
struct BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7;
// Naninovel.Antlr.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_t2F4370E7E1C0377D2E9F339D3FA78E6741E39F6D;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// Naninovel.Antlr.Runtime.BitSet
struct BitSet_t60449D01C3BE9849C15513C4A88212B310E0E83E;
// Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream
struct BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA;
// Naninovel.Antlr.Runtime.Tree.CommonErrorNode
struct CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9;
// Naninovel.Antlr.Runtime.CommonToken
struct CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414;
// Naninovel.Antlr.Runtime.Tree.CommonTree
struct CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635;
// Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D;
// Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream
struct CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator
struct DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26;
// System.Exception
struct Exception_t;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Naninovel.Antlr.Runtime.IAstRuleReturnScope
struct IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE;
// Naninovel.Antlr.Runtime.ICharStream
struct ICharStream_tEBEE13EFE3BB0049221C7E539F486DDDB4317666;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t726606DAC82C384B08C82471313C340968DDB609;
// Naninovel.Antlr.Runtime.IIntStream
struct IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// Naninovel.Antlr.Runtime.IToken
struct IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B;
// Naninovel.Antlr.Runtime.ITokenStream
struct ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB;
// Naninovel.Antlr.Runtime.Tree.ITree
struct ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6;
// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor
struct ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC;
// Naninovel.Antlr.Runtime.Tree.ITreeNodeStream
struct ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97;
// Naninovel.Antlr.Runtime.Tree.ITreeVisitorAction
struct ITreeVisitorAction_t5EFDF630CA417F5C1A4A1EEE56C6D235EB1F55AB;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Naninovel.Antlr.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Naninovel.Antlr.Runtime.Tree.ParseTree
struct ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0;
// Naninovel.Antlr.Runtime.RecognitionException
struct RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760;
// Naninovel.Antlr.Runtime.RecognizerSharedState
struct RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7;
// Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException
struct RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF;
// Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException
struct RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70;
// Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException
struct RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A;
// Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream
struct RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245;
// Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream
struct RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD;
// Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763;
// Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3;
// Naninovel.Antlr.Runtime.Tree.TreeFilter
struct TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD;
// Naninovel.Antlr.Runtime.Tree.TreeIterator
struct TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A;
// Naninovel.Antlr.Runtime.Tree.TreeParser
struct TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1;
// Naninovel.Antlr.Runtime.Tree.TreePatternLexer
struct TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1;
// Naninovel.Antlr.Runtime.Tree.TreePatternParser
struct TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468;
// Naninovel.Antlr.Runtime.Tree.TreeRewriter
struct TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67;
// Naninovel.Antlr.Runtime.Tree.TreeVisitor
struct TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D;
// Naninovel.Antlr.Runtime.Tree.TreeVisitorAction
struct TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E;
// Naninovel.Antlr.Runtime.Tree.TreeWizard
struct TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator
struct StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3;
// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9
struct U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386;
// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8
struct U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76;
// System.Text.RegularExpressions.Regex/CachedCodeEntry
struct CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor
struct ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor
struct FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor
struct FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor
struct IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern
struct TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor
struct TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor
struct VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor
struct Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111;
// Naninovel.Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern
struct WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD;

IL2CPP_EXTERN_C RuntimeClass* ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t6F9FE0D3C782DB5B04B9E83764BAA1609B00D436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5D6225F0449F3937D7FEDDD852D5F745AEFDE651_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITreeVisitorAction_t5EFDF630CA417F5C1A4A1EEE56C6D235EB1F55AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoViableAltException_t1B76AABC41ADEC7287F72B8F213522649B1D5FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532;
IL2CPP_EXTERN_C String_t* _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469;
IL2CPP_EXTERN_C String_t* _stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F;
IL2CPP_EXTERN_C String_t* _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01;
IL2CPP_EXTERN_C String_t* _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E;
IL2CPP_EXTERN_C String_t* _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
IL2CPP_EXTERN_C String_t* _stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0;
IL2CPP_EXTERN_C String_t* _stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F;
IL2CPP_EXTERN_C String_t* _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
IL2CPP_EXTERN_C String_t* _stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F;
IL2CPP_EXTERN_C String_t* _stringLiteral4B73682CED1B654C47A337DF5A4BC2B5D6FD262A;
IL2CPP_EXTERN_C String_t* _stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1;
IL2CPP_EXTERN_C String_t* _stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE;
IL2CPP_EXTERN_C String_t* _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450;
IL2CPP_EXTERN_C String_t* _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710;
IL2CPP_EXTERN_C String_t* _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
IL2CPP_EXTERN_C String_t* _stringLiteral79709B18E471A26FDB78780B715C9BBAAFD4CFEC;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529;
IL2CPP_EXTERN_C String_t* _stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral884DE836248FF2895E37A904B1FE9B39766FAA84;
IL2CPP_EXTERN_C String_t* _stringLiteral8AE7128187D3AD156C6CD8181A8C4A55758A7A64;
IL2CPP_EXTERN_C String_t* _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
IL2CPP_EXTERN_C String_t* _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D;
IL2CPP_EXTERN_C String_t* _stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393;
IL2CPP_EXTERN_C String_t* _stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C;
IL2CPP_EXTERN_C String_t* _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
IL2CPP_EXTERN_C String_t* _stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02;
IL2CPP_EXTERN_C String_t* _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC;
IL2CPP_EXTERN_C String_t* _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677;
IL2CPP_EXTERN_C String_t* _stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58;
IL2CPP_EXTERN_C String_t* _stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8;
IL2CPP_EXTERN_C String_t* _stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
IL2CPP_EXTERN_C String_t* _stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324;
IL2CPP_EXTERN_C String_t* _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A;
IL2CPP_EXTERN_C String_t* _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A;
IL2CPP_EXTERN_C const RuntimeMethod* CommonTree__ctor_m0E475164AC6B28610784D545E679209FB07E5C9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisCommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_m46984122BE8700EC6D8BDB4497804DBBB05CF3E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m639E1D8E4A27CE979E4999204E126D30AF7E6EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m65C0EAF06C6093DEC5B1682F5EC5844F775F7A43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleElementStream_NextCore_m87279806EB997882C9E8A9CAFCCFFB1C759BDBEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleNodeStream_Dup_m8787EE7055D2A58180FCE900D99B24E05986B1D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RewriteRuleTokenStream_Dup_m56736EBCCB05F5A2093A065728B2E25FEAD915A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeFilter_U3CDownupU3Eb__5_0_m6FC31D0CD62B5F2263DA0487B4A7801A3D735C02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeFilter_U3CDownupU3Eb__5_1_m400AECE8152B62D8FA7AABC2CD4841D4F1B0BB14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeParser_RecoverFromMismatchedToken_m248FBAADF22FCC33D1BCB7F932DA6BAD8B6C6281_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreePatternParser_ParseTree_mB126E50EEB80CDD7453A22804B0839EB29DB055C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3CDownupU3Eb__10_0_mD63D7604FD6AA4023B771AF17D33B5F42599E4FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3CDownupU3Eb__10_1_mBA534F769C502DC0F8E94D84492F1F5FEAEBA1FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3C_ctorU3Eb__6_0_m042DFCEBC604723616B91279BF7F6CEAA129D18F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TreeRewriter_U3C_ctorU3Eb__6_1_m14E67FA2B2F0DDDF35BF1FBCA041DD7A8B39BCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mD5B1DA3AA36204471382E8EF3A91D54EF249737B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m09D36942664B11FD2F19A998FDDFEA215CE59DC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>
struct Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tF6131033BA8B8DE544E7177054CC71ADB156C6E4* ____entries_1;
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
	KeyCollection_t5D372DB336DC2F33B239A7CA00D4290F1D738B90* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD2AC12FFB29B4114271DAF1D53E07E3B04894E71* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t8A61658460FB17254FA3796E021DC61AED164F75* ____entries_1;
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
	KeyCollection_tEBE08B15420BC67BA2CCF00CB0FC401CEE1820A9* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4B5F81478422E33CBDE8650FC287DBA3AF04E86* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEA0133B78B9FF7045128C508FA50247E525A94D6* ____entries_1;
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
	KeyCollection_tCC15D033281A6593E2488FAF5B205812A152AC03* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tCE6BD704B9571C131E2D8C8CED569DDEC4AE042B* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96* ____entries_1;
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
	KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// Naninovel.Antlr.Runtime.Misc.FastQueue`1<System.Object>
struct FastQueue_1_t54A942FD29C2BAF8BAA3F3B6493DA9F16F5C8471  : public RuntimeObject
{
	// System.Collections.Generic.List`1<T> Naninovel.Antlr.Runtime.Misc.FastQueue`1::_data
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____data_0;
	// System.Int32 Naninovel.Antlr.Runtime.Misc.FastQueue`1::_p
	int32_t ____p_1;
	// System.Int32 Naninovel.Antlr.Runtime.Misc.FastQueue`1::<Range>k__BackingField
	int32_t ___U3CRangeU3Ek__BackingField_2;
};

// System.Collections.Generic.List`1<Naninovel.Antlr.Runtime.IToken>
struct List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ITokenU5BU5D_t92C7BEC8178929ECE7002BE5C7A67DBEC462C61A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ITokenU5BU5D_t92C7BEC8178929ECE7002BE5C7A67DBEC462C61A* ___s_emptyArray_5;
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

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t30F185E3BC030124E641D5A23804D99A2BDC6044  : public RuntimeObject
{
};
struct Il2CppArrayBounds;

// Naninovel.Antlr.Runtime.BaseRecognizer
struct BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.RecognizerSharedState Naninovel.Antlr.Runtime.BaseRecognizer::state
	RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state_6;
	// System.IO.TextWriter Naninovel.Antlr.Runtime.BaseRecognizer::<TraceDestination>k__BackingField
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___U3CTraceDestinationU3Ek__BackingField_7;
};

// Naninovel.Antlr.Runtime.Tree.BaseTree
struct BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::_children
	RuntimeObject* ____children_0;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::<Line>k__BackingField
	int32_t ___U3CLineU3Ek__BackingField_1;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::<CharPositionInLine>k__BackingField
	int32_t ___U3CCharPositionInLineU3Ek__BackingField_2;
};

// Naninovel.Antlr.Runtime.Tree.BaseTreeAdaptor
struct BaseTreeAdaptor_t2F4370E7E1C0377D2E9F339D3FA78E6741E39F6D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.Object,System.Int32> Naninovel.Antlr.Runtime.Tree.BaseTreeAdaptor::treeToUniqueIDMap
	RuntimeObject* ___treeToUniqueIDMap_0;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTreeAdaptor::uniqueNodeID
	int32_t ___uniqueNodeID_1;
};

// Naninovel.Antlr.Runtime.BitSet
struct BitSet_t60449D01C3BE9849C15513C4A88212B310E0E83E  : public RuntimeObject
{
	// System.UInt64[] Naninovel.Antlr.Runtime.BitSet::_bits
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____bits_3;
};

// Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream
struct BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA  : public RuntimeObject
{
	// System.Object Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::down
	RuntimeObject* ___down_2;
	// System.Object Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::up
	RuntimeObject* ___up_3;
	// System.Object Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::eof
	RuntimeObject* ___eof_4;
	// System.Collections.IList Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::nodes
	RuntimeObject* ___nodes_5;
	// System.Object Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::root
	RuntimeObject* ___root_6;
	// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::tokens
	RuntimeObject* ___tokens_7;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::adaptor
	RuntimeObject* ___adaptor_8;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::uniqueNavigationNodes
	bool ___uniqueNavigationNodes_9;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::p
	int32_t ___p_10;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::lastMarker
	int32_t ___lastMarker_11;
	// System.Collections.Generic.Stack`1<System.Int32> Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream::calls
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ___calls_12;
};

// Naninovel.Antlr.Runtime.CommonToken
struct CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414  : public RuntimeObject
{
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::type
	int32_t ___type_0;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::line
	int32_t ___line_1;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::charPositionInLine
	int32_t ___charPositionInLine_2;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::channel
	int32_t ___channel_3;
	// Naninovel.Antlr.Runtime.ICharStream Naninovel.Antlr.Runtime.CommonToken::input
	RuntimeObject* ___input_4;
	// System.String Naninovel.Antlr.Runtime.CommonToken::text
	String_t* ___text_5;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::index
	int32_t ___index_6;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::start
	int32_t ___start_7;
	// System.Int32 Naninovel.Antlr.Runtime.CommonToken::stop
	int32_t ___stop_8;
};

// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator
struct DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26  : public RuntimeObject
{
	// System.String[] Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::HeaderLines
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___HeaderLines_0;
	// System.Collections.Generic.Dictionary`2<System.Object,System.Int32> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::nodeToNumberMap
	Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* ___nodeToNumberMap_4;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::nodeNumber
	int32_t ___nodeNumber_5;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Naninovel.Antlr.Runtime.RecognizerSharedState
struct RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.BitSet[] Naninovel.Antlr.Runtime.RecognizerSharedState::following
	BitSetU5BU5D_tE5BE9A38BC353137DFAA51CDE7636185CA4E3498* ___following_0;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::_fsp
	int32_t ____fsp_1;
	// System.Boolean Naninovel.Antlr.Runtime.RecognizerSharedState::errorRecovery
	bool ___errorRecovery_2;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::lastErrorIndex
	int32_t ___lastErrorIndex_3;
	// System.Boolean Naninovel.Antlr.Runtime.RecognizerSharedState::failed
	bool ___failed_4;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::syntaxErrors
	int32_t ___syntaxErrors_5;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::backtracking
	int32_t ___backtracking_6;
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>[] Naninovel.Antlr.Runtime.RecognizerSharedState::ruleMemo
	IDictionary_2U5BU5D_tF539C288CAC9EE20955F9583B351746F45A75704* ___ruleMemo_7;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognizerSharedState::token
	RuntimeObject* ___token_8;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartCharIndex
	int32_t ___tokenStartCharIndex_9;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartLine
	int32_t ___tokenStartLine_10;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::tokenStartCharPositionInLine
	int32_t ___tokenStartCharPositionInLine_11;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::channel
	int32_t ___channel_12;
	// System.Int32 Naninovel.Antlr.Runtime.RecognizerSharedState::type
	int32_t ___type_13;
	// System.String Naninovel.Antlr.Runtime.RecognizerSharedState::text
	String_t* ___text_14;
};

// Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream
struct RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245  : public RuntimeObject
{
	// System.Int32 Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::cursor
	int32_t ___cursor_0;
	// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::singleElement
	RuntimeObject* ___singleElement_1;
	// System.Collections.IList Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::elements
	RuntimeObject* ___elements_2;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::dirty
	bool ___dirty_3;
	// System.String Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::elementDescription
	String_t* ___elementDescription_4;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::adaptor
	RuntimeObject* ___adaptor_5;
};

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37  : public RuntimeObject
{
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t* ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;
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

// Naninovel.Antlr.Runtime.Tokens
struct Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC  : public RuntimeObject
{
};

struct Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_StaticFields
{
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::EndOfFile
	RuntimeObject* ___EndOfFile_0;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::Invalid
	RuntimeObject* ___Invalid_1;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tokens::Skip
	RuntimeObject* ___Skip_2;
};

// Naninovel.Antlr.Runtime.Tree.TreeConstants
struct TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0  : public RuntimeObject
{
};

struct TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_StaticFields
{
	// Naninovel.Antlr.Runtime.Tree.ITree Naninovel.Antlr.Runtime.Tree.TreeConstants::INVALID_NODE
	RuntimeObject* ___INVALID_NODE_0;
};

// Naninovel.Antlr.Runtime.Tree.TreeIterator
struct TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreeIterator::adaptor
	RuntimeObject* ___adaptor_0;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::root
	RuntimeObject* ___root_1;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::tree
	RuntimeObject* ___tree_2;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeIterator::firstTime
	bool ___firstTime_3;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeIterator::reachedEof
	bool ___reachedEof_4;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::up
	RuntimeObject* ___up_5;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::down
	RuntimeObject* ___down_6;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::eof
	RuntimeObject* ___eof_7;
	// System.Collections.Generic.Queue`1<System.Object> Naninovel.Antlr.Runtime.Tree.TreeIterator::nodes
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___nodes_8;
	// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Naninovel.Antlr.Runtime.Tree.TreePatternLexer
struct TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1  : public RuntimeObject
{
	// System.String Naninovel.Antlr.Runtime.Tree.TreePatternLexer::pattern
	String_t* ___pattern_7;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::p
	int32_t ___p_8;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::c
	int32_t ___c_9;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::n
	int32_t ___n_10;
	// System.Text.StringBuilder Naninovel.Antlr.Runtime.Tree.TreePatternLexer::sval
	StringBuilder_t* ___sval_11;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.TreePatternLexer::error
	bool ___error_12;
};

// Naninovel.Antlr.Runtime.Tree.TreePatternParser
struct TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.TreePatternLexer Naninovel.Antlr.Runtime.Tree.TreePatternParser::tokenizer
	TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* ___tokenizer_0;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternParser::ttype
	int32_t ___ttype_1;
	// Naninovel.Antlr.Runtime.Tree.TreeWizard Naninovel.Antlr.Runtime.Tree.TreePatternParser::wizard
	TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___wizard_2;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreePatternParser::adaptor
	RuntimeObject* ___adaptor_3;
};

// Naninovel.Antlr.Runtime.Tree.TreeVisitor
struct TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreeVisitor::adaptor
	RuntimeObject* ___adaptor_0;
};

// Naninovel.Antlr.Runtime.Tree.TreeVisitorAction
struct TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E  : public RuntimeObject
{
	// System.Func`2<System.Object,System.Object> Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::_preAction
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ____preAction_0;
	// System.Func`2<System.Object,System.Object> Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::_postAction
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* ____postAction_1;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard
struct TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreeWizard::adaptor
	RuntimeObject* ___adaptor_0;
	// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Naninovel.Antlr.Runtime.Tree.TreeWizard::tokenNameToTypeMap
	RuntimeObject* ___tokenNameToTypeMap_1;
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

// Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator
struct StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::_outer
	BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* ____outer_0;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::_index
	int32_t ____index_1;
};

// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9
struct U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386  : public RuntimeObject
{
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::tree
	RuntimeObject* ___tree_3;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>3__tree
	RuntimeObject* ___U3CU3E3__tree_4;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::adaptor
	RuntimeObject* ___adaptor_5;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>3__adaptor
	RuntimeObject* ___U3CU3E3__adaptor_6;
	// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>4__this
	DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* ___U3CU3E4__this_7;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<n>5__2
	int32_t ___U3CnU3E5__2_8;
	// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<parentName>5__3
	String_t* ___U3CparentNameU3E5__3_9;
	// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<parentText>5__4
	String_t* ___U3CparentTextU3E5__4_10;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<i>5__5
	int32_t ___U3CiU3E5__5_11;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<child>5__6
	RuntimeObject* ___U3CchildU3E5__6_12;
	// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>7__wrap6
	RuntimeObject* ___U3CU3E7__wrap6_13;
};

// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8
struct U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76  : public RuntimeObject
{
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>2__current
	String_t* ___U3CU3E2__current_1;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::tree
	RuntimeObject* ___tree_3;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>3__tree
	RuntimeObject* ___U3CU3E3__tree_4;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::adaptor
	RuntimeObject* ___adaptor_5;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>3__adaptor
	RuntimeObject* ___U3CU3E3__adaptor_6;
	// Naninovel.Antlr.Runtime.Tree.DotTreeGenerator Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>4__this
	DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* ___U3CU3E4__this_7;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<n>5__2
	int32_t ___U3CnU3E5__2_8;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<i>5__3
	int32_t ___U3CiU3E5__3_9;
	// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<child>5__4
	RuntimeObject* ___U3CchildU3E5__4_10;
	// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>7__wrap4
	RuntimeObject* ___U3CU3E7__wrap4_11;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor
struct FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.TreeWizard Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_outer
	TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ____outer_0;
	// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_tpattern
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ____tpattern_1;
	// System.Collections.IList Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::_subtrees
	RuntimeObject* ____subtrees_2;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor
struct VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882  : public RuntimeObject
{
	// Naninovel.Antlr.Runtime.Tree.TreeWizard Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_outer
	TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ____outer_0;
	// Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_visitor
	RuntimeObject* ____visitor_1;
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_labels
	RuntimeObject* ____labels_2;
	// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::_tpattern
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ____tpattern_3;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor
struct Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111  : public RuntimeObject
{
};

// Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>
struct LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332  : public FastQueue_1_t54A942FD29C2BAF8BAA3F3B6493DA9F16F5C8471
{
	// System.Int32 Naninovel.Antlr.Runtime.Misc.LookaheadStream`1::_currentElementIndex
	int32_t ____currentElementIndex_3;
	// T Naninovel.Antlr.Runtime.Misc.LookaheadStream`1::_previousElement
	RuntimeObject* ____previousElement_4;
	// T Naninovel.Antlr.Runtime.Misc.LookaheadStream`1::_eof
	RuntimeObject* ____eof_5;
	// System.Int32 Naninovel.Antlr.Runtime.Misc.LookaheadStream`1::_lastMarker
	int32_t ____lastMarker_6;
	// System.Int32 Naninovel.Antlr.Runtime.Misc.LookaheadStream`1::_markDepth
	int32_t ____markDepth_7;
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

// Naninovel.Antlr.Runtime.Tree.CommonTree
struct CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635  : public BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7
{
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTree::_token
	RuntimeObject* ____token_3;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::startIndex
	int32_t ___startIndex_4;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::stopIndex
	int32_t ___stopIndex_5;
	// Naninovel.Antlr.Runtime.Tree.CommonTree Naninovel.Antlr.Runtime.Tree.CommonTree::parent
	CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* ___parent_6;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::childIndex
	int32_t ___childIndex_7;
};

// Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor
struct CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D  : public BaseTreeAdaptor_t2F4370E7E1C0377D2E9F339D3FA78E6741E39F6D
{
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

// Naninovel.Antlr.Runtime.Tree.ParseTree
struct ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0  : public BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7
{
	// System.Object Naninovel.Antlr.Runtime.Tree.ParseTree::payload
	RuntimeObject* ___payload_3;
	// System.Collections.Generic.List`1<Naninovel.Antlr.Runtime.IToken> Naninovel.Antlr.Runtime.Tree.ParseTree::hiddenTokens
	List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* ___hiddenTokens_4;
};

// Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream
struct RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD  : public RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245
{
};

// Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream
struct RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763  : public RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245
{
};

// Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream
struct RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E  : public RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245
{
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
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

// Naninovel.Antlr.Runtime.Tree.TreeParser
struct TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1  : public BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5
{
	// Naninovel.Antlr.Runtime.Tree.ITreeNodeStream Naninovel.Antlr.Runtime.Tree.TreeParser::input
	RuntimeObject* ___input_14;
};

struct TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields
{
	// System.String Naninovel.Antlr.Runtime.Tree.TreeParser::dotdot
	String_t* ___dotdot_10;
	// System.String Naninovel.Antlr.Runtime.Tree.TreeParser::doubleEtc
	String_t* ___doubleEtc_11;
	// System.Text.RegularExpressions.Regex Naninovel.Antlr.Runtime.Tree.TreeParser::dotdotPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___dotdotPattern_12;
	// System.Text.RegularExpressions.Regex Naninovel.Antlr.Runtime.Tree.TreeParser::doubleEtcPattern
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___doubleEtcPattern_13;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
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

// Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor
struct ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9  : public Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111
{
	// System.Action`1<System.Object> Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor::_action
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ____action_0;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor
struct FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5  : public Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111
{
	// System.Collections.IList Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::_nodes
	RuntimeObject* ____nodes_0;
};

// Naninovel.Antlr.Runtime.Tree.CommonErrorNode
struct CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9  : public CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635
{
	// Naninovel.Antlr.Runtime.IIntStream Naninovel.Antlr.Runtime.Tree.CommonErrorNode::input
	RuntimeObject* ___input_8;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonErrorNode::start
	RuntimeObject* ___start_9;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonErrorNode::stop
	RuntimeObject* ___stop_10;
	// Naninovel.Antlr.Runtime.RecognitionException Naninovel.Antlr.Runtime.Tree.CommonErrorNode::trappedException
	RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___trappedException_11;
};

// Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream
struct CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47  : public LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332
{
	// System.Object Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_root
	RuntimeObject* ____root_10;
	// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::tokens
	RuntimeObject* ___tokens_11;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_adaptor
	RuntimeObject* ____adaptor_12;
	// Naninovel.Antlr.Runtime.Tree.TreeIterator Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_it
	TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* ____it_13;
	// System.Collections.Generic.Stack`1<System.Int32> Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_calls
	Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* ____calls_14;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_hasNilRoot
	bool ____hasNilRoot_15;
	// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::_level
	int32_t ____level_16;
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

// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772  : public RuntimeObject
{
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___internalMatchTimeout_10;
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_12;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_13;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_t72373B672C7D8785F63516DDD88834F286AF41E7* ___factory_14;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___caps_15;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ___capnames_16;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___capslist_17;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_18;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::_runnerref
	ExclusiveReference_t411F04D4CC440EB7399290027E1BBABEF4C28837* ____runnerref_19;
	// System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> System.Text.RegularExpressions.Regex::_replref
	WeakReference_1_tDC6E83496181D1BAFA3B89CBC00BCD0B64450257* ____replref_20;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::_code
	RegexCode_tA23175D9DA02AD6A79B073E10EC5D225372ED6C7* ____code_21;
	// System.Boolean System.Text.RegularExpressions.Regex::_refsInitialized
	bool ____refsInitialized_22;
};

struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_StaticFields
{
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheSize
	int32_t ___s_cacheSize_1;
	// System.Collections.Generic.Dictionary`2<System.Text.RegularExpressions.Regex/CachedCodeEntryKey,System.Text.RegularExpressions.Regex/CachedCodeEntry> System.Text.RegularExpressions.Regex::s_cache
	Dictionary_2_t5B5B38BB06341F50E1C75FB53208A2A66CAE57F7* ___s_cache_2;
	// System.Int32 System.Text.RegularExpressions.Regex::s_cacheCount
	int32_t ___s_cacheCount_3;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheFirst
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheFirst_4;
	// System.Text.RegularExpressions.Regex/CachedCodeEntry System.Text.RegularExpressions.Regex::s_cacheLast
	CachedCodeEntry_tE201C3AD65C234AD9ED7A78C95025824A7A9FF39* ___s_cacheLast_5;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_maximumMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_maximumMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::s_defaultMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___s_defaultMatchTimeout_8;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___InfiniteMatchTimeout_9;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Naninovel.Antlr.Runtime.Tree.TreeFilter
struct TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD  : public TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1
{
	// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.TreeFilter::originalTokenStream
	RuntimeObject* ___originalTokenStream_15;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreeFilter::originalAdaptor
	RuntimeObject* ___originalAdaptor_16;
};

// Naninovel.Antlr.Runtime.Tree.TreeRewriter
struct TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67  : public TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1
{
	// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeRewriter::showTransformations
	bool ___showTransformations_15;
	// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.TreeRewriter::originalTokenStream
	RuntimeObject* ___originalTokenStream_16;
	// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.TreeRewriter::originalAdaptor
	RuntimeObject* ___originalAdaptor_17;
	// System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope> Naninovel.Antlr.Runtime.Tree.TreeRewriter::topdown_func
	Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* ___topdown_func_18;
	// System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope> Naninovel.Antlr.Runtime.Tree.TreeRewriter::bottomup_func
	Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* ___bottomup_func_19;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern
struct TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB  : public CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635
{
	// System.String Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern::label
	String_t* ___label_8;
	// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern::hasTextArg
	bool ___hasTextArg_9;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor
struct TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78  : public CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D
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

// Naninovel.Antlr.Runtime.RecognitionException
struct RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760  : public Exception_t
{
	// Naninovel.Antlr.Runtime.IIntStream Naninovel.Antlr.Runtime.RecognitionException::_input
	RuntimeObject* ____input_18;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_index
	int32_t ____index_19;
	// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognitionException::_token
	RuntimeObject* ____token_20;
	// System.Object Naninovel.Antlr.Runtime.RecognitionException::_node
	RuntimeObject* ____node_21;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_c
	int32_t ____c_22;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_line
	int32_t ____line_23;
	// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::_charPositionInLine
	int32_t ____charPositionInLine_24;
	// System.Boolean Naninovel.Antlr.Runtime.RecognitionException::_approximateLineInfo
	bool ____approximateLineInfo_25;
};

// Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException
struct RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF  : public Exception_t
{
	// System.String Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::_elementDescription
	String_t* ____elementDescription_18;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// Naninovel.Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern
struct WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD  : public TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>
struct Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Naninovel.Antlr.Runtime.MismatchedTokenException
struct MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70  : public RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760
{
	// System.Int32 Naninovel.Antlr.Runtime.MismatchedTokenException::_expecting
	int32_t ____expecting_26;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String> Naninovel.Antlr.Runtime.MismatchedTokenException::_tokenNames
	ReadOnlyCollection_1_tE73B24B2BA1845A2CD38DB212B20AC1B5258C14C* ____tokenNames_27;
};

// Naninovel.Antlr.Runtime.MismatchedTreeNodeException
struct MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1  : public RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760
{
	// System.Int32 Naninovel.Antlr.Runtime.MismatchedTreeNodeException::_expecting
	int32_t ____expecting_26;
};

// Naninovel.Antlr.Runtime.NoViableAltException
struct NoViableAltException_t1B76AABC41ADEC7287F72B8F213522649B1D5FE2  : public RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760
{
	// System.String Naninovel.Antlr.Runtime.NoViableAltException::_grammarDecisionDescription
	String_t* ____grammarDecisionDescription_26;
	// System.Int32 Naninovel.Antlr.Runtime.NoViableAltException::_decisionNumber
	int32_t ____decisionNumber_27;
	// System.Int32 Naninovel.Antlr.Runtime.NoViableAltException::_stateNumber
	int32_t ____stateNumber_28;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException
struct RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70  : public RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF
{
};

// Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException
struct RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A  : public RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// Naninovel.Antlr.Runtime.MissingTokenException
struct MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8  : public MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70
{
	// System.Object Naninovel.Antlr.Runtime.MissingTokenException::_inserted
	RuntimeObject* ____inserted_28;
};

// Naninovel.Antlr.Runtime.UnwantedTokenException
struct UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73  : public MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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


// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316_gshared (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73_gshared (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m64942094CF84EF32EEA550013C06FEE9F3F8A815 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.RecognitionException::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mC178E1F55F1B5648D204B95C24E2BA7A0C1F081D_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.BaseTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_mD538B6FF796B719B99E5845A4DE5429F05D8D3DF (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.BaseTree::.ctor(Naninovel.Antlr.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTree__ctor_m50D88E0AECE9915A735928DA583366237CE620C4 (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, RuntimeObject* ___node0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTree::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Token(Naninovel.Antlr.Runtime.IToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonTree_set_Token_m5C44B97E181D117DC07CADC9C482DA240F25C8D9_inline (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.BaseTree::set_CharPositionInLine(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTree_set_CharPositionInLine_m84DA301B0BEC2A1B3ED42BFC534CF8540C6A56E5_inline (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.BaseTree::set_Line(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTree_set_Line_mC5B034A71A406BD98D8FCB78963D4FB1CAF06AF9_inline (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m0E475164AC6B28610784D545E679209FB07E5C9F (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* ___node0, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<Naninovel.Antlr.Runtime.Tree.CommonTree>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisCommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_m46984122BE8700EC6D8BDB4497804DBBB05CF3E8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m791BBE6F2DB124C9B6492424703F2875B12B5A60 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___t0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.CommonToken::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_m08CB3D01C11E0C5AF308B813075BBB2E0B914518 (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* __this, int32_t ___type0, String_t* ___text1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.CommonToken::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonToken__ctor_mA98B72852A116244912D4FF8507B91F4CAAE386E (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* __this, RuntimeObject* ___oldToken0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.BaseTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseTreeAdaptor__ctor_mAE878728E17B3E13912E135B27143E81C7D785D6 (BaseTreeAdaptor_t2F4370E7E1C0377D2E9F339D3FA78E6741E39F6D* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream__ctor_mD674807A314FBCE2A254FC2C3414EAF36BD98A03 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::.ctor()
inline void LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316 (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332* __this, const RuntimeMethod* method)
{
	((  void (*) (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332*, const RuntimeMethod*))LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316_gshared)(__this, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_m6EF87CDC38986E62553DD978982BF8CEADD414B2 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::Clear()
inline void LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73 (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332* __this, const RuntimeMethod* method)
{
	((  void (*) (LookaheadStream_1_t7CCE1128CEF01D67EE7B8B14FAAFECF7EA357332*, const RuntimeMethod*))LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73_gshared)(__this, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_Reset_m26A41CC13CDB904A445182E33B6B9F929DE4BD62 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_gshared)(__this, method);
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeIterator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) ;
// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(T)
inline void Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, int32_t, const RuntimeMethod*))Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_gshared)(__this, ___item0, method);
}
// T System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748 (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*, const RuntimeMethod*))Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88 (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::AppendLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8__ctor_m1E3A48DCC67B61D8DAFE074BFE4A9DE8463E8004 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9__ctor_m41265D706D62A8D36831DE9293E704C8C4587AFE (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13 (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, RuntimeObject* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, RuntimeObject*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Text.RegularExpressions.Regex::Replace(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D (String_t* ___input0, String_t* ___pattern1, String_t* ___replacement2, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_mDD60290F7BBFBEB78F2C9607F627E15EDBCA9A6A (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_mC7ABACDA49C7DC69C8F083138D36C7D9365CB76F (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m918500C1EFB475181349A79989BB79BB36102894 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m297459ED98529B7468AB9A96315AD55E30C58BDA (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_m0EE514428C8DC1730C50F7A9945B8D0D06D5127C (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC8A7BE94F22D247532A7D126DB535E787B4E4EF7 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mB61BFA824D272EA1C5CDCF7A3810261D225B3C9B (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) ;
// TResult System.Func`2<System.Object,System.Object>::Invoke(T)
inline RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, const RuntimeMethod*))Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline)(__this, ___arg0, method);
}
// T System.Collections.Generic.List`1<Naninovel.Antlr.Runtime.IToken>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m65C0EAF06C6093DEC5B1682F5EC5844F775F7A43 (List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Naninovel.Antlr.Runtime.IToken>::get_Count()
inline int32_t List_1_get_Count_m639E1D8E4A27CE979E4999204E126D30AF7E6EDA_inline (List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mA9319117837ECAF4E60AFB1FF4E870405274D740 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mF5CD0E36D8B13E9A9F79CD2CE38966A2253F1B78 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m8A2B4222673CCC3A72FBD24F6B94AF4F0F13BB06 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___elementDescription0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m0516BC737486B489792D68354FC3D58661A03D52 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
inline void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mB3AC1C2EE2C6652EA5F0618A4443CBFBC1DE9497 (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, String_t* ___elementDescription0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mA6EA84F12B4D683F21C0911536A0DE0EE4249C0C (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mBF92B892B5BEEF2429C05AF608A08F55FBEC9BC0 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.RecognizerSharedState::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognizerSharedState__ctor_mD60FBE944694900FBF702278B20FB0B5534A5D9D (RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_m9E9D2C90635C4AE93643F6A787B63C988D1F9CDF (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_mEF07B8F68102A3AAE5A25448C23476F7CCFAB8B2 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_mEB228E145392A29C9758D4DB14F8B7E0BE1F8FB6 (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398 (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tACBF5A1656250800CE861707354491F0611F6624*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,System.Func`2<System.Object,System.Object>,System.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_m5B34A0AF0F1DBEE5218CE8C209DC93E73E008262 (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___t0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___preAction1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___postAction2, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
inline void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
inline void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::set_Current(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
inline int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
inline void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711 (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_mD428827AF098CE189D36C4C94E6D3957B9DF61A2 (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::.ctor(Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer__ctor_m5060C39EA2DFFCC320BF22B8263191034752B32F (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_Reset_mE5B8AB730B45A3943977CD5F8E79214B77C283F8 (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, const RuntimeMethod* method) ;
// Naninovel.Antlr.Runtime.IIntStream Naninovel.Antlr.Runtime.RecognitionException::get_Input()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m55BDB7B65770B52CF09D6F50E41E4F472DD37926_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.MismatchedTreeNodeException::.ctor(System.Int32,Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MismatchedTreeNodeException__ctor_m7440B1D4756E6C7A31DF58A6A75597853A50AAD2 (MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1* __this, int32_t ___expecting0, RuntimeObject* ___input1, const RuntimeMethod* method) ;
// System.Boolean Naninovel.Antlr.Runtime.RecognitionException::get_ApproximateLineInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecognitionException_get_ApproximateLineInfo_mA8D853CA00BF861073DD8063881349437B64EFFA_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_Line()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_m91F378A869C33E954B55F1191A783EF06271C43F_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Int32 Naninovel.Antlr.Runtime.RecognitionException::get_CharPositionInLine()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mCC278826CEB26FA320F7E261570BFEFD41824CF4_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Object Naninovel.Antlr.Runtime.RecognitionException::get_Node()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mEA7C009E9F1056CE1F2C97B6A498AE909C8CF1C8_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.RecognitionException::set_Token(Naninovel.Antlr.Runtime.IToken)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_mEAFBA2A05A0C47E1077AC55D4EAA63CD30E906BB_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.String Naninovel.Antlr.Runtime.BaseRecognizer::GetErrorMessage(Naninovel.Antlr.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseRecognizer_GetErrorMessage_mCB45E7F720D6DCCDD7B579F925126E9624386B50 (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::TraceIn(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceIn_m9EAE849E6FAE908BADAF6F18BC5FE05DF5CBD4FA (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.BaseRecognizer::TraceOut(System.String,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseRecognizer_TraceOut_m371C5DA88262F8CAD6209BA11E5C8FFAF28FE7C4 (BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, RuntimeObject* ___inputSymbol2, const RuntimeMethod* method) ;
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WildcardTreePattern__ctor_mC3351595003439E57078415EB30A33E32461DEE1 (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeRewriter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_m71A25000FFC50053ECBD21EA3773DA0B9CE01242 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) ;
// System.Void System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m9EC8E7F3B83322CABF664F049A421E655657A8EC (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>::Invoke()
inline RuntimeObject* Func_1_Invoke_m93F2B886018854EB61524B8B697D99CA37737665_inline (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// System.Void Naninovel.Antlr3.Runtime.PCL.Output.OutputStreamHost::WriteLine(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutputStreamHost_WriteLine_m3AF5A99ECA1EA360980FDCA80E032D8A7316DDA1 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___arg1, const RuntimeMethod* method) ;
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeVisitorAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_mEC19329BFB8F4AA34B8CCA6D240B86967463FFAE (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___t0, RuntimeObject* ___action1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::.ctor(System.Func`2<System.Object,System.Object>,System.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitorAction__ctor_m54B817949B928135FC0EABC053E4044FDC5C7A46 (TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___preAction0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___postAction1, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_mB100388BED86A336AFB2EB103C3969BECA4C5035 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___adaptor0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor()
inline void Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968 (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*, const RuntimeMethod*))Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.IList>::.ctor()
inline void Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5 (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor__ctor_m2C4692BB5AF5859912AED3108C84F7EF9A2C61B3 (FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5* __this, RuntimeObject* ___nodes0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, int32_t ___ttype1, RuntimeObject* ___visitor2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2 (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* __this, String_t* ___pattern0, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternTreeAdaptor__ctor_m3525DEAB917A3049AAEB95AE4B1C2A3D2A3A41E4 (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreePatternParser::.ctor(Naninovel.Antlr.Runtime.Tree.TreePatternLexer,Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5 (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* __this, TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* ___tokenizer0, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___wizard1, RuntimeObject* ___adaptor2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor__ctor_mDB8A043FBE6D57EDBBB9C77EBB881427CA8F8F16 (FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0* __this, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___outer0, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ___tpattern1, RuntimeObject* ___subtrees2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor::.ctor(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor__ctor_mA54724A48DCD23F4F99938218AED4A57C5FCE003 (ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor__ctor_m8B2E4B15223AC7B698829A4C626351440A915F1D (VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882* __this, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___outer0, RuntimeObject* ___visitor1, RuntimeObject* ___labels2, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ___tpattern3, const RuntimeMethod* method) ;
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_m54815BAE860584041F851FACCD71C369F0DE343E (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::EqualsCore(System.Object,System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_EqualsCore_m33BE6F00B1DB67181BCACA605552CFB6CBA57368 (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor__ctor_mA2A159D9FBA890462F8DCBF04761647F42CBFD16 (Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_ToString_mA708DAF611564A0A35288F904D9191A91C9633D9 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) ;
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePattern__ctor_m3B65F6F7A31ABFA281BC0B0E34D886795C23EE45 (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::.ctor(Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamIterator__ctor_m7268C37E3247D2A15A94B852873C5C54A35C3BA7 (StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3* __this, BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* ___outer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_0 = ___outer0;
		__this->____outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outer_0), (void*)L_0);
		__this->____index_1 = (-1);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StreamIterator_get_Current_m4CC18A56A437910EF7EE36119A3F84109D8BBC37 (StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____index_1;
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_1 = __this->____outer_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___nodes_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_0) >= ((int32_t)L_3)))
		{
			goto IL_002f;
		}
	}
	{
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_4 = __this->____outer_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___nodes_5;
		int32_t L_6 = __this->____index_1;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_5, L_6);
		return L_7;
	}

IL_002f:
	{
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_8 = __this->____outer_0;
		NullCheck(L_8);
		RuntimeObject* L_9 = L_8->___eof_4;
		return L_9;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamIterator_Dispose_m34A9BBEFC0D3304F2081976D34326B64479E516A (StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StreamIterator_MoveNext_m757F78CB4EE623938CFC2809DEA7BCCD8BBA8E46 (StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->____index_1;
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_1 = __this->____outer_0;
		NullCheck(L_1);
		RuntimeObject* L_2 = L_1->___nodes_5;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		if ((((int32_t)L_0) >= ((int32_t)L_3)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_4 = __this->____index_1;
		__this->____index_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0026:
	{
		int32_t L_5 = __this->____index_1;
		BufferedTreeNodeStream_t0CF73F4ECD26D46B31ABD7734FA4D4F9C7096FCA* L_6 = __this->____outer_0;
		NullCheck(L_6);
		RuntimeObject* L_7 = L_6->___nodes_5;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_7);
		return (bool)((((int32_t)L_5) < ((int32_t)L_8))? 1 : 0);
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.BufferedTreeNodeStream/StreamIterator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamIterator_Reset_mE99F9498E390E99488C5C9E9957BBB804E2C4F86 (StreamIterator_t15CA837E6AC06B63D8EBAB8AA86551E28DC3C9A3* __this, const RuntimeMethod* method) 
{
	{
		__this->____index_1 = (-1);
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
// System.Void Naninovel.Antlr.Runtime.Tree.CommonErrorNode::.ctor(Naninovel.Antlr.Runtime.ITokenStream,Naninovel.Antlr.Runtime.IToken,Naninovel.Antlr.Runtime.IToken,Naninovel.Antlr.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode__ctor_m0D135A6736BFD571519DF4E08F3A756783CBFE2A (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, RuntimeObject* ___input0, RuntimeObject* ___start1, RuntimeObject* ___stop2, RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___e3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTree__ctor_m64942094CF84EF32EEA550013C06FEE9F3F8A815(__this, NULL);
		RuntimeObject* L_0 = ___stop2;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_1 = ___stop2;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___start1;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_3);
		if ((((int32_t)L_2) >= ((int32_t)L_4)))
		{
			goto IL_0023;
		}
	}
	{
		RuntimeObject* L_5 = ___stop2;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_5);
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_0023;
		}
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___start1;
		___stop2 = L_7;
	}

IL_0023:
	{
		RuntimeObject* L_8 = ___input0;
		__this->___input_8 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_8), (void*)L_8);
		RuntimeObject* L_9 = ___start1;
		__this->___start_9 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___start_9), (void*)L_9);
		RuntimeObject* L_10 = ___stop2;
		__this->___stop_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___stop_10), (void*)L_10);
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_11 = ___e3;
		__this->___trappedException_11 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___trappedException_11), (void*)L_11);
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.CommonErrorNode::get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonErrorNode_get_IsNil_m36F64F78D8E1F1B346761C5CB617E011997E5DDB (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonErrorNode::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_get_Text_m2B3CA7D47726A18D4AC2BED281F0266D68F94063 (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = (String_t*)NULL;
		RuntimeObject* L_0 = __this->___start_9;
		if (!L_0)
		{
			goto IL_0056;
		}
	}
	{
		RuntimeObject* L_1 = __this->___start_9;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = __this->___stop_10;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_3);
		V_2 = L_4;
		RuntimeObject* L_5 = __this->___stop_10;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_0041;
		}
	}
	{
		RuntimeObject* L_7 = __this->___input_8;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var)));
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::get_Count() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_7, ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var)));
		V_2 = L_8;
	}

IL_0041:
	{
		RuntimeObject* L_9 = __this->___input_8;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var)));
		String_t* L_12;
		L_12 = InterfaceFuncInvoker2< String_t*, int32_t, int32_t >::Invoke(4 /* System.String Naninovel.Antlr.Runtime.ITokenStream::ToString(System.Int32,System.Int32) */, ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_9, ITokenStream_tC6DBD734AC5D38067794D55E4A6B3838056ABBBB_il2cpp_TypeInfo_var)), L_10, L_11);
		V_0 = L_12;
		goto IL_0088;
	}

IL_0056:
	{
		RuntimeObject* L_13 = __this->___start_9;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_13, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var)))
		{
			goto IL_0082;
		}
	}
	{
		RuntimeObject* L_14 = __this->___input_8;
		RuntimeObject* L_15 = __this->___start_9;
		RuntimeObject* L_16 = __this->___stop_10;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_14, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		String_t* L_17;
		L_17 = InterfaceFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::ToString(System.Object,System.Object) */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_14, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)), L_15, L_16);
		V_0 = L_17;
		goto IL_0088;
	}

IL_0082:
	{
		V_0 = _stringLiteralB50A1C8D166F6D83589906FA241D44631109E56A;
	}

IL_0088:
	{
		String_t* L_18 = V_0;
		return L_18;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonErrorNode::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode_set_Text_m4AA03E52F09B52E1BE47144E2A30AF3DC9FE212E (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonErrorNode::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonErrorNode_get_Type_m57BC8DAA551B2560132AFFA24BEE93645C642C0A (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonErrorNode::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonErrorNode_set_Type_m05FACA11297E5CB9FA995527D4C2A9153A3702F3 (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonErrorNode::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonErrorNode_ToString_m899ED8B8EB43DE67F475E91414D92C261F55BB4F (CommonErrorNode_t684A40CA326A20E0A2D2CAF597A21370760DFFF9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoViableAltException_t1B76AABC41ADEC7287F72B8F213522649B1D5FE2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* G_B5_0 = NULL;
	int32_t G_B5_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_3 = NULL;
	RuntimeObject* G_B4_0 = NULL;
	int32_t G_B4_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_3 = NULL;
	String_t* G_B6_0 = NULL;
	int32_t G_B6_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B6_3 = NULL;
	RuntimeObject* G_B10_0 = NULL;
	int32_t G_B10_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B10_3 = NULL;
	RuntimeObject* G_B9_0 = NULL;
	int32_t G_B9_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B9_3 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B11_3 = NULL;
	RuntimeObject* G_B15_0 = NULL;
	int32_t G_B15_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B15_3 = NULL;
	RuntimeObject* G_B14_0 = NULL;
	int32_t G_B14_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B14_3 = NULL;
	String_t* G_B16_0 = NULL;
	int32_t G_B16_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B16_3 = NULL;
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_0 = __this->___trappedException_11;
		if (!((MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8*)IsInstClass((RuntimeObject*)L_0, MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8_il2cpp_TypeInfo_var)))
		{
			goto IL_0035;
		}
	}
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_1 = __this->___trappedException_11;
		NullCheck(((MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8*)CastclassClass((RuntimeObject*)L_1, MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8_il2cpp_TypeInfo_var)));
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.MissingTokenException::get_MissingType() */, ((MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8*)CastclassClass((RuntimeObject*)L_1, MissingTokenException_tDA96890DF242A53A8ED318A4C6CA425A352766D8_il2cpp_TypeInfo_var)));
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralC7B9A3E6B4E5DD6E90D566B3DE5E6FD733060F58, L_3, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_4;
	}

IL_0035:
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_5 = __this->___trappedException_11;
		if (!((UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73*)IsInstClass((RuntimeObject*)L_5, UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73_il2cpp_TypeInfo_var)))
		{
			goto IL_008e;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral268F6D4451955E93860C23D82818D63A9F987F01);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_9 = __this->___trappedException_11;
		NullCheck(((UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73*)CastclassClass((RuntimeObject*)L_9, UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(14 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.UnwantedTokenException::get_UnexpectedToken() */, ((UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73*)CastclassClass((RuntimeObject*)L_9, UnwantedTokenException_t3B3EB2F457BAB3C5873580EAE8270353C5F7CF73_il2cpp_TypeInfo_var)));
		RuntimeObject* L_11 = L_10;
		G_B4_0 = L_11;
		G_B4_1 = 1;
		G_B4_2 = L_8;
		G_B4_3 = L_8;
		if (L_11)
		{
			G_B5_0 = L_11;
			G_B5_1 = 1;
			G_B5_2 = L_8;
			G_B5_3 = L_8;
			goto IL_0069;
		}
	}
	{
		G_B6_0 = ((String_t*)(NULL));
		G_B6_1 = G_B4_1;
		G_B6_2 = G_B4_2;
		G_B6_3 = G_B4_3;
		goto IL_006e;
	}

IL_0069:
	{
		NullCheck(G_B5_0);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B5_0);
		G_B6_0 = L_12;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
	}

IL_006e:
	{
		NullCheck(G_B6_2);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		(G_B6_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B6_1), (String_t*)G_B6_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = G_B6_3;
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Naninovel.Antlr.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_15);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_16 = L_14;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_16, NULL);
		return L_17;
	}

IL_008e:
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_18 = __this->___trappedException_11;
		if (!((MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70*)IsInstClass((RuntimeObject*)L_18, MismatchedTokenException_tCDB21784A408CBDC88F575705FD3CBF0A3E2DA70_il2cpp_TypeInfo_var)))
		{
			goto IL_00e2;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_19 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5C95E0D0E98D3DD213552AD10BE8E81AA339A450);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_20;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_22 = __this->___trappedException_11;
		NullCheck(L_22);
		RuntimeObject* L_23;
		L_23 = RecognitionException_get_Token_mC178E1F55F1B5648D204B95C24E2BA7A0C1F081D_inline(L_22, NULL);
		RuntimeObject* L_24 = L_23;
		G_B9_0 = L_24;
		G_B9_1 = 1;
		G_B9_2 = L_21;
		G_B9_3 = L_21;
		if (L_24)
		{
			G_B10_0 = L_24;
			G_B10_1 = 1;
			G_B10_2 = L_21;
			G_B10_3 = L_21;
			goto IL_00bd;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_1;
		G_B11_2 = G_B9_2;
		G_B11_3 = G_B9_3;
		goto IL_00c2;
	}

IL_00bd:
	{
		NullCheck(G_B10_0);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B10_0);
		G_B11_0 = L_25;
		G_B11_1 = G_B10_1;
		G_B11_2 = G_B10_2;
		G_B11_3 = G_B10_3;
	}

IL_00c2:
	{
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = G_B11_3;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		String_t* L_28;
		L_28 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Naninovel.Antlr.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_28);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_28);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_29 = L_27;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_30;
		L_30 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_29, NULL);
		return L_30;
	}

IL_00e2:
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_31 = __this->___trappedException_11;
		if (!((NoViableAltException_t1B76AABC41ADEC7287F72B8F213522649B1D5FE2*)IsInstClass((RuntimeObject*)L_31, NoViableAltException_t1B76AABC41ADEC7287F72B8F213522649B1D5FE2_il2cpp_TypeInfo_var)))
		{
			goto IL_0136;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7FF7BFD48B5116970DBD1DBF8800870DDBAF5C0F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_33;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_35 = __this->___trappedException_11;
		NullCheck(L_35);
		RuntimeObject* L_36;
		L_36 = RecognitionException_get_Token_mC178E1F55F1B5648D204B95C24E2BA7A0C1F081D_inline(L_35, NULL);
		RuntimeObject* L_37 = L_36;
		G_B14_0 = L_37;
		G_B14_1 = 1;
		G_B14_2 = L_34;
		G_B14_3 = L_34;
		if (L_37)
		{
			G_B15_0 = L_37;
			G_B15_1 = 1;
			G_B15_2 = L_34;
			G_B15_3 = L_34;
			goto IL_0111;
		}
	}
	{
		G_B16_0 = ((String_t*)(NULL));
		G_B16_1 = G_B14_1;
		G_B16_2 = G_B14_2;
		G_B16_3 = G_B14_3;
		goto IL_0116;
	}

IL_0111:
	{
		NullCheck(G_B15_0);
		String_t* L_38;
		L_38 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B15_0);
		G_B16_0 = L_38;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		G_B16_3 = G_B15_3;
	}

IL_0116:
	{
		NullCheck(G_B16_2);
		ArrayElementTypeCheck (G_B16_2, G_B16_0);
		(G_B16_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B16_1), (String_t*)G_B16_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = G_B16_3;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralB93F74814C59F4C62CF17A71ECE8220C1B4A1A02);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		String_t* L_41;
		L_41 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Naninovel.Antlr.Runtime.Tree.BaseTree::get_Text() */, __this);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_40;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		String_t* L_43;
		L_43 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_42, NULL);
		return L_43;
	}

IL_0136:
	{
		String_t* L_44;
		L_44 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Naninovel.Antlr.Runtime.Tree.BaseTree::get_Text() */, __this);
		String_t* L_45;
		L_45 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral1B57723A0AECC89D299D8A1001FED28ABB58509F, L_44, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		return L_45;
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
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m64942094CF84EF32EEA550013C06FEE9F3F8A815 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		__this->___startIndex_4 = (-1);
		__this->___stopIndex_5 = (-1);
		__this->___childIndex_7 = (-1);
		BaseTree__ctor_mD538B6FF796B719B99E5845A4DE5429F05D8D3DF(__this, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m0E475164AC6B28610784D545E679209FB07E5C9F (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* ___node0, const RuntimeMethod* method) 
{
	{
		__this->___startIndex_4 = (-1);
		__this->___stopIndex_5 = (-1);
		__this->___childIndex_7 = (-1);
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_0 = ___node0;
		BaseTree__ctor_m50D88E0AECE9915A735928DA583366237CE620C4(__this, L_0, NULL);
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_1 = ___node0;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD43B83259CBF032EB58F1BC3B3739510397D2C31)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CommonTree__ctor_m0E475164AC6B28610784D545E679209FB07E5C9F_RuntimeMethod_var)));
	}

IL_002a:
	{
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_3 = ___node0;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(L_3, NULL);
		CommonTree_set_Token_m5C44B97E181D117DC07CADC9C482DA240F25C8D9_inline(__this, L_4, NULL);
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_5 = ___node0;
		NullCheck(L_5);
		int32_t L_6 = L_5->___startIndex_4;
		__this->___startIndex_4 = L_6;
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_7 = ___node0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___stopIndex_5;
		__this->___stopIndex_5 = L_8;
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree__ctor_m791BBE6F2DB124C9B6492424703F2875B12B5A60 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		__this->___startIndex_4 = (-1);
		__this->___stopIndex_5 = (-1);
		__this->___childIndex_7 = (-1);
		BaseTree__ctor_mD538B6FF796B719B99E5845A4DE5429F05D8D3DF(__this, NULL);
		RuntimeObject* L_0 = ___t0;
		CommonTree_set_Token_m5C44B97E181D117DC07CADC9C482DA240F25C8D9_inline(__this, L_0, NULL);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_CharPositionInLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_CharPositionInLine_m5DF6DD71DC81D2010C70E525E3D0D19D48EB0E95 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0033;
		}
	}

IL_0016:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_ChildCount() */, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0031;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var, L_4, 0);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(23 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_CharPositionInLine() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_0031:
	{
		return 0;
	}

IL_0033:
	{
		RuntimeObject* L_7;
		L_7 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_CharPositionInLine() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_7);
		return L_8;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_CharPositionInLine(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_CharPositionInLine_mA4092B4481B57D07B9CB1B583C72DAACC5FBF4F9 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		BaseTree_set_CharPositionInLine_m84DA301B0BEC2A1B3ED42BFC534CF8540C6A56E5_inline(__this, L_0, NULL);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_ChildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_ChildIndex_m5272BBFC82349765E4A7F5CB13B7E9EFAF84A733 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___childIndex_7;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_ChildIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_ChildIndex_mE9866D730D785A9DE870F9817292633750A1CA15 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___childIndex_7 = L_0;
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.CommonTree::get_IsNil()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTree_get_IsNil_m1D805FF004787D5B433A0C63A8A818E50E6D5208 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_Line()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Line_m21F22D138F30F6EF028952E1E0E367EFE6E6CF58 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		if (L_2)
		{
			goto IL_0032;
		}
	}

IL_0015:
	{
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_ChildCount() */, __this);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var, L_4, 0);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(22 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_Line() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_5);
		return L_6;
	}

IL_0030:
	{
		return 0;
	}

IL_0032:
	{
		RuntimeObject* L_7;
		L_7 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Line() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_7);
		return L_8;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Line(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Line_m3194E61CCC9C41A1318086581C7F819BC1960D30 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		BaseTree_set_Line_mC5B034A71A406BD98D8FCB78963D4FB1CAF06AF9_inline(__this, L_0, NULL);
		return;
	}
}
// Naninovel.Antlr.Runtime.Tree.ITree Naninovel.Antlr.Runtime.Tree.CommonTree::get_Parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Parent_m69545933D7889FDC4BE722BA7A3A8CEED6CC01EB (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_0 = __this->___parent_6;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Parent(Naninovel.Antlr.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Parent_m4D2599D8878284E7A28CCE72DDF9C690B61F1520 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		__this->___parent_6 = ((CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)CastclassClass((RuntimeObject*)L_0, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_6), (void*)((CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)CastclassClass((RuntimeObject*)L_0, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTree::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_get_Text_m7D08F7C95CBD5B9BC9288A2558513DCAE26CC147 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Naninovel.Antlr.Runtime.IToken::get_Text() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Text_m747EC1784672429C749703CC2BD1743E12AC87CF (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTree::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____token_3;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Token(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Token_m5C44B97E181D117DC07CADC9C482DA240F25C8D9 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____token_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____token_3), (void*)L_0);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_TokenStartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_TokenStartIndex_m1DA2C75116FD636E55B24F03F87D4F2FE54CF1C1 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___startIndex_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_001d:
	{
		int32_t L_4 = __this->___startIndex_4;
		return L_4;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_TokenStartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStartIndex_m77BD08A8398792AD9C1D1C1F93207B879C18CBAF (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___startIndex_4 = L_0;
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_TokenStopIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_TokenStopIndex_m171479A519AAC0CDF41FA616444F1D0F02890F07 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->___stopIndex_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2;
		L_2 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_001d:
	{
		int32_t L_4 = __this->___stopIndex_5;
		return L_4;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_TokenStopIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_TokenStopIndex_m6371D65602A77F880718BD2C87BD8E898F99C658 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___stopIndex_5 = L_0;
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTree::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTree_get_Type_m04245BC2D8AC51E04C5793CA5700DE47BFB68200 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_set_Type_mBCD8E5AFBE6C2B25046FE3C1CFB531F2A43ADF5C (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Naninovel.Antlr.Runtime.Tree.ITree Naninovel.Antlr.Runtime.Tree.CommonTree::DupNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_DupNode_m7BBBD39B9D3C7654E131217D3EBF4A70DB882F80 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_0 = (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)il2cpp_codegen_object_new(CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTree__ctor_m0E475164AC6B28610784D545E679209FB07E5C9F(L_0, __this, NULL);
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::SetUnknownTokenBoundaries()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTree_SetUnknownTokenBoundaries_m98DD4828B2CD6CC012A2B43F01DB4C05DD7E5881 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisCommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_m46984122BE8700EC6D8BDB4497804DBBB05CF3E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t6F9FE0D3C782DB5B04B9E83764BAA1609B00D436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t5D6225F0449F3937D7FEDDD852D5F745AEFDE651_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		if (L_0)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = __this->___startIndex_4;
		if ((((int32_t)L_1) < ((int32_t)0)))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_2 = __this->___stopIndex_5;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0034;
		}
	}

IL_001a:
	{
		RuntimeObject* L_3;
		L_3 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(14 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_TokenIndex() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_3);
		int32_t L_5 = L_4;
		V_0 = L_5;
		__this->___stopIndex_5 = L_5;
		int32_t L_6 = V_0;
		__this->___startIndex_4 = L_6;
	}

IL_0034:
	{
		return;
	}

IL_0035:
	{
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		RuntimeObject* L_8;
		L_8 = Enumerable_OfType_TisCommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_m46984122BE8700EC6D8BDB4497804DBBB05CF3E8(L_7, Enumerable_OfType_TisCommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_m46984122BE8700EC6D8BDB4497804DBBB05CF3E8_RuntimeMethod_var);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Naninovel.Antlr.Runtime.Tree.CommonTree>::GetEnumerator() */, IEnumerable_1_t6F9FE0D3C782DB5B04B9E83764BAA1609B00D436_il2cpp_TypeInfo_var, L_8);
		V_1 = L_9;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_10 = V_1;
					if (!L_10)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_11 = V_1;
					NullCheck(L_11);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_11);
				}

IL_0066:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0053_1;
			}

IL_0048_1:
			{
				RuntimeObject* L_12 = V_1;
				NullCheck(L_12);
				CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_13;
				L_13 = InterfaceFuncInvoker0< CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Naninovel.Antlr.Runtime.Tree.CommonTree>::get_Current() */, IEnumerator_1_t5D6225F0449F3937D7FEDDD852D5F745AEFDE651_il2cpp_TypeInfo_var, L_12);
				NullCheck(L_13);
				VirtualActionInvoker0::Invoke(66 /* System.Void Naninovel.Antlr.Runtime.Tree.CommonTree::SetUnknownTokenBoundaries() */, L_13);
			}

IL_0053_1:
			{
				RuntimeObject* L_14 = V_1;
				NullCheck(L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_14);
				if (L_15)
				{
					goto IL_0048_1;
				}
			}
			{
				goto IL_0067;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		int32_t L_16 = __this->___startIndex_4;
		if ((((int32_t)L_16) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_17 = __this->___stopIndex_5;
		if ((((int32_t)L_17) < ((int32_t)0)))
		{
			goto IL_007a;
		}
	}
	{
		return;
	}

IL_007a:
	{
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_18);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Count() */, ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var, L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_00c6;
		}
	}
	{
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var, L_20, 0);
		V_2 = L_21;
		RuntimeObject* L_22;
		L_22 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		RuntimeObject* L_23;
		L_23 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_23);
		int32_t L_24;
		L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Count() */, ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var, L_23);
		NullCheck(L_22);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var, L_22, ((int32_t)il2cpp_codegen_subtract(L_24, 1)));
		V_3 = L_25;
		RuntimeObject* L_26 = V_2;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = InterfaceFuncInvoker0< int32_t >::Invoke(15 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_TokenStartIndex() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_26);
		__this->___startIndex_4 = L_27;
		RuntimeObject* L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITree::get_TokenStopIndex() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_28);
		__this->___stopIndex_5 = L_29;
	}

IL_00c6:
	{
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTree_ToString_mA708DAF611564A0A35288F904D9191A91C9633D9 (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean Naninovel.Antlr.Runtime.Tree.BaseTree::get_IsNil() */, __this);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100;
	}

IL_000e:
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_Type() */, __this);
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		return _stringLiteral78A4A39F1613CF57ABBD54EBBD31811CC088F731;
	}

IL_001c:
	{
		RuntimeObject* L_2;
		L_2 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		if (L_2)
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_3;
	}

IL_002a:
	{
		RuntimeObject* L_4;
		L_4 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(__this, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Naninovel.Antlr.Runtime.IToken::get_Text() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_4);
		return L_5;
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
// System.Object Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::Create(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_Create_m340D3A4AF23E043F47D077B79C88A5E8E0B100A1 (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___payload0;
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_1 = (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)il2cpp_codegen_object_new(CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTree__ctor_m791BBE6F2DB124C9B6492424703F2875B12B5A60(L_1, L_0, NULL);
		return L_1;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::CreateToken(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_CreateToken_mE4E6C7058C419FA64ABCB44B89EF75BFED4335AF (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, int32_t ___tokenType0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___tokenType0;
		String_t* L_1 = ___text1;
		CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* L_2 = (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414*)il2cpp_codegen_object_new(CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CommonToken__ctor_m08CB3D01C11E0C5AF308B813075BBB2E0B914518(L_2, L_0, L_1, NULL);
		return L_2;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::CreateToken(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_CreateToken_mC8120F879CCA062A40550C43AE0C86223B7B5D0A (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, RuntimeObject* ___fromToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___fromToken0;
		CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* L_1 = (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414*)il2cpp_codegen_object_new(CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonToken__ctor_mA98B72852A116244912D4FF8507B91F4CAAE386E(L_1, L_0, NULL);
		return L_1;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::GetToken(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeAdaptor_GetToken_mAF0CD8E06699FEFCD108218D778E441EF502D353 (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		if (!((CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)IsInstClass((RuntimeObject*)L_0, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject* L_1 = ___t0;
		NullCheck(((CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)CastclassClass((RuntimeObject*)L_1, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline(((CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)CastclassClass((RuntimeObject*)L_1, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var)), NULL);
		return L_2;
	}

IL_0014:
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* __this, const RuntimeMethod* method) 
{
	{
		BaseTreeAdaptor__ctor_mAE878728E17B3E13912E135B27143E81C7D785D6(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream__ctor_mA57E31C69BF4CAC0F6D8DE4AC66734AB3F909618 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_0 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_0, NULL);
		RuntimeObject* L_1 = ___tree0;
		CommonTreeNodeStream__ctor_mD674807A314FBCE2A254FC2C3414EAF36BD98A03(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream__ctor_mD674807A314FBCE2A254FC2C3414EAF36BD98A03 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316(__this, LookaheadStream_1__ctor_m22B3CF1C0B5965AA81476C333E3ED474F4628316_RuntimeMethod_var);
		RuntimeObject* L_0 = ___tree1;
		__this->____root_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____root_10), (void*)L_0);
		RuntimeObject* L_1 = ___adaptor0;
		__this->____adaptor_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adaptor_12), (void*)L_1);
		RuntimeObject* L_2 = ___adaptor0;
		RuntimeObject* L_3 = __this->____root_10;
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_4 = (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A*)il2cpp_codegen_object_new(TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TreeIterator__ctor_m6EF87CDC38986E62553DD978982BF8CEADD414B2(L_4, L_2, L_3, NULL);
		__this->____it_13 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____it_13), (void*)L_4);
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTreeNodeStream_get_SourceName_mDC914FC520D37676A92A2F40DFAEA30C307DC8C8 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(45 /* Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TokenStream() */, __this);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_000a:
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(45 /* Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TokenStream() */, __this);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Naninovel.Antlr.Runtime.IIntStream::get_SourceName() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TokenStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeNodeStream_get_TokenStream_m84B8881012F2EEB056BAA2D5DBF63BCBBA427909 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___tokens_11;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::set_TokenStream(Naninovel.Antlr.Runtime.ITokenStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_set_TokenStream_m98C38FBF4EBF38BD31D345C1F09A4F2E86DD6330 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___tokens_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokens_11), (void*)L_0);
		return;
	}
}
// Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeNodeStream_get_TreeAdaptor_mFF26C792C5EA4265EEF6F178E37CD60B1BCF7945 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____adaptor_12;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::set_TreeAdaptor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_set_TreeAdaptor_m52CB3E56A63258B331536F92D48363A06D9084DF (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____adaptor_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____adaptor_12), (void*)L_0);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeSource()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeNodeStream_get_TreeSource_m208CE532BB6F10A5CB3F966F02A795D548784757 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____root_10;
		return L_0;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_UniqueNavigationNodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTreeNodeStream_get_UniqueNavigationNodes_m02A8E6012C6FFA94B5FA785EFD3B520D8B6CDC5E (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	{
		return (bool)0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::set_UniqueNavigationNodes(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_set_UniqueNavigationNodes_m1A042C035449F9ADA807BF8E5532C16602CA3445 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_Reset_m1D33F0BCBBBC6A206B2CAF3B5B6A42DF0B704827 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73(__this, LookaheadStream_1_Clear_m748A62A0C9DC2CD2852F344C1C434B1B6A377F73_RuntimeMethod_var);
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_0 = __this->____it_13;
		NullCheck(L_0);
		TreeIterator_Reset_m26A41CC13CDB904A445182E33B6B9F929DE4BD62(L_0, NULL);
		__this->____hasNilRoot_15 = (bool)0;
		__this->____level_16 = 0;
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_1 = __this->____calls_14;
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->____calls_14;
		NullCheck(L_2);
		Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0(L_2, Stack_1_Clear_mEE1C6E0AF654AE01D41D12DAF62217D4FE3930E0_RuntimeMethod_var);
	}

IL_0032:
	{
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::NextElement()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CommonTreeNodeStream_NextElement_m718285F2C841ECD24C77FF9A8F4D881BBEAE56F8 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_0 = __this->____it_13;
		NullCheck(L_0);
		bool L_1;
		L_1 = TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5(L_0, NULL);
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_2 = __this->____it_13;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(L_2, NULL);
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_5 = __this->____it_13;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___up_5;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)L_6))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = __this->____level_16;
		__this->____level_16 = ((int32_t)il2cpp_codegen_subtract(L_7, 1));
		int32_t L_8 = __this->____level_16;
		if (L_8)
		{
			goto IL_0078;
		}
	}
	{
		bool L_9 = __this->____hasNilRoot_15;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_10 = __this->____it_13;
		NullCheck(L_10);
		bool L_11;
		L_11 = TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5(L_10, NULL);
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_12 = __this->____it_13;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(L_12, NULL);
		return L_13;
	}

IL_005c:
	{
		RuntimeObject* L_14 = V_0;
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_15 = __this->____it_13;
		NullCheck(L_15);
		RuntimeObject* L_16 = L_15->___down_6;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_14) == ((RuntimeObject*)(RuntimeObject*)L_16))))
		{
			goto IL_0078;
		}
	}
	{
		int32_t L_17 = __this->____level_16;
		__this->____level_16 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0078:
	{
		int32_t L_18 = __this->____level_16;
		if (L_18)
		{
			goto IL_00d3;
		}
	}
	{
		RuntimeObject* L_19;
		L_19 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		RuntimeObject* L_20 = V_0;
		NullCheck(L_19);
		bool L_21;
		L_21 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::IsNil(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_19, L_20);
		if (!L_21)
		{
			goto IL_00d3;
		}
	}
	{
		__this->____hasNilRoot_15 = (bool)1;
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_22 = __this->____it_13;
		NullCheck(L_22);
		bool L_23;
		L_23 = TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5(L_22, NULL);
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_24 = __this->____it_13;
		NullCheck(L_24);
		RuntimeObject* L_25;
		L_25 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(L_24, NULL);
		V_0 = L_25;
		int32_t L_26 = __this->____level_16;
		__this->____level_16 = ((int32_t)il2cpp_codegen_add(L_26, 1));
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_27 = __this->____it_13;
		NullCheck(L_27);
		bool L_28;
		L_28 = TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5(L_27, NULL);
		TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* L_29 = __this->____it_13;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(L_29, NULL);
		V_0 = L_30;
	}

IL_00d3:
	{
		RuntimeObject* L_31 = V_0;
		return L_31;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::IsEndOfFile(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CommonTreeNodeStream_IsEndOfFile_m698E3E5B629BEB766BE523D8B69EE51557FBB1AF (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		RuntimeObject* L_1 = ___o0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_1);
		return (bool)((((int32_t)L_2) == ((int32_t)(-1)))? 1 : 0);
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::LA(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTreeNodeStream_LA_m1D08B3E77645F3B9E0BB943AEEF8B24A7F25163F (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, int32_t ___i0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		int32_t L_1 = ___i0;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(17 /* T Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::LT(System.Int32) */, __this, L_1);
		NullCheck(L_0);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_2);
		return L_3;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::Push(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_Push_m5CEA5EE775A35833ADD477BA9C639020CDF041F3 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = __this->____calls_14;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_1 = (Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6*)il2cpp_codegen_object_new(Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1(L_1, Stack_1__ctor_mF63AE96E8925749CDACE05B89002A389DDD748D1_RuntimeMethod_var);
		__this->____calls_14 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____calls_14), (void*)L_1);
	}

IL_0013:
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_2 = __this->____calls_14;
		int32_t L_3 = ((FastQueue_1_t54A942FD29C2BAF8BAA3F3B6493DA9F16F5C8471*)__this)->____p_1;
		NullCheck(L_2);
		Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA(L_2, L_3, Stack_1_Push_mF7CC12CF73D9D4B66FFA2E2D264270212CAB3EDA_RuntimeMethod_var);
		int32_t L_4 = ___index0;
		VirtualActionInvoker1< int32_t >::Invoke(23 /* System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::Seek(System.Int32) */, __this, L_4);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CommonTreeNodeStream_Pop_mA313B8503835A6647660AA71E1EE911F84C83F7C (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Stack_1_t3197E0F5EA36E611B259A88751D31FC2396FE4B6* L_0 = __this->____calls_14;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748(L_0, Stack_1_Pop_m59DFD2B5EC8D9044532E0AD0BDB20DB33BA76748_RuntimeMethod_var);
		V_0 = L_1;
		int32_t L_2 = V_0;
		VirtualActionInvoker1< int32_t >::Invoke(23 /* System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::Seek(System.Int32) */, __this, L_2);
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::ReplaceChildren(System.Object,System.Int32,System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CommonTreeNodeStream_ReplaceChildren_mC01C606FD10A4D452E7773E1F1BB3FB07450F464 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___parent0, int32_t ___startChildIndex1, int32_t ___stopChildIndex2, RuntimeObject* ___t3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parent0;
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		RuntimeObject* L_2 = ___parent0;
		int32_t L_3 = ___startChildIndex1;
		int32_t L_4 = ___stopChildIndex2;
		RuntimeObject* L_5 = ___t3;
		NullCheck(L_1);
		InterfaceActionInvoker4< RuntimeObject*, int32_t, int32_t, RuntimeObject* >::Invoke(34 /* System.Void Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::ReplaceChildren(System.Object,System.Int32,System.Int32,System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4, L_5);
	}

IL_0013:
	{
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::ToString(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTreeNodeStream_ToString_m7FF38038A46897E00F77F743DC710424842CF3E5 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, RuntimeObject* ___start0, RuntimeObject* ___stop1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral6836D94586B3887F0DB2295A1C064F27F99A5DE2;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::ToTokenTypeString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CommonTreeNodeStream_ToTokenTypeString_m6BC82DF6FAEB64A4BB61C99516A1D1245691D496 (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		VirtualActionInvoker0::Invoke(52 /* System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::Reset() */, __this);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(17 /* T Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::LT(System.Int32) */, __this, 1);
		V_1 = L_1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		RuntimeObject* L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_2, L_3);
		V_2 = L_4;
		goto IL_0052;
	}

IL_0023:
	{
		StringBuilder_t* L_5 = V_0;
		NullCheck(L_5);
		StringBuilder_t* L_6;
		L_6 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, NULL);
		StringBuilder_t* L_7 = V_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		StringBuilder_t* L_9;
		L_9 = StringBuilder_Append_m283B617AC29FB0DD6F3A7D8C01D385C25A5F0FAA(L_7, L_8, NULL);
		VirtualActionInvoker0::Invoke(14 /* System.Void Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::Consume() */, __this);
		RuntimeObject* L_10;
		L_10 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(17 /* T Naninovel.Antlr.Runtime.Misc.LookaheadStream`1<System.Object>::LT(System.Int32) */, __this, 1);
		V_1 = L_10;
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(47 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::get_TreeAdaptor() */, __this);
		RuntimeObject* L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_11, L_12);
		V_2 = L_13;
	}

IL_0052:
	{
		int32_t L_14 = V_2;
		if ((!(((uint32_t)L_14) == ((uint32_t)(-1)))))
		{
			goto IL_0023;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_15);
		return L_16;
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
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::ToDot(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_ToDot_m8BAE09C47C0A5CE17BD4CFE7AEF568FE5A626136 (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___HeaderLines_0;
		V_2 = L_1;
		V_3 = 0;
		goto IL_0023;
	}

IL_0011:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = V_2;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		String_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_4 = L_5;
		StringBuilder_t* L_6 = V_0;
		String_t* L_7 = V_4;
		NullCheck(L_6);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_6, L_7, NULL);
		int32_t L_9 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0023:
	{
		int32_t L_10 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = V_2;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_0011;
		}
	}
	{
		__this->___nodeNumber_5 = 0;
		RuntimeObject* L_12 = ___tree0;
		RuntimeObject* L_13 = ___adaptor1;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_12, L_13);
		__this->___nodeNumber_5 = 0;
		RuntimeObject* L_15 = ___tree0;
		RuntimeObject* L_16 = ___adaptor1;
		RuntimeObject* L_17;
		L_17 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_15, L_16);
		V_1 = L_17;
		NullCheck(L_14);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_14);
		V_5 = L_18;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_19 = V_5;
					if (!L_19)
					{
						goto IL_0079;
					}
				}
				{
					RuntimeObject* L_20 = V_5;
					NullCheck(L_20);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_20);
				}

IL_0079:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_0051_1:
			{
				RuntimeObject* L_21 = V_5;
				NullCheck(L_21);
				String_t* L_22;
				L_22 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_21);
				V_6 = L_22;
				StringBuilder_t* L_23 = V_0;
				String_t* L_24 = V_6;
				NullCheck(L_23);
				StringBuilder_t* L_25;
				L_25 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_23, L_24, NULL);
			}

IL_0063_1:
			{
				RuntimeObject* L_26 = V_5;
				NullCheck(L_26);
				bool L_27;
				L_27 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				if (L_27)
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_007a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007a:
	{
		StringBuilder_t* L_28 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_28, NULL);
		RuntimeObject* L_30 = V_1;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_30);
		V_5 = L_31;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a8:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_32 = V_5;
					if (!L_32)
					{
						goto IL_00b3;
					}
				}
				{
					RuntimeObject* L_33 = V_5;
					NullCheck(L_33);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_33);
				}

IL_00b3:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_009d_1;
			}

IL_008b_1:
			{
				RuntimeObject* L_34 = V_5;
				NullCheck(L_34);
				String_t* L_35;
				L_35 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_34);
				V_7 = L_35;
				StringBuilder_t* L_36 = V_0;
				String_t* L_37 = V_7;
				NullCheck(L_36);
				StringBuilder_t* L_38;
				L_38 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_36, L_37, NULL);
			}

IL_009d_1:
			{
				RuntimeObject* L_39 = V_5;
				NullCheck(L_39);
				bool L_40;
				L_40 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_39);
				if (L_40)
				{
					goto IL_008b_1;
				}
			}
			{
				goto IL_00b4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b4:
	{
		StringBuilder_t* L_41 = V_0;
		NullCheck(L_41);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_AppendLine_m3BC704C4E6A8531027D8C9287D0AB2AA0188AC4E(L_41, NULL);
		StringBuilder_t* L_43 = V_0;
		NullCheck(L_43);
		StringBuilder_t* L_44;
		L_44 = StringBuilder_AppendLine_mF75744CE941C63E33188E22E936B71A24D3CBF88(L_43, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, NULL);
		StringBuilder_t* L_45 = V_0;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_45);
		return L_46;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::ToDot(Naninovel.Antlr.Runtime.Tree.ITree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_ToDot_m57012D5DED0B3C0C6C543AF3345C66481BB9335D (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___tree0;
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_1 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_1, NULL);
		String_t* L_2;
		L_2 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(4 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::ToDot(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DotTreeGenerator_DefineNodes_m99A990B98D7CBC9B6625699A3AB809B37AB81BD8 (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_0 = (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76*)il2cpp_codegen_object_new(U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDefineNodesU3Ed__8__ctor_m1E3A48DCC67B61D8DAFE074BFE4A9DE8463E8004(L_0, ((int32_t)-2), NULL);
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_7), (void*)__this);
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_2 = L_1;
		RuntimeObject* L_3 = ___tree0;
		NullCheck(L_2);
		L_2->___U3CU3E3__tree_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__tree_4), (void*)L_3);
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_4 = L_2;
		RuntimeObject* L_5 = ___adaptor1;
		NullCheck(L_4);
		L_4->___U3CU3E3__adaptor_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__adaptor_6), (void*)L_5);
		return L_4;
	}
}
// System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DotTreeGenerator_DefineEdges_m48758A33E475231CCE3B0169902F2D1A0E08E7E0 (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___tree0, RuntimeObject* ___adaptor1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_0 = (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386*)il2cpp_codegen_object_new(U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CDefineEdgesU3Ed__9__ctor_m41265D706D62A8D36831DE9293E704C8C4587AFE(L_0, ((int32_t)-2), NULL);
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_7 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_7), (void*)__this);
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_2 = L_1;
		RuntimeObject* L_3 = ___tree0;
		NullCheck(L_2);
		L_2->___U3CU3E3__tree_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___U3CU3E3__tree_4), (void*)L_3);
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_4 = L_2;
		RuntimeObject* L_5 = ___adaptor1;
		NullCheck(L_4);
		L_4->___U3CU3E3__adaptor_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E3__adaptor_6), (void*)L_5);
		return L_4;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_GetNodeText_mA4CCFB3EEB5CF25D4E9A2637EFC837CAFDBA1721 (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___t1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = ___adaptor0;
		RuntimeObject* L_1 = ___t1;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___t1;
		int32_t L_4;
		L_4 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, __this, L_3);
		V_2 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_6;
		L_6 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_5, NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		String_t* L_8 = V_0;
		String_t* L_9;
		L_9 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, __this, L_8);
		String_t* L_10;
		L_10 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralAF78F12CBEBAA14971DB0DBFFF01C32258369393, L_7, L_9, NULL);
		return L_10;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DotTreeGenerator_GetNodeNumber_m461DE1C15946DBF3B2C2F0169440DE430054EA1F (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_0 = __this->___nodeToNumberMap_4;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m4B8EE45640C70BBFD6F3EFF1040983404C098342_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_4 = __this->___nodeToNumberMap_4;
		RuntimeObject* L_5 = ___t0;
		int32_t L_6 = __this->___nodeNumber_5;
		NullCheck(L_4);
		Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13(L_4, L_5, L_6, Dictionary_2_set_Item_m72CC2F1213D1C1B8ABEDE31082D07B67EC873B13_RuntimeMethod_var);
		int32_t L_7 = __this->___nodeNumber_5;
		__this->___nodeNumber_5 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		int32_t L_8 = __this->___nodeNumber_5;
		return ((int32_t)il2cpp_codegen_subtract(L_8, 1));
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DotTreeGenerator_FixString_mA4D5C3686419ED1C4CF00FD558EF0FEFD4E28719 (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, String_t* ___text0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___text0;
		if (!L_0)
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_1 = ___text0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_1, _stringLiteralC62C64F00567C5368CAE37F4E64E1E82FF785677, _stringLiteralED488AF45549D686E2B9C43CC5AA1CEA9AE1C324, NULL);
		___text0 = L_2;
		String_t* L_3 = ___text0;
		String_t* L_4;
		L_4 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_3, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462, _stringLiteral28BE9A569DCCAECC3746AA7945F873F6CD56F68E, NULL);
		___text0 = L_4;
		String_t* L_5 = ___text0;
		String_t* L_6;
		L_6 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_5, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51, _stringLiteral05732FA42A79E5E9D1921EE093F433E746DF4469, NULL);
		___text0 = L_6;
		String_t* L_7 = ___text0;
		String_t* L_8;
		L_8 = Regex_Replace_m811FCA60D20059998EC547FC390F053C524D045D(L_7, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F, _stringLiteral4E23DCBC19D19A3B8BBF82850CADA3AF5D7E55B1, NULL);
		___text0 = L_8;
		String_t* L_9 = ___text0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)20))))
		{
			goto IL_0077;
		}
	}
	{
		String_t* L_11 = ___text0;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_11, 0, 8, NULL);
		String_t* L_13 = ___text0;
		String_t* L_14 = ___text0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_14, NULL);
		NullCheck(L_13);
		String_t* L_16;
		L_16 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_13, ((int32_t)il2cpp_codegen_subtract(L_15, 8)), NULL);
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_12, _stringLiteralFFEF3DBE279EE1F92E1E2E46F45BC18EBBF55A1A, L_16, NULL);
		___text0 = L_17;
	}

IL_0077:
	{
		String_t* L_18 = ___text0;
		return L_18;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DotTreeGenerator__ctor_mC25FE4CD5BD48FA89F7E398ABF5BB95FB79BED5D (DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, _stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2E99079BE588CD012DF2F995F76F63AA4CFB15A0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral2BDD70C3FF55D3012867CE5DF73EBDB975054E4E);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralF821CB7F4C44C27F7CEAF54A257FF7D4D446AE2A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralD1B1CFF3CAEB5B22780F45A8436CFAD9CFA542E8);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = L_5;
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, _stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral540925C49E1073D406F61AF4B04906CCACFC1DAE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral46AD75720E6D1C88A9CC45FBB82AA0582A17854F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(7), (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		__this->___HeaderLines_0 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___HeaderLines_0), (void*)L_8);
		Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1* L_9 = (Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1*)il2cpp_codegen_object_new(Dictionary_2_t5C96F4B6841710A9013966F76224BAE01FB4B4D1_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C(L_9, Dictionary_2__ctor_m517E7F9D104FEAE6646EABDDC9C852510E86077C_RuntimeMethod_var);
		__this->___nodeToNumberMap_4 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodeToNumberMap_4), (void*)L_9);
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
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9__ctor_m41265D706D62A8D36831DE9293E704C8C4587AFE (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_mC7ABACDA49C7DC69C8F083138D36C7D9365CB76F (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_mDD60290F7BBFBEB78F2C9607F627E15EDBCA9A6A(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefineEdgesU3Ed__9_MoveNext_mBAEF427BE8407E26BF19CB99C8E6526E34667E6C (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_01e2:
			{// begin fault (depth: 1)
				U3CDefineEdgesU3Ed__9_System_IDisposable_Dispose_mC7ABACDA49C7DC69C8F083138D36C7D9365CB76F(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_1 = __this->___U3CU3E4__this_7;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_0027_1;
					}
					case 1:
					{
						goto IL_0146_1;
					}
					case 2:
					{
						goto IL_0194_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01e9;
			}

IL_0027_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = __this->___tree_3;
				if (L_3)
				{
					goto IL_003d_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01e9;
			}

IL_003d_1:
			{
				RuntimeObject* L_4 = __this->___adaptor_5;
				RuntimeObject* L_5 = __this->___tree_3;
				NullCheck(L_4);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_4, L_5);
				__this->___U3CnU3E5__2_8 = L_6;
				int32_t L_7 = __this->___U3CnU3E5__2_8;
				if (L_7)
				{
					goto IL_0063_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01e9;
			}

IL_0063_1:
			{
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_8 = V_2;
				RuntimeObject* L_9 = __this->___tree_3;
				NullCheck(L_8);
				int32_t L_10;
				L_10 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, L_8, L_9);
				V_3 = L_10;
				String_t* L_11;
				L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
				String_t* L_12;
				L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_11, NULL);
				__this->___U3CparentNameU3E5__3_9 = L_12;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentNameU3E5__3_9), (void*)L_12);
				RuntimeObject* L_13 = __this->___adaptor_5;
				RuntimeObject* L_14 = __this->___tree_3;
				NullCheck(L_13);
				String_t* L_15;
				L_15 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_13, L_14);
				__this->___U3CparentTextU3E5__4_10 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CparentTextU3E5__4_10), (void*)L_15);
				__this->___U3CiU3E5__5_11 = 0;
				goto IL_01cd_1;
			}

IL_00aa_1:
			{
				RuntimeObject* L_16 = __this->___adaptor_5;
				RuntimeObject* L_17 = __this->___tree_3;
				int32_t L_18 = __this->___U3CiU3E5__5_11;
				NullCheck(L_16);
				RuntimeObject* L_19;
				L_19 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_16, L_17, L_18);
				__this->___U3CchildU3E5__6_12 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__6_12), (void*)L_19);
				RuntimeObject* L_20 = __this->___adaptor_5;
				RuntimeObject* L_21 = __this->___U3CchildU3E5__6_12;
				NullCheck(L_20);
				String_t* L_22;
				L_22 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_20, L_21);
				V_4 = L_22;
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_23 = V_2;
				RuntimeObject* L_24 = __this->___U3CchildU3E5__6_12;
				NullCheck(L_23);
				int32_t L_25;
				L_25 = VirtualFuncInvoker1< int32_t, RuntimeObject* >::Invoke(9 /* System.Int32 Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeNumber(System.Object) */, L_23, L_24);
				V_3 = L_25;
				String_t* L_26;
				L_26 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
				String_t* L_27;
				L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral4C9ECEDF5B1FB9420A92A5B02A141FADFDF52ED6, L_26, NULL);
				V_5 = L_27;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_28;
				String_t* L_30 = __this->___U3CparentNameU3E5__3_9;
				NullCheck(L_29);
				ArrayElementTypeCheck (L_29, L_30);
				(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
				String_t* L_32 = V_5;
				NullCheck(L_31);
				ArrayElementTypeCheck (L_31, L_32);
				(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_34 = V_2;
				String_t* L_35 = __this->___U3CparentTextU3E5__4_10;
				NullCheck(L_34);
				String_t* L_36;
				L_36 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, L_34, L_35);
				NullCheck(L_33);
				ArrayElementTypeCheck (L_33, L_36);
				(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_36);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = L_33;
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_38 = V_2;
				String_t* L_39 = V_4;
				NullCheck(L_38);
				String_t* L_40;
				L_40 = VirtualFuncInvoker1< String_t*, String_t* >::Invoke(10 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::FixString(System.String) */, L_38, L_39);
				NullCheck(L_37);
				ArrayElementTypeCheck (L_37, L_40);
				(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_40);
				String_t* L_41;
				L_41 = String_Format_m918500C1EFB475181349A79989BB79BB36102894(_stringLiteralB39D9436996A8004873548B9E60CABACFB9A297C, L_37, NULL);
				__this->___U3CU3E2__current_1 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_41);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_01e9;
			}

IL_0146_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_42 = V_2;
				RuntimeObject* L_43 = __this->___U3CchildU3E5__6_12;
				RuntimeObject* L_44 = __this->___adaptor_5;
				NullCheck(L_42);
				RuntimeObject* L_45;
				L_45 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineEdges(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor) */, L_42, L_43, L_44);
				NullCheck(L_45);
				RuntimeObject* L_46;
				L_46 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_45);
				__this->___U3CU3E7__wrap6_13 = L_46;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap6_13), (void*)L_46);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_019c_1;
			}

IL_0174_1:
			{
				RuntimeObject* L_47 = __this->___U3CU3E7__wrap6_13;
				NullCheck(L_47);
				String_t* L_48;
				L_48 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_47);
				V_6 = L_48;
				String_t* L_49 = V_6;
				__this->___U3CU3E2__current_1 = L_49;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_49);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_01e9;
			}

IL_0194_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_019c_1:
			{
				RuntimeObject* L_50 = __this->___U3CU3E7__wrap6_13;
				NullCheck(L_50);
				bool L_51;
				L_51 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_50);
				if (L_51)
				{
					goto IL_0174_1;
				}
			}
			{
				U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_mDD60290F7BBFBEB78F2C9607F627E15EDBCA9A6A(__this, NULL);
				__this->___U3CU3E7__wrap6_13 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap6_13), (void*)(RuntimeObject*)NULL);
				__this->___U3CchildU3E5__6_12 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__6_12), (void*)NULL);
				int32_t L_52 = __this->___U3CiU3E5__5_11;
				V_3 = L_52;
				int32_t L_53 = V_3;
				__this->___U3CiU3E5__5_11 = ((int32_t)il2cpp_codegen_add(L_53, 1));
			}

IL_01cd_1:
			{
				int32_t L_54 = __this->___U3CiU3E5__5_11;
				int32_t L_55 = __this->___U3CnU3E5__2_8;
				if ((((int32_t)L_54) < ((int32_t)L_55)))
				{
					goto IL_00aa_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_01e9;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_01e9:
	{
		bool L_56 = V_0;
		return L_56;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_U3CU3Em__Finally1_mDD60290F7BBFBEB78F2C9607F627E15EDBCA9A6A (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap6_13;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap6_13;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_m3C8E9E9F03B616B68FF85593198C85CF8C170CA1 (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mD5B1DA3AA36204471382E8EF3A91D54EF249737B (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_Reset_mD5B1DA3AA36204471382E8EF3A91D54EF249737B_RuntimeMethod_var)));
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerator_get_Current_m369F943C2D6EC41A4B056F973E02CC9C09803461 (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m297459ED98529B7468AB9A96315AD55E30C58BDA (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_3 = (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386*)il2cpp_codegen_object_new(U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CDefineEdgesU3Ed__9__ctor_m41265D706D62A8D36831DE9293E704C8C4587AFE(L_3, 0, NULL);
		V_0 = L_3;
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_4 = V_0;
		DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_5 = __this->___U3CU3E4__this_7;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_7), (void*)L_5);
	}

IL_0035:
	{
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__tree_4;
		NullCheck(L_6);
		L_6->___tree_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___tree_3), (void*)L_7);
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_8 = V_0;
		RuntimeObject* L_9 = __this->___U3CU3E3__adaptor_6;
		NullCheck(L_8);
		L_8->___adaptor_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___adaptor_5), (void*)L_9);
		U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineEdges>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineEdgesU3Ed__9_System_Collections_IEnumerable_GetEnumerator_mBB505C74B458AC72B5C39824AC2C7F89F1D11C24 (U3CDefineEdgesU3Ed__9_t74000F85A02C9F160D6EFE68FDF5768A32114386* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDefineEdgesU3Ed__9_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_m297459ED98529B7468AB9A96315AD55E30C58BDA(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8__ctor_m1E3A48DCC67B61D8DAFE074BFE4A9DE8463E8004 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC8A7BE94F22D247532A7D126DB535E787B4E4EF7 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_m0EE514428C8DC1730C50F7A9945B8D0D06D5127C(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			goto IL_001a;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDefineNodesU3Ed__8_MoveNext_m364F55E827FF6A5A372F3E1B7B1685A97C4B0DA9 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	{
		auto __finallyBlock = il2cpp::utils::Fault([&]
		{

FAULT_017f:
			{// begin fault (depth: 1)
				U3CDefineNodesU3Ed__8_System_IDisposable_Dispose_mC8A7BE94F22D247532A7D126DB535E787B4E4EF7(__this, NULL);
				return;
			}// end fault
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_0 = __this->___U3CU3E1__state_0;
				V_1 = L_0;
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_1 = __this->___U3CU3E4__this_7;
				V_2 = L_1;
				int32_t L_2 = V_1;
				switch (L_2)
				{
					case 0:
					{
						goto IL_002b_1;
					}
					case 1:
					{
						goto IL_008d_1;
					}
					case 2:
					{
						goto IL_00e3_1;
					}
					case 3:
					{
						goto IL_012f_1;
					}
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0186;
			}

IL_002b_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				RuntimeObject* L_3 = __this->___tree_3;
				if (L_3)
				{
					goto IL_0041_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0186;
			}

IL_0041_1:
			{
				RuntimeObject* L_4 = __this->___adaptor_5;
				RuntimeObject* L_5 = __this->___tree_3;
				NullCheck(L_4);
				int32_t L_6;
				L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_4, L_5);
				__this->___U3CnU3E5__2_8 = L_6;
				int32_t L_7 = __this->___U3CnU3E5__2_8;
				if (L_7)
				{
					goto IL_0067_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0186;
			}

IL_0067_1:
			{
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_8 = V_2;
				RuntimeObject* L_9 = __this->___adaptor_5;
				RuntimeObject* L_10 = __this->___tree_3;
				NullCheck(L_8);
				String_t* L_11;
				L_11 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object) */, L_8, L_9, L_10);
				__this->___U3CU3E2__current_1 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_11);
				__this->___U3CU3E1__state_0 = 1;
				V_0 = (bool)1;
				goto IL_0186;
			}

IL_008d_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				__this->___U3CiU3E5__3_9 = 0;
				goto IL_016a_1;
			}

IL_00a0_1:
			{
				RuntimeObject* L_12 = __this->___adaptor_5;
				RuntimeObject* L_13 = __this->___tree_3;
				int32_t L_14 = __this->___U3CiU3E5__3_9;
				NullCheck(L_12);
				RuntimeObject* L_15;
				L_15 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_12, L_13, L_14);
				__this->___U3CchildU3E5__4_10 = L_15;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__4_10), (void*)L_15);
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_16 = V_2;
				RuntimeObject* L_17 = __this->___adaptor_5;
				RuntimeObject* L_18 = __this->___U3CchildU3E5__4_10;
				NullCheck(L_16);
				String_t* L_19;
				L_19 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::GetNodeText(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object) */, L_16, L_17, L_18);
				__this->___U3CU3E2__current_1 = L_19;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_19);
				__this->___U3CU3E1__state_0 = 2;
				V_0 = (bool)1;
				goto IL_0186;
			}

IL_00e3_1:
			{
				__this->___U3CU3E1__state_0 = (-1);
				DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_20 = V_2;
				RuntimeObject* L_21 = __this->___U3CchildU3E5__4_10;
				RuntimeObject* L_22 = __this->___adaptor_5;
				NullCheck(L_20);
				RuntimeObject* L_23;
				L_23 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Collections.Generic.IEnumerable`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator::DefineNodes(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor) */, L_20, L_21, L_22);
				NullCheck(L_23);
				RuntimeObject* L_24;
				L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.String>::GetEnumerator() */, IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44_il2cpp_TypeInfo_var, L_23);
				__this->___U3CU3E7__wrap4_11 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_11), (void*)L_24);
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
				goto IL_0137_1;
			}

IL_0111_1:
			{
				RuntimeObject* L_25 = __this->___U3CU3E7__wrap4_11;
				NullCheck(L_25);
				String_t* L_26;
				L_26 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.String>::get_Current() */, IEnumerator_1_t73FD060C436E3C4264A734C8F8DCC01DFF6046B8_il2cpp_TypeInfo_var, L_25);
				V_3 = L_26;
				String_t* L_27 = V_3;
				__this->___U3CU3E2__current_1 = L_27;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_27);
				__this->___U3CU3E1__state_0 = 3;
				V_0 = (bool)1;
				goto IL_0186;
			}

IL_012f_1:
			{
				__this->___U3CU3E1__state_0 = ((int32_t)-3);
			}

IL_0137_1:
			{
				RuntimeObject* L_28 = __this->___U3CU3E7__wrap4_11;
				NullCheck(L_28);
				bool L_29;
				L_29 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_28);
				if (L_29)
				{
					goto IL_0111_1;
				}
			}
			{
				U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_m0EE514428C8DC1730C50F7A9945B8D0D06D5127C(__this, NULL);
				__this->___U3CU3E7__wrap4_11 = (RuntimeObject*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap4_11), (void*)(RuntimeObject*)NULL);
				__this->___U3CchildU3E5__4_10 = NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CchildU3E5__4_10), (void*)NULL);
				int32_t L_30 = __this->___U3CiU3E5__3_9;
				V_4 = L_30;
				int32_t L_31 = V_4;
				__this->___U3CiU3E5__3_9 = ((int32_t)il2cpp_codegen_add(L_31, 1));
			}

IL_016a_1:
			{
				int32_t L_32 = __this->___U3CiU3E5__3_9;
				int32_t L_33 = __this->___U3CnU3E5__2_8;
				if ((((int32_t)L_32) < ((int32_t)L_33)))
				{
					goto IL_00a0_1;
				}
			}
			{
				V_0 = (bool)0;
				goto IL_0186;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0186:
	{
		bool L_34 = V_0;
		return L_34;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_U3CU3Em__Finally1_m0EE514428C8DC1730C50F7A9945B8D0D06D5127C (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___U3CU3E1__state_0 = (-1);
		RuntimeObject* L_0 = __this->___U3CU3E7__wrap4_11;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___U3CU3E7__wrap4_11;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerator<System.String>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_StringU3E_get_Current_mA504DED1AAE13001E15B09EA1DC45E6F5BD70DA9 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m09D36942664B11FD2F19A998FDDFEA215CE59DC7 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_Reset_m09D36942664B11FD2F19A998FDDFEA215CE59DC7_RuntimeMethod_var)));
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_IEnumerator_get_Current_m2DE2884FEEDB419312B7C54DC98BE41CC51CEAE0 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<System.String> Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.Generic.IEnumerable<System.String>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mB61BFA824D272EA1C5CDCF7A3810261D225B3C9B (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* V_0 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->___U3CU3El__initialThreadId_2;
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->___U3CU3E1__state_0 = 0;
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_3 = (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76*)il2cpp_codegen_object_new(U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CDefineNodesU3Ed__8__ctor_m1E3A48DCC67B61D8DAFE074BFE4A9DE8463E8004(L_3, 0, NULL);
		V_0 = L_3;
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_4 = V_0;
		DotTreeGenerator_t3AE7E893491EC4EEA3627D241B71A555A6036B26* L_5 = __this->___U3CU3E4__this_7;
		NullCheck(L_4);
		L_4->___U3CU3E4__this_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___U3CU3E4__this_7), (void*)L_5);
	}

IL_0035:
	{
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_6 = V_0;
		RuntimeObject* L_7 = __this->___U3CU3E3__tree_4;
		NullCheck(L_6);
		L_6->___tree_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___tree_3), (void*)L_7);
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_8 = V_0;
		RuntimeObject* L_9 = __this->___U3CU3E3__adaptor_6;
		NullCheck(L_8);
		L_8->___adaptor_5 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&L_8->___adaptor_5), (void*)L_9);
		U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator Naninovel.Antlr.Runtime.Tree.DotTreeGenerator/<DefineNodes>d__8::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CDefineNodesU3Ed__8_System_Collections_IEnumerable_GetEnumerator_mD3B8E0DF024EC79B771F877739CADE03EB715ED7 (U3CDefineNodesU3Ed__8_tDC3AE6EE279DD516D6BA5E17294F5CBF68D02F76* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = U3CDefineNodesU3Ed__8_System_Collections_Generic_IEnumerableU3CSystem_StringU3E_GetEnumerator_mB61BFA824D272EA1C5CDCF7A3810261D225B3C9B(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::.ctor(System.Func`2<System.Object,System.Object>,System.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitorAction__ctor_m54B817949B928135FC0EABC053E4044FDC5C7A46 (TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E* __this, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___preAction0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___postAction1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = ___preAction0;
		__this->____preAction_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____preAction_0), (void*)L_0);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = ___postAction1;
		__this->____postAction_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____postAction_1), (void*)L_1);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::Pre(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitorAction_Pre_m4A4AB14787C2A6EADB7F47065074AC5C2976F9CD (TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = __this->____preAction_0;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = __this->____preAction_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___t0;
		return L_4;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitorAction::Post(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitorAction_Post_m3250D8927E745D7EA3177D9BC6F8419BB7BB78FB (TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_0 = __this->____postAction_1;
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = __this->____postAction_1;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_inline(L_1, L_2, NULL);
		return L_3;
	}

IL_0015:
	{
		RuntimeObject* L_4 = ___t0;
		return L_4;
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
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree__ctor_m6541F95336F43C6B4AFCE0A2ED6DE870C65E23C6 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, RuntimeObject* ___label0, const RuntimeMethod* method) 
{
	{
		BaseTree__ctor_mD538B6FF796B719B99E5845A4DE5429F05D8D3DF(__this, NULL);
		RuntimeObject* L_0 = ___label0;
		__this->___payload_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___payload_3), (void*)L_0);
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.ParseTree::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_get_Text_mD6EC50B73D44511CD93692EF058F1C996C6EA704 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::set_Text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_Text_m175487780CB4A463E5DEB77DFCEE660B2687DBFC (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.ParseTree::get_TokenStartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStartIndex_m70D00704142686C58770B9D8678A1C9A4432640C (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::set_TokenStartIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStartIndex_mAFBFE22F53E963B9A45F1AB032D0B1E423EA9675 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.ParseTree::get_TokenStopIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_TokenStopIndex_mAE84DC47C1A12FD86F0ABE49EC6F43C58D3F328D (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::set_TokenStopIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_TokenStopIndex_mBA9B66BADE63C1432F5E21E1ECC0698E3993F224 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.ParseTree::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParseTree_get_Type_m1A61F4327CF887C22971AE6C7AC32752BD126BA1 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	{
		return 0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::set_Type(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_set_Type_mF3383D6C771B0BD9B26D76FA5639A8FB70075F06 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Naninovel.Antlr.Runtime.Tree.ITree Naninovel.Antlr.Runtime.Tree.ParseTree::DupNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ParseTree_DupNode_mCC77C3D094DC2AF4665C91003B7893BAC332477C (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.ParseTree::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToString_m6830047E38F9336098BFAB5EEEFEF9A6015413B8 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = __this->___payload_3;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var)))
		{
			goto IL_002f;
		}
	}
	{
		RuntimeObject* L_1 = __this->___payload_3;
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Naninovel.Antlr.Runtime.IToken::get_Type() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0028;
		}
	}
	{
		return _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921;
	}

IL_0028:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Naninovel.Antlr.Runtime.IToken::get_Text() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_4);
		return L_5;
	}

IL_002f:
	{
		RuntimeObject* L_6 = __this->___payload_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		return L_7;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.ParseTree::ToStringWithHiddenTokens()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToStringWithHiddenTokens_m2B74872EBF58C4DB15F8CFE7D820E7B273B2754B (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m639E1D8E4A27CE979E4999204E126D30AF7E6EDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m65C0EAF06C6093DEC5B1682F5EC5844F775F7A43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* L_1 = __this->___hiddenTokens_4;
		if (!L_1)
		{
			goto IL_003e;
		}
	}
	{
		V_2 = 0;
		goto IL_0030;
	}

IL_0012:
	{
		List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* L_2 = __this->___hiddenTokens_4;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = List_1_get_Item_m65C0EAF06C6093DEC5B1682F5EC5844F775F7A43(L_2, L_3, List_1_get_Item_m65C0EAF06C6093DEC5B1682F5EC5844F775F7A43_RuntimeMethod_var);
		V_3 = L_4;
		StringBuilder_t* L_5 = V_0;
		RuntimeObject* L_6 = V_3;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String Naninovel.Antlr.Runtime.IToken::get_Text() */, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_7, NULL);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0030:
	{
		int32_t L_10 = V_2;
		List_1_t1E124ED1854715BED0761C8914F952CE8391CD8C* L_11 = __this->___hiddenTokens_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m639E1D8E4A27CE979E4999204E126D30AF7E6EDA_inline(L_11, List_1_get_Count_m639E1D8E4A27CE979E4999204E126D30AF7E6EDA_RuntimeMethod_var);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_0012;
		}
	}

IL_003e:
	{
		String_t* L_13;
		L_13 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		V_1 = L_13;
		String_t* L_14 = V_1;
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_14, _stringLiteral6CAE6C9944342B1CB1FD02C8848B42EEF650A921, NULL);
		if (L_15)
		{
			goto IL_005a;
		}
	}
	{
		StringBuilder_t* L_16 = V_0;
		String_t* L_17 = V_1;
		NullCheck(L_16);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, L_17, NULL);
	}

IL_005a:
	{
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		return L_20;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.ParseTree::ToInputString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParseTree_ToInputString_m162BC347311CFCC56685BF5607D6CAAA72F1491C (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(68 /* System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder) */, __this, L_1);
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParseTree_ToStringLeaves_mE099D90FBCF532D5CD6CF2CE41779D40DECF99D0 (ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0* __this, StringBuilder_t* ___buf0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___payload_3;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_0, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var)))
		{
			goto IL_001b;
		}
	}
	{
		StringBuilder_t* L_1 = ___buf0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(66 /* System.String Naninovel.Antlr.Runtime.Tree.ParseTree::ToStringWithHiddenTokens() */, __this);
		NullCheck(L_1);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_2, NULL);
		return;
	}

IL_001b:
	{
		V_0 = 0;
		goto IL_003a;
	}

IL_001f:
	{
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		int32_t L_5 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Item(System.Int32) */, IList_1_t340833871E2F8BA55ADE9BF47AF04FAEE0F0809C_il2cpp_TypeInfo_var, L_4, L_5);
		StringBuilder_t* L_7 = ___buf0;
		NullCheck(((ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0*)CastclassClass((RuntimeObject*)L_6, ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0_il2cpp_TypeInfo_var)));
		VirtualActionInvoker1< StringBuilder_t* >::Invoke(68 /* System.Void Naninovel.Antlr.Runtime.Tree.ParseTree::ToStringLeaves(System.Text.StringBuilder) */, ((ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0*)CastclassClass((RuntimeObject*)L_6, ParseTree_t3DB51D5E7509CF1211B9ADA7684F5D4BB41ADBD0_il2cpp_TypeInfo_var)), L_7);
		int32_t L_8 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_003a:
	{
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		int32_t L_10 = V_0;
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(30 /* System.Collections.Generic.IList`1<Naninovel.Antlr.Runtime.Tree.ITree> Naninovel.Antlr.Runtime.Tree.BaseTree::get_Children() */, __this);
		NullCheck(L_11);
		int32_t L_12;
		L_12 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<Naninovel.Antlr.Runtime.Tree.ITree>::get_Count() */, ICollection_1_t44210AFCF3A3D28E045E6578A9F6F72B18A72B53_il2cpp_TypeInfo_var, L_11);
		if ((((int32_t)L_10) < ((int32_t)L_12)))
		{
			goto IL_001f;
		}
	}

IL_0050:
	{
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m8A2B4222673CCC3A72FBD24F6B94AF4F0F13BB06 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		String_t* L_1 = ___elementDescription0;
		RewriteCardinalityException__ctor_mA9319117837ECAF4E60AFB1FF4E870405274D740(__this, L_0, L_1, NULL);
		String_t* L_2 = ___elementDescription0;
		__this->____elementDescription_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_m0516BC737486B489792D68354FC3D58661A03D52 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		String_t* L_1 = ___elementDescription0;
		Exception_t* L_2 = ___innerException1;
		RewriteCardinalityException__ctor_mF5CD0E36D8B13E9A9F79CD2CE38966A2253F1B78(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mA9319117837ECAF4E60AFB1FF4E870405274D740 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_0, NULL);
		String_t* L_1 = ___elementDescription1;
		__this->____elementDescription_18 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_1);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteCardinalityException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteCardinalityException__ctor_mF5CD0E36D8B13E9A9F79CD2CE38966A2253F1B78 (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t* L_1 = ___innerException2;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		String_t* L_2 = ___elementDescription1;
		__this->____elementDescription_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____elementDescription_18), (void*)L_2);
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m937859D2EA3185DB1203BE51EDA39489943754CF (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B(__this, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m0E74AA4867CA1DC958A2BD6BC6A03FD2964A7656 (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		RewriteCardinalityException__ctor_m8A2B4222673CCC3A72FBD24F6B94AF4F0F13BB06(__this, L_0, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m1C4FF6B627077904E158AC67D78DC22202F9B888 (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		Exception_t* L_1 = ___innerException1;
		RewriteCardinalityException__ctor_m0516BC737486B489792D68354FC3D58661A03D52(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_mC491BFF3E5BFEFA9D26BDBA75F1A5504A5305D1D (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		RewriteCardinalityException__ctor_mA9319117837ECAF4E60AFB1FF4E870405274D740(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m2C60A86F2967B0D7214BF9873CC0872798D7D860 (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		Exception_t* L_2 = ___innerException2;
		RewriteCardinalityException__ctor_mF5CD0E36D8B13E9A9F79CD2CE38966A2253F1B78(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEarlyExitException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEarlyExitException__ctor_m63852AF994AE71B248A45746448D371D15724ACE (RewriteEarlyExitException_tDB50525AEFA66C9E197E03F6312B91BA2C669A70* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mB761F5D3D65BDC2927E091EA217D9FA8247B0887 (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B(__this, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mB3AC1C2EE2C6652EA5F0618A4443CBFBC1DE9497 (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, String_t* ___elementDescription0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		RewriteCardinalityException__ctor_m8A2B4222673CCC3A72FBD24F6B94AF4F0F13BB06(__this, L_0, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m0F98D10F336770B86FD61F37B7B9FF3E7F5E8549 (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, String_t* ___elementDescription0, Exception_t* ___innerException1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___elementDescription0;
		Exception_t* L_1 = ___innerException1;
		RewriteCardinalityException__ctor_m0516BC737486B489792D68354FC3D58661A03D52(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m2E92E76B6955477F38279AE0F37058F02132FE3B (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, String_t* ___message0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		RewriteCardinalityException__ctor_mA9319117837ECAF4E60AFB1FF4E870405274D740(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_mF2882738C09560165296C988A61023A5B00CF41B (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, String_t* ___message0, String_t* ___elementDescription1, Exception_t* ___innerException2, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___elementDescription1;
		Exception_t* L_2 = ___innerException2;
		RewriteCardinalityException__ctor_mF5CD0E36D8B13E9A9F79CD2CE38966A2253F1B78(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteEmptyStreamException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteEmptyStreamException__ctor_m4E22C9DFBE486376A4984CEE1A4DE1382AAD4C63 (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* __this, SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ___info0, StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___context1, const RuntimeMethod* method) 
{
	{
		RewriteCardinalityException__ctor_m034668DCEDAA1D79C3EA5B504DE83BD33D40FB0B(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___elementDescription1;
		__this->___elementDescription_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elementDescription_4), (void*)L_0);
		RuntimeObject* L_1 = ___adaptor0;
		__this->___adaptor_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_5), (void*)L_1);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mA6EA84F12B4D683F21C0911536A0DE0EE4249C0C (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___oneElement2;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::Add(System.Object) */, __this, L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream__ctor_mBF92B892B5BEEF2429C05AF608A08F55FBEC9BC0 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193(__this, L_0, L_1, NULL);
		__this->___singleElement_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)NULL);
		RuntimeObject* L_2 = ___elements2;
		__this->___elements_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_2), (void*)L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_Reset_mA244D21E451A76385157A8C00CFB590EBD16140B (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	{
		__this->___cursor_0 = 0;
		__this->___dirty_3 = (bool)1;
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleElementStream_Add_mA7DD022548F056A57CB59D6F200EA7FCA06AD55B (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___el0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___elements_2;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_2 = __this->___elements_2;
		RuntimeObject* L_3 = ___el0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_2, L_3);
		return;
	}

IL_001a:
	{
		RuntimeObject* L_5 = __this->___singleElement_1;
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_6 = ___el0;
		__this->___singleElement_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)L_6);
		return;
	}

IL_002a:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_7 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428(L_7, 5, List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_RuntimeMethod_var);
		__this->___elements_2 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___elements_2), (void*)L_7);
		RuntimeObject* L_8 = __this->___elements_2;
		RuntimeObject* L_9 = __this->___singleElement_1;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		__this->___singleElement_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___singleElement_1), (void*)NULL);
		RuntimeObject* L_11 = __this->___elements_2;
		RuntimeObject* L_12 = ___el0;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_11, L_12);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_NextTree_mAD911BD5EE359AC09601C88CF1204DF8678F6F4E (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		bool L_1 = __this->___dirty_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = __this->___cursor_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_002b;
		}
	}

IL_001c:
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_1 = L_5;
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(8 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::Dup(System.Object) */, __this, L_6);
		return L_7;
	}

IL_002b:
	{
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return L_8;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_NextCore_m87279806EB997882C9E8A9CAFCCFFB1C759BDBEF (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = __this->___elementDescription_4;
		RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A* L_3 = (RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteEmptyStreamException_tA7297A054B73A31813F510993C1637C0A4999C9A_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		RewriteEmptyStreamException__ctor_mB3AC1C2EE2C6652EA5F0618A4443CBFBC1DE9497(L_3, L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleElementStream_NextCore_m87279806EB997882C9E8A9CAFCCFFB1C759BDBEF_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_4 = __this->___cursor_0;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) < ((int32_t)L_5)))
		{
			goto IL_003c;
		}
	}
	{
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		RuntimeObject* L_7 = __this->___singleElement_1;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_7);
		return L_8;
	}

IL_0030:
	{
		String_t* L_9 = __this->___elementDescription_4;
		RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF* L_10 = (RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteCardinalityException_t3414F503FEA4722689491281040105521F4201CF_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		RewriteCardinalityException__ctor_m8A2B4222673CCC3A72FBD24F6B94AF4F0F13BB06(L_10, L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleElementStream_NextCore_m87279806EB997882C9E8A9CAFCCFFB1C759BDBEF_RuntimeMethod_var)));
	}

IL_003c:
	{
		RuntimeObject* L_11 = __this->___singleElement_1;
		if (!L_11)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_12 = __this->___cursor_0;
		__this->___cursor_0 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		RuntimeObject* L_13 = __this->___singleElement_1;
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_13);
		return L_14;
	}

IL_005f:
	{
		RuntimeObject* L_15 = __this->___elements_2;
		int32_t L_16 = __this->___cursor_0;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_15, L_16);
		RuntimeObject* L_18;
		L_18 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object) */, __this, L_17);
		int32_t L_19 = __this->___cursor_0;
		__this->___cursor_0 = ((int32_t)il2cpp_codegen_add(L_19, 1));
		return L_18;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleElementStream_ToTree_mE89648E0AFF66A47B31809DB58E8571D45848A2E (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___el0;
		return L_0;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_HasNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RewriteRuleElementStream_get_HasNext_m51E48E96E05B49653946AD683B681EBC1DDA3773 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___singleElement_1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_1 = __this->___cursor_0;
		if ((((int32_t)L_1) < ((int32_t)1)))
		{
			goto IL_002f;
		}
	}

IL_0011:
	{
		RuntimeObject* L_2 = __this->___elements_2;
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_3 = __this->___cursor_0;
		RuntimeObject* L_4 = __this->___elements_2;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_4);
		return (bool)((((int32_t)L_3) < ((int32_t)L_5))? 1 : 0);
	}

IL_002d:
	{
		return (bool)0;
	}

IL_002f:
	{
		return (bool)1;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RewriteRuleElementStream_get_Count_m641ED05A120AC2C1B5D000BF92A1B486372800C5 (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = 0;
		RuntimeObject* L_0 = __this->___singleElement_1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		V_0 = 1;
	}

IL_000c:
	{
		RuntimeObject* L_1 = __this->___elements_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_2 = __this->___elements_2;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0020:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_Description()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* RewriteRuleElementStream_get_Description_m80379B097AFE3949C132E5F2CB5BCF927B8E037B (RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___elementDescription_4;
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_mDB4C10A59F0DA8CBBFF90CB534BD2FA0759E2BFF (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_mA9B59B53499ED5773BF5E2F7774044938170A39E (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA6EA84F12B4D683F21C0911536A0DE0EE4249C0C(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleNodeStream__ctor_mA0713A9B2B208585BD95E2E0EB1EAEEA380B2A3C (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_mBF92B892B5BEEF2429C05AF608A08F55FBEC9BC0(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_NextNode_mE2BA7797E69135F2C5A020582AEB0ADE96DEFB77 (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return L_0;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_ToTree_m00729CD9E682D2E442B2B0C4386AC52B937E28A9 (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___el0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleNodeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleNodeStream_Dup_m8787EE7055D2A58180FCE900D99B24E05986B1D8 (RewriteRuleNodeStream_tF9E1784D44010B3890CD463B6A4BF31A254359BD* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8AE7128187D3AD156C6CD8181A8C4A55758A7A64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleNodeStream_Dup_m8787EE7055D2A58180FCE900D99B24E05986B1D8_RuntimeMethod_var)));
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m4EA93D6E7F08A0D4C82517FEF7733DA30472895E (RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m9F82C7A5EEE9D52D8B4033BD5856D453238897BF (RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA6EA84F12B4D683F21C0911536A0DE0EE4249C0C(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleSubtreeStream__ctor_m98EE0B3E0E18A6B9B4A1BBD209ED56303946BEC9 (RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_mBF92B892B5BEEF2429C05AF608A08F55FBEC9BC0(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_NextNode_m0120830A04815089166D2DB714310582CC49322F (RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0;
		L_0 = VirtualFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::get_Count() */, __this);
		V_0 = L_0;
		bool L_1 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___dirty_3;
		if (L_1)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_2 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___cursor_0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}

IL_001c:
	{
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_2 = L_5;
		RuntimeObject* L_6 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_7 = V_2;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_6, L_7);
		return L_8;
	}

IL_0030:
	{
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_1 = L_9;
		goto IL_0047;
	}

IL_0039:
	{
		RuntimeObject* L_10 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_10, L_11, 0);
		V_1 = L_12;
	}

IL_0047:
	{
		RuntimeObject* L_13 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_14 = V_1;
		NullCheck(L_13);
		bool L_15;
		L_15 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::IsNil(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_13, L_14);
		if (!L_15)
		{
			goto IL_0064;
		}
	}
	{
		RuntimeObject* L_16 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_17 = V_1;
		NullCheck(L_16);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_16, L_17);
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_0039;
		}
	}

IL_0064:
	{
		RuntimeObject* L_19 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_20 = V_1;
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(5 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::DupNode(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_19, L_20);
		return L_21;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleSubtreeStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleSubtreeStream_Dup_m268E967C5BCB68C7664D0FED8FA143443A23A344 (RewriteRuleSubtreeStream_t0D7ECE1D3B5785F5CFA9BB415307CDAC2AA93763* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_1 = ___el0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(9 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::DupTree(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
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
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m9C495FBED38149981451A0E4FB50BDB68F754F0D (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RewriteRuleElementStream__ctor_m95AA81D7430E585805B3B4DC1DC50E0F9FACB193(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_mE29A7AE181C5CAAEDCC74ED009CF1CC827B50DFD (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___oneElement2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___oneElement2;
		RewriteRuleElementStream__ctor_mA6EA84F12B4D683F21C0911536A0DE0EE4249C0C(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RewriteRuleTokenStream__ctor_m56CBF2E49F263792E6348614C5D3257A76805AF1 (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, RuntimeObject* ___adaptor0, String_t* ___elementDescription1, RuntimeObject* ___elements2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___adaptor0;
		String_t* L_1 = ___elementDescription1;
		RuntimeObject* L_2 = ___elements2;
		RewriteRuleElementStream__ctor_mBF92B892B5BEEF2429C05AF608A08F55FBEC9BC0(__this, L_0, L_1, L_2, NULL);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::NextNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextNode_mC9479D33A4E8D79CE3769B4D09F65A1C936D022F (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		V_0 = ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ((RewriteRuleElementStream_tD6DFA36929ABE55DB07028715378ECEE4B89C245*)__this)->___adaptor_5;
		RuntimeObject* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(Naninovel.Antlr.Runtime.IToken) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_NextToken_mCD59C33552151418B5FD89ABB0CECFC6DFB1BBF9 (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(7 /* System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleElementStream::NextCore() */, __this);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_0, IToken_t7BA6D1C232636F9824B7EA116E371937A9B4D55B_il2cpp_TypeInfo_var));
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::ToTree(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_ToTree_mC22E945F11043D9C18360BE5F4CD7E1CE132E31B (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___el0;
		return L_0;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.RewriteRuleTokenStream::Dup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RewriteRuleTokenStream_Dup_m56736EBCCB05F5A2093A065728B2E25FEAD915A4 (RewriteRuleTokenStream_t460AB999680A425C60405F15BF519A4A98AD717E* __this, RuntimeObject* ___el0, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral884DE836248FF2895E37A904B1FE9B39766FAA84)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RewriteRuleTokenStream_Dup_m56736EBCCB05F5A2093A065728B2E25FEAD915A4_RuntimeMethod_var)));
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeConstants::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeConstants__cctor_m9B2B0FF427EB07373D26E8F0852C4DAF4AF863C5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_StaticFields*)il2cpp_codegen_static_fields_for(Tokens_t6380178EB299209EB31EBA8F7744DD743A7607BC_il2cpp_TypeInfo_var))->___Invalid_1;
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_1 = (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635*)il2cpp_codegen_object_new(CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTree__ctor_m791BBE6F2DB124C9B6492424703F2875B12B5A60(L_1, L_0, NULL);
		((TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_StaticFields*)il2cpp_codegen_static_fields_for(TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_il2cpp_TypeInfo_var))->___INVALID_NODE_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_StaticFields*)il2cpp_codegen_static_fields_for(TreeConstants_tD3C5070AC2BB715A3284A3AB74BC79D5BCEA48F0_il2cpp_TypeInfo_var))->___INVALID_NODE_0), (void*)L_1);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_m6D77070DBB9C0AFA389162DD146E8FFF537AE041 (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = (RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A*)il2cpp_codegen_object_new(RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mD60FBE944694900FBF702278B20FB0B5534A5D9D(L_1, NULL);
		TreeFilter__ctor_m9E9D2C90635C4AE93643F6A787B63C988D1F9CDF(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter__ctor_m9E9D2C90635C4AE93643F6A787B63C988D1F9CDF (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = ___state1;
		il2cpp_codegen_runtime_class_init_inline(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var);
		TreeParser__ctor_mEF07B8F68102A3AAE5A25448C23476F7CCFAB8B2(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_2);
		__this->___originalAdaptor_16 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalAdaptor_16), (void*)L_3);
		RuntimeObject* L_4 = ___input0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TokenStream() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_4);
		__this->___originalTokenStream_15 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTokenStream_15), (void*)L_5);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_ApplyOnce_mD62D929BE7FC4DFC5918540C24FACAA39E82B63B (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___t0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___whichRule1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
	}
	try
	{// begin try (depth: 1)
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = (RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A*)il2cpp_codegen_object_new(RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mD60FBE944694900FBF702278B20FB0B5534A5D9D(L_1, NULL);
		((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6), (void*)L_1);
		RuntimeObject* L_2 = __this->___originalAdaptor_16;
		RuntimeObject* L_3 = ___t0;
		CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* L_4 = (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)il2cpp_codegen_object_new(CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		CommonTreeNodeStream__ctor_mD674807A314FBCE2A254FC2C3414EAF36BD98A03(L_4, L_2, L_3, NULL);
		((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14), (void*)L_4);
		RuntimeObject* L_5 = ((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14;
		RuntimeObject* L_6 = __this->___originalTokenStream_15;
		NullCheck(((CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var)));
		VirtualActionInvoker1< RuntimeObject* >::Invoke(46 /* System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::set_TokenStream(Naninovel.Antlr.Runtime.ITokenStream) */, ((CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var)), L_6);
		VirtualActionInvoker1< int32_t >::Invoke(30 /* System.Void Naninovel.Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 1);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___whichRule1;
		NullCheck(L_7);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_7, NULL);
		VirtualActionInvoker1< int32_t >::Invoke(30 /* System.Void Naninovel.Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 0);
		goto IL_0051;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_004e;
		}
		throw e;
	}

CATCH_004e:
	{// begin catch(Naninovel.Antlr.Runtime.RecognitionException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::Downup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Downup_mD08C2A95A81CEAD3E26B4F2988ACBF34197F645B (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeFilter_U3CDownupU3Eb__5_0_m6FC31D0CD62B5F2263DA0487B4A7801A3D735C02_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeFilter_U3CDownupU3Eb__5_1_m400AECE8152B62D8FA7AABC2CD4841D4F1B0BB14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* V_0 = NULL;
	Func_2_tACBF5A1656250800CE861707354491F0611F6624* V_1 = NULL;
	{
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_0 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_0, NULL);
		TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* L_1 = (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D*)il2cpp_codegen_object_new(TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreeVisitor__ctor_mEB228E145392A29C9758D4DB14F8B7E0BE1F8FB6(L_1, L_0, NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_2, __this, (intptr_t)((void*)TreeFilter_U3CDownupU3Eb__5_0_m6FC31D0CD62B5F2263DA0487B4A7801A3D735C02_RuntimeMethod_var), NULL);
		V_0 = L_2;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_3 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_3, __this, (intptr_t)((void*)TreeFilter_U3CDownupU3Eb__5_1_m400AECE8152B62D8FA7AABC2CD4841D4F1B0BB14_RuntimeMethod_var), NULL);
		V_1 = L_3;
		RuntimeObject* L_4 = ___t0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_5 = V_0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_6 = V_1;
		NullCheck(L_1);
		RuntimeObject* L_7;
		L_7 = TreeVisitor_Visit_m5B34A0AF0F1DBEE5218CE8C209DC93E73E008262(L_1, L_4, L_5, L_6, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::Topdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Topdown_m5827D26ACF91C02640007B0FD3EB93AD5420670B (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::Bottomup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeFilter_Bottomup_m7E8EC552E03B6818A8B53D9FA050B3C4AD9AA02B (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeFilter::<Downup>b__5_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeFilter_U3CDownupU3Eb__5_0_m6FC31D0CD62B5F2263DA0487B4A7801A3D735C02 (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 61)), NULL);
		VirtualActionInvoker2< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(59 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,System.Action) */, __this, L_0, L_1);
		RuntimeObject* L_2 = ___o0;
		return L_2;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeFilter::<Downup>b__5_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeFilter_U3CDownupU3Eb__5_1_m400AECE8152B62D8FA7AABC2CD4841D4F1B0BB14 (TreeFilter_tE2D9DAF0DB02FF5791B452885A22631ADA3C72CD* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___o0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_1, __this, (intptr_t)((void*)GetVirtualMethodInfo(__this, 62)), NULL);
		VirtualActionInvoker2< RuntimeObject*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(59 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeFilter::ApplyOnce(System.Object,System.Action) */, __this, L_0, L_1);
		RuntimeObject* L_2 = ___o0;
		return L_2;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::.ctor(Naninovel.Antlr.Runtime.Tree.CommonTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_mC0CE49E5C88AA381B6F9FC7E9F3C30C13EFE246C (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* ___tree0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_0 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_0, NULL);
		CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* L_1 = ___tree0;
		TreeIterator__ctor_m6EF87CDC38986E62553DD978982BF8CEADD414B2(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator__ctor_m6EF87CDC38986E62553DD978982BF8CEADD414B2 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstTime_3 = (bool)1;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		RuntimeObject* L_1 = ___tree1;
		__this->___tree_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_1);
		RuntimeObject* L_2 = ___tree1;
		__this->___root_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___root_1), (void*)L_2);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB(L_3, Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_RuntimeMethod_var);
		__this->___nodes_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___nodes_8), (void*)L_3);
		RuntimeObject* L_4 = ___adaptor0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_4, 2, _stringLiteral32F05A3518F8993BB3D8FC6029754A5BD0C2407F);
		__this->___down_6 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___down_6), (void*)L_5);
		RuntimeObject* L_6 = ___adaptor0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_6, 3, _stringLiteralB598CF0802DB03FC469256176ABAFF79345D3832);
		__this->___up_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___up_5), (void*)L_7);
		RuntimeObject* L_8 = ___adaptor0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_8, (-1), _stringLiteralA9E97704D98D8435E963D4DFE3AFF206257B680D);
		__this->___eof_7 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___eof_7), (void*)L_9);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeIterator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::set_Current(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_Dispose_mF81261C4618B4A3529E6AF19B040E795B252FD99 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeIterator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeIterator_MoveNext_mBC51353D0BBCD353331CB247EEF6ABEF39D4D5B5 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t G_B21_0 = 0;
	{
		bool L_0 = __this->___firstTime_3;
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		__this->___firstTime_3 = (bool)0;
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = __this->___tree_2;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_1, L_2);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = __this->___nodes_8;
		RuntimeObject* L_5 = __this->___eof_7;
		NullCheck(L_4);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_4, L_5, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
	}

IL_0033:
	{
		RuntimeObject* L_6 = __this->___tree_2;
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_6, NULL);
		goto IL_01b0;
	}

IL_0044:
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = __this->___nodes_8;
		if (!L_7)
		{
			goto IL_0070;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = __this->___nodes_8;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_inline(L_8, Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_RuntimeMethod_var);
		if ((((int32_t)L_9) <= ((int32_t)0)))
		{
			goto IL_0070;
		}
	}
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_10 = __this->___nodes_8;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_10, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_11, NULL);
		goto IL_01b0;
	}

IL_0070:
	{
		RuntimeObject* L_12 = __this->___tree_2;
		if (L_12)
		{
			goto IL_0089;
		}
	}
	{
		RuntimeObject* L_13 = __this->___eof_7;
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_13, NULL);
		goto IL_01b0;
	}

IL_0089:
	{
		RuntimeObject* L_14 = __this->___adaptor_0;
		RuntimeObject* L_15 = __this->___tree_2;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_14, L_15);
		if ((((int32_t)L_16) <= ((int32_t)0)))
		{
			goto IL_00d7;
		}
	}
	{
		RuntimeObject* L_17 = __this->___adaptor_0;
		RuntimeObject* L_18 = __this->___tree_2;
		NullCheck(L_17);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_17, L_18, 0);
		__this->___tree_2 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_19);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = __this->___nodes_8;
		RuntimeObject* L_21 = __this->___tree_2;
		NullCheck(L_20);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_20, L_21, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		RuntimeObject* L_22 = __this->___down_6;
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_22, NULL);
		goto IL_01b0;
	}

IL_00d7:
	{
		RuntimeObject* L_23 = __this->___adaptor_0;
		RuntimeObject* L_24 = __this->___tree_2;
		NullCheck(L_23);
		RuntimeObject* L_25;
		L_25 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetParent(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_23, L_24);
		V_0 = L_25;
		goto IL_0115;
	}

IL_00eb:
	{
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_26 = __this->___nodes_8;
		RuntimeObject* L_27 = __this->___up_5;
		NullCheck(L_26);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_26, L_27, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		RuntimeObject* L_28 = V_0;
		__this->___tree_2 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_28);
		RuntimeObject* L_29 = __this->___adaptor_0;
		RuntimeObject* L_30 = __this->___tree_2;
		NullCheck(L_29);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(30 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetParent(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_29, L_30);
		V_0 = L_31;
	}

IL_0115:
	{
		RuntimeObject* L_32 = V_0;
		if (!L_32)
		{
			goto IL_0139;
		}
	}
	{
		RuntimeObject* L_33 = __this->___adaptor_0;
		RuntimeObject* L_34 = __this->___tree_2;
		NullCheck(L_33);
		int32_t L_35;
		L_35 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(32 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildIndex(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_33, L_34);
		RuntimeObject* L_36 = __this->___adaptor_0;
		RuntimeObject* L_37 = V_0;
		NullCheck(L_36);
		int32_t L_38;
		L_38 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_36, L_37);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_35, 1))) >= ((int32_t)L_38)))
		{
			goto IL_00eb;
		}
	}

IL_0139:
	{
		RuntimeObject* L_39 = V_0;
		if (L_39)
		{
			goto IL_0167;
		}
	}
	{
		__this->___tree_2 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)NULL);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_40 = __this->___nodes_8;
		RuntimeObject* L_41 = __this->___eof_7;
		NullCheck(L_40);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_40, L_41, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_42 = __this->___nodes_8;
		NullCheck(L_42);
		RuntimeObject* L_43;
		L_43 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_42, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_43, NULL);
		goto IL_01b0;
	}

IL_0167:
	{
		RuntimeObject* L_44 = __this->___adaptor_0;
		RuntimeObject* L_45 = __this->___tree_2;
		NullCheck(L_44);
		int32_t L_46;
		L_46 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(32 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildIndex(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_44, L_45);
		V_1 = ((int32_t)il2cpp_codegen_add(L_46, 1));
		RuntimeObject* L_47 = __this->___adaptor_0;
		RuntimeObject* L_48 = V_0;
		int32_t L_49 = V_1;
		NullCheck(L_47);
		RuntimeObject* L_50;
		L_50 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_47, L_48, L_49);
		__this->___tree_2 = L_50;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_50);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_51 = __this->___nodes_8;
		RuntimeObject* L_52 = __this->___tree_2;
		NullCheck(L_51);
		Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF(L_51, L_52, Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_RuntimeMethod_var);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_53 = __this->___nodes_8;
		NullCheck(L_53);
		RuntimeObject* L_54;
		L_54 = Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84(L_53, Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_RuntimeMethod_var);
		TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline(__this, L_54, NULL);
	}

IL_01b0:
	{
		RuntimeObject* L_55;
		L_55 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(__this, NULL);
		RuntimeObject* L_56 = __this->___eof_7;
		if ((!(((RuntimeObject*)(RuntimeObject*)L_55) == ((RuntimeObject*)(RuntimeObject*)L_56))))
		{
			goto IL_01c9;
		}
	}
	{
		bool L_57 = __this->___reachedEof_4;
		G_B21_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_01ca;
	}

IL_01c9:
	{
		G_B21_0 = 1;
	}

IL_01ca:
	{
		RuntimeObject* L_58;
		L_58 = TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline(__this, NULL);
		RuntimeObject* L_59 = __this->___eof_7;
		__this->___reachedEof_4 = (bool)((((RuntimeObject*)(RuntimeObject*)L_58) == ((RuntimeObject*)(RuntimeObject*)L_59))? 1 : 0);
		return (bool)G_B21_0;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeIterator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeIterator_Reset_m26A41CC13CDB904A445182E33B6B9F929DE4BD62 (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___firstTime_3 = (bool)1;
		RuntimeObject* L_0 = __this->___root_1;
		__this->___tree_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tree_2), (void*)L_0);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = __this->___nodes_8;
		NullCheck(L_1);
		Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711(L_1, Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_RuntimeMethod_var);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_m2AABB46604579B62C367C60FCB32FFE86116DC82 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	{
		BaseRecognizer__ctor_mD428827AF098CE189D36C4C94E6D3957B9DF61A2(__this, NULL);
		RuntimeObject* L_0 = ___input0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(55 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream) */, __this, L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__ctor_mEF07B8F68102A3AAE5A25448C23476F7CCFAB8B2 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) 
{
	{
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_0 = ___state1;
		BaseRecognizer__ctor_m5060C39EA2DFFCC320BF22B8263191034752B32F(__this, L_0, NULL);
		RuntimeObject* L_1 = ___input0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(55 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream) */, __this, L_1);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_Reset_m8E7933BBEAD7FF6A74AE728F2181648BC4D8CE9B (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseRecognizer_Reset_mE5B8AB730B45A3943977CD5F8E79214B77C283F8(__this, NULL);
		RuntimeObject* L_0 = __this->___input_14;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->___input_14;
		NullCheck(L_1);
		InterfaceActionInvoker1< int32_t >::Invoke(7 /* System.Void Naninovel.Antlr.Runtime.IIntStream::Seek(System.Int32) */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_1, 0);
	}

IL_001a:
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::SetTreeNodeStream(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_SetTreeNodeStream_mB0DD12EC20930852388127B648A0AC4A3E5724DC (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___input0;
		__this->___input_14 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___input_14), (void*)L_0);
		return;
	}
}
// Naninovel.Antlr.Runtime.Tree.ITreeNodeStream Naninovel.Antlr.Runtime.Tree.TreeParser::GetTreeNodeStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetTreeNodeStream_m8DFC3F57B96F7B5B9EC567B2BEAC6A279E326EA2 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___input_14;
		return L_0;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.TreeParser::get_SourceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_get_SourceName_m488BB4CFA088A31BA0211C9AF10C2023BD082552 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->___input_14;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker0< String_t* >::Invoke(9 /* System.String Naninovel.Antlr.Runtime.IIntStream::get_SourceName() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeParser::GetCurrentInputSymbol(Naninovel.Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetCurrentInputSymbol_mFB815F212A31E5609E47546B6E8E8E5864003F5A (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_0, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)), 1);
		return L_1;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeParser::GetMissingSymbol(Naninovel.Antlr.Runtime.IIntStream,Naninovel.Antlr.Runtime.RecognitionException,System.Int32,Naninovel.Antlr.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_GetMissingSymbol_mF29D3F96B34354CB2DCF6FFDDE01F74D22241101 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___e1, int32_t ___expectedTokenType2, BitSet_t60449D01C3BE9849C15513C4A88212B310E0E83E* ___follow3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0;
		L_0 = VirtualFuncInvoker0< StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(32 /* System.String[] Naninovel.Antlr.Runtime.BaseRecognizer::get_TokenNames() */, __this);
		int32_t L_1 = ___expectedTokenType2;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		String_t* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		String_t* L_4;
		L_4 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral8425022ABFE37E7261FEB1DF3415478B19AD4623, L_3, _stringLiteralEF8AE9E6CBCFDABA932FBEB4C85964F450F724F5, NULL);
		V_0 = L_4;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_5 = ___e1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = RecognitionException_get_Input_m55BDB7B65770B52CF09D6F50E41E4F472DD37926_inline(L_5, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_6, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		int32_t L_8 = ___expectedTokenType2;
		String_t* L_9 = V_0;
		CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* L_10 = (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414*)il2cpp_codegen_object_new(CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		CommonToken__ctor_m08CB3D01C11E0C5AF308B813075BBB2E0B914518(L_10, L_8, L_9, NULL);
		NullCheck(L_7);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(Naninovel.Antlr.Runtime.IToken) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_7, L_10);
		return L_11;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::MatchAny(Naninovel.Antlr.Runtime.IIntStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_MatchAny_m5878046A1F6CA7B9F350C6EBF90F53BD5FCAD2B7 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___ignore0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_0 = ((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6;
		NullCheck(L_0);
		L_0->___errorRecovery_2 = (bool)0;
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = ((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6;
		NullCheck(L_1);
		L_1->___failed_4 = (bool)0;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Naninovel.Antlr.Runtime.IIntStream::Consume() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_2);
		RuntimeObject* L_3 = __this->___input_14;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_3, 1);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0088;
		}
	}
	{
		RuntimeObject* L_5 = __this->___input_14;
		NullCheck(L_5);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Naninovel.Antlr.Runtime.IIntStream::Consume() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_5);
		V_0 = 1;
		goto IL_0084;
	}

IL_0041:
	{
		RuntimeObject* L_6 = __this->___input_14;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(1 /* System.Int32 Naninovel.Antlr.Runtime.IIntStream::LA(System.Int32) */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_6, 1);
		V_1 = L_7;
		int32_t L_8 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract(L_8, (-1))))
		{
			case 0:
			{
				goto IL_0078;
			}
			case 1:
			{
				goto IL_0079;
			}
			case 2:
			{
				goto IL_0079;
			}
			case 3:
			{
				goto IL_006c;
			}
			case 4:
			{
				goto IL_0072;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_006c:
	{
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
		goto IL_0079;
	}

IL_0072:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		goto IL_0079;
	}

IL_0078:
	{
		return;
	}

IL_0079:
	{
		RuntimeObject* L_11 = __this->___input_14;
		NullCheck(L_11);
		InterfaceActionInvoker0::Invoke(0 /* System.Void Naninovel.Antlr.Runtime.IIntStream::Consume() */, IIntStream_t219BC81B1AE1AA23C10062B0FD6244BCC8AAEBAD_il2cpp_TypeInfo_var, L_11);
	}

IL_0084:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0041;
		}
	}

IL_0088:
	{
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeParser::RecoverFromMismatchedToken(Naninovel.Antlr.Runtime.IIntStream,System.Int32,Naninovel.Antlr.Runtime.BitSet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeParser_RecoverFromMismatchedToken_m248FBAADF22FCC33D1BCB7F932DA6BAD8B6C6281 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RuntimeObject* ___input0, int32_t ___ttype1, BitSet_t60449D01C3BE9849C15513C4A88212B310E0E83E* ___follow2, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___ttype1;
		RuntimeObject* L_1 = ___input0;
		MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1* L_2 = (MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MismatchedTreeNodeException_tD1ACE31AF2D57B60BA834FA4978F159029E030C1_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		MismatchedTreeNodeException__ctor_m7440B1D4756E6C7A31DF58A6A75597853A50AAD2(L_2, L_0, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)))), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreeParser_RecoverFromMismatchedToken_m248FBAADF22FCC33D1BCB7F932DA6BAD8B6C6281_RuntimeMethod_var)));
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.TreeParser::GetErrorHeader(Naninovel.Antlr.Runtime.RecognitionException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorHeader_mFD4A992117D79F6D331887AFE65561A3B5D51ECF (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___e0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B2_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B2_2 = NULL;
	int32_t G_B1_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_3 = NULL;
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)7);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(33 /* System.String Naninovel.Antlr.Runtime.BaseRecognizer::get_GrammarFileName() */, __this);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_2);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = L_1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral026F016AC65927DA182AFCA5198EFE7B35E1A532);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = L_3;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_5 = ___e0;
		NullCheck(L_5);
		bool L_6;
		L_6 = RecognitionException_get_ApproximateLineInfo_mA8D853CA00BF861073DD8063881349437B64EFFA_inline(L_5, NULL);
		G_B1_0 = 2;
		G_B1_1 = L_4;
		G_B1_2 = L_4;
		if (L_6)
		{
			G_B2_0 = 2;
			G_B2_1 = L_4;
			G_B2_2 = L_4;
			goto IL_0028;
		}
	}
	{
		G_B3_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_002d;
	}

IL_0028:
	{
		G_B3_0 = _stringLiteral1F66D79B656BDA2916F8C6430ED835605C443B3E;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_002d:
	{
		NullCheck(G_B3_2);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		(G_B3_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B3_1), (String_t*)G_B3_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = G_B3_3;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralC3C99DC1D3DEF1E171D34968602584B7EAD1C8FC);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_9 = ___e0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = RecognitionException_get_Line_m91F378A869C33E954B55F1191A783EF06271C43F_inline(L_9, NULL);
		V_0 = L_10;
		String_t* L_11;
		L_11 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_11);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_11);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_8;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_12;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_14 = ___e0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = RecognitionException_get_CharPositionInLine_mCC278826CEB26FA320F7E261570BFEFD41824CF4_inline(L_14, NULL);
		V_0 = L_15;
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)L_16);
		String_t* L_17;
		L_17 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_13, NULL);
		return L_17;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.TreeParser::GetErrorMessage(Naninovel.Antlr.Runtime.RecognitionException,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreeParser_GetErrorMessage_m8238471E19BA55116A7661A924F7C3D55BA8AA52 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* ___e0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		if (!__this)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_0 = ___e0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = RecognitionException_get_Input_m55BDB7B65770B52CF09D6F50E41E4F472DD37926_inline(L_0, NULL);
		NullCheck(((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var)));
		V_0 = L_2;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_3 = ___e0;
		RuntimeObject* L_4 = V_0;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_5 = ___e0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = RecognitionException_get_Node_mEA7C009E9F1056CE1F2C97B6A498AE909C8CF1C8_inline(L_5, NULL);
		NullCheck(L_4);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(22 /* Naninovel.Antlr.Runtime.IToken Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetToken(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_4, L_6);
		NullCheck(L_3);
		RecognitionException_set_Token_mEAFBA2A05A0C47E1077AC55D4EAA63CD30E906BB_inline(L_3, L_7, NULL);
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_8 = ___e0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = RecognitionException_get_Token_mC178E1F55F1B5648D204B95C24E2BA7A0C1F081D_inline(L_8, NULL);
		if (L_9)
		{
			goto IL_0051;
		}
	}
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_10 = ___e0;
		RuntimeObject* L_11 = V_0;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_12 = ___e0;
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = RecognitionException_get_Node_mEA7C009E9F1056CE1F2C97B6A498AE909C8CF1C8_inline(L_12, NULL);
		NullCheck(L_11);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_11, L_13);
		RuntimeObject* L_15 = V_0;
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_16 = ___e0;
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = RecognitionException_get_Node_mEA7C009E9F1056CE1F2C97B6A498AE909C8CF1C8_inline(L_16, NULL);
		NullCheck(L_15);
		String_t* L_18;
		L_18 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_15, L_17);
		CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* L_19 = (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414*)il2cpp_codegen_object_new(CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		CommonToken__ctor_m08CB3D01C11E0C5AF308B813075BBB2E0B914518(L_19, L_14, L_18, NULL);
		NullCheck(L_10);
		RecognitionException_set_Token_mEAFBA2A05A0C47E1077AC55D4EAA63CD30E906BB_inline(L_10, L_19, NULL);
	}

IL_0051:
	{
		RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* L_20 = ___e0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = ___tokenNames1;
		String_t* L_22;
		L_22 = BaseRecognizer_GetErrorMessage_mCB45E7F720D6DCCDD7B579F925126E9624386B50(__this, L_20, L_21, NULL);
		return L_22;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::TraceIn(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceIn_m077E7D4BB9307E4777F10071C7E5949D7E40A2A9 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceIn_m9EAE849E6FAE908BADAF6F18BC5FE05DF5CBD4FA(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::TraceOut(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser_TraceOut_mBA2974AAA1DEB130E4284AAF168339D4A5277DA3 (TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1* __this, String_t* ___ruleName0, int32_t ___ruleIndex1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___ruleName0;
		int32_t L_1 = ___ruleIndex1;
		RuntimeObject* L_2 = __this->___input_14;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(1 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::LT(System.Int32) */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_2, 1);
		BaseRecognizer_TraceOut_m371C5DA88262F8CAD6209BA11E5C8FFAF28FE7C4(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeParser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeParser__cctor_m905A21B6751B54598965D3FF69D7F8B280538FBE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		s_Il2CppMethodInitialized = true;
	}
	{
		((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___dotdot_10 = _stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___dotdot_10), (void*)_stringLiteral8C0EF5134D52509F51E7C9DE84BE70E531F05B61);
		((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___doubleEtc_11 = _stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___doubleEtc_11), (void*)_stringLiteral3676B1B24AD6D0495AB7DB36401292DFCD7CF597);
		String_t* L_0 = ((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___dotdot_10;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_1 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_1, L_0, NULL);
		((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___dotdotPattern_12 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___dotdotPattern_12), (void*)L_1);
		String_t* L_2 = ((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___doubleEtc_11;
		Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* L_3 = (Regex_tE773142C2BE45C5D362B0F815AFF831707A51772*)il2cpp_codegen_object_new(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Regex__ctor_m082970AA73B8236360F0CA651FA24A8D1EBF89CD(L_3, L_2, NULL);
		((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___doubleEtcPattern_13 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_StaticFields*)il2cpp_codegen_static_fields_for(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var))->___doubleEtcPattern_13), (void*)L_3);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2 (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* __this, String_t* ___pattern0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->___p_8 = (-1);
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		__this->___sval_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sval_11), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_1 = ___pattern0;
		__this->___pattern_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___pattern_7), (void*)L_1);
		String_t* L_2 = ___pattern0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		__this->___n_10 = L_3;
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreePatternLexer_NextToken_m06DF638BB8E164D27E8E5DA07E213B4A4CDF2771 (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* __this, const RuntimeMethod* method) 
{
	{
		StringBuilder_t* L_0 = __this->___sval_11;
		NullCheck(L_0);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_0, 0, NULL);
		goto IL_01d5;
	}

IL_0011:
	{
		int32_t L_1 = __this->___c_9;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_2 = __this->___c_9;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)10))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_3 = __this->___c_9;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)13))))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_4 = __this->___c_9;
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0044;
		}
	}

IL_0039:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_01d5;
	}

IL_0044:
	{
		int32_t L_5 = __this->___c_9;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)97))))
		{
			goto IL_0058;
		}
	}
	{
		int32_t L_6 = __this->___c_9;
		if ((((int32_t)L_6) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0076;
		}
	}

IL_0058:
	{
		int32_t L_7 = __this->___c_9;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)65))))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_8 = __this->___c_9;
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0076;
		}
	}

IL_006c:
	{
		int32_t L_9 = __this->___c_9;
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)95)))))
		{
			goto IL_00f2;
		}
	}

IL_0076:
	{
		StringBuilder_t* L_10 = __this->___sval_11;
		int32_t L_11 = __this->___c_9;
		NullCheck(L_10);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_10, ((int32_t)(uint16_t)L_11), NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_00aa;
	}

IL_0091:
	{
		StringBuilder_t* L_13 = __this->___sval_11;
		int32_t L_14 = __this->___c_9;
		NullCheck(L_13);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_13, ((int32_t)(uint16_t)L_14), NULL);
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
	}

IL_00aa:
	{
		int32_t L_16 = __this->___c_9;
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00be;
		}
	}
	{
		int32_t L_17 = __this->___c_9;
		if ((((int32_t)L_17) <= ((int32_t)((int32_t)122))))
		{
			goto IL_0091;
		}
	}

IL_00be:
	{
		int32_t L_18 = __this->___c_9;
		if ((((int32_t)L_18) < ((int32_t)((int32_t)65))))
		{
			goto IL_00d2;
		}
	}
	{
		int32_t L_19 = __this->___c_9;
		if ((((int32_t)L_19) <= ((int32_t)((int32_t)90))))
		{
			goto IL_0091;
		}
	}

IL_00d2:
	{
		int32_t L_20 = __this->___c_9;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)48))))
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_21 = __this->___c_9;
		if ((((int32_t)L_21) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0091;
		}
	}

IL_00e6:
	{
		int32_t L_22 = __this->___c_9;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)95))))
		{
			goto IL_0091;
		}
	}
	{
		return 3;
	}

IL_00f2:
	{
		int32_t L_23 = __this->___c_9;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)40)))))
		{
			goto IL_0104;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 1;
	}

IL_0104:
	{
		int32_t L_24 = __this->___c_9;
		if ((!(((uint32_t)L_24) == ((uint32_t)((int32_t)41)))))
		{
			goto IL_0116;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 2;
	}

IL_0116:
	{
		int32_t L_25 = __this->___c_9;
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)37)))))
		{
			goto IL_0128;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 5;
	}

IL_0128:
	{
		int32_t L_26 = __this->___c_9;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)58)))))
		{
			goto IL_013a;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 6;
	}

IL_013a:
	{
		int32_t L_27 = __this->___c_9;
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_014c;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 7;
	}

IL_014c:
	{
		int32_t L_28 = __this->___c_9;
		if ((!(((uint32_t)L_28) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_01c6;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		goto IL_01b4;
	}

IL_015e:
	{
		int32_t L_29 = __this->___c_9;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)92)))))
		{
			goto IL_019b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		int32_t L_30 = __this->___c_9;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_0186;
		}
	}
	{
		StringBuilder_t* L_31 = __this->___sval_11;
		NullCheck(L_31);
		StringBuilder_t* L_32;
		L_32 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_31, ((int32_t)92), NULL);
	}

IL_0186:
	{
		StringBuilder_t* L_33 = __this->___sval_11;
		int32_t L_34 = __this->___c_9;
		NullCheck(L_33);
		StringBuilder_t* L_35;
		L_35 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)(uint16_t)L_34), NULL);
		goto IL_01ae;
	}

IL_019b:
	{
		StringBuilder_t* L_36 = __this->___sval_11;
		int32_t L_37 = __this->___c_9;
		NullCheck(L_36);
		StringBuilder_t* L_38;
		L_38 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_36, ((int32_t)(uint16_t)L_37), NULL);
	}

IL_01ae:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
	}

IL_01b4:
	{
		int32_t L_39 = __this->___c_9;
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_015e;
		}
	}
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		return 4;
	}

IL_01c6:
	{
		VirtualActionInvoker0::Invoke(5 /* System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume() */, __this);
		__this->___error_12 = (bool)1;
		return (-1);
	}

IL_01d5:
	{
		int32_t L_40 = __this->___c_9;
		if ((!(((uint32_t)L_40) == ((uint32_t)(-1)))))
		{
			goto IL_0011;
		}
	}
	{
		return (-1);
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreePatternLexer::Consume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternLexer_Consume_mF6D6DB0FE9862B3D1D44E8FE7259034D2B4975BB (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___p_8;
		__this->___p_8 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		int32_t L_1 = __this->___p_8;
		int32_t L_2 = __this->___n_10;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_0024;
		}
	}
	{
		__this->___c_9 = (-1);
		return;
	}

IL_0024:
	{
		String_t* L_3 = __this->___pattern_7;
		int32_t L_4 = __this->___p_8;
		NullCheck(L_3);
		Il2CppChar L_5;
		L_5 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_3, L_4, NULL);
		__this->___c_9 = L_5;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreePatternParser::.ctor(Naninovel.Antlr.Runtime.Tree.TreePatternLexer,Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5 (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* __this, TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* ___tokenizer0, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___wizard1, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_0 = ___tokenizer0;
		__this->___tokenizer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenizer_0), (void*)L_0);
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_1 = ___wizard1;
		__this->___wizard_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___wizard_2), (void*)L_1);
		RuntimeObject* L_2 = ___adaptor2;
		__this->___adaptor_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_3), (void*)L_2);
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_3 = ___tokenizer0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_3);
		__this->___ttype_1 = L_4;
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::Pattern()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_Pattern_m6325CF4CF8A4ED31E036C57DAE8A7F8FF738B1AC (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		int32_t L_0 = __this->___ttype_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0010;
		}
	}
	{
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseTree() */, __this);
		return L_1;
	}

IL_0010:
	{
		int32_t L_2 = __this->___ttype_1;
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002d;
		}
	}
	{
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_0 = L_3;
		int32_t L_4 = __this->___ttype_1;
		if ((!(((uint32_t)L_4) == ((uint32_t)(-1)))))
		{
			goto IL_002b;
		}
	}
	{
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_002b:
	{
		return NULL;
	}

IL_002d:
	{
		return NULL;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_ParseTree_mB126E50EEB80CDD7453A22804B0839EB29DB055C (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		int32_t L_0 = __this->___ttype_1;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4B73682CED1B654C47A337DF5A4BC2B5D6FD262A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreePatternParser_ParseTree_mB126E50EEB80CDD7453A22804B0839EB29DB055C_RuntimeMethod_var)));
	}

IL_0014:
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_2 = __this->___tokenizer_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_2);
		__this->___ttype_1 = L_3;
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_0 = L_4;
		RuntimeObject* L_5 = V_0;
		if (L_5)
		{
			goto IL_0069;
		}
	}
	{
		return NULL;
	}

IL_0031:
	{
		int32_t L_6 = __this->___ttype_1;
		if ((!(((uint32_t)L_6) == ((uint32_t)1))))
		{
			goto IL_0050;
		}
	}
	{
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(5 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseTree() */, __this);
		V_1 = L_7;
		RuntimeObject* L_8 = __this->___adaptor_3;
		RuntimeObject* L_9 = V_0;
		RuntimeObject* L_10 = V_1;
		NullCheck(L_8);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(13 /* System.Void Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		goto IL_0069;
	}

IL_0050:
	{
		RuntimeObject* L_11;
		L_11 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseNode() */, __this);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		if (L_12)
		{
			goto IL_005c;
		}
	}
	{
		return NULL;
	}

IL_005c:
	{
		RuntimeObject* L_13 = __this->___adaptor_3;
		RuntimeObject* L_14 = V_0;
		RuntimeObject* L_15 = V_2;
		NullCheck(L_13);
		InterfaceActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(13 /* System.Void Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::AddChild(System.Object,System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_0069:
	{
		int32_t L_16 = __this->___ttype_1;
		if ((((int32_t)L_16) == ((int32_t)1)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_17 = __this->___ttype_1;
		if ((((int32_t)L_17) == ((int32_t)3)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_18 = __this->___ttype_1;
		if ((((int32_t)L_18) == ((int32_t)5)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_19 = __this->___ttype_1;
		if ((((int32_t)L_19) == ((int32_t)7)))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_20 = __this->___ttype_1;
		if ((((int32_t)L_20) == ((int32_t)2)))
		{
			goto IL_00a1;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_21 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_21);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral79709B18E471A26FDB78780B715C9BBAAFD4CFEC)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TreePatternParser_ParseTree_mB126E50EEB80CDD7453A22804B0839EB29DB055C_RuntimeMethod_var)));
	}

IL_00a1:
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_22 = __this->___tokenizer_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_22);
		__this->___ttype_1 = L_23;
		RuntimeObject* L_24 = V_0;
		return L_24;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::ParseNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternParser_ParseNode_m26E7B8AC4D43B54E552B082EADBDC41C45FC4229 (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* V_6 = NULL;
	{
		V_0 = (String_t*)NULL;
		int32_t L_0 = __this->___ttype_1;
		if ((!(((uint32_t)L_0) == ((uint32_t)5))))
		{
			goto IL_0065;
		}
	}
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_1 = __this->___tokenizer_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_1);
		__this->___ttype_1 = L_2;
		int32_t L_3 = __this->___ttype_1;
		if ((((int32_t)L_3) == ((int32_t)3)))
		{
			goto IL_0027;
		}
	}
	{
		return NULL;
	}

IL_0027:
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_4 = __this->___tokenizer_0;
		NullCheck(L_4);
		StringBuilder_t* L_5 = L_4->___sval_11;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_5);
		V_0 = L_6;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_7 = __this->___tokenizer_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_7);
		__this->___ttype_1 = L_8;
		int32_t L_9 = __this->___ttype_1;
		if ((((int32_t)L_9) == ((int32_t)6)))
		{
			goto IL_0054;
		}
	}
	{
		return NULL;
	}

IL_0054:
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_10 = __this->___tokenizer_0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_10);
		__this->___ttype_1 = L_11;
	}

IL_0065:
	{
		int32_t L_12 = __this->___ttype_1;
		if ((!(((uint32_t)L_12) == ((uint32_t)7))))
		{
			goto IL_009f;
		}
	}
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_13 = __this->___tokenizer_0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_13);
		__this->___ttype_1 = L_14;
		CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414* L_15 = (CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414*)il2cpp_codegen_object_new(CommonToken_t9198A70EA9B9746C2D388EFD81BBA50F8F246414_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		CommonToken__ctor_m08CB3D01C11E0C5AF308B813075BBB2E0B914518(L_15, 0, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD* L_16 = (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD*)il2cpp_codegen_object_new(WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		WildcardTreePattern__ctor_mC3351595003439E57078415EB30A33E32461DEE1(L_16, L_15, NULL);
		V_6 = L_16;
		String_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_009c;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_18 = V_6;
		String_t* L_19 = V_0;
		NullCheck(L_18);
		L_18->___label_8 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&L_18->___label_8), (void*)L_19);
	}

IL_009c:
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_20 = V_6;
		return L_20;
	}

IL_009f:
	{
		int32_t L_21 = __this->___ttype_1;
		if ((((int32_t)L_21) == ((int32_t)3)))
		{
			goto IL_00aa;
		}
	}
	{
		return NULL;
	}

IL_00aa:
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_22 = __this->___tokenizer_0;
		NullCheck(L_22);
		StringBuilder_t* L_23 = L_22->___sval_11;
		NullCheck(L_23);
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		V_1 = L_24;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_25 = __this->___tokenizer_0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_25);
		__this->___ttype_1 = L_26;
		String_t* L_27 = V_1;
		NullCheck(L_27);
		bool L_28;
		L_28 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_27, _stringLiteral2CAB73EF57D40E8B63A7CA91D057C0B68DB59100, NULL);
		if (!L_28)
		{
			goto IL_00e5;
		}
	}
	{
		RuntimeObject* L_29 = __this->___adaptor_3;
		NullCheck(L_29);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(10 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Nil() */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_29);
		return L_30;
	}

IL_00e5:
	{
		String_t* L_31 = V_1;
		V_2 = L_31;
		V_3 = (String_t*)NULL;
		int32_t L_32 = __this->___ttype_1;
		if ((!(((uint32_t)L_32) == ((uint32_t)4))))
		{
			goto IL_0116;
		}
	}
	{
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_33 = __this->___tokenizer_0;
		NullCheck(L_33);
		StringBuilder_t* L_34 = L_33->___sval_11;
		NullCheck(L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_34);
		V_3 = L_35;
		String_t* L_36 = V_3;
		V_2 = L_36;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_37 = __this->___tokenizer_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreePatternLexer::NextToken() */, L_37);
		__this->___ttype_1 = L_38;
	}

IL_0116:
	{
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_39 = __this->___wizard_2;
		String_t* L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41;
		L_41 = VirtualFuncInvoker1< int32_t, String_t* >::Invoke(5 /* System.Int32 Naninovel.Antlr.Runtime.Tree.TreeWizard::GetTokenType(System.String) */, L_39, L_40);
		V_4 = L_41;
		int32_t L_42 = V_4;
		if (L_42)
		{
			goto IL_012a;
		}
	}
	{
		return NULL;
	}

IL_012a:
	{
		RuntimeObject* L_43 = __this->___adaptor_3;
		int32_t L_44 = V_4;
		String_t* L_45 = V_2;
		NullCheck(L_43);
		RuntimeObject* L_46;
		L_46 = InterfaceFuncInvoker2< RuntimeObject*, int32_t, String_t* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::Create(System.Int32,System.String) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_43, L_44, L_45);
		V_5 = L_46;
		String_t* L_47 = V_0;
		if (!L_47)
		{
			goto IL_0162;
		}
	}
	{
		RuntimeObject* L_48 = V_5;
		NullCheck(L_48);
		Type_t* L_49;
		L_49 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_48, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = { reinterpret_cast<intptr_t> (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_51;
		L_51 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_50, NULL);
		bool L_52;
		L_52 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_49, L_51, NULL);
		if (!L_52)
		{
			goto IL_0162;
		}
	}
	{
		RuntimeObject* L_53 = V_5;
		String_t* L_54 = V_0;
		NullCheck(((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_53, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var)));
		((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_53, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var))->___label_8 = L_54;
		Il2CppCodeGenWriteBarrier((void**)(&((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_53, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var))->___label_8), (void*)L_54);
	}

IL_0162:
	{
		String_t* L_55 = V_3;
		if (!L_55)
		{
			goto IL_018a;
		}
	}
	{
		RuntimeObject* L_56 = V_5;
		NullCheck(L_56);
		Type_t* L_57;
		L_57 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_56, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_58 = { reinterpret_cast<intptr_t> (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_59;
		L_59 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_58, NULL);
		bool L_60;
		L_60 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_57, L_59, NULL);
		if (!L_60)
		{
			goto IL_018a;
		}
	}
	{
		RuntimeObject* L_61 = V_5;
		NullCheck(((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_61, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var)));
		((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_61, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var))->___hasTextArg_9 = (bool)1;
	}

IL_018a:
	{
		RuntimeObject* L_62 = V_5;
		return L_62;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeRewriter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_m8BFB3D8A5DEEF57918A01E378CD22C4BDDB570ED (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___input0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = (RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A*)il2cpp_codegen_object_new(RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RecognizerSharedState__ctor_mD60FBE944694900FBF702278B20FB0B5534A5D9D(L_1, NULL);
		TreeRewriter__ctor_m71A25000FFC50053ECBD21EA3773DA0B9CE01242(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeRewriter::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeNodeStream,Naninovel.Antlr.Runtime.RecognizerSharedState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter__ctor_m71A25000FFC50053ECBD21EA3773DA0B9CE01242 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___input0, RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3C_ctorU3Eb__6_0_m042DFCEBC604723616B91279BF7F6CEAA129D18F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3C_ctorU3Eb__6_1_m14E67FA2B2F0DDDF35BF1FBCA041DD7A8B39BCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___input0;
		RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = ___state1;
		il2cpp_codegen_runtime_class_init_inline(TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1_il2cpp_TypeInfo_var);
		TreeParser__ctor_mEF07B8F68102A3AAE5A25448C23476F7CCFAB8B2(__this, L_0, L_1, NULL);
		RuntimeObject* L_2 = ___input0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* Naninovel.Antlr.Runtime.Tree.ITreeAdaptor Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TreeAdaptor() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_2);
		__this->___originalAdaptor_17 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalAdaptor_17), (void*)L_3);
		RuntimeObject* L_4 = ___input0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* Naninovel.Antlr.Runtime.ITokenStream Naninovel.Antlr.Runtime.Tree.ITreeNodeStream::get_TokenStream() */, ITreeNodeStream_t1A883273D6977BB46EEA76C474AE7EB6381A6D97_il2cpp_TypeInfo_var, L_4);
		__this->___originalTokenStream_16 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___originalTokenStream_16), (void*)L_5);
		Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_6 = (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1*)il2cpp_codegen_object_new(Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Func_1__ctor_m9EC8E7F3B83322CABF664F049A421E655657A8EC(L_6, __this, (intptr_t)((void*)TreeRewriter_U3C_ctorU3Eb__6_0_m042DFCEBC604723616B91279BF7F6CEAA129D18F_RuntimeMethod_var), NULL);
		__this->___topdown_func_18 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___topdown_func_18), (void*)L_6);
		Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_7 = (Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1*)il2cpp_codegen_object_new(Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_1__ctor_m9EC8E7F3B83322CABF664F049A421E655657A8EC(L_7, __this, (intptr_t)((void*)TreeRewriter_U3C_ctorU3Eb__6_1_m14E67FA2B2F0DDDF35BF1FBCA041DD7A8B39BCC4_RuntimeMethod_var), NULL);
		__this->___bottomup_func_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___bottomup_func_19), (void*)L_7);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_ApplyOnce_mAF6734340D91F396B1FC755A54F2CCB7FE51E740 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___t0, Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* ___whichRule1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return NULL;
	}

IL_0005:
	{
	}
	try
	{// begin try (depth: 1)
		{
			RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A* L_1 = (RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A*)il2cpp_codegen_object_new(RecognizerSharedState_tD05F6FB7AA772640426E972E6F46EF7843C91E3A_il2cpp_TypeInfo_var);
			NullCheck(L_1);
			RecognizerSharedState__ctor_mD60FBE944694900FBF702278B20FB0B5534A5D9D(L_1, NULL);
			((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6 = L_1;
			Il2CppCodeGenWriteBarrier((void**)(&((BaseRecognizer_t359AC4E428C5C3BDB9FDE062F773C4961097F9B5*)__this)->___state_6), (void*)L_1);
			RuntimeObject* L_2 = __this->___originalAdaptor_17;
			RuntimeObject* L_3 = ___t0;
			CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47* L_4 = (CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)il2cpp_codegen_object_new(CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			CommonTreeNodeStream__ctor_mD674807A314FBCE2A254FC2C3414EAF36BD98A03(L_4, L_2, L_3, NULL);
			((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14), (void*)L_4);
			RuntimeObject* L_5 = ((TreeParser_tE2253749B176671ED65B7A53187EC2C8EC3151A1*)__this)->___input_14;
			RuntimeObject* L_6 = __this->___originalTokenStream_16;
			NullCheck(((CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var)));
			VirtualActionInvoker1< RuntimeObject* >::Invoke(46 /* System.Void Naninovel.Antlr.Runtime.Tree.CommonTreeNodeStream::set_TokenStream(Naninovel.Antlr.Runtime.ITokenStream) */, ((CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47*)CastclassClass((RuntimeObject*)L_5, CommonTreeNodeStream_tDE3DD3D4CE368835ACBA9FBE2F0A8CF532408D47_il2cpp_TypeInfo_var)), L_6);
			VirtualActionInvoker1< int32_t >::Invoke(30 /* System.Void Naninovel.Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 1);
			Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_7 = ___whichRule1;
			NullCheck(L_7);
			RuntimeObject* L_8;
			L_8 = Func_1_Invoke_m93F2B886018854EB61524B8B697D99CA37737665_inline(L_7, NULL);
			V_0 = L_8;
			VirtualActionInvoker1< int32_t >::Invoke(30 /* System.Void Naninovel.Antlr.Runtime.BaseRecognizer::set_BacktrackingLevel(System.Int32) */, __this, 0);
			bool L_9;
			L_9 = VirtualFuncInvoker0< bool >::Invoke(31 /* System.Boolean Naninovel.Antlr.Runtime.BaseRecognizer::get_Failed() */, __this);
			if (!L_9)
			{
				goto IL_005a_1;
			}
		}
		{
			RuntimeObject* L_10 = ___t0;
			V_1 = L_10;
			goto IL_00a5;
		}

IL_005a_1:
		{
			bool L_11 = __this->___showTransformations_15;
			if (!L_11)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_12 = V_0;
			if (!L_12)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_13 = ___t0;
			RuntimeObject* L_14 = V_0;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var, L_14);
			NullCheck(L_13);
			bool L_16;
			L_16 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_13, L_15);
			if (L_16)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_17 = V_0;
			NullCheck(L_17);
			RuntimeObject* L_18;
			L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var, L_17);
			if (!L_18)
			{
				goto IL_0088_1;
			}
		}
		{
			RuntimeObject* L_19 = ___t0;
			RuntimeObject* L_20 = V_0;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var, L_20);
			VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(65 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeRewriter::ReportTransformation(System.Object,System.Object) */, __this, L_19, L_21);
		}

IL_0088_1:
		{
			RuntimeObject* L_22 = V_0;
			if (!L_22)
			{
				goto IL_009c_1;
			}
		}
		{
			RuntimeObject* L_23 = V_0;
			NullCheck(L_23);
			RuntimeObject* L_24;
			L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var, L_23);
			if (!L_24)
			{
				goto IL_009c_1;
			}
		}
		{
			RuntimeObject* L_25 = V_0;
			NullCheck(L_25);
			RuntimeObject* L_26;
			L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.IAstRuleReturnScope::get_Tree() */, IAstRuleReturnScope_t9FA65FFFD62100BC584A54F8D93703F5574E6CEE_il2cpp_TypeInfo_var, L_25);
			V_1 = L_26;
			goto IL_00a5;
		}

IL_009c_1:
		{
			RuntimeObject* L_27 = ___t0;
			V_1 = L_27;
			goto IL_00a5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a0;
		}
		throw e;
	}

CATCH_00a0:
	{// begin catch(Naninovel.Antlr.Runtime.RecognitionException)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00a3;
	}// end catch (depth: 1)

IL_00a3:
	{
		RuntimeObject* L_28 = ___t0;
		return L_28;
	}

IL_00a5:
	{
		RuntimeObject* L_29 = V_1;
		return L_29;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::ApplyRepeatedly(System.Object,System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_ApplyRepeatedly_m4C1FC35EF7BD80B6BD0D138A291ED08E702DDFB4 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___t0, Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* ___whichRule1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	{
		V_0 = (bool)1;
		goto IL_001b;
	}

IL_0004:
	{
		RuntimeObject* L_0 = ___t0;
		Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_1 = ___whichRule1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* >::Invoke(59 /* System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		V_1 = L_2;
		RuntimeObject* L_3 = ___t0;
		RuntimeObject* L_4 = V_1;
		NullCheck(L_3);
		bool L_5;
		L_5 = VirtualFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_3, L_4);
		V_0 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		RuntimeObject* L_6 = V_1;
		___t0 = L_6;
	}

IL_001b:
	{
		bool L_7 = V_0;
		if (L_7)
		{
			goto IL_0004;
		}
	}
	{
		RuntimeObject* L_8 = ___t0;
		return L_8;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Downup_mD60A6A15B016AF7A55189C3937DBA2A6698A5341 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, bool >::Invoke(62 /* System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object,System.Boolean) */, __this, L_0, (bool)0);
		return L_1;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::Downup(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Downup_mA06C99C6A65FC2CBF65B61FD24D0A2CBB9D9F25E (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___t0, bool ___showTransformations1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3CDownupU3Eb__10_0_mD63D7604FD6AA4023B771AF17D33B5F42599E4FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeRewriter_U3CDownupU3Eb__10_1_mBA534F769C502DC0F8E94D84492F1F5FEAEBA1FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		bool L_0 = ___showTransformations1;
		__this->___showTransformations_15 = L_0;
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_1 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_1, NULL);
		TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* L_2 = (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D*)il2cpp_codegen_object_new(TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreeVisitor__ctor_mEB228E145392A29C9758D4DB14F8B7E0BE1F8FB6(L_2, L_1, NULL);
		RuntimeObject* L_3 = ___t0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_4 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_4, __this, (intptr_t)((void*)TreeRewriter_U3CDownupU3Eb__10_0_mD63D7604FD6AA4023B771AF17D33B5F42599E4FA_RuntimeMethod_var), NULL);
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_5 = (Func_2_tACBF5A1656250800CE861707354491F0611F6624*)il2cpp_codegen_object_new(Func_2_tACBF5A1656250800CE861707354491F0611F6624_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398(L_5, __this, (intptr_t)((void*)TreeRewriter_U3CDownupU3Eb__10_1_mBA534F769C502DC0F8E94D84492F1F5FEAEBA1FA_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		RuntimeObject* L_6;
		L_6 = TreeVisitor_Visit_m5B34A0AF0F1DBEE5218CE8C209DC93E73E008262(L_2, L_3, L_4, L_5, NULL);
		___t0 = L_6;
		RuntimeObject* L_7 = ___t0;
		return L_7;
	}
}
// Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::Topdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Topdown_m4BA76B0855F718187D58C13E75E96716B0B3D977 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::Bottomup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_Bottomup_mBAD4DDCAFCE64A12A7B394634D986158852E6A95 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeRewriter::ReportTransformation(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeRewriter_ReportTransformation_m1F202F115326C64C0B83A45218CD50832F6262DC (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___oldTree0, RuntimeObject* ___newTree1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B6_0 = NULL;
	{
		RuntimeObject* L_0 = ___oldTree0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = ___newTree1;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_1, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var));
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
		goto IL_001e;
	}

IL_0018:
	{
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Naninovel.Antlr.Runtime.Tree.ITree::ToStringTree() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_3);
		G_B3_0 = L_4;
	}

IL_001e:
	{
		V_2 = G_B3_0;
		RuntimeObject* L_5 = V_1;
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		G_B6_0 = _stringLiteralEBD8044853D38524000A9618EB61AFD6F16295E8;
		goto IL_002f;
	}

IL_0029:
	{
		RuntimeObject* L_6 = V_1;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = InterfaceFuncInvoker0< String_t* >::Invoke(24 /* System.String Naninovel.Antlr.Runtime.Tree.ITree::ToStringTree() */, ITree_tE61437ACABB142D0AD51F9183FB9B31B8F496FB6_il2cpp_TypeInfo_var, L_6);
		G_B6_0 = L_7;
	}

IL_002f:
	{
		V_3 = G_B6_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_8 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = L_8;
		String_t* L_10 = V_2;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_10);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = L_9;
		String_t* L_12 = V_3;
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_12);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_12);
		OutputStreamHost_WriteLine_m3AF5A99ECA1EA360980FDCA80E032D8A7316DDA1(_stringLiteral827B22AE86B43CCDB3331B7195ECFD0D429BB529, L_11, NULL);
		return;
	}
}
// Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::<.ctor>b__6_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3C_ctorU3Eb__6_0_m042DFCEBC604723616B91279BF7F6CEAA129D18F (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(63 /* Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::Topdown() */, __this);
		return L_0;
	}
}
// Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::<.ctor>b__6_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3C_ctorU3Eb__6_1_m14E67FA2B2F0DDDF35BF1FBCA041DD7A8B39BCC4 (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(64 /* Naninovel.Antlr.Runtime.IAstRuleReturnScope Naninovel.Antlr.Runtime.Tree.TreeRewriter::Bottomup() */, __this);
		return L_0;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::<Downup>b__10_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3CDownupU3Eb__10_0_mD63D7604FD6AA4023B771AF17D33B5F42599E4FA (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_1 = __this->___topdown_func_18;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* >::Invoke(59 /* System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::ApplyOnce(System.Object,System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::<Downup>b__10_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeRewriter_U3CDownupU3Eb__10_1_mBA534F769C502DC0F8E94D84492F1F5FEAEBA1FA (TreeRewriter_t22CF69ADF16908B1F712A4722CDE331714E4CA67* __this, RuntimeObject* ___o0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___o0;
		Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* L_1 = __this->___bottomup_func_19;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, Func_1_t9BCE09B419BB196D04FC9CB7D5260051833D1CC1* >::Invoke(60 /* System.Object Naninovel.Antlr.Runtime.Tree.TreeRewriter::ApplyRepeatedly(System.Object,System.Func`1<Naninovel.Antlr.Runtime.IAstRuleReturnScope>) */, __this, L_0, L_1);
		return L_2;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_mEB228E145392A29C9758D4DB14F8B7E0BE1F8FB6 (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeVisitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeVisitor__ctor_m36D70A1A5CDFE23142CBC63D79F13274E9285990 (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_0 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_0, NULL);
		TreeVisitor__ctor_mEB228E145392A29C9758D4DB14F8B7E0BE1F8FB6(__this, L_0, NULL);
		return;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,Naninovel.Antlr.Runtime.Tree.ITreeVisitorAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_mEC19329BFB8F4AA34B8CCA6D240B86967463FFAE (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___t0, RuntimeObject* ___action1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeVisitorAction_t5EFDF630CA417F5C1A4A1EEE56C6D235EB1F55AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___adaptor_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::IsNil(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		RuntimeObject* L_3 = ___action1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_5 = ___action1;
		RuntimeObject* L_6 = ___t0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeVisitorAction::Pre(System.Object) */, ITreeVisitorAction_t5EFDF630CA417F5C1A4A1EEE56C6D235EB1F55AB_il2cpp_TypeInfo_var, L_5, L_6);
		___t0 = L_7;
	}

IL_001c:
	{
		V_1 = 0;
		goto IL_003b;
	}

IL_0020:
	{
		RuntimeObject* L_8 = __this->___adaptor_0;
		RuntimeObject* L_9 = ___t0;
		int32_t L_10 = V_1;
		NullCheck(L_8);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		V_2 = L_11;
		RuntimeObject* L_12 = V_2;
		RuntimeObject* L_13 = ___action1;
		RuntimeObject* L_14;
		L_14 = TreeVisitor_Visit_mEC19329BFB8F4AA34B8CCA6D240B86967463FFAE(__this, L_12, L_13, NULL);
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_003b:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->___adaptor_0;
		RuntimeObject* L_18 = ___t0;
		NullCheck(L_17);
		int32_t L_19;
		L_19 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_17, L_18);
		if ((((int32_t)L_16) < ((int32_t)L_19)))
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_20 = ___action1;
		if (!L_20)
		{
			goto IL_0059;
		}
	}
	{
		bool L_21 = V_0;
		if (L_21)
		{
			goto IL_0059;
		}
	}
	{
		RuntimeObject* L_22 = ___action1;
		RuntimeObject* L_23 = ___t0;
		NullCheck(L_22);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(1 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeVisitorAction::Post(System.Object) */, ITreeVisitorAction_t5EFDF630CA417F5C1A4A1EEE56C6D235EB1F55AB_il2cpp_TypeInfo_var, L_22, L_23);
		___t0 = L_24;
	}

IL_0059:
	{
		RuntimeObject* L_25 = ___t0;
		return L_25;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeVisitor::Visit(System.Object,System.Func`2<System.Object,System.Object>,System.Func`2<System.Object,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeVisitor_Visit_m5B34A0AF0F1DBEE5218CE8C209DC93E73E008262 (TreeVisitor_t690129F647A8DAAE2CF818F771EAC10792DB786D* __this, RuntimeObject* ___t0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___preAction1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___postAction2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_1 = ___preAction1;
		Func_2_tACBF5A1656250800CE861707354491F0611F6624* L_2 = ___postAction2;
		TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E* L_3 = (TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E*)il2cpp_codegen_object_new(TreeVisitorAction_t49AC23BE0F1477E9AA09F46126F81232C5E3089E_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreeVisitorAction__ctor_m54B817949B928135FC0EABC053E4044FDC5C7A46(L_3, L_1, L_2, NULL);
		RuntimeObject* L_4;
		L_4 = TreeVisitor_Visit_mEC19329BFB8F4AA34B8CCA6D240B86967463FFAE(__this, L_0, L_3, NULL);
		return L_4;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m85C7FAEDBC06CF9E8A068822111250B553B3A187 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___adaptor0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.Collections.Generic.IDictionary`2<System.String,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_m9AF66DE334136F8F5082D73486AEE06C399FFE2F (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___adaptor0, RuntimeObject* ___tokenNameToTypeMap1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		RuntimeObject* L_1 = ___tokenNameToTypeMap1;
		__this->___tokenNameToTypeMap_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenNameToTypeMap_1), (void*)L_1);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::.ctor(Naninovel.Antlr.Runtime.Tree.ITreeAdaptor,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_mB100388BED86A336AFB2EB103C3969BECA4C5035 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___adaptor0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		RuntimeObject* L_0 = ___adaptor0;
		__this->___adaptor_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___adaptor_0), (void*)L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames1;
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* >::Invoke(4 /* System.Collections.Generic.IDictionary`2<System.String,System.Int32> Naninovel.Antlr.Runtime.Tree.TreeWizard::ComputeTokenTypes(System.String[]) */, __this, L_1);
		__this->___tokenNameToTypeMap_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tokenNameToTypeMap_1), (void*)L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::.ctor(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard__ctor_mBDF87DFD71DC8EF06E0ECFEBF1C20EADF6129015 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D* L_0 = (CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D*)il2cpp_codegen_object_new(CommonTreeAdaptor_t65C7264CC6D350BCF37331851151ACC880B7065D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(L_0, NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames0;
		TreeWizard__ctor_mB100388BED86A336AFB2EB103C3969BECA4C5035(__this, L_0, L_1, NULL);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Int32> Naninovel.Antlr.Runtime.Tree.TreeWizard::ComputeTokenTypes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_ComputeTokenTypes_mA360F6EE52B21D6DD75653DFC23A1A1B95399775 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___tokenNames0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588* L_0 = (Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588*)il2cpp_codegen_object_new(Dictionary_2_t5C8F46F5D57502270DD9E1DA8303B23C7FE85588_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968(L_0, Dictionary_2__ctor_mA3C3860EDE2CDD08BBD68C389377BC89D029D968_RuntimeMethod_var);
		V_0 = L_0;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = ___tokenNames0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		return L_2;
	}

IL_000b:
	{
		V_1 = 4;
		goto IL_001f;
	}

IL_000f:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = ___tokenNames0;
		int32_t L_4 = V_1;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_2 = L_6;
		RuntimeObject* L_7 = V_0;
		String_t* L_8 = V_2;
		int32_t L_9 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_7, L_8, L_9);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_001f:
	{
		int32_t L_11 = V_1;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = ___tokenNames0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))
		{
			goto IL_000f;
		}
	}
	{
		RuntimeObject* L_13 = V_0;
		return L_13;
	}
}
// System.Int32 Naninovel.Antlr.Runtime.Tree.TreeWizard::GetTokenType(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TreeWizard_GetTokenType_mCACEDACAB859392233A606AAFFEDCBF4CD8104C7 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, String_t* ___tokenName0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = __this->___tokenNameToTypeMap_1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		RuntimeObject* L_1 = __this->___tokenNameToTypeMap_1;
		String_t* L_2 = ___tokenName0;
		NullCheck(L_1);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t5C4290778CA46AC0D34115680868E2442B40FD1E_il2cpp_TypeInfo_var, L_1, L_2, (&V_0));
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		int32_t L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		return 0;
	}
}
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList> Naninovel.Antlr.Runtime.Tree.TreeWizard::Index(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Index_m2BE8568A92566D821CE92281CBCD11EB040736F0 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A* L_0 = (Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A*)il2cpp_codegen_object_new(Dictionary_2_t611F67CAFE1E361CE1FAD387C950F5BE5D106A0A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5(L_0, Dictionary_2__ctor_m41CE364387C4E5027C7121E011B74D117FF388D5_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___t0;
		RuntimeObject* L_2 = V_0;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>) */, __this, L_1, L_2);
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_IndexCore_m6F3BBCFC1E07A0E6E84492A7763983F978DCC24B (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, RuntimeObject* ___m1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_1, L_2);
		V_0 = L_3;
		RuntimeObject* L_4 = ___m1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var, L_4, L_5, (&V_1));
		if (!L_6)
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_7 = V_1;
		if (L_7)
		{
			goto IL_002d;
		}
	}

IL_001f:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_8 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_8, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_1 = L_8;
		RuntimeObject* L_9 = ___m1;
		int32_t L_10 = V_0;
		RuntimeObject* L_11 = V_1;
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>::set_Item(TKey,TValue) */, IDictionary_2_t1DBD907AB48E2E0C407A1C0A5CE54723973A82A9_il2cpp_TypeInfo_var, L_9, L_10, L_11);
	}

IL_002d:
	{
		RuntimeObject* L_12 = V_1;
		RuntimeObject* L_13 = ___t0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_12, L_13);
		RuntimeObject* L_15 = __this->___adaptor_0;
		RuntimeObject* L_16 = ___t0;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_15, L_16);
		V_2 = L_17;
		V_3 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		RuntimeObject* L_18 = __this->___adaptor_0;
		RuntimeObject* L_19 = ___t0;
		int32_t L_20 = V_3;
		NullCheck(L_18);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_18, L_19, L_20);
		V_4 = L_21;
		RuntimeObject* L_22 = V_4;
		RuntimeObject* L_23 = ___m1;
		VirtualActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(6 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::IndexCore(System.Object,System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.IList>) */, __this, L_22, L_23);
		int32_t L_24 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0062:
	{
		int32_t L_25 = V_3;
		int32_t L_26 = V_2;
		if ((((int32_t)L_25) < ((int32_t)L_26)))
		{
			goto IL_0046;
		}
	}
	{
		return;
	}
}
// System.Collections.IList Naninovel.Antlr.Runtime.Tree.TreeWizard::Find(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Find_m03598B583B02E13CD039C48EB4859B914FD3FE41 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, int32_t ___ttype1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___t0;
		int32_t L_2 = ___ttype1;
		RuntimeObject* L_3 = V_0;
		FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5* L_4 = (FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5*)il2cpp_codegen_object_new(FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		FindTreeWizardVisitor__ctor_m2C4692BB5AF5859912AED3108C84F7EF9A2C61B3(L_4, L_3, NULL);
		TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3(__this, L_1, L_2, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		return L_5;
	}
}
// System.Collections.IList Naninovel.Antlr.Runtime.Tree.TreeWizard::Find(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Find_m998C1DFE008A388635BE6AA9FACD83182103D4AA (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_0, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_0 = L_0;
		String_t* L_1 = ___pattern1;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_2 = (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1*)il2cpp_codegen_object_new(TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2(L_2, L_1, NULL);
		TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* L_3 = (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternTreeAdaptor__ctor_m3525DEAB917A3049AAEB95AE4B1C2A3D2A3A41E4(L_3, NULL);
		TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* L_4 = (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468*)il2cpp_codegen_object_new(TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5(L_4, L_2, __this, L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_4);
		V_1 = ((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_5, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var));
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_6 = V_1;
		if (!L_6)
		{
			goto IL_0044;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_7 = V_1;
		NullCheck(L_7);
		bool L_8;
		L_8 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean Naninovel.Antlr.Runtime.Tree.BaseTree::get_IsNil() */, L_7);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_9 = V_1;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_10, L_12, NULL);
		if (!L_13)
		{
			goto IL_0046;
		}
	}

IL_0044:
	{
		return (RuntimeObject*)NULL;
	}

IL_0046:
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_Type() */, L_14);
		V_2 = L_15;
		RuntimeObject* L_16 = ___t0;
		int32_t L_17 = V_2;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_18 = V_1;
		RuntimeObject* L_19 = V_0;
		FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0* L_20 = (FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0*)il2cpp_codegen_object_new(FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		FindTreeWizardContextVisitor__ctor_mDB8A043FBE6D57EDBBB9C77EBB881427CA8F8F16(L_20, __this, L_18, L_19, NULL);
		TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3(__this, L_16, L_17, L_20, NULL);
		RuntimeObject* L_21 = V_0;
		return L_21;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeWizard::FindFirst(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_FindFirst_mAE092A9B2430A32640906E819136E4E47FC33D26 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, int32_t ___ttype1, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeWizard::FindFirst(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_FindFirst_m124E89825C98D7F4F1227E6A646635566911154B (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	{
		return NULL;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, int32_t ___ttype1, RuntimeObject* ___visitor2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		int32_t L_1 = ___ttype1;
		RuntimeObject* L_2 = ___visitor2;
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject* >::Invoke(11 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor) */, __this, L_0, NULL, 0, L_1, L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.Int32,System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m25D983EBFAEF609990090326119CDA46C3632BBE (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, int32_t ___ttype1, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___t0;
		int32_t L_1 = ___ttype1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___action2;
		ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9* L_3 = (ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9*)il2cpp_codegen_object_new(ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ActionVisitor__ctor_mA54724A48DCD23F4F99938218AED4A57C5FCE003(L_3, L_2, NULL);
		TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3(__this, L_0, L_1, L_3, NULL);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_VisitCore_m6708512CC4AFB2D3C25968F612AA4C1CC17771D5 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, int32_t ___ttype3, RuntimeObject* ___visitor4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = ___t0;
		if (L_0)
		{
			goto IL_0004;
		}
	}
	{
		return;
	}

IL_0004:
	{
		RuntimeObject* L_1 = __this->___adaptor_0;
		RuntimeObject* L_2 = ___t0;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_1, L_2);
		int32_t L_4 = ___ttype3;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_5 = ___visitor4;
		RuntimeObject* L_6 = ___t0;
		RuntimeObject* L_7 = ___parent1;
		int32_t L_8 = ___childIndex2;
		NullCheck(L_5);
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(0 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760_il2cpp_TypeInfo_var, L_5, L_6, L_7, L_8, (RuntimeObject*)NULL);
	}

IL_001f:
	{
		RuntimeObject* L_9 = __this->___adaptor_0;
		RuntimeObject* L_10 = ___t0;
		NullCheck(L_9);
		int32_t L_11;
		L_11 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_9, L_10);
		V_0 = L_11;
		V_1 = 0;
		goto IL_004f;
	}

IL_0030:
	{
		RuntimeObject* L_12 = __this->___adaptor_0;
		RuntimeObject* L_13 = ___t0;
		int32_t L_14 = V_1;
		NullCheck(L_12);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		V_2 = L_15;
		RuntimeObject* L_16 = V_2;
		RuntimeObject* L_17 = ___t0;
		int32_t L_18 = V_1;
		int32_t L_19 = ___ttype3;
		RuntimeObject* L_20 = ___visitor4;
		VirtualActionInvoker5< RuntimeObject*, RuntimeObject*, int32_t, int32_t, RuntimeObject* >::Invoke(11 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::VisitCore(System.Object,System.Object,System.Int32,System.Int32,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor) */, __this, L_16, L_17, L_18, L_19, L_20);
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_004f:
	{
		int32_t L_22 = V_1;
		int32_t L_23 = V_0;
		if ((((int32_t)L_22) < ((int32_t)L_23)))
		{
			goto IL_0030;
		}
	}
	{
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard::Visit(System.Object,System.String,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreeWizard_Visit_m18EA778BC302992F0DD27B02BF8F32C9CC53A719 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___visitor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___pattern1;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_1 = (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1*)il2cpp_codegen_object_new(TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2(L_1, L_0, NULL);
		TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* L_2 = (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternTreeAdaptor__ctor_m3525DEAB917A3049AAEB95AE4B1C2A3D2A3A41E4(L_2, NULL);
		TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* L_3 = (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468*)il2cpp_codegen_object_new(TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		V_0 = ((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_4, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var));
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_5 = V_0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = VirtualFuncInvoker0< bool >::Invoke(36 /* System.Boolean Naninovel.Antlr.Runtime.Tree.BaseTree::get_IsNil() */, L_6);
		if (L_7)
		{
			goto IL_003e;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_8 = V_0;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		if (!L_12)
		{
			goto IL_003f;
		}
	}

IL_003e:
	{
		return;
	}

IL_003f:
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_13 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_13, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_1 = L_13;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_14 = V_0;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_Type() */, L_14);
		V_2 = L_15;
		RuntimeObject* L_16 = ___t0;
		int32_t L_17 = V_2;
		RuntimeObject* L_18 = ___visitor2;
		RuntimeObject* L_19 = V_1;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_20 = V_0;
		VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882* L_21 = (VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882*)il2cpp_codegen_object_new(VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		VisitTreeWizardContextVisitor__ctor_m8B2E4B15223AC7B698829A4C626351440A915F1D(L_21, __this, L_18, L_19, L_20, NULL);
		TreeWizard_Visit_m87084A137D23247A2D2A69DE5C1C489EE7A44AB3(__this, L_16, L_17, L_21, NULL);
		return;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_m54815BAE860584041F851FACCD71C369F0DE343E (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* V_0 = NULL;
	{
		String_t* L_0 = ___pattern1;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_1 = (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1*)il2cpp_codegen_object_new(TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2(L_1, L_0, NULL);
		TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* L_2 = (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78*)il2cpp_codegen_object_new(TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TreePatternTreeAdaptor__ctor_m3525DEAB917A3049AAEB95AE4B1C2A3D2A3A41E4(L_2, NULL);
		TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* L_3 = (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468*)il2cpp_codegen_object_new(TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		V_0 = ((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_4, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var));
		RuntimeObject* L_5 = ___t0;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_6 = V_0;
		RuntimeObject* L_7 = ___labels2;
		bool L_8;
		L_8 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, __this, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::Parse(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Parse_m69BBA2A86584BA66D1BB1D5DCF666DE90876EB2F (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t0, String_t* ___pattern1, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		String_t* L_1 = ___pattern1;
		bool L_2;
		L_2 = TreeWizard_Parse_m54815BAE860584041F851FACCD71C369F0DE343E(__this, L_0, L_1, (RuntimeObject*)NULL, NULL);
		return L_2;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_ParseCore_m3AA058E7D482BEEA82AB0F638CB0B757C5582A74 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t10, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ___tpattern1, RuntimeObject* ___labels2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* V_4 = NULL;
	{
		RuntimeObject* L_0 = ___t10;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_1 = ___tpattern1;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)0;
	}

IL_0008:
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_2 = ___tpattern1;
		NullCheck(L_2);
		Type_t* L_3;
		L_3 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_2, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_4 = { reinterpret_cast<intptr_t> (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_4, NULL);
		bool L_6;
		L_6 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_3, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_7 = __this->___adaptor_0;
		RuntimeObject* L_8 = ___t10;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_7, L_8);
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_10 = ___tpattern1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(41 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_Type() */, L_10);
		if ((((int32_t)L_9) == ((int32_t)L_11)))
		{
			goto IL_0035;
		}
	}
	{
		return (bool)0;
	}

IL_0035:
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_12 = ___tpattern1;
		NullCheck(L_12);
		bool L_13 = L_12->___hasTextArg_9;
		if (!L_13)
		{
			goto IL_0058;
		}
	}
	{
		RuntimeObject* L_14 = __this->___adaptor_0;
		RuntimeObject* L_15 = ___t10;
		NullCheck(L_14);
		String_t* L_16;
		L_16 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_14, L_15);
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_17 = ___tpattern1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(43 /* System.String Naninovel.Antlr.Runtime.Tree.BaseTree::get_Text() */, L_17);
		NullCheck(L_16);
		bool L_19;
		L_19 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_16, L_18, NULL);
		if (L_19)
		{
			goto IL_0058;
		}
	}
	{
		return (bool)0;
	}

IL_0058:
	{
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_20 = ___tpattern1;
		NullCheck(L_20);
		String_t* L_21 = L_20->___label_8;
		if (!L_21)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_22 = ___labels2;
		if (!L_22)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_23 = ___labels2;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_24 = ___tpattern1;
		NullCheck(L_24);
		String_t* L_25 = L_24->___label_8;
		RuntimeObject* L_26 = ___t10;
		NullCheck(L_23);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_23, L_25, L_26);
	}

IL_0070:
	{
		RuntimeObject* L_27 = __this->___adaptor_0;
		RuntimeObject* L_28 = ___t10;
		NullCheck(L_27);
		int32_t L_29;
		L_29 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_27, L_28);
		V_0 = L_29;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_30 = ___tpattern1;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = VirtualFuncInvoker0< int32_t >::Invoke(31 /* System.Int32 Naninovel.Antlr.Runtime.Tree.BaseTree::get_ChildCount() */, L_30);
		V_1 = L_31;
		int32_t L_32 = V_0;
		int32_t L_33 = V_1;
		if ((((int32_t)L_32) == ((int32_t)L_33)))
		{
			goto IL_008a;
		}
	}
	{
		return (bool)0;
	}

IL_008a:
	{
		V_2 = 0;
		goto IL_00bc;
	}

IL_008e:
	{
		RuntimeObject* L_34 = __this->___adaptor_0;
		RuntimeObject* L_35 = ___t10;
		int32_t L_36 = V_2;
		NullCheck(L_34);
		RuntimeObject* L_37;
		L_37 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_34, L_35, L_36);
		V_3 = L_37;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_38 = ___tpattern1;
		int32_t L_39 = V_2;
		NullCheck(L_38);
		RuntimeObject* L_40;
		L_40 = VirtualFuncInvoker1< RuntimeObject*, int32_t >::Invoke(49 /* Naninovel.Antlr.Runtime.Tree.ITree Naninovel.Antlr.Runtime.Tree.BaseTree::GetChild(System.Int32) */, L_38, L_39);
		V_4 = ((TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)CastclassClass((RuntimeObject*)L_40, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var));
		RuntimeObject* L_41 = V_3;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_42 = V_4;
		RuntimeObject* L_43 = ___labels2;
		bool L_44;
		L_44 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, __this, L_41, L_42, L_43);
		if (L_44)
		{
			goto IL_00b8;
		}
	}
	{
		return (bool)0;
	}

IL_00b8:
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_00bc:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = V_0;
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_008e;
		}
	}
	{
		return (bool)1;
	}
}
// System.Object Naninovel.Antlr.Runtime.Tree.TreeWizard::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreeWizard_Create_mAB9EC7EC178E77FB93935269A5F6845D9F5F41C7 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, String_t* ___pattern0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___pattern0;
		TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1* L_1 = (TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1*)il2cpp_codegen_object_new(TreePatternLexer_t51D4035B7CFC675F343CBFE8A42F0DB1238821C1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePatternLexer__ctor_m949E9C81E09F353DC2BF086EC13856283DFE7EF2(L_1, L_0, NULL);
		RuntimeObject* L_2 = __this->___adaptor_0;
		TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468* L_3 = (TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468*)il2cpp_codegen_object_new(TreePatternParser_tB678D0BDB885E2CBC1122C22B7792CD77D5BD468_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TreePatternParser__ctor_mECD18C89022D5C19924E71E31A530D5B59C013B5(L_3, L_1, __this, L_2, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Object Naninovel.Antlr.Runtime.Tree.TreePatternParser::Pattern() */, L_3);
		return L_4;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::Equals(System.Object,System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Equals_m5F3DBC50D64F163FA4B38DC5BA79EE7C3E4C3CFD (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t10;
		RuntimeObject* L_1 = ___t21;
		RuntimeObject* L_2 = ___adaptor2;
		bool L_3;
		L_3 = TreeWizard_EqualsCore_m33BE6F00B1DB67181BCACA605552CFB6CBA57368(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_Equals_mF1DEFF6146D5C452C848D105E2BC381FD8B1CE51 (TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* __this, RuntimeObject* ___t10, RuntimeObject* ___t21, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t10;
		RuntimeObject* L_1 = ___t21;
		RuntimeObject* L_2 = __this->___adaptor_0;
		bool L_3;
		L_3 = TreeWizard_EqualsCore_m33BE6F00B1DB67181BCACA605552CFB6CBA57368(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::EqualsCore(System.Object,System.Object,Naninovel.Antlr.Runtime.Tree.ITreeAdaptor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TreeWizard_EqualsCore_m33BE6F00B1DB67181BCACA605552CFB6CBA57368 (RuntimeObject* ___t10, RuntimeObject* ___t21, RuntimeObject* ___adaptor2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	{
		RuntimeObject* L_0 = ___t10;
		if (!L_0)
		{
			goto IL_0006;
		}
	}
	{
		RuntimeObject* L_1 = ___t21;
		if (L_1)
		{
			goto IL_0008;
		}
	}

IL_0006:
	{
		return (bool)0;
	}

IL_0008:
	{
		RuntimeObject* L_2 = ___adaptor2;
		RuntimeObject* L_3 = ___t10;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_2, L_3);
		RuntimeObject* L_5 = ___adaptor2;
		RuntimeObject* L_6 = ___t21;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(18 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetType(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_5, L_6);
		if ((((int32_t)L_4) == ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		RuntimeObject* L_8 = ___adaptor2;
		RuntimeObject* L_9 = ___t10;
		NullCheck(L_8);
		String_t* L_10;
		L_10 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeObject* L_11 = ___adaptor2;
		RuntimeObject* L_12 = ___t21;
		NullCheck(L_11);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(20 /* System.String Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetText(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_11, L_12);
		NullCheck(L_10);
		bool L_14;
		L_14 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_10, L_13, NULL);
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		return (bool)0;
	}

IL_0031:
	{
		RuntimeObject* L_15 = ___adaptor2;
		RuntimeObject* L_16 = ___t10;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_15, L_16);
		V_0 = L_17;
		RuntimeObject* L_18 = ___adaptor2;
		RuntimeObject* L_19 = ___t21;
		NullCheck(L_18);
		int32_t L_20;
		L_20 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(29 /* System.Int32 Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChildCount(System.Object) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_18, L_19);
		V_1 = L_20;
		int32_t L_21 = V_0;
		int32_t L_22 = V_1;
		if ((((int32_t)L_21) == ((int32_t)L_22)))
		{
			goto IL_0047;
		}
	}
	{
		return (bool)0;
	}

IL_0047:
	{
		V_2 = 0;
		goto IL_006b;
	}

IL_004b:
	{
		RuntimeObject* L_23 = ___adaptor2;
		RuntimeObject* L_24 = ___t10;
		int32_t L_25 = V_2;
		NullCheck(L_23);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_23, L_24, L_25);
		RuntimeObject* L_27 = ___adaptor2;
		RuntimeObject* L_28 = ___t21;
		int32_t L_29 = V_2;
		NullCheck(L_27);
		RuntimeObject* L_30;
		L_30 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, int32_t >::Invoke(26 /* System.Object Naninovel.Antlr.Runtime.Tree.ITreeAdaptor::GetChild(System.Object,System.Int32) */, ITreeAdaptor_tCD135154ED24CCE2486D0560021520CEC37977AC_il2cpp_TypeInfo_var, L_27, L_28, L_29);
		V_3 = L_30;
		RuntimeObject* L_31 = V_3;
		RuntimeObject* L_32 = ___adaptor2;
		bool L_33;
		L_33 = TreeWizard_EqualsCore_m33BE6F00B1DB67181BCACA605552CFB6CBA57368(L_26, L_31, L_32, NULL);
		if (L_33)
		{
			goto IL_0067;
		}
	}
	{
		return (bool)0;
	}

IL_0067:
	{
		int32_t L_34 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
	}

IL_006b:
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) < ((int32_t)L_36)))
		{
			goto IL_004b;
		}
	}
	{
		return (bool)1;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor_Visit_mC2A7B4FEEBAC991FA332748644DB1794B35672B3 (Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___labels3, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___t0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(6 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor::Visit(System.Object) */, __this, L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/Visitor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Visitor__ctor_mA2A159D9FBA890462F8DCBF04761647F42CBFD16 (Visitor_t38BEBC12C4C9B9A98545654C00E8E2ED3D1EE111* __this, const RuntimeMethod* method) 
{
	{
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor::.ctor(System.Action`1<System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor__ctor_mA54724A48DCD23F4F99938218AED4A57C5FCE003 (ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, const RuntimeMethod* method) 
{
	{
		Visitor__ctor_mA2A159D9FBA890462F8DCBF04761647F42CBFD16(__this, NULL);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = ___action0;
		__this->____action_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_0), (void*)L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/ActionVisitor::Visit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionVisitor_Visit_mC382BA5FE86BDF0E1213C386F5590C14CBB90611 (ActionVisitor_t38E4B83612E1C9611FD7EED244EC489AE57B8EC9* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	{
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = __this->____action_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_0, L_1, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePattern__ctor_m3B65F6F7A31ABFA281BC0B0E34D886795C23EE45 (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___payload0;
		CommonTree__ctor_m791BBE6F2DB124C9B6492424703F2875B12B5A60(__this, L_0, NULL);
		return;
	}
}
// System.String Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TreePattern_ToString_m963F61C7635C90B3180B4A73178B6A065306E4C6 (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = __this->___label_8;
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		String_t* L_1 = __this->___label_8;
		String_t* L_2;
		L_2 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral6C066B34F4DB79023C0642AFBC43B25A5327F710, L_1, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, NULL);
		return L_2;
	}

IL_001e:
	{
		String_t* L_3;
		L_3 = CommonTree_ToString_mA708DAF611564A0A35288F904D9191A91C9633D9(__this, NULL);
		return L_3;
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/WildcardTreePattern::.ctor(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WildcardTreePattern__ctor_mC3351595003439E57078415EB30A33E32461DEE1 (WildcardTreePattern_tFF2E0FB3D800CA1DEDF03D430BF28D13C52774DD* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___payload0;
		TreePattern__ctor_m3B65F6F7A31ABFA281BC0B0E34D886795C23EE45(__this, L_0, NULL);
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
// System.Object Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::Create(Naninovel.Antlr.Runtime.IToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TreePatternTreeAdaptor_Create_m14401921F94D29B08A19CE1A1276CAD5513F6C95 (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* __this, RuntimeObject* ___payload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___payload0;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_1 = (TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*)il2cpp_codegen_object_new(TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		TreePattern__ctor_m3B65F6F7A31ABFA281BC0B0E34D886795C23EE45(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePatternTreeAdaptor::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TreePatternTreeAdaptor__ctor_m3525DEAB917A3049AAEB95AE4B1C2A3D2A3A41E4 (TreePatternTreeAdaptor_t092F86695A18E0BDB70395B8E19685C3EE20AA78* __this, const RuntimeMethod* method) 
{
	{
		CommonTreeAdaptor__ctor_m2036D7DC608A1C3AD2FD7A0D072778DAA00E8F7A(__this, NULL);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::.ctor(System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor__ctor_m2C4692BB5AF5859912AED3108C84F7EF9A2C61B3 (FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5* __this, RuntimeObject* ___nodes0, const RuntimeMethod* method) 
{
	{
		Visitor__ctor_mA2A159D9FBA890462F8DCBF04761647F42CBFD16(__this, NULL);
		RuntimeObject* L_0 = ___nodes0;
		__this->____nodes_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_0), (void*)L_0);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardVisitor::Visit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardVisitor_Visit_m2226D072793F268335832B91B5B2CAA2F852E27A (FindTreeWizardVisitor_t0337BF33447257912D81CD912E0E491A551BBCF5* __this, RuntimeObject* ___t0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____nodes_0;
		RuntimeObject* L_1 = ___t0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_0, L_1);
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.IList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor__ctor_mDB8A043FBE6D57EDBBB9C77EBB881427CA8F8F16 (FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0* __this, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___outer0, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ___tpattern1, RuntimeObject* ___subtrees2, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_0 = ___outer0;
		__this->____outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outer_0), (void*)L_0);
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_1 = ___tpattern1;
		__this->____tpattern_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tpattern_1), (void*)L_1);
		RuntimeObject* L_2 = ___subtrees2;
		__this->____subtrees_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____subtrees_2), (void*)L_2);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/FindTreeWizardContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FindTreeWizardContextVisitor_Visit_m1A140F9C1866DED0A53D886C314F82E8145ADA9A (FindTreeWizardContextVisitor_tFAECEA8F88E82C8D4A38FD59503DA16E15A1E1B0* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___labels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_0 = __this->____outer_0;
		RuntimeObject* L_1 = ___t0;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_2 = __this->____tpattern_1;
		NullCheck(L_0);
		bool L_3;
		L_3 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, L_0, L_1, L_2, (RuntimeObject*)NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = __this->____subtrees_2;
		RuntimeObject* L_5 = ___t0;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker1< int32_t, RuntimeObject* >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_4, L_5);
	}

IL_0022:
	{
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
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::.ctor(Naninovel.Antlr.Runtime.Tree.TreeWizard,Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor,System.Collections.Generic.IDictionary`2<System.String,System.Object>,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor__ctor_m8B2E4B15223AC7B698829A4C626351440A915F1D (VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882* __this, TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* ___outer0, RuntimeObject* ___visitor1, RuntimeObject* ___labels2, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* ___tpattern3, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_0 = ___outer0;
		__this->____outer_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____outer_0), (void*)L_0);
		RuntimeObject* L_1 = ___visitor1;
		__this->____visitor_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____visitor_1), (void*)L_1);
		RuntimeObject* L_2 = ___labels2;
		__this->____labels_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____labels_2), (void*)L_2);
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_3 = ___tpattern3;
		__this->____tpattern_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____tpattern_3), (void*)L_3);
		return;
	}
}
// System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/VisitTreeWizardContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisitTreeWizardContextVisitor_Visit_mFD83585A9CFEB99D07FCDE2E0324927DF872F5C6 (VisitTreeWizardContextVisitor_t89D4D8F7D10A44D857A400FFDD5DAC72F5799882* __this, RuntimeObject* ___t0, RuntimeObject* ___parent1, int32_t ___childIndex2, RuntimeObject* ___unusedlabels3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->____labels_2;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::Clear() */, ICollection_1_t7FAFDB77857BA6F1396E710E9F065944B2183233_il2cpp_TypeInfo_var, L_0);
		TreeWizard_tE7BBC24BB4D62321AF545E44DAFBB94007CECBA2* L_1 = __this->____outer_0;
		RuntimeObject* L_2 = ___t0;
		TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB* L_3 = __this->____tpattern_3;
		RuntimeObject* L_4 = __this->____labels_2;
		NullCheck(L_1);
		bool L_5;
		L_5 = VirtualFuncInvoker3< bool, RuntimeObject*, TreePattern_tD0A5EA355D05EA6972DDE5566C7647FEEF3C90DB*, RuntimeObject* >::Invoke(12 /* System.Boolean Naninovel.Antlr.Runtime.Tree.TreeWizard::ParseCore(System.Object,Naninovel.Antlr.Runtime.Tree.TreeWizard/TreePattern,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, L_1, L_2, L_3, L_4);
		if (!L_5)
		{
			goto IL_0039;
		}
	}
	{
		RuntimeObject* L_6 = __this->____visitor_1;
		RuntimeObject* L_7 = ___t0;
		RuntimeObject* L_8 = ___parent1;
		int32_t L_9 = ___childIndex2;
		RuntimeObject* L_10 = __this->____labels_2;
		NullCheck(L_6);
		InterfaceActionInvoker4< RuntimeObject*, RuntimeObject*, int32_t, RuntimeObject* >::Invoke(0 /* System.Void Naninovel.Antlr.Runtime.Tree.TreeWizard/IContextVisitor::Visit(System.Object,System.Object,System.Int32,System.Collections.Generic.IDictionary`2<System.String,System.Object>) */, IContextVisitor_t7A7209DBC559C5797DFA875A945159CB56C9F760_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9, L_10);
	}

IL_0039:
	{
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m7A2A0F2E0DDFB1F6B7951AC8582263B9CBF708B7 (String_t* ___s0, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___s0;
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		V_0 = ((int32_t)-2128831035);
		V_1 = 0;
		goto IL_0021;
	}

IL_000d:
	{
		String_t* L_1 = ___s0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		uint32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)((int32_t)L_3^(int32_t)L_4)), ((int32_t)16777619)));
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_5, 1));
	}

IL_0021:
	{
		int32_t L_6 = V_1;
		String_t* L_7 = ___s0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_000d;
		}
	}

IL_002a:
	{
		uint32_t L_9 = V_0;
		return L_9;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Token_mC178E1F55F1B5648D204B95C24E2BA7A0C1F081D_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____token_20;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CommonTree_get_Token_m10F20AB5AD8492A865F52F4AEF28E03C000177EE_inline (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____token_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CommonTree_set_Token_m5C44B97E181D117DC07CADC9C482DA240F25C8D9_inline (CommonTree_t4050E66A749FB81DE9BF49AB07508B459D131635* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____token_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____token_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTree_set_CharPositionInLine_m84DA301B0BEC2A1B3ED42BFC534CF8540C6A56E5_inline (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CCharPositionInLineU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void BaseTree_set_Line_mC5B034A71A406BD98D8FCB78963D4FB1CAF06AF9_inline (BaseTree_tA5E694613E33757225BCDF12B72756ED886DDAD7* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CLineU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* TreeIterator_get_Current_m42D86210F6AD013AD1E49910806BDEEBDE72F610_inline (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TreeIterator_set_Current_m5059ED810E3A69E40421D24E9FF28B959399FDFB_inline (TreeIterator_t2D8062CD768D0CE458AC3AA6FFFDA352A1CD138A* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Input_m55BDB7B65770B52CF09D6F50E41E4F472DD37926_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____input_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool RecognitionException_get_ApproximateLineInfo_mA8D853CA00BF861073DD8063881349437B64EFFA_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->____approximateLineInfo_25;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_Line_m91F378A869C33E954B55F1191A783EF06271C43F_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____line_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t RecognitionException_get_CharPositionInLine_mCC278826CEB26FA320F7E261570BFEFD41824CF4_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____charPositionInLine_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* RecognitionException_get_Node_mEA7C009E9F1056CE1F2C97B6A498AE909C8CF1C8_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____node_21;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void RecognitionException_set_Token_mEAFBA2A05A0C47E1077AC55D4EAA63CD30E906BB_inline (RecognitionException_tB96EB68610D517E4089D77D195E38740F2252760* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->____token_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____token_20), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_2_Invoke_mDBA25DA5DA5B7E056FB9B026AF041F1385FB58A9_gshared_inline (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___arg0, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___arg0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
