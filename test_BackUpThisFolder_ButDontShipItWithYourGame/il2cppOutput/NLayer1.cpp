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

// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// NLayer.Decoder.FrameBase
struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057;
// NLayer.Decoder.ID3Frame
struct ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// NLayer.Decoder.MpegFrame
struct MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B;
// NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD;
// NLayer.Decoder.RiffHeaderFrame
struct RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.String
struct String_t;
// NLayer.Decoder.VBRInfo
struct VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral808DF11042257F134CE34DF232CD9523F589E554;
IL2CPP_EXTERN_C const RuntimeMethod* ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Il2CppArrayBounds;

// NLayer.Decoder.FrameBase
struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057  : public RuntimeObject
{
	// System.Int64 NLayer.Decoder.FrameBase::<Offset>k__BackingField
	int64_t ___U3COffsetU3Ek__BackingField_1;
	// System.Int32 NLayer.Decoder.FrameBase::<Length>k__BackingField
	int32_t ___U3CLengthU3Ek__BackingField_2;
	// NLayer.Decoder.MpegStreamReader NLayer.Decoder.FrameBase::_reader
	MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ____reader_3;
	// System.Byte[] NLayer.Decoder.FrameBase::_savedBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____savedBuffer_4;
};

struct FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057_StaticFields
{
	// System.Int32 NLayer.Decoder.FrameBase::_totalAllocation
	int32_t ____totalAllocation_0;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// NLayer.Decoder.MpegStreamReader
struct MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD  : public RuntimeObject
{
	// NLayer.Decoder.ID3Frame NLayer.Decoder.MpegStreamReader::_id3Frame
	ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079* ____id3Frame_0;
	// NLayer.Decoder.ID3Frame NLayer.Decoder.MpegStreamReader::_id3v1Frame
	ID3Frame_t1BF4A6A2EA8AD0CDE816EE21377E223647345079* ____id3v1Frame_1;
	// NLayer.Decoder.RiffHeaderFrame NLayer.Decoder.MpegStreamReader::_riffHeaderFrame
	RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* ____riffHeaderFrame_2;
	// NLayer.Decoder.VBRInfo NLayer.Decoder.MpegStreamReader::_vbrInfo
	VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* ____vbrInfo_3;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_first
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____first_4;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_current
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____current_5;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_last
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____last_6;
	// NLayer.Decoder.MpegFrame NLayer.Decoder.MpegStreamReader::_lastFree
	MpegFrame_t2F00BF715E4E12876633E69974F5CAB4F9204B9B* ____lastFree_7;
	// System.Int64 NLayer.Decoder.MpegStreamReader::_readOffset
	int64_t ____readOffset_8;
	// System.Int64 NLayer.Decoder.MpegStreamReader::_eofOffset
	int64_t ____eofOffset_9;
	// System.IO.Stream NLayer.Decoder.MpegStreamReader::_source
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____source_10;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_canSeek
	bool ____canSeek_11;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_endFound
	bool ____endFound_12;
	// System.Boolean NLayer.Decoder.MpegStreamReader::_mixedFrameSize
	bool ____mixedFrameSize_13;
	// System.Object NLayer.Decoder.MpegStreamReader::_readLock
	RuntimeObject* ____readLock_14;
	// System.Object NLayer.Decoder.MpegStreamReader::_frameLock
	RuntimeObject* ____frameLock_15;
	// NLayer.Decoder.MpegStreamReader/ReadBuffer NLayer.Decoder.MpegStreamReader::_readBuf
	ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* ____readBuf_16;
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

// NLayer.Decoder.VBRInfo
struct VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD  : public RuntimeObject
{
	// System.Int32 NLayer.Decoder.VBRInfo::<SampleCount>k__BackingField
	int32_t ___U3CSampleCountU3Ek__BackingField_0;
	// System.Int32 NLayer.Decoder.VBRInfo::<SampleRate>k__BackingField
	int32_t ___U3CSampleRateU3Ek__BackingField_1;
	// System.Int32 NLayer.Decoder.VBRInfo::<Channels>k__BackingField
	int32_t ___U3CChannelsU3Ek__BackingField_2;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRFrames>k__BackingField
	int32_t ___U3CVBRFramesU3Ek__BackingField_3;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRBytes>k__BackingField
	int32_t ___U3CVBRBytesU3Ek__BackingField_4;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRQuality>k__BackingField
	int32_t ___U3CVBRQualityU3Ek__BackingField_5;
	// System.Int32 NLayer.Decoder.VBRInfo::<VBRDelay>k__BackingField
	int32_t ___U3CVBRDelayU3Ek__BackingField_6;
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

// NLayer.Decoder.MpegStreamReader/ReadBuffer
struct ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F  : public RuntimeObject
{
	// System.Byte[] NLayer.Decoder.MpegStreamReader/ReadBuffer::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_0;
	// System.Int64 NLayer.Decoder.MpegStreamReader/ReadBuffer::BaseOffset
	int64_t ___BaseOffset_1;
	// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::End
	int32_t ___End_2;
	// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardCount
	int32_t ___DiscardCount_3;
	// System.Object NLayer.Decoder.MpegStreamReader/ReadBuffer::_localLock
	RuntimeObject* ____localLock_4;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// NLayer.Decoder.RiffHeaderFrame
struct RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2  : public FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057
{
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305__padding[1022];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F__padding[1024];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3__padding[108];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E__padding[12];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947__padding[120];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0__padding[124];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00__padding[128];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F__padding[14];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1__padding[140];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6__padding[142];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A__padding[16];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668__padding[20];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27__padding[2048];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C__padding[254];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E__padding[256];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD__padding[28];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653__padding[32];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1__padding[34];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653__padding[36];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42__padding[48];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB__padding[56];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9__padding[60];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6__padding[62];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036__padding[64];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5__padding[68];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973__padding[88];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92
#pragma pack(push, tp, 1)
struct __StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808__padding[92];
	};
};
#pragma pack(pop, tp)

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tF8CC10BE8CCADED346ECAD8CE599494060818979  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_tF8CC10BE8CCADED346ECAD8CE599494060818979_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::02DECBD4B98B83C88DF26F1D316D967144C964AC
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___02DECBD4B98B83C88DF26F1D316D967144C964AC_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=14 <PrivateImplementationDetails>::052C20430DC5407CAC4A7E36BAF553EAFE144CDE
	__StaticArrayInitTypeSizeU3D14_t7B45CE1089AA8F737A994CC1E11346139913752F ___052C20430DC5407CAC4A7E36BAF553EAFE144CDE_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::06A66430C02C24BB46E9D45096F3612F52BAAAAD
	__StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD ___06A66430C02C24BB46E9D45096F3612F52BAAAAD_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::06D0A13FF2634CA2D099C7C996C6B3B2CDC71A27
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___06D0A13FF2634CA2D099C7C996C6B3B2CDC71A27_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=28 <PrivateImplementationDetails>::0DD7A9B3BA80B5B1E2B69AAA2DFC56CFEEE8F3CD
	__StaticArrayInitTypeSizeU3D28_t90A51CCAF5D6AEB2C9D3ECC30717F37D3F1B85BD ___0DD7A9B3BA80B5B1E2B69AAA2DFC56CFEEE8F3CD_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::0E24731E028D4046A165EA260DA1DA95BF0201B5
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___0E24731E028D4046A165EA260DA1DA95BF0201B5_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::0F53B5E6268C6545E9270A0169A1FA196C6092DF
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___0F53B5E6268C6545E9270A0169A1FA196C6092DF_6;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::117ED604063D78A294769B182459666034519D79
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___117ED604063D78A294769B182459666034519D79_7;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34 <PrivateImplementationDetails>::12976064F8F8160F188A01AEEBCD007449BD365B
	__StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 ___12976064F8F8160F188A01AEEBCD007449BD365B_8;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::167CE10EAB7DBB2FAC19002E7CB7F7E81D63F341
	__StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 ___167CE10EAB7DBB2FAC19002E7CB7F7E81D63F341_9;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::1766F40539CB527A97DEE60B6B1AD5D7559C3EED
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___1766F40539CB527A97DEE60B6B1AD5D7559C3EED_10;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::1EED620D880B5566ADF1E6D57BE501A951D55057
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___1EED620D880B5566ADF1E6D57BE501A951D55057_11;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::2664319BEB31A007A1D31844B199D2EDFCBF29F9
	__StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E ___2664319BEB31A007A1D31844B199D2EDFCBF29F9_12;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::28C710520D4675C71D8BEFAA19BC179951374DF7
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___28C710520D4675C71D8BEFAA19BC179951374DF7_13;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::2A2D28482BBB64FA5869C4116711B95BE18A1479
	__StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 ___2A2D28482BBB64FA5869C4116711B95BE18A1479_14;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=124 <PrivateImplementationDetails>::2B42D3D832DBF5D5ACE91E6073EBD7BB8E12DEA1
	__StaticArrayInitTypeSizeU3D124_t64F09757B114DED1D922B389438AFC0A68009CC0 ___2B42D3D832DBF5D5ACE91E6073EBD7BB8E12DEA1_15;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::2BD232BF9BBB26D4E46CCB5C2D3B3B12274F1984
	__StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F ___2BD232BF9BBB26D4E46CCB5C2D3B3B12274F1984_16;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::34B53DD5686A849D0EC74344559E1E50D4776239
	__StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 ___34B53DD5686A849D0EC74344559E1E50D4776239_17;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::37D9C085BE6D5012609F925C1C5068721BF3EB15
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___37D9C085BE6D5012609F925C1C5068721BF3EB15_18;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=140 <PrivateImplementationDetails>::3D729EDB583C1FC88A9D866EA0B3FE3BBE6738E3
	__StaticArrayInitTypeSizeU3D140_t6B0AAF2225AEC9E5723E29B960C5CBBD340920A1 ___3D729EDB583C1FC88A9D866EA0B3FE3BBE6738E3_19;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::3DFD4D28BC67D3A4AF48AFFEA3F91AA2FC7E6A49
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___3DFD4D28BC67D3A4AF48AFFEA3F91AA2FC7E6A49_20;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=2048 <PrivateImplementationDetails>::4327074201FBB3C079CEAC5028A88C45836D33ED
	__StaticArrayInitTypeSizeU3D2048_t46BED26416D167155DF964416E19F0D3CBB37C27 ___4327074201FBB3C079CEAC5028A88C45836D33ED_21;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::45CC202B2D1D51E86B4E8E96653F784B771B59CE
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___45CC202B2D1D51E86B4E8E96653F784B771B59CE_22;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::470B7F4FDB90F6D25C0F976D634BA13E5176CA87
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___470B7F4FDB90F6D25C0F976D634BA13E5176CA87_23;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::480480975A2F2351B4BC347BBF5B019CB39B8479
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___480480975A2F2351B4BC347BBF5B019CB39B8479_24;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::4E33ADF11BDB70C7312C8C14A3327CBAAFA43877
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___4E33ADF11BDB70C7312C8C14A3327CBAAFA43877_25;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::511E29D606BCD9CCF19925FEC4AB93A0BE58E6C5
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___511E29D606BCD9CCF19925FEC4AB93A0BE58E6C5_26;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5210B03C13F919278C0704371268EDDDF80A4C4A
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___5210B03C13F919278C0704371268EDDDF80A4C4A_27;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::5D9373D97CCDD1C47F4B9AF262444CBB734B73E5
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___5D9373D97CCDD1C47F4B9AF262444CBB734B73E5_28;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::694F8C359BDCF3B5E89D474E257815B6BC6976F5
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___694F8C359BDCF3B5E89D474E257815B6BC6976F5_29;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::6A177B9D2E9E08FC7B8D074AE21BD8F3B936FD4B
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___6A177B9D2E9E08FC7B8D074AE21BD8F3B936FD4B_30;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::6C3172601CE476B8B4CB4063F75FEE986E5BEA3E
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___6C3172601CE476B8B4CB4063F75FEE986E5BEA3E_31;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::6E3D89B679A0E66DD78E53B4640C9726537E11A4
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___6E3D89B679A0E66DD78E53B4640C9726537E11A4_32;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::6F71EBB9EAEAD5A412B4323B2780EB7ABC873579
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___6F71EBB9EAEAD5A412B4323B2780EB7ABC873579_33;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::708D10A4339CBCA79AF1F908E9277FA653F670EF
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___708D10A4339CBCA79AF1F908E9277FA653F670EF_34;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::709F63077E0EC8A637406E5C4D99FEBF9404DE0A
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___709F63077E0EC8A637406E5C4D99FEBF9404DE0A_35;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::7A7A5C9196FC30D2B49EDFEA5DCA11DCBCB649A3
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___7A7A5C9196FC30D2B49EDFEA5DCA11DCBCB649A3_36;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::826510337F148AA44E14E8E54E08BF04A8B294CE
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___826510337F148AA44E14E8E54E08BF04A8B294CE_37;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=64 <PrivateImplementationDetails>::84069833E42A8083F930F322499FC4BCFE543E4C
	__StaticArrayInitTypeSizeU3D64_t6463BC76229C5170103BD2357054AD368E097036 ___84069833E42A8083F930F322499FC4BCFE543E4C_38;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::8793BA75E6A8E1D82395EF60EE5DC3A69977A62B
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___8793BA75E6A8E1D82395EF60EE5DC3A69977A62B_39;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=36 <PrivateImplementationDetails>::8ABAB393752BC1119B0EAD989DF450C6E04D8FF2
	__StaticArrayInitTypeSizeU3D36_tB698999CCEDB4F85BD29AF1331C779D1151F6653 ___8ABAB393752BC1119B0EAD989DF450C6E04D8FF2_40;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::91B948814BF180E7FA42137C83AAC043E1410E0F
	__StaticArrayInitTypeSizeU3D256_t9964BE99285AE4D9552134EEE3B499A8A14CA85E ___91B948814BF180E7FA42137C83AAC043E1410E0F_41;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::92E3424CA2DC6ACE639842303D9E4959BC763087
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___92E3424CA2DC6ACE639842303D9E4959BC763087_42;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1024 <PrivateImplementationDetails>::967A5B1C1344A31AF4E7E1AAB1E89EE24D8A3FAB
	__StaticArrayInitTypeSizeU3D1024_tD7AD5167A937B4CC6664E8761D6C23C221E7E61F ___967A5B1C1344A31AF4E7E1AAB1E89EE24D8A3FAB_43;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::96DA30D37D8C819EE7A1D9733912F74C912EB5E4
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___96DA30D37D8C819EE7A1D9733912F74C912EB5E4_44;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::993F10D8449193619D5641268926D30980AB1EDE
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___993F10D8449193619D5641268926D30980AB1EDE_45;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::9A1D259207846B1C51748E932A5DD3904EB818E4
	__StaticArrayInitTypeSizeU3D48_t7768010C7539F6496FA0D1C8F1D14493F391BE42 ___9A1D259207846B1C51748E932A5DD3904EB818E4_46;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::9FF23D5ECF10A5EB1F8BC25B3B3C71AB581369EE
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___9FF23D5ECF10A5EB1F8BC25B3B3C71AB581369EE_47;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::A3105F394A59519BE301861D340BC3D09E41CB19
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___A3105F394A59519BE301861D340BC3D09E41CB19_48;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A328A2984A4E6A35011BFE9252B01DA208C532BA
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___A328A2984A4E6A35011BFE9252B01DA208C532BA_49;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::A4A22152FAAB8DB4A63DE422AE0D5852FD35B04A
	__StaticArrayInitTypeSizeU3D12_t598C60A37F2307426C210419DD1DFE08083A052E ___A4A22152FAAB8DB4A63DE422AE0D5852FD35B04A_50;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::A62278C03345A9248C734AF81513A1F8D1B07D46
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___A62278C03345A9248C734AF81513A1F8D1B07D46_51;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::A68289F5B4251B321F6F03C741C46974A0418E64
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___A68289F5B4251B321F6F03C741C46974A0418E64_52;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::A6AB6C1208F342FA0C67CE497AF09D47AFA065E8
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___A6AB6C1208F342FA0C67CE497AF09D47AFA065E8_53;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::A7CBA58371A7AF46C17847174F40F4663D2F59F5
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___A7CBA58371A7AF46C17847174F40F4663D2F59F5_54;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::A92F46ED19BFF6E5CAB48F7C846477C9AAD02DA6
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___A92F46ED19BFF6E5CAB48F7C846477C9AAD02DA6_55;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::A988F7089BBB957B7EA2A8F2D66C7DF62B59CFD9
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___A988F7089BBB957B7EA2A8F2D66C7DF62B59CFD9_56;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=62 <PrivateImplementationDetails>::ADA84571EAB5163CC2C40A5CF9F2DF898ED1180C
	__StaticArrayInitTypeSizeU3D62_t03E85058B194522064A8C4C2C04C51753D798AF6 ___ADA84571EAB5163CC2C40A5CF9F2DF898ED1180C_57;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::B14468BE5B21A8E0D79DA7988BBF773FDA08701A
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___B14468BE5B21A8E0D79DA7988BBF773FDA08701A_58;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::BFB130DEFFB14CE563713BDDF442B98CCACE8A8F
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___BFB130DEFFB14CE563713BDDF442B98CCACE8A8F_59;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=108 <PrivateImplementationDetails>::C0A8C45EE4F4DF297B1688A2C5BDE5BC312071C4
	__StaticArrayInitTypeSizeU3D108_tC79E91896879675BEC0AE66FB4CDFEAFB22F03C3 ___C0A8C45EE4F4DF297B1688A2C5BDE5BC312071C4_60;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::C5709FC40EFF23BB977BBC3DA4BCA193930C5B92
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___C5709FC40EFF23BB977BBC3DA4BCA193930C5B92_61;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=60 <PrivateImplementationDetails>::C6DFEE18BA4DC30A7D7D90AB72AB0228B66ED858
	__StaticArrayInitTypeSizeU3D60_t8B28915F84862D50A378A9753BAA6ABDFB6ADFB9 ___C6DFEE18BA4DC30A7D7D90AB72AB0228B66ED858_62;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::C881D9C683CE2D13A2438CAD551803C8B1100C53
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___C881D9C683CE2D13A2438CAD551803C8B1100C53_63;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::CBD12AC86FBCD56155B93A9CA77947E68793C2B5
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___CBD12AC86FBCD56155B93A9CA77947E68793C2B5_64;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=34 <PrivateImplementationDetails>::CC3901AF2214B4D6ADEB73EB932BC1F0E40C318C
	__StaticArrayInitTypeSizeU3D34_tD35C3F7BB14FA0508DF4F2FDD75BAF75923ACAE1 ___CC3901AF2214B4D6ADEB73EB932BC1F0E40C318C_65;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::CE23A1D2337FC685E2FA96AC9F8B8BA6EA0C5BDD
	__StaticArrayInitTypeSizeU3D128_t5DF7ED9CF8D70059216AD4A04DDA252727B8AD00 ___CE23A1D2337FC685E2FA96AC9F8B8BA6EA0C5BDD_66;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::D177776BF8B5B13646CB32C3E3C2E3A3F6389454
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___D177776BF8B5B13646CB32C3E3C2E3A3F6389454_67;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D2CE52450BFB35255920A8F83FADB36945ABF964
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___D2CE52450BFB35255920A8F83FADB36945ABF964_68;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::D5C60CDEF63D72F5032E90D8B9D5EFF3E566D8F4
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___D5C60CDEF63D72F5032E90D8B9D5EFF3E566D8F4_69;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::DDF6D11A3E93BE497F5BAC07290983B9D3832ECE
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___DDF6D11A3E93BE497F5BAC07290983B9D3832ECE_70;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::E2EF5AD9211AEBF1A7D759556F680C7916E434D8
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___E2EF5AD9211AEBF1A7D759556F680C7916E434D8_71;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::E44BF9B4DEFF99F72DA9F21344C344E2CD352BCB
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___E44BF9B4DEFF99F72DA9F21344C344E2CD352BCB_72;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=1022 <PrivateImplementationDetails>::EBB7471D163460A589A0BB5C1FB2B55811F80E11
	__StaticArrayInitTypeSizeU3D1022_t9AE416AAC3510E000040F4859E802B075694A305 ___EBB7471D163460A589A0BB5C1FB2B55811F80E11_73;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=254 <PrivateImplementationDetails>::ED6CCE320D9C94CDED123AD06BD6A29CC75A012C
	__StaticArrayInitTypeSizeU3D254_t9849697D98C83B6D21AA34F8FBCE6B15F8329E1C ___ED6CCE320D9C94CDED123AD06BD6A29CC75A012C_74;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::F0E124B606159405D7C0D19C7158FD45A4F27EF4
	__StaticArrayInitTypeSizeU3D20_tB929BF2879BE81455DD0B35AC943B792D9EBF668 ___F0E124B606159405D7C0D19C7158FD45A4F27EF4_75;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=56 <PrivateImplementationDetails>::F1781D4343E58B231D363C7698B8B7C63C173F92
	__StaticArrayInitTypeSizeU3D56_t27D06B24683256D5672380E659CF5F01FF700DEB ___F1781D4343E58B231D363C7698B8B7C63C173F92_76;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=68 <PrivateImplementationDetails>::F24A3495EC779AA95747314593B416FA283F5A15
	__StaticArrayInitTypeSizeU3D68_tF7E36E1F4F7EA87D434F9CEC0938E5069D739AF5 ___F24A3495EC779AA95747314593B416FA283F5A15_77;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=92 <PrivateImplementationDetails>::F2BCD6EC6BB1D97B183FA5A1C54B5725010F0038
	__StaticArrayInitTypeSizeU3D92_t79BCFE922C12EF8E5B6EB9F52956A6428FC55808 ___F2BCD6EC6BB1D97B183FA5A1C54B5725010F0038_78;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=88 <PrivateImplementationDetails>::F7A1E3117FA8F941095E83511E1B55F5E050747C
	__StaticArrayInitTypeSizeU3D88_tDC1FF3C0D3646C9680E3C8CEE8BF218D64C1A973 ___F7A1E3117FA8F941095E83511E1B55F5E050747C_79;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=120 <PrivateImplementationDetails>::FA2D9B0982EC9C8B3280A5D325C7A19C52E902D6
	__StaticArrayInitTypeSizeU3D120_tB5711A21B80DE30D3B410A0644918F388AADC947 ___FA2D9B0982EC9C8B3280A5D325C7A19C52E902D6_80;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::FB4FBD597E39496564E6322822D8DD70A68ADE47
	__StaticArrayInitTypeSizeU3D32_tFC7685F6F32C726C9ED571BFFB8B3315FCE42653 ___FB4FBD597E39496564E6322822D8DD70A68ADE47_81;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=16 <PrivateImplementationDetails>::FD06A67F6CBC0BE9E112D56B89B86432104BD055
	__StaticArrayInitTypeSizeU3D16_t2E252FB670A2381C145AA775933EE69D9ABB0C9A ___FD06A67F6CBC0BE9E112D56B89B86432104BD055_82;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=142 <PrivateImplementationDetails>::FD84D4E70F766B0C44E5012C056C44B2E5E90E9A
	__StaticArrayInitTypeSizeU3D142_tBE978B96DFE3B224C71C4E4BAE894A8A2DDA93B6 ___FD84D4E70F766B0C44E5012C056C44B2E5E90E9A_83;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.IO.IOException
struct IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.IO.EndOfStreamException
struct EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028  : public IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910
{
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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



// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Double System.Math::Log(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054 (double ___a0, double ___newBase1, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___reader0, int64_t ___offset1, int32_t* ___count2, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___src0, int32_t ___srcOffset1, RuntimeArray* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.RiffHeaderFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) ;
// System.Void NLayer.Decoder.FrameBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FrameBase__ctor_mD2DD49A7026CCDE8C33BB1E10CFA188E7663F6E7 (FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.FrameBase::Read(System.Int32,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F (FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057* __this, int32_t ___offset0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer1, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, int32_t ___startIndex1, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRFrames()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleCount()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRBytes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRBytes_mD00554357B8152D515DD2DD891D942C4CB58CBD9_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
// System.Int64 NLayer.Decoder.VBRInfo::get_VBRStreamSampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VBRInfo_get_VBRStreamSampleCount_mDD4F937F59686963C4904F5A539FE3675BFAF14E (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleRate_mE9E1A537690E9BA07F38BD9B375B2C0D10E070A4_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer__ctor_mAD628916DEF042A66C9D2628983FC208A19796BE (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, int32_t ___initialSize0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->____localLock_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____localLock_4), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_1 = ___initialSize0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_2;
		L_2 = Math_Log_m5A3BBBF06AB82F25C885812E07D27B473CF43054(((double)L_1), (2.0), NULL);
		___initialSize0 = ((int32_t)(2<<((int32_t)(il2cpp_codegen_cast_double_to_int<int32_t>(L_2)&((int32_t)31)))));
		int32_t L_3 = ___initialSize0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_3);
		__this->___Data_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_0), (void*)L_4);
		return;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::Read(NLayer.Decoder.MpegStreamReader,System.Int64,System.Byte[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_Read_mC0A0A4E8279818219FFB2D81C47C54215A3E910D (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___reader0, int64_t ___offset1, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer2, int32_t ___index3, int32_t ___count4, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_3 = ___reader0;
			int64_t L_4 = ___offset1;
			int32_t L_5;
			L_5 = ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607(__this, L_3, L_4, (&___count4), NULL);
			V_1 = L_5;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___Data_0;
			int32_t L_7 = V_1;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___buffer2;
			int32_t L_9 = ___index3;
			int32_t L_10 = ___count4;
			Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, L_9, L_10, NULL);
			goto IL_0032;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		int32_t L_11 = ___count4;
		return L_11;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::ReadByte(NLayer.Decoder.MpegStreamReader,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_ReadByte_m0DDD8FD25785CA1192083EF1133D3FDBDF86F55D (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___reader0, int64_t ___offset1, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				V_1 = 1;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_3 = ___reader0;
				int64_t L_4 = ___offset1;
				int32_t L_5;
				L_5 = ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607(__this, L_3, L_4, (&V_1), NULL);
				V_2 = L_5;
				int32_t L_6 = V_1;
				if ((!(((uint32_t)L_6) == ((uint32_t)1))))
				{
					goto IL_0029_1;
				}
			}
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = __this->___Data_0;
				int32_t L_8 = V_2;
				NullCheck(L_7);
				int32_t L_9 = L_8;
				uint8_t L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
				V_3 = L_10;
				goto IL_0034;
			}

IL_0029_1:
			{
				goto IL_0032;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0032:
	{
		return (-1);
	}

IL_0034:
	{
		int32_t L_11 = V_3;
		return L_11;
	}
}
// System.Int32 NLayer.Decoder.MpegStreamReader/ReadBuffer::EnsureFilled(NLayer.Decoder.MpegStreamReader,System.Int64,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* ___reader0, int64_t ___offset1, int32_t* ___count2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int64_t V_5 = 0;
	int32_t V_6 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_7 = NULL;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	RuntimeObject* V_11 = NULL;
	int64_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int64_t L_0 = ___offset1;
		int64_t L_1 = __this->___BaseOffset_1;
		V_0 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_0, L_1)));
		int32_t L_2 = V_0;
		int32_t* L_3 = ___count2;
		int32_t L_4 = *((int32_t*)L_3);
		V_1 = ((int32_t)il2cpp_codegen_add(L_2, L_4));
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		int32_t L_6 = V_1;
		int32_t L_7 = __this->___End_2;
		if ((((int32_t)L_6) <= ((int32_t)L_7)))
		{
			goto IL_0417;
		}
	}

IL_001f:
	{
		V_2 = 0;
		V_3 = 0;
		V_4 = 0;
		V_5 = ((int64_t)0);
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) >= ((int32_t)0)))
		{
			goto IL_00b3;
		}
	}
	{
		MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_9 = ___reader0;
		NullCheck(L_9);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = L_9->____source_10;
		NullCheck(L_10);
		bool L_11;
		L_11 = VirtualFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.IO.Stream::get_CanSeek() */, L_10);
		if (L_11)
		{
			goto IL_0049;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_12 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_12, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral808DF11042257F134CE34DF232CD9523F589E554)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ReadBuffer_EnsureFilled_mE60980A2F2CF5E1114587B246B9CC6C76534E607_RuntimeMethod_var)));
	}

IL_0049:
	{
		int32_t L_13 = __this->___End_2;
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_14 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = __this->___Data_0;
		NullCheck(L_15);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_14, ((int32_t)(((RuntimeArray*)L_15)->max_length))))) > ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = __this->___Data_0;
		NullCheck(L_16);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_16)->max_length)), 2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0086;
		}
	}
	{
		int32_t L_17 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___Data_0;
		NullCheck(L_18);
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_17, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_18)->max_length)), 2))))) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}

IL_007f:
	{
		int32_t L_19 = __this->___End_2;
		V_1 = L_19;
	}

IL_0086:
	{
		int64_t L_20 = ___offset1;
		V_5 = L_20;
		int32_t L_21 = V_1;
		if ((((int32_t)L_21) >= ((int32_t)0)))
		{
			goto IL_00a7;
		}
	}
	{
		ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295(__this, NULL);
		int64_t L_22 = ___offset1;
		__this->___BaseOffset_1 = L_22;
		V_0 = 0;
		int32_t* L_23 = ___count2;
		int32_t L_24 = *((int32_t*)L_23);
		V_1 = L_24;
		int32_t* L_25 = ___count2;
		int32_t L_26 = *((int32_t*)L_25);
		V_3 = L_26;
		goto IL_015e;
	}

IL_00a7:
	{
		int32_t L_27 = V_1;
		V_4 = ((-L_27));
		int32_t L_28 = V_0;
		V_3 = ((-L_28));
		goto IL_015e;
	}

IL_00b3:
	{
		int32_t L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = __this->___Data_0;
		NullCheck(L_30);
		if ((((int32_t)L_29) >= ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_00de;
		}
	}
	{
		int32_t L_31 = V_1;
		int32_t L_32 = __this->___End_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		int32_t L_33 = __this->___End_2;
		V_2 = L_33;
		int64_t L_34 = __this->___BaseOffset_1;
		int32_t L_35 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_34, ((int64_t)L_35)));
		goto IL_015e;
	}

IL_00de:
	{
		int32_t L_36 = V_1;
		int32_t L_37 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38 = __this->___Data_0;
		NullCheck(L_38);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_36, L_37))) >= ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length)))))
		{
			goto IL_0110;
		}
	}
	{
		int32_t L_39 = __this->___DiscardCount_3;
		V_4 = L_39;
		int32_t L_40 = __this->___End_2;
		V_2 = L_40;
		int32_t L_41 = V_1;
		int32_t L_42 = V_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_41, L_42));
		int64_t L_43 = __this->___BaseOffset_1;
		int32_t L_44 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_43, ((int64_t)L_44)));
		goto IL_015e;
	}

IL_0110:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = __this->___Data_0;
		NullCheck(L_45);
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_45)->max_length)), 2))) > ((int32_t)((int32_t)16384))))
		{
			goto IL_0146;
		}
	}
	{
		int32_t L_46 = __this->___DiscardCount_3;
		V_4 = L_46;
		int32_t L_47 = __this->___End_2;
		V_2 = L_47;
		int32_t L_48 = V_1;
		int32_t L_49 = __this->___End_2;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_48, L_49));
		int64_t L_50 = __this->___BaseOffset_1;
		int32_t L_51 = V_2;
		V_5 = ((int64_t)il2cpp_codegen_add(L_50, ((int64_t)L_51)));
		goto IL_015e;
	}

IL_0146:
	{
		ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295(__this, NULL);
		int64_t L_52 = ___offset1;
		__this->___BaseOffset_1 = L_52;
		int64_t L_53 = ___offset1;
		V_5 = L_53;
		V_0 = 0;
		int32_t* L_54 = ___count2;
		int32_t L_55 = *((int32_t*)L_54);
		V_1 = L_55;
		int32_t* L_56 = ___count2;
		int32_t L_57 = *((int32_t*)L_56);
		V_3 = L_57;
	}

IL_015e:
	{
		int32_t L_58 = V_1;
		int32_t L_59 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_60 = __this->___Data_0;
		NullCheck(L_60);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_58, L_59))) > ((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length)))))
		{
			goto IL_017f;
		}
	}
	{
		int32_t L_61 = V_2;
		int32_t L_62 = V_3;
		int32_t L_63 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_64 = __this->___Data_0;
		NullCheck(L_64);
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_61, L_62)), L_63))) <= ((int32_t)((int32_t)(((RuntimeArray*)L_64)->max_length)))))
		{
			goto IL_0201;
		}
	}

IL_017f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_65 = __this->___Data_0;
		NullCheck(L_65);
		V_6 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_65)->max_length)), 2));
		goto IL_0193;
	}

IL_018d:
	{
		int32_t L_66 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_multiply(L_66, 2));
	}

IL_0193:
	{
		int32_t L_67 = V_6;
		int32_t L_68 = V_1;
		int32_t L_69 = V_4;
		if ((((int32_t)L_67) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_68, L_69)))))
		{
			goto IL_018d;
		}
	}
	{
		int32_t L_70 = V_6;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_71 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_70);
		V_7 = L_71;
		int32_t L_72 = V_4;
		if ((((int32_t)L_72) >= ((int32_t)0)))
		{
			goto IL_01cc;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_73 = __this->___Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_74 = V_7;
		int32_t L_75 = V_4;
		int32_t L_76 = __this->___End_2;
		int32_t L_77 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_73, 0, (RuntimeArray*)L_74, ((-L_75)), ((int32_t)il2cpp_codegen_add(L_76, L_77)), NULL);
		__this->___DiscardCount_3 = 0;
		goto IL_01f4;
	}

IL_01cc:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_78 = __this->___Data_0;
		int32_t L_79 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_80 = V_7;
		int32_t L_81 = __this->___End_2;
		int32_t L_82 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_78, L_79, (RuntimeArray*)L_80, 0, ((int32_t)il2cpp_codegen_subtract(L_81, L_82)), NULL);
		int32_t L_83 = __this->___DiscardCount_3;
		int32_t L_84 = V_4;
		__this->___DiscardCount_3 = ((int32_t)il2cpp_codegen_subtract(L_83, L_84));
	}

IL_01f4:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_85 = V_7;
		__this->___Data_0 = L_85;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_0), (void*)L_85);
		goto IL_028c;
	}

IL_0201:
	{
		int32_t L_86 = V_4;
		if (!L_86)
		{
			goto IL_028c;
		}
	}
	{
		int32_t L_87 = V_4;
		if ((((int32_t)L_87) <= ((int32_t)0)))
		{
			goto IL_023b;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_88 = __this->___Data_0;
		int32_t L_89 = V_4;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_90 = __this->___Data_0;
		int32_t L_91 = __this->___End_2;
		int32_t L_92 = V_4;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_88, L_89, (RuntimeArray*)L_90, 0, ((int32_t)il2cpp_codegen_subtract(L_91, L_92)), NULL);
		int32_t L_93 = __this->___DiscardCount_3;
		int32_t L_94 = V_4;
		__this->___DiscardCount_3 = ((int32_t)il2cpp_codegen_subtract(L_93, L_94));
		goto IL_028c;
	}

IL_023b:
	{
		V_8 = 0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_95 = __this->___Data_0;
		NullCheck(L_95);
		V_9 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_95)->max_length)), 1));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_96 = __this->___Data_0;
		NullCheck(L_96);
		int32_t L_97 = V_4;
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_96)->max_length)), 1)), L_97));
		goto IL_027f;
	}

IL_025b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_98 = __this->___Data_0;
		int32_t L_99 = V_10;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_100 = __this->___Data_0;
		int32_t L_101 = V_9;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		uint8_t L_103 = (L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (uint8_t)L_103);
		int32_t L_104 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_104, 1));
		int32_t L_105 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_105, 1));
		int32_t L_106 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_subtract(L_106, 1));
	}

IL_027f:
	{
		int32_t L_107 = V_8;
		int32_t L_108 = V_4;
		if ((((int32_t)L_107) < ((int32_t)L_108)))
		{
			goto IL_025b;
		}
	}
	{
		__this->___DiscardCount_3 = 0;
	}

IL_028c:
	{
		int64_t L_109 = __this->___BaseOffset_1;
		int32_t L_110 = V_4;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_109, ((int64_t)L_110)));
		int32_t L_111 = V_2;
		int32_t L_112 = V_4;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_111, L_112));
		int32_t L_113 = V_0;
		int32_t L_114 = V_4;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_113, L_114));
		int32_t L_115 = V_1;
		int32_t L_116 = V_4;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_115, L_116));
		int32_t L_117 = __this->___End_2;
		int32_t L_118 = V_4;
		__this->___End_2 = ((int32_t)il2cpp_codegen_subtract(L_117, L_118));
		MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_119 = ___reader0;
		NullCheck(L_119);
		RuntimeObject* L_120 = L_119->____readLock_14;
		V_11 = L_120;
		RuntimeObject* L_121 = V_11;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_121, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_040f:
			{// begin finally (depth: 1)
				RuntimeObject* L_122 = V_11;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_122, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t L_123 = V_3;
				if ((((int32_t)L_123) <= ((int32_t)0)))
				{
					goto IL_038d_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_124 = ___reader0;
				NullCheck(L_124);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_125 = L_124->____source_10;
				NullCheck(L_125);
				int64_t L_126;
				L_126 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_125);
				int64_t L_127 = V_5;
				if ((((int64_t)L_126) == ((int64_t)L_127)))
				{
					goto IL_038d_1;
				}
			}
			{
				int64_t L_128 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_129 = ___reader0;
				NullCheck(L_129);
				int64_t L_130 = L_129->____eofOffset_9;
				if ((((int64_t)L_128) >= ((int64_t)L_130)))
				{
					goto IL_038d_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_131 = ___reader0;
				NullCheck(L_131);
				bool L_132 = L_131->____canSeek_11;
				if (!L_132)
				{
					goto IL_031f_1;
				}
			}
			try
			{// begin try (depth: 2)
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_133 = ___reader0;
				NullCheck(L_133);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_134 = L_133->____source_10;
				int64_t L_135 = V_5;
				NullCheck(L_134);
				VirtualActionInvoker1< int64_t >::Invoke(13 /* System.Void System.IO.Stream::set_Position(System.Int64) */, L_134, L_135);
				goto IL_038d_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EndOfStreamException_t6B6A2609418A69523CBEF305228B18E0E5778028_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0309_1;
				}
				throw e;
			}

CATCH_0309_1:
			{// begin catch(System.IO.EndOfStreamException)
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_136 = ___reader0;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_137 = ___reader0;
				NullCheck(L_137);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_138 = L_137->____source_10;
				NullCheck(L_138);
				int64_t L_139;
				L_139 = VirtualFuncInvoker0< int64_t >::Invoke(11 /* System.Int64 System.IO.Stream::get_Length() */, L_138);
				NullCheck(L_136);
				L_136->____eofOffset_9 = L_139;
				V_3 = 0;
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_038d_1;
			}// end catch (depth: 2)

IL_031f_1:
			{
				int64_t L_140 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_141 = ___reader0;
				NullCheck(L_141);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_142 = L_141->____source_10;
				NullCheck(L_142);
				int64_t L_143;
				L_143 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_142);
				V_12 = ((int64_t)il2cpp_codegen_subtract(L_140, L_143));
				goto IL_0354_1;
			}

IL_0331_1:
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_144 = ___reader0;
				NullCheck(L_144);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_145 = L_144->____source_10;
				NullCheck(L_145);
				int32_t L_146;
				L_146 = VirtualFuncInvoker0< int32_t >::Invoke(33 /* System.Int32 System.IO.Stream::ReadByte() */, L_145);
				if ((!(((uint32_t)L_146) == ((uint32_t)(-1)))))
				{
					goto IL_0354_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_147 = ___reader0;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_148 = ___reader0;
				NullCheck(L_148);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_149 = L_148->____source_10;
				NullCheck(L_149);
				int64_t L_150;
				L_150 = VirtualFuncInvoker0< int64_t >::Invoke(12 /* System.Int64 System.IO.Stream::get_Position() */, L_149);
				NullCheck(L_147);
				L_147->____eofOffset_9 = L_150;
				V_3 = 0;
				goto IL_038d_1;
			}

IL_0354_1:
			{
				int64_t L_151 = V_12;
				int64_t L_152 = ((int64_t)il2cpp_codegen_subtract(L_151, ((int64_t)1)));
				V_12 = L_152;
				if ((((int64_t)L_152) >= ((int64_t)((int64_t)0))))
				{
					goto IL_0331_1;
				}
			}
			{
				goto IL_038d_1;
			}

IL_0362_1:
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_153 = ___reader0;
				NullCheck(L_153);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_154 = L_153->____source_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_155 = __this->___Data_0;
				int32_t L_156 = V_2;
				int32_t L_157 = V_3;
				NullCheck(L_154);
				int32_t L_158;
				L_158 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_154, L_155, L_156, L_157);
				V_13 = L_158;
				int32_t L_159 = V_13;
				if (!L_159)
				{
					goto IL_039b_1;
				}
			}
			{
				int32_t L_160 = V_2;
				int32_t L_161 = V_13;
				V_2 = ((int32_t)il2cpp_codegen_add(L_160, L_161));
				int64_t L_162 = V_5;
				int32_t L_163 = V_13;
				V_5 = ((int64_t)il2cpp_codegen_add(L_162, ((int64_t)L_163)));
				int32_t L_164 = V_3;
				int32_t L_165 = V_13;
				V_3 = ((int32_t)il2cpp_codegen_subtract(L_164, L_165));
			}

IL_038d_1:
			{
				int32_t L_166 = V_3;
				if ((((int32_t)L_166) <= ((int32_t)0)))
				{
					goto IL_039b_1;
				}
			}
			{
				int64_t L_167 = V_5;
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_168 = ___reader0;
				NullCheck(L_168);
				int64_t L_169 = L_168->____eofOffset_9;
				if ((((int64_t)L_167) < ((int64_t)L_169)))
				{
					goto IL_0362_1;
				}
			}

IL_039b_1:
			{
				int32_t L_170 = V_2;
				int32_t L_171 = __this->___End_2;
				if ((((int32_t)L_170) <= ((int32_t)L_171)))
				{
					goto IL_03ab_1;
				}
			}
			{
				int32_t L_172 = V_2;
				__this->___End_2 = L_172;
			}

IL_03ab_1:
			{
				int32_t L_173 = __this->___End_2;
				int32_t L_174 = V_1;
				if ((((int32_t)L_173) >= ((int32_t)L_174)))
				{
					goto IL_03c6_1;
				}
			}
			{
				int32_t* L_175 = ___count2;
				int32_t L_176 = __this->___End_2;
				int32_t L_177 = V_0;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_178;
				L_178 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(0, ((int32_t)il2cpp_codegen_subtract(L_176, L_177)), NULL);
				*((int32_t*)L_175) = (int32_t)L_178;
				goto IL_0417;
			}

IL_03c6_1:
			{
				int32_t L_179 = __this->___End_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_180 = __this->___Data_0;
				NullCheck(L_180);
				if ((((int32_t)L_179) >= ((int32_t)((int32_t)(((RuntimeArray*)L_180)->max_length)))))
				{
					goto IL_040d_1;
				}
			}
			{
				MpegStreamReader_t157CD0266F18180C58DAEF7E342B34C69EAB52AD* L_181 = ___reader0;
				NullCheck(L_181);
				Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_182 = L_181->____source_10;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_183 = __this->___Data_0;
				int32_t L_184 = __this->___End_2;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_185 = __this->___Data_0;
				NullCheck(L_185);
				int32_t L_186 = __this->___End_2;
				NullCheck(L_182);
				int32_t L_187;
				L_187 = VirtualFuncInvoker3< int32_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(31 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_182, L_183, L_184, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_185)->max_length)), L_186)));
				V_14 = L_187;
				int32_t L_188 = __this->___End_2;
				int32_t L_189 = V_14;
				__this->___End_2 = ((int32_t)il2cpp_codegen_add(L_188, L_189));
			}

IL_040d_1:
			{
				goto IL_0417;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0417:
	{
		int32_t L_190 = V_0;
		return L_190;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::DiscardThrough(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_DiscardThrough_m483A9DFE3F83D3333BA9525A370EAED0334C0DDD (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, int64_t ___offset0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	{
		RuntimeObject* L_0 = __this->____localLock_4;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0041:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int64_t L_3 = ___offset0;
				int64_t L_4 = __this->___BaseOffset_1;
				V_1 = ((int32_t)((int64_t)il2cpp_codegen_subtract(L_3, L_4)));
				int32_t L_5 = V_1;
				int32_t L_6 = __this->___DiscardCount_3;
				il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
				int32_t L_7;
				L_7 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_5, L_6, NULL);
				__this->___DiscardCount_3 = L_7;
				int32_t L_8 = __this->___DiscardCount_3;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = __this->___Data_0;
				NullCheck(L_9);
				if ((((int32_t)L_8) < ((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length)))))
				{
					goto IL_003f_1;
				}
			}
			{
				ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292(__this, NULL);
			}

IL_003f_1:
			{
				goto IL_0048;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		return;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::Truncate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_Truncate_m93F61034FB5851456445E45A2CECA925BFCF9295 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) 
{
	{
		__this->___End_2 = 0;
		__this->___DiscardCount_3 = 0;
		return;
	}
}
// System.Void NLayer.Decoder.MpegStreamReader/ReadBuffer::CommitDiscard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadBuffer_CommitDiscard_m3F70F13FC46CD06EA2794FF9D8DAA9E540B3C292 (ReadBuffer_t75A9B81C14B1258793B2F8392C266737AA05072F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___Data_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		int32_t L_2 = __this->___DiscardCount_3;
		int32_t L_3 = __this->___End_2;
		if ((((int32_t)L_2) < ((int32_t)L_3)))
		{
			goto IL_003b;
		}
	}

IL_001e:
	{
		int64_t L_4 = __this->___BaseOffset_1;
		int32_t L_5 = __this->___DiscardCount_3;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_4, ((int64_t)L_5)));
		__this->___End_2 = 0;
		goto IL_0087;
	}

IL_003b:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___Data_0;
		int32_t L_7 = __this->___DiscardCount_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___Data_0;
		int32_t L_9 = __this->___End_2;
		int32_t L_10 = __this->___DiscardCount_3;
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_6, L_7, (RuntimeArray*)L_8, 0, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		int64_t L_11 = __this->___BaseOffset_1;
		int32_t L_12 = __this->___DiscardCount_3;
		__this->___BaseOffset_1 = ((int64_t)il2cpp_codegen_add(L_11, ((int64_t)L_12)));
		int32_t L_13 = __this->___End_2;
		int32_t L_14 = __this->___DiscardCount_3;
		__this->___End_2 = ((int32_t)il2cpp_codegen_subtract(L_13, L_14));
	}

IL_0087:
	{
		__this->___DiscardCount_3 = 0;
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
// NLayer.Decoder.RiffHeaderFrame NLayer.Decoder.RiffHeaderFrame::TrySync(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* RiffHeaderFrame_TrySync_mB4F89B0DF1E81A4129A7159D7EE1067D701CDDD2 (uint32_t ___syncMark0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		uint32_t L_0 = ___syncMark0;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)1380533830)))))
		{
			goto IL_000e;
		}
	}
	{
		RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* L_1 = (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2*)il2cpp_codegen_object_new(RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F(L_1, NULL);
		return L_1;
	}

IL_000e:
	{
		return (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2*)NULL;
	}
}
// System.Void NLayer.Decoder.RiffHeaderFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RiffHeaderFrame__ctor_mCBB30A18DB9EB3DA86467982514111183D93DB3F (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FrameBase_tEDF113D6C4219E82D38B1A686D5EE3787D5E2057_il2cpp_TypeInfo_var);
		FrameBase__ctor_mD2DD49A7026CCDE8C33BB1E10CFA188E7663F6E7(__this, NULL);
		return;
	}
}
// System.Int32 NLayer.Decoder.RiffHeaderFrame::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RiffHeaderFrame_Validate_mA2F5EA8529AAB8DC5C5766A742A184F62010FE04 (RiffHeaderFrame_tC106FDC662536751E35BD7A64ACD9E7749E0AEA2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	int32_t V_1 = 0;
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)4);
		V_0 = L_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = V_0;
		int32_t L_2;
		L_2 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, 8, L_1, NULL);
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		return (-1);
	}

IL_0014:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = 0;
		uint8_t L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)87)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		uint8_t L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)65)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = 2;
		uint8_t L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((!(((uint32_t)L_11) == ((uint32_t)((int32_t)86)))))
		{
			goto IL_0030;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13 = 3;
		uint8_t L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		if ((((int32_t)L_14) == ((int32_t)((int32_t)69))))
		{
			goto IL_0032;
		}
	}

IL_0030:
	{
		return (-1);
	}

IL_0032:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_15 = V_0;
		int32_t L_16;
		L_16 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, ((int32_t)12), L_15, NULL);
		if ((((int32_t)L_16) == ((int32_t)4)))
		{
			goto IL_0040;
		}
	}
	{
		return (-1);
	}

IL_0040:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = 0;
		uint8_t L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)102)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = 1;
		uint8_t L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)109)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_0;
		NullCheck(L_23);
		int32_t L_24 = 2;
		uint8_t L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		if ((!(((uint32_t)L_25) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_005c;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = 3;
		uint8_t L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		if ((((int32_t)L_28) == ((int32_t)((int32_t)32))))
		{
			goto IL_005e;
		}
	}

IL_005c:
	{
		return (-1);
	}

IL_005e:
	{
		V_1 = ((int32_t)16);
	}

IL_0061:
	{
		int32_t L_29 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_0;
		int32_t L_31;
		L_31 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, L_29, L_30, NULL);
		if ((((int32_t)L_31) == ((int32_t)4)))
		{
			goto IL_006e;
		}
	}
	{
		return (-1);
	}

IL_006e:
	{
		int32_t L_32 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = V_0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_34;
		L_34 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_33, 0, NULL);
		V_1 = ((int32_t)il2cpp_codegen_add(L_32, ((int32_t)il2cpp_codegen_add(4, L_34))));
		int32_t L_35 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = V_0;
		int32_t L_37;
		L_37 = FrameBase_Read_m6D13611B57FF89CC126B4AFE7D19472CD93BFA4F(__this, L_35, L_36, NULL);
		if ((((int32_t)L_37) == ((int32_t)4)))
		{
			goto IL_0087;
		}
	}
	{
		return (-1);
	}

IL_0087:
	{
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_38, 4));
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_39 = V_0;
		NullCheck(L_39);
		int32_t L_40 = 0;
		uint8_t L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		if ((!(((uint32_t)L_41) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42 = V_0;
		NullCheck(L_42);
		int32_t L_43 = 1;
		uint8_t L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((uint32_t)L_44) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_45 = V_0;
		NullCheck(L_45);
		int32_t L_46 = 2;
		uint8_t L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		if ((!(((uint32_t)L_47) == ((uint32_t)((int32_t)116)))))
		{
			goto IL_0061;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_48 = V_0;
		NullCheck(L_48);
		int32_t L_49 = 3;
		uint8_t L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		if ((!(((uint32_t)L_50) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_51 = V_1;
		return ((int32_t)il2cpp_codegen_add(L_51, 4));
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
// System.Void NLayer.Decoder.VBRInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo__ctor_mA8334700F9C551380A6EEF0512B1461FB790F989 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_SampleCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_SampleCount_m66366C99623C9E6621D5EEC62D22396F5E9D29D2 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSampleCountU3Ek__BackingField_0 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_SampleRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleRate_mE9E1A537690E9BA07F38BD9B375B2C0D10E070A4 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_SampleRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_SampleRate_m6A3A6C0A743960B13A0F13D9CCE37CF20A932542 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CSampleRateU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_Channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_Channels_m44D42B2086A8BC69DCFA63C9A84EDFF0B989A408 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CChannelsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_Channels(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_Channels_mCDD7E25C06B745F40951362A3F86DB301967667D (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CChannelsU3Ek__BackingField_2 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRFramesU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRFrames(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRFrames_mF5DD6C14E108077A6F6DECEFBB0873E550A8F4C7 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CVBRFramesU3Ek__BackingField_3 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRBytes_mD00554357B8152D515DD2DD891D942C4CB58CBD9 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRBytesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRBytes_m7F671B9D59A296B1FE7CDC9CEB71FBA2542FBB2D (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CVBRBytesU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRQuality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRQuality_m3D01AC066CA1BB99CBFD8D0ACDB9B72436690108 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRQualityU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRQuality(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRQuality_m59BE8B5D38B2995C7D22B6DA2F013378471A9DBE (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CVBRQualityU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRDelay_mD4A6B37F749C721EA06B744891AA83B6637C38C9 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRDelayU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void NLayer.Decoder.VBRInfo::set_VBRDelay(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VBRInfo_set_VBRDelay_mCC2C140644E9459294894A314D6B0842D91944EF (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___value0;
		__this->___U3CVBRDelayU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Int64 NLayer.Decoder.VBRInfo::get_VBRStreamSampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t VBRInfo_get_VBRStreamSampleCount_mDD4F937F59686963C4904F5A539FE3675BFAF14E (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline(__this, NULL);
		int32_t L_1;
		L_1 = VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline(__this, NULL);
		return ((int64_t)((int32_t)il2cpp_codegen_multiply(L_0, L_1)));
	}
}
// System.Int32 NLayer.Decoder.VBRInfo::get_VBRAverageBitrate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRAverageBitrate_m93BAC265A884D62FE0CC04FFB8F91CA9B3DCE050 (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = VBRInfo_get_VBRBytes_mD00554357B8152D515DD2DD891D942C4CB58CBD9_inline(__this, NULL);
		int64_t L_1;
		L_1 = VBRInfo_get_VBRStreamSampleCount_mDD4F937F59686963C4904F5A539FE3675BFAF14E(__this, NULL);
		int32_t L_2;
		L_2 = VBRInfo_get_SampleRate_mE9E1A537690E9BA07F38BD9B375B2C0D10E070A4_inline(__this, NULL);
		return il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)(((double)L_0)/((double)(((double)L_1)/((double)L_2))))), (8.0))));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRFrames_m906DEB6619F2393D4B9E8E1E27403E0F516A14F8_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRFramesU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleCount_m500BA1AD9443198FECC6F63E32A12C048D71E6BF_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleCountU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_VBRBytes_mD00554357B8152D515DD2DD891D942C4CB58CBD9_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CVBRBytesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t VBRInfo_get_SampleRate_mE9E1A537690E9BA07F38BD9B375B2C0D10E070A4_inline (VBRInfo_t33B5058BA2655ADC6A5CE205921ABDF4C273A5FD* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___U3CSampleRateU3Ek__BackingField_1;
		return L_0;
	}
}
