﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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

// System.Collections.Generic.Dictionary`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef>
struct Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Uri[]
struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D;
// System.Xml.XPath.XPathItem[]
struct XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB;
// System.Xml.XPath.XPathNavigator[]
struct XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0;
// MS.Internal.Xml.Cache.XPathNode[]
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
// System.Xml.Schema.XmlAtomicValue[]
struct XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409;
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1;
// System.Xml.Schema.XmlTypeCode[]
struct XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Exception
struct Exception_t;
// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IList
struct IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Xml.Schema.SchemaElementDecl
struct SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.TimeZoneInfo
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8;
// System.Type
struct Type_t;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Xml.XPath.XPathDocument
struct XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE;
// MS.Internal.Xml.Cache.XPathDocumentNavigator
struct XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81;
// System.Xml.XPath.XPathItem
struct XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7;
// System.Xml.XPath.XPathNavigator
struct XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13;
// System.Xml.XPath.XPathNavigatorKeyComparer
struct XPathNavigatorKeyComparer_t9E68DA4BC364ECF19858E14AECCE74476362F185;
// MS.Internal.Xml.Cache.XPathNode
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA;
// MS.Internal.Xml.Cache.XPathNodeInfoAtom
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE;
// MS.Internal.Xml.Cache.XPathNodePageInfo
struct XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460;
// System.Xml.Schema.XmlAnyListConverter
struct XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6;
// System.Xml.Schema.XmlAtomicValue
struct XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56;
// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8;
// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9;
// System.Xml.Schema.XmlSchemaDatatype
struct XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// System.TimeZoneInfo/CachedData
struct CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName
struct NamespacePrefixForQName_t580351778384A947979FD4D091BD043347482C3D;
// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate
struct HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bits_t4D52329DF865E191908AE96952B27312B4FD1355_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DurationType_tD4A0AE07CC0C51C05B70E801ABF6EE88FAE8D8F9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XsdDateTimeFlags_t69F10B0961FFA92954C37D538C4B5D5FAD9F1F76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F_2_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A;
IL2CPP_EXTERN_C String_t* _stringLiteral0A068BB3E9EA2EA72CF05B963841C49DBA8EEFF5;
IL2CPP_EXTERN_C String_t* _stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544;
IL2CPP_EXTERN_C String_t* _stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60;
IL2CPP_EXTERN_C String_t* _stringLiteral1F164EE4DE39AD90666ACDB4EA0CAABA7853CFCF;
IL2CPP_EXTERN_C String_t* _stringLiteral2198F1C92174A1B44CB01773603D23F6671D3329;
IL2CPP_EXTERN_C String_t* _stringLiteral356F18017512A760F46C8C6E41C462F76716509F;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8;
IL2CPP_EXTERN_C String_t* _stringLiteral57E00753C198BBF933B5B117333FD89AF5A3E48B;
IL2CPP_EXTERN_C String_t* _stringLiteral58F2B4A0A3F5D63532995796ECF46099320B370D;
IL2CPP_EXTERN_C String_t* _stringLiteral5F79376E49FC345D1F74769B7D1E538AE10FAE5C;
IL2CPP_EXTERN_C String_t* _stringLiteral68D5513A81FE3BA8EC49159C52E6505DA8BEA242;
IL2CPP_EXTERN_C String_t* _stringLiteral6912992FC50D2764B34BA8408AECF2DF5DB8080F;
IL2CPP_EXTERN_C String_t* _stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E;
IL2CPP_EXTERN_C String_t* _stringLiteral8243BA18D267E0E612210F4920079D9700A5DEEF;
IL2CPP_EXTERN_C String_t* _stringLiteral878AE10D03D16A069554617545B8533ED09E594F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D04002FC7142DC7148763C90BB38AEEC554A158;
IL2CPP_EXTERN_C String_t* _stringLiteral9104E82394351D786F4B739689D0B28ACF18A43D;
IL2CPP_EXTERN_C String_t* _stringLiteral92094BBD8DE1A81022C0FCA98F179197BA588E99;
IL2CPP_EXTERN_C String_t* _stringLiteralA3A680A717A901731935F51F62C0FDFEF792BDD2;
IL2CPP_EXTERN_C String_t* _stringLiteralA3E0185CFEE766D02511A6B411F83832EC44A795;
IL2CPP_EXTERN_C String_t* _stringLiteralAC2806EA40D9F7601BBB6DA354C649B46D2D8877;
IL2CPP_EXTERN_C String_t* _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158;
IL2CPP_EXTERN_C String_t* _stringLiteralC171503077BD6B1C438A3FEA9F31DB637C7C763A;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF956214D83EED9D9B576DA1D727BD145303948;
IL2CPP_EXTERN_C String_t* _stringLiteralCCD15A133CD38F3DFFFA94FA4D720EAC91F25B79;
IL2CPP_EXTERN_C String_t* _stringLiteralCE9BB7116C03E5DA9D01F8D4803A0FFE9ADA5307;
IL2CPP_EXTERN_C String_t* _stringLiteralD20945EB99E4CFCA27A66866A791F9AE0B7E4EBB;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A16BBDB1662D7361031D5B9686BD4A9DD7F9D6;
IL2CPP_EXTERN_C String_t* _stringLiteralD67729AC2AE2B39DBBC387BDA1A36503B0C922C1;
IL2CPP_EXTERN_C String_t* _stringLiteralD83041E889BDAEB8F029AF50549D1347BD7FC949;
IL2CPP_EXTERN_C String_t* _stringLiteralDB6A30F5C46ACC70D2AD58ABFB2A19A8F675C314;
IL2CPP_EXTERN_C String_t* _stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9;
IL2CPP_EXTERN_C String_t* _stringLiteralE33B655BD7CA37454FF89A8C0BDA6B8196C65A77;
IL2CPP_EXTERN_C String_t* _stringLiteralE358F823C39A638A3134E442FF53D303271291F3;
IL2CPP_EXTERN_C String_t* _stringLiteralF2EE2B9C299895393EAD54EEC93812CB500B915F;
IL2CPP_EXTERN_C String_t* _stringLiteralF54F5AD89BFF7ACC574BFC039F72C349137EC667;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlAnyListConverter_ChangeType_m1BE4913561E1287C94B093B9EBFB153F32655F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ChangeListType_mE0AAB3D151C68A0D04C45239AC2899272F009220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ChangeType_m630DCB9CD3B6B383341BA451EAAA25F165B6B66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m5A92ADE94AF281EA92D6BAB353B07CC8678E1163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisString_t_m760B10F90DDB9E8CC982DBED257FD374FDB9BFD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisUri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_mC960C31453A4D44C56084C07A27DDFDD471D481B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisXPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7_m9AEBD985069D1257E3688F670B37F877EBC65AC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisXPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_mFEE720231EF096E7F5D07E837631DB2B74AE1C78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisXmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56_mB44E5366B1E0B70FFB508B81AB1EEEACA8A24FB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XmlListConverter_ToArray_TisXmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_m82FE10DFE44A5AC048DB1E0634CD5C619C419814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA;;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com;;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke;;

struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D;
struct XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB;
struct XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0;
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C;
struct XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409;
struct XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1;
struct XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;
};

struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_StaticFields
{
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_28;
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

// System.Xml.XPath.XPathDocument
struct XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE  : public RuntimeObject
{
	// MS.Internal.Xml.Cache.XPathNode[] System.Xml.XPath.XPathDocument::pageXmlNmsp
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageXmlNmsp_0;
	// System.Int32 System.Xml.XPath.XPathDocument::idxXmlNmsp
	int32_t ___idxXmlNmsp_1;
	// System.Xml.XmlNameTable System.Xml.XPath.XPathDocument::nameTable
	XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* ___nameTable_2;
	// System.Collections.Generic.Dictionary`2<MS.Internal.Xml.Cache.XPathNodeRef,MS.Internal.Xml.Cache.XPathNodeRef> System.Xml.XPath.XPathDocument::mapNmsp
	Dictionary_2_t51690F8426AE5C5CDFF18B8E1108DED306E49456* ___mapNmsp_3;
};

// System.Xml.XPath.XPathItem
struct XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7  : public RuntimeObject
{
};

// MS.Internal.Xml.Cache.XPathNodeHelper
struct XPathNodeHelper_tB93370F363F95DB3F7721FD51C4B502E841A4CDF  : public RuntimeObject
{
};

// MS.Internal.Xml.Cache.XPathNodeInfoAtom
struct XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE  : public RuntimeObject
{
	// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::_localName
	String_t* ____localName_0;
	// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::_namespaceUri
	String_t* ____namespaceUri_1;
	// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::_prefix
	String_t* ____prefix_2;
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::_pageParent
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____pageParent_3;
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::_pageSibling
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____pageSibling_4;
	// System.Xml.XPath.XPathDocument MS.Internal.Xml.Cache.XPathNodeInfoAtom::_doc
	XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* ____doc_5;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::_lineNumBase
	int32_t ____lineNumBase_6;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::_linePosBase
	int32_t ____linePosBase_7;
	// MS.Internal.Xml.Cache.XPathNodePageInfo MS.Internal.Xml.Cache.XPathNodeInfoAtom::_pageInfo
	XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* ____pageInfo_8;
};

// MS.Internal.Xml.Cache.XPathNodePageInfo
struct XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460  : public RuntimeObject
{
	// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::_pageNum
	int32_t ____pageNum_0;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::_nodeCount
	int32_t ____nodeCount_1;
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodePageInfo::_pageNext
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____pageNext_2;
};

// System.Xml.XmlNameTable
struct XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8  : public RuntimeObject
{
};

// System.Xml.XmlQualifiedName
struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9  : public RuntimeObject
{
	// System.String System.Xml.XmlQualifiedName::name
	String_t* ___name_1;
	// System.String System.Xml.XmlQualifiedName::ns
	String_t* ___ns_2;
	// System.Int32 System.Xml.XmlQualifiedName::hash
	int32_t ___hash_3;
};

struct XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_StaticFields
{
	// System.Xml.XmlQualifiedName/HashCodeOfStringDelegate System.Xml.XmlQualifiedName::hashCodeDelegate
	HashCodeOfStringDelegate_t25F1FA9B737C4313ED341BA7AAB31694DC3669DA* ___hashCodeDelegate_0;
	// System.Xml.XmlQualifiedName System.Xml.XmlQualifiedName::Empty
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___Empty_4;
};

// System.Xml.Schema.XmlSchemaObject
struct XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D  : public RuntimeObject
{
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// System.Xml.XPath.XPathNavigator
struct XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13  : public XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7
{
};

struct XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_StaticFields
{
	// System.Xml.XPath.XPathNavigatorKeyComparer System.Xml.XPath.XPathNavigator::comparer
	XPathNavigatorKeyComparer_t9E68DA4BC364ECF19858E14AECCE74476362F185* ___comparer_0;
	// System.Char[] System.Xml.XPath.XPathNavigator::NodeTypeLetter
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___NodeTypeLetter_1;
	// System.Char[] System.Xml.XPath.XPathNavigator::UniqueIdTbl
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___UniqueIdTbl_2;
	// System.Int32[] System.Xml.XPath.XPathNavigator::ContentKindMasks
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___ContentKindMasks_3;
};

// MS.Internal.Xml.Cache.XPathNode
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA 
{
	// MS.Internal.Xml.Cache.XPathNodeInfoAtom MS.Internal.Xml.Cache.XPathNode::_info
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	// System.UInt16 MS.Internal.Xml.Cache.XPathNode::_idxSibling
	uint16_t ____idxSibling_1;
	// System.UInt16 MS.Internal.Xml.Cache.XPathNode::_idxParent
	uint16_t ____idxParent_2;
	// System.UInt16 MS.Internal.Xml.Cache.XPathNode::_idxSimilar
	uint16_t ____idxSimilar_3;
	// System.UInt16 MS.Internal.Xml.Cache.XPathNode::_posOffset
	uint16_t ____posOffset_4;
	// System.UInt32 MS.Internal.Xml.Cache.XPathNode::_props
	uint32_t ____props_5;
	// System.String MS.Internal.Xml.Cache.XPathNode::_value
	String_t* ____value_6;
};
// Native definition for P/Invoke marshalling of MS.Internal.Xml.Cache.XPathNode
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	uint16_t ____idxSibling_1;
	uint16_t ____idxParent_2;
	uint16_t ____idxSimilar_3;
	uint16_t ____posOffset_4;
	uint32_t ____props_5;
	char* ____value_6;
};
// Native definition for COM marshalling of MS.Internal.Xml.Cache.XPathNode
struct XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com
{
	XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* ____info_0;
	uint16_t ____idxSibling_1;
	uint16_t ____idxParent_2;
	uint16_t ____idxSimilar_3;
	uint16_t ____posOffset_4;
	uint32_t ____props_5;
	Il2CppChar* ____value_6;
};

// MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470 
{
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::_page
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____page_0;
	// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::_idx
	int32_t ____idx_1;
};
// Native definition for P/Invoke marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke* ____page_0;
	int32_t ____idx_1;
};
// Native definition for COM marshalling of MS.Internal.Xml.Cache.XPathNodeRef
struct XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com* ____page_0;
	int32_t ____idx_1;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields
{
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t* ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t* ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t* ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t* ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t* ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t* ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t* ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t* ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t* ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t* ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t* ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t* ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t* ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t* ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t* ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t* ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t* ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t* ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t* ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t* ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t* ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t* ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t* ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t* ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t* ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t* ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t* ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t* ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t* ___XPathNavigatorType_31;
};

// System.Xml.Schema.XmlSchemaAnnotated
struct XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04  : public XmlSchemaObject_t82CCD87AADB4BEF4E9DFE4C501F09EDA372AA19D
{
};

// System.Xml.Schema.XsdDuration
struct XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D 
{
	// System.Int32 System.Xml.Schema.XsdDuration::years
	int32_t ___years_0;
	// System.Int32 System.Xml.Schema.XsdDuration::months
	int32_t ___months_1;
	// System.Int32 System.Xml.Schema.XsdDuration::days
	int32_t ___days_2;
	// System.Int32 System.Xml.Schema.XsdDuration::hours
	int32_t ___hours_3;
	// System.Int32 System.Xml.Schema.XsdDuration::minutes
	int32_t ___minutes_4;
	// System.Int32 System.Xml.Schema.XsdDuration::seconds
	int32_t ___seconds_5;
	// System.UInt32 System.Xml.Schema.XsdDuration::nanoseconds
	uint32_t ___nanoseconds_6;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_t19F56A7AF3D022F17A68D7BCFB8C5B9B3447C9A2 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_t19F56A7AF3D022F17A68D7BCFB8C5B9B3447C9A2__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t45FA7AD826373DD55373E339448CCD78B9972F37 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t45FA7AD826373DD55373E339448CCD78B9972F37__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_t53E8F5FD8A825E0BB8AE049758CC2D6F81DBAF27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t53E8F5FD8A825E0BB8AE049758CC2D6F81DBAF27__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D40_tFC7F1E1E35A70007003BD0C82FAE5D368835D304 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D40_tFC7F1E1E35A70007003BD0C82FAE5D368835D304__padding[40];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5__padding[416];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4__padding[6];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t0D59EF5A8C62E67495B2049AFF6D17FADEF0713E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t0D59EF5A8C62E67495B2049AFF6D17FADEF0713E__padding[64];
	};
};
#pragma pack(pop, tp)

// System.Xml.Schema.XsdDateTime/Parser
struct Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 
{
	// System.Xml.Schema.XsdDateTime/DateTimeTypeCode System.Xml.Schema.XsdDateTime/Parser::typeCode
	int32_t ___typeCode_0;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::year
	int32_t ___year_1;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::month
	int32_t ___month_2;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::day
	int32_t ___day_3;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::hour
	int32_t ___hour_4;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::minute
	int32_t ___minute_5;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::second
	int32_t ___second_6;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::fraction
	int32_t ___fraction_7;
	// System.Xml.Schema.XsdDateTime/XsdDateTimeKind System.Xml.Schema.XsdDateTime/Parser::kind
	int32_t ___kind_8;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::zoneHour
	int32_t ___zoneHour_9;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::zoneMinute
	int32_t ___zoneMinute_10;
	// System.String System.Xml.Schema.XsdDateTime/Parser::text
	String_t* ___text_11;
	// System.Int32 System.Xml.Schema.XsdDateTime/Parser::length
	int32_t ___length_12;
};

struct Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_StaticFields
{
	// System.Int32[] System.Xml.Schema.XsdDateTime/Parser::Power10
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Power10_13;
};
// Native definition for P/Invoke marshalling of System.Xml.Schema.XsdDateTime/Parser
struct Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_pinvoke
{
	int32_t ___typeCode_0;
	int32_t ___year_1;
	int32_t ___month_2;
	int32_t ___day_3;
	int32_t ___hour_4;
	int32_t ___minute_5;
	int32_t ___second_6;
	int32_t ___fraction_7;
	int32_t ___kind_8;
	int32_t ___zoneHour_9;
	int32_t ___zoneMinute_10;
	char* ___text_11;
	int32_t ___length_12;
};
// Native definition for COM marshalling of System.Xml.Schema.XsdDateTime/Parser
struct Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_com
{
	int32_t ___typeCode_0;
	int32_t ___year_1;
	int32_t ___month_2;
	int32_t ___day_3;
	int32_t ___hour_4;
	int32_t ___minute_5;
	int32_t ___second_6;
	int32_t ___fraction_7;
	int32_t ___kind_8;
	int32_t ___zoneHour_9;
	int32_t ___zoneMinute_10;
	Il2CppChar* ___text_11;
	int32_t ___length_12;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=40 <PrivateImplementationDetails>::24F70FC64555D9B7646AD4C0EEB8DF5286779F0E39C15ACA61305BC4A5E40BE6
	__StaticArrayInitTypeSizeU3D40_tFC7F1E1E35A70007003BD0C82FAE5D368835D304 ___24F70FC64555D9B7646AD4C0EEB8DF5286779F0E39C15ACA61305BC4A5E40BE6_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6
	__StaticArrayInitTypeSizeU3D28_t45FA7AD826373DD55373E339448CCD78B9972F37 ___499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F
	__StaticArrayInitTypeSizeU3D32_t53E8F5FD8A825E0BB8AE049758CC2D6F81DBAF27 ___9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC
	__StaticArrayInitTypeSizeU3D64_t0D59EF5A8C62E67495B2049AFF6D17FADEF0713E ___AD6E77E234021D825C77689D82D414CDA3ABAE1ACC346D4BA2D6B1876CFC5FBC_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9
	__StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 ___D1D9AF18AFC4E3074AF5E4C44B81B73889D033D7AF6DFEB387BBCC76B36FE8B9_4;
	// System.Int64 <PrivateImplementationDetails>::DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51
	int64_t ___DACC0E6568D9B10337A1A693F10D42C3175E80C378154406C6FBFA989F919F51_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=416 <PrivateImplementationDetails>::DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660
	__StaticArrayInitTypeSizeU3D416_tDAAA72EB80DBA06129AAA1F57A4CF148B4458AA5 ___DB7DD2341DB9D4574E432AAAFF03FB0A3E8FF2F645A337077EDF0C6FE902E660_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=6 <PrivateImplementationDetails>::DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D
	__StaticArrayInitTypeSizeU3D6_t6B2CCEB1D7CF8B1F02780951EBD798284272BFE4 ___DBBF94CCF4250B303976041627BB8FC302CE57D55373C469F41F97318412037D_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::FFF813C50ED1BEC943E2CA58860CC34E0A14A5C0E858B97C7670A384005CC064
	__StaticArrayInitTypeSizeU3D20_t19F56A7AF3D022F17A68D7BCFB8C5B9B3447C9A2 ___FFF813C50ED1BEC943E2CA58860CC34E0A14A5C0E858B97C7670A384005CC064_8;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// System.RuntimeFieldHandle
struct RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 
{
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.TimeZoneInfo
struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8  : public RuntimeObject
{
	// System.String System.TimeZoneInfo::_id
	String_t* ____id_0;
	// System.String System.TimeZoneInfo::_displayName
	String_t* ____displayName_1;
	// System.String System.TimeZoneInfo::_standardDisplayName
	String_t* ____standardDisplayName_2;
	// System.String System.TimeZoneInfo::_daylightDisplayName
	String_t* ____daylightDisplayName_3;
	// System.TimeSpan System.TimeZoneInfo::_baseUtcOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____baseUtcOffset_4;
	// System.Boolean System.TimeZoneInfo::_supportsDaylightSavingTime
	bool ____supportsDaylightSavingTime_5;
	// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::_adjustmentRules
	AdjustmentRuleU5BU5D_tE06E08FC55F09158CD673CE867C3771D92906DFA* ____adjustmentRules_6;
};

struct TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_StaticFields
{
	// System.TimeZoneInfo System.TimeZoneInfo::s_utcTimeZone
	TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* ___s_utcTimeZone_7;
	// System.TimeZoneInfo/CachedData System.TimeZoneInfo::s_cachedData
	CachedData_t369B36942C95D8657719006E55DEA9EB23E03CFF* ___s_cachedData_8;
	// System.DateTime System.TimeZoneInfo::s_maxDateOnly
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_maxDateOnly_9;
	// System.DateTime System.TimeZoneInfo::s_minDateOnly
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___s_minDateOnly_10;
	// System.TimeSpan System.TimeZoneInfo::MaxOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxOffset_11;
	// System.TimeSpan System.TimeZoneInfo::MinOffset
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinOffset_12;
};

// MS.Internal.Xml.Cache.XPathDocumentNavigator
struct XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81  : public XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13
{
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathDocumentNavigator::_pageCurrent
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____pageCurrent_4;
	// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathDocumentNavigator::_pageParent
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ____pageParent_5;
	// System.Int32 MS.Internal.Xml.Cache.XPathDocumentNavigator::_idxCurrent
	int32_t ____idxCurrent_6;
	// System.Int32 MS.Internal.Xml.Cache.XPathDocumentNavigator::_idxParent
	int32_t ____idxParent_7;
};

// System.Xml.Schema.XmlAnyConverter
struct XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
};

struct XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_StaticFields
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlAnyConverter::Item
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___Item_32;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlAnyConverter::AnyAtomic
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___AnyAtomic_33;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF  : public XmlSchemaAnnotated_t41DBE9DF8776C6C639B33A712F25497C672B4E04
{
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::final
	int32_t ___final_0;
	// System.Xml.Schema.XmlSchemaDerivationMethod System.Xml.Schema.XmlSchemaType::derivedBy
	int32_t ___derivedBy_1;
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlSchemaType::baseSchemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___baseSchemaType_2;
	// System.Xml.Schema.XmlSchemaDatatype System.Xml.Schema.XmlSchemaType::datatype
	XmlSchemaDatatype_t715572E6E9C9A145DBBF5DDF345EFA5D3AA3E34D* ___datatype_3;
	// System.Xml.Schema.SchemaElementDecl modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::elementDecl
	SchemaElementDecl_t985EC0AC51DF3E0339341916D061539CF41846AD* ___elementDecl_4;
	// System.Xml.XmlQualifiedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Xml.Schema.XmlSchemaType::qname
	XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* ___qname_5;
	// System.Xml.Schema.XmlSchemaContentType System.Xml.Schema.XmlSchemaType::contentType
	int32_t ___contentType_6;
};

// System.Xml.Schema.XmlTypeCode
struct XmlTypeCode_tCA027FC382F4E2DBDF63CB305D942DDFC072E064 
{
	// System.Int32 System.Xml.Schema.XmlTypeCode::value__
	int32_t ___value___2;
};

// System.Xml.Schema.XsdDateTime
struct XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB 
{
	// System.DateTime System.Xml.Schema.XsdDateTime::dt
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt_0;
	// System.UInt32 System.Xml.Schema.XsdDateTime::extra
	uint32_t ___extra_1;
};

struct XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields
{
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy
	int32_t ___Lzyyyy_2;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_
	int32_t ___Lzyyyy__3;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM
	int32_t ___Lzyyyy_MM_4;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_
	int32_t ___Lzyyyy_MM__5;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_dd
	int32_t ___Lzyyyy_MM_dd_6;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lzyyyy_MM_ddT
	int32_t ___Lzyyyy_MM_ddT_7;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH
	int32_t ___LzHH_8;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_
	int32_t ___LzHH__9;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm
	int32_t ___LzHH_mm_10;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm_
	int32_t ___LzHH_mm__11;
	// System.Int32 System.Xml.Schema.XsdDateTime::LzHH_mm_ss
	int32_t ___LzHH_mm_ss_12;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_
	int32_t ___Lz__13;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz
	int32_t ___Lz_zz_14;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz_
	int32_t ___Lz_zz__15;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz_zz_zz
	int32_t ___Lz_zz_zz_16;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__
	int32_t ___Lz___17;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm
	int32_t ___Lz__mm_18;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm_
	int32_t ___Lz__mm__19;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm__
	int32_t ___Lz__mm___20;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz__mm_dd
	int32_t ___Lz__mm_dd_21;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz___
	int32_t ___Lz____22;
	// System.Int32 System.Xml.Schema.XsdDateTime::Lz___dd
	int32_t ___Lz___dd_23;
	// System.Xml.Schema.XmlTypeCode[] System.Xml.Schema.XsdDateTime::typeCodes
	XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41* ___typeCodes_24;
};
// Native definition for P/Invoke marshalling of System.Xml.Schema.XsdDateTime
struct XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_pinvoke
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt_0;
	uint32_t ___extra_1;
};
// Native definition for COM marshalling of System.Xml.Schema.XsdDateTime
struct XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_com
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dt_0;
	uint32_t ___extra_1;
};

// System.Xml.Schema.XmlAtomicValue/Union
#pragma pack(push, tp, 1)
struct Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B 
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Boolean System.Xml.Schema.XmlAtomicValue/Union::boolVal
					bool ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					bool ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Double System.Xml.Schema.XmlAtomicValue/Union::dblVal
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int64 System.Xml.Schema.XmlAtomicValue/Union::i64Val
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.Int32 System.Xml.Schema.XmlAtomicValue/Union::i32Val
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					// System.DateTime System.Xml.Schema.XmlAtomicValue/Union::dtVal
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B__padding[8];
	};
};
#pragma pack(pop, tp)
// Native definition for P/Invoke marshalling of System.Xml.Schema.XmlAtomicValue/Union
struct Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshaled_pinvoke
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B__padding[8];
	};
};
// Native definition for COM marshalling of System.Xml.Schema.XmlAtomicValue/Union
struct Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B_marshaled_com
{
	union
	{
		struct
		{
			union
			{
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___boolVal_0;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___boolVal_0_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					double ___dblVal_1;
				};
				#pragma pack(pop, tp)
				struct
				{
					double ___dblVal_1_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int64_t ___i64Val_2;
				};
				#pragma pack(pop, tp)
				struct
				{
					int64_t ___i64Val_2_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					int32_t ___i32Val_3;
				};
				#pragma pack(pop, tp)
				struct
				{
					int32_t ___i32Val_3_forAlignmentOnly;
				};
				#pragma pack(push, tp, 1)
				struct
				{
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4;
				};
				#pragma pack(pop, tp)
				struct
				{
					DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dtVal_4_forAlignmentOnly;
				};
			};
		};
		uint8_t Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B__padding[8];
	};
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

// System.Xml.Schema.XmlAnyListConverter
struct XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6  : public XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA
{
};

struct XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlAnyListConverter::ItemList
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___ItemList_33;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlAnyListConverter::AnyAtomicList
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___AnyAtomicList_34;
};

// System.Xml.Schema.XmlAtomicValue
struct XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56  : public XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlAtomicValue::xmlType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___xmlType_0;
	// System.Object System.Xml.Schema.XmlAtomicValue::objVal
	RuntimeObject* ___objVal_1;
	// System.TypeCode System.Xml.Schema.XmlAtomicValue::clrType
	int32_t ___clrType_2;
	// System.Xml.Schema.XmlAtomicValue/Union System.Xml.Schema.XmlAtomicValue::unionVal
	Union_tB0D56D753DC8A0B45FCAF1229929BAA3E2B9293B ___unionVal_3;
	// System.Xml.Schema.XmlAtomicValue/NamespacePrefixForQName System.Xml.Schema.XmlAtomicValue::nsPrefix
	NamespacePrefixForQName_t580351778384A947979FD4D091BD043347482C3D* ___nsPrefix_4;
};

// System.Xml.Schema.XmlUntypedConverter
struct XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703  : public XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA
{
	// System.Boolean System.Xml.Schema.XmlUntypedConverter::allowListToList
	bool ___allowListToList_33;
};

struct XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_StaticFields
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlUntypedConverter::Untyped
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___Untyped_34;
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlUntypedConverter::UntypedList
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___UntypedList_35;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.FormatException
struct FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidCastException
struct InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
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
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA  : public RuntimeArray
{
	ALIGN_FIELD (8) ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* m_Items[1];

	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D m_Items[1];

	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 m_Items[1];

	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615  : public RuntimeArray
{
	ALIGN_FIELD (8) Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F m_Items[1];

	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Uri[]
struct UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D  : public RuntimeArray
{
	ALIGN_FIELD (8) Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* m_Items[1];

	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.Schema.XmlAtomicValue[]
struct XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409  : public RuntimeArray
{
	ALIGN_FIELD (8) XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56* m_Items[1];

	inline XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.XmlQualifiedName[]
struct XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1  : public RuntimeArray
{
	ALIGN_FIELD (8) XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* m_Items[1];

	inline XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.XPath.XPathItem[]
struct XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB  : public RuntimeArray
{
	ALIGN_FIELD (8) XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7* m_Items[1];

	inline XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Xml.XPath.XPathNavigator[]
struct XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0  : public RuntimeArray
{
	ALIGN_FIELD (8) XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* m_Items[1];

	inline XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Schema.XmlTypeCode[]
struct XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// MS.Internal.Xml.Cache.XPathNode[]
struct XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C  : public RuntimeArray
{
	ALIGN_FIELD (8) XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA m_Items[1];

	inline XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____info_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_6), (void*)NULL);
		#endif
	}
	inline XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____info_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->____value_6), (void*)NULL);
		#endif
	}
};

IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup(XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com_back(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled);
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com_cleanup(XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled);

// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;

// System.Void System.Xml.Schema.XmlListConverter::.ctor(System.Xml.Schema.XmlBaseConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlListConverter__ctor_mCA63578E7441F5966685695A7BF7653645AAE5C3 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___atomicConverter0, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Boolean System.Type::op_Equality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XmlAnyListConverter::.ctor(System.Xml.Schema.XmlBaseConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAnyListConverter__ctor_mE39C5C71DDEDA4AF0C31FF46DAA625173F08AC0C (XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___atomicConverter0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XmlBaseConverter::.ctor(System.Xml.Schema.XmlBaseConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseConverter__ctor_mFEDD317203AB0DD55B906FAE9FE5DE9EA48C47D1 (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___converterAtomic0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XmlBaseConverter::.ctor(System.Xml.Schema.XmlBaseConverter,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseConverter__ctor_m04DD9808F74F7DE24B7660BB9C97265494061E27 (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___converterAtomic0, Type_t* ___clrTypeDefault1, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlBaseConverter__ctor_mF610DA8AF9A17AF29F8421EEF72A1E34C26CA684 (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType0, const RuntimeMethod* method) ;
// System.Type System.Xml.Schema.XmlBaseConverter::get_DefaultClrType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* XmlBaseConverter_get_DefaultClrType_mE8954A45D93CC608AEC14D795E83104D0F7BDCDF_inline (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XmlListConverter::IsListType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlListConverter_IsListType_m21C7A6B5F57551FF2D989720667EF4E1D9E1399F (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// System.Exception System.Xml.Schema.XmlListConverter::CreateInvalidClrMappingException(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlListConverter_CreateInvalidClrMappingException_m6D579969524A99137757F66105F72C9DFB83B0B1 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, Type_t* ___sourceType0, Type_t* ___destinationType1, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XmlListConverter::ListAsString(System.Collections.IEnumerable,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlListConverter_ListAsString_m48242450B8AF496252BB093BB75E86D8C274A19B (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> System.Xml.Schema.XmlListConverter::StringAsList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* XmlListConverter_StringAsList_m3E1DDA543BC8CBEB3D5FE7741297A4B15EA5EF14 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Type::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
inline BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte[]>(System.Object,System.Xml.IXmlNamespaceResolver)
inline ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* XmlListConverter_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m5A92ADE94AF281EA92D6BAB353B07CC8678E1163 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
inline DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
inline DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
inline DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
inline Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
inline Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
inline Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
inline SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
inline SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.String>(System.Object,System.Xml.IXmlNamespaceResolver)
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlListConverter_ToArray_TisString_t_m760B10F90DDB9E8CC982DBED257FD374FDB9BFD9 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
inline TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
inline UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
inline UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
inline UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Uri>(System.Object,System.Xml.IXmlNamespaceResolver)
inline UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D* XmlListConverter_ToArray_TisUri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_mC960C31453A4D44C56084C07A27DDFDD471D481B (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Xml.Schema.XmlAtomicValue>(System.Object,System.Xml.IXmlNamespaceResolver)
inline XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409* XmlListConverter_ToArray_TisXmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56_mB44E5366B1E0B70FFB508B81AB1EEEACA8A24FB9 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Xml.XmlQualifiedName>(System.Object,System.Xml.IXmlNamespaceResolver)
inline XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1* XmlListConverter_ToArray_TisXmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_m82FE10DFE44A5AC048DB1E0634CD5C619C419814 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Xml.XPath.XPathItem>(System.Object,System.Xml.IXmlNamespaceResolver)
inline XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB* XmlListConverter_ToArray_TisXPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7_m9AEBD985069D1257E3688F670B37F877EBC65AC6 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Xml.XPath.XPathNavigator>(System.Object,System.Xml.IXmlNamespaceResolver)
inline XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0* XmlListConverter_ToArray_TisXPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_mFEE720231EF096E7F5D07E837631DB2B74AE1C78 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method)
{
	return ((  XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0* (*) (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared)(__this, ___list0, ___nsResolver1, method);
}
// System.Boolean System.Type::op_Inequality(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172 (Type_t* ___left0, Type_t* ___right1, const RuntimeMethod* method) ;
// System.Collections.IList System.Xml.Schema.XmlListConverter::ToList(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlListConverter_ToList_m2770032A553C42EA62A43232A06D8784826B4668 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
inline void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
inline void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.String[] System.Xml.XmlConvert::SplitString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* XmlConvert_SplitString_mA7AA35B88D14E59B173FCA6406B408EF3C83F02D (String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8 (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XmlBaseConverter::get_XmlTypeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlBaseConverter_get_XmlTypeName_mB124A8F50E08E3BAF80ECEE1C9218FABF3CD83D7 (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Res::GetString(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83 (String_t* ___name0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void System.InvalidCastException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644 (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method) ;
// System.Void System.FormatException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::InitiateXsdDateTime(System.Xml.Schema.XsdDateTime/Parser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.Xml.Schema.XsdDateTime/Parser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m9D9086E04F4BF6D3C09746A40FE8811B3CF4CA88 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddTicks(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___value0, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Bits::LeastPosition(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Bits_LeastPosition_mE02945243BB6CC1C04FDE6B963BB351319E03B50 (uint32_t ___num0, const RuntimeMethod* method) ;
// System.DateTimeKind System.DateTime::get_Kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F (const RuntimeMethod* method) ;
// System.TimeSpan System.TimeZoneInfo::GetUtcOffset(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0 (TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, const RuntimeMethod* method) ;
// System.Int64 System.TimeSpan::get_Ticks()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.DateTime,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m9EE15399BB38384CC624A7079BA193790D121712 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, int32_t ___kinds1, const RuntimeMethod* method) ;
// System.DateTime System.DateTimeOffset::get_DateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTimeOffset::get_Offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4 (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalMinutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.TimeSpan::Negate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A TimeSpan_Negate_m3BF3036191A2FDC35250891CD82AD3283A13ABB4 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.DateTimeOffset,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m127DD6E3D834498A172B1FD34DD1AC4505C7AA4C (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___dateTimeOffset0, int32_t ___kinds1, const RuntimeMethod* method) ;
// System.Xml.Schema.XsdDateTime/DateTimeTypeCode System.Xml.Schema.XsdDateTime::get_InternalTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Xml.Schema.XsdDateTime/XsdDateTimeKind System.Xml.Schema.XsdDateTime::get_InternalKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Hour_mE4B191CD33490CA5BC5EA87E00314FA50BDB741A (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Minute_m38120FA2B75440A56BD49C552DDD3032D9A6DFA6 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Second_m46202D39713A213E9F514CD4E2F5F04C5278780F (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int64 System.DateTime::get_Ticks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_Fraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Fraction_m40D9B327318B0D061E02D59889E0919A95EB9098 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_ZoneHour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDateTime::get_ZoneMinute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Add(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int64,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int64_t ___ticks0, int32_t ___kind1, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int32_t ___hours0, int32_t ___minutes1, int32_t ___seconds2, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::ToLocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTimeOffset__ctor_m6E6938BD1F5EEE0F96247339B75FB7CEF3665FDC (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___offset1, const RuntimeMethod* method) ;
// System.Void System.TimeSpan::.ctor(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5 (StringBuilder_t* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::PrintDate(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::PrintTime(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::IntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::ShortToCharArray(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456 (StringBuilder_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___value0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDateTime::PrintZone(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintZone_mA1766FF80B24A4E1D666DBB8C818C01A94330CF6 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XsdDateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDateTime_ToString_m7753E41D2C4A8E0687796143C9220155B9837535 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924 (Il2CppChar ___c0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Test(System.Xml.Schema.XsdDateTimeFlags,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD (int32_t ___left0, int32_t ___right1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseDate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseDate_mDD1FC2A4390DBB0F116BCA9CAA17D3ECE36D90E3 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse4Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse2Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) ;
// System.Int32 System.DateTime::DaysInMonth(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977 (int32_t ___year0, int32_t ___month1, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTime(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t* ___start0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, bool ___isNegative0, int32_t ___years1, int32_t ___months2, int32_t ___days3, int32_t ___hours4, int32_t ___minutes5, int32_t ___seconds6, int32_t ___nanoseconds7, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.TimeSpan,System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m2CE789343F1EE7728BE48C8ABF3392B8ED7BD390 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeSpan0, int32_t ___durationType1, const RuntimeMethod* method) ;
// System.Exception System.Xml.Schema.XsdDuration::TryParse(System.String,System.Xml.Schema.XsdDuration/DurationType,System.Xml.Schema.XsdDuration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryParse_mD1BACB59A72886E68BF87FCFF8A837082F963D96 (String_t* ___s0, int32_t ___durationType1, XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* ___result2, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Years()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Months()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Days()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Hours()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Minutes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Seconds()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.Schema.XsdDuration::get_Nanoseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.Schema.XsdDuration::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.String,System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, String_t* ___s0, int32_t ___durationType1, const RuntimeMethod* method) ;
// System.Exception System.Xml.Schema.XsdDuration::TryToTimeSpan(System.Xml.Schema.XsdDuration/DurationType,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result1, const RuntimeMethod* method) ;
// System.TimeSpan System.Xml.Schema.XsdDuration::ToTimeSpan(System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, const RuntimeMethod* method) ;
// System.Exception System.Xml.Schema.XsdDuration::TryToTimeSpan(System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryToTimeSpan_m7B81B7074288D60D1CB8E15006291E3227BAFBA3 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result0, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XsdDuration::ToString(System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_ToString_mAB96AA9C1E85D555476303E2D1D741B02FD6C698 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XsdDuration::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_ToString_m678A09FD579D77D415021761FE814A1C49A50DFD (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) ;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Length(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414 (StringBuilder_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::set_Chars(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE (StringBuilder_t* __this, int32_t ___index0, Il2CppChar ___value1, const RuntimeMethod* method) ;
// System.Char System.Text.StringBuilder::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D (StringBuilder_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5 (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Xml.Schema.XsdDuration::TryParseDigits(System.String,System.Int32&,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52 (String_t* ___s0, int32_t* ___offset1, bool ___eatDigits2, int32_t* ___result3, int32_t* ___numDigits4, const RuntimeMethod* method) ;
// System.Void System.Xml.XPath.XPathNavigator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathNavigator__ctor_m2A24E4B324A522498AE39749E6407908C47C8E5C (XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNode::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetNonDescendant(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetNonDescendant_m17C6827FAE5DBF3D5BE22B21BD61CEA7B4D33325 (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, int32_t* ___idxNode1, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetTextFollowing(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&,MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetTextFollowing_mD2608628C95A6AEEEACC719DF15B2A599A8D301D (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageCurrent0, int32_t* ___idxCurrent1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageEnd2, int32_t ___idxEnd3, const RuntimeMethod* method) ;
// System.Void MS.Internal.Xml.Cache.XPathDocumentNavigator::.ctor(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathDocumentNavigator__ctor_m6F90203C3B45DB6A10BB1918689F3D71F26780C6 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageCurrent0, int32_t ___idxCurrent1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageParent2, int32_t ___idxParent3, const RuntimeMethod* method) ;
// System.Xml.XPath.XPathNodeType MS.Internal.Xml.Cache.XPathNode::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNode::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_LocalName_m4C7DCD240996EDE990F6924B176B80008141A367 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNode::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_NamespaceUri_mA7E5CA21E8BCF798FC16E64F94158F54B1C95FC2 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNode::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_Prefix_m499096BCD31E503FF89FDADD69F1C916686BDFA7 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Xml.XPath.XPathDocument MS.Internal.Xml.Cache.XPathNode::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Xml.XmlNameTable System.Xml.XPath.XPathDocument::get_NameTable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XPathDocument_get_NameTable_m0983CA6BD6A2B1368D995E18A6F21ABF9573C4FD_inline (XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetLocalNamespaces(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetLocalNamespaces_m9ECEE0F460FC922C47F60EBA9E68EDA7F94F9A5B (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageElem0, int32_t ___idxElem1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNmsp2, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetInScopeNamespaces(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetInScopeNamespaces_mFD9B23AFBD700ED9BEDAD17B85D9AFE6AA599380 (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageElem0, int32_t ___idxElem1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNmsp2, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_IsXmlNamespaceNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNode::GetSibling(MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNode::GetParent(MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetParent(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetParent_mFCEB1C9F0BC1DE639972E41C4B41520CBCF6CABD (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, int32_t* ___idxNode1, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_CollapsedLinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_CollapsedLinePosition_m5CD8510839F81AE7F411BB1403B460F6EB3BC8DF (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_Prefix()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_Prefix_m288E1BED13375EFD17014F55730E1EE85CE6ACA1_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LocalName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_LocalName_m717A834A1CF042C3AEFCFA4EA2C20D2CD3F53430_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_NamespaceUri()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_NamespaceUri_m4E325FC93F28603B48BEE521FA1A93C426D8C78D_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.Xml.XPath.XPathDocument MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_Document()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNodeInfoAtom_get_Document_m4BE8672A871D25E702E3D77F2A33ED390533EDA1_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LineNumberBase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LineNumberBase_m40A58EB51495E48B1C31F7690E18CC69E15FA86B_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LinePositionBase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LinePositionBase_m2BD56AF6D9527933F43282B7BA215AD8AE10C5FC_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNodePageInfo MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_PageInfo()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNodeInfoAtom_get_PageInfo_m168850BB26701B63DE38924B49F8B5FF0240B602_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNodePageInfo MS.Internal.Xml.Cache.XPathNode::get_PageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_ParentPage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_ParentPage_m6346F715CF977F296915E47A1A23993B878755FC_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_SiblingPage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_SiblingPage_mAD3229A141E5D5B949B4B5F31FB8DB500BD56505_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasSibling_mC8BDEDD3659561E20B769E205BB85377C47537AF (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasCollapsedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Boolean System.Xml.XPath.XPathNavigator::IsText(System.Xml.XPath.XPathNodeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNavigator_IsText_m74E93D0BC5DBD578B5C1CCD25BE436228F0B4610 (int32_t ___type0, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasNamespaceDecls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) ;
// System.Void MS.Internal.Xml.Cache.XPathNodeRef::.ctor(MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathNodeRef__ctor_m14862547984A3EE8A767C1C8415C6E73E3EF30E8 (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___page0, int32_t ___idx1, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::get_Page()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeRef_get_Page_m8624EDC1840BD05BD55D4E8137095B5986ED54F3_inline (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::get_Index()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeRef_get_Index_m37FE9027EA38BDC66D3E83142E7BBEBB18073E33_inline (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetLocation(MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetLocation_m4C6A57E28DFEF5CC9CA55B21CC97044AB01EEC3C (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageNode0, int32_t ___idxNode1, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XPath.XPathDocument::LookupNamespaces(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocument_LookupNamespaces_m2ECE5FBE932A2F9F04DB9A3B9C0603A1F4D4B904 (XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageElem0, int32_t ___idxElem1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNmsp2, const RuntimeMethod* method) ;
// System.Int32 System.Xml.XPath.XPathDocument::GetXmlNamespaceNode(MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocument_GetXmlNamespaceNode_m338B46452B3B4BAEF58DC882EEEAE3CEAF094F39 (XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageXmlNmsp0, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::get_PageNumber()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_PageNumber_m0CF191DCF066234C1A660E76CB8C903779823DD5_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) ;
// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::get_NodeCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_NodeCount_m9A4307635C53F9A47265CD2E0C96BE0E00990C37_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) ;
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodePageInfo::get_NextPage()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodePageInfo_get_NextPage_m464BB6A5FD7F7211D98C952E035BFE8022B115A2_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Xml.Schema.XmlAnyListConverter::.ctor(System.Xml.Schema.XmlBaseConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAnyListConverter__ctor_mE39C5C71DDEDA4AF0C31FF46DAA625173F08AC0C (XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___atomicConverter0, const RuntimeMethod* method) 
{
	{
		XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* L_0 = ___atomicConverter0;
		XmlListConverter__ctor_mCA63578E7441F5966685695A7BF7653645AAE5C3(__this, L_0, NULL);
		return;
	}
}
// System.Object System.Xml.Schema.XmlAnyListConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlAnyListConverter_ChangeType_m1BE4913561E1287C94B093B9EBFB153F32655F61 (XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6* __this, RuntimeObject* ___value0, Type_t* ___destinationType1, RuntimeObject* ___nsResolver2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlAnyListConverter_ChangeType_m1BE4913561E1287C94B093B9EBFB153F32655F61_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54F5AD89BFF7ACC574BFC039F72C349137EC667)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlAnyListConverter_ChangeType_m1BE4913561E1287C94B093B9EBFB153F32655F61_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_5, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)))
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_6 = ___value0;
		NullCheck(L_6);
		Type_t* L_7;
		L_7 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_8 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_7, L_8, NULL);
		if (L_9)
		{
			goto IL_004e;
		}
	}
	{
		RuntimeObject* L_10 = ___value0;
		NullCheck(L_10);
		Type_t* L_11;
		L_11 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_12 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ByteArrayType_27;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_005a;
		}
	}

IL_004e:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = L_14;
		RuntimeObject* L_16 = ___value0;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, L_16);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		___value0 = (RuntimeObject*)L_15;
	}

IL_005a:
	{
		RuntimeObject* L_17 = ___value0;
		Type_t* L_18 = ___destinationType1;
		RuntimeObject* L_19 = ___nsResolver2;
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(62 /* System.Object System.Xml.Schema.XmlBaseConverter::ChangeListType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, __this, L_17, L_18, L_19);
		return L_20;
	}
}
// System.Void System.Xml.Schema.XmlAnyListConverter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlAnyListConverter__cctor_m1F67106EF3FE94964DE1A9DD229A743DC4FBCB7A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_0 = ((XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var))->___Item_32;
		XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6* L_1 = (XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6*)il2cpp_codegen_object_new(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		XmlAnyListConverter__ctor_mE39C5C71DDEDA4AF0C31FF46DAA625173F08AC0C(L_1, ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D*)CastclassClass((RuntimeObject*)L_0, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var)), NULL);
		((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___ItemList_33 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___ItemList_33), (void*)L_1);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_2 = ((XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var))->___AnyAtomic_33;
		XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6* L_3 = (XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6*)il2cpp_codegen_object_new(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		XmlAnyListConverter__ctor_mE39C5C71DDEDA4AF0C31FF46DAA625173F08AC0C(L_3, ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D*)CastclassClass((RuntimeObject*)L_2, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var)), NULL);
		((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___AnyAtomicList_34 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___AnyAtomicList_34), (void*)L_3);
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
// System.Void System.Xml.Schema.XmlListConverter::.ctor(System.Xml.Schema.XmlBaseConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlListConverter__ctor_mCA63578E7441F5966685695A7BF7653645AAE5C3 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___atomicConverter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* L_0 = ___atomicConverter0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		XmlBaseConverter__ctor_mFEDD317203AB0DD55B906FAE9FE5DE9EA48C47D1(__this, L_0, NULL);
		XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* L_1 = ___atomicConverter0;
		__this->___atomicConverter_32 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___atomicConverter_32), (void*)L_1);
		return;
	}
}
// System.Void System.Xml.Schema.XmlListConverter::.ctor(System.Xml.Schema.XmlBaseConverter,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlListConverter__ctor_mC1229A31617E5443F831E698FC7096B4A8874502 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* ___atomicConverter0, Type_t* ___clrTypeDefault1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* L_0 = ___atomicConverter0;
		Type_t* L_1 = ___clrTypeDefault1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		XmlBaseConverter__ctor_m04DD9808F74F7DE24B7660BB9C97265494061E27(__this, L_0, L_1, NULL);
		XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* L_2 = ___atomicConverter0;
		__this->___atomicConverter_32 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___atomicConverter_32), (void*)L_2);
		return;
	}
}
// System.Void System.Xml.Schema.XmlListConverter::.ctor(System.Xml.Schema.XmlSchemaType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XmlListConverter__ctor_mC8B3F9BE510652A2EA2FC249C506605A025401F7 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* L_0 = ___schemaType0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		XmlBaseConverter__ctor_mF610DA8AF9A17AF29F8421EEF72A1E34C26CA684(__this, L_0, NULL);
		return;
	}
}
// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::Create(System.Xml.Schema.XmlValueConverter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* XmlListConverter_Create_m21563D9879C347109B503CCDB2D80449B35F2B91 (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_0 = ___atomicConverter0;
		il2cpp_codegen_runtime_class_init_inline(XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_1 = ((XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_StaticFields*)il2cpp_codegen_static_fields_for(XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var))->___Untyped_34;
		if ((!(((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_0) == ((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_2 = ((XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_StaticFields*)il2cpp_codegen_static_fields_for(XmlUntypedConverter_tB707BD09CB81865831777481D33D744A4E960703_il2cpp_TypeInfo_var))->___UntypedList_35;
		return L_2;
	}

IL_000e:
	{
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_3 = ___atomicConverter0;
		il2cpp_codegen_runtime_class_init_inline(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_4 = ((XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var))->___Item_32;
		if ((!(((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_3) == ((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_4))))
		{
			goto IL_001c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_5 = ((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___ItemList_33;
		return L_5;
	}

IL_001c:
	{
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_6 = ___atomicConverter0;
		il2cpp_codegen_runtime_class_init_inline(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = ((XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyConverter_tBC4927E3D9A1A421B198890D5A743D059855AF0F_il2cpp_TypeInfo_var))->___AnyAtomic_33;
		if ((!(((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_6) == ((RuntimeObject*)(XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)L_7))))
		{
			goto IL_002a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var);
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_8 = ((XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_StaticFields*)il2cpp_codegen_static_fields_for(XmlAnyListConverter_tE66C343653244C4B4B6D98C0C76F26404BE6B6B6_il2cpp_TypeInfo_var))->___AnyAtomicList_34;
		return L_8;
	}

IL_002a:
	{
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_9 = ___atomicConverter0;
		XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* L_10 = (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA*)il2cpp_codegen_object_new(XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		XmlListConverter__ctor_mCA63578E7441F5966685695A7BF7653645AAE5C3(L_10, ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D*)CastclassClass((RuntimeObject*)L_9, XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var)), NULL);
		return L_10;
	}
}
// System.Object System.Xml.Schema.XmlListConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlListConverter_ChangeType_m630DCB9CD3B6B383341BA451EAAA25F165B6B66D (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___value0, Type_t* ___destinationType1, RuntimeObject* ___nsResolver2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral46F273EF641E07D271D91E0DC24A4392582671F8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlListConverter_ChangeType_m630DCB9CD3B6B383341BA451EAAA25F165B6B66D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Type_t* L_2 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, (Type_t*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_4 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_4);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF54F5AD89BFF7ACC574BFC039F72C349137EC667)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlListConverter_ChangeType_m630DCB9CD3B6B383341BA451EAAA25F165B6B66D_RuntimeMethod_var)));
	}

IL_0022:
	{
		RuntimeObject* L_5 = ___value0;
		Type_t* L_6 = ___destinationType1;
		RuntimeObject* L_7 = ___nsResolver2;
		RuntimeObject* L_8;
		L_8 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(62 /* System.Object System.Xml.Schema.XmlBaseConverter::ChangeListType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, __this, L_5, L_6, L_7);
		return L_8;
	}
}
// System.Object System.Xml.Schema.XmlListConverter::ChangeListType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlListConverter_ChangeListType_mE0AAB3D151C68A0D04C45239AC2899272F009220 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___value0, Type_t* ___destinationType1, RuntimeObject* ___nsResolver2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m5A92ADE94AF281EA92D6BAB353B07CC8678E1163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisString_t_m760B10F90DDB9E8CC982DBED257FD374FDB9BFD9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisUri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_mC960C31453A4D44C56084C07A27DDFDD471D481B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisXPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7_m9AEBD985069D1257E3688F670B37F877EBC65AC6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisXPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_mFEE720231EF096E7F5D07E837631DB2B74AE1C78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisXmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56_mB44E5366B1E0B70FFB508B81AB1EEEACA8A24FB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlListConverter_ToArray_TisXmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_m82FE10DFE44A5AC048DB1E0634CD5C619C419814_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		RuntimeObject* L_0 = ___value0;
		NullCheck(L_0);
		Type_t* L_1;
		L_1 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_0, NULL);
		V_0 = L_1;
		Type_t* L_2 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_3 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ObjectType_14;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_001c;
		}
	}
	{
		Type_t* L_5;
		L_5 = XmlBaseConverter_get_DefaultClrType_mE8954A45D93CC608AEC14D795E83104D0F7BDCDF_inline(__this, NULL);
		___destinationType1 = L_5;
	}

IL_001c:
	{
		RuntimeObject* L_6 = ___value0;
		if (!((RuntimeObject*)IsInst((RuntimeObject*)L_6, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)))
		{
			goto IL_002d;
		}
	}
	{
		Type_t* L_7 = ___destinationType1;
		bool L_8;
		L_8 = XmlListConverter_IsListType_m21C7A6B5F57551FF2D989720667EF4E1D9E1399F(__this, L_7, NULL);
		if (L_8)
		{
			goto IL_0036;
		}
	}

IL_002d:
	{
		Type_t* L_9 = V_0;
		Type_t* L_10 = ___destinationType1;
		Exception_t* L_11;
		L_11 = XmlListConverter_CreateInvalidClrMappingException_m6D579969524A99137757F66105F72C9DFB83B0B1(__this, L_9, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlListConverter_ChangeListType_mE0AAB3D151C68A0D04C45239AC2899272F009220_RuntimeMethod_var)));
	}

IL_0036:
	{
		Type_t* L_12 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_13 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0060;
		}
	}
	{
		Type_t* L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_16 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_15, L_16, NULL);
		if (!L_17)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_18 = ___value0;
		return L_18;
	}

IL_0052:
	{
		RuntimeObject* L_19 = ___value0;
		RuntimeObject* L_20 = ___nsResolver2;
		String_t* L_21;
		L_21 = XmlListConverter_ListAsString_m48242450B8AF496252BB093BB75E86D8C274A19B(__this, ((RuntimeObject*)Castclass((RuntimeObject*)L_19, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)), L_20, NULL);
		return L_21;
	}

IL_0060:
	{
		Type_t* L_22 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_23 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_007b;
		}
	}
	{
		RuntimeObject* L_25 = ___value0;
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26;
		L_26 = XmlListConverter_StringAsList_m3E1DDA543BC8CBEB3D5FE7741297A4B15EA5EF14(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_25, String_t_il2cpp_TypeInfo_var)), NULL);
		___value0 = L_26;
	}

IL_007b:
	{
		Type_t* L_27 = ___destinationType1;
		NullCheck(L_27);
		bool L_28;
		L_28 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_27, NULL);
		if (!L_28)
		{
			goto IL_029b;
		}
	}
	{
		Type_t* L_29 = ___destinationType1;
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = VirtualFuncInvoker0< Type_t* >::Invoke(48 /* System.Type System.Type::GetElementType() */, L_29);
		V_1 = L_30;
		Type_t* L_31 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_32 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ObjectType_14;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_31, L_32, NULL);
		if (!L_33)
		{
			goto IL_00a3;
		}
	}
	{
		RuntimeObject* L_34 = ___value0;
		RuntimeObject* L_35 = ___nsResolver2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36;
		L_36 = XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D(__this, L_34, L_35, XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_RuntimeMethod_var);
		return (RuntimeObject*)L_36;
	}

IL_00a3:
	{
		Type_t* L_37 = V_0;
		Type_t* L_38 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_37, L_38, NULL);
		if (!L_39)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeObject* L_40 = ___value0;
		return L_40;
	}

IL_00ae:
	{
		Type_t* L_41 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_42 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___BooleanType_26;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_00c4;
		}
	}
	{
		RuntimeObject* L_44 = ___value0;
		RuntimeObject* L_45 = ___nsResolver2;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_46;
		L_46 = XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6(__this, L_44, L_45, XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_RuntimeMethod_var);
		return (RuntimeObject*)L_46;
	}

IL_00c4:
	{
		Type_t* L_47 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_48 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ByteType_15;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_49;
		L_49 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_47, L_48, NULL);
		if (!L_49)
		{
			goto IL_00da;
		}
	}
	{
		RuntimeObject* L_50 = ___value0;
		RuntimeObject* L_51 = ___nsResolver2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_52;
		L_52 = XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC(__this, L_50, L_51, XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_RuntimeMethod_var);
		return (RuntimeObject*)L_52;
	}

IL_00da:
	{
		Type_t* L_53 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_54 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ByteArrayType_27;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_00f0;
		}
	}
	{
		RuntimeObject* L_56 = ___value0;
		RuntimeObject* L_57 = ___nsResolver2;
		ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* L_58;
		L_58 = XmlListConverter_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m5A92ADE94AF281EA92D6BAB353B07CC8678E1163(__this, L_56, L_57, XmlListConverter_ToArray_TisByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_m5A92ADE94AF281EA92D6BAB353B07CC8678E1163_RuntimeMethod_var);
		return (RuntimeObject*)L_58;
	}

IL_00f0:
	{
		Type_t* L_59 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_60 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___DateTimeType_24;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_59, L_60, NULL);
		if (!L_61)
		{
			goto IL_0106;
		}
	}
	{
		RuntimeObject* L_62 = ___value0;
		RuntimeObject* L_63 = ___nsResolver2;
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_64;
		L_64 = XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B(__this, L_62, L_63, XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_RuntimeMethod_var);
		return (RuntimeObject*)L_64;
	}

IL_0106:
	{
		Type_t* L_65 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_66 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___DateTimeOffsetType_25;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_67;
		L_67 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_66, NULL);
		if (!L_67)
		{
			goto IL_011c;
		}
	}
	{
		RuntimeObject* L_68 = ___value0;
		RuntimeObject* L_69 = ___nsResolver2;
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_70;
		L_70 = XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164(__this, L_68, L_69, XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_RuntimeMethod_var);
		return (RuntimeObject*)L_70;
	}

IL_011c:
	{
		Type_t* L_71 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_72 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___DecimalType_9;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_73;
		L_73 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_71, L_72, NULL);
		if (!L_73)
		{
			goto IL_0132;
		}
	}
	{
		RuntimeObject* L_74 = ___value0;
		RuntimeObject* L_75 = ___nsResolver2;
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_76;
		L_76 = XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048(__this, L_74, L_75, XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_RuntimeMethod_var);
		return (RuntimeObject*)L_76;
	}

IL_0132:
	{
		Type_t* L_77 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_78 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___DoubleType_22;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_79;
		L_79 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_77, L_78, NULL);
		if (!L_79)
		{
			goto IL_0148;
		}
	}
	{
		RuntimeObject* L_80 = ___value0;
		RuntimeObject* L_81 = ___nsResolver2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_82;
		L_82 = XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688(__this, L_80, L_81, XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_RuntimeMethod_var);
		return (RuntimeObject*)L_82;
	}

IL_0148:
	{
		Type_t* L_83 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_84 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___Int16Type_16;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_83, L_84, NULL);
		if (!L_85)
		{
			goto IL_015e;
		}
	}
	{
		RuntimeObject* L_86 = ___value0;
		RuntimeObject* L_87 = ___nsResolver2;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_88;
		L_88 = XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7(__this, L_86, L_87, XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_RuntimeMethod_var);
		return (RuntimeObject*)L_88;
	}

IL_015e:
	{
		Type_t* L_89 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_90 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___Int32Type_10;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_91;
		L_91 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_90, NULL);
		if (!L_91)
		{
			goto IL_0174;
		}
	}
	{
		RuntimeObject* L_92 = ___value0;
		RuntimeObject* L_93 = ___nsResolver2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_94;
		L_94 = XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2(__this, L_92, L_93, XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_RuntimeMethod_var);
		return (RuntimeObject*)L_94;
	}

IL_0174:
	{
		Type_t* L_95 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_96 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___Int64Type_11;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_97;
		L_97 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_95, L_96, NULL);
		if (!L_97)
		{
			goto IL_018a;
		}
	}
	{
		RuntimeObject* L_98 = ___value0;
		RuntimeObject* L_99 = ___nsResolver2;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_100;
		L_100 = XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65(__this, L_98, L_99, XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_RuntimeMethod_var);
		return (RuntimeObject*)L_100;
	}

IL_018a:
	{
		Type_t* L_101 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_102 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___SByteType_17;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_101, L_102, NULL);
		if (!L_103)
		{
			goto IL_01a0;
		}
	}
	{
		RuntimeObject* L_104 = ___value0;
		RuntimeObject* L_105 = ___nsResolver2;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_106;
		L_106 = XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120(__this, L_104, L_105, XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_RuntimeMethod_var);
		return (RuntimeObject*)L_106;
	}

IL_01a0:
	{
		Type_t* L_107 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_108 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___SingleType_23;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_108, NULL);
		if (!L_109)
		{
			goto IL_01b6;
		}
	}
	{
		RuntimeObject* L_110 = ___value0;
		RuntimeObject* L_111 = ___nsResolver2;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_112;
		L_112 = XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7(__this, L_110, L_111, XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_RuntimeMethod_var);
		return (RuntimeObject*)L_112;
	}

IL_01b6:
	{
		Type_t* L_113 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_114 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_115;
		L_115 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_113, L_114, NULL);
		if (!L_115)
		{
			goto IL_01cc;
		}
	}
	{
		RuntimeObject* L_116 = ___value0;
		RuntimeObject* L_117 = ___nsResolver2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_118;
		L_118 = XmlListConverter_ToArray_TisString_t_m760B10F90DDB9E8CC982DBED257FD374FDB9BFD9(__this, L_116, L_117, XmlListConverter_ToArray_TisString_t_m760B10F90DDB9E8CC982DBED257FD374FDB9BFD9_RuntimeMethod_var);
		return (RuntimeObject*)L_118;
	}

IL_01cc:
	{
		Type_t* L_119 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_120 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___TimeSpanType_30;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_121;
		L_121 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_119, L_120, NULL);
		if (!L_121)
		{
			goto IL_01e2;
		}
	}
	{
		RuntimeObject* L_122 = ___value0;
		RuntimeObject* L_123 = ___nsResolver2;
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_124;
		L_124 = XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4(__this, L_122, L_123, XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_RuntimeMethod_var);
		return (RuntimeObject*)L_124;
	}

IL_01e2:
	{
		Type_t* L_125 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_126 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___UInt16Type_18;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_127;
		L_127 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_125, L_126, NULL);
		if (!L_127)
		{
			goto IL_01f8;
		}
	}
	{
		RuntimeObject* L_128 = ___value0;
		RuntimeObject* L_129 = ___nsResolver2;
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_130;
		L_130 = XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954(__this, L_128, L_129, XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_RuntimeMethod_var);
		return (RuntimeObject*)L_130;
	}

IL_01f8:
	{
		Type_t* L_131 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_132 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___UInt32Type_19;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_133;
		L_133 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_131, L_132, NULL);
		if (!L_133)
		{
			goto IL_020e;
		}
	}
	{
		RuntimeObject* L_134 = ___value0;
		RuntimeObject* L_135 = ___nsResolver2;
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_136;
		L_136 = XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049(__this, L_134, L_135, XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_RuntimeMethod_var);
		return (RuntimeObject*)L_136;
	}

IL_020e:
	{
		Type_t* L_137 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_138 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___UInt64Type_20;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_139;
		L_139 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_137, L_138, NULL);
		if (!L_139)
		{
			goto IL_0224;
		}
	}
	{
		RuntimeObject* L_140 = ___value0;
		RuntimeObject* L_141 = ___nsResolver2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_142;
		L_142 = XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234(__this, L_140, L_141, XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_RuntimeMethod_var);
		return (RuntimeObject*)L_142;
	}

IL_0224:
	{
		Type_t* L_143 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_144 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___UriType_29;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_145;
		L_145 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_143, L_144, NULL);
		if (!L_145)
		{
			goto IL_023a;
		}
	}
	{
		RuntimeObject* L_146 = ___value0;
		RuntimeObject* L_147 = ___nsResolver2;
		UriU5BU5D_t95648338DE865E9517F36D1339C4D8DDFA4AAA2D* L_148;
		L_148 = XmlListConverter_ToArray_TisUri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_mC960C31453A4D44C56084C07A27DDFDD471D481B(__this, L_146, L_147, XmlListConverter_ToArray_TisUri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_mC960C31453A4D44C56084C07A27DDFDD471D481B_RuntimeMethod_var);
		return (RuntimeObject*)L_148;
	}

IL_023a:
	{
		Type_t* L_149 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_150 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___XmlAtomicValueType_13;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_151;
		L_151 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_150, NULL);
		if (!L_151)
		{
			goto IL_0250;
		}
	}
	{
		RuntimeObject* L_152 = ___value0;
		RuntimeObject* L_153 = ___nsResolver2;
		XmlAtomicValueU5BU5D_t4551012B10612E9BE1319B781AA566174038F409* L_154;
		L_154 = XmlListConverter_ToArray_TisXmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56_mB44E5366B1E0B70FFB508B81AB1EEEACA8A24FB9(__this, L_152, L_153, XmlListConverter_ToArray_TisXmlAtomicValue_t916FF4B4DC387DA422F7E2C2326D6B28CFFCDE56_mB44E5366B1E0B70FFB508B81AB1EEEACA8A24FB9_RuntimeMethod_var);
		return (RuntimeObject*)L_154;
	}

IL_0250:
	{
		Type_t* L_155 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_156 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___XmlQualifiedNameType_28;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_157;
		L_157 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_155, L_156, NULL);
		if (!L_157)
		{
			goto IL_0266;
		}
	}
	{
		RuntimeObject* L_158 = ___value0;
		RuntimeObject* L_159 = ___nsResolver2;
		XmlQualifiedNameU5BU5D_t95C376ACDEA9261B842F45A4C4DF9ABEE0FB35D1* L_160;
		L_160 = XmlListConverter_ToArray_TisXmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_m82FE10DFE44A5AC048DB1E0634CD5C619C419814(__this, L_158, L_159, XmlListConverter_ToArray_TisXmlQualifiedName_t2794880B373257E4108CC3F36D7373A343ACC5B9_m82FE10DFE44A5AC048DB1E0634CD5C619C419814_RuntimeMethod_var);
		return (RuntimeObject*)L_160;
	}

IL_0266:
	{
		Type_t* L_161 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_162 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___XPathItemType_21;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_163;
		L_163 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_161, L_162, NULL);
		if (!L_163)
		{
			goto IL_027c;
		}
	}
	{
		RuntimeObject* L_164 = ___value0;
		RuntimeObject* L_165 = ___nsResolver2;
		XPathItemU5BU5D_tD2B443A6F6419CF6FDAB8C62D58172DC03ED0AFB* L_166;
		L_166 = XmlListConverter_ToArray_TisXPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7_m9AEBD985069D1257E3688F670B37F877EBC65AC6(__this, L_164, L_165, XmlListConverter_ToArray_TisXPathItem_tF0126CC493F2BFDDDFB5B0D05EAE05E8EF8AE1B7_m9AEBD985069D1257E3688F670B37F877EBC65AC6_RuntimeMethod_var);
		return (RuntimeObject*)L_166;
	}

IL_027c:
	{
		Type_t* L_167 = V_1;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_168 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___XPathNavigatorType_31;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_169;
		L_169 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_167, L_168, NULL);
		if (!L_169)
		{
			goto IL_0292;
		}
	}
	{
		RuntimeObject* L_170 = ___value0;
		RuntimeObject* L_171 = ___nsResolver2;
		XPathNavigatorU5BU5D_tFE9FE3A0D07FE839B04B3C75013904AA99EF0CF0* L_172;
		L_172 = XmlListConverter_ToArray_TisXPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_mFEE720231EF096E7F5D07E837631DB2B74AE1C78(__this, L_170, L_171, XmlListConverter_ToArray_TisXPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_mFEE720231EF096E7F5D07E837631DB2B74AE1C78_RuntimeMethod_var);
		return (RuntimeObject*)L_172;
	}

IL_0292:
	{
		Type_t* L_173 = V_0;
		Type_t* L_174 = ___destinationType1;
		Exception_t* L_175;
		L_175 = XmlListConverter_CreateInvalidClrMappingException_m6D579969524A99137757F66105F72C9DFB83B0B1(__this, L_173, L_174, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_175, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XmlListConverter_ChangeListType_mE0AAB3D151C68A0D04C45239AC2899272F009220_RuntimeMethod_var)));
	}

IL_029b:
	{
		Type_t* L_176 = V_0;
		Type_t* L_177;
		L_177 = XmlBaseConverter_get_DefaultClrType_mE8954A45D93CC608AEC14D795E83104D0F7BDCDF_inline(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_178;
		L_178 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_176, L_177, NULL);
		if (!L_178)
		{
			goto IL_02b8;
		}
	}
	{
		Type_t* L_179 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_180 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ObjectArrayType_6;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_181;
		L_181 = Type_op_Inequality_m83209C7BB3C05DFBEA3B6199B0BEFE8037301172(L_179, L_180, NULL);
		if (!L_181)
		{
			goto IL_02b8;
		}
	}
	{
		RuntimeObject* L_182 = ___value0;
		return L_182;
	}

IL_02b8:
	{
		RuntimeObject* L_183 = ___value0;
		RuntimeObject* L_184 = ___nsResolver2;
		RuntimeObject* L_185;
		L_185 = XmlListConverter_ToList_m2770032A553C42EA62A43232A06D8784826B4668(__this, L_183, L_184, NULL);
		return L_185;
	}
}
// System.Boolean System.Xml.Schema.XmlListConverter::IsListType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XmlListConverter_IsListType_m21C7A6B5F57551FF2D989720667EF4E1D9E1399F (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_1 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___IListType_5;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_3 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_4 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ICollectionType_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_6 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_7 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___IEnumerableType_4;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_6, L_7, NULL);
		if (L_8)
		{
			goto IL_0034;
		}
	}
	{
		Type_t* L_9 = ___type0;
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_10 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___StringType_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0036;
		}
	}

IL_0034:
	{
		return (bool)1;
	}

IL_0036:
	{
		Type_t* L_12 = ___type0;
		NullCheck(L_12);
		bool L_13;
		L_13 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_12, NULL);
		return L_13;
	}
}
// System.Collections.IList System.Xml.Schema.XmlListConverter::ToList(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XmlListConverter_ToList_m2770032A553C42EA62A43232A06D8784826B4668 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0039;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = __this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
		Type_t* L_11 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ObjectType_14;
		RuntimeObject* L_12 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_13;
		L_13 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_11, L_12);
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_13);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_13);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0039:
	{
		int32_t L_15 = V_3;
		RuntimeObject* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, L_16);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_18 = V_2;
		return (RuntimeObject*)L_18;
	}

IL_0044:
	{
		RuntimeObject* L_19 = ___list0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_20 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690(L_20, List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_RuntimeMethod_var);
		V_1 = L_20;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_19, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_21;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0086:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_22 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_22, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_23 = V_6;
					if (!L_23)
					{
						goto IL_009a;
					}
				}
				{
					RuntimeObject* L_24 = V_6;
					NullCheck(L_24);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_24);
				}

IL_009a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_007b_1;
			}

IL_0059_1:
			{
				RuntimeObject* L_25 = V_4;
				NullCheck(L_25);
				RuntimeObject* L_26;
				L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_25);
				V_5 = L_26;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_27 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_28 = __this->___atomicConverter_32;
				RuntimeObject* L_29 = V_5;
				il2cpp_codegen_runtime_class_init_inline(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var);
				Type_t* L_30 = ((XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields*)il2cpp_codegen_static_fields_for(XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_il2cpp_TypeInfo_var))->___ObjectType_14;
				RuntimeObject* L_31 = ___nsResolver1;
				NullCheck(L_28);
				RuntimeObject* L_32;
				L_32 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_28, L_29, L_30, L_31);
				NullCheck(L_27);
				List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_inline(L_27, L_32, List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_RuntimeMethod_var);
			}

IL_007b_1:
			{
				RuntimeObject* L_33 = V_4;
				NullCheck(L_33);
				bool L_34;
				L_34 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_33);
				if (L_34)
				{
					goto IL_0059_1;
				}
			}
			{
				goto IL_009b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_009b:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_35 = V_1;
		return L_35;
	}
}
// System.Collections.Generic.List`1<System.String> System.Xml.Schema.XmlListConverter::StringAsList(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* XmlListConverter_StringAsList_m3E1DDA543BC8CBEB3D5FE7741297A4B15EA5EF14 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = XmlConvert_SplitString_mA7AA35B88D14E59B173FCA6406B408EF3C83F02D(L_0, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_2, (RuntimeObject*)L_1, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		return L_2;
	}
}
// System.String System.Xml.Schema.XmlListConverter::ListAsString(System.Collections.IEnumerable,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XmlListConverter_ListAsString_m48242450B8AF496252BB093BB75E86D8C274A19B (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		RuntimeObject* L_1 = ___list0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, L_1);
		V_1 = L_2;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_3 = V_1;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_3, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_4 = V_3;
					if (!L_4)
					{
						goto IL_0058;
					}
				}
				{
					RuntimeObject* L_5 = V_3;
					NullCheck(L_5);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_5);
				}

IL_0058:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_003e_1;
			}

IL_000f_1:
			{
				RuntimeObject* L_6 = V_1;
				NullCheck(L_6);
				RuntimeObject* L_7;
				L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				V_2 = L_7;
				RuntimeObject* L_8 = V_2;
				if (!L_8)
				{
					goto IL_003e_1;
				}
			}
			{
				StringBuilder_t* L_9 = V_0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_9, NULL);
				if (!L_10)
				{
					goto IL_002a_1;
				}
			}
			{
				StringBuilder_t* L_11 = V_0;
				NullCheck(L_11);
				StringBuilder_t* L_12;
				L_12 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_11, ((int32_t)32), NULL);
			}

IL_002a_1:
			{
				StringBuilder_t* L_13 = V_0;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_14 = __this->___atomicConverter_32;
				RuntimeObject* L_15 = V_2;
				RuntimeObject* L_16 = ___nsResolver1;
				NullCheck(L_14);
				String_t* L_17;
				L_17 = VirtualFuncInvoker2< String_t*, RuntimeObject*, RuntimeObject* >::Invoke(52 /* System.String System.Xml.Schema.XmlValueConverter::ToString(System.Object,System.Xml.IXmlNamespaceResolver) */, L_14, L_15, L_16);
				NullCheck(L_13);
				StringBuilder_t* L_18;
				L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, L_17, NULL);
			}

IL_003e_1:
			{
				RuntimeObject* L_19 = V_1;
				NullCheck(L_19);
				bool L_20;
				L_20 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_19);
				if (L_20)
				{
					goto IL_000f_1;
				}
			}
			{
				goto IL_0059;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0059:
	{
		StringBuilder_t* L_21 = V_0;
		NullCheck(L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_21);
		return L_22;
	}
}
// System.Exception System.Xml.Schema.XmlListConverter::CreateInvalidClrMappingException(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XmlListConverter_CreateInvalidClrMappingException_m6D579969524A99137757F66105F72C9DFB83B0B1 (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, Type_t* ___sourceType0, Type_t* ___destinationType1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3A680A717A901731935F51F62C0FDFEF792BDD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC171503077BD6B1C438A3FEA9F31DB637C7C763A);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t* L_0 = ___sourceType0;
		Type_t* L_1 = ___destinationType1;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5;
		L_5 = XmlBaseConverter_get_XmlTypeName_mB124A8F50E08E3BAF80ECEE1C9218FABF3CD83D7(__this, NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		Type_t* L_7 = ___sourceType0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_7);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_8);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_8);
		String_t* L_9;
		L_9 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteralC171503077BD6B1C438A3FEA9F31DB637C7C763A, L_6, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_10 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_10, L_9, NULL);
		return L_10;
	}

IL_0031:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_11 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_11;
		String_t* L_13;
		L_13 = XmlBaseConverter_get_XmlTypeName_mB124A8F50E08E3BAF80ECEE1C9218FABF3CD83D7(__this, NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_13);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = L_12;
		Type_t* L_15 = ___sourceType0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_16);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_14;
		Type_t* L_18 = ___destinationType1;
		NullCheck(L_18);
		String_t* L_19;
		L_19 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_18);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_19);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_19);
		String_t* L_20;
		L_20 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteralA3A680A717A901731935F51F62C0FDFEF792BDD2, L_17, NULL);
		InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E* L_21 = (InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E*)il2cpp_codegen_object_new(InvalidCastException_t47FC62F21A3937E814D20381DDACEF240E95AC2E_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		InvalidCastException__ctor_mED3F9781E6CA47A92C602C896EDDF2F40ECB8644(L_21, L_20, NULL);
		return L_21;
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
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke(const XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB& unmarshaled, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_pinvoke& marshaled)
{
	Exception_t* ___dt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dt' of type 'XsdDateTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dt_0Exception, NULL);
}
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_back(const XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_pinvoke& marshaled, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB& unmarshaled)
{
	Exception_t* ___dt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dt' of type 'XsdDateTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dt_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_pinvoke_cleanup(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_com(const XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB& unmarshaled, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_com& marshaled)
{
	Exception_t* ___dt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dt' of type 'XsdDateTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dt_0Exception, NULL);
}
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_com_back(const XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_com& marshaled, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB& unmarshaled)
{
	Exception_t* ___dt_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'dt' of type 'XsdDateTime'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___dt_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime
IL2CPP_EXTERN_C void XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshal_com_cleanup(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_marshaled_com& marshaled)
{
}
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method) 
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj(__this, sizeof(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB));
		il2cpp_codegen_initobj((&V_0), sizeof(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23));
		String_t* L_0 = ___text0;
		int32_t L_1 = ___kinds1;
		bool L_2;
		L_2 = Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9((&V_0), L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = L_3;
		String_t* L_5 = ___text0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = L_4;
		int32_t L_7 = ___kinds1;
		int32_t L_8 = L_7;
		RuntimeObject* L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDateTimeFlags_t69F10B0961FFA92954C37D538C4B5D5FAD9F1F76_il2cpp_TypeInfo_var)), &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_9);
		String_t* L_10;
		L_10 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D04002FC7142DC7148763C90BB38AEEC554A158)), L_6, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_11 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_11, L_10, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E_RuntimeMethod_var)));
	}

IL_003d:
	{
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_12 = V_0;
		XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E(__this, L_12, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime__ctor_m3E0873E7B93556D02209B348843C713D51F73B4E(_thisAdjusted, ___text0, ___kinds1, method);
}
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.Xml.Schema.XsdDateTime/Parser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m9D9086E04F4BF6D3C09746A40FE8811B3CF4CA88 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_initobj(__this, sizeof(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB));
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_0 = ___parser0;
		XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E(__this, L_0, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime__ctor_m9D9086E04F4BF6D3C09746A40FE8811B3CF4CA88_AdjustorThunk (RuntimeObject* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime__ctor_m9D9086E04F4BF6D3C09746A40FE8811B3CF4CA88(_thisAdjusted, ___parser0, method);
}
// System.Void System.Xml.Schema.XsdDateTime::InitiateXsdDateTime(System.Xml.Schema.XsdDateTime/Parser)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method) 
{
	{
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_0 = ___parser0;
		int32_t L_1 = L_0.___year_1;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_2 = ___parser0;
		int32_t L_3 = L_2.___month_2;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_4 = ___parser0;
		int32_t L_5 = L_4.___day_3;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_6 = ___parser0;
		int32_t L_7 = L_6.___hour_4;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_8 = ___parser0;
		int32_t L_9 = L_8.___minute_5;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_10 = ___parser0;
		int32_t L_11 = L_10.___second_6;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_12;
		memset((&L_12), 0, sizeof(L_12));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_12), L_1, L_3, L_5, L_7, L_9, L_11, /*hidden argument*/NULL);
		__this->___dt_0 = L_12;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_13 = ___parser0;
		int32_t L_14 = L_13.___fraction_7;
		if (!L_14)
		{
			goto IL_004f;
		}
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_15 = (&__this->___dt_0);
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_16 = ___parser0;
		int32_t L_17 = L_16.___fraction_7;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_18;
		L_18 = DateTime_AddTicks_m76D145EA6924296227BB2DD9A5A18C8A2B72EF1D(L_15, ((int64_t)L_17), NULL);
		__this->___dt_0 = L_18;
	}

IL_004f:
	{
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_19 = ___parser0;
		int32_t L_20 = L_19.___typeCode_0;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_21 = ___parser0;
		int32_t L_22 = L_21.___kind_8;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_23 = ___parser0;
		int32_t L_24 = L_23.___zoneHour_9;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_25 = ___parser0;
		int32_t L_26 = L_25.___zoneMinute_10;
		__this->___extra_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_20<<((int32_t)24)))|((int32_t)((int32_t)L_22<<((int32_t)16)))))|((int32_t)(L_24<<8))))|L_26));
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E_AdjustorThunk (RuntimeObject* __this, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 ___parser0, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_InitiateXsdDateTime_m91814AB11DA2BA2D0079F9F73E2B9B62B98B533E(_thisAdjusted, ___parser0, method);
}
// System.Boolean System.Xml.Schema.XsdDateTime::TryParse(System.String,System.Xml.Schema.XsdDateTimeFlags,System.Xml.Schema.XsdDateTime&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdDateTime_TryParse_m068598C2E7472B2CD642EA44B748529FCFFFF8BA (String_t* ___text0, int32_t ___kinds1, XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* ___result2, const RuntimeMethod* method) 
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23));
		String_t* L_0 = ___text0;
		int32_t L_1 = ___kinds1;
		bool L_2;
		L_2 = Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9((&V_0), L_0, L_1, NULL);
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* L_3 = ___result2;
		il2cpp_codegen_initobj(L_3, sizeof(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB));
		return (bool)0;
	}

IL_001c:
	{
		XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* L_4 = ___result2;
		Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23 L_5 = V_0;
		XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB L_6;
		memset((&L_6), 0, sizeof(L_6));
		XsdDateTime__ctor_m9D9086E04F4BF6D3C09746A40FE8811B3CF4CA88((&L_6), L_5, /*hidden argument*/NULL);
		*(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*)L_4 = L_6;
		return (bool)1;
	}
}
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.DateTime,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m9EE15399BB38384CC624A7079BA193790D121712 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, int32_t ___kinds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bits_t4D52329DF865E191908AE96952B27312B4FD1355_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___dateTime0;
		__this->___dt_0 = L_0;
		int32_t L_1 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Bits_t4D52329DF865E191908AE96952B27312B4FD1355_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Bits_LeastPosition_mE02945243BB6CC1C04FDE6B963BB351319E03B50(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		V_1 = 0;
		V_2 = 0;
		int32_t L_3;
		L_3 = DateTime_get_Kind_m83D45222D9386873333A178B9AB31AC2B2F2C993((&___dateTime0), NULL);
		V_4 = L_3;
		int32_t L_4 = V_4;
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5 = V_4;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_002c;
		}
	}
	{
		goto IL_0030;
	}

IL_0028:
	{
		V_3 = 0;
		goto IL_0070;
	}

IL_002c:
	{
		V_3 = 1;
		goto IL_0070;
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_6;
		L_6 = TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7 = ___dateTime0;
		NullCheck(L_6);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0(L_6, L_7, NULL);
		V_5 = L_8;
		int64_t L_9;
		L_9 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_5), NULL);
		if ((((int64_t)L_9) >= ((int64_t)((int64_t)0))))
		{
			goto IL_005e;
		}
	}
	{
		V_3 = 2;
		int32_t L_10;
		L_10 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&V_5), NULL);
		V_1 = ((-L_10));
		int32_t L_11;
		L_11 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_5), NULL);
		V_2 = ((-L_11));
		goto IL_0070;
	}

IL_005e:
	{
		V_3 = 3;
		int32_t L_12;
		L_12 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&V_5), NULL);
		V_1 = L_12;
		int32_t L_13;
		L_13 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_5), NULL);
		V_2 = L_13;
	}

IL_0070:
	{
		int32_t L_14 = V_0;
		int32_t L_15 = V_3;
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		__this->___extra_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_14<<((int32_t)24)))|((int32_t)((int32_t)L_15<<((int32_t)16)))))|((int32_t)(L_16<<8))))|L_17));
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime__ctor_m9EE15399BB38384CC624A7079BA193790D121712_AdjustorThunk (RuntimeObject* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___dateTime0, int32_t ___kinds1, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime__ctor_m9EE15399BB38384CC624A7079BA193790D121712(_thisAdjusted, ___dateTime0, ___kinds1, method);
}
// System.Void System.Xml.Schema.XsdDateTime::.ctor(System.DateTimeOffset,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__ctor_m127DD6E3D834498A172B1FD34DD1AC4505C7AA4C (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___dateTimeOffset0, int32_t ___kinds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bits_t4D52329DF865E191908AE96952B27312B4FD1355_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTimeOffset_get_DateTime_mDF6DC57E7A5647D8B964D3FD5B6855E7D66EF324((&___dateTimeOffset0), NULL);
		__this->___dt_0 = L_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1;
		L_1 = DateTimeOffset_get_Offset_mE90E2548227F1EE8BF4A6A5EB71B32D48D3035A4((&___dateTimeOffset0), NULL);
		V_0 = L_1;
		int32_t L_2 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Bits_t4D52329DF865E191908AE96952B27312B4FD1355_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = Bits_LeastPosition_mE02945243BB6CC1C04FDE6B963BB351319E03B50(L_2, NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		double L_4;
		L_4 = TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115((&V_0), NULL);
		if ((!(((double)L_4) < ((double)(0.0)))))
		{
			goto IL_003c;
		}
	}
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_5;
		L_5 = TimeSpan_Negate_m3BF3036191A2FDC35250891CD82AD3283A13ABB4((&V_0), NULL);
		V_0 = L_5;
		V_2 = 2;
		goto IL_0054;
	}

IL_003c:
	{
		double L_6;
		L_6 = TimeSpan_get_TotalMinutes_mD139AD7A9055F460D2ACC8B0D2BC4A70009E1115((&V_0), NULL);
		if ((!(((double)L_6) > ((double)(0.0)))))
		{
			goto IL_0052;
		}
	}
	{
		V_2 = 3;
		goto IL_0054;
	}

IL_0052:
	{
		V_2 = 1;
	}

IL_0054:
	{
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9;
		L_9 = TimeSpan_get_Hours_m770B4B777A816E051EFDA317C28DA9A4F39D6CFB((&V_0), NULL);
		int32_t L_10;
		L_10 = TimeSpan_get_Minutes_m93E37D01CD6DA2DE5B35609D740D322E270B678F((&V_0), NULL);
		__this->___extra_1 = ((int32_t)(((int32_t)(((int32_t)(((int32_t)((int32_t)L_7<<((int32_t)24)))|((int32_t)((int32_t)L_8<<((int32_t)16)))))|((int32_t)(L_9<<8))))|L_10));
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime__ctor_m127DD6E3D834498A172B1FD34DD1AC4505C7AA4C_AdjustorThunk (RuntimeObject* __this, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___dateTimeOffset0, int32_t ___kinds1, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime__ctor_m127DD6E3D834498A172B1FD34DD1AC4505C7AA4C(_thisAdjusted, ___dateTimeOffset0, ___kinds1, method);
}
// System.Xml.Schema.XsdDateTime/DateTimeTypeCode System.Xml.Schema.XsdDateTime::get_InternalTypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___extra_1;
		return (int32_t)(((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)-16777216)))>>((int32_t)24))));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B(_thisAdjusted, method);
	return _returnValue;
}
// System.Xml.Schema.XsdDateTime/XsdDateTimeKind System.Xml.Schema.XsdDateTime::get_InternalKind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___extra_1;
		return (int32_t)(((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)16711680)))>>((int32_t)16))));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Year()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Month()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Day()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Hour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Hour_mE4B191CD33490CA5BC5EA87E00314FA50BDB741A (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Hour_mE4B191CD33490CA5BC5EA87E00314FA50BDB741A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Hour_mE4B191CD33490CA5BC5EA87E00314FA50BDB741A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Minute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Minute_m38120FA2B75440A56BD49C552DDD3032D9A6DFA6 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Minute_m38120FA2B75440A56BD49C552DDD3032D9A6DFA6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Minute_m38120FA2B75440A56BD49C552DDD3032D9A6DFA6(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Second()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Second_m46202D39713A213E9F514CD4E2F5F04C5278780F (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int32_t L_1;
		L_1 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Second_m46202D39713A213E9F514CD4E2F5F04C5278780F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Second_m46202D39713A213E9F514CD4E2F5F04C5278780F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_Fraction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_Fraction_m40D9B327318B0D061E02D59889E0919A95EB9098 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_0 = (&__this->___dt_0);
		int64_t L_1;
		L_1 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6(L_0, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2 = (&__this->___dt_0);
		int32_t L_3;
		L_3 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138(L_2, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_4 = (&__this->___dt_0);
		int32_t L_5;
		L_5 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2(L_4, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_6 = (&__this->___dt_0);
		int32_t L_7;
		L_7 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28(L_6, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_8 = (&__this->___dt_0);
		int32_t L_9;
		L_9 = DateTime_get_Hour_m350B2AEB6ED8AAD80F0779C1FD37EEE13952A7F3(L_8, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_10 = (&__this->___dt_0);
		int32_t L_11;
		L_11 = DateTime_get_Minute_m73003491DA85D2C9951ECCF890D9BF6AFFB9E973(L_10, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_12 = (&__this->___dt_0);
		int32_t L_13;
		L_13 = DateTime_get_Second_mC860BA28DED65249BE9EA46E4898730C7828B3EA(L_12, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_14;
		memset((&L_14), 0, sizeof(L_14));
		DateTime__ctor_m1F66A4327FE6B127F0F0E83A70CED25DB0DFFB00((&L_14), L_3, L_5, L_7, L_9, L_11, L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		int64_t L_15;
		L_15 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		return ((int32_t)((int64_t)il2cpp_codegen_subtract(L_1, L_15)));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_Fraction_m40D9B327318B0D061E02D59889E0919A95EB9098_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_Fraction_m40D9B327318B0D061E02D59889E0919A95EB9098(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_ZoneHour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___extra_1;
		return ((int32_t)((uint32_t)((int32_t)((int32_t)L_0&((int32_t)65280)))>>8));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDateTime::get_ZoneMinute()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___extra_1;
		return ((int32_t)((int32_t)L_0&((int32_t)255)));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228(_thisAdjusted, method);
	return _returnValue;
}
// System.DateTime System.Xml.Schema.XsdDateTime::op_Implicit(System.Xml.Schema.XsdDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D XsdDateTime_op_Implicit_m1EF46AEE72E727BAE0AAB367CFC0331C0368F328 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB ___xdt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	int64_t V_1 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_7;
	memset((&V_7), 0, sizeof(V_7));
	{
		int32_t L_0;
		L_0 = XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B((&___xdt0), NULL);
		V_4 = L_0;
		int32_t L_1 = V_4;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = V_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 6))) <= ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_5 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&V_5), NULL);
		int32_t L_5;
		L_5 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B((&___xdt0), NULL);
		int32_t L_6;
		L_6 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D((&___xdt0), NULL);
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&V_0), L_4, L_5, L_6, NULL);
		goto IL_0091;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_7;
		int32_t L_8;
		L_8 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&V_2), NULL);
		int32_t L_9;
		L_9 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&V_2), NULL);
		int32_t L_10;
		L_10 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&V_2), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11;
		memset((&L_11), 0, sizeof(L_11));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA((&___xdt0), NULL);
		int32_t L_13;
		L_13 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B((&___xdt0), NULL);
		int32_t L_14;
		L_14 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D((&___xdt0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		memset((&L_15), 0, sizeof(L_15));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_16;
		L_16 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_11, L_15, NULL);
		V_3 = L_16;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_17 = (&(&___xdt0)->___dt_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_18 = V_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1(L_17, L_18, NULL);
		V_0 = L_19;
		goto IL_0091;
	}

IL_008a:
	{
		XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB L_20 = ___xdt0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21 = L_20.___dt_0;
		V_0 = L_21;
	}

IL_0091:
	{
		int32_t L_22;
		L_22 = XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E((&___xdt0), NULL);
		V_6 = L_22;
		int32_t L_23 = V_6;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_23, 1)))
		{
			case 0:
			{
				goto IL_00b4;
			}
			case 1:
			{
				goto IL_0145;
			}
			case 2:
			{
				goto IL_00c8;
			}
		}
	}
	{
		goto IL_01c0;
	}

IL_00b4:
	{
		int64_t L_24;
		L_24 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&V_0), L_24, 1, NULL);
		goto IL_01c0;
	}

IL_00c8:
	{
		int64_t L_25;
		L_25 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		int32_t L_26;
		L_26 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739((&___xdt0), NULL);
		int32_t L_27;
		L_27 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228((&___xdt0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_28;
		memset((&L_28), 0, sizeof(L_28));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_28), L_26, L_27, 0, /*hidden argument*/NULL);
		V_7 = L_28;
		int64_t L_29;
		L_29 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_7), NULL);
		V_1 = ((int64_t)il2cpp_codegen_subtract(L_25, L_29));
		int64_t L_30 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_31;
		L_31 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32), NULL);
		if ((((int64_t)L_30) >= ((int64_t)L_31)))
		{
			goto IL_0132;
		}
	}
	{
		int64_t L_32 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_33;
		L_33 = TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34 = V_0;
		NullCheck(L_33);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_35;
		L_35 = TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0(L_33, L_34, NULL);
		V_7 = L_35;
		int64_t L_36;
		L_36 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_7), NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(L_32, L_36));
		int64_t L_37 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_38;
		L_38 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32), NULL);
		if ((((int64_t)L_37) >= ((int64_t)L_38)))
		{
			goto IL_012a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_39;
		L_39 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MinValue_32), NULL);
		V_1 = L_39;
	}

IL_012a:
	{
		int64_t L_40 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_41;
		memset((&L_41), 0, sizeof(L_41));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_41), L_40, 2, /*hidden argument*/NULL);
		return L_41;
	}

IL_0132:
	{
		int64_t L_42 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_43;
		memset((&L_43), 0, sizeof(L_43));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_43), L_42, 1, /*hidden argument*/NULL);
		V_5 = L_43;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_44;
		L_44 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_5), NULL);
		V_0 = L_44;
		goto IL_01c0;
	}

IL_0145:
	{
		int64_t L_45;
		L_45 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&V_0), NULL);
		int32_t L_46;
		L_46 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739((&___xdt0), NULL);
		int32_t L_47;
		L_47 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228((&___xdt0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_48;
		memset((&L_48), 0, sizeof(L_48));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_48), L_46, L_47, 0, /*hidden argument*/NULL);
		V_7 = L_48;
		int64_t L_49;
		L_49 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_7), NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(L_45, L_49));
		int64_t L_50 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_51;
		L_51 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33), NULL);
		if ((((int64_t)L_50) <= ((int64_t)L_51)))
		{
			goto IL_01af;
		}
	}
	{
		int64_t L_52 = V_1;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_53;
		L_53 = TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_54 = V_0;
		NullCheck(L_53);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_55;
		L_55 = TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0(L_53, L_54, NULL);
		V_7 = L_55;
		int64_t L_56;
		L_56 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&V_7), NULL);
		V_1 = ((int64_t)il2cpp_codegen_add(L_52, L_56));
		int64_t L_57 = V_1;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_58;
		L_58 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33), NULL);
		if ((((int64_t)L_57) <= ((int64_t)L_58)))
		{
			goto IL_01a7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int64_t L_59;
		L_59 = DateTime_get_Ticks_mC2CF04ED0EAB425C72C2532FFC5743777F3C93A6((&((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields*)il2cpp_codegen_static_fields_for(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var))->___MaxValue_33), NULL);
		V_1 = L_59;
	}

IL_01a7:
	{
		int64_t L_60 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_61;
		memset((&L_61), 0, sizeof(L_61));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_61), L_60, 2, /*hidden argument*/NULL);
		return L_61;
	}

IL_01af:
	{
		int64_t L_62 = V_1;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_63;
		memset((&L_63), 0, sizeof(L_63));
		DateTime__ctor_mF724D343E82431D326EF70E1A31B3B3C4295AFFE((&L_63), L_62, 1, /*hidden argument*/NULL);
		V_5 = L_63;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_64;
		L_64 = DateTime_ToLocalTime_mD87626169251A26AF699DAE90A1C31190AD30B94((&V_5), NULL);
		V_0 = L_64;
	}

IL_01c0:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_65 = V_0;
		return L_65;
	}
}
// System.DateTimeOffset System.Xml.Schema.XsdDateTime::op_Implicit(System.Xml.Schema.XsdDateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 XsdDateTime_op_Implicit_mF4D51340A7F37CB97D9C4F581DC393973005B6D4 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB ___xdt0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_2;
	memset((&V_2), 0, sizeof(V_2));
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	{
		int32_t L_0;
		L_0 = XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B((&___xdt0), NULL);
		V_4 = L_0;
		int32_t L_1 = V_4;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_2 = V_4;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, 6))) <= ((uint32_t)1))))
		{
			goto IL_008a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_3;
		L_3 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_5 = L_3;
		int32_t L_4;
		L_4 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&V_5), NULL);
		int32_t L_5;
		L_5 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B((&___xdt0), NULL);
		int32_t L_6;
		L_6 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D((&___xdt0), NULL);
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&V_0), L_4, L_5, L_6, NULL);
		goto IL_0091;
	}

IL_003a:
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_7;
		L_7 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		V_2 = L_7;
		int32_t L_8;
		L_8 = DateTime_get_Year_m00A88C4CEE07B7906F5F7F75C254B769808F5138((&V_2), NULL);
		int32_t L_9;
		L_9 = DateTime_get_Month_m899C6602DE8198990B2CAF5EBC04CC67764E3DA2((&V_2), NULL);
		int32_t L_10;
		L_10 = DateTime_get_Day_m872DBCA4C79955EC1E27EB68746B6C2F6A183B28((&V_2), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11;
		memset((&L_11), 0, sizeof(L_11));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_11), L_8, L_9, L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA((&___xdt0), NULL);
		int32_t L_13;
		L_13 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B((&___xdt0), NULL);
		int32_t L_14;
		L_14 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D((&___xdt0), NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_15;
		memset((&L_15), 0, sizeof(L_15));
		DateTime__ctor_mA3BF7CE28807F0A02634FD43913FAAFD989CEE88((&L_15), L_12, L_13, L_14, /*hidden argument*/NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_16;
		L_16 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_11, L_15, NULL);
		V_3 = L_16;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_17 = (&(&___xdt0)->___dt_0);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_18 = V_3;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_19;
		L_19 = DateTime_Add_mC882C6BBE75862360A1A0C733B4FFE3210D4B9B1(L_17, L_18, NULL);
		V_0 = L_19;
		goto IL_0091;
	}

IL_008a:
	{
		XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB L_20 = ___xdt0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_21 = L_20.___dt_0;
		V_0 = L_21;
	}

IL_0091:
	{
		int32_t L_22;
		L_22 = XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E((&___xdt0), NULL);
		V_6 = L_22;
		int32_t L_23 = V_6;
		switch (L_23)
		{
			case 0:
			{
				goto IL_0102;
			}
			case 1:
			{
				goto IL_00f1;
			}
			case 2:
			{
				goto IL_00d1;
			}
			case 3:
			{
				goto IL_00b3;
			}
		}
	}
	{
		goto IL_0102;
	}

IL_00b3:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_24 = V_0;
		int32_t L_25;
		L_25 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739((&___xdt0), NULL);
		int32_t L_26;
		L_26 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228((&___xdt0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_27;
		memset((&L_27), 0, sizeof(L_27));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_27), L_25, L_26, 0, /*hidden argument*/NULL);
		DateTimeOffset__ctor_m6E6938BD1F5EEE0F96247339B75FB7CEF3665FDC((&V_1), L_24, L_27, NULL);
		goto IL_0115;
	}

IL_00d1:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_28 = V_0;
		int32_t L_29;
		L_29 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739((&___xdt0), NULL);
		int32_t L_30;
		L_30 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228((&___xdt0), NULL);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_31;
		memset((&L_31), 0, sizeof(L_31));
		TimeSpan__ctor_mF8B85616C009D35D860DA0254327E8AAF54822A1((&L_31), ((-L_29)), ((-L_30)), 0, /*hidden argument*/NULL);
		DateTimeOffset__ctor_m6E6938BD1F5EEE0F96247339B75FB7CEF3665FDC((&V_1), L_28, L_31, NULL);
		goto IL_0115;
	}

IL_00f1:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_32 = V_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_33;
		memset((&L_33), 0, sizeof(L_33));
		TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_33), ((int64_t)0), /*hidden argument*/NULL);
		DateTimeOffset__ctor_m6E6938BD1F5EEE0F96247339B75FB7CEF3665FDC((&V_1), L_32, L_33, NULL);
		goto IL_0115;
	}

IL_0102:
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8_il2cpp_TypeInfo_var);
		TimeZoneInfo_t30FD24E315EC4F4D942AF797CCD4CC4ED6B5CAD8* L_35;
		L_35 = TimeZoneInfo_get_Local_mC43C34632FAEEF6BD0E3B5C04417E9C90277445F(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_36 = V_0;
		NullCheck(L_35);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_37;
		L_37 = TimeZoneInfo_GetUtcOffset_mFAA1957ED9222C7526A197E6FF1AE0D05B46EDB0(L_35, L_36, NULL);
		DateTimeOffset__ctor_m6E6938BD1F5EEE0F96247339B75FB7CEF3665FDC((&V_1), L_34, L_37, NULL);
	}

IL_0115:
	{
		DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 L_38 = V_1;
		return L_38;
	}
}
// System.String System.Xml.Schema.XsdDateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDateTime_ToString_m7753E41D2C4A8E0687796143C9220155B9837535 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_1 = NULL;
	int32_t V_2 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)64), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = XsdDateTime_get_InternalTypeCode_mAE60E4DBF9D642870B0D715A5E260F4DD5BC4A4B(__this, NULL);
		V_2 = L_1;
		int32_t L_2 = V_2;
		switch (L_2)
		{
			case 0:
			{
				goto IL_003a;
			}
			case 1:
			{
				goto IL_0056;
			}
			case 2:
			{
				goto IL_0062;
			}
			case 3:
			{
				goto IL_006e;
			}
			case 4:
			{
				goto IL_00b0;
			}
			case 5:
			{
				goto IL_00d7;
			}
			case 6:
			{
				goto IL_012a;
			}
			case 7:
			{
				goto IL_0168;
			}
		}
	}
	{
		goto IL_01ad;
	}

IL_003a:
	{
		StringBuilder_t* L_3 = V_0;
		XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E(__this, L_3, NULL);
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)84), NULL);
		StringBuilder_t* L_6 = V_0;
		XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB(__this, L_6, NULL);
		goto IL_01ad;
	}

IL_0056:
	{
		StringBuilder_t* L_7 = V_0;
		XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB(__this, L_7, NULL);
		goto IL_01ad;
	}

IL_0062:
	{
		StringBuilder_t* L_8 = V_0;
		XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E(__this, L_8, NULL);
		goto IL_01ad;
	}

IL_006e:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_9 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_9);
		V_1 = L_10;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_1;
		int32_t L_12;
		L_12 = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA(__this, NULL);
		XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131(__this, L_11, 0, L_12, 4, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_13 = V_1;
		int32_t L_14 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_1;
		int32_t L_16 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy__3;
		int32_t L_17;
		L_17 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_15, L_16, L_17, NULL);
		StringBuilder_t* L_18 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = V_1;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_18, L_19, NULL);
		goto IL_01ad;
	}

IL_00b0:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_21 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_22 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_1 = L_22;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = V_1;
		int32_t L_24;
		L_24 = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA(__this, NULL);
		XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131(__this, L_23, 0, L_24, 4, NULL);
		StringBuilder_t* L_25 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_1;
		NullCheck(L_25);
		StringBuilder_t* L_27;
		L_27 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_25, L_26, NULL);
		goto IL_01ad;
	}

IL_00d7:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_28 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_dd_21;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_28);
		V_1 = L_29;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_31 = V_1;
		int32_t L_32 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(L_32), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_33 = V_1;
		int32_t L_34 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17;
		int32_t L_35;
		L_35 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_33, L_34, L_35, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_36 = V_1;
		int32_t L_37 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18;
		NullCheck(L_36);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_38 = V_1;
		int32_t L_39 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm__19;
		int32_t L_40;
		L_40 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_38, L_39, L_40, NULL);
		StringBuilder_t* L_41 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_42 = V_1;
		NullCheck(L_41);
		StringBuilder_t* L_43;
		L_43 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_41, L_42, NULL);
		goto IL_01ad;
	}

IL_012a:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_44 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___dd_23;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_45 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_44);
		V_1 = L_45;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_46 = V_1;
		NullCheck(L_46);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_47 = V_1;
		int32_t L_48 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		NullCheck(L_47);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(L_48), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_49 = V_1;
		int32_t L_50 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17;
		NullCheck(L_49);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_51 = V_1;
		int32_t L_52 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz____22;
		int32_t L_53;
		L_53 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_51, L_52, L_53, NULL);
		StringBuilder_t* L_54 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_55 = V_1;
		NullCheck(L_54);
		StringBuilder_t* L_56;
		L_56 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_54, L_55, NULL);
		goto IL_01ad;
	}

IL_0168:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_57 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm___20;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_58 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_57);
		V_1 = L_58;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59 = V_1;
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_60 = V_1;
		int32_t L_61 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(L_61), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_62 = V_1;
		int32_t L_63 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17;
		int32_t L_64;
		L_64 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_62, L_63, L_64, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_65 = V_1;
		int32_t L_66 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18;
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_67 = V_1;
		int32_t L_68 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm__19;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (Il2CppChar)((int32_t)45));
		StringBuilder_t* L_69 = V_0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_70 = V_1;
		NullCheck(L_69);
		StringBuilder_t* L_71;
		L_71 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_69, L_70, NULL);
	}

IL_01ad:
	{
		StringBuilder_t* L_72 = V_0;
		XsdDateTime_PrintZone_mA1766FF80B24A4E1D666DBB8C818C01A94330CF6(__this, L_72, NULL);
		StringBuilder_t* L_73 = V_0;
		NullCheck(L_73);
		String_t* L_74;
		L_74 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_73);
		return L_74;
	}
}
IL2CPP_EXTERN_C  String_t* XsdDateTime_ToString_m7753E41D2C4A8E0687796143C9220155B9837535_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XsdDateTime_ToString_m7753E41D2C4A8E0687796143C9220155B9837535(_thisAdjusted, method);
	return _returnValue;
}
// System.Void System.Xml.Schema.XsdDateTime::PrintDate(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		int32_t L_3;
		L_3 = XsdDateTime_get_Year_mD24DE1C1790E7306B5AF6F78EBAC41CCC7750CEA(__this, NULL);
		XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131(__this, L_2, 0, L_3, 4, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy__3;
		int32_t L_8;
		L_8 = XsdDateTime_get_Month_m205FE2FB59CF6A1692300A21A77FFBB37144E99B(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_6, L_7, L_8, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		int32_t L_10 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_4;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_0;
		int32_t L_12 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM__5;
		int32_t L_13;
		L_13 = XsdDateTime_get_Day_m4F8E33F38809CDEEFFAB2BFC3E14AC6B08AF1F6D(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_11, L_12, L_13, NULL);
		StringBuilder_t* L_14 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_14, L_15, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E_AdjustorThunk (RuntimeObject* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_PrintDate_mF29EDBFFB4F5A9EACE93E05D257421B72A74B61E(_thisAdjusted, ___sb0, method);
}
// System.Void System.Xml.Schema.XsdDateTime::PrintTime(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_ss_12;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = V_0;
		int32_t L_3;
		L_3 = XsdDateTime_get_Hour_mE4B191CD33490CA5BC5EA87E00314FA50BDB741A(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_2, 0, L_3, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_4 = V_0;
		int32_t L_5 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_8;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		int32_t L_7 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH__9;
		int32_t L_8;
		L_8 = XsdDateTime_get_Minute_m38120FA2B75440A56BD49C552DDD3032D9A6DFA6(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_6, L_7, L_8, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_9 = V_0;
		int32_t L_10 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_10;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(L_10), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = V_0;
		int32_t L_12 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm__11;
		int32_t L_13;
		L_13 = XsdDateTime_get_Second_m46202D39713A213E9F514CD4E2F5F04C5278780F(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_11, L_12, L_13, NULL);
		StringBuilder_t* L_14 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_15 = V_0;
		NullCheck(L_14);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_14, L_15, NULL);
		int32_t L_17;
		L_17 = XsdDateTime_get_Fraction_m40D9B327318B0D061E02D59889E0919A95EB9098(__this, NULL);
		V_1 = L_17;
		int32_t L_18 = V_1;
		if (!L_18)
		{
			goto IL_0094;
		}
	}
	{
		V_2 = 7;
		goto IL_006e;
	}

IL_0065:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_19, 1));
		int32_t L_20 = V_1;
		V_1 = ((int32_t)(L_20/((int32_t)10)));
	}

IL_006e:
	{
		int32_t L_21 = V_1;
		if (!((int32_t)(L_21%((int32_t)10))))
		{
			goto IL_0065;
		}
	}
	{
		int32_t L_22 = V_2;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_23 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_add(L_22, 1)));
		V_0 = L_23;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = V_0;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)46));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_25 = V_0;
		int32_t L_26 = V_1;
		int32_t L_27 = V_2;
		XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131(__this, L_25, 1, L_26, L_27, NULL);
		StringBuilder_t* L_28 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_29 = V_0;
		NullCheck(L_28);
		StringBuilder_t* L_30;
		L_30 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_28, L_29, NULL);
	}

IL_0094:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB_AdjustorThunk (RuntimeObject* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_PrintTime_mCE1029E13A352DB34EC2EF991632A85E26133EDB(_thisAdjusted, ___sb0, method);
}
// System.Void System.Xml.Schema.XsdDateTime::PrintZone(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_PrintZone_mA1766FF80B24A4E1D666DBB8C818C01A94330CF6 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0;
		L_0 = XsdDateTime_get_InternalKind_m40658E3A6C5DA52E96BCF334BF5760EB7092A88E(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, 1)))
		{
			case 0:
			{
				goto IL_001c;
			}
			case 1:
			{
				goto IL_0026;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		return;
	}

IL_001c:
	{
		StringBuilder_t* L_2 = ___sb0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)90), NULL);
		return;
	}

IL_0026:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_4 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_zz_16;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_5 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_4);
		V_0 = L_5;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_6 = V_0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)45));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_7 = V_0;
		int32_t L_8 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		int32_t L_9;
		L_9 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_7, L_8, L_9, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10 = V_0;
		int32_t L_11 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_14;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_12 = V_0;
		int32_t L_13 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz__15;
		int32_t L_14;
		L_14 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_12, L_13, L_14, NULL);
		StringBuilder_t* L_15 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_16 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_15, L_16, NULL);
		return;
	}

IL_006c:
	{
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_18 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_zz_16;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_19 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)L_18);
		V_0 = L_19;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_20 = V_0;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)43));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_21 = V_0;
		int32_t L_22 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		int32_t L_23;
		L_23 = XsdDateTime_get_ZoneHour_m9E35CDE49237CC3ECD3DE3D51AAB8E99300A2739(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_21, L_22, L_23, NULL);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_24 = V_0;
		int32_t L_25 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_14;
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Il2CppChar)((int32_t)58));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = V_0;
		int32_t L_27 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz__15;
		int32_t L_28;
		L_28 = XsdDateTime_get_ZoneMinute_m1D120C367B38D2F8B926469F418B6C2560C8E228(__this, NULL);
		XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(__this, L_26, L_27, L_28, NULL);
		StringBuilder_t* L_29 = ___sb0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_30 = V_0;
		NullCheck(L_29);
		StringBuilder_t* L_31;
		L_31 = StringBuilder_Append_m8455D90E068B02E8376B7650409E2325303D2456(L_29, L_30, NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_PrintZone_mA1766FF80B24A4E1D666DBB8C818C01A94330CF6_AdjustorThunk (RuntimeObject* __this, StringBuilder_t* ___sb0, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_PrintZone_mA1766FF80B24A4E1D666DBB8C818C01A94330CF6(_thisAdjusted, ___sb0, method);
}
// System.Void System.Xml.Schema.XsdDateTime::IntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131 (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method) 
{
	{
		goto IL_0016;
	}

IL_0002:
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___text0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___digits3;
		int32_t L_3 = ___value2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_3%((int32_t)10))), ((int32_t)48)))));
		int32_t L_4 = ___value2;
		___value2 = ((int32_t)(L_4/((int32_t)10)));
	}

IL_0016:
	{
		int32_t L_5 = ___digits3;
		int32_t L_6 = L_5;
		___digits3 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_IntToCharArray_mB95DA3CAFA3F603DFB73CB309A062670C217C131(_thisAdjusted, ___text0, ___start1, ___value2, ___digits3, method);
}
// System.Void System.Xml.Schema.XsdDateTime::ShortToCharArray(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A (XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, const RuntimeMethod* method) 
{
	{
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_0 = ___text0;
		int32_t L_1 = ___start1;
		int32_t L_2 = ___value2;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_2/((int32_t)10))), ((int32_t)48)))));
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_3 = ___text0;
		int32_t L_4 = ___start1;
		int32_t L_5 = ___value2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_4, 1))), (Il2CppChar)((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(((int32_t)(L_5%((int32_t)10))), ((int32_t)48)))));
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A_AdjustorThunk (RuntimeObject* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___text0, int32_t ___start1, int32_t ___value2, const RuntimeMethod* method)
{
	XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB*>(__this + _offset);
	XsdDateTime_ShortToCharArray_mC76C1DE32E31949CF46213E55D4C3DE7B21B621A(_thisAdjusted, ___text0, ___start1, ___value2, method);
}
// System.Void System.Xml.Schema.XsdDateTime::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDateTime__cctor_m4F12859B35713836F38CE50985C1492A7EC4D441 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A068BB3E9EA2EA72CF05B963841C49DBA8EEFF5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1F164EE4DE39AD90666ACDB4EA0CAABA7853CFCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2198F1C92174A1B44CB01773603D23F6671D3329);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57E00753C198BBF933B5B117333FD89AF5A3E48B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68D5513A81FE3BA8EC49159C52E6505DA8BEA242);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral878AE10D03D16A069554617545B8533ED09E594F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92094BBD8DE1A81022C0FCA98F179197BA588E99);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3E0185CFEE766D02511A6B411F83832EC44A795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF956214D83EED9D9B576DA1D727BD145303948);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCCD15A133CD38F3DFFFA94FA4D720EAC91F25B79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20945EB99E4CFCA27A66866A791F9AE0B7E4EBB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A16BBDB1662D7361031D5B9686BD4A9DD7F9D6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD67729AC2AE2B39DBBC387BDA1A36503B0C922C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB6A30F5C46ACC70D2AD58ABFB2A19A8F675C314);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE358F823C39A638A3134E442FF53D303271291F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2EE2B9C299895393EAD54EEC93812CB500B915F);
		s_Il2CppMethodInitialized = true;
	}
	{
		NullCheck(_stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9);
		int32_t L_0;
		L_0 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralDF1296B24672A38692CC663E858166C834F0ABD9, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2 = L_0;
		NullCheck(_stringLiteralCCD15A133CD38F3DFFFA94FA4D720EAC91F25B79);
		int32_t L_1;
		L_1 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCCD15A133CD38F3DFFFA94FA4D720EAC91F25B79, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy__3 = L_1;
		NullCheck(_stringLiteralE358F823C39A638A3134E442FF53D303271291F3);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralE358F823C39A638A3134E442FF53D303271291F3, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_4 = L_2;
		NullCheck(_stringLiteralD67729AC2AE2B39DBBC387BDA1A36503B0C922C1);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD67729AC2AE2B39DBBC387BDA1A36503B0C922C1, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM__5 = L_3;
		NullCheck(_stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral7BE89227A0BBC17012796DD27BB68B0D5FB2D35E, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6 = L_4;
		NullCheck(_stringLiteral878AE10D03D16A069554617545B8533ED09E594F);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral878AE10D03D16A069554617545B8533ED09E594F, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_ddT_7 = L_5;
		NullCheck(_stringLiteral68D5513A81FE3BA8EC49159C52E6505DA8BEA242);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral68D5513A81FE3BA8EC49159C52E6505DA8BEA242, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_8 = L_6;
		NullCheck(_stringLiteral57E00753C198BBF933B5B117333FD89AF5A3E48B);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral57E00753C198BBF933B5B117333FD89AF5A3E48B, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH__9 = L_7;
		NullCheck(_stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral18FF4EE509547E9F427ED4CBAD56460397F93F60, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_10 = L_8;
		NullCheck(_stringLiteral0A068BB3E9EA2EA72CF05B963841C49DBA8EEFF5);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral0A068BB3E9EA2EA72CF05B963841C49DBA8EEFF5, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm__11 = L_9;
		NullCheck(_stringLiteral92094BBD8DE1A81022C0FCA98F179197BA588E99);
		int32_t L_10;
		L_10 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral92094BBD8DE1A81022C0FCA98F179197BA588E99, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_ss_12 = L_10;
		NullCheck(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		int32_t L_11;
		L_11 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13 = L_11;
		NullCheck(_stringLiteralD3A16BBDB1662D7361031D5B9686BD4A9DD7F9D6);
		int32_t L_12;
		L_12 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD3A16BBDB1662D7361031D5B9686BD4A9DD7F9D6, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_14 = L_12;
		NullCheck(_stringLiteralDB6A30F5C46ACC70D2AD58ABFB2A19A8F675C314);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralDB6A30F5C46ACC70D2AD58ABFB2A19A8F675C314, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz__15 = L_13;
		NullCheck(_stringLiteral1F164EE4DE39AD90666ACDB4EA0CAABA7853CFCF);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral1F164EE4DE39AD90666ACDB4EA0CAABA7853CFCF, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_zz_16 = L_14;
		NullCheck(_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA);
		int32_t L_15;
		L_15 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral69520730213CDED741A5919BB83F6E4B8610EDBA, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17 = L_15;
		NullCheck(_stringLiteralF2EE2B9C299895393EAD54EEC93812CB500B915F);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralF2EE2B9C299895393EAD54EEC93812CB500B915F, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18 = L_16;
		NullCheck(_stringLiteralD20945EB99E4CFCA27A66866A791F9AE0B7E4EBB);
		int32_t L_17;
		L_17 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralD20945EB99E4CFCA27A66866A791F9AE0B7E4EBB, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm__19 = L_17;
		NullCheck(_stringLiteralA3E0185CFEE766D02511A6B411F83832EC44A795);
		int32_t L_18;
		L_18 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralA3E0185CFEE766D02511A6B411F83832EC44A795, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm___20 = L_18;
		NullCheck(_stringLiteral2198F1C92174A1B44CB01773603D23F6671D3329);
		int32_t L_19;
		L_19 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral2198F1C92174A1B44CB01773603D23F6671D3329, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_dd_21 = L_19;
		NullCheck(_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544);
		int32_t L_20;
		L_20 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteral111B078632ED414E9392C91DEE241B11C9EE8544, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz____22 = L_20;
		NullCheck(_stringLiteralCAF956214D83EED9D9B576DA1D727BD145303948);
		int32_t L_21;
		L_21 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralCAF956214D83EED9D9B576DA1D727BD145303948, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___dd_23 = L_21;
		XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41* L_22 = (XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41*)(XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41*)SZArrayNew(XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41_il2cpp_TypeInfo_var, (uint32_t)8);
		XmlTypeCodeU5BU5D_tD0B97C4F52D97F28CCCD25F34390B7414EA4BA41* L_23 = L_22;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_24 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____9DA6B2C4638D1DC7611B7F458BBFE7FD49FE1B36B67239B00B8A051F4E49558F_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_23, L_24, NULL);
		((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___typeCodes_24 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___typeCodes_24), (void*)L_23);
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
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke(const Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23& unmarshaled, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_pinvoke& marshaled)
{
	marshaled.___typeCode_0 = unmarshaled.___typeCode_0;
	marshaled.___year_1 = unmarshaled.___year_1;
	marshaled.___month_2 = unmarshaled.___month_2;
	marshaled.___day_3 = unmarshaled.___day_3;
	marshaled.___hour_4 = unmarshaled.___hour_4;
	marshaled.___minute_5 = unmarshaled.___minute_5;
	marshaled.___second_6 = unmarshaled.___second_6;
	marshaled.___fraction_7 = unmarshaled.___fraction_7;
	marshaled.___kind_8 = unmarshaled.___kind_8;
	marshaled.___zoneHour_9 = unmarshaled.___zoneHour_9;
	marshaled.___zoneMinute_10 = unmarshaled.___zoneMinute_10;
	marshaled.___text_11 = il2cpp_codegen_marshal_string(unmarshaled.___text_11);
	marshaled.___length_12 = unmarshaled.___length_12;
}
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_back(const Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_pinvoke& marshaled, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23& unmarshaled)
{
	int32_t unmarshaledtypeCode_temp_0 = 0;
	unmarshaledtypeCode_temp_0 = marshaled.___typeCode_0;
	unmarshaled.___typeCode_0 = unmarshaledtypeCode_temp_0;
	int32_t unmarshaledyear_temp_1 = 0;
	unmarshaledyear_temp_1 = marshaled.___year_1;
	unmarshaled.___year_1 = unmarshaledyear_temp_1;
	int32_t unmarshaledmonth_temp_2 = 0;
	unmarshaledmonth_temp_2 = marshaled.___month_2;
	unmarshaled.___month_2 = unmarshaledmonth_temp_2;
	int32_t unmarshaledday_temp_3 = 0;
	unmarshaledday_temp_3 = marshaled.___day_3;
	unmarshaled.___day_3 = unmarshaledday_temp_3;
	int32_t unmarshaledhour_temp_4 = 0;
	unmarshaledhour_temp_4 = marshaled.___hour_4;
	unmarshaled.___hour_4 = unmarshaledhour_temp_4;
	int32_t unmarshaledminute_temp_5 = 0;
	unmarshaledminute_temp_5 = marshaled.___minute_5;
	unmarshaled.___minute_5 = unmarshaledminute_temp_5;
	int32_t unmarshaledsecond_temp_6 = 0;
	unmarshaledsecond_temp_6 = marshaled.___second_6;
	unmarshaled.___second_6 = unmarshaledsecond_temp_6;
	int32_t unmarshaledfraction_temp_7 = 0;
	unmarshaledfraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.___fraction_7 = unmarshaledfraction_temp_7;
	int32_t unmarshaledkind_temp_8 = 0;
	unmarshaledkind_temp_8 = marshaled.___kind_8;
	unmarshaled.___kind_8 = unmarshaledkind_temp_8;
	int32_t unmarshaledzoneHour_temp_9 = 0;
	unmarshaledzoneHour_temp_9 = marshaled.___zoneHour_9;
	unmarshaled.___zoneHour_9 = unmarshaledzoneHour_temp_9;
	int32_t unmarshaledzoneMinute_temp_10 = 0;
	unmarshaledzoneMinute_temp_10 = marshaled.___zoneMinute_10;
	unmarshaled.___zoneMinute_10 = unmarshaledzoneMinute_temp_10;
	unmarshaled.___text_11 = il2cpp_codegen_marshal_string_result(marshaled.___text_11);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_11), (void*)il2cpp_codegen_marshal_string_result(marshaled.___text_11));
	int32_t unmarshaledlength_temp_12 = 0;
	unmarshaledlength_temp_12 = marshaled.___length_12;
	unmarshaled.___length_12 = unmarshaledlength_temp_12;
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_pinvoke_cleanup(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___text_11);
	marshaled.___text_11 = NULL;
}
// Conversion methods for marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_com(const Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23& unmarshaled, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_com& marshaled)
{
	marshaled.___typeCode_0 = unmarshaled.___typeCode_0;
	marshaled.___year_1 = unmarshaled.___year_1;
	marshaled.___month_2 = unmarshaled.___month_2;
	marshaled.___day_3 = unmarshaled.___day_3;
	marshaled.___hour_4 = unmarshaled.___hour_4;
	marshaled.___minute_5 = unmarshaled.___minute_5;
	marshaled.___second_6 = unmarshaled.___second_6;
	marshaled.___fraction_7 = unmarshaled.___fraction_7;
	marshaled.___kind_8 = unmarshaled.___kind_8;
	marshaled.___zoneHour_9 = unmarshaled.___zoneHour_9;
	marshaled.___zoneMinute_10 = unmarshaled.___zoneMinute_10;
	marshaled.___text_11 = il2cpp_codegen_marshal_bstring(unmarshaled.___text_11);
	marshaled.___length_12 = unmarshaled.___length_12;
}
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_com_back(const Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_com& marshaled, Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23& unmarshaled)
{
	int32_t unmarshaledtypeCode_temp_0 = 0;
	unmarshaledtypeCode_temp_0 = marshaled.___typeCode_0;
	unmarshaled.___typeCode_0 = unmarshaledtypeCode_temp_0;
	int32_t unmarshaledyear_temp_1 = 0;
	unmarshaledyear_temp_1 = marshaled.___year_1;
	unmarshaled.___year_1 = unmarshaledyear_temp_1;
	int32_t unmarshaledmonth_temp_2 = 0;
	unmarshaledmonth_temp_2 = marshaled.___month_2;
	unmarshaled.___month_2 = unmarshaledmonth_temp_2;
	int32_t unmarshaledday_temp_3 = 0;
	unmarshaledday_temp_3 = marshaled.___day_3;
	unmarshaled.___day_3 = unmarshaledday_temp_3;
	int32_t unmarshaledhour_temp_4 = 0;
	unmarshaledhour_temp_4 = marshaled.___hour_4;
	unmarshaled.___hour_4 = unmarshaledhour_temp_4;
	int32_t unmarshaledminute_temp_5 = 0;
	unmarshaledminute_temp_5 = marshaled.___minute_5;
	unmarshaled.___minute_5 = unmarshaledminute_temp_5;
	int32_t unmarshaledsecond_temp_6 = 0;
	unmarshaledsecond_temp_6 = marshaled.___second_6;
	unmarshaled.___second_6 = unmarshaledsecond_temp_6;
	int32_t unmarshaledfraction_temp_7 = 0;
	unmarshaledfraction_temp_7 = marshaled.___fraction_7;
	unmarshaled.___fraction_7 = unmarshaledfraction_temp_7;
	int32_t unmarshaledkind_temp_8 = 0;
	unmarshaledkind_temp_8 = marshaled.___kind_8;
	unmarshaled.___kind_8 = unmarshaledkind_temp_8;
	int32_t unmarshaledzoneHour_temp_9 = 0;
	unmarshaledzoneHour_temp_9 = marshaled.___zoneHour_9;
	unmarshaled.___zoneHour_9 = unmarshaledzoneHour_temp_9;
	int32_t unmarshaledzoneMinute_temp_10 = 0;
	unmarshaledzoneMinute_temp_10 = marshaled.___zoneMinute_10;
	unmarshaled.___zoneMinute_10 = unmarshaledzoneMinute_temp_10;
	unmarshaled.___text_11 = il2cpp_codegen_marshal_bstring_result(marshaled.___text_11);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___text_11), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___text_11));
	int32_t unmarshaledlength_temp_12 = 0;
	unmarshaledlength_temp_12 = marshaled.___length_12;
	unmarshaled.___length_12 = unmarshaledlength_temp_12;
}
// Conversion method for clean up from marshalling of: System.Xml.Schema.XsdDateTime/Parser
IL2CPP_EXTERN_C void Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshal_com_cleanup(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___text_11);
	marshaled.___text_11 = NULL;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse(System.String,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		String_t* L_0 = ___text0;
		__this->___text_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___text_11), (void*)L_0);
		String_t* L_1 = ___text0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		__this->___length_12 = L_2;
		V_0 = 0;
		goto IL_001b;
	}

IL_0017:
	{
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 1));
	}

IL_001b:
	{
		int32_t L_4 = V_0;
		int32_t L_5 = __this->___length_12;
		if ((((int32_t)L_4) >= ((int32_t)L_5)))
		{
			goto IL_0032;
		}
	}
	{
		String_t* L_6 = ___text0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_8, NULL);
		if (L_9)
		{
			goto IL_0017;
		}
	}

IL_0032:
	{
		int32_t L_10 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_10, ((int32_t)773), NULL);
		if (!L_11)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_12 = V_0;
		bool L_13;
		L_13 = Parser_ParseDate_mDD1FC2A4390DBB0F116BCA9CAA17D3ECE36D90E3(__this, L_12, NULL);
		if (!L_13)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_14 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_14, 1, NULL);
		if (!L_15)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_16 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		bool L_18;
		L_18 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)84), NULL);
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_19 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_20 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_ddT_7;
		bool L_21;
		L_21 = Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD(__this, ((int32_t)il2cpp_codegen_add(L_19, L_20)), NULL);
		if (!L_21)
		{
			goto IL_0080;
		}
	}
	{
		__this->___typeCode_0 = 0;
		return (bool)1;
	}

IL_0080:
	{
		int32_t L_22 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_22, 4, NULL);
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		int32_t L_24 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_25 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		bool L_26;
		L_26 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_24, L_25)), NULL);
		if (!L_26)
		{
			goto IL_00a1;
		}
	}
	{
		__this->___typeCode_0 = 2;
		return (bool)1;
	}

IL_00a1:
	{
		int32_t L_27 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_27, ((int32_t)512), NULL);
		if (!L_28)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_29 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_30 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		bool L_31;
		L_31 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_29, L_30)), NULL);
		if (L_31)
		{
			goto IL_00dd;
		}
	}
	{
		int32_t L_32 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_33 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		bool L_34;
		L_34 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_32, L_33)), ((int32_t)84), NULL);
		if (!L_34)
		{
			goto IL_00e6;
		}
	}
	{
		int32_t L_35 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_36 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_ddT_7;
		bool L_37;
		L_37 = Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD(__this, ((int32_t)il2cpp_codegen_add(L_35, L_36)), NULL);
		if (!L_37)
		{
			goto IL_00e6;
		}
	}

IL_00dd:
	{
		__this->___typeCode_0 = 8;
		return (bool)1;
	}

IL_00e6:
	{
		int32_t L_38 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_38, ((int32_t)256), NULL);
		if (!L_39)
		{
			goto IL_0125;
		}
	}
	{
		int32_t L_40 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_41 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_dd_6;
		bool L_42;
		L_42 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_40, L_41)), ((int32_t)84), NULL);
		if (!L_42)
		{
			goto IL_011c;
		}
	}
	{
		int32_t L_43 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_44 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_ddT_7;
		bool L_45;
		L_45 = Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21(__this, ((int32_t)il2cpp_codegen_add(L_43, L_44)), NULL);
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		__this->___typeCode_0 = 8;
		return (bool)1;
	}

IL_011c:
	{
		__this->___typeCode_0 = 8;
		return (bool)1;
	}

IL_0125:
	{
		int32_t L_46 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_47;
		L_47 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_46, 2, NULL);
		if (!L_47)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_48 = V_0;
		bool L_49;
		L_49 = Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD(__this, L_48, NULL);
		if (!L_49)
		{
			goto IL_0159;
		}
	}
	{
		__this->___year_1 = ((int32_t)1904);
		__this->___month_2 = 1;
		__this->___day_3 = 1;
		__this->___typeCode_0 = 1;
		return (bool)1;
	}

IL_0159:
	{
		int32_t L_50 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_50, ((int32_t)1024), NULL);
		if (!L_51)
		{
			goto IL_0191;
		}
	}
	{
		int32_t L_52 = V_0;
		bool L_53;
		L_53 = Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21(__this, L_52, NULL);
		if (!L_53)
		{
			goto IL_0191;
		}
	}
	{
		__this->___year_1 = ((int32_t)1904);
		__this->___month_2 = 1;
		__this->___day_3 = 1;
		__this->___typeCode_0 = 1;
		return (bool)1;
	}

IL_0191:
	{
		int32_t L_54 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_54, ((int32_t)24), NULL);
		if (!L_55)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_56 = V_0;
		int32_t* L_57 = (&__this->___year_1);
		bool L_58;
		L_58 = Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084(__this, L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_59 = __this->___year_1;
		if ((((int32_t)1) > ((int32_t)L_59)))
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_60 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_60, 8, NULL);
		if (!L_61)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_62 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_63 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		bool L_64;
		L_64 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_62, L_63)), ((int32_t)45), NULL);
		if (!L_64)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_65 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_66 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy__3;
		int32_t* L_67 = (&__this->___month_2);
		bool L_68;
		L_68 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_65, L_66)), L_67, NULL);
		if (!L_68)
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_69 = __this->___month_2;
		if ((((int32_t)1) > ((int32_t)L_69)))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_70 = __this->___month_2;
		if ((((int32_t)L_70) > ((int32_t)((int32_t)12))))
		{
			goto IL_021d;
		}
	}
	{
		int32_t L_71 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_72 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_4;
		bool L_73;
		L_73 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_71, L_72)), NULL);
		if (!L_73)
		{
			goto IL_021d;
		}
	}
	{
		__this->___day_3 = 1;
		__this->___typeCode_0 = 3;
		return (bool)1;
	}

IL_021d:
	{
		int32_t L_74 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_75;
		L_75 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_74, ((int32_t)16), NULL);
		if (!L_75)
		{
			goto IL_024d;
		}
	}
	{
		int32_t L_76 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_77 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		bool L_78;
		L_78 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_76, L_77)), NULL);
		if (!L_78)
		{
			goto IL_024d;
		}
	}
	{
		__this->___month_2 = 1;
		__this->___day_3 = 1;
		__this->___typeCode_0 = 4;
		return (bool)1;
	}

IL_024d:
	{
		int32_t L_79 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_79, ((int32_t)160), NULL);
		if (!L_80)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_81 = V_0;
		bool L_82;
		L_82 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, L_81, ((int32_t)45), NULL);
		if (!L_82)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_83 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_84 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		bool L_85;
		L_85 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_83, L_84)), ((int32_t)45), NULL);
		if (!L_85)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_86 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_87 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17;
		int32_t* L_88 = (&__this->___month_2);
		bool L_89;
		L_89 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_86, L_87)), L_88, NULL);
		if (!L_89)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_90 = __this->___month_2;
		if ((((int32_t)1) > ((int32_t)L_90)))
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_91 = __this->___month_2;
		if ((((int32_t)L_91) > ((int32_t)((int32_t)12))))
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_92 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_93;
		L_93 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_92, ((int32_t)32), NULL);
		if (!L_93)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_94 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_95 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18;
		bool L_96;
		L_96 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_94, L_95)), ((int32_t)45), NULL);
		if (!L_96)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_97 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_98 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm__19;
		int32_t* L_99 = (&__this->___day_3);
		bool L_100;
		L_100 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_97, L_98)), L_99, NULL);
		if (!L_100)
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_101 = __this->___day_3;
		if ((((int32_t)1) > ((int32_t)L_101)))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_102 = __this->___day_3;
		int32_t L_103 = __this->___month_2;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_104;
		L_104 = DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977(((int32_t)1904), L_103, NULL);
		if ((((int32_t)L_102) > ((int32_t)L_104)))
		{
			goto IL_0324;
		}
	}
	{
		int32_t L_105 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_106 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_dd_21;
		bool L_107;
		L_107 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_105, L_106)), NULL);
		if (!L_107)
		{
			goto IL_0324;
		}
	}
	{
		__this->___year_1 = ((int32_t)1904);
		__this->___typeCode_0 = 5;
		return (bool)1;
	}

IL_0324:
	{
		int32_t L_108 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_109;
		L_109 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_108, ((int32_t)128), NULL);
		if (!L_109)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_110 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_111 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18;
		bool L_112;
		L_112 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_110, L_111)), NULL);
		if (L_112)
		{
			goto IL_0371;
		}
	}
	{
		int32_t L_113 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_114 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm_18;
		bool L_115;
		L_115 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_113, L_114)), ((int32_t)45), NULL);
		if (!L_115)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_116 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_117 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm__19;
		bool L_118;
		L_118 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_116, L_117)), ((int32_t)45), NULL);
		if (!L_118)
		{
			goto IL_038c;
		}
	}
	{
		int32_t L_119 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_120 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__mm___20;
		bool L_121;
		L_121 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_119, L_120)), NULL);
		if (!L_121)
		{
			goto IL_038c;
		}
	}

IL_0371:
	{
		__this->___year_1 = ((int32_t)1904);
		__this->___day_3 = 1;
		__this->___typeCode_0 = 7;
		return (bool)1;
	}

IL_038c:
	{
		int32_t L_122 = ___kinds1;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		bool L_123;
		L_123 = Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD(L_122, ((int32_t)64), NULL);
		if (!L_123)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_124 = V_0;
		bool L_125;
		L_125 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, L_124, ((int32_t)45), NULL);
		if (!L_125)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_126 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_127 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		bool L_128;
		L_128 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_126, L_127)), ((int32_t)45), NULL);
		if (!L_128)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_129 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_130 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___17;
		bool L_131;
		L_131 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_129, L_130)), ((int32_t)45), NULL);
		if (!L_131)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_132 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_133 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz____22;
		int32_t* L_134 = (&__this->___day_3);
		bool L_135;
		L_135 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_132, L_133)), L_134, NULL);
		if (!L_135)
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_136 = __this->___day_3;
		if ((((int32_t)1) > ((int32_t)L_136)))
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_137 = __this->___day_3;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_138;
		L_138 = DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977(((int32_t)1904), 1, NULL);
		if ((((int32_t)L_137) > ((int32_t)L_138)))
		{
			goto IL_0421;
		}
	}
	{
		int32_t L_139 = V_0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_140 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz___dd_23;
		bool L_141;
		L_141 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, ((int32_t)il2cpp_codegen_add(L_139, L_140)), NULL);
		if (!L_141)
		{
			goto IL_0421;
		}
	}
	{
		__this->___year_1 = ((int32_t)1904);
		__this->___month_2 = 1;
		__this->___typeCode_0 = 6;
		return (bool)1;
	}

IL_0421:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9_AdjustorThunk (RuntimeObject* __this, String_t* ___text0, int32_t ___kinds1, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_Parse_m4027B362756419C910E1D041BB6CE2035B3603D9(_thisAdjusted, ___text0, ___kinds1, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseDate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseDate_mDD1FC2A4390DBB0F116BCA9CAA17D3ECE36D90E3 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___start0;
		int32_t* L_1 = (&__this->___year_1);
		bool L_2;
		L_2 = Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084(__this, L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_3 = __this->___year_1;
		if ((((int32_t)1) > ((int32_t)L_3)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_4 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_5 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_2;
		bool L_6;
		L_6 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_4, L_5)), ((int32_t)45), NULL);
		if (!L_6)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_7 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_8 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy__3;
		int32_t* L_9 = (&__this->___month_2);
		bool L_10;
		L_10 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_7, L_8)), L_9, NULL);
		if (!L_10)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_11 = __this->___month_2;
		if ((((int32_t)1) > ((int32_t)L_11)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_12 = __this->___month_2;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)12))))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_13 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_14 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM_4;
		bool L_15;
		L_15 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_13, L_14)), ((int32_t)45), NULL);
		if (!L_15)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_16 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lzyyyy_MM__5;
		int32_t* L_18 = (&__this->___day_3);
		bool L_19;
		L_19 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_16, L_17)), L_18, NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_20 = __this->___day_3;
		if ((((int32_t)1) > ((int32_t)L_20)))
		{
			goto IL_00a3;
		}
	}
	{
		int32_t L_21 = __this->___day_3;
		int32_t L_22 = __this->___year_1;
		int32_t L_23 = __this->___month_2;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		int32_t L_24;
		L_24 = DateTime_DaysInMonth_mB6063AA3711F1EE486B5FF6C858CDA9B04DD3977(L_22, L_23, NULL);
		return (bool)((((int32_t)((((int32_t)L_21) > ((int32_t)L_24))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_00a3:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseDate_mDD1FC2A4390DBB0F116BCA9CAA17D3ECE36D90E3_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseDate_mDD1FC2A4390DBB0F116BCA9CAA17D3ECE36D90E3(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420(__this, (&___start0), NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		int32_t L_1 = ___start0;
		bool L_2;
		L_2 = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(__this, L_1, NULL);
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		return (bool)1;
	}

IL_0015:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseTimeAndZoneAndWhitespace_m7D228802D6E72D8F6640D71EA9603F40358B77DD(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTimeAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	{
		bool L_0;
		L_0 = Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420(__this, (&___start0), NULL);
		if (!L_0)
		{
			goto IL_0024;
		}
	}
	{
		goto IL_0011;
	}

IL_000c:
	{
		int32_t L_1 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add(L_1, 1));
	}

IL_0011:
	{
		int32_t L_2 = ___start0;
		int32_t L_3 = __this->___length_12;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_4 = ___start0;
		int32_t L_5 = __this->___length_12;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0024:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseTimeAndWhitespace_mF1CAE3E888701743D8C536884D629EE0F22B1D21(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseTime(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t* ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t* L_0 = ___start0;
		int32_t L_1 = *((int32_t*)L_0);
		int32_t* L_2 = (&__this->___hour_4);
		bool L_3;
		L_3 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_4 = __this->___hour_4;
		if ((((int32_t)L_4) >= ((int32_t)((int32_t)24))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_5 = ___start0;
		int32_t L_6 = *((int32_t*)L_5);
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_7 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_8;
		bool L_8;
		L_8 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_6, L_7)), ((int32_t)58), NULL);
		if (!L_8)
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_9 = ___start0;
		int32_t L_10 = *((int32_t*)L_9);
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH__9;
		int32_t* L_12 = (&__this->___minute_5);
		bool L_13;
		L_13 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12, NULL);
		if (!L_13)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_14 = __this->___minute_5;
		if ((((int32_t)L_14) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_15 = ___start0;
		int32_t L_16 = *((int32_t*)L_15);
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_17 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_10;
		bool L_18;
		L_18 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_16, L_17)), ((int32_t)58), NULL);
		if (!L_18)
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_19 = ___start0;
		int32_t L_20 = *((int32_t*)L_19);
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_21 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm__11;
		int32_t* L_22 = (&__this->___second_6);
		bool L_23;
		L_23 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_20, L_21)), L_22, NULL);
		if (!L_23)
		{
			goto IL_0159;
		}
	}
	{
		int32_t L_24 = __this->___second_6;
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)60))))
		{
			goto IL_0159;
		}
	}
	{
		int32_t* L_25 = ___start0;
		int32_t* L_26 = ___start0;
		int32_t L_27 = *((int32_t*)L_26);
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_28 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___LzHH_mm_ss_12;
		*((int32_t*)L_25) = (int32_t)((int32_t)il2cpp_codegen_add(L_27, L_28));
		int32_t* L_29 = ___start0;
		int32_t L_30 = *((int32_t*)L_29);
		bool L_31;
		L_31 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, L_30, ((int32_t)46), NULL);
		if (!L_31)
		{
			goto IL_0157;
		}
	}
	{
		__this->___fraction_7 = 0;
		V_0 = 0;
		V_1 = 0;
		goto IL_010a;
	}

IL_00bc:
	{
		String_t* L_32 = __this->___text_11;
		int32_t* L_33 = ___start0;
		int32_t L_34 = *((int32_t*)L_33);
		NullCheck(L_32);
		Il2CppChar L_35;
		L_35 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_34, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_35, ((int32_t)48)));
		int32_t L_36 = V_2;
		if ((!(((uint32_t)((int32_t)9)) >= ((uint32_t)L_36))))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) >= ((int32_t)7)))
		{
			goto IL_00e9;
		}
	}
	{
		int32_t L_38 = __this->___fraction_7;
		int32_t L_39 = V_2;
		__this->___fraction_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_38, ((int32_t)10))), L_39));
		goto IL_0106;
	}

IL_00e9:
	{
		int32_t L_40 = V_0;
		if ((!(((uint32_t)L_40) == ((uint32_t)7))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_41 = V_2;
		if ((((int32_t)5) >= ((int32_t)L_41)))
		{
			goto IL_00f5;
		}
	}
	{
		V_1 = 1;
		goto IL_0106;
	}

IL_00f5:
	{
		int32_t L_42 = V_2;
		if ((!(((uint32_t)L_42) == ((uint32_t)5))))
		{
			goto IL_0106;
		}
	}
	{
		V_1 = (-1);
		goto IL_0106;
	}

IL_00fd:
	{
		int32_t L_43 = V_1;
		if ((((int32_t)L_43) >= ((int32_t)0)))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_44 = V_2;
		if (!L_44)
		{
			goto IL_0106;
		}
	}
	{
		V_1 = 1;
	}

IL_0106:
	{
		int32_t L_45 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_010a:
	{
		int32_t* L_46 = ___start0;
		int32_t* L_47 = ___start0;
		int32_t L_48 = *((int32_t*)L_47);
		V_3 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		int32_t L_49 = V_3;
		*((int32_t*)L_46) = (int32_t)L_49;
		int32_t L_50 = V_3;
		int32_t L_51 = __this->___length_12;
		if ((((int32_t)L_50) < ((int32_t)L_51)))
		{
			goto IL_00bc;
		}
	}

IL_011b:
	{
		int32_t L_52 = V_0;
		if ((((int32_t)L_52) >= ((int32_t)7)))
		{
			goto IL_013c;
		}
	}
	{
		int32_t L_53 = V_0;
		if (L_53)
		{
			goto IL_0124;
		}
	}
	{
		return (bool)0;
	}

IL_0124:
	{
		int32_t L_54 = __this->___fraction_7;
		il2cpp_codegen_runtime_class_init_inline(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_55 = ((Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_StaticFields*)il2cpp_codegen_static_fields_for(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var))->___Power10_13;
		int32_t L_56 = V_0;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_subtract(7, L_56));
		int32_t L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		__this->___fraction_7 = ((int32_t)il2cpp_codegen_multiply(L_54, L_58));
		goto IL_0157;
	}

IL_013c:
	{
		int32_t L_59 = V_1;
		if ((((int32_t)L_59) >= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		int32_t L_60 = __this->___fraction_7;
		V_1 = ((int32_t)(L_60&1));
	}

IL_0149:
	{
		int32_t L_61 = __this->___fraction_7;
		int32_t L_62 = V_1;
		__this->___fraction_7 = ((int32_t)il2cpp_codegen_add(L_61, L_62));
	}

IL_0157:
	{
		return (bool)1;
	}

IL_0159:
	{
		__this->___hour_4 = 0;
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420_AdjustorThunk (RuntimeObject* __this, int32_t* ___start0, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseTime_mF90100413CE0C7543E81BB585E86322A64090420(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseZoneAndWhitespace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->___length_12;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_00c4;
		}
	}
	{
		String_t* L_2 = __this->___text_11;
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_0 = L_4;
		Il2CppChar L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)90))))
		{
			goto IL_0023;
		}
	}
	{
		Il2CppChar L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)122)))))
		{
			goto IL_0034;
		}
	}

IL_0023:
	{
		__this->___kind_8 = 1;
		int32_t L_7 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add(L_7, 1));
		goto IL_00c4;
	}

IL_0034:
	{
		int32_t L_8 = ___start0;
		int32_t L_9 = __this->___length_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_8, 5))) >= ((int32_t)L_9)))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_10 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_11 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz__13;
		int32_t* L_12 = (&__this->___zoneHour_9);
		bool L_13;
		L_13 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_10, L_11)), L_12, NULL);
		if (!L_13)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_14 = __this->___zoneHour_9;
		if ((((int32_t)L_14) > ((int32_t)((int32_t)99))))
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_15 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_16 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_14;
		bool L_17;
		L_17 = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(__this, ((int32_t)il2cpp_codegen_add(L_15, L_16)), ((int32_t)58), NULL);
		if (!L_17)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_18 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_19 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz__15;
		int32_t* L_20 = (&__this->___zoneMinute_10);
		bool L_21;
		L_21 = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(__this, ((int32_t)il2cpp_codegen_add(L_18, L_19)), L_20, NULL);
		if (!L_21)
		{
			goto IL_00c4;
		}
	}
	{
		int32_t L_22 = __this->___zoneMinute_10;
		if ((((int32_t)L_22) > ((int32_t)((int32_t)99))))
		{
			goto IL_00c4;
		}
	}
	{
		Il2CppChar L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_00a8;
		}
	}
	{
		__this->___kind_8 = 2;
		int32_t L_24 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_25 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_zz_16;
		___start0 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		goto IL_00c4;
	}

IL_00a8:
	{
		Il2CppChar L_26 = V_0;
		if ((!(((uint32_t)L_26) == ((uint32_t)((int32_t)43)))))
		{
			goto IL_00c4;
		}
	}
	{
		__this->___kind_8 = 3;
		int32_t L_27 = ___start0;
		il2cpp_codegen_runtime_class_init_inline(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var);
		int32_t L_28 = ((XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_StaticFields*)il2cpp_codegen_static_fields_for(XsdDateTime_t232255D69CF1B25B380F0C9D87D0002844A1E8BB_il2cpp_TypeInfo_var))->___Lz_zz_zz_16;
		___start0 = ((int32_t)il2cpp_codegen_add(L_27, L_28));
		goto IL_00c4;
	}

IL_00bf:
	{
		int32_t L_29 = ___start0;
		___start0 = ((int32_t)il2cpp_codegen_add(L_29, 1));
	}

IL_00c4:
	{
		int32_t L_30 = ___start0;
		int32_t L_31 = __this->___length_12;
		if ((((int32_t)L_30) >= ((int32_t)L_31)))
		{
			goto IL_00e0;
		}
	}
	{
		String_t* L_32 = __this->___text_11;
		int32_t L_33 = ___start0;
		NullCheck(L_32);
		Il2CppChar L_34;
		L_34 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_32, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		bool L_35;
		L_35 = Char_IsWhiteSpace_m02AEC6EA19513CAFC6882CFCA54C45794D2B5924(L_34, NULL);
		if (L_35)
		{
			goto IL_00bf;
		}
	}

IL_00e0:
	{
		int32_t L_36 = ___start0;
		int32_t L_37 = __this->___length_12;
		return (bool)((((int32_t)L_36) == ((int32_t)L_37))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseZoneAndWhitespace_m59547EAFB80879B5FE3665C0EF560945A1003A25(_thisAdjusted, ___start0, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse4Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->___length_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 3))) >= ((int32_t)L_1)))
		{
			goto IL_0089;
		}
	}
	{
		String_t* L_2 = __this->___text_11;
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)48)));
		String_t* L_5 = __this->___text_11;
		int32_t L_6 = ___start0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)48)));
		String_t* L_8 = __this->___text_11;
		int32_t L_9 = ___start0;
		NullCheck(L_8);
		Il2CppChar L_10;
		L_10 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_8, ((int32_t)il2cpp_codegen_add(L_9, 2)), NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, ((int32_t)48)));
		String_t* L_11 = __this->___text_11;
		int32_t L_12 = ___start0;
		NullCheck(L_11);
		Il2CppChar L_13;
		L_13 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_11, ((int32_t)il2cpp_codegen_add(L_12, 3)), NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, ((int32_t)48)));
		int32_t L_14 = V_0;
		if ((((int32_t)0) > ((int32_t)L_14)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_16 = V_1;
		if ((((int32_t)0) > ((int32_t)L_16)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_17 = V_1;
		if ((((int32_t)L_17) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_18 = V_2;
		if ((((int32_t)0) > ((int32_t)L_18)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_19 = V_2;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_20 = V_3;
		if ((((int32_t)0) > ((int32_t)L_20)))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_21 = V_3;
		if ((((int32_t)L_21) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t* L_22 = ___num1;
		int32_t L_23 = V_0;
		int32_t L_24 = V_1;
		int32_t L_25 = V_2;
		int32_t L_26 = V_3;
		*((int32_t*)L_22) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_23, ((int32_t)10))), L_24)), ((int32_t)10))), L_25)), ((int32_t)10))), L_26));
		return (bool)1;
	}

IL_0089:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_Parse4Dig_m1CCFFA25225A107685596935A622002FDACEF084(_thisAdjusted, ___start0, ___num1, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Parse2Dig(System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->___length_12;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_0, 1))) >= ((int32_t)L_1)))
		{
			goto IL_0049;
		}
	}
	{
		String_t* L_2 = __this->___text_11;
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, ((int32_t)48)));
		String_t* L_5 = __this->___text_11;
		int32_t L_6 = ___start0;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, ((int32_t)il2cpp_codegen_add(L_6, 1)), NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, ((int32_t)48)));
		int32_t L_8 = V_0;
		if ((((int32_t)0) > ((int32_t)L_8)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_10 = V_1;
		if ((((int32_t)0) > ((int32_t)L_10)))
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)10))))
		{
			goto IL_0049;
		}
	}
	{
		int32_t* L_12 = ___num1;
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		*((int32_t*)L_12) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)10))), L_14));
		return (bool)1;
	}

IL_0049:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, int32_t* ___num1, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_Parse2Dig_m39FAABE5DA648F49504BB6561597C9D61AA5895A(_thisAdjusted, ___start0, ___num1, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::ParseChar(System.Int32,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344 (Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___start0;
		int32_t L_1 = __this->___length_12;
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_2 = __this->___text_11;
		int32_t L_3 = ___start0;
		NullCheck(L_2);
		Il2CppChar L_4;
		L_4 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_2, L_3, NULL);
		Il2CppChar L_5 = ___ch1;
		return (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
	}

IL_0019:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344_AdjustorThunk (RuntimeObject* __this, int32_t ___start0, Il2CppChar ___ch1, const RuntimeMethod* method)
{
	Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23*>(__this + _offset);
	bool _returnValue;
	_returnValue = Parser_ParseChar_mE5B16C9B491B95DB733A1F23220E1A9433A3D344(_thisAdjusted, ___start0, ___ch1, method);
	return _returnValue;
}
// System.Boolean System.Xml.Schema.XsdDateTime/Parser::Test(System.Xml.Schema.XsdDateTimeFlags,System.Xml.Schema.XsdDateTimeFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Parser_Test_m71B29FA9D834781A60C10EC0EBA3B24FBF7240DD (int32_t ___left0, int32_t ___right1, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___left0;
		int32_t L_1 = ___right1;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) <= ((uint32_t)0)))? 1 : 0);
	}
}
// System.Void System.Xml.Schema.XsdDateTime/Parser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Parser__cctor_m56CB9BAD206C2D94D0AC23E6E618F2AD736051E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_0 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)7);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = L_0;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_2 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tBAB6DC40B1709E21296656960228A17F1BE57FD7____499E4F5C84E20C7347E10100E0EC90C1945EA21C7C80809E4F7F474179B39DF6_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_1, L_2, NULL);
		((Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_StaticFields*)il2cpp_codegen_static_fields_for(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var))->___Power10_13 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_StaticFields*)il2cpp_codegen_static_fields_for(Parser_t0AD3F13CE3B3B6EA16191873E806C64A0F825D23_il2cpp_TypeInfo_var))->___Power10_13), (void*)L_1);
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
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, bool ___isNegative0, int32_t ___years1, int32_t ___months2, int32_t ___days3, int32_t ___hours4, int32_t ___minutes5, int32_t ___seconds6, int32_t ___nanoseconds7, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___years1;
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_000f;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCE9BB7116C03E5DA9D01F8D4803A0FFE9ADA5307)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_2 = ___months2;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_001e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_3 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD83041E889BDAEB8F029AF50549D1347BD7FC949)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_001e:
	{
		int32_t L_4 = ___days3;
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_002e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_5);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8243BA18D267E0E612210F4920079D9700A5DEEF)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_002e:
	{
		int32_t L_6 = ___hours4;
		if ((((int32_t)L_6) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_7 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9104E82394351D786F4B739689D0B28ACF18A43D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_003e:
	{
		int32_t L_8 = ___minutes5;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_004e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_9 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_9, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6912992FC50D2764B34BA8408AECF2DF5DB8080F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_004e:
	{
		int32_t L_10 = ___seconds6;
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralAC2806EA40D9F7601BBB6DA354C649B46D2D8877)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_005e:
	{
		int32_t L_12 = ___nanoseconds7;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_13 = ___nanoseconds7;
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)999999999))))
		{
			goto IL_0077;
		}
	}

IL_006c:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_14 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_14);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_14, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral58F2B4A0A3F5D63532995796ECF46099320B370D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_RuntimeMethod_var)));
	}

IL_0077:
	{
		int32_t L_15 = ___years1;
		__this->___years_0 = L_15;
		int32_t L_16 = ___months2;
		__this->___months_1 = L_16;
		int32_t L_17 = ___days3;
		__this->___days_2 = L_17;
		int32_t L_18 = ___hours4;
		__this->___hours_3 = L_18;
		int32_t L_19 = ___minutes5;
		__this->___minutes_4 = L_19;
		int32_t L_20 = ___seconds6;
		__this->___seconds_5 = L_20;
		int32_t L_21 = ___nanoseconds7;
		__this->___nanoseconds_6 = L_21;
		bool L_22 = ___isNegative0;
		if (!L_22)
		{
			goto IL_00c2;
		}
	}
	{
		uint32_t L_23 = __this->___nanoseconds_6;
		__this->___nanoseconds_6 = ((int32_t)((int32_t)L_23|((int32_t)-2147483648LL)));
	}

IL_00c2:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A_AdjustorThunk (RuntimeObject* __this, bool ___isNegative0, int32_t ___years1, int32_t ___months2, int32_t ___days3, int32_t ___hours4, int32_t ___minutes5, int32_t ___seconds6, int32_t ___nanoseconds7, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A(_thisAdjusted, ___isNegative0, ___years1, ___months2, ___days3, ___hours4, ___minutes5, ___seconds6, ___nanoseconds7, method);
}
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.TimeSpan,System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m2CE789343F1EE7728BE48C8ABF3392B8ED7BD390 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeSpan0, int32_t ___durationType1, const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	uint64_t V_1 = 0;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		int64_t L_0;
		L_0 = TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline((&___timeSpan0), NULL);
		V_0 = L_0;
		int64_t L_1 = V_0;
		if ((((int64_t)L_1) >= ((int64_t)((int64_t)0))))
		{
			goto IL_0014;
		}
	}
	{
		V_2 = (bool)1;
		int64_t L_2 = V_0;
		V_1 = ((-L_2));
		goto IL_0018;
	}

IL_0014:
	{
		V_2 = (bool)0;
		int64_t L_3 = V_0;
		V_1 = L_3;
	}

IL_0018:
	{
		int32_t L_4 = ___durationType1;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_0063;
		}
	}
	{
		uint64_t L_5 = V_1;
		V_3 = ((int32_t)((int64_t)((uint64_t)(int64_t)L_5/(uint64_t)(int64_t)((int64_t)315360000000000LL))));
		uint64_t L_6 = V_1;
		V_4 = ((int32_t)((int64_t)((uint64_t)(int64_t)((int64_t)((uint64_t)(int64_t)L_6%(uint64_t)(int64_t)((int64_t)315360000000000LL)))/(uint64_t)(int64_t)((int64_t)25920000000000LL))));
		int32_t L_7 = V_4;
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_004e;
		}
	}
	{
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		V_4 = 0;
	}

IL_004e:
	{
		bool L_9 = V_2;
		int32_t L_10 = V_3;
		int32_t L_11 = V_4;
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D L_12;
		memset((&L_12), 0, sizeof(L_12));
		XsdDuration__ctor_m38DC4CBC4227909F4B1AF6A15D90026E3EDA2E8A((&L_12), L_9, L_10, L_11, 0, 0, 0, 0, 0, /*hidden argument*/NULL);
		*(XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*)__this = L_12;
		return;
	}

IL_0063:
	{
		uint64_t L_13 = V_1;
		__this->___nanoseconds_6 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(uint32_t)((int64_t)((uint64_t)(int64_t)L_13%(uint64_t)(int64_t)((int64_t)((int32_t)10000000))))), ((int32_t)100)));
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		uint32_t L_15 = __this->___nanoseconds_6;
		__this->___nanoseconds_6 = ((int32_t)((int32_t)L_15|((int32_t)-2147483648LL)));
	}

IL_008a:
	{
		__this->___years_0 = 0;
		__this->___months_1 = 0;
		uint64_t L_16 = V_1;
		__this->___days_2 = ((int32_t)((int64_t)((uint64_t)(int64_t)L_16/(uint64_t)(int64_t)((int64_t)864000000000LL))));
		uint64_t L_17 = V_1;
		__this->___hours_3 = ((int32_t)((int64_t)((uint64_t)(int64_t)((int64_t)((uint64_t)(int64_t)L_17/(uint64_t)(int64_t)((int64_t)36000000000LL)))%(uint64_t)(int64_t)((int64_t)((int32_t)24)))));
		uint64_t L_18 = V_1;
		__this->___minutes_4 = ((int32_t)((int64_t)((uint64_t)(int64_t)((int64_t)((uint64_t)(int64_t)L_18/(uint64_t)(int64_t)((int64_t)((int32_t)600000000))))%(uint64_t)(int64_t)((int64_t)((int32_t)60)))));
		uint64_t L_19 = V_1;
		__this->___seconds_5 = ((int32_t)((int64_t)((uint64_t)(int64_t)((int64_t)((uint64_t)(int64_t)L_19/(uint64_t)(int64_t)((int64_t)((int32_t)10000000))))%(uint64_t)(int64_t)((int64_t)((int32_t)60)))));
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDuration__ctor_m2CE789343F1EE7728BE48C8ABF3392B8ED7BD390_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeSpan0, int32_t ___durationType1, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	XsdDuration__ctor_m2CE789343F1EE7728BE48C8ABF3392B8ED7BD390(_thisAdjusted, ___timeSpan0, ___durationType1, method);
}
// System.Void System.Xml.Schema.XsdDuration::.ctor(System.String,System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, String_t* ___s0, int32_t ___durationType1, const RuntimeMethod* method) 
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	{
		String_t* L_0 = ___s0;
		int32_t L_1 = ___durationType1;
		Exception_t* L_2;
		L_2 = XsdDuration_TryParse_mD1BACB59A72886E68BF87FCFF8A837082F963D96(L_0, L_1, (&V_0), NULL);
		V_1 = L_2;
		Exception_t* L_3 = V_1;
		if (!L_3)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t* L_4 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48_RuntimeMethod_var)));
	}

IL_000f:
	{
		int32_t L_5;
		L_5 = XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E_inline((&V_0), NULL);
		__this->___years_0 = L_5;
		int32_t L_6;
		L_6 = XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851_inline((&V_0), NULL);
		__this->___months_1 = L_6;
		int32_t L_7;
		L_7 = XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A_inline((&V_0), NULL);
		__this->___days_2 = L_7;
		int32_t L_8;
		L_8 = XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF_inline((&V_0), NULL);
		__this->___hours_3 = L_8;
		int32_t L_9;
		L_9 = XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C_inline((&V_0), NULL);
		__this->___minutes_4 = L_9;
		int32_t L_10;
		L_10 = XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C_inline((&V_0), NULL);
		__this->___seconds_5 = L_10;
		int32_t L_11;
		L_11 = XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7((&V_0), NULL);
		__this->___nanoseconds_6 = L_11;
		bool L_12;
		L_12 = XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E((&V_0), NULL);
		if (!L_12)
		{
			goto IL_0085;
		}
	}
	{
		uint32_t L_13 = __this->___nanoseconds_6;
		__this->___nanoseconds_6 = ((int32_t)((int32_t)L_13|((int32_t)-2147483648LL)));
	}

IL_0085:
	{
		return;
	}
}
IL2CPP_EXTERN_C  void XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48_AdjustorThunk (RuntimeObject* __this, String_t* ___s0, int32_t ___durationType1, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	XsdDuration__ctor_m34337885047100969A6121F7CFAE5530C40E9B48(_thisAdjusted, ___s0, ___durationType1, method);
}
// System.Boolean System.Xml.Schema.XsdDuration::get_IsNegative()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___nanoseconds_6;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)-2147483648LL)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	bool _returnValue;
	_returnValue = XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Years()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___years_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Months()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___months_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Days()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___days_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Hours()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hours_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Minutes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___minutes_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Seconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___seconds_5;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 System.Xml.Schema.XsdDuration::get_Nanoseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->___nanoseconds_6;
		return ((int32_t)((int32_t)L_0&((int32_t)2147483647LL)));
	}
}
IL2CPP_EXTERN_C  int32_t XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7(_thisAdjusted, method);
	return _returnValue;
}
// System.TimeSpan System.Xml.Schema.XsdDuration::ToTimeSpan(System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	{
		int32_t L_0 = ___durationType0;
		Exception_t* L_1;
		L_1 = XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171(__this, L_0, (&V_0), NULL);
		V_1 = L_1;
		Exception_t* L_2 = V_1;
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		Exception_t* L_3 = V_1;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A_RuntimeMethod_var)));
	}

IL_000f:
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A_AdjustorThunk (RuntimeObject* __this, int32_t ___durationType0, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A _returnValue;
	_returnValue = XsdDuration_ToTimeSpan_mBE8EA5F151FE97572999EDFA85A3DAAA13B04B9A(_thisAdjusted, ___durationType0, method);
	return _returnValue;
}
// System.Exception System.Xml.Schema.XsdDuration::TryToTimeSpan(System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryToTimeSpan_m7B81B7074288D60D1CB8E15006291E3227BAFBA3 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result0, const RuntimeMethod* method) 
{
	{
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_0 = ___result0;
		Exception_t* L_1;
		L_1 = XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171(__this, 0, L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  Exception_t* XsdDuration_TryToTimeSpan_m7B81B7074288D60D1CB8E15006291E3227BAFBA3_AdjustorThunk (RuntimeObject* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result0, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	Exception_t* _returnValue;
	_returnValue = XsdDuration_TryToTimeSpan_m7B81B7074288D60D1CB8E15006291E3227BAFBA3(_thisAdjusted, ___result0, method);
	return _returnValue;
}
// System.Exception System.Xml.Schema.XsdDuration::TryToTimeSpan(System.Xml.Schema.XsdDuration/DurationType,System.TimeSpan&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	uint64_t V_1 = 0;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		V_0 = (Exception_t*)NULL;
		V_1 = ((int64_t)0);
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_0 = ___durationType0;
			if ((((int32_t)L_0) == ((int32_t)2)))
			{
				goto IL_0038_1;
			}
		}
		{
			uint64_t L_1 = V_1;
			int32_t L_2 = __this->___years_0;
			if ((uint64_t)(L_2) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			int32_t L_3 = __this->___months_1;
			if ((uint64_t)(L_3) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)((uint64_t)L_2) > kIl2CppUInt64Max - (uint64_t)((int64_t)((uint64_t)(int64_t)((uint64_t)L_3)/(uint64_t)(int64_t)((int64_t)((int32_t)12)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if (il2cpp_codegen_check_mul_oveflow_u64(((int64_t)il2cpp_codegen_add((int64_t)((uint64_t)L_2), ((int64_t)((uint64_t)(int64_t)((uint64_t)L_3)/(uint64_t)(int64_t)((int64_t)((int32_t)12)))))), ((int64_t)((int32_t)365))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_1 > kIl2CppUInt64Max - (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)((uint64_t)L_2), ((int64_t)((uint64_t)(int64_t)((uint64_t)L_3)/(uint64_t)(int64_t)((int64_t)((int32_t)12)))))), ((int64_t)((int32_t)365)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_1, ((int64_t)il2cpp_codegen_multiply(((int64_t)il2cpp_codegen_add((int64_t)((uint64_t)L_2), ((int64_t)((uint64_t)(int64_t)((uint64_t)L_3)/(uint64_t)(int64_t)((int64_t)((int32_t)12)))))), ((int64_t)((int32_t)365))))));
			uint64_t L_4 = V_1;
			int32_t L_5 = __this->___months_1;
			if ((uint64_t)(L_5) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if (il2cpp_codegen_check_mul_oveflow_u64(((int64_t)((uint64_t)(int64_t)((uint64_t)L_5)%(uint64_t)(int64_t)((int64_t)((int32_t)12)))), ((int64_t)((int32_t)30))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_4 > kIl2CppUInt64Max - (uint64_t)((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)(int64_t)((uint64_t)L_5)%(uint64_t)(int64_t)((int64_t)((int32_t)12)))), ((int64_t)((int32_t)30)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_4, ((int64_t)il2cpp_codegen_multiply(((int64_t)((uint64_t)(int64_t)((uint64_t)L_5)%(uint64_t)(int64_t)((int64_t)((int32_t)12)))), ((int64_t)((int32_t)30))))));
		}

IL_0038_1:
		{
			int32_t L_6 = ___durationType0;
			if ((((int32_t)L_6) == ((int32_t)1)))
			{
				goto IL_008f_1;
			}
		}
		{
			uint64_t L_7 = V_1;
			int32_t L_8 = __this->___days_2;
			if ((uint64_t)(L_8) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_7 > kIl2CppUInt64Max - (uint64_t)((uint64_t)L_8))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)((uint64_t)L_8)));
			uint64_t L_9 = V_1;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_9, ((int64_t)((int32_t)24))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_9, ((int64_t)((int32_t)24))));
			uint64_t L_10 = V_1;
			int32_t L_11 = __this->___hours_3;
			if ((uint64_t)(L_11) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_10 > kIl2CppUInt64Max - (uint64_t)((uint64_t)L_11))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, (int64_t)((uint64_t)L_11)));
			uint64_t L_12 = V_1;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_12, ((int64_t)((int32_t)60))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_12, ((int64_t)((int32_t)60))));
			uint64_t L_13 = V_1;
			int32_t L_14 = __this->___minutes_4;
			if ((uint64_t)(L_14) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_13 > kIl2CppUInt64Max - (uint64_t)((uint64_t)L_14))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_13, (int64_t)((uint64_t)L_14)));
			uint64_t L_15 = V_1;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_15, ((int64_t)((int32_t)60))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_15, ((int64_t)((int32_t)60))));
			uint64_t L_16 = V_1;
			int32_t L_17 = __this->___seconds_5;
			if ((uint64_t)(L_17) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_16 > kIl2CppUInt64Max - (uint64_t)((uint64_t)L_17))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_16, (int64_t)((uint64_t)L_17)));
			uint64_t L_18 = V_1;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_18, ((int64_t)((int32_t)10000000))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_18, ((int64_t)((int32_t)10000000))));
			uint64_t L_19 = V_1;
			int32_t L_20;
			L_20 = XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7(__this, NULL);
			if ((uint64_t)(L_20) > (std::numeric_limits<uint64_t>::max)()) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if ((uint64_t)L_19 > kIl2CppUInt64Max - (uint64_t)((int64_t)((uint64_t)(int64_t)((uint64_t)L_20)/(uint64_t)(int64_t)((int64_t)((int32_t)100)))))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_add((int64_t)L_19, ((int64_t)((uint64_t)(int64_t)((uint64_t)L_20)/(uint64_t)(int64_t)((int64_t)((int32_t)100))))));
			goto IL_009b_1;
		}

IL_008f_1:
		{
			uint64_t L_21 = V_1;
			if (il2cpp_codegen_check_mul_oveflow_u64(L_21, ((int64_t)864000000000LL)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			V_1 = ((int64_t)il2cpp_codegen_multiply((int64_t)L_21, ((int64_t)864000000000LL)));
		}

IL_009b_1:
		{
			bool L_22;
			L_22 = XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E(__this, NULL);
			if (!L_22)
			{
				goto IL_00d7_1;
			}
		}
		{
			uint64_t L_23 = V_1;
			if ((!(((uint64_t)L_23) == ((uint64_t)((int64_t)(std::numeric_limits<int64_t>::min)())))))
			{
				goto IL_00c5_1;
			}
		}
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_24 = ___result1;
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_25;
			memset((&L_25), 0, sizeof(L_25));
			TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_25), ((int64_t)(std::numeric_limits<int64_t>::min)()), /*hidden argument*/NULL);
			*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_24 = L_25;
			goto IL_00e4_1;
		}

IL_00c5_1:
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_26 = ___result1;
			uint64_t L_27 = V_1;
			if ((uint64_t)(L_27) > 9223372036854775807LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			if (il2cpp_codegen_check_sub_overflow((int64_t)((int64_t)0), (int64_t)((int64_t)L_27)))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_28;
			memset((&L_28), 0, sizeof(L_28));
			TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_28), ((int64_t)il2cpp_codegen_subtract(((int64_t)0), ((int64_t)L_27))), /*hidden argument*/NULL);
			*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_26 = L_28;
			goto IL_00e4_1;
		}

IL_00d7_1:
		{
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_29 = ___result1;
			uint64_t L_30 = V_1;
			if ((uint64_t)(L_30) > 9223372036854775807LL) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_RuntimeMethod_var);
			TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_31;
			memset((&L_31), 0, sizeof(L_31));
			TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline((&L_31), ((int64_t)L_30), /*hidden argument*/NULL);
			*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_29 = L_31;
		}

IL_00e4_1:
		{
			V_2 = (Exception_t*)NULL;
			goto IL_011f;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00e8;
		}
		throw e;
	}

CATCH_00e8:
	{// begin catch(System.OverflowException)
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* L_32 = ___result1;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var)));
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_33 = ((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_il2cpp_TypeInfo_var))))->___MinValue_21;
		*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)L_32 = L_33;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var)), (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_34;
		int32_t L_36 = ___durationType0;
		int32_t L_37 = L_36;
		RuntimeObject* L_38 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DurationType_tD4A0AE07CC0C51C05B70E801ABF6EE88FAE8D8F9_il2cpp_TypeInfo_var)), &L_37);
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_38);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_38);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = L_35;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F18017512A760F46C8C6E41C462F76716509F)));
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral356F18017512A760F46C8C6E41C462F76716509F)));
		String_t* L_40;
		L_40 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A)), L_39, NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_41 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_41);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_41, L_40, NULL);
		V_0 = L_41;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_011d;
	}// end catch (depth: 1)

IL_011d:
	{
		Exception_t* L_42 = V_0;
		return L_42;
	}

IL_011f:
	{
		Exception_t* L_43 = V_2;
		return L_43;
	}
}
IL2CPP_EXTERN_C  Exception_t* XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171_AdjustorThunk (RuntimeObject* __this, int32_t ___durationType0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* ___result1, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	Exception_t* _returnValue;
	_returnValue = XsdDuration_TryToTimeSpan_mD2D18571E29C257F265B446E3DF060DC71336171(_thisAdjusted, ___durationType0, ___result1, method);
	return _returnValue;
}
// System.String System.Xml.Schema.XsdDuration::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_ToString_m678A09FD579D77D415021761FE814A1C49A50DFD (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = XsdDuration_ToString_mAB96AA9C1E85D555476303E2D1D741B02FD6C698(__this, 0, NULL);
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XsdDuration_ToString_m678A09FD579D77D415021761FE814A1C49A50DFD_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XsdDuration_ToString_m678A09FD579D77D415021761FE814A1C49A50DFD(_thisAdjusted, method);
	return _returnValue;
}
// System.String System.Xml.Schema.XsdDuration::ToString(System.Xml.Schema.XsdDuration/DurationType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_ToString_mAB96AA9C1E85D555476303E2D1D741B02FD6C698 (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, int32_t ___durationType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F79376E49FC345D1F74769B7D1E538AE10FAE5C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE33B655BD7CA37454FF89A8C0BDA6B8196C65A77);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m2619CA8D2C3476DF1A302D9D941498BB1C6164C5(L_0, ((int32_t)20), NULL);
		V_0 = L_0;
		bool L_1;
		L_1 = XsdDuration_get_IsNegative_m7AD0EE954916BAD77BE84976C1F9D8D3854F2B7E(__this, NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		StringBuilder_t* L_2 = V_0;
		NullCheck(L_2);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_2, ((int32_t)45), NULL);
	}

IL_0019:
	{
		StringBuilder_t* L_4 = V_0;
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_4, ((int32_t)80), NULL);
		int32_t L_6 = ___durationType0;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_006c;
		}
	}
	{
		int32_t L_7 = __this->___years_0;
		if (!L_7)
		{
			goto IL_0049;
		}
	}
	{
		StringBuilder_t* L_8 = V_0;
		int32_t L_9 = __this->___years_0;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_10;
		L_10 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		StringBuilder_t* L_12 = V_0;
		NullCheck(L_12);
		StringBuilder_t* L_13;
		L_13 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_12, ((int32_t)89), NULL);
	}

IL_0049:
	{
		int32_t L_14 = __this->___months_1;
		if (!L_14)
		{
			goto IL_006c;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		int32_t L_16 = __this->___months_1;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_17;
		L_17 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_16, NULL);
		NullCheck(L_15);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, L_17, NULL);
		StringBuilder_t* L_19 = V_0;
		NullCheck(L_19);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_19, ((int32_t)77), NULL);
	}

IL_006c:
	{
		int32_t L_21 = ___durationType0;
		if ((((int32_t)L_21) == ((int32_t)1)))
		{
			goto IL_01c1;
		}
	}
	{
		int32_t L_22 = __this->___days_2;
		if (!L_22)
		{
			goto IL_0096;
		}
	}
	{
		StringBuilder_t* L_23 = V_0;
		int32_t L_24 = __this->___days_2;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_25;
		L_25 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_24, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_26;
		L_26 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_25, NULL);
		StringBuilder_t* L_27 = V_0;
		NullCheck(L_27);
		StringBuilder_t* L_28;
		L_28 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_27, ((int32_t)68), NULL);
	}

IL_0096:
	{
		int32_t L_29 = __this->___hours_3;
		if (L_29)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_30 = __this->___minutes_4;
		if (L_30)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_31 = __this->___seconds_5;
		if (L_31)
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_32;
		L_32 = XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7(__this, NULL);
		if (!L_32)
		{
			goto IL_01a1;
		}
	}

IL_00b9:
	{
		StringBuilder_t* L_33 = V_0;
		NullCheck(L_33);
		StringBuilder_t* L_34;
		L_34 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_33, ((int32_t)84), NULL);
		int32_t L_35 = __this->___hours_3;
		if (!L_35)
		{
			goto IL_00e5;
		}
	}
	{
		StringBuilder_t* L_36 = V_0;
		int32_t L_37 = __this->___hours_3;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_38;
		L_38 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_37, NULL);
		NullCheck(L_36);
		StringBuilder_t* L_39;
		L_39 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_36, L_38, NULL);
		StringBuilder_t* L_40 = V_0;
		NullCheck(L_40);
		StringBuilder_t* L_41;
		L_41 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_40, ((int32_t)72), NULL);
	}

IL_00e5:
	{
		int32_t L_42 = __this->___minutes_4;
		if (!L_42)
		{
			goto IL_0108;
		}
	}
	{
		StringBuilder_t* L_43 = V_0;
		int32_t L_44 = __this->___minutes_4;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_45;
		L_45 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_44, NULL);
		NullCheck(L_43);
		StringBuilder_t* L_46;
		L_46 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_43, L_45, NULL);
		StringBuilder_t* L_47 = V_0;
		NullCheck(L_47);
		StringBuilder_t* L_48;
		L_48 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_47, ((int32_t)77), NULL);
	}

IL_0108:
	{
		int32_t L_49;
		L_49 = XsdDuration_get_Nanoseconds_m15052A05CD863DC5F37D1D614433B44D813F2AE7(__this, NULL);
		V_1 = L_49;
		int32_t L_50 = __this->___seconds_5;
		if (L_50)
		{
			goto IL_011d;
		}
	}
	{
		int32_t L_51 = V_1;
		if (!L_51)
		{
			goto IL_01a1;
		}
	}

IL_011d:
	{
		StringBuilder_t* L_52 = V_0;
		int32_t L_53 = __this->___seconds_5;
		il2cpp_codegen_runtime_class_init_inline(XmlConvert_t5D100AFD62FF717BD4F8A6CABA9EDF7A5DF719EA_il2cpp_TypeInfo_var);
		String_t* L_54;
		L_54 = XmlConvert_ToString_m2C27F48B600DAF58ADCCE84D9AA0D27CE77ABC63(L_53, NULL);
		NullCheck(L_52);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_52, L_54, NULL);
		int32_t L_56 = V_1;
		if (!L_56)
		{
			goto IL_0198;
		}
	}
	{
		StringBuilder_t* L_57 = V_0;
		NullCheck(L_57);
		StringBuilder_t* L_58;
		L_58 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_57, ((int32_t)46), NULL);
		StringBuilder_t* L_59 = V_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_59, NULL);
		V_4 = L_60;
		StringBuilder_t* L_61 = V_0;
		StringBuilder_t* L_62 = L_61;
		NullCheck(L_62);
		int32_t L_63;
		L_63 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_62, NULL);
		NullCheck(L_62);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_62, ((int32_t)il2cpp_codegen_add(L_63, ((int32_t)9))), NULL);
		StringBuilder_t* L_64 = V_0;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_64, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_65, 1));
		int32_t L_66 = V_3;
		V_5 = L_66;
		goto IL_0189;
	}

IL_0160:
	{
		int32_t L_67 = V_1;
		V_2 = ((int32_t)(L_67%((int32_t)10)));
		StringBuilder_t* L_68 = V_0;
		int32_t L_69 = V_5;
		int32_t L_70 = V_2;
		NullCheck(L_68);
		StringBuilder_set_Chars_m20B53B0EEAB2A0BB0EC84A130FF12EA86ADD99AE(L_68, L_69, ((int32_t)(uint16_t)((int32_t)il2cpp_codegen_add(L_70, ((int32_t)48)))), NULL);
		int32_t L_71 = V_3;
		int32_t L_72 = V_5;
		if ((!(((uint32_t)L_71) == ((uint32_t)L_72))))
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_73 = V_2;
		if (L_73)
		{
			goto IL_017e;
		}
	}
	{
		int32_t L_74 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_74, 1));
	}

IL_017e:
	{
		int32_t L_75 = V_1;
		V_1 = ((int32_t)(L_75/((int32_t)10)));
		int32_t L_76 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_subtract(L_76, 1));
	}

IL_0189:
	{
		int32_t L_77 = V_5;
		int32_t L_78 = V_4;
		if ((((int32_t)L_77) >= ((int32_t)L_78)))
		{
			goto IL_0160;
		}
	}
	{
		StringBuilder_t* L_79 = V_0;
		int32_t L_80 = V_3;
		NullCheck(L_79);
		StringBuilder_set_Length_mE2427BDAEF91C4E4A6C80F3BDF1F6E01DBCC2414(L_79, ((int32_t)il2cpp_codegen_add(L_80, 1)), NULL);
	}

IL_0198:
	{
		StringBuilder_t* L_81 = V_0;
		NullCheck(L_81);
		StringBuilder_t* L_82;
		L_82 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_81, ((int32_t)83), NULL);
	}

IL_01a1:
	{
		StringBuilder_t* L_83 = V_0;
		StringBuilder_t* L_84 = V_0;
		NullCheck(L_84);
		int32_t L_85;
		L_85 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_84, NULL);
		NullCheck(L_83);
		Il2CppChar L_86;
		L_86 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_83, ((int32_t)il2cpp_codegen_subtract(L_85, 1)), NULL);
		if ((!(((uint32_t)L_86) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_01df;
		}
	}
	{
		StringBuilder_t* L_87 = V_0;
		NullCheck(L_87);
		StringBuilder_t* L_88;
		L_88 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_87, _stringLiteralE33B655BD7CA37454FF89A8C0BDA6B8196C65A77, NULL);
		goto IL_01df;
	}

IL_01c1:
	{
		StringBuilder_t* L_89 = V_0;
		StringBuilder_t* L_90 = V_0;
		NullCheck(L_90);
		int32_t L_91;
		L_91 = StringBuilder_get_Length_mDEA041E7357C68CC3B5885276BB403676DAAE0D8(L_90, NULL);
		NullCheck(L_89);
		Il2CppChar L_92;
		L_92 = StringBuilder_get_Chars_m254FD6F2F75C00B0D353D73B2A4A19316BD7624D(L_89, ((int32_t)il2cpp_codegen_subtract(L_91, 1)), NULL);
		if ((!(((uint32_t)L_92) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_01df;
		}
	}
	{
		StringBuilder_t* L_93 = V_0;
		NullCheck(L_93);
		StringBuilder_t* L_94;
		L_94 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_93, _stringLiteral5F79376E49FC345D1F74769B7D1E538AE10FAE5C, NULL);
	}

IL_01df:
	{
		StringBuilder_t* L_95 = V_0;
		NullCheck(L_95);
		String_t* L_96;
		L_96 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_95);
		return L_96;
	}
}
IL2CPP_EXTERN_C  String_t* XsdDuration_ToString_mAB96AA9C1E85D555476303E2D1D741B02FD6C698_AdjustorThunk (RuntimeObject* __this, int32_t ___durationType0, const RuntimeMethod* method)
{
	XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XsdDuration_ToString_mAB96AA9C1E85D555476303E2D1D741B02FD6C698(_thisAdjusted, ___durationType0, method);
	return _returnValue;
}
// System.Exception System.Xml.Schema.XsdDuration::TryParse(System.String,System.Xml.Schema.XsdDuration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryParse_mBCD96EA9E72F071E02A1BC0915582DDC308BA258 (String_t* ___s0, XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* ___result1, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___s0;
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_1 = ___result1;
		Exception_t* L_2;
		L_2 = XsdDuration_TryParse_mD1BACB59A72886E68BF87FCFF8A837082F963D96(L_0, 0, L_1, NULL);
		return L_2;
	}
}
// System.Exception System.Xml.Schema.XsdDuration::TryParse(System.String,System.Xml.Schema.XsdDuration/DurationType,System.Xml.Schema.XsdDuration&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* XsdDuration_TryParse_mD1BACB59A72886E68BF87FCFF8A837082F963D96 (String_t* ___s0, int32_t ___durationType1, XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* ___result2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DurationType_tD4A0AE07CC0C51C05B70E801ABF6EE88FAE8D8F9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D04002FC7142DC7148763C90BB38AEEC554A158);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		V_4 = 0;
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_0 = ___result2;
		il2cpp_codegen_initobj(L_0, sizeof(XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D));
		String_t* L_1 = ___s0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = String_Trim_mCD6D8C6D4CFD15225D12DB7D3E0544CA80FB8DA5(L_1, NULL);
		___s0 = L_2;
		String_t* L_3 = ___s0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		V_0 = L_4;
		V_2 = 0;
		V_3 = 0;
		int32_t L_5 = V_2;
		int32_t L_6 = V_0;
		if ((((int32_t)L_5) >= ((int32_t)L_6)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_7 = ___s0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_7, L_8, NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_0040;
		}
	}
	{
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_11 = ___result2;
		L_11->___nanoseconds_6 = ((int32_t)-2147483648LL);
		goto IL_0047;
	}

IL_0040:
	{
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_12 = ___result2;
		L_12->___nanoseconds_6 = 0;
	}

IL_0047:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_15 = ___s0;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		V_2 = ((int32_t)il2cpp_codegen_add(L_17, 1));
		NullCheck(L_15);
		Il2CppChar L_18;
		L_18 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_15, L_17, NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)80)))))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_19 = ___s0;
		String_t* L_20;
		L_20 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_19, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_20)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_21 = V_2;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) >= ((int32_t)L_22)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_23 = ___s0;
		int32_t L_24 = V_2;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_23, L_24, NULL);
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)89)))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_26 = V_3;
		if (!L_26)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_27 = V_4;
		V_4 = ((int32_t)((int32_t)L_27|1));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_28 = ___result2;
		int32_t L_29 = V_1;
		L_28->___years_0 = L_29;
		int32_t L_30 = V_2;
		int32_t L_31 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		V_2 = L_31;
		int32_t L_32 = V_0;
		if ((((int32_t)L_31) == ((int32_t)L_32)))
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_33 = ___s0;
		String_t* L_34;
		L_34 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_33, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_34)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_35 = V_2;
		int32_t L_36 = V_0;
		if ((((int32_t)L_35) >= ((int32_t)L_36)))
		{
			goto IL_02b5;
		}
	}

IL_00bb:
	{
		String_t* L_37 = ___s0;
		int32_t L_38 = V_2;
		NullCheck(L_37);
		Il2CppChar L_39;
		L_39 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_37, L_38, NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_00fd;
		}
	}
	{
		int32_t L_40 = V_3;
		if (!L_40)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_41 = V_4;
		V_4 = ((int32_t)((int32_t)L_41|2));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_42 = ___result2;
		int32_t L_43 = V_1;
		L_42->___months_1 = L_43;
		int32_t L_44 = V_2;
		int32_t L_45 = ((int32_t)il2cpp_codegen_add(L_44, 1));
		V_2 = L_45;
		int32_t L_46 = V_0;
		if ((((int32_t)L_45) == ((int32_t)L_46)))
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_47 = ___s0;
		String_t* L_48;
		L_48 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_47, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_48)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_49 = V_2;
		int32_t L_50 = V_0;
		if ((((int32_t)L_49) >= ((int32_t)L_50)))
		{
			goto IL_02b5;
		}
	}

IL_00fd:
	{
		String_t* L_51 = ___s0;
		int32_t L_52 = V_2;
		NullCheck(L_51);
		Il2CppChar L_53;
		L_53 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_51, L_52, NULL);
		if ((!(((uint32_t)L_53) == ((uint32_t)((int32_t)68)))))
		{
			goto IL_013f;
		}
	}
	{
		int32_t L_54 = V_3;
		if (!L_54)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_55 = V_4;
		V_4 = ((int32_t)((int32_t)L_55|4));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_56 = ___result2;
		int32_t L_57 = V_1;
		L_56->___days_2 = L_57;
		int32_t L_58 = V_2;
		int32_t L_59 = ((int32_t)il2cpp_codegen_add(L_58, 1));
		V_2 = L_59;
		int32_t L_60 = V_0;
		if ((((int32_t)L_59) == ((int32_t)L_60)))
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_61 = ___s0;
		String_t* L_62;
		L_62 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_61, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_62)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_63 = V_2;
		int32_t L_64 = V_0;
		if ((((int32_t)L_63) >= ((int32_t)L_64)))
		{
			goto IL_02b5;
		}
	}

IL_013f:
	{
		String_t* L_65 = ___s0;
		int32_t L_66 = V_2;
		NullCheck(L_65);
		Il2CppChar L_67;
		L_67 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_65, L_66, NULL);
		if ((!(((uint32_t)L_67) == ((uint32_t)((int32_t)84)))))
		{
			goto IL_0291;
		}
	}
	{
		int32_t L_68 = V_3;
		if (L_68)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_69 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_69, 1));
		String_t* L_70 = ___s0;
		String_t* L_71;
		L_71 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_70, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_71)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_72 = V_2;
		int32_t L_73 = V_0;
		if ((((int32_t)L_72) >= ((int32_t)L_73)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_74 = ___s0;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		Il2CppChar L_76;
		L_76 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_74, L_75, NULL);
		if ((!(((uint32_t)L_76) == ((uint32_t)((int32_t)72)))))
		{
			goto IL_01b2;
		}
	}
	{
		int32_t L_77 = V_3;
		if (!L_77)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_78 = V_4;
		V_4 = ((int32_t)((int32_t)L_78|8));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_79 = ___result2;
		int32_t L_80 = V_1;
		L_79->___hours_3 = L_80;
		int32_t L_81 = V_2;
		int32_t L_82 = ((int32_t)il2cpp_codegen_add(L_81, 1));
		V_2 = L_82;
		int32_t L_83 = V_0;
		if ((((int32_t)L_82) == ((int32_t)L_83)))
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_84 = ___s0;
		String_t* L_85;
		L_85 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_84, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_85)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_86 = V_2;
		int32_t L_87 = V_0;
		if ((((int32_t)L_86) >= ((int32_t)L_87)))
		{
			goto IL_02b5;
		}
	}

IL_01b2:
	{
		String_t* L_88 = ___s0;
		int32_t L_89 = V_2;
		NullCheck(L_88);
		Il2CppChar L_90;
		L_90 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_88, L_89, NULL);
		if ((!(((uint32_t)L_90) == ((uint32_t)((int32_t)77)))))
		{
			goto IL_01f5;
		}
	}
	{
		int32_t L_91 = V_3;
		if (!L_91)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_92 = V_4;
		V_4 = ((int32_t)((int32_t)L_92|((int32_t)16)));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_93 = ___result2;
		int32_t L_94 = V_1;
		L_93->___minutes_4 = L_94;
		int32_t L_95 = V_2;
		int32_t L_96 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		V_2 = L_96;
		int32_t L_97 = V_0;
		if ((((int32_t)L_96) == ((int32_t)L_97)))
		{
			goto IL_0298;
		}
	}
	{
		String_t* L_98 = ___s0;
		String_t* L_99;
		L_99 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_98, (&V_2), (bool)0, (&V_1), (&V_3), NULL);
		if (L_99)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_100 = V_2;
		int32_t L_101 = V_0;
		if ((((int32_t)L_100) >= ((int32_t)L_101)))
		{
			goto IL_02b5;
		}
	}

IL_01f5:
	{
		String_t* L_102 = ___s0;
		int32_t L_103 = V_2;
		NullCheck(L_102);
		Il2CppChar L_104;
		L_104 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_102, L_103, NULL);
		if ((!(((uint32_t)L_104) == ((uint32_t)((int32_t)46)))))
		{
			goto IL_026d;
		}
	}
	{
		int32_t L_105 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_105, 1));
		int32_t L_106 = V_4;
		V_4 = ((int32_t)((int32_t)L_106|((int32_t)32)));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_107 = ___result2;
		int32_t L_108 = V_1;
		L_107->___seconds_5 = L_108;
		String_t* L_109 = ___s0;
		String_t* L_110;
		L_110 = XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52(L_109, (&V_2), (bool)1, (&V_1), (&V_3), NULL);
		if (L_110)
		{
			goto IL_02d8;
		}
	}
	{
		int32_t L_111 = V_3;
		if (L_111)
		{
			goto IL_0234;
		}
	}
	{
		V_1 = 0;
		goto IL_0234;
	}

IL_022b:
	{
		int32_t L_112 = V_1;
		V_1 = ((int32_t)(L_112/((int32_t)10)));
		int32_t L_113 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_113, 1));
	}

IL_0234:
	{
		int32_t L_114 = V_3;
		if ((((int32_t)L_114) > ((int32_t)((int32_t)9))))
		{
			goto IL_022b;
		}
	}
	{
		goto IL_0244;
	}

IL_023b:
	{
		int32_t L_115 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_115, ((int32_t)10)));
		int32_t L_116 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_116, 1));
	}

IL_0244:
	{
		int32_t L_117 = V_3;
		if ((((int32_t)L_117) < ((int32_t)((int32_t)9))))
		{
			goto IL_023b;
		}
	}
	{
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_118 = ___result2;
		uint32_t* L_119 = (&L_118->___nanoseconds_6);
		uint32_t* L_120 = L_119;
		int32_t L_121 = *((uint32_t*)L_120);
		int32_t L_122 = V_1;
		*((int32_t*)L_120) = (int32_t)((int32_t)(L_121|L_122));
		int32_t L_123 = V_2;
		int32_t L_124 = V_0;
		if ((((int32_t)L_123) >= ((int32_t)L_124)))
		{
			goto IL_02b5;
		}
	}
	{
		String_t* L_125 = ___s0;
		int32_t L_126 = V_2;
		NullCheck(L_125);
		Il2CppChar L_127;
		L_127 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_125, L_126, NULL);
		if ((!(((uint32_t)L_127) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_128 = V_2;
		int32_t L_129 = ((int32_t)il2cpp_codegen_add(L_128, 1));
		V_2 = L_129;
		int32_t L_130 = V_0;
		if ((!(((uint32_t)L_129) == ((uint32_t)L_130))))
		{
			goto IL_0291;
		}
	}
	{
		goto IL_0298;
	}

IL_026d:
	{
		String_t* L_131 = ___s0;
		int32_t L_132 = V_2;
		NullCheck(L_131);
		Il2CppChar L_133;
		L_133 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_131, L_132, NULL);
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)83)))))
		{
			goto IL_0291;
		}
	}
	{
		int32_t L_134 = V_3;
		if (!L_134)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_135 = V_4;
		V_4 = ((int32_t)((int32_t)L_135|((int32_t)32)));
		XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* L_136 = ___result2;
		int32_t L_137 = V_1;
		L_136->___seconds_5 = L_137;
		int32_t L_138 = V_2;
		int32_t L_139 = ((int32_t)il2cpp_codegen_add(L_138, 1));
		V_2 = L_139;
		int32_t L_140 = V_0;
		if ((((int32_t)L_139) == ((int32_t)L_140)))
		{
			goto IL_0298;
		}
	}

IL_0291:
	{
		int32_t L_141 = V_3;
		if (L_141)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_142 = V_2;
		int32_t L_143 = V_0;
		if ((!(((uint32_t)L_142) == ((uint32_t)L_143))))
		{
			goto IL_02b5;
		}
	}

IL_0298:
	{
		int32_t L_144 = V_4;
		if (!L_144)
		{
			goto IL_02b5;
		}
	}
	{
		int32_t L_145 = ___durationType1;
		if ((!(((uint32_t)L_145) == ((uint32_t)2))))
		{
			goto IL_02a8;
		}
	}
	{
		int32_t L_146 = V_4;
		if (!((int32_t)((int32_t)L_146&3)))
		{
			goto IL_02b3;
		}
	}
	{
		goto IL_02b5;
	}

IL_02a8:
	{
		int32_t L_147 = ___durationType1;
		if ((!(((uint32_t)L_147) == ((uint32_t)1))))
		{
			goto IL_02b3;
		}
	}
	{
		int32_t L_148 = V_4;
		if (((int32_t)((int32_t)L_148&((int32_t)-4))))
		{
			goto IL_02b5;
		}
	}

IL_02b3:
	{
		return (Exception_t*)NULL;
	}

IL_02b5:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_149 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_150 = L_149;
		String_t* L_151 = ___s0;
		NullCheck(L_150);
		ArrayElementTypeCheck (L_150, L_151);
		(L_150)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_151);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_152 = L_150;
		int32_t L_153 = ___durationType1;
		int32_t L_154 = L_153;
		RuntimeObject* L_155 = Box(DurationType_tD4A0AE07CC0C51C05B70E801ABF6EE88FAE8D8F9_il2cpp_TypeInfo_var, &L_154);
		NullCheck(L_152);
		ArrayElementTypeCheck (L_152, L_155);
		(L_152)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_155);
		String_t* L_156;
		L_156 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteral8D04002FC7142DC7148763C90BB38AEEC554A158, L_152, NULL);
		FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B* L_157 = (FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B*)il2cpp_codegen_object_new(FormatException_tCD210E92627903FFEDAAA706C08FB6222B4D012B_il2cpp_TypeInfo_var);
		NullCheck(L_157);
		FormatException__ctor_mE04AEA59C0EEFF4BD34B7CE8601F9D331D1D473E(L_157, L_156, NULL);
		return L_157;
	}

IL_02d8:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_158 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_159 = L_158;
		String_t* L_160 = ___s0;
		NullCheck(L_159);
		ArrayElementTypeCheck (L_159, L_160);
		(L_159)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_160);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_161 = L_159;
		int32_t L_162 = ___durationType1;
		int32_t L_163 = L_162;
		RuntimeObject* L_164 = Box(DurationType_tD4A0AE07CC0C51C05B70E801ABF6EE88FAE8D8F9_il2cpp_TypeInfo_var, &L_163);
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, L_164);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_164);
		String_t* L_165;
		L_165 = Res_GetString_m088600B9D0FC319A206451B009A0583C600B9A83(_stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A, L_161, NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_166 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var);
		NullCheck(L_166);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_166, L_165, NULL);
		return L_166;
	}
}
// System.String System.Xml.Schema.XsdDuration::TryParseDigits(System.String,System.Int32&,System.Boolean,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XsdDuration_TryParseDigits_mDAA566C742EBA8C1FA51A5504F88526D6AE18D52 (String_t* ___s0, int32_t* ___offset1, bool ___eatDigits2, int32_t* ___result3, int32_t* ___numDigits4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t* L_0 = ___offset1;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_2, NULL);
		V_1 = L_3;
		int32_t* L_4 = ___result3;
		*((int32_t*)L_4) = (int32_t)0;
		int32_t* L_5 = ___numDigits4;
		*((int32_t*)L_5) = (int32_t)0;
		goto IL_0073;
	}

IL_0013:
	{
		String_t* L_6 = ___s0;
		int32_t* L_7 = ___offset1;
		int32_t L_8 = *((int32_t*)L_7);
		NullCheck(L_6);
		Il2CppChar L_9;
		L_9 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_6, L_8, NULL);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_9, ((int32_t)48)));
		int32_t* L_10 = ___result3;
		int32_t L_11 = *((int32_t*)L_10);
		int32_t L_12 = V_2;
		if ((((int32_t)L_11) <= ((int32_t)((int32_t)(((int32_t)il2cpp_codegen_subtract(((int32_t)2147483647LL), L_12))/((int32_t)10))))))
		{
			goto IL_0064;
		}
	}
	{
		bool L_13 = ___eatDigits2;
		if (L_13)
		{
			goto IL_0036;
		}
	}
	{
		return _stringLiteral06F74C6DAF114664BF1BD452596A0DBDCCED259A;
	}

IL_0036:
	{
		int32_t* L_14 = ___numDigits4;
		int32_t* L_15 = ___offset1;
		int32_t L_16 = *((int32_t*)L_15);
		int32_t L_17 = V_0;
		*((int32_t*)L_14) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_16, L_17));
		goto IL_0045;
	}

IL_003f:
	{
		int32_t* L_18 = ___offset1;
		int32_t* L_19 = ___offset1;
		int32_t L_20 = *((int32_t*)L_19);
		*((int32_t*)L_18) = (int32_t)((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0045:
	{
		int32_t* L_21 = ___offset1;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_1;
		if ((((int32_t)L_22) >= ((int32_t)L_23)))
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_24 = ___s0;
		int32_t* L_25 = ___offset1;
		int32_t L_26 = *((int32_t*)L_25);
		NullCheck(L_24);
		Il2CppChar L_27;
		L_27 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_24, L_26, NULL);
		if ((((int32_t)L_27) < ((int32_t)((int32_t)48))))
		{
			goto IL_0062;
		}
	}
	{
		String_t* L_28 = ___s0;
		int32_t* L_29 = ___offset1;
		int32_t L_30 = *((int32_t*)L_29);
		NullCheck(L_28);
		Il2CppChar L_31;
		L_31 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_28, L_30, NULL);
		if ((((int32_t)L_31) <= ((int32_t)((int32_t)57))))
		{
			goto IL_003f;
		}
	}

IL_0062:
	{
		return (String_t*)NULL;
	}

IL_0064:
	{
		int32_t* L_32 = ___result3;
		int32_t* L_33 = ___result3;
		int32_t L_34 = *((int32_t*)L_33);
		int32_t L_35 = V_2;
		*((int32_t*)L_32) = (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, ((int32_t)10))), L_35));
		int32_t* L_36 = ___offset1;
		int32_t* L_37 = ___offset1;
		int32_t L_38 = *((int32_t*)L_37);
		*((int32_t*)L_36) = (int32_t)((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_0073:
	{
		int32_t* L_39 = ___offset1;
		int32_t L_40 = *((int32_t*)L_39);
		int32_t L_41 = V_1;
		if ((((int32_t)L_40) >= ((int32_t)L_41)))
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_42 = ___s0;
		int32_t* L_43 = ___offset1;
		int32_t L_44 = *((int32_t*)L_43);
		NullCheck(L_42);
		Il2CppChar L_45;
		L_45 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_42, L_44, NULL);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)48))))
		{
			goto IL_0090;
		}
	}
	{
		String_t* L_46 = ___s0;
		int32_t* L_47 = ___offset1;
		int32_t L_48 = *((int32_t*)L_47);
		NullCheck(L_46);
		Il2CppChar L_49;
		L_49 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_46, L_48, NULL);
		if ((((int32_t)L_49) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0013;
		}
	}

IL_0090:
	{
		int32_t* L_50 = ___numDigits4;
		int32_t* L_51 = ___offset1;
		int32_t L_52 = *((int32_t*)L_51);
		int32_t L_53 = V_0;
		*((int32_t*)L_50) = (int32_t)((int32_t)il2cpp_codegen_subtract(L_52, L_53));
		return (String_t*)NULL;
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
// System.Void MS.Internal.Xml.Cache.XPathDocumentNavigator::.ctor(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathDocumentNavigator__ctor_m6F90203C3B45DB6A10BB1918689F3D71F26780C6 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageCurrent0, int32_t ___idxCurrent1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageParent2, int32_t ___idxParent3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_il2cpp_TypeInfo_var);
		XPathNavigator__ctor_m2A24E4B324A522498AE39749E6407908C47C8E5C(__this, NULL);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = ___pageCurrent0;
		__this->____pageCurrent_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageCurrent_4), (void*)L_0);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = ___pageParent2;
		__this->____pageParent_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageParent_5), (void*)L_1);
		int32_t L_2 = ___idxCurrent1;
		__this->____idxCurrent_6 = L_2;
		int32_t L_3 = ___idxParent3;
		__this->____idxParent_7 = L_3;
		return;
	}
}
// System.String MS.Internal.Xml.Cache.XPathDocumentNavigator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathDocumentNavigator_get_Value_mE96242DB762C568A14F391207FDC2C03B1A571B9 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_1 = NULL;
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	StringBuilder_t* V_6 = NULL;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		String_t* L_4 = V_0;
		return L_4;
	}

IL_001c:
	{
		int32_t L_5 = __this->____idxParent_7;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_6 = __this->____pageParent_5;
		int32_t L_7 = __this->____idxParent_7;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), NULL);
		return L_8;
	}

IL_003b:
	{
		String_t* L_9 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_5 = L_9;
		V_6 = (StringBuilder_t*)NULL;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_10 = __this->____pageCurrent_4;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_11 = L_10;
		V_2 = L_11;
		V_1 = L_11;
		int32_t L_12 = __this->____idxCurrent_6;
		int32_t L_13 = L_12;
		V_4 = L_13;
		V_3 = L_13;
		bool L_14;
		L_14 = XPathNodeHelper_GetNonDescendant_m17C6827FAE5DBF3D5BE22B21BD61CEA7B4D33325((&V_2), (&V_4), NULL);
		if (L_14)
		{
			goto IL_00ac;
		}
	}
	{
		V_2 = (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)NULL;
		V_4 = 0;
		goto IL_00ac;
	}

IL_006a:
	{
		String_t* L_15 = V_5;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_15, NULL);
		if (L_16)
		{
			goto IL_0083;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_17 = V_1;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), NULL);
		V_5 = L_19;
		goto IL_00ac;
	}

IL_0083:
	{
		StringBuilder_t* L_20 = V_6;
		if (L_20)
		{
			goto IL_0098;
		}
	}
	{
		StringBuilder_t* L_21 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_21, NULL);
		V_6 = L_21;
		StringBuilder_t* L_22 = V_6;
		String_t* L_23 = V_5;
		NullCheck(L_22);
		StringBuilder_t* L_24;
		L_24 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_22, L_23, NULL);
	}

IL_0098:
	{
		StringBuilder_t* L_25 = V_6;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_26 = V_1;
		int32_t L_27 = V_3;
		NullCheck(L_26);
		String_t* L_28;
		L_28 = XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline(((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27))), NULL);
		NullCheck(L_25);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_25, L_28, NULL);
	}

IL_00ac:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_30 = V_2;
		int32_t L_31 = V_4;
		bool L_32;
		L_32 = XPathNodeHelper_GetTextFollowing_mD2608628C95A6AEEEACC719DF15B2A599A8D301D((&V_1), (&V_3), L_30, L_31, NULL);
		if (L_32)
		{
			goto IL_006a;
		}
	}
	{
		StringBuilder_t* L_33 = V_6;
		if (L_33)
		{
			goto IL_00c1;
		}
	}
	{
		String_t* L_34 = V_5;
		return L_34;
	}

IL_00c1:
	{
		StringBuilder_t* L_35 = V_6;
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		return L_36;
	}
}
// System.Xml.XPath.XPathNavigator MS.Internal.Xml.Cache.XPathDocumentNavigator::Clone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* XPathDocumentNavigator_Clone_mEA5660CEAC916ADDB9842FAD03AF85490BE10012 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2 = __this->____pageParent_5;
		int32_t L_3 = __this->____idxParent_7;
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_4 = (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81*)il2cpp_codegen_object_new(XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XPathDocumentNavigator__ctor_m6F90203C3B45DB6A10BB1918689F3D71F26780C6(L_4, L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Xml.XPath.XPathNodeType MS.Internal.Xml.Cache.XPathDocumentNavigator::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocumentNavigator_get_NodeType_m458402B3D576A3FF1D39245C22FF2F80E5D50E3A (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.String MS.Internal.Xml.Cache.XPathDocumentNavigator::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathDocumentNavigator_get_LocalName_mC9BABE5F2A1FC796BF3E7259DE00C5DAAD2D07EB (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = XPathNode_get_LocalName_m4C7DCD240996EDE990F6924B176B80008141A367(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.String MS.Internal.Xml.Cache.XPathDocumentNavigator::get_NamespaceURI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathDocumentNavigator_get_NamespaceURI_mB00D4F973DBD8FD19AF700080E1219D02F433980 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = XPathNode_get_NamespaceUri_mA7E5CA21E8BCF798FC16E64F94158F54B1C95FC2(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.String MS.Internal.Xml.Cache.XPathDocumentNavigator::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathDocumentNavigator_get_Prefix_mA7F9D844ADDD32B82819A4E63B7071E8590420D6 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = XPathNode_get_Prefix_m499096BCD31E503FF89FDADD69F1C916686BDFA7(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		return L_2;
	}
}
// System.Xml.XmlNameTable MS.Internal.Xml.Cache.XPathDocumentNavigator::get_NameTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XPathDocumentNavigator_get_NameTable_m59D13F04A5676148C79D3E6C59D2B7B119D98418 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		int32_t L_1 = __this->____idxCurrent_6;
		NullCheck(L_0);
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_2;
		L_2 = XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		NullCheck(L_2);
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_3;
		L_3 = XPathDocument_get_NameTable_m0983CA6BD6A2B1368D995E18A6F21ABF9573C4FD_inline(L_2, NULL);
		return L_3;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathDocumentNavigator::MoveToFirstNamespace(System.Xml.XPath.XPathNamespaceScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathDocumentNavigator_MoveToFirstNamespace_mA388DA9DA031B281C612F90FD4C9BAB10DF11725 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, int32_t ___namespaceScope0, const RuntimeMethod* method) 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___namespaceScope0;
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_001a;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = __this->____pageCurrent_4;
		int32_t L_2 = __this->____idxCurrent_6;
		int32_t L_3;
		L_3 = XPathNodeHelper_GetLocalNamespaces_m9ECEE0F460FC922C47F60EBA9E68EDA7F94F9A5B(L_1, L_2, (&V_0), NULL);
		V_1 = L_3;
		goto IL_0079;
	}

IL_001a:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_4 = __this->____pageCurrent_4;
		int32_t L_5 = __this->____idxCurrent_6;
		int32_t L_6;
		L_6 = XPathNodeHelper_GetInScopeNamespaces_mFD9B23AFBD700ED9BEDAD17B85D9AFE6AA599380(L_4, L_5, (&V_0), NULL);
		V_1 = L_6;
		goto IL_0079;
	}

IL_0030:
	{
		int32_t L_7 = ___namespaceScope0;
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), NULL);
		if (L_10)
		{
			goto IL_006a;
		}
	}

IL_0042:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_11 = __this->____pageCurrent_4;
		__this->____pageParent_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageParent_5), (void*)L_11);
		int32_t L_12 = __this->____idxCurrent_6;
		__this->____idxParent_7 = L_12;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_13 = V_0;
		__this->____pageCurrent_4 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageCurrent_4), (void*)L_13);
		int32_t L_14 = V_1;
		__this->____idxCurrent_6 = L_14;
		return (bool)1;
	}

IL_006a:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		int32_t L_17;
		L_17 = XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), (&V_0), NULL);
		V_1 = L_17;
	}

IL_0079:
	{
		int32_t L_18 = V_1;
		if (L_18)
		{
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathDocumentNavigator::MoveToNextNamespace(System.Xml.XPath.XPathNamespaceScope)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathDocumentNavigator_MoveToNextNamespace_mCA462BDFF18F453C2EC658D4EF3E23E5AF923A5A (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, int32_t ___scope0, const RuntimeMethod* method) 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_0 = NULL;
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_1 = NULL;
	int32_t V_2 = 0;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageCurrent_4;
		V_0 = L_0;
		int32_t L_1 = __this->____idxCurrent_6;
		V_2 = L_1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2 = V_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		if ((((int32_t)L_4) == ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		return (bool)0;
	}

IL_001f:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_5 = V_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), (&V_0), NULL);
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (L_8)
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		int32_t L_9 = ___scope0;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_10 = ___scope0;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_006a;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_11 = V_0;
		int32_t L_12 = V_2;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720(((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12))), (&V_1), NULL);
		int32_t L_14 = __this->____idxParent_7;
		if ((!(((uint32_t)L_13) == ((uint32_t)L_14))))
		{
			goto IL_005a;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_15 = V_1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_16 = __this->____pageParent_5;
		if ((((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_15) == ((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_16)))
		{
			goto IL_006a;
		}
	}

IL_005a:
	{
		return (bool)0;
	}

IL_005c:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_17 = V_0;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		bool L_19;
		L_19 = XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), NULL);
		if (L_19)
		{
			goto IL_001f;
		}
	}

IL_006a:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_20 = V_0;
		__this->____pageCurrent_4 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageCurrent_4), (void*)L_20);
		int32_t L_21 = V_2;
		__this->____idxCurrent_6 = L_21;
		return (bool)1;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathDocumentNavigator::MoveToParent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathDocumentNavigator_MoveToParent_m5EC7735A18E2A9D29DB45F7710609843D6D105C2 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idxParent_7;
		if (!L_0)
		{
			goto IL_0030;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = __this->____pageParent_5;
		__this->____pageCurrent_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageCurrent_4), (void*)L_1);
		int32_t L_2 = __this->____idxParent_7;
		__this->____idxCurrent_6 = L_2;
		__this->____pageParent_5 = (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____pageParent_5), (void*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)NULL);
		__this->____idxParent_7 = 0;
		return (bool)1;
	}

IL_0030:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_3 = (&__this->____pageCurrent_4);
		int32_t* L_4 = (&__this->____idxCurrent_6);
		bool L_5;
		L_5 = XPathNodeHelper_GetParent_mFCEB1C9F0BC1DE639972E41C4B41520CBCF6CABD(L_3, L_4, NULL);
		return L_5;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathDocumentNavigator::IsSamePosition(System.Xml.XPath.XPathNavigator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathDocumentNavigator_IsSamePosition_m789BC3510DDD7962DB43BFB17255DB6CF6FD933F (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* V_0 = NULL;
	{
		XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* L_0 = ___other0;
		V_0 = ((XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81*)IsInstSealed((RuntimeObject*)L_0, XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81_il2cpp_TypeInfo_var));
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		int32_t L_2 = __this->____idxCurrent_6;
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->____idxCurrent_6;
		if ((!(((uint32_t)L_2) == ((uint32_t)L_4))))
		{
			goto IL_0043;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_5 = __this->____pageCurrent_4;
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_6 = V_0;
		NullCheck(L_6);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_7 = L_6->____pageCurrent_4;
		if ((!(((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_5) == ((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_7))))
		{
			goto IL_0043;
		}
	}
	{
		int32_t L_8 = __this->____idxParent_7;
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->____idxParent_7;
		if ((!(((uint32_t)L_8) == ((uint32_t)L_10))))
		{
			goto IL_0043;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_11 = __this->____pageParent_5;
		XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* L_12 = V_0;
		NullCheck(L_12);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_13 = L_12->____pageParent_5;
		return (bool)((((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_11) == ((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_13))? 1 : 0);
	}

IL_0043:
	{
		return (bool)0;
	}

IL_0045:
	{
		return (bool)0;
	}
}
// System.Object MS.Internal.Xml.Cache.XPathDocumentNavigator::get_UnderlyingObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XPathDocumentNavigator_get_UnderlyingObject_mFFB387925C58C1D7AC3DD87523778A1EC0528569 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* L_0;
		L_0 = VirtualFuncInvoker0< XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13* >::Invoke(21 /* System.Xml.XPath.XPathNavigator System.Xml.XPath.XPathNavigator::Clone() */, __this);
		return L_0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathDocumentNavigator::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocumentNavigator_get_LineNumber_m830E8342631C421FE7AC1CB19AF57DBB05E5F9F4 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idxParent_7;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2 = __this->____pageParent_5;
		int32_t L_3 = __this->____idxParent_7;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		return L_4;
	}

IL_0028:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_5 = __this->____pageCurrent_4;
		int32_t L_6 = __this->____idxCurrent_6;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), NULL);
		return L_7;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathDocumentNavigator::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocumentNavigator_get_LinePosition_m190E18C6388C13E23B3AD3194C04EAC7CF41B951 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idxParent_7;
		if (!L_0)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(22 /* System.Xml.XPath.XPathNodeType System.Xml.XPath.XPathNavigator::get_NodeType() */, __this);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0028;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2 = __this->____pageParent_5;
		int32_t L_3 = __this->____idxParent_7;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = XPathNode_get_CollapsedLinePosition_m5CD8510839F81AE7F411BB1403B460F6EB3BC8DF(((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3))), NULL);
		return L_4;
	}

IL_0028:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_5 = __this->____pageCurrent_4;
		int32_t L_6 = __this->____idxCurrent_6;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), NULL);
		return L_7;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathDocumentNavigator::GetPositionHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathDocumentNavigator_GetPositionHashCode_m785F066D786EADA3F9B508477C4BFDCE72515841 (XPathDocumentNavigator_t612FCDCBA3A6C710B47D126B50DB88AD0C66DD81* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idxCurrent_6;
		int32_t L_1 = __this->____idxParent_7;
		return ((int32_t)(L_0^L_1));
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
// Conversion methods for marshalling of: MS.Internal.Xml.Cache.XPathNode
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled)
{
	Exception_t* ____info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_info' of type 'XPathNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____info_0Exception, NULL);
}
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_back(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled)
{
	Exception_t* ____info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_info' of type 'XPathNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MS.Internal.Xml.Cache.XPathNode
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_pinvoke_cleanup(XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: MS.Internal.Xml.Cache.XPathNode
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled)
{
	Exception_t* ____info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_info' of type 'XPathNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____info_0Exception, NULL);
}
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com_back(const XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled, XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA& unmarshaled)
{
	Exception_t* ____info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_info' of type 'XPathNode': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MS.Internal.Xml.Cache.XPathNode
IL2CPP_EXTERN_C void XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshal_com_cleanup(XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA_marshaled_com& marshaled)
{
}
// System.Xml.XPath.XPathNodeType MS.Internal.Xml.Cache.XPathNode::get_NodeType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____props_5;
		return (int32_t)(((int32_t)((int32_t)L_0&((int32_t)15))));
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(_thisAdjusted, method);
	return _returnValue;
}
// System.String MS.Internal.Xml.Cache.XPathNode::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_Prefix_m499096BCD31E503FF89FDADD69F1C916686BDFA7 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XPathNodeInfoAtom_get_Prefix_m288E1BED13375EFD17014F55730E1EE85CE6ACA1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* XPathNode_get_Prefix_m499096BCD31E503FF89FDADD69F1C916686BDFA7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XPathNode_get_Prefix_m499096BCD31E503FF89FDADD69F1C916686BDFA7(_thisAdjusted, method);
	return _returnValue;
}
// System.String MS.Internal.Xml.Cache.XPathNode::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_LocalName_m4C7DCD240996EDE990F6924B176B80008141A367 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XPathNodeInfoAtom_get_LocalName_m717A834A1CF042C3AEFCFA4EA2C20D2CD3F53430_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* XPathNode_get_LocalName_m4C7DCD240996EDE990F6924B176B80008141A367_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XPathNode_get_LocalName_m4C7DCD240996EDE990F6924B176B80008141A367(_thisAdjusted, method);
	return _returnValue;
}
// System.String MS.Internal.Xml.Cache.XPathNode::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_NamespaceUri_mA7E5CA21E8BCF798FC16E64F94158F54B1C95FC2 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XPathNodeInfoAtom_get_NamespaceUri_m4E325FC93F28603B48BEE521FA1A93C426D8C78D_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* XPathNode_get_NamespaceUri_mA7E5CA21E8BCF798FC16E64F94158F54B1C95FC2_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XPathNode_get_NamespaceUri_mA7E5CA21E8BCF798FC16E64F94158F54B1C95FC2(_thisAdjusted, method);
	return _returnValue;
}
// System.Xml.XPath.XPathDocument MS.Internal.Xml.Cache.XPathNode::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_1;
		L_1 = XPathNodeInfoAtom_get_Document_m4BE8672A871D25E702E3D77F2A33ED390533EDA1_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* _returnValue;
	_returnValue = XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathNodeInfoAtom_get_LineNumberBase_m40A58EB51495E48B1C31F7690E18CC69E15FA86B_inline(L_0, NULL);
		uint32_t L_2 = __this->____props_5;
		return ((int32_t)il2cpp_codegen_add(L_1, ((int32_t)((uint32_t)((int32_t)((int32_t)L_2&((int32_t)16776192)))>>((int32_t)10)))));
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_get_LineNumber_m2A6A50B6A1E92D49B81BEDD630131D7CEC5EC1ED(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = XPathNodeInfoAtom_get_LinePositionBase_m2BD56AF6D9527933F43282B7BA215AD8AE10C5FC_inline(L_0, NULL);
		uint16_t L_2 = __this->____posOffset_4;
		return ((int32_t)il2cpp_codegen_add(L_1, (int32_t)L_2));
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNode::get_CollapsedLinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_get_CollapsedLinePosition_m5CD8510839F81AE7F411BB1403B460F6EB3BC8DF (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = XPathNode_get_LinePosition_mF7AEBF27561C41D4B88CAFE9EE7BC00B88A00799(__this, NULL);
		uint32_t L_1 = __this->____props_5;
		return ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)((uint32_t)L_1>>((int32_t)24)))));
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_get_CollapsedLinePosition_m5CD8510839F81AE7F411BB1403B460F6EB3BC8DF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_get_CollapsedLinePosition_m5CD8510839F81AE7F411BB1403B460F6EB3BC8DF(_thisAdjusted, method);
	return _returnValue;
}
// MS.Internal.Xml.Cache.XPathNodePageInfo MS.Internal.Xml.Cache.XPathNode::get_PageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_1;
		L_1 = XPathNodeInfoAtom_get_PageInfo_m168850BB26701B63DE38924B49F8B5FF0240B602_inline(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* _returnValue;
	_returnValue = XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNode::GetParent(MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_0 = ___pageNode0;
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_1 = __this->____info_0;
		NullCheck(L_1);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2;
		L_2 = XPathNodeInfoAtom_get_ParentPage_m6346F715CF977F296915E47A1A23993B878755FC_inline(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		uint16_t L_3 = __this->____idxParent_2;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720_AdjustorThunk (RuntimeObject* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720(_thisAdjusted, ___pageNode0, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNode::GetSibling(MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_0 = ___pageNode0;
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_1 = __this->____info_0;
		NullCheck(L_1);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_2;
		L_2 = XPathNodeInfoAtom_get_SiblingPage_mAD3229A141E5D5B949B4B5F31FB8DB500BD56505_inline(L_1, NULL);
		*((RuntimeObject**)L_0) = (RuntimeObject*)L_2;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)(RuntimeObject*)L_2);
		uint16_t L_3 = __this->____idxSibling_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  int32_t XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085_AdjustorThunk (RuntimeObject* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085(_thisAdjusted, ___pageNode0, method);
	return _returnValue;
}
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_IsXmlNamespaceNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* L_0 = __this->____info_0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = XPathNodeInfoAtom_get_LocalName_m717A834A1CF042C3AEFCFA4EA2C20D2CD3F53430_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(__this, NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)3))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_3, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_002a;
		}
	}
	{
		String_t* L_5 = V_0;
		bool L_6;
		L_6 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, _stringLiteralBECFA9FA31EDDEEE54C61C3D0DD81CBF07EA7158, NULL);
		return L_6;
	}

IL_002a:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = XPathNode_get_IsXmlNamespaceNode_m7307A314989230B7F6E4F573F8B2FC505F969C5A(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasSibling_mC8BDEDD3659561E20B769E205BB85377C47537AF (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		uint16_t L_0 = __this->____idxSibling_1;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XPathNode_get_HasSibling_mC8BDEDD3659561E20B769E205BB85377C47537AF_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = XPathNode_get_HasSibling_mC8BDEDD3659561E20B769E205BB85377C47537AF(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasCollapsedText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____props_5;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)128)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_IsText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0 (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(XPathNavigator_tC010C20907D6C6F1589A1BF1B5BE4C313C289E13_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = XPathNavigator_IsText_m74E93D0BC5DBD578B5C1CCD25BE436228F0B4610(L_0, NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean MS.Internal.Xml.Cache.XPathNode::get_HasNamespaceDecls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = __this->____props_5;
		return (bool)((!(((uint32_t)((int32_t)((int32_t)L_0&((int32_t)512)))) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	bool _returnValue;
	_returnValue = XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA(_thisAdjusted, method);
	return _returnValue;
}
// System.String MS.Internal.Xml.Cache.XPathNode::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_6;
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif


// Conversion methods for marshalling of: MS.Internal.Xml.Cache.XPathNodeRef
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke(const XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470& unmarshaled, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke& marshaled)
{
	Exception_t* ____page_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_page' of type 'XPathNodeRef'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____page_0Exception, NULL);
}
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_back(const XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke& marshaled, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470& unmarshaled)
{
	Exception_t* ____page_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_page' of type 'XPathNodeRef'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____page_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MS.Internal.Xml.Cache.XPathNodeRef
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_pinvoke_cleanup(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_pinvoke& marshaled)
{
}


// Conversion methods for marshalling of: MS.Internal.Xml.Cache.XPathNodeRef
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_com(const XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470& unmarshaled, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com& marshaled)
{
	Exception_t* ____page_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_page' of type 'XPathNodeRef'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____page_0Exception, NULL);
}
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_com_back(const XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com& marshaled, XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470& unmarshaled)
{
	Exception_t* ____page_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_page' of type 'XPathNodeRef'.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____page_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: MS.Internal.Xml.Cache.XPathNodeRef
IL2CPP_EXTERN_C void XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshal_com_cleanup(XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470_marshaled_com& marshaled)
{
}
// System.Void MS.Internal.Xml.Cache.XPathNodeRef::.ctor(MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XPathNodeRef__ctor_m14862547984A3EE8A767C1C8415C6E73E3EF30E8 (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___page0, int32_t ___idx1, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = ___page0;
		__this->____page_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____page_0), (void*)L_0);
		int32_t L_1 = ___idx1;
		__this->____idx_1 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C  void XPathNodeRef__ctor_m14862547984A3EE8A767C1C8415C6E73E3EF30E8_AdjustorThunk (RuntimeObject* __this, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___page0, int32_t ___idx1, const RuntimeMethod* method)
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*>(__this + _offset);
	XPathNodeRef__ctor_m14862547984A3EE8A767C1C8415C6E73E3EF30E8(_thisAdjusted, ___page0, ___idx1, method);
}
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeRef::get_Page()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeRef_get_Page_m8624EDC1840BD05BD55D4E8137095B5986ED54F3 (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____page_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeRef_get_Page_m8624EDC1840BD05BD55D4E8137095B5986ED54F3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*>(__this + _offset);
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* _returnValue;
	_returnValue = XPathNodeRef_get_Page_m8624EDC1840BD05BD55D4E8137095B5986ED54F3_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::get_Index()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeRef_get_Index_m37FE9027EA38BDC66D3E83142E7BBEBB18073E33 (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idx_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t XPathNodeRef_get_Index_m37FE9027EA38BDC66D3E83142E7BBEBB18073E33_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNodeRef_get_Index_m37FE9027EA38BDC66D3E83142E7BBEBB18073E33_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeRef::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____page_0;
		int32_t L_1 = __this->____idx_1;
		int32_t L_2;
		L_2 = XPathNodeHelper_GetLocation_m4C6A57E28DFEF5CC9CA55B21CC97044AB01EEC3C(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = XPathNodeRef_GetHashCode_mA438A76A5D2970E8AEC24529F5D03905D9A71F0C(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetLocalNamespaces(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetLocalNamespaces_m9ECEE0F460FC922C47F60EBA9E68EDA7F94F9A5B (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageElem0, int32_t ___idxElem1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNmsp2, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = ___pageElem0;
		int32_t L_1 = ___idxElem1;
		NullCheck(L_0);
		bool L_2;
		L_2 = XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_3 = ___pageElem0;
		int32_t L_4 = ___idxElem1;
		NullCheck(L_3);
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_5;
		L_5 = XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), NULL);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_6 = ___pageElem0;
		int32_t L_7 = ___idxElem1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_8 = ___pageNmsp2;
		NullCheck(L_5);
		int32_t L_9;
		L_9 = XPathDocument_LookupNamespaces_m2ECE5FBE932A2F9F04DB9A3B9C0603A1F4D4B904(L_5, L_6, L_7, L_8, NULL);
		return L_9;
	}

IL_0023:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_10 = ___pageNmsp2;
		*((RuntimeObject**)L_10) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_10, (void*)(RuntimeObject*)NULL);
		return 0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetInScopeNamespaces(MS.Internal.Xml.Cache.XPathNode[],System.Int32,MS.Internal.Xml.Cache.XPathNode[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetInScopeNamespaces_mFD9B23AFBD700ED9BEDAD17B85D9AFE6AA599380 (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageElem0, int32_t ___idxElem1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNmsp2, const RuntimeMethod* method) 
{
	XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* V_0 = NULL;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = ___pageElem0;
		int32_t L_1 = ___idxElem1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), NULL);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0051;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_3 = ___pageElem0;
		int32_t L_4 = ___idxElem1;
		NullCheck(L_3);
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_5;
		L_5 = XPathNode_get_Document_mC2CF5341823E4B865BD0A92045A97F87B312516F(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), NULL);
		V_0 = L_5;
		goto IL_0039;
	}

IL_001e:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_6 = ___pageElem0;
		int32_t L_7 = ___idxElem1;
		NullCheck(L_6);
		int32_t L_8;
		L_8 = XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), (&___pageElem0), NULL);
		___idxElem1 = L_8;
		int32_t L_9 = ___idxElem1;
		if (L_9)
		{
			goto IL_0039;
		}
	}
	{
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_10 = V_0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_11 = ___pageNmsp2;
		NullCheck(L_10);
		int32_t L_12;
		L_12 = XPathDocument_GetXmlNamespaceNode_m338B46452B3B4BAEF58DC882EEEAE3CEAF094F39(L_10, L_11, NULL);
		return L_12;
	}

IL_0039:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_13 = ___pageElem0;
		int32_t L_14 = ___idxElem1;
		NullCheck(L_13);
		bool L_15;
		L_15 = XPathNode_get_HasNamespaceDecls_m25569CE7015AD2BDA2F4B2C357D4044394125DEA(((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), NULL);
		if (!L_15)
		{
			goto IL_001e;
		}
	}
	{
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_16 = V_0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_17 = ___pageElem0;
		int32_t L_18 = ___idxElem1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_19 = ___pageNmsp2;
		NullCheck(L_16);
		int32_t L_20;
		L_20 = XPathDocument_LookupNamespaces_m2ECE5FBE932A2F9F04DB9A3B9C0603A1F4D4B904(L_16, L_17, L_18, L_19, NULL);
		return L_20;
	}

IL_0051:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_21 = ___pageNmsp2;
		*((RuntimeObject**)L_21) = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)NULL);
		return 0;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetParent(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetParent_mFCEB1C9F0BC1DE639972E41C4B41520CBCF6CABD (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, int32_t* ___idxNode1, const RuntimeMethod* method) 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_0 = ___pageNode0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = *((XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C**)L_0);
		V_0 = L_1;
		int32_t* L_2 = ___idxNode1;
		int32_t L_3 = *((int32_t*)L_2);
		V_1 = L_3;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6;
		L_6 = XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), (&V_0), NULL);
		V_1 = L_6;
		int32_t L_7 = V_1;
		if (!L_7)
		{
			goto IL_0020;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_8 = ___pageNode0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_9 = V_0;
		*((RuntimeObject**)L_8) = (RuntimeObject*)L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_8, (void*)(RuntimeObject*)L_9);
		int32_t* L_10 = ___idxNode1;
		int32_t L_11 = V_1;
		*((int32_t*)L_10) = (int32_t)L_11;
		return (bool)1;
	}

IL_0020:
	{
		return (bool)0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeHelper::GetLocation(MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeHelper_GetLocation_m4C6A57E28DFEF5CC9CA55B21CC97044AB01EEC3C (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageNode0, int32_t ___idxNode1, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = ___pageNode0;
		NullCheck(L_0);
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_1;
		L_1 = XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724(((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = XPathNodePageInfo_get_PageNumber_m0CF191DCF066234C1A660E76CB8C903779823DD5_inline(L_1, NULL);
		int32_t L_3 = ___idxNode1;
		return ((int32_t)(((int32_t)(L_2<<((int32_t)16)))|L_3));
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetTextFollowing(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&,MS.Internal.Xml.Cache.XPathNode[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetTextFollowing_mD2608628C95A6AEEEACC719DF15B2A599A8D301D (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageCurrent0, int32_t* ___idxCurrent1, XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* ___pageEnd2, int32_t ___idxEnd3, const RuntimeMethod* method) 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_0 = ___pageCurrent0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = *((XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C**)L_0);
		V_0 = L_1;
		int32_t* L_2 = ___idxCurrent1;
		int32_t L_3 = *((int32_t*)L_2);
		V_1 = L_3;
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_000a:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_5 = V_0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_6 = ___pageEnd2;
		if ((!(((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_5) == ((RuntimeObject*)(XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C*)L_6))))
		{
			goto IL_007b;
		}
	}
	{
		int32_t L_7 = V_1;
		int32_t L_8 = ___idxEnd3;
		if ((((int32_t)L_7) > ((int32_t)L_8)))
		{
			goto IL_007b;
		}
	}
	{
		goto IL_0046;
	}

IL_0014:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		bool L_11;
		L_11 = XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0(((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10))), NULL);
		if (L_11)
		{
			goto IL_00ab;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_12 = V_0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_15 = V_0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		bool L_17;
		L_17 = XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691(((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), NULL);
		if (L_17)
		{
			goto IL_00ab;
		}
	}

IL_0042:
	{
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0046:
	{
		int32_t L_19 = V_1;
		int32_t L_20 = ___idxEnd3;
		if ((!(((uint32_t)L_19) == ((uint32_t)L_20))))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_00a9;
	}

IL_004c:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_21 = V_0;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		bool L_23;
		L_23 = XPathNode_get_IsText_m420F5C6B021A6598E5F3BBAF92C0F16DF3C678E0(((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_22))), NULL);
		if (L_23)
		{
			goto IL_00ab;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_24 = V_0;
		int32_t L_25 = V_1;
		NullCheck(L_24);
		int32_t L_26;
		L_26 = XPathNode_get_NodeType_mF01B7F501A4D243B476CB1F67AC0275F70EC1A99(((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25))), NULL);
		if ((!(((uint32_t)L_26) == ((uint32_t)1))))
		{
			goto IL_0077;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_27 = V_0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		bool L_29;
		L_29 = XPathNode_get_HasCollapsedText_mFFE7E8DB4C7142A0004EF4F12D195E022ADF1691(((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), NULL);
		if (L_29)
		{
			goto IL_00ab;
		}
	}

IL_0077:
	{
		int32_t L_30 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_007b:
	{
		int32_t L_31 = V_1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_32 = V_0;
		NullCheck(L_32);
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_33;
		L_33 = XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724(((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = XPathNodePageInfo_get_NodeCount_m9A4307635C53F9A47265CD2E0C96BE0E00990C37_inline(L_33, NULL);
		if ((((int32_t)L_31) < ((int32_t)L_34)))
		{
			goto IL_004c;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_35 = V_0;
		NullCheck(L_35);
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_36;
		L_36 = XPathNode_get_PageInfo_mBBC3212C44B8131B6948CCEDD5BCCA4DDEE77724(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		NullCheck(L_36);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_37;
		L_37 = XPathNodePageInfo_get_NextPage_m464BB6A5FD7F7211D98C952E035BFE8022B115A2_inline(L_36, NULL);
		V_0 = L_37;
		V_1 = 1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_38 = V_0;
		if (L_38)
		{
			goto IL_000a;
		}
	}

IL_00a9:
	{
		return (bool)0;
	}

IL_00ab:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_39 = ___pageCurrent0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_40 = V_0;
		*((RuntimeObject**)L_39) = (RuntimeObject*)L_40;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)(RuntimeObject*)L_40);
		int32_t* L_41 = ___idxCurrent1;
		int32_t L_42 = V_1;
		*((int32_t*)L_41) = (int32_t)L_42;
		return (bool)1;
	}
}
// System.Boolean MS.Internal.Xml.Cache.XPathNodeHelper::GetNonDescendant(MS.Internal.Xml.Cache.XPathNode[]&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XPathNodeHelper_GetNonDescendant_m17C6827FAE5DBF3D5BE22B21BD61CEA7B4D33325 (XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** ___pageNode0, int32_t* ___idxNode1, const RuntimeMethod* method) 
{
	XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* V_0 = NULL;
	int32_t V_1 = 0;
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_0 = ___pageNode0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_1 = *((XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C**)L_0);
		V_0 = L_1;
		int32_t* L_2 = ___idxNode1;
		int32_t L_3 = *((int32_t*)L_2);
		V_1 = L_3;
	}

IL_0006:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_4 = V_0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = XPathNode_get_HasSibling_mC8BDEDD3659561E20B769E205BB85377C47537AF(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), NULL);
		if (!L_6)
		{
			goto IL_0028;
		}
	}
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_7 = ___pageNode0;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_8 = V_0;
		*((RuntimeObject**)L_7) = (RuntimeObject*)L_8;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_7, (void*)(RuntimeObject*)L_8);
		int32_t* L_9 = ___idxNode1;
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_10 = V_0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C** L_12 = ___pageNode0;
		int32_t L_13;
		L_13 = XPathNode_GetSibling_m818366A817C7694A4B3B07DA03E33A821960A085(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_12, NULL);
		*((int32_t*)L_9) = (int32_t)L_13;
		return (bool)1;
	}

IL_0028:
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		int32_t L_16;
		L_16 = XPathNode_GetParent_m57F106763ECB0EC827677747A4B95E6A10095720(((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), (&V_0), NULL);
		V_1 = L_16;
		int32_t L_17 = V_1;
		if (L_17)
		{
			goto IL_0006;
		}
	}
	{
		return (bool)0;
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
// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::get_PageNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_PageNumber_m0CF191DCF066234C1A660E76CB8C903779823DD5 (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pageNum_0;
		return L_0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodePageInfo::get_NodeCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_NodeCount_m9A4307635C53F9A47265CD2E0C96BE0E00990C37 (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____nodeCount_1;
		return L_0;
	}
}
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodePageInfo::get_NextPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodePageInfo_get_NextPage_m464BB6A5FD7F7211D98C952E035BFE8022B115A2 (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageNext_2;
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
// MS.Internal.Xml.Cache.XPathNodePageInfo MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_PageInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNodeInfoAtom_get_PageInfo_m168850BB26701B63DE38924B49F8B5FF0240B602 (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_0 = __this->____pageInfo_8;
		return L_0;
	}
}
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LocalName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_LocalName_m717A834A1CF042C3AEFCFA4EA2C20D2CD3F53430 (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____localName_0;
		return L_0;
	}
}
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_NamespaceUri()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_NamespaceUri_m4E325FC93F28603B48BEE521FA1A93C426D8C78D (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____namespaceUri_1;
		return L_0;
	}
}
// System.String MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_Prefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_Prefix_m288E1BED13375EFD17014F55730E1EE85CE6ACA1 (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____prefix_2;
		return L_0;
	}
}
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_SiblingPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_SiblingPage_mAD3229A141E5D5B949B4B5F31FB8DB500BD56505 (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageSibling_4;
		return L_0;
	}
}
// MS.Internal.Xml.Cache.XPathNode[] MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_ParentPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_ParentPage_m6346F715CF977F296915E47A1A23993B878755FC (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageParent_3;
		return L_0;
	}
}
// System.Xml.XPath.XPathDocument MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_Document()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNodeInfoAtom_get_Document_m4BE8672A871D25E702E3D77F2A33ED390533EDA1 (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_0 = __this->____doc_5;
		return L_0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LineNumberBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LineNumberBase_m40A58EB51495E48B1C31F7690E18CC69E15FA86B (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lineNumBase_6;
		return L_0;
	}
}
// System.Int32 MS.Internal.Xml.Cache.XPathNodeInfoAtom::get_LinePositionBase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LinePositionBase_m2BD56AF6D9527933F43282B7BA215AD8AE10C5FC (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____linePosBase_7;
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
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m8AD748350993B116B2C4A98803EE1E291A0ADFEE (String_t* ___s0, const RuntimeMethod* method) 
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* XmlBaseConverter_get_DefaultClrType_mE8954A45D93CC608AEC14D795E83104D0F7BDCDF_inline (XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D* __this, const RuntimeMethod* method) 
{
	{
		Type_t* L_0 = __this->___clrTypeDefault_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t TimeSpan_get_Ticks_mC50131E57621F29FACC53B3241432ABB874FA1B5_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = __this->____ticks_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TimeSpan__ctor_m061B122FA11D2063FE751C1F1D019DF1C8B10B1F_inline (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, int64_t ___ticks0, const RuntimeMethod* method) 
{
	{
		int64_t L_0 = ___ticks0;
		__this->____ticks_22 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Years_m2F16DEE4EB28A914B6C03A462BF6DE16079AEC5E_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___years_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Months_m2003B42F20229209D88FFA62D3BAED1BF0E1A851_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___months_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Days_m7A66E8270BF719AC95604AD58AD2B9E35A47046A_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___days_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Hours_m7390FD426C288A52C27DF12F034F29AC746BF1EF_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___hours_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Minutes_mB74DF6E89566B10A2AD63E88A4DF462B06B9548C_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___minutes_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XsdDuration_get_Seconds_m9F35896B9EF01634C2C584D89A5901A20D5F728C_inline (XsdDuration_tFE4B2BE006340D157BE913D63F05058DF4190B1D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___seconds_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNode_get_Value_mC18CEAE4371BD37328FA857F57ACEE9DF747734F_inline (XPathNode_t4A9DCD8092B3B7DBA0A6DA09C03DB5274D43C3CA* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____value_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* XPathDocument_get_NameTable_m0983CA6BD6A2B1368D995E18A6F21ABF9573C4FD_inline (XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* __this, const RuntimeMethod* method) 
{
	{
		XmlNameTable_tBDBAACFF3DB40A8E6AF3BDC11F0FF166CF11ABB8* L_0 = __this->___nameTable_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_Prefix_m288E1BED13375EFD17014F55730E1EE85CE6ACA1_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____prefix_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_LocalName_m717A834A1CF042C3AEFCFA4EA2C20D2CD3F53430_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____localName_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* XPathNodeInfoAtom_get_NamespaceUri_m4E325FC93F28603B48BEE521FA1A93C426D8C78D_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____namespaceUri_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* XPathNodeInfoAtom_get_Document_m4BE8672A871D25E702E3D77F2A33ED390533EDA1_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathDocument_tE736154E9BF3ACCEB884DD1EFBADB58BD56DF5EE* L_0 = __this->____doc_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LineNumberBase_m40A58EB51495E48B1C31F7690E18CC69E15FA86B_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____lineNumBase_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeInfoAtom_get_LinePositionBase_m2BD56AF6D9527933F43282B7BA215AD8AE10C5FC_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____linePosBase_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* XPathNodeInfoAtom_get_PageInfo_m168850BB26701B63DE38924B49F8B5FF0240B602_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* L_0 = __this->____pageInfo_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_ParentPage_m6346F715CF977F296915E47A1A23993B878755FC_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageParent_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeInfoAtom_get_SiblingPage_mAD3229A141E5D5B949B4B5F31FB8DB500BD56505_inline (XPathNodeInfoAtom_t4E1898849C241487219F72C0B61B5D474E1059FE* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageSibling_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodeRef_get_Page_m8624EDC1840BD05BD55D4E8137095B5986ED54F3_inline (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____page_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodeRef_get_Index_m37FE9027EA38BDC66D3E83142E7BBEBB18073E33_inline (XPathNodeRef_tF695A4CACB9D70FDCBCC9EE7F3AE77D1CAF06470* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____idx_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_PageNumber_m0CF191DCF066234C1A660E76CB8C903779823DD5_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____pageNum_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t XPathNodePageInfo_get_NodeCount_m9A4307635C53F9A47265CD2E0C96BE0E00990C37_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____nodeCount_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* XPathNodePageInfo_get_NextPage_m464BB6A5FD7F7211D98C952E035BFE8022B115A2_inline (XPathNodePageInfo_t3317321956D9147B2F85232F8E32E16C00987460* __this, const RuntimeMethod* method) 
{
	{
		XPathNodeU5BU5D_tABD91BA95C61EF982E9FB7D2386FCE4C39F8B90C* L_0 = __this->____pageNext_2;
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
