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
template <typename T1, typename T2, typename T3>
struct VirtualActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>
struct U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080;
// <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>
struct U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo>
struct AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD;
// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.Object>>
struct Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF;
// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs>
struct EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746;
// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E;
// System.Func`1<<>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>>
struct Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD;
// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457;
// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941;
// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t349E66EC5F09B881A8E52EE40A1AB9EC60E08E44;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.Collections.Generic.IEqualityComparer`1<Firebase.Platform.IFirebaseAppPlatform>
struct IEqualityComparer_1_tE769D1E4975B45D060448C337F059FA6D36A277F;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_t584E66CD0123CFB6503AC3E597748948194AAA5E;
// System.Collections.Generic.Dictionary`2/KeyCollection<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct KeyCollection_t779097928E8E39B574C3DBE3DB581F3DA3F94C85;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Threading.ManualResetEvent>
struct KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Object>
struct KeyCollection_tE66790F09E854C19C7F612BEAD203AE626E90A36;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA;
// System.Collections.Generic.Dictionary`2/ValueCollection<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct ValueCollection_tDBF8391DC23076250DC237BB96A52D31D98ACCDC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct ValueCollection_t87759E63E3496C207528111673C9A61DA2471344;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Threading.ManualResetEvent>
struct ValueCollection_t04637302418E50CC664F5763757EFA471396883C;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Object>
struct ValueCollection_tC9D91E8A3198E40EA339059703AB10DFC9F5CC2E;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/Entry<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>[]
struct EntryU5BU5D_t50417BB47DD41E063D80BC0DC7A012CF87889B7F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>[]
struct EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Threading.ManualResetEvent>[]
struct EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Object>[]
struct EntryU5BU5D_t233BB24ED01E2D8D65B0651D54B8E3AD125CAF96;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>[]
struct Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08;
// System.Byte[][]
struct ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Security.Cryptography.KeySizes[]
struct KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48;
// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F;
// System.Collections.ArrayList
struct ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A;
// System.Reflection.Assembly
struct Assembly_t;
// System.AssemblyLoadEventHandler
struct AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42;
// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8;
// Firebase.Platform.Default.BaseAuthService
struct BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F;
// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377;
// System.EventHandler
struct EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E;
// System.Exception
struct Exception_t;
// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3;
// System.Threading.ExecutionContext
struct ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02;
// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C;
// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586;
// Firebase.Platform.FirebaseHttpRequest
struct FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC;
// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42;
// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72;
// Firebase.Platform.Security.GAuthToken
struct GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D;
// System.Collections.Hashtable
struct Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D;
// Firebase.Platform.IAppConfigExtensions
struct IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418;
// Firebase.Platform.IAuthService
struct IAuthService_tAFC014FDC6CA5923FD0BF4924D39E0C1EACB3545;
// Firebase.Platform.ICertificateService
struct ICertificateService_tBC22013BE458EE088F5693A178C88259EE17C71D;
// Firebase.Platform.IClockService
struct IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Firebase.Platform.IFirebaseAppPlatform
struct IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228;
// Firebase.Platform.IFirebaseAppUtils
struct IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391;
// Firebase.Platform.IGetTokenCompletionListener
struct IGetTokenCompletionListener_tAE49A63FFCE583DD0CDD4DAD0BCC443551114E9C;
// Firebase.Platform.IHttpFactoryService
struct IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B;
// Firebase.Platform.ILoggingService
struct ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4;
// System.Security.Principal.IPrincipal
struct IPrincipal_tE7AF5096287F6C3472585E124CB38FF2A51EAB5F;
// Firebase.Platform.ITokenChangeListener
struct ITokenChangeListener_tF9459E75B04D0B8FF2BD0167CAA76CCA75C35751;
// Firebase.Unity.InstallRootCerts
struct InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC;
// System.Threading.InternalThread
struct InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Mono.Security.Cryptography.KeyPairPersistence
struct KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6;
// System.LocalDataStoreHolder
struct LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F;
// System.LocalDataStoreMgr
struct LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E;
// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.MulticastDelegate
struct MulticastDelegate_t;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7;
// Firebase.Platform.NoopCertificateService
struct NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Security.Cryptography.Oid
struct Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405;
// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t897B29EF76C459408E11A42680C942716D809001;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.ResolveEventHandler
struct ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Microsoft.Win32.SafeHandles.SafeWaitHandle
struct SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// Firebase.Platform.Security.ServiceAccountCredential
struct ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34;
// Firebase.Platform.Security.ServiceCredential
struct ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.StringComparer
struct StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06;
// System.Reflection.StrongNameKeyPair
struct StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// System.Type
struct Type_t;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C;
// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152;
// Firebase.Unity.UnityHttpFactoryService
struct UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B;
// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB;
// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4;
// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// System.Net.UploadValuesCompletedEventArgs
struct UploadValuesCompletedEventArgs_t7BC1A1B74350605BE0FE5A0D81B2227F9344A92B;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.UriParser
struct UriParser_t920B0868286118827C08B08A15A9456AF6C19D81;
// System.Version
struct Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB;
// Firebase.Unity.WWWHttpRequest
struct WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE;
// System.Security.Cryptography.X509Certificates.X509CertificateImpl
struct X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5;
// System.Security.Cryptography.X509Certificates.X509ChainImpl
struct X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F;
// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0;
// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B;
// Mono.Security.X509.X509Store
struct X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661;
// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6;
// Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0
struct U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA;
// System.Reflection.EventInfo/AddEventAdapter
struct AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD;
// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE;
// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2;
// Firebase.Platform.Security.ServiceAccountCredential/Initializer
struct Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A;
// Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest
struct OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827;
// Firebase.Platform.Security.ServiceAccountCredential/UploadCompleted
struct UploadCompleted_tC4B70D62A1F675097292FD37449F8946659F67E9;
// Firebase.Platform.Security.ServiceCredential/Initializer
struct Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB;
// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C;
// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E;
// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA;
// System.Uri/UriInfo
struct UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09;
// Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0
struct U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9;
// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Delegate_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAuthService_tAFC014FDC6CA5923FD0BF4924D39E0C1EACB3545_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGetTokenCompletionListener_tAE49A63FFCE583DD0CDD4DAD0BCC443551114E9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509KeyUsageFlags_tA8507F67CB3F1DF68E2126C9D40A62CCF27065BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3EU7B86a38c22U2Df339U2D40ebU2Db429U2D6a15c926a2e7U7D_t63A87A81968A4E28F6B69B7C41FE49854CAFF6BE____U24fieldU2D0_0_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral036A39F166AA79B6CD7A7131A6D0057339BA2FE4;
IL2CPP_EXTERN_C String_t* _stringLiteral04F5CFEB9168BD4C7EB473F62010FE08DB839A42;
IL2CPP_EXTERN_C String_t* _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
IL2CPP_EXTERN_C String_t* _stringLiteral1405C2A661574468F6107DE8ADDF274A347D4F54;
IL2CPP_EXTERN_C String_t* _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral14E9992EEF3C263169CC6E264F3A6E0361C8CCCE;
IL2CPP_EXTERN_C String_t* _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD;
IL2CPP_EXTERN_C String_t* _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837;
IL2CPP_EXTERN_C String_t* _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral241699D849E896FB9BC68DBD68D19ABB88FD56BC;
IL2CPP_EXTERN_C String_t* _stringLiteral27BEF644286C56C122FB4E223756E021A2297C4A;
IL2CPP_EXTERN_C String_t* _stringLiteral28C266F303F178CE0931272538E30F328A704472;
IL2CPP_EXTERN_C String_t* _stringLiteral2952889D952A4C44CE56744511466B572E7C7B13;
IL2CPP_EXTERN_C String_t* _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514;
IL2CPP_EXTERN_C String_t* _stringLiteral30D43FC31E773CBC77843C2FE8F811F53799D25A;
IL2CPP_EXTERN_C String_t* _stringLiteral3126D9E65C7330570A199032544DC363F6860B07;
IL2CPP_EXTERN_C String_t* _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306;
IL2CPP_EXTERN_C String_t* _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0;
IL2CPP_EXTERN_C String_t* _stringLiteral3B751EA9E5305A196A365499A6D73C068B23F535;
IL2CPP_EXTERN_C String_t* _stringLiteral3BE4E36D37626E3BE837252D5B6435BA200F8D2F;
IL2CPP_EXTERN_C String_t* _stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB;
IL2CPP_EXTERN_C String_t* _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D;
IL2CPP_EXTERN_C String_t* _stringLiteral422AC61426903D426262726D783FB4E81ABFAFD3;
IL2CPP_EXTERN_C String_t* _stringLiteral443EFC2C9C57DF0CC3C5FE7354AB48DDE3A4AEAF;
IL2CPP_EXTERN_C String_t* _stringLiteral455B6D3D57E297E94C0295E24170391CDFF15D69;
IL2CPP_EXTERN_C String_t* _stringLiteral473BE997FD82CA373BC40BEC46E737A81D8B16EA;
IL2CPP_EXTERN_C String_t* _stringLiteral47E0992808628E76F29D63CE0E1B8F4F30BEF1E6;
IL2CPP_EXTERN_C String_t* _stringLiteral488410D28A9F604900922B8330A861918364B787;
IL2CPP_EXTERN_C String_t* _stringLiteral4976161E5AEF8C1E645199288F5EB3ACEA32AA40;
IL2CPP_EXTERN_C String_t* _stringLiteral4A1EFD48C04CE4AF708F3D1CD05A62511D4484AB;
IL2CPP_EXTERN_C String_t* _stringLiteral4D1BDBFCC51F4695254B3C53B7142111EC52EA17;
IL2CPP_EXTERN_C String_t* _stringLiteral4ED7B68968992538C38548E07BAA752E60DF5D67;
IL2CPP_EXTERN_C String_t* _stringLiteral52EBD272BF6013B4DC5340C6B0E1BB167745F86E;
IL2CPP_EXTERN_C String_t* _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B;
IL2CPP_EXTERN_C String_t* _stringLiteral59FB80B27DEF7725CF09D21164DD2FF891566700;
IL2CPP_EXTERN_C String_t* _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5D71090BA065802DCE316DE05E9529CB65818FAF;
IL2CPP_EXTERN_C String_t* _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5;
IL2CPP_EXTERN_C String_t* _stringLiteral62E6275F312E6BAFBE60EEB16DF367046BE2200D;
IL2CPP_EXTERN_C String_t* _stringLiteral6645154D30F9E0386C5E37D62453B39BB138437A;
IL2CPP_EXTERN_C String_t* _stringLiteral69A7A27A97142E232EA28BA2557E507697865243;
IL2CPP_EXTERN_C String_t* _stringLiteral73CAD35B5824AA33EF9DF492219EFA91122342DF;
IL2CPP_EXTERN_C String_t* _stringLiteral75BAD137802716F9C93A19121940C3B4C683710A;
IL2CPP_EXTERN_C String_t* _stringLiteral75C52D00E2170B12A0D9B5F1D5526FAF06C6ECD7;
IL2CPP_EXTERN_C String_t* _stringLiteral77833D2563D297077DCF9C67CF856153571C1740;
IL2CPP_EXTERN_C String_t* _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE;
IL2CPP_EXTERN_C String_t* _stringLiteral8134FFE209F938F66706246E8D9C58EFF0116037;
IL2CPP_EXTERN_C String_t* _stringLiteral821AFEA8E01316CE1B421A43D58E815D19003748;
IL2CPP_EXTERN_C String_t* _stringLiteral8300F90CFA2C6EED8FB78F9A042C910560412775;
IL2CPP_EXTERN_C String_t* _stringLiteral832CAF363EA13935F4DD911E53801618DB7C7794;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral896A2A117718A23135B6923C80A00C014390CF99;
IL2CPP_EXTERN_C String_t* _stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166;
IL2CPP_EXTERN_C String_t* _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E209AA61CB0242B5D20722DB93E91AF3AF8809E;
IL2CPP_EXTERN_C String_t* _stringLiteral8E228AA171C3F502250F2B2A0C17AF7F17AFDBCB;
IL2CPP_EXTERN_C String_t* _stringLiteral9078DD5F3FE9CAC3808E5B8044AD2406566606D4;
IL2CPP_EXTERN_C String_t* _stringLiteral94229832643A48D64F9CDC258FEAB50ECB829FAE;
IL2CPP_EXTERN_C String_t* _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
IL2CPP_EXTERN_C String_t* _stringLiteral94C8FB8AF905BE0ECF64EE89B4889ECACDE6A118;
IL2CPP_EXTERN_C String_t* _stringLiteral98DC63C9B798605745EDB7457C85928078445AFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9CB687E80C3B3ECC73E4A0BC2E161BAC503AFEF8;
IL2CPP_EXTERN_C String_t* _stringLiteral9CD8F729884106AEB055F7783C49B0F9CAFF47C4;
IL2CPP_EXTERN_C String_t* _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719;
IL2CPP_EXTERN_C String_t* _stringLiteralA020B57A0231AC0BF3C430F0B7A6F3A74CCB21A0;
IL2CPP_EXTERN_C String_t* _stringLiteralA11151DC96733502F8A3CC8D21240FB16B4A357D;
IL2CPP_EXTERN_C String_t* _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6;
IL2CPP_EXTERN_C String_t* _stringLiteralAF7C9E66DED6069F8D1C0FBF8E979AD38802ADDD;
IL2CPP_EXTERN_C String_t* _stringLiteralBA5BB4A32F259AC5E5797D43346AEDC60FED828F;
IL2CPP_EXTERN_C String_t* _stringLiteralBC17448E9487ADA7067EEA2E9270A5F02D206E5D;
IL2CPP_EXTERN_C String_t* _stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D;
IL2CPP_EXTERN_C String_t* _stringLiteralBF4DE7F71A23C55F5FA9D4B3C43297A55C601C43;
IL2CPP_EXTERN_C String_t* _stringLiteralBFFA9137BBB453DBE9D5A7A530F72B6D48AC7F44;
IL2CPP_EXTERN_C String_t* _stringLiteralC15E4FC114737DA5B26332B0D569BA6A80EC8D28;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralC3FA94AD28D48C87A4E07B45E4BFF83464B6AE8A;
IL2CPP_EXTERN_C String_t* _stringLiteralC65194AACDC439C0EC6546D143DE29A7C4251534;
IL2CPP_EXTERN_C String_t* _stringLiteralCAA7D396A30DBD79120CB3DD17FCA6D5DB874299;
IL2CPP_EXTERN_C String_t* _stringLiteralCDE7FC9A997204E10513B219B9C2FD9E843A4A86;
IL2CPP_EXTERN_C String_t* _stringLiteralCE37EF1C827F00334AAA6DE13074553F72C2AE5D;
IL2CPP_EXTERN_C String_t* _stringLiteralCE3814F773812005D7611B6537F6A5F3C48FF97A;
IL2CPP_EXTERN_C String_t* _stringLiteralCEF6B54868904D9D06D525E97D1016EAA23EBBAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCF0D58862BC39C198E534CD6A4EC67D83A4B33AF;
IL2CPP_EXTERN_C String_t* _stringLiteralCF5479838C6072F7AF91D6EE88E67C33AF77E402;
IL2CPP_EXTERN_C String_t* _stringLiteralCFA143781A317B8217BE0470B8D109727EE952EE;
IL2CPP_EXTERN_C String_t* _stringLiteralD22B36C8DECD84A16E8C0C07565FA2EACB5F0132;
IL2CPP_EXTERN_C String_t* _stringLiteralD31FDD8B242767F64369E0D21E5566B0F2ADBBC5;
IL2CPP_EXTERN_C String_t* _stringLiteralD3B1C6C93198FFE0F7D93EF614FF53C019E5FC1A;
IL2CPP_EXTERN_C String_t* _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F;
IL2CPP_EXTERN_C String_t* _stringLiteralD6A3E10F76F52D367E1044143F29F2BA82802AC2;
IL2CPP_EXTERN_C String_t* _stringLiteralD6D8FE09C5BD52D81E612507905848FB12E98A88;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF3ABA2FC3CDA8AE31C07983D66FBAE6F967082;
IL2CPP_EXTERN_C String_t* _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B;
IL2CPP_EXTERN_C String_t* _stringLiteralDC0FA5BC126B504E52E5F85B59F0E4FEE1F64090;
IL2CPP_EXTERN_C String_t* _stringLiteralDE3C9D02D1C42093ED52EE94DABD76765A2A780F;
IL2CPP_EXTERN_C String_t* _stringLiteralDE9281A932225DFCE1BECBCA7BB02276037CF7FF;
IL2CPP_EXTERN_C String_t* _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F;
IL2CPP_EXTERN_C String_t* _stringLiteralDF999EF172C0689938C806510905BFF64B5EAAC9;
IL2CPP_EXTERN_C String_t* _stringLiteralE0E8C8AAB6B8AABF87DD28772E31D2EF0BA69A20;
IL2CPP_EXTERN_C String_t* _stringLiteralE3B97D94D824DC8EAD6EC5F4C534E300967F1112;
IL2CPP_EXTERN_C String_t* _stringLiteralE644BB9BA7F977258773D5AD8398DFA8ED022BD9;
IL2CPP_EXTERN_C String_t* _stringLiteralE64AE7F9C7DEFF7CB7181A0CF80576233E18FE22;
IL2CPP_EXTERN_C String_t* _stringLiteralECCC734F364206CB24A1C3B12ED53FDF863B173E;
IL2CPP_EXTERN_C String_t* _stringLiteralED3F55CDB80B3A56C4940573B5D309AC815ADA1D;
IL2CPP_EXTERN_C String_t* _stringLiteralEFC136E1432828F26FB2716513A16BE1F4192DC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF03C76CB2A2630A97CAE5C6F8244375B0613CBC4;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2;
IL2CPP_EXTERN_C String_t* _stringLiteralF9DBB255FB1A590A145BE146F812B48A08441060;
IL2CPP_EXTERN_C const RuntimeMethod* AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m6E00E8FEEA73EB6EB86CB2ABC4924402378AB787_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mB8D02E815E321CE6194EFCB9D3DC80E2265A4190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mA42FA0D6B2A039CD998C80EE29321E81BE6152C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_mE4551EFFD77A72E3A8A42A8FDAD149C877206863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CStopMonoBehaviourU3Em__0_mA5A0E400BF06AEE72A390D7981C479A9567EC159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GAuthToken_SerializeToString_m0C89AA8297F5B14A3F32397B60D18765CF96107E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GAuthToken_TryParseFromString_mE654198B2918F277C83CBFE6DE6F3E3E9A0B0F2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallRootCerts_MacOSXWorkaroundRemoteCertificateValidationCallback_mA275F31B4A54215957BBA6430AC4812E23C7EDA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InstallRootCerts_U3CInstallRootCertsU3Em__0_m81ED117CB5406924CAEC294323883EEC5321230D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m59A9FF6317ED0685549AC5CE79E895E733585D0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mE48989B468CE0E3F9646F3EDD771D09C3E87FA8F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTokenAsyncU3Ec__AnonStorey0_U3CU3Em__0_m5864748454398F83EC132E744C02A3624F23BFCF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendCoroutineU3Ec__AnonStorey2_U3CU3Em__0_m985F21923D8FA10BF5BC5B2EA0A4D09391E68E28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSendUnityRequestU3Ec__Iterator0_Reset_m3EA097AEC209B2209C50C50125C956F46E392A31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSignaledCoroutineU3Ec__Iterator0_Reset_m40A4FAF30ABDFA59D05E9E932342577B8B5FDAE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ec__Iterator0_Reset_m4C96FE57C954B1537D6E3D99C57FB57CE6965110_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3E__AnonType0_3__ctor_m755DA4C0A42B9F88B84C3D6E2AB2F7C05932A2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3E__AnonType0_3_get_InstallationRequired_m7B5958068E7E331AD3BA6867DB1C90DC6D939131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3E__AnonType0_3_get_IsEditor_mB9EF81FD3C4F25CE121AB88FD97A6656588466AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3E__AnonType0_3_get_Platform_m8BBCF346EC0EBEB417BFC1494792A45713E62666_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityConfigExtensions_U3CGetWriteablePathU3Em__0_mC28C4C73A4FEE7238A38FA2ADC443F801C68E1CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityConfigExtensions_U3CSetEditorP12FileNameU3Em__1_m32F3889FA5E4F9CDF62E4EDDE9B682466D34580A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySynchronizationContext_U3CPostCoroutineU3Em__0_mF3A80A02A23E417A18E6347A9BC3E160EE539A16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WWWHttpRequest_U3CEnsureExecutedU3Em__0_m16AA7BF2B3ADBF7ABDBB35BDF6C96D44C891CAD0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_0_0_0_var;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t470C01FFE5A91E977C611A22059B0CD8B99DB7F3 
{
};

// <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>
struct U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080  : public RuntimeObject
{
	// <Platform>__T <>__AnonType0`3::<Platform>
	int32_t ___U3CPlatformU3E_0;
	// <IsEditor>__T <>__AnonType0`3::<IsEditor>
	bool ___U3CIsEditorU3E_1;
	// <InstallationRequired>__T <>__AnonType0`3::<InstallationRequired>
	bool ___U3CInstallationRequiredU3E_2;
};

// <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>
struct U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3  : public RuntimeObject
{
	// <Platform>__T <>__AnonType0`3::<Platform>
	int32_t ___U3CPlatformU3E_0;
	// <IsEditor>__T <>__AnonType0`3::<IsEditor>
	bool ___U3CIsEditorU3E_1;
	// <InstallationRequired>__T <>__AnonType0`3::<InstallationRequired>
	bool ___U3CInstallationRequiredU3E_2;
};

// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>
struct Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t50417BB47DD41E063D80BC0DC7A012CF87889B7F* ____entries_1;
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
	KeyCollection_t779097928E8E39B574C3DBE3DB581F3DA3F94C85* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tDBF8391DC23076250DC237BB96A52D31D98ACCDC* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>
struct Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t88D79B5C078B734AE8BB3266E34E12AF08FCEEEF* ____entries_1;
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
	KeyCollection_tB7504948EAC2AECFD233197DBE83D74D0D12CFA8* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t87759E63E3496C207528111673C9A61DA2471344* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>
struct Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEAD5EF40B7E79B2A5CB55F4135EC117EAC616F9A* ____entries_1;
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
	KeyCollection_t4F700C23BDF1E14E2E52EBA12576364A2B59E406* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t04637302418E50CC664F5763757EFA471396883C* ____values_8;
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

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
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
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5DU5BU5D_t19A0C6D66F22DF673E9CDB37DEF566FE0EC947FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
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

// Firebase.Platform.MainThreadProperty`1<System.Boolean>
struct MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97  : public RuntimeObject
{
	// System.Func`1<T> Firebase.Platform.MainThreadProperty`1::getPropertyDelegate
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate_0;
	// System.Int32 Firebase.Platform.MainThreadProperty`1::lastGetPropertyTickCount
	int32_t ___lastGetPropertyTickCount_1;
	// T Firebase.Platform.MainThreadProperty`1::cachedValue
	bool ___cachedValue_2;
};

// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>
struct Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	Tuple_2U5BU5D_t075A6E3BE33C4C5967544F6B2DA4381897C13E08* ____array_0;
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

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
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

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886  : public RuntimeObject
{
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject* ____syncRoot_1;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	RuntimeObject* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>
struct Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA  : public RuntimeObject
{
	// T1 System.Tuple`2::m_Item1
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject* ___m_Item2_1;
};

// Firebase.Platform.Default.AppConfigExtensions
struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48  : public RuntimeObject
{
};

struct AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields
{
	// System.Uri Firebase.Platform.Default.AppConfigExtensions::DefaultUpdateUrl
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___DefaultUpdateUrl_0;
	// System.String Firebase.Platform.Default.AppConfigExtensions::Default
	String_t* ___Default_1;
	// System.Object Firebase.Platform.Default.AppConfigExtensions::Sync
	RuntimeObject* ___Sync_2;
	// Firebase.Platform.Default.AppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::_instance
	AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* ____instance_3;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>> Firebase.Platform.Default.AppConfigExtensions::SStringState
	Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___SStringState_4;
};
struct Il2CppArrayBounds;

// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8  : public RuntimeObject
{
	// System.Security.Cryptography.Oid System.Security.Cryptography.AsnEncodedData::_oid
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ____oid_0;
	// System.Byte[] System.Security.Cryptography.AsnEncodedData::_raw
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____raw_1;
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2  : public RuntimeObject
{
	// System.String System.Reflection.AssemblyName::name
	String_t* ___name_0;
	// System.String System.Reflection.AssemblyName::codebase
	String_t* ___codebase_1;
	// System.Int32 System.Reflection.AssemblyName::major
	int32_t ___major_2;
	// System.Int32 System.Reflection.AssemblyName::minor
	int32_t ___minor_3;
	// System.Int32 System.Reflection.AssemblyName::build
	int32_t ___build_4;
	// System.Int32 System.Reflection.AssemblyName::revision
	int32_t ___revision_5;
	// System.Globalization.CultureInfo System.Reflection.AssemblyName::cultureinfo
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___cultureinfo_6;
	// System.Reflection.AssemblyNameFlags System.Reflection.AssemblyName::flags
	int32_t ___flags_7;
	// System.Configuration.Assemblies.AssemblyHashAlgorithm System.Reflection.AssemblyName::hashalg
	int32_t ___hashalg_8;
	// System.Reflection.StrongNameKeyPair System.Reflection.AssemblyName::keypair
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	// System.Byte[] System.Reflection.AssemblyName::publicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___publicKey_10;
	// System.Byte[] System.Reflection.AssemblyName::keyToken
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyToken_11;
	// System.Configuration.Assemblies.AssemblyVersionCompatibility System.Reflection.AssemblyName::versioncompat
	int32_t ___versioncompat_12;
	// System.Version System.Reflection.AssemblyName::version
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	// System.Reflection.ProcessorArchitecture System.Reflection.AssemblyName::processor_architecture
	int32_t ___processor_architecture_14;
	// System.Reflection.AssemblyContentType System.Reflection.AssemblyName::contentType
	int32_t ___contentType_15;
};
// Native definition for P/Invoke marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_pinvoke
{
	char* ___name_0;
	char* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};
// Native definition for COM marshalling of System.Reflection.AssemblyName
struct AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___codebase_1;
	int32_t ___major_2;
	int32_t ___minor_3;
	int32_t ___build_4;
	int32_t ___revision_5;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___cultureinfo_6;
	int32_t ___flags_7;
	int32_t ___hashalg_8;
	StrongNameKeyPair_t0657447B6CFAA8FE880A228AA578EC20BC6AF8F2* ___keypair_9;
	Il2CppSafeArray/*NONE*/* ___publicKey_10;
	Il2CppSafeArray/*NONE*/* ___keyToken_11;
	int32_t ___versioncompat_12;
	Version_tE426DB5655D0F22920AE16A2AA9AB7781B8255A7* ___version_13;
	int32_t ___processor_architecture_14;
	int32_t ___contentType_15;
};

// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8  : public RuntimeObject
{
	// System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::KeySizeValue
	int32_t ___KeySizeValue_0;
	// System.Security.Cryptography.KeySizes[] System.Security.Cryptography.AsymmetricAlgorithm::LegalKeySizesValue
	KeySizesU5BU5D_tDD87467B9CB683380B5DC92193576A3136DFAE03* ___LegalKeySizesValue_1;
};

// Firebase.Platform.Default.BaseAuthService
struct BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F  : public RuntimeObject
{
};

struct BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_StaticFields
{
	// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::_instance
	BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* ____instance_0;
};

// System.IO.BinaryWriter
struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E  : public RuntimeObject
{
	// System.IO.Stream System.IO.BinaryWriter::OutStream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___OutStream_1;
	// System.Byte[] System.IO.BinaryWriter::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_2;
	// System.Text.Encoding System.IO.BinaryWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_3;
	// System.Text.Encoder System.IO.BinaryWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_4;
	// System.Boolean System.IO.BinaryWriter::_leaveOpen
	bool ____leaveOpen_5;
	// System.Byte[] System.IO.BinaryWriter::_largeByteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____largeByteBuffer_6;
	// System.Int32 System.IO.BinaryWriter::_maxChars
	int32_t ____maxChars_7;
};

struct BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_StaticFields
{
	// System.IO.BinaryWriter System.IO.BinaryWriter::Null
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* ___Null_0;
};

// System.Collections.CollectionBase
struct CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F  : public RuntimeObject
{
	// System.Collections.ArrayList System.Collections.CollectionBase::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_0;
};

// System.Runtime.ConstrainedExecution.CriticalFinalizerObject
struct CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9  : public RuntimeObject
{
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// Firebase.Platform.DebugLogger
struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1  : public RuntimeObject
{
};

struct DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields
{
	// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::_instance
	DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* ____instance_0;
};

// Firebase.Dispatcher
struct Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6  : public RuntimeObject
{
	// System.Int32 Firebase.Dispatcher::ownerThreadId
	int32_t ___ownerThreadId_0;
	// System.Collections.Generic.Queue`1<System.Action> Firebase.Dispatcher::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_1;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_55;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_56;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_57;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_58;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_59;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_60;
};

struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_61;
};

// System.EventArgs
struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377  : public RuntimeObject
{
};

struct EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_StaticFields
{
	// System.EventArgs System.EventArgs::Empty
	EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___Empty_0;
};

// Firebase.ExceptionAggregator
struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3  : public RuntimeObject
{
};

struct ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields
{
	// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::threadLocalExceptions
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ___threadLocalExceptions_0;
};

// Firebase.Platform.FirebaseAppUtilsStub
struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02  : public RuntimeObject
{
};

struct FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields
{
	// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::_instance
	FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* ____instance_0;
};

// Firebase.Platform.FirebaseEditorDispatcher
struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C  : public RuntimeObject
{
};

struct FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields
{
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache0
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache0_0;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache1
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache1_1;
	// System.Action Firebase.Platform.FirebaseEditorDispatcher::<>f__mg$cache2
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3CU3Ef__mgU24cache2_2;
};

// Firebase.Platform.FirebaseHandler
struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586  : public RuntimeObject
{
	// System.Boolean Firebase.Platform.FirebaseHandler::<IsPlayMode>k__BackingField
	bool ___U3CIsPlayModeU3Ek__BackingField_4;
	// System.EventHandler`1<System.EventArgs> Firebase.Platform.FirebaseHandler::Updated
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___Updated_6;
	// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs> Firebase.Platform.FirebaseHandler::ApplicationFocusChanged
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___ApplicationFocusChanged_7;
};

struct FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields
{
	// Firebase.Platform.FirebaseMonoBehaviour Firebase.Platform.FirebaseHandler::firebaseMonoBehaviour
	FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___firebaseMonoBehaviour_0;
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::<AppUtils>k__BackingField
	RuntimeObject* ___U3CAppUtilsU3Ek__BackingField_1;
	// System.Int32 Firebase.Platform.FirebaseHandler::tickCount
	int32_t ___tickCount_2;
	// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::<ThreadDispatcher>k__BackingField
	Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___U3CThreadDispatcherU3Ek__BackingField_3;
	// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::firebaseHandler
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* ___firebaseHandler_5;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseHandler::<>f__am$cache0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__amU24cache0_8;
};

// Firebase.Platform.FirebaseHttpRequest
struct FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC  : public RuntimeObject
{
	// System.Uri Firebase.Platform.FirebaseHttpRequest::_url
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ____url_0;
	// System.String Firebase.Platform.FirebaseHttpRequest::_action
	String_t* ____action_1;
};

struct FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields
{
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderContentLength
	String_t* ___HeaderContentLength_2;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderContentType
	String_t* ___HeaderContentType_3;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderRange
	String_t* ___HeaderRange_4;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderUserAgent
	String_t* ___HeaderUserAgent_5;
	// System.String Firebase.Platform.FirebaseHttpRequest::HeaderStatus
	String_t* ___HeaderStatus_6;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::Timeout
	int32_t ___Timeout_7;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::StatusNetworkUnavailable
	int32_t ___StatusNetworkUnavailable_8;
	// System.Int32 Firebase.Platform.FirebaseHttpRequest::StatusOk
	int32_t ___StatusOk_9;
};

// Firebase.Platform.FirebaseLogger
struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42  : public RuntimeObject
{
};

struct FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields
{
	// Firebase.Platform.MainThreadProperty`1<System.Boolean> Firebase.Platform.FirebaseLogger::incompatibleStackUnwindingEnabled
	MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* ___incompatibleStackUnwindingEnabled_0;
	// System.Func`1<System.Boolean> Firebase.Platform.FirebaseLogger::<>f__mg$cache0
	Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___U3CU3Ef__mgU24cache0_1;
};

// Firebase.Platform.Security.GAuthToken
struct GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Platform.Security.GAuthToken::_auth
	RuntimeObject* ____auth_3;
	// System.String Firebase.Platform.Security.GAuthToken::_token
	String_t* ____token_4;
};

// Firebase.Platform.Security.GoogleAuthConsts
struct GoogleAuthConsts_t30770CA04A304D556660D896F59EF2D9E1012437  : public RuntimeObject
{
};

// System.Security.Cryptography.HashAlgorithm
struct HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D  : public RuntimeObject
{
	// System.Boolean System.Security.Cryptography.HashAlgorithm::_disposed
	bool ____disposed_0;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::HashSizeValue
	int32_t ___HashSizeValue_1;
	// System.Byte[] System.Security.Cryptography.HashAlgorithm::HashValue
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___HashValue_2;
	// System.Int32 System.Security.Cryptography.HashAlgorithm::State
	int32_t ___State_3;
};

// Firebase.Unity.InstallRootCerts
struct InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC  : public RuntimeObject
{
	// System.Boolean Firebase.Unity.InstallRootCerts::_needsCertificateWorkaround
	bool ____needsCertificateWorkaround_4;
};

struct InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields
{
	// System.Object Firebase.Unity.InstallRootCerts::Sync
	RuntimeObject* ___Sync_0;
	// System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection> Firebase.Unity.InstallRootCerts::_installedRoots
	Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* ____installedRoots_1;
	// System.Boolean Firebase.Unity.InstallRootCerts::_attemptedWebDownload
	bool ____attemptedWebDownload_2;
	// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::_instance
	InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* ____instance_3;
	// System.String Firebase.Unity.InstallRootCerts::TrustedRoot
	String_t* ___TrustedRoot_6;
	// System.String Firebase.Unity.InstallRootCerts::IntermediateCA
	String_t* ___IntermediateCA_7;
	// System.Func`1<<>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>> Firebase.Unity.InstallRootCerts::<>f__am$cache0
	Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* ___U3CU3Ef__amU24cache0_8;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC  : public RuntimeObject
{
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_tEFC3B6496E6747787D8BB761B51F2AE3A8CFFE2D* ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_t58A8B38FC7A6ABE5C83153B6C3F2696F88E7A9A2* ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;
	// System.Object System.Collections.Specialized.NameObjectCollectionBase::_syncRoot
	RuntimeObject* ____syncRoot_7;
};

struct NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC_StaticFields
{
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t6268F19CA34879176651429C0D8A3D0002BB8E06* ___defaultComparer_8;
};

// Firebase.Platform.NoopCertificateService
struct NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1  : public RuntimeObject
{
};

struct NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_StaticFields
{
	// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::_instance
	NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* ____instance_0;
};

// System.IO.Path
struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC  : public RuntimeObject
{
};

struct Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields
{
	// System.Char[] System.IO.Path::InvalidPathChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___InvalidPathChars_0;
	// System.Char System.IO.Path::AltDirectorySeparatorChar
	Il2CppChar ___AltDirectorySeparatorChar_1;
	// System.Char System.IO.Path::DirectorySeparatorChar
	Il2CppChar ___DirectorySeparatorChar_2;
	// System.Char System.IO.Path::PathSeparator
	Il2CppChar ___PathSeparator_3;
	// System.String System.IO.Path::DirectorySeparatorStr
	String_t* ___DirectorySeparatorStr_4;
	// System.Char System.IO.Path::VolumeSeparatorChar
	Il2CppChar ___VolumeSeparatorChar_5;
	// System.Char[] System.IO.Path::PathSeparatorChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___PathSeparatorChars_6;
	// System.Boolean System.IO.Path::dirEqualsVolume
	bool ___dirEqualsVolume_7;
	// System.Char[] System.IO.Path::trimEndCharsWindows
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsWindows_8;
	// System.Char[] System.IO.Path::trimEndCharsUnix
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___trimEndCharsUnix_9;
};

// Firebase.Platform.PlatformInformation
struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94  : public RuntimeObject
{
};

struct PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields
{
	// System.String Firebase.Platform.PlatformInformation::runtimeVersion
	String_t* ___runtimeVersion_0;
	// System.Single Firebase.Platform.PlatformInformation::<RealtimeSinceStartupSafe>k__BackingField
	float ___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache0_2;
	// System.Func`1<System.String> Firebase.Platform.PlatformInformation::<>f__am$cache1
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache1_3;
};

// Firebase.Platform.Security.ServiceCredential
struct ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED  : public RuntimeObject
{
	// System.String Firebase.Platform.Security.ServiceCredential::<TokenServerUrl>k__BackingField
	String_t* ___U3CTokenServerUrlU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
};

// Firebase.Platform.Services
struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E  : public RuntimeObject
{
};

struct Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields
{
	// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::<AppConfig>k__BackingField
	RuntimeObject* ___U3CAppConfigU3Ek__BackingField_0;
	// Firebase.Platform.IAuthService Firebase.Platform.Services::<Auth>k__BackingField
	RuntimeObject* ___U3CAuthU3Ek__BackingField_1;
	// Firebase.Platform.ICertificateService Firebase.Platform.Services::<RootCerts>k__BackingField
	RuntimeObject* ___U3CRootCertsU3Ek__BackingField_2;
	// Firebase.Platform.IClockService Firebase.Platform.Services::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_3;
	// Firebase.Platform.IHttpFactoryService Firebase.Platform.Services::<HttpFactory>k__BackingField
	RuntimeObject* ___U3CHttpFactoryU3Ek__BackingField_4;
	// Firebase.Platform.ILoggingService Firebase.Platform.Services::<Logging>k__BackingField
	RuntimeObject* ___U3CLoggingU3Ek__BackingField_5;
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

// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0  : public RuntimeObject
{
	// System.Threading.SynchronizationContextProperties System.Threading.SynchronizationContext::_props
	int32_t ____props_0;
};

// Firebase.Platform.Default.SystemClock
struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13  : public RuntimeObject
{
};

struct SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields
{
	// Firebase.Platform.IClockService Firebase.Platform.Default.SystemClock::Instance
	RuntimeObject* ___Instance_0;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// Firebase.Unity.UnityHttpFactoryService
struct UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B  : public RuntimeObject
{
};

struct UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_StaticFields
{
	// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::_instance
	UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* ____instance_0;
};

// Firebase.Unity.UnityLoggingService
struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB  : public RuntimeObject
{
};

struct UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields
{
	// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::_instance
	UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* ____instance_0;
};

// Firebase.Unity.UnityPlatformServices
struct UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4  : public RuntimeObject
{
};

// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E  : public RuntimeObject
{
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t920B0868286118827C08B08A15A9456AF6C19D81* ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t5F91F77A93545DDDA6BB24A609BAF5E232CC1A09* ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;
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
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject* ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____WSchars_35;
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

// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509ChainImpl System.Security.Cryptography.X509Certificates.X509Chain::impl
	X509ChainImpl_tBA1BF154DB9DC321EE068BBC53C7CF43CAA2621F* ___impl_0;
};

// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0  : public RuntimeObject
{
	// System.Collections.ArrayList System.Security.Cryptography.X509Certificates.X509ExtensionCollection::_list
	ArrayList_t7A8E5AF0C4378015B5731ABE2BED8F2782FEEF8A* ____list_1;
};

struct X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0_StaticFields
{
	// System.Byte[] System.Security.Cryptography.X509Certificates.X509ExtensionCollection::Empty
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Empty_0;
};

// System.Security.Cryptography.X509Certificates.X509Store
struct X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6  : public RuntimeObject
{
	// System.String System.Security.Cryptography.X509Certificates.X509Store::_name
	String_t* ____name_0;
	// System.Security.Cryptography.X509Certificates.StoreLocation System.Security.Cryptography.X509Certificates.X509Store::_location
	int32_t ____location_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::list
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___list_2;
	// System.Security.Cryptography.X509Certificates.OpenFlags System.Security.Cryptography.X509Certificates.X509Store::_flags
	int32_t ____flags_3;
	// Mono.Security.X509.X509Store System.Security.Cryptography.X509Certificates.X509Store::store
	X509Store_tC2D674DE1D07619474A1D17B132DDA911F9FD661* ___store_4;
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

// Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0
struct U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA  : public RuntimeObject
{
	// Firebase.Platform.IGetTokenCompletionListener Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0::listener
	RuntimeObject* ___listener_0;
};

// Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0
struct U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE  : public RuntimeObject
{
	// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::appUtils
	RuntimeObject* ___appUtils_0;
};

// Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest
struct OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827  : public RuntimeObject
{
	// System.String Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::Assertion
	String_t* ___Assertion_0;
	// System.String Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::ResponseBody
	String_t* ___ResponseBody_1;
};

// Firebase.Platform.Security.ServiceAccountCredential/UploadCompleted
struct UploadCompleted_tC4B70D62A1F675097292FD37449F8946659F67E9  : public RuntimeObject
{
	// System.Net.UploadValuesCompletedEventArgs Firebase.Platform.Security.ServiceAccountCredential/UploadCompleted::args
	UploadValuesCompletedEventArgs_t7BC1A1B74350605BE0FE5A0D81B2227F9344A92B* ___args_0;
};

// Firebase.Platform.Security.ServiceCredential/Initializer
struct Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26  : public RuntimeObject
{
	// System.String Firebase.Platform.Security.ServiceCredential/Initializer::<TokenServerUrl>k__BackingField
	String_t* ___U3CTokenServerUrlU3Ek__BackingField_0;
	// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential/Initializer::<Clock>k__BackingField
	RuntimeObject* ___U3CClockU3Ek__BackingField_1;
};

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3
struct U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB  : public RuntimeObject
{
	// System.Threading.SendOrPostCallback Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::d
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d_0;
};

// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4
struct U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D  : public RuntimeObject
{
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3 Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>f__ref$3
	U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* ___U3CU3Ef__refU243_1;
};

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1
struct U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C  : public RuntimeObject
{
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_0;
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::$this
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ___U24this_1;
};

// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2
struct U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E  : public RuntimeObject
{
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_0;
	// Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1 Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::<>f__ref$1
	U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* ___U3CU3Ef__refU241_1;
};

// Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0
struct U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC  : public RuntimeObject
{
	// System.Func`1<System.Collections.IEnumerator> Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::coroutine
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine_0;
	// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::newSignal
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal_1;
	// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$current
	RuntimeObject* ___U24current_2;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$disposing
	bool ___U24disposing_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::$PC
	int32_t ___U24PC_4;
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator
struct X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9  : public RuntimeObject
{
	// System.Collections.IEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::enumerator
	RuntimeObject* ___enumerator_0;
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0
struct U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68  : public RuntimeObject
{
	// System.Tuple`2<System.Threading.SendOrPostCallback,System.Object> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::<entry>__0
	Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___U3CentryU3E__0_0;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$locvar0
	RuntimeObject* ___U24locvar0_1;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$this
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___U24this_2;
	// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$current
	RuntimeObject* ___U24current_3;
	// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::$PC
	int32_t ___U24PC_5;
};

// System.Collections.Generic.List`1/Enumerator<System.Byte[]>
struct Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____current_3;
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

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject* ___value_1;
};

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
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

// System.Reflection.EventInfo
struct EventInfo_t  : public MemberInfo_t
{
	// System.Reflection.EventInfo/AddEventAdapter System.Reflection.EventInfo::cached_add_event
	AddEventAdapter_tE0DE36700D110F4D267B26686541ABCF9588A6DD* ___cached_add_event_0;
};

// System.Reflection.FieldInfo
struct FieldInfo_t  : public MemberInfo_t
{
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

// System.Security.Cryptography.MD5
struct MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A  : public HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D
{
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7  : public NameObjectCollectionBase_tB6400DF2FA3B64660D79586B79016B4A0BA645FC
{
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____all_9;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ____allKeys_10;
};

// System.Reflection.PropertyInfo
struct PropertyInfo_t  : public MemberInfo_t
{
};

// System.Security.Cryptography.RSA
struct RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A  : public AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8
{
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
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

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F  : public CriticalFinalizerObject_t1DCAB623CAEA6529A96F5F3EDE3C7048A6E313C9
{
	// System.Threading.InternalThread System.Threading.Thread::internal_thread
	InternalThread_tF40B7BFCBD60C82BD8475A22FF5186CA10293687* ___internal_thread_6;
	// System.Object System.Threading.Thread::m_ThreadStartArg
	RuntimeObject* ___m_ThreadStartArg_7;
	// System.Object System.Threading.Thread::pending_exception
	RuntimeObject* ___pending_exception_8;
	// System.MulticastDelegate System.Threading.Thread::m_Delegate
	MulticastDelegate_t* ___m_Delegate_10;
	// System.Threading.ExecutionContext System.Threading.Thread::m_ExecutionContext
	ExecutionContext_t9D6EDFD92F0B2D391751963E2D77A8B03CB81710* ___m_ExecutionContext_11;
	// System.Boolean System.Threading.Thread::m_ExecutionContextBelongsToOuterScope
	bool ___m_ExecutionContextBelongsToOuterScope_12;
	// System.Security.Principal.IPrincipal System.Threading.Thread::principal
	RuntimeObject* ___principal_13;
	// System.Int32 System.Threading.Thread::principal_version
	int32_t ___principal_version_14;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_StaticFields
{
	// System.LocalDataStoreMgr System.Threading.Thread::s_LocalDataStoreMgr
	LocalDataStoreMgr_t205F1783D5CC2B148E829B5882E5406FF9A3AC1E* ___s_LocalDataStoreMgr_0;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentCulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentCulture_4;
	// System.Threading.AsyncLocal`1<System.Globalization.CultureInfo> System.Threading.Thread::s_asyncLocalCurrentUICulture
	AsyncLocal_1_t1D3339EA4C8650D2DEDDF9553E5C932B3DC2CCFD* ___s_asyncLocalCurrentUICulture_5;
};

struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F_ThreadStaticFields
{
	// System.LocalDataStoreHolder System.Threading.Thread::s_LocalDataStore
	LocalDataStoreHolder_t789DD474AE5141213C2105CE57830ECFC2D3C03F* ___s_LocalDataStore_1;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentCulture_2;
	// System.Globalization.CultureInfo System.Threading.Thread::m_CurrentUICulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___m_CurrentUICulture_3;
	// System.Threading.Thread System.Threading.Thread::current_thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___current_thread_9;
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

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// Firebase.Platform.Default.UnityConfigExtensions
struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152  : public AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48
{
};

struct UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields
{
	// Firebase.Platform.Default.UnityConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::_instance
	UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* ____instance_5;
	// System.Func`1<System.String> Firebase.Platform.Default.UnityConfigExtensions::<>f__am$cache0
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache0_6;
	// System.Func`1<System.String> Firebase.Platform.Default.UnityConfigExtensions::<>f__am$cache1
	Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___U3CU3Ef__amU24cache1_7;
};

// Firebase.Unity.UnitySynchronizationContext
struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690  : public SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext::queue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___queue_2;
	// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir Firebase.Unity.UnitySynchronizationContext::behavior
	SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* ___behavior_3;
	// System.Int32 Firebase.Unity.UnitySynchronizationContext::mainThreadId
	int32_t ___mainThreadId_4;
};

struct UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields
{
	// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::_instance
	UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* ____instance_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent> Firebase.Unity.UnitySynchronizationContext::signalDictionary
	Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* ___signalDictionary_6;
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

// UnityEngine.WWW
struct WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.WWW::_uwr
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ____uwr_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::_responseHeaders
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____responseHeaders_1;
};

// Firebase.Unity.WWWHttpRequest
struct WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0  : public FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC
{
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Firebase.Unity.WWWHttpRequest::_headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____headers_10;
	// System.Collections.Specialized.NameValueCollection Firebase.Unity.WWWHttpRequest::_responseheaders
	NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* ____responseheaders_11;
	// System.IO.MemoryStream Firebase.Unity.WWWHttpRequest::_requestBody
	MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* ____requestBody_12;
	// System.String Firebase.Unity.WWWHttpRequest::_error
	String_t* ____error_13;
	// System.Boolean Firebase.Unity.WWWHttpRequest::_executed
	bool ____executed_14;
	// System.Byte[] Firebase.Unity.WWWHttpRequest::_requestBodyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____requestBodyBytes_15;
	// System.Byte[] Firebase.Unity.WWWHttpRequest::_responseBodyBytes
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____responseBodyBytes_16;
	// System.Int32 Firebase.Unity.WWWHttpRequest::_responseCode
	int32_t ____responseCode_17;
	// System.Int64 Firebase.Unity.WWWHttpRequest::_responseLength
	int64_t ____responseLength_18;
};

// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE  : public CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F
{
};

// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;
};
// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// System.Security.Cryptography.X509Certificates.X509Extension
struct X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5  : public AsnEncodedData_t9341C847F05FA5D9D579173CBB19B4448445C8A8
{
	// System.Boolean System.Security.Cryptography.X509Certificates.X509Extension::_critical
	bool ____critical_2;
};

// <PrivateImplementationDetails>{86a38c22-f339-40eb-b429-6a15c926a2e7}/$ArrayType=20
#pragma pack(push, tp, 1)
struct U24ArrayTypeU3D20_tC3C175E85CDFE47CE01AE3B01EE524B087F81D26 
{
	union
	{
		struct
		{
		};
		uint8_t U24ArrayTypeU3D20_tC3C175E85CDFE47CE01AE3B01EE524B087F81D26__padding[20];
	};
};
#pragma pack(pop, tp)

// Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs
struct ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD  : public EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377
{
	// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::<HasFocus>k__BackingField
	bool ___U3CHasFocusU3Ek__BackingField_1;
};

// Firebase.Platform.Security.ServiceAccountCredential/Initializer
struct Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A  : public Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26
{
	// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::<User>k__BackingField
	String_t* ___U3CUserU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<System.String> Firebase.Platform.Security.ServiceAccountCredential/Initializer::<Scopes>k__BackingField
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___U3CScopesU3Ek__BackingField_4;
	// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential/Initializer::<Key>k__BackingField
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___U3CKeyU3Ek__BackingField_5;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>
struct Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// <PrivateImplementationDetails>{86a38c22-f339-40eb-b429-6a15c926a2e7}
struct U3CPrivateImplementationDetailsU3EU7B86a38c22U2Df339U2D40ebU2Db429U2D6a15c926a2e7U7D_t63A87A81968A4E28F6B69B7C41FE49854CAFF6BE  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3EU7B86a38c22U2Df339U2D40ebU2Db429U2D6a15c926a2e7U7D_t63A87A81968A4E28F6B69B7C41FE49854CAFF6BE_StaticFields
{
	// <PrivateImplementationDetails>{86a38c22-f339-40eb-b429-6a15c926a2e7}/$ArrayType=20 <PrivateImplementationDetails>{86a38c22-f339-40eb-b429-6a15c926a2e7}::$field-0
	U24ArrayTypeU3D20_tC3C175E85CDFE47CE01AE3B01EE524B087F81D26 ___U24fieldU2D0_0;
};

// System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.AppDomain::_mono_app_domain
	intptr_t ____mono_app_domain_1;
	// System.Object System.AppDomain::_evidence
	RuntimeObject* ____evidence_6;
	// System.Object System.AppDomain::_granted
	RuntimeObject* ____granted_7;
	// System.Int32 System.AppDomain::_principalPolicy
	int32_t ____principalPolicy_8;
	// System.AssemblyLoadEventHandler System.AppDomain::AssemblyLoad
	AssemblyLoadEventHandler_t74AF5FF25F520B9786A20D862AE69BE733774A42* ___AssemblyLoad_9;
	// System.ResolveEventHandler System.AppDomain::AssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___AssemblyResolve_10;
	// System.EventHandler System.AppDomain::DomainUnload
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___DomainUnload_11;
	// System.EventHandler System.AppDomain::ProcessExit
	EventHandler_tC6323FD7E6163F965259C33D72612C0E5B9BAB82* ___ProcessExit_12;
	// System.ResolveEventHandler System.AppDomain::ResourceResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ResourceResolve_13;
	// System.ResolveEventHandler System.AppDomain::TypeResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___TypeResolve_14;
	// System.UnhandledExceptionEventHandler System.AppDomain::UnhandledException
	UnhandledExceptionEventHandler_tB13FF21A6201A59BB462E68CD10C5B5BEE54941C* ___UnhandledException_15;
	// System.EventHandler`1<System.Runtime.ExceptionServices.FirstChanceExceptionEventArgs> System.AppDomain::FirstChanceException
	EventHandler_1_tF46A0252BA462E35F6B72C69AB6C0F751E7443D7* ___FirstChanceException_16;
	// System.Object System.AppDomain::_domain_manager
	RuntimeObject* ____domain_manager_17;
	// System.ResolveEventHandler System.AppDomain::ReflectionOnlyAssemblyResolve
	ResolveEventHandler_t3CE88268E672E41B1B55E01587AFBCFB85044692* ___ReflectionOnlyAssemblyResolve_18;
	// System.Object System.AppDomain::_activation
	RuntimeObject* ____activation_19;
	// System.Object System.AppDomain::_applicationIdentity
	RuntimeObject* ____applicationIdentity_20;
	// System.Collections.Generic.List`1<System.String> System.AppDomain::compatibility_switch
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_StaticFields
{
	// System.String System.AppDomain::_process_guid
	String_t* ____process_guid_2;
};

struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_ThreadStaticFields
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::type_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___type_resolve_in_progress_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_4;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> System.AppDomain::assembly_resolve_in_progress_refonly
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* ___assembly_resolve_in_progress_refonly_5;
};
// Native definition for P/Invoke marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
};
// Native definition for COM marshalling of System.AppDomain
struct AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ____mono_app_domain_1;
	Il2CppIUnknown* ____evidence_6;
	Il2CppIUnknown* ____granted_7;
	int32_t ____principalPolicy_8;
	Il2CppMethodPointer ___AssemblyLoad_9;
	Il2CppMethodPointer ___AssemblyResolve_10;
	Il2CppMethodPointer ___DomainUnload_11;
	Il2CppMethodPointer ___ProcessExit_12;
	Il2CppMethodPointer ___ResourceResolve_13;
	Il2CppMethodPointer ___TypeResolve_14;
	Il2CppMethodPointer ___UnhandledException_15;
	Il2CppMethodPointer ___FirstChanceException_16;
	Il2CppIUnknown* ____domain_manager_17;
	Il2CppMethodPointer ___ReflectionOnlyAssemblyResolve_18;
	Il2CppIUnknown* ____activation_19;
	Il2CppIUnknown* ____applicationIdentity_20;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___compatibility_switch_21;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// UnityEngine.LogType
struct LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331 
{
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___2;
};

// System.IO.MemoryStream
struct MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____buffer_4;
	// System.Int32 System.IO.MemoryStream::_origin
	int32_t ____origin_5;
	// System.Int32 System.IO.MemoryStream::_position
	int32_t ____position_6;
	// System.Int32 System.IO.MemoryStream::_length
	int32_t ____length_7;
	// System.Int32 System.IO.MemoryStream::_capacity
	int32_t ____capacity_8;
	// System.Boolean System.IO.MemoryStream::_expandable
	bool ____expandable_9;
	// System.Boolean System.IO.MemoryStream::_writable
	bool ____writable_10;
	// System.Boolean System.IO.MemoryStream::_exposable
	bool ____exposable_11;
	// System.Boolean System.IO.MemoryStream::_isOpen
	bool ____isOpen_12;
	// System.Threading.Tasks.Task`1<System.Int32> System.IO.MemoryStream::_lastReadTask
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ____lastReadTask_13;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
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

// System.Security.Cryptography.RSACryptoServiceProvider
struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C  : public RSA_tDDE9BD4C9806074FA9B1C6A5C93523A97116F21A
{
	// Mono.Security.Cryptography.KeyPairPersistence System.Security.Cryptography.RSACryptoServiceProvider::store
	KeyPairPersistence_t78D61FCDE172753BFE756B555CBD85127832CDF6* ___store_3;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persistKey
	bool ___persistKey_4;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::persisted
	bool ___persisted_5;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::privateKeyExportable
	bool ___privateKeyExportable_6;
	// System.Boolean System.Security.Cryptography.RSACryptoServiceProvider::m_disposed
	bool ___m_disposed_7;
	// Mono.Security.Cryptography.RSAManaged System.Security.Cryptography.RSACryptoServiceProvider::rsa
	RSAManaged_t897B29EF76C459408E11A42680C942716D809001* ___rsa_8;
};

struct RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_StaticFields
{
	// System.Security.Cryptography.CspProviderFlags modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.RSACryptoServiceProvider::s_UseMachineKeyStore
	int32_t ___s_UseMachineKeyStore_2;
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

// Firebase.Platform.Security.ServiceAccountCredential
struct ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34  : public ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED
{
	// System.String Firebase.Platform.Security.ServiceAccountCredential::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_2;
	// System.String Firebase.Platform.Security.ServiceAccountCredential::<User>k__BackingField
	String_t* ___U3CUserU3Ek__BackingField_3;
	// System.String[] Firebase.Platform.Security.ServiceAccountCredential::<Scopes>k__BackingField
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___U3CScopesU3Ek__BackingField_4;
	// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential::<Key>k__BackingField
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___U3CKeyU3Ek__BackingField_5;
};

struct ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_StaticFields
{
	// System.DateTime Firebase.Platform.Security.ServiceAccountCredential::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_6;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IntPtr System.Threading.WaitHandle::waitHandle
	intptr_t ___waitHandle_3;
	// Microsoft.Win32.SafeHandles.SafeWaitHandle modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.WaitHandle::safeWaitHandle
	SafeWaitHandle_t58F5662CD56F6462A687198A64987F8980804449* ___safeWaitHandle_4;
	// System.Boolean System.Threading.WaitHandle::hasThreadAffinity
	bool ___hasThreadAffinity_5;
};

struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_StaticFields
{
	// System.IntPtr System.Threading.WaitHandle::InvalidHandle
	intptr_t ___InvalidHandle_11;
};
// Native definition for P/Invoke marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_pinvoke : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};
// Native definition for COM marshalling of System.Threading.WaitHandle
struct WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8_marshaled_com : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	intptr_t ___waitHandle_3;
	void* ___safeWaitHandle_4;
	int32_t ___hasThreadAffinity_5;
};

// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4  : public RuntimeObject
{
	// System.Security.Cryptography.X509Certificates.X509CertificateImpl System.Security.Cryptography.X509Certificates.X509Certificate::impl
	X509CertificateImpl_tF590E81705CE1FE152C590E5A875D4FE3BE348EF* ___impl_0;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyCertHash
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyCertHash_1;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySerialNumber
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazySerialNumber_2;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyIssuer
	String_t* ___lazyIssuer_3;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazySubject
	String_t* ___lazySubject_4;
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithm
	String_t* ___lazyKeyAlgorithm_5;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyKeyAlgorithmParameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyKeyAlgorithmParameters_6;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate::lazyPublicKey
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyPublicKey_7;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotBefore
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotBefore_8;
	// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate::lazyNotAfter
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___lazyNotAfter_9;
};

// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB  : public X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE
{
};

struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB_StaticFields
{
	// System.String[] System.Security.Cryptography.X509Certificates.X509Certificate2Collection::newline_split
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___newline_split_1;
};

// System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
struct X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B  : public X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5
{
	// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_keyUsages
	int32_t ____keyUsages_6;
	// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::_status
	int32_t ____status_7;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.Threading.EventWaitHandle
struct EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E  : public WaitHandle_t08F8DB54593B241FE32E0DD0BD3D82785D3AE3D8
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
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

// UnityEngine.TextAsset
struct TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D  : public X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4
{
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyRawData
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___lazyRawData_10;
	// System.Security.Cryptography.Oid modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySignatureAlgorithm
	Oid_t9CF958D45B2027FCEDB1EE544E3FBB8351F61287* ___lazySignatureAlgorithm_11;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyVersion
	int32_t ___lazyVersion_12;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazySubjectName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazySubjectName_13;
	// System.Security.Cryptography.X509Certificates.X500DistinguishedName modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyIssuerName
	X500DistinguishedName_t53976A4567E82199856DAD47D3850F8EECABDAF6* ___lazyIssuerName_14;
	// System.Security.Cryptography.X509Certificates.PublicKey modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPublicKey
	PublicKey_t489DEA83CED0412BF5E066D3BC4527361DCFC405* ___lazyPublicKey_15;
	// System.Security.Cryptography.AsymmetricAlgorithm modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyPrivateKey
	AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* ___lazyPrivateKey_16;
	// System.Security.Cryptography.X509Certificates.X509ExtensionCollection modreq(System.Runtime.CompilerServices.IsVolatile) System.Security.Cryptography.X509Certificates.X509Certificate2::lazyExtensions
	X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* ___lazyExtensions_17;
};

// Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0
struct U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String> Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::$locvar0
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 ___U24locvar0_0;
	// UnityEngine.WWW Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::<www>__0
	WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___U3CwwwU3E__0_1;
	// Firebase.Unity.WWWHttpRequest Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::$this
	WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* ___U24this_2;
	// System.Object Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::$current
	RuntimeObject* ___U24current_3;
	// System.Boolean Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::$disposing
	bool ___U24disposing_4;
	// System.Int32 Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::$PC
	int32_t ___U24PC_5;
};

// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF  : public MulticastDelegate_t
{
};

// System.EventHandler`1<System.Object>
struct EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746  : public MulticastDelegate_t
{
};

// System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>
struct EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E  : public MulticastDelegate_t
{
};

// System.Func`1<<>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>>
struct Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD  : public MulticastDelegate_t
{
};

// System.Func`1<System.Boolean>
struct Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457  : public MulticastDelegate_t
{
};

// System.Func`1<System.Collections.IEnumerator>
struct Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941  : public MulticastDelegate_t
{
};

// System.Func`1<System.Object>
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};

// System.Func`1<System.String>
struct Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C  : public MulticastDelegate_t
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

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
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

// System.Threading.ManualResetEvent
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158  : public EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955  : public MulticastDelegate_t
{
};

// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E  : public MulticastDelegate_t
{
};

// System.TypeLoadException
struct TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.TypeLoadException::ClassName
	String_t* ___ClassName_18;
	// System.String System.TypeLoadException::AssemblyName
	String_t* ___AssemblyName_19;
	// System.String System.TypeLoadException::MessageArg
	String_t* ___MessageArg_20;
	// System.Int32 System.TypeLoadException::ResourceId
	int32_t ___ResourceId_21;
};

// System.DllNotFoundException
struct DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// System.EntryPointNotFoundException
struct EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743  : public TypeLoadException_t6333E3083F7BFF1A582969E6F67ACBA8B0035C32
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Firebase.Platform.FirebaseMonoBehaviour
struct FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir
struct SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::callbackQueue
	Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* ___callbackQueue_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339  : public RuntimeArray
{
	ALIGN_FIELD (8) Assembly_t* m_Items[1];

	inline Assembly_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Assembly_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Assembly_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Assembly_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Assembly_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299  : public RuntimeArray
{
	ALIGN_FIELD (8) X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D m_Items[1];

	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___info_1), (void*)NULL);
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.LogType[]
struct LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063  : public RuntimeArray
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
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C  : public RuntimeArray
{
	ALIGN_FIELD (8) Exception_t* m_Items[1];

	inline Exception_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Exception_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_RunOnMainThread_TisRuntimeObject_mAFD03CE3D144923FEEF275BF12B46CBBD81B908C_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___f0, const RuntimeMethod* method) ;
// <InstallationRequired>__T <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>::get_InstallationRequired()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool U3CU3E__AnonType0_3_get_InstallationRequired_mB7EAFD8E46B495A4B1F2C10BF41D0250F75BF26F_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) ;
// <Platform>__T <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3CU3E__AnonType0_3_get_Platform_m8BFCF7940AC116CEA007C5310C3F24AD806F895C_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) ;
// <IsEditor>__T <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>::get_IsEditor()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool U3CU3E__AnonType0_3_get_IsEditor_mFF46327DA1CF6663F209C0BA346FC148515A86C2_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void <>__AnonType0`3<System.Int32Enum,System.Boolean,System.Boolean>::.ctor(<Platform>__T,<IsEditor>__T,<InstallationRequired>__T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3E__AnonType0_3__ctor_mE5476BA21A730E4859C3C5F5F8AF487DC228963E_gshared (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, int32_t ___Platform0, bool ___IsEditor1, bool ___InstallationRequired2, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_gshared (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___f0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,TEventArgs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, int32_t ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Object>::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Object,System.Object>::.ctor(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared (Dictionary_2_tA75D1125AC9BE8F005BA9B868B373398E643C907* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T1 System.Tuple`2<System.Object,System.Object>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// T2 System.Tuple`2<System.Object,System.Object>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9 Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetState<System.Object>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,T,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetState_TisRuntimeObject_m1F78B3FB6712E0F50249BBCF26F656331CF7E248_gshared (RuntimeObject* ___app0, int32_t ___state1, RuntimeObject* ___value2, Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4* ___store3, const RuntimeMethod* method) ;
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.Object>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_GetState_TisRuntimeObject_m5F6BB3B11F220A0CE1D753F69AB6ECC53CA6DF82_gshared (RuntimeObject* ___app0, int32_t ___state1, Dictionary_2_tAE981FFB8675A3AFB674EE2636BE5565849941A4* ___store2, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___result0, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, Action_1_t0328A8A468C762DAECEC2BDBE23D4E47955D8678* ___continuationAction0, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Object>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared (ReadOnlyCollection_1_t5397DF0DB61D1090E7BBC89395CECB8D020CED92* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<<>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m447886DB18CE5EF1D445C913AC40E9733FA70779 (Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<<>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>>(System.Func`1<TResult>)
inline U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_mE4551EFFD77A72E3A8A42A8FDAD149C877206863 (Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* ___f0, const RuntimeMethod* method)
{
	return ((  U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* (*) (Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_mAFD03CE3D144923FEEF275BF12B46CBBD81B908C_gshared)(___f0, method);
}
// <InstallationRequired>__T <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>::get_InstallationRequired()
inline bool U3CU3E__AnonType0_3_get_InstallationRequired_m7B5958068E7E331AD3BA6867DB1C90DC6D939131_inline (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3*, const RuntimeMethod*))U3CU3E__AnonType0_3_get_InstallationRequired_mB7EAFD8E46B495A4B1F2C10BF41D0250F75BF26F_gshared_inline)(__this, method);
}
// <Platform>__T <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>::get_Platform()
inline int32_t U3CU3E__AnonType0_3_get_Platform_m8BBCF346EC0EBEB417BFC1494792A45713E62666_inline (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3*, const RuntimeMethod*))U3CU3E__AnonType0_3_get_Platform_m8BFCF7940AC116CEA007C5310C3F24AD806F895C_gshared_inline)(__this, method);
}
// System.Boolean Firebase.Unity.InstallRootCerts::IsCertBugPresent(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallRootCerts_IsCertBugPresent_m257CC9A77F1539B6AFFDEA4F3C2403C2D14388B0 (int32_t ___platform0, const RuntimeMethod* method) ;
// <IsEditor>__T <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>::get_IsEditor()
inline bool U3CU3E__AnonType0_3_get_IsEditor_mB9EF81FD3C4F25CE121AB88FD97A6656588466AA_inline (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3*, const RuntimeMethod*))U3CU3E__AnonType0_3_get_IsEditor_mFF46327DA1CF6663F209C0BA346FC148515A86C2_gshared_inline)(__this, method);
}
// Firebase.Platform.ILoggingService Firebase.Platform.Services::get_Logging()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline (const RuntimeMethod* method) ;
// UnityEngine.RuntimePlatform UnityEngine.Application::get_platform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138 (const RuntimeMethod* method) ;
// System.AppDomain System.AppDomain::get_CurrentDomain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667 (const RuntimeMethod* method) ;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249 (AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.InstallRootCerts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts__ctor_m198852F7B7116F5AD98BBEFD33B17393FEF23E11 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExistInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExistInternal_m4D17EE0FAC73CB3944F0603EE927E066DEBAF64F (const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExist_m72DB23AAAF941B43B5A4924723B64357C0327229 (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::.ctor()
inline void List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4 (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.String[] System.Text.RegularExpressions.Regex::Split(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2 (String_t* ___input0, String_t* ___pattern1, const RuntimeMethod* method) ;
// System.Boolean System.String::StartsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Byte[] System.Convert::FromBase64String(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C (String_t* ___s0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Byte[]>::Add(T)
inline void List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.Byte[]> Firebase.Unity.InstallRootCerts::DecodeBase64Blobs(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* InstallRootCerts_DecodeBase64Blobs_mF6D6EA7551D34D67A8F7B767F534A389DFBD9DFF (String_t* ___base64BlobList0, String_t* ___startLine1, String_t* ___endLine2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Byte[]>::GetEnumerator()
inline Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC (*) (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Byte[]>::Dispose()
inline void Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Byte[]>::get_Current()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2__ctor_m34CFFC999D3A152729A5C59DBE80AB709547DA19 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___rawData0, const RuntimeMethod* method) ;
// System.Int32 System.Security.Cryptography.X509Certificates.X509CertificateCollection::Add(System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509CertificateCollection_Add_mE6123E24D942801BC5A41196F92B0552015E110F (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___value0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Byte[]>::MoveNext()
inline bool Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4 (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCertificateCollectionFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeCertificateCollectionFromString_mB06EE933EF822693BB001E81D38084E09220A10E (String_t* ___certString0, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___value0, const RuntimeMethod* method) ;
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA (String_t* ___path0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.String UnityEngine.TextAsset::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9 (TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* __this, const RuntimeMethod* method) ;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7 (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri10, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___uri21, const RuntimeMethod* method) ;
// Firebase.Platform.IHttpFactoryService Firebase.Platform.Services::get_HttpFactory()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_HttpFactory_m93BD1BF483E87832F03A2615ABA7C166D4FB6591_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHttpRequest::SetRequestMethod(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHttpRequest_SetRequestMethod_m6679685EB2167782FF88078329CF400945350722_inline (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, String_t* ___action0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Security.Cryptography.MD5 System.Security.Cryptography.MD5::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223 (const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.HashAlgorithm::ComputeHash(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB (HashAlgorithm_t299ECE61BBF4582B1F75734D43A96DDEC9B2004D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.String System.BitConverter::ToString(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166 (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0 (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___output0, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Issuer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Issuer_m1922DC6FA16712898394AF2377B6D089BA2D169E (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate::get_Subject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C (X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* X509Certificate2_get_SerialNumber_m12F610EEBE485A29FD49A06E8A33BB690476309B (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D X509Certificate2_get_NotAfter_m925CA3901B7856D0692C6DED4F6428A40A726787 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* X509Certificate2_get_Extensions_m3746E7EB004789DF5AF56AD36209676860901579 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509Extension System.Security.Cryptography.X509Certificates.X509ExtensionCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* X509ExtensionCollection_get_Item_m411222FFB9DF3584180BA8A09ED061CFD5774F9D (X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* __this, String_t* ___oid0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509KeyUsageFlags System.Security.Cryptography.X509Certificates.X509KeyUsageExtension::get_KeyUsages()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F (X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) ;
// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::get_StatusInformation()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* X509ChainStatus_get_StatusInformation_m28E8E6FA07DA5C4E8124A955B20918BE4E0CF9E9_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) ;
// System.String System.Reflection.AssemblyName::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C (FieldInfo_t* __this, RuntimeObject* ___obj0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Unity.InstallRootCerts::get_InstallationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E (const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeWebRootCollection(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeWebRootCollection_m13586B5232A68A6A1A17FAC8EED5AAB9CC6ED09A (RuntimeObject* ___app0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.CollectionBase::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72 (CollectionBase_t44F966CC555C87F2815D668FB4586526E1C2383F* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store__ctor_m6020905B4602BEF14DD0B375CCEDF6AF2E21F5D0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, String_t* ___storeName0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Open(System.Security.Cryptography.X509Certificates.OpenFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Open_mE65F1CB5311705EB955D576295B048C1155CCED8 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, int32_t ___flags0, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509Store::get_Certificates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* X509Store_get_Certificates_m3605E1FE284AD55C48E874C49CD22C11828D2DA0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator System.Security.Cryptography.X509Certificates.X509CertificateCollection::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14 (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1 (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection::Contains(System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateCollection_Contains_m8330F734C35F280905C3058096AAB7FB83676CAE (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Add(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Add_m03F5A6AEB3F39CB01135094A0D0E05144C257A85 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___certificate0, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA (X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* __this, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Store::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0 (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.InstallRootCerts::HackRefreshMonoRootStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_HackRefreshMonoRootStore_mCD9D4F61452052E894C5371F40435F239FAA1893 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m6E00E8FEEA73EB6EB86CB2ABC4924402378AB787 (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* __this, RuntimeObject* ___key0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB*, RuntimeObject*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// System.String System.Environment::GetFolderPath(System.Environment/SpecialFolder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_GetFolderPath_m8D283450E7FCF2F2CAFFF157D599C3EBA212B58C (int32_t ___folder0, const RuntimeMethod* method) ;
// System.Boolean System.IO.Directory::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7 (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.Environment::SetEnvironmentVariable(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Environment_SetEnvironmentVariable_m9CE31B38A224F3BE813E4790F7726BDE0F53324A (String_t* ___variable0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeDefaultCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeDefaultCollection_mFCA45FEDAEB255CF50CEB7107EB0739D4714CBCC (const RuntimeMethod* method) ;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCollection(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeCollection_m0E0481428138EB9B8A721F3CAD66A95DCBDBCE6A (RuntimeObject* ___app0, const RuntimeMethod* method) ;
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline (const RuntimeMethod* method) ;
// System.Boolean System.String::Equals(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509CertificateCollection::AddRange(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* __this, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mA42FA0D6B2A039CD998C80EE29321E81BE6152C1 (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* __this, RuntimeObject* ___key0, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB*, RuntimeObject*, X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Unity.InstallRootCerts::InstallDefaultCRLs(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_InstallDefaultCRLs_m695F98F45EBDFFF3CEB490E6A9704DE0D4D91D00 (String_t* ___resource_name0, String_t* ___directory1, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2__ctor_m2C7F482BFC1A0BAAABDD8BE9BBB2026DA5F3E600 (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate0, const RuntimeMethod* method) ;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Chain::Build(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool X509Chain_Build_mF368D6BAE5925C8311B41BFBA08C5D91277C67E5 (X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* __this, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___certificate0, const RuntimeMethod* method) ;
// System.Void System.Net.Security.RemoteCertificateValidationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367 (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Platform.IFirebaseAppPlatform,System.Security.Cryptography.X509Certificates.X509CertificateCollection>::.ctor()
inline void Dictionary_2__ctor_mB8D02E815E321CE6194EFCB9D3DC80E2265A4190 (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0 (const RuntimeMethod* method) ;
// System.Void <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean>::.ctor(<Platform>__T,<IsEditor>__T,<InstallationRequired>__T)
inline void U3CU3E__AnonType0_3__ctor_m755DA4C0A42B9F88B84C3D6E2AB2F7C05932A2AC (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* __this, int32_t ___Platform0, bool ___IsEditor1, bool ___InstallationRequired2, const RuntimeMethod* method)
{
	((  void (*) (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3*, int32_t, bool, bool, const RuntimeMethod*))U3CU3E__AnonType0_3__ctor_mE5476BA21A730E4859C3C5F5F8AF487DC228963E_gshared)(__this, ___Platform0, ___IsEditor1, ___InstallationRequired2, method);
}
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8 (const RuntimeMethod* method) ;
// System.Reflection.PropertyInfo System.Type::GetProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.FieldInfo System.Type::GetField(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FieldInfo_t* Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3 (FieldInfo_t* ___eventField0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, RuntimeObject* ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Reflection.EventInfo System.Type::GetEvent(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventInfo_t* Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String,System.Reflection.BindingFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___name0, int32_t ___bindingAttr1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::CreateDelegate(System.Type,System.Object,System.Reflection.MethodInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7 (Type_t* ___type0, RuntimeObject* ___firstArgument1, MethodInfo_t* ___method2, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9 (const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Delegate::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019 (Delegate_t* __this, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___a0, Delegate_t* ___b1, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___source0, Delegate_t* ___value1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340 (bool ___start0, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Platform.FirebaseMonoBehaviour>()
inline FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.Boolean>(System.Func`1<TResult>)
inline bool FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4 (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___f0, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_gshared)(___f0, method);
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline (const RuntimeMethod* method) ;
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5 (RuntimeObject* ___appUtils0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06 (const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) ;
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* __this, RuntimeObject* ___sender0, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*, RuntimeObject*, ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Terminate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C (bool ___isPlayMode0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1 (const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,TEventArgs)
inline void EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* __this, RuntimeObject* ___sender0, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*, RuntimeObject*, EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*, const RuntimeMethod*))EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline)(__this, ___sender0, ___e1, method);
}
// System.Void System.EventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3 (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B (RuntimeArray* ___array0, RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 ___fldHandle1, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___obj0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___parameters1, const RuntimeMethod* method) ;
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B (int32_t ___logType0, const RuntimeMethod* method) ;
// T Firebase.Platform.MainThreadProperty`1<System.Boolean>::get_Value()
inline bool MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, const RuntimeMethod*))MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.MainThreadProperty`1<System.Boolean>::.ctor(System.Func`1<T>)
inline void MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083 (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* __this, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* ___getPropertyDelegate0, const RuntimeMethod* method)
{
	((  void (*) (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*, Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*, const RuntimeMethod*))MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_gshared)(__this, ___getPropertyDelegate0, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) ;
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___hasFocus0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___behaviour0, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// TResult Firebase.Platform.FirebaseHandler::RunOnMainThread<System.String>(System.Func`1<TResult>)
inline String_t* FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5 (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* ___f0, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*, const RuntimeMethod*))FirebaseHandler_RunOnMainThread_TisRuntimeObject_mAFD03CE3D144923FEEF275BF12B46CBBD81B908C_gshared)(___f0, method);
}
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_unityVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36 (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___p12Filename1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7 (const RuntimeMethod* method) ;
// System.Void Firebase.Unity.WWWHttpRequest::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest__ctor_m2A6482C885CD91C5BCCF47C6423507BCD7C275D8 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityHttpFactoryService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityHttpFactoryService__ctor_m117ECC758C8ABFD3AB5E22C354E28A90AAB7C5E5 (UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* UnityHttpFactoryService_get_Instance_mCAC16F2BA92C9F4DDECEF637BC79E56A677D48CC_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_HttpFactory(Firebase.Platform.IHttpFactoryService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_HttpFactory_m4BA531E7E775B348A13077D125EB21BEED42739C_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* InstallRootCerts_get_Instance_mA8D7D48B405E511B033DD3BE06474B33C83B4176 (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_RootCerts(Firebase.Platform.ICertificateService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_RootCerts_mE19783FFD106AFEAA0F42348A8AFF5DF15761008_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Threading.SynchronizationContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532 (SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* __this, const RuntimeMethod* method) ;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD (const RuntimeMethod* method) ;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05 (Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir>()
inline SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___key0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158**, const RuntimeMethod*))Dictionary_2_TryGetValue_m7316301B8CF47FB538886B229B2749EC160B9D5C_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Threading.ManualResetEvent::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* __this, bool ___initialState0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884 (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, int32_t ___key0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, int32_t, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*, const RuntimeMethod*))Dictionary_2_set_Item_m2888D71A14F2B8510102F24FEE90552E91B124C1_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Threading.EventWaitHandle::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6 (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37 (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0__ctor_m139628D93758C39F840EA776C0735C14CD76BE77 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey1__ctor_m4830E000E383A20145625F857B3548A72F3B9423 (U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* __this, const RuntimeMethod* method) ;
// TResult System.Func`1<System.Collections.IEnumerator>::Invoke()
inline RuntimeObject* Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, const RuntimeMethod*))Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey2__ctor_mD55DB40213ED96F10E57064777F8938478AE9BAD (U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* __this, const RuntimeMethod* method) ;
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<System.Collections.IEnumerator>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_m663374A863E492A515BE9626B6F0E444991834E8_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext::PostCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, const RuntimeMethod* method) ;
// System.Void System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::.ctor(T1,T2)
inline void Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___item10, RuntimeObject* ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Enqueue(T)
inline void Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.SendOrPostCallback::Invoke(System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___state0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.ManualResetEvent>::.ctor()
inline void Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::.ctor()
inline void Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701 (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::get_Count()
inline int32_t Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>>::Dequeue()
inline Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* __this, const RuntimeMethod* method)
{
	return ((  Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* (*) (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// T1 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item1()
inline SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline)(__this, method);
}
// T2 System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>::get_Item2()
inline RuntimeObject* Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*, const RuntimeMethod*))Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline)(__this, method);
}
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.EventWaitHandle::Set()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D (EventWaitHandle_t18F2EB0161747B0646A9A406015A61A214A1EB7E* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext::SignaledCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.FirebaseHttpRequest::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHttpRequest__ctor_m4DFB050B689DB7AE462D42881D361A9B6780913E (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.WWWHttpRequest::EnsureExecuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) ;
// System.Void System.IO.MemoryStream::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2 (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, String_t*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.String>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.UnitySynchronizationContext::SendCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_SendCoroutine_mE4FA1E7A5DE78112436BD2AF080A0C557C93AA7B (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, int32_t ___timeout1, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUnityRequestU3Ec__Iterator0__ctor_m4F27670D17D4ED4A7CE66E3B22178C18BC992850 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* WWW_get_responseHeaders_m6C9B2980A00E0EE5F537D5CDD48BF6C42C4CF066 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.String,System.String>::GetEnumerator()
inline Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 (*) (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*, const RuntimeMethod*))Dictionary_2_GetEnumerator_m52AB12790B0B9B46B1DFB1F861C9DBEAB07C1FDA_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::Dispose()
inline void Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_Dispose_mEA5E01B81EB943B7003D87CEC1B6040524F0402C_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::get_Current()
inline KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline)(__this, method);
}
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline)(__this, method);
}
// System.String System.String::ToUpper()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49 (String_t* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
inline String_t* KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A*, const RuntimeMethod*))KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline)(__this, method);
}
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0 (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.String>::MoveNext()
inline bool Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438 (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562*, const RuntimeMethod*))Enumerator_MoveNext_mCD4950A75FFADD54AF354D48C6C0DB0B5A22A5F4_gshared)(__this, method);
}
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Int32 Firebase.Unity.WWWHttpRequest::ParseIntHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWWHttpRequest_ParseIntHeader_m6C8A7DC2F82FC7196A218FE789C7BF60298F7804 (String_t* ___statusLine0, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9 (String_t* __this, CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___separator0, const RuntimeMethod* method) ;
// System.Boolean System.Int32::TryParse(System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21 (String_t* ___s0, int32_t* ___result1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Firebase.Unity.WWWHttpRequest::SendUnityRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WWWHttpRequest_SendUnityRequest_mC72E42955252228397B14C251388F047BC3F024A (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWW__ctor_mD51946C4380DAAA935F7C5996E5A6AF135165A7E (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, String_t* ___url0, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___postData1, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___headers2, const RuntimeMethod* method) ;
// System.Void Firebase.Unity.WWWHttpRequest::TryParseResponse(UnityEngine.WWW)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest_TryParseResponse_mC190376E6DC978ED8F88026CA9570D6CF1DFF57B (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___www0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.WWW::get_bytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.WWW::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93 (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetState<System.String>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,T,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
inline void AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E (RuntimeObject* ___app0, int32_t ___state1, String_t* ___value2, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___store3, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, int32_t, String_t*, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))AppConfigExtensions_SetState_TisRuntimeObject_m1F78B3FB6712E0F50249BBCF26F656331CF7E248_gshared)(___app0, ___state1, ___value2, ___store3, method);
}
// T Firebase.Platform.Default.AppConfigExtensions::GetState<System.String>(Firebase.Platform.IFirebaseAppPlatform,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,T>>)
inline String_t* AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A (RuntimeObject* ___app0, int32_t ___state1, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* ___store2, const RuntimeMethod* method)
{
	return ((  String_t* (*) (RuntimeObject*, int32_t, Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))AppConfigExtensions_GetState_TisRuntimeObject_m5F6BB3B11F220A0CE1D753F69AB6ECC53CA6DF82_gshared)(___app0, ___state1, ___store2, method);
}
// Firebase.Platform.IAuthService Firebase.Platform.Services::get_Auth()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_mA8369294DF80FB72EB7E6C79BC4F98DD6151EDB0_inline (const RuntimeMethod* method) ;
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* __this, String_t* ___uriString0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.Dictionary`2<System.String,System.String>>::.ctor()
inline void Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*, const RuntimeMethod*))Dictionary_2__ctor_m92E9AB321FBD7147CA109C822D99C8B0610C27B7_gshared)(__this, method);
}
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_gshared)(__this, method);
}
// System.Boolean Firebase.Platform.Default.BaseAuthService::GetIsServiceAccountAuth(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseAuthService_GetIsServiceAccountAuth_m061DA43DBDB37D16D3D3FA0A9251BE602C7213FE (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void X509Certificate2__ctor_m14890D5B2E2764429EA43A0446C8844C3E10389B (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, String_t* ___fileName0, String_t* ___password1, int32_t ___keyStorageFlags2, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m9089E9F8195CECFDA6A935AEAEEA81A345D3CB5C (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___id0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Scopes(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Scopes_mA12BFEABC1C8AAF34F5DCC827650CC6C1344B0DB_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) ;
// Firebase.Platform.Security.ServiceAccountCredential/Initializer Firebase.Platform.Security.ServiceAccountCredential/Initializer::FromCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* Initializer_FromCertificate_m626547CF255594F46D260767D80422A809CE65F6 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___certificate0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential::.ctor(Firebase.Platform.Security.ServiceAccountCredential/Initializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential__ctor_m42B5D097890D761716177CDB13D6E98392DE8176 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* ___initializer0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceCredential::GetAccessTokenForRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceCredential_GetAccessTokenForRequest_m7C592F5C11C5D3CB8BBA128C80E6301DDFC9CAF9 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::SetResult(TResult)
inline void TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, String_t*, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m948378015A7A0E42647452EB7003466406B831A4_gshared)(__this, ___result0, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::.ctor()
inline void Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, const RuntimeMethod*))Dictionary_2__ctor_m5B32FBC624618211EB461D59CFBB10E987FD1329_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Object>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341 (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* __this, String_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*, String_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Platform.Security.GAuthToken::.ctor(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GAuthToken__ctor_mF058BCA53DDD2FA2D9191AE11B778CF619120C34 (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* __this, String_t* ___token0, RuntimeObject* ___auth1, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	return ((  Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* (*) (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline)(__this, method);
}
// System.Void Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAsyncU3Ec__AnonStorey0__ctor_m579609AAE82246973EC3F36035DA11E1ED5B78A8 (U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m9A99EE412CA28FA3656C2B3CEEEDEA403CF736F1 (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<TResult>>)
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*, const RuntimeMethod*))Task_1_ContinueWith_mA0846133B2903064AAD1D23FE61AE736A033F866_gshared)(__this, ___continuationAction0, method);
}
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService__ctor_mE8526CA5E8330258B89EDFFCE81AA330AAD8BE50 (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// TResult System.Threading.Tasks.Task`1<System.String>::get_Result()
inline String_t* Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13 (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, const RuntimeMethod*))Task_1_get_Result_m6897AA7D4A583F9E81EC01C1BF788372D64C5A26_gshared)(__this, method);
}
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C (const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method) ;
// System.Object Google.MiniJSON.Json::Deserialize(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B (String_t* ___json0, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___message0, Exception_t* ___innerException1, const RuntimeMethod* method) ;
// System.String Google.MiniJSON.Json::Serialize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential::.ctor(Firebase.Platform.Security.ServiceCredential/Initializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCredential__ctor_m68B3B05FD4731DBFEFB3AE28BD72686849EB6EA8 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* ___initializer0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_Id_mB6D88DE966CB512DC90D2497D6F20458EB383268_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Id_m5A96D9B0A4A864588DB432904A12D964D9ED4245_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_User()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_User_mD4AF1F13250084851E28EC814A3FAB2FDF55AFB0_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_User(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_User_m80706753632CF9F1C3846F8BD8F80BB6F38D1868_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<System.String> Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Scopes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Initializer_get_Scopes_mD9C11DFE44A531690CAC303B23C14CE21608CAEB_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Scopes(System.String[])
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Scopes_m8039522AC556C9873727372DB47715AB897905FA_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* Initializer_get_Key_m4563568289D4765FFEE7F6C0EAFF929604238D56_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Key_mDD526F93778F534191244F50ABB410FFC58D17AC_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceCredential::get_TokenServerUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential::CreatePayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_CreatePayload_m1C0CFF1543DAFAC23335F0154E27CA18EA669B3F (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential::CreateAssertionFromPayload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_CreateAssertionFromPayload_m7B1A62DC5784AF6D2B4309339C12AC5483D080B1 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___serializedPayload0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OAuthRequest__ctor_m2A163A38E307500796A68060188F6BDB2A9838D6 (OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential::SendOAuth(Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_SendOAuth_mF4D3BC100872E68DBFD510CA003F40E14705347C (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* ___request0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential::UrlSafeBase64Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_UrlSafeBase64Encode_mFB01379C90FBAA1E220A5508C3F989866470B68C (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ServiceAccountCredential_get_Key_m63D7DDB6A6AD1B7A042FF5483E54B7FA523D974D_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::SignData(System.Byte[],System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSACryptoServiceProvider_SignData_mF69CFBC0B0F0DC4D4F328458010E73A361A5FB39 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer0, RuntimeObject* ___halg1, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential::UrlSafeBase64Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_UrlSafeBase64Encode_m8BF5F06B48CA869E6FAF9022930EFC95C2616B75 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) ;
// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential::get_Clock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceCredential_get_Clock_m8DADC338ED1496378117271D825A14109C4633D8_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceAccountCredential::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_get_Id_mD626A6F7C554F2C3033C362CFBB76FDDDFCA9E10_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) ;
// System.String[] Firebase.Platform.Security.ServiceAccountCredential::get_Scopes()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ServiceAccountCredential_get_Scopes_m496B31CDB1A4DC40F66DDDE55659787FB1F2F61B_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) ;
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD (String_t* ___separator0, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value1, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.String System.Convert::ToBase64String(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___inArray0, const RuntimeMethod* method) ;
// System.String System.String::Replace(System.Char,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF (String_t* __this, Il2CppChar ___oldChar0, Il2CppChar ___newChar1, const RuntimeMethod* method) ;
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m50E4C1F45E5C677A1D7950F924D606A4BE38FC68 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___id0, String_t* ___tokenServerUrl1, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m111A6513E8D8BB4BD6A1B378622A6E5F016AA041 (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, String_t* ___tokenServerUrl0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Id_m08ABEE59B541CFDC4094F3C65760416D55E53E42_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* X509Certificate2_get_PrivateKey_mB2D1370AFF6F005B4A18A2223363C353B8D24A4A (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* __this, const RuntimeMethod* method) ;
// System.Byte[] System.Security.Cryptography.RSACryptoServiceProvider::ExportCspBlob(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* RSACryptoServiceProvider_ExportCspBlob_m0745D39B49985BD4B008C5520E98A43F7B8B65F8 (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, bool ___includePrivateParameters0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Key_m0C000BC4609F2130CE861B663FA7B19EBB3B5D53_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) ;
// System.Void System.Security.Cryptography.RSACryptoServiceProvider::ImportCspBlob(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RSACryptoServiceProvider_ImportCspBlob_mC558B0030B36D08EE5D57D5D7F6ACC0FC5CB370D (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___keyBlob0, const RuntimeMethod* method) ;
// System.String Firebase.Platform.Security.ServiceCredential/Initializer::get_TokenServerUrl()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_TokenServerUrl_m128C14BF839E0CDBA61A306CA410FC3E261E9E41_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential::set_TokenServerUrl(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCredential_set_TokenServerUrl_mF24E253C70694808380491585E553FE85EBEB993_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, String_t* ___value0, const RuntimeMethod* method) ;
// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential/Initializer::get_Clock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Initializer_get_Clock_m6E78A2FDB2BB9E9462E30213D295FE3B05729404_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCredential_set_Clock_m07E29DFABC561A022E1DCF94717155B03A0D9C7C_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::set_TokenServerUrl(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_TokenServerUrl_mC5729867A011B402245BF043DCAD5BD34DE95365_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Clock_m98F4FA860266C013BB50B20FA743A0149324FC4E_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor()
inline void List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913 (const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<System.Exception>::get_Item(System.Int32)
inline Exception_t* List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Exception_t* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// T[] System.Collections.Generic.List`1<System.Exception>::ToArray()
inline ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, RuntimeObject* ___innerExceptions0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Clear()
inline void List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7 (const RuntimeMethod* method) ;
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0 (Exception_t* ___exception0, const RuntimeMethod* method) ;
// System.AggregateException System.AggregateException::Flatten()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291 (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886*, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m487A0501D6F875A04F7D8F93F1CB3C813994AA64_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
inline void List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*, String_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*, Exception_t*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void Firebase.Platform.NoopCertificateService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoopCertificateService__ctor_mFCD411F1D799877FC38595783FDD52C48D298798 (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* __this, const RuntimeMethod* method) ;
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) ;
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3_inline (const RuntimeMethod* method) ;
// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::get_BaseInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* BaseAuthService_get_BaseInstance_m469BFD58B369715D60199ABAFDEF2544B75F0736_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Auth_m622188F8E5EF1E7B04346852E173734FABAF423F_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* NoopCertificateService_get_Instance_m5617064807965C527C9E5B4DF524CB4FC547E6C4_inline (const RuntimeMethod* method) ;
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CoreFoundation_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL AFunctionThatDoesNotExistInternal();
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
// System.Void Firebase.Unity.InstallRootCerts::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts__ctor_m198852F7B7116F5AD98BBEFD33B17393FEF23E11 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_mE4551EFFD77A72E3A8A42A8FDAD149C877206863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_U3CInstallRootCertsU3Em__0_m81ED117CB5406924CAEC294323883EEC5321230D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3E__AnonType0_3_get_InstallationRequired_m7B5958068E7E331AD3BA6867DB1C90DC6D939131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3E__AnonType0_3_get_IsEditor_mB9EF81FD3C4F25CE121AB88FD97A6656588466AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3E__AnonType0_3_get_Platform_m8BBCF346EC0EBEB417BFC1494792A45713E62666_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27BEF644286C56C122FB4E223756E021A2297C4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF5479838C6072F7AF91D6EE88E67C33AF77E402);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* V_0 = NULL;
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* L_0 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8;
		if (L_0)
		{
			goto IL_001e;
		}
	}
	{
		Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* L_1 = (Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD*)il2cpp_codegen_object_new(Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m447886DB18CE5EF1D445C913AC40E9733FA70779(L_1, NULL, (intptr_t)((void*)InstallRootCerts_U3CInstallRootCertsU3Em__0_m81ED117CB5406924CAEC294323883EEC5321230D_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8), (void*)L_1);
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		Func_1_tFFE298A0FF9EE593C3548EA58615A3DD1260C3FD* L_2 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_mE4551EFFD77A72E3A8A42A8FDAD149C877206863(L_2, FirebaseHandler_RunOnMainThread_TisU3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_mE4551EFFD77A72E3A8A42A8FDAD149C877206863_RuntimeMethod_var);
		V_0 = L_3;
		U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* L_4 = V_0;
		NullCheck(L_4);
		bool L_5;
		L_5 = U3CU3E__AnonType0_3_get_InstallationRequired_m7B5958068E7E331AD3BA6867DB1C90DC6D939131_inline(L_4, U3CU3E__AnonType0_3_get_InstallationRequired_m7B5958068E7E331AD3BA6867DB1C90DC6D939131_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_007b;
		}
	}
	{
		U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = U3CU3E__AnonType0_3_get_Platform_m8BBCF346EC0EBEB417BFC1494792A45713E62666_inline(L_6, U3CU3E__AnonType0_3_get_Platform_m8BBCF346EC0EBEB417BFC1494792A45713E62666_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = InstallRootCerts_IsCertBugPresent_m257CC9A77F1539B6AFFDEA4F3C2403C2D14388B0(L_7, NULL);
		if (!L_8)
		{
			goto IL_007b;
		}
	}
	{
		U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = U3CU3E__AnonType0_3_get_IsEditor_mB9EF81FD3C4F25CE121AB88FD97A6656588466AA_inline(L_9, U3CU3E__AnonType0_3_get_IsEditor_mB9EF81FD3C4F25CE121AB88FD97A6656588466AA_RuntimeMethod_var);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_11);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_11, 2, _stringLiteral27BEF644286C56C122FB4E223756E021A2297C4A);
		__this->____needsCertificateWorkaround_4 = (bool)1;
		goto IL_007b;
	}

IL_006b:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_12;
		L_12 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_12, 3, _stringLiteralCF5479838C6072F7AF91D6EE88E67C33AF77E402);
	}

IL_007b:
	{
		return;
	}
}
// System.Boolean Firebase.Unity.InstallRootCerts::get_InstallationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4976161E5AEF8C1E645199288F5EB3ACEA32AA40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAA7D396A30DBD79120CB3DD17FCA6D5DB874299);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Assembly_t* V_1 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_2 = NULL;
	int32_t V_3 = 0;
	Type_t* V_4 = NULL;
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((((int32_t)L_0) == ((int32_t)((int32_t)11))))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1;
		L_1 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)8))))
		{
			goto IL_0019;
		}
	}

IL_0017:
	{
		return (bool)0;
	}

IL_0019:
	{
		V_0 = (bool)0;
		AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_2;
		L_2 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
		NullCheck(L_2);
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_3;
		L_3 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_2, NULL);
		V_2 = L_3;
		V_3 = 0;
		goto IL_004b;
	}

IL_002d:
	{
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_4 = V_2;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		Assembly_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		Assembly_t* L_8 = V_1;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_8, _stringLiteralCAA7D396A30DBD79120CB3DD17FCA6D5DB874299);
		V_4 = L_9;
		Type_t* L_10 = V_4;
		if (!L_10)
		{
			goto IL_0047;
		}
	}
	{
		V_0 = (bool)1;
	}

IL_0047:
	{
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004b:
	{
		int32_t L_12 = V_3;
		AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_13 = V_2;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_002d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		bool L_15 = V_0;
		bool L_16 = L_15;
		RuntimeObject* L_17 = Box(Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var, &L_16);
		String_t* L_18;
		L_18 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral4976161E5AEF8C1E645199288F5EB3ACEA32AA40, L_17, NULL);
		NullCheck(L_14);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_14, 1, L_18);
		bool L_19 = V_0;
		return L_19;
	}
}
// Firebase.Unity.InstallRootCerts Firebase.Unity.InstallRootCerts::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* InstallRootCerts_get_Instance_mA8D7D48B405E511B033DD3BE06474B33C83B4176 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___Sync_0;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* L_3 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3;
				if (L_3)
				{
					goto IL_0020_1;
				}
			}
			{
				InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* L_4 = (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC*)il2cpp_codegen_object_new(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				NullCheck(L_4);
				InstallRootCerts__ctor_m198852F7B7116F5AD98BBEFD33B17393FEF23E11(L_4, NULL);
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3 = L_4;
				Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3), (void*)L_4);
			}

IL_0020_1:
			{
				goto IL_002c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* L_5 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3;
		return L_5;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExistInternal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExistInternal_m4D17EE0FAC73CB3944F0603EE927E066DEBAF64F (const RuntimeMethod* method) 
{
	typedef void (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL && !FORCE_PINVOKE_CoreFoundation_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("/System/Library/Frameworks/CoreFoundation.framework/CoreFoundation"), "AFunctionThatDoesNotExistInternal", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL || FORCE_PINVOKE_CoreFoundation_INTERNAL
	reinterpret_cast<PInvokeFunc>(AFunctionThatDoesNotExistInternal)();
	#else
	il2cppPInvokeFunc();
	#endif

}
// System.Void Firebase.Unity.InstallRootCerts::AFunctionThatDoesNotExist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_AFunctionThatDoesNotExist_m72DB23AAAF941B43B5A4924723B64357C0327229 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		InstallRootCerts_AFunctionThatDoesNotExistInternal_m4D17EE0FAC73CB3944F0603EE927E066DEBAF64F(NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.InstallRootCerts::IsCertBugPresent(UnityEngine.RuntimePlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallRootCerts_IsCertBugPresent_m257CC9A77F1539B6AFFDEA4F3C2403C2D14388B0 (int32_t ___platform0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BE4E36D37626E3BE837252D5B6435BA200F8D2F);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___platform0;
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		int32_t L_1 = ___platform0;
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_004f;
		}
	}

IL_000d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		Assembly_t* L_4;
		L_4 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_3);
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, _stringLiteral3BE4E36D37626E3BE837252D5B6435BA200F8D2F);
		V_0 = L_5;
		Type_t* L_6 = V_0;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	try
	{// begin try (depth: 1)
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		InstallRootCerts_AFunctionThatDoesNotExist_m72DB23AAAF941B43B5A4924723B64357C0327229(NULL);
		goto IL_004d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DllNotFoundException_t8CAE636A394C482C9FCF38FB7B7929506319D534_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0037;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&EntryPointNotFoundException_t15F4C4ABBCF00C39FC1C2C903F15DF41055C1743_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003f;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0047;
		}
		throw e;
	}

CATCH_0037:
	{// begin catch(System.DllNotFoundException)
		V_1 = (bool)1;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

CATCH_003f:
	{// begin catch(System.EntryPointNotFoundException)
		V_1 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

CATCH_0047:
	{// begin catch(System.Object)
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_004d;
	}// end catch (depth: 1)

IL_004d:
	{
		return (bool)1;
	}

IL_004f:
	{
		return (bool)0;
	}

IL_0051:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Collections.Generic.List`1<System.Byte[]> Firebase.Unity.InstallRootCerts::DecodeBase64Blobs(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* InstallRootCerts_DecodeBase64Blobs_mF6D6EA7551D34D67A8F7B767F534A389DFBD9DFF (String_t* ___base64BlobList0, String_t* ___startLine1, String_t* ___endLine2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD31FDD8B242767F64369E0D21E5566B0F2ADBBC5);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	bool V_2 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_3 = NULL;
	String_t* V_4 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_5 = NULL;
	int32_t V_6 = 0;
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_0 = (List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4*)il2cpp_codegen_object_new(List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4(L_0, List_1__ctor_m8070151BA99349188C9F1457EC394480BE0D4ED4_RuntimeMethod_var);
		V_0 = L_0;
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_1 = L_1;
		V_2 = (bool)0;
		String_t* L_2 = ___base64BlobList0;
		il2cpp_codegen_runtime_class_init_inline(Regex_tE773142C2BE45C5D362B0F815AFF831707A51772_il2cpp_TypeInfo_var);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = Regex_Split_mA6C13D588244018786564864F683C13DDBEF5CF2(L_2, _stringLiteralD31FDD8B242767F64369E0D21E5566B0F2ADBBC5, NULL);
		V_3 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_3;
		V_5 = L_4;
		V_6 = 0;
		goto IL_007a;
	}

IL_0025:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_5;
		int32_t L_6 = V_6;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		String_t* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_4 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_006b;
		}
	}
	{
		String_t* L_10 = V_4;
		String_t* L_11 = ___endLine2;
		NullCheck(L_10);
		bool L_12;
		L_12 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_10, L_11, NULL);
		if (!L_12)
		{
			goto IL_005d;
		}
	}
	{
		V_2 = (bool)0;
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_13 = V_0;
		StringBuilder_t* L_14 = V_1;
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16;
		L_16 = Convert_FromBase64String_m267327B074B41D93C9622D142B95CFAA4ACCCA9C(L_15, NULL);
		NullCheck(L_13);
		List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_inline(L_13, L_16, List_1_Add_mAF067D8BCD6732A0ADBE1BA6EE909B3512880D42_RuntimeMethod_var);
		StringBuilder_t* L_17 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_17, NULL);
		V_1 = L_17;
		goto IL_0074;
	}

IL_005d:
	{
		StringBuilder_t* L_18 = V_1;
		String_t* L_19 = V_4;
		NullCheck(L_18);
		StringBuilder_t* L_20;
		L_20 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_18, L_19, NULL);
		goto IL_0074;
	}

IL_006b:
	{
		String_t* L_21 = V_4;
		String_t* L_22 = ___startLine1;
		NullCheck(L_21);
		bool L_23;
		L_23 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_21, L_22, NULL);
		V_2 = L_23;
	}

IL_0074:
	{
		int32_t L_24 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_007a:
	{
		int32_t L_25 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_5;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_0025;
		}
	}
	{
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_27 = V_0;
		return L_27;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCertificateCollectionFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeCertificateCollectionFromString_mB06EE933EF822693BB001E81D38084E09220A10E (String_t* ___certString0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B751EA9E5305A196A365499A6D73C068B23F535);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral473BE997FD82CA373BC40BEC46E737A81D8B16EA);
		s_Il2CppMethodInitialized = true;
	}
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_0 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_0, NULL);
		V_0 = L_0;
		String_t* L_1 = ___certString0;
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_2;
		L_2 = InstallRootCerts_DecodeBase64Blobs_mF6D6EA7551D34D67A8F7B767F534A389DFBD9DFF(L_1, _stringLiteral473BE997FD82CA373BC40BEC46E737A81D8B16EA, _stringLiteral3B751EA9E5305A196A365499A6D73C068B23F535, NULL);
		NullCheck(L_2);
		Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_3;
		L_3 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_2, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		V_2 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0047:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_2), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0036_1;
			}

IL_0021_1:
			{
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4;
				L_4 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_2), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
				V_1 = L_4;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_5 = V_0;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
				X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_7 = (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)il2cpp_codegen_object_new(X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				X509Certificate2__ctor_m34CFFC999D3A152729A5C59DBE80AB709547DA19(L_7, L_6, NULL);
				NullCheck(L_5);
				int32_t L_8;
				L_8 = X509CertificateCollection_Add_mE6123E24D942801BC5A41196F92B0552015E110F(L_5, L_7, NULL);
			}

IL_0036_1:
			{
				bool L_9;
				L_9 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_2), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0021_1;
				}
			}
			{
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_10 = V_0;
		return L_10;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeDefaultCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeDefaultCollection_mFCA45FEDAEB255CF50CEB7107EB0739D4714CBCC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0E8C8AAB6B8AABF87DD28772E31D2EF0BA69A20);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_1 = NULL;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_1;
			L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
			NullCheck(L_1);
			Assembly_t* L_2;
			L_2 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_1);
			NullCheck(L_2);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_3;
			L_3 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(14 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_2, _stringLiteralE0E8C8AAB6B8AABF87DD28772E31D2EF0BA69A20);
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_4 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
			NullCheck(L_4);
			StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_4, L_3, NULL);
			V_0 = L_4;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0030_1:
				{// begin finally (depth: 2)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = V_0;
						if (!L_5)
						{
							goto IL_003c_1;
						}
					}
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_0;
						NullCheck(L_6);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
					}

IL_003c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_7 = V_0;
				NullCheck(L_7);
				String_t* L_8;
				L_8 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_7);
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_9;
				L_9 = InstallRootCerts_DecodeCertificateCollectionFromString_mB06EE933EF822693BB001E81D38084E09220A10E(L_8, NULL);
				V_1 = L_9;
				goto IL_005a;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_003d;
		}
		throw e;
	}

CATCH_003d:
	{// begin catch(System.Exception)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_10;
		L_10 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Exception_t* L_11 = V_2;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_10, 4, L_12);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0054;
	}// end catch (depth: 1)

IL_0054:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_13 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_13, NULL);
		return L_13;
	}

IL_005a:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_14 = V_1;
		return L_14;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeCollection(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeCollection_m0E0481428138EB9B8A721F3CAD66A95DCBDBCE6A (RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_1 = ___app0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(12 /* System.String Firebase.Platform.IAppConfigExtensions::GetCertPemFile(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		String_t* L_5 = V_0;
		Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* L_6;
		L_6 = Resources_Load_mA66E7AA8D024B495158F157382C3A8528306FFEA(L_5, NULL);
		V_1 = ((TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69*)IsInstClass((RuntimeObject*)L_6, TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69_il2cpp_TypeInfo_var));
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_7 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_003b;
		}
	}
	{
		TextAsset_t2C64E93DA366D9DE5A8209E1802FA4884AC1BD69* L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = TextAsset_get_text_m36846042E3CF3D9DD337BF3F8B2B1902D10C8FD9(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_11;
		L_11 = InstallRootCerts_DecodeCertificateCollectionFromString_mB06EE933EF822693BB001E81D38084E09220A10E(L_10, NULL);
		return L_11;
	}

IL_003b:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_12 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_12, NULL);
		return L_12;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::DecodeWebRootCollection(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_DecodeWebRootCollection_m13586B5232A68A6A1A17FAC8EED5AAB9CC6ED09A (RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2952889D952A4C44CE56744511466B572E7C7B13);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC17448E9487ADA7067EEA2E9270A5F02D206E5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9DBB255FB1A590A145BE146F812B48A08441060);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_0 = NULL;
	FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* V_1 = NULL;
	int32_t V_2 = 0;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_3 = NULL;
	int32_t V_4 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_1 = ___app0;
		NullCheck(L_0);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_2;
		L_2 = InterfaceFuncInvoker1< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*, RuntimeObject* >::Invoke(14 /* System.Uri Firebase.Platform.IAppConfigExtensions::GetCertUpdateUrl(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7(L_3, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_4)
		{
			goto IL_00c1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_5;
		L_5 = Services_get_HttpFactory_m93BD1BF483E87832F03A2615ABA7C166D4FB6591_inline(NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_6 = V_0;
		NullCheck(L_5);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_7;
		L_7 = InterfaceFuncInvoker1< FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(0 /* Firebase.Platform.FirebaseHttpRequest Firebase.Platform.IHttpFactoryService::OpenConnection(System.Uri) */, IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B_il2cpp_TypeInfo_var, L_5, L_6);
		V_1 = L_7;
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_8 = V_1;
		NullCheck(L_8);
		FirebaseHttpRequest_SetRequestMethod_m6679685EB2167782FF88078329CF400945350722_inline(L_8, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_9 = V_1;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_9);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)200))))
		{
			goto IL_0091;
		}
	}
	{
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_11 = V_1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_11);
		if ((((int32_t)L_12) >= ((int32_t)((int32_t)300))))
		{
			goto IL_0091;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_14 = V_0;
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_15);
		V_2 = L_16;
		String_t* L_17;
		L_17 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_18;
		L_18 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralF9DBB255FB1A590A145BE146F812B48A08441060, L_14, L_17, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_13, 1, L_18);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_19 = V_1;
		NullCheck(L_19);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_20;
		L_20 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(9 /* System.IO.Stream Firebase.Platform.FirebaseHttpRequest::get_InputStream() */, L_19);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_21 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_21, L_20, NULL);
		V_3 = L_21;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_22 = V_3;
		NullCheck(L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_22);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_24;
		L_24 = InstallRootCerts_DecodeCertificateCollectionFromString_mB06EE933EF822693BB001E81D38084E09220A10E(L_23, NULL);
		return L_24;
	}

IL_0091:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_25;
		L_25 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_26 = V_0;
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28;
		L_28 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_27);
		V_4 = L_28;
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_30;
		L_30 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralBC17448E9487ADA7067EEA2E9270A5F02D206E5D, L_26, L_29, NULL);
		NullCheck(L_25);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_25, 4, L_30);
		goto IL_00d1;
	}

IL_00c1:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_31;
		L_31 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_31);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_31, 3, _stringLiteral2952889D952A4C44CE56744511466B572E7C7B13);
	}

IL_00d1:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_32 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_32, NULL);
		return L_32;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::InstallDefaultCRLs(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_InstallDefaultCRLs_m695F98F45EBDFFF3CEB490E6A9704DE0D4D91D00 (String_t* ___resource_name0, String_t* ___directory1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D71090BA065802DCE316DE05E9529CB65818FAF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE3814F773812005D7611B6537F6A5F3C48FF97A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3B1C6C93198FFE0F7D93EF614FF53C019E5FC1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE3C9D02D1C42093ED52EE94DABD76765A2A780F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF999EF172C0689938C806510905BFF64B5EAAC9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* V_1 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_2 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_3 = NULL;
	Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* V_5 = NULL;
	MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* V_6 = NULL;
	String_t* V_7 = NULL;
	BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* V_8 = NULL;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___directory1;
		DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_1;
		L_1 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_0, NULL);
		V_0 = 0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_3 = ___directory1;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF999EF172C0689938C806510905BFF64B5EAAC9, L_3, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_2, 1, L_4);
	}
	try
	{// begin try (depth: 1)
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_0_0_0_var) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_6;
			L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
			NullCheck(L_6);
			Assembly_t* L_7;
			L_7 = VirtualFuncInvoker0< Assembly_t* >::Invoke(26 /* System.Reflection.Assembly System.Type::get_Assembly() */, L_6);
			String_t* L_8 = ___resource_name0;
			NullCheck(L_7);
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_9;
			L_9 = VirtualFuncInvoker1< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*, String_t* >::Invoke(14 /* System.IO.Stream System.Reflection.Assembly::GetManifestResourceStream(System.String) */, L_7, L_8);
			V_1 = L_9;
			Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_10 = V_1;
			StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_11, L_10, NULL);
			V_2 = L_11;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0116_1:
				{// begin finally (depth: 2)
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_12 = V_2;
						if (!L_12)
						{
							goto IL_0122_1;
						}
					}
					{
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_13 = V_2;
						NullCheck(L_13);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_13);
					}

IL_0122_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_14 = V_2;
					NullCheck(L_14);
					String_t* L_15;
					L_15 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_14);
					il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
					List_1_tBFF9DD9FFA06F20E74F9D7AD36610BD754D353A4* L_16;
					L_16 = InstallRootCerts_DecodeBase64Blobs_mF6D6EA7551D34D67A8F7B767F534A389DFBD9DFF(L_15, _stringLiteral5D71090BA065802DCE316DE05E9529CB65818FAF, _stringLiteralD3B1C6C93198FFE0F7D93EF614FF53C019E5FC1A, NULL);
					NullCheck(L_16);
					Enumerator_t58043958B4360A01DE08893E29EBFD6A73120CEC L_17;
					L_17 = List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D(L_16, List_1_GetEnumerator_m7C61C1682B2BDC2599320E9B76B12AD7F6E2020D_RuntimeMethod_var);
					V_4 = L_17;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_0103_2:
						{// begin finally (depth: 3)
							Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F((&V_4), Enumerator_Dispose_mCDDC850B62D20A7AAD5DF974538393AB3A43461F_RuntimeMethod_var);
							return;
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						{
							goto IL_00f2_3;
						}

IL_005d_3:
						{
							ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
							L_18 = Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_inline((&V_4), Enumerator_get_Current_m4B63F6735596A1CA8F6EEA0E6C630CACC3F3900E_RuntimeMethod_var);
							V_3 = L_18;
							MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_19;
							L_19 = MD5_Create_mD7AEBE7A752D163971C764A9A8CC0029C865F223(NULL);
							V_6 = L_19;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_008f_3:
								{// begin finally (depth: 4)
									{
										MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_20 = V_6;
										if (!L_20)
										{
											goto IL_009d_3;
										}
									}
									{
										MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_21 = V_6;
										NullCheck(L_21);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_21);
									}

IL_009d_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								MD5_t808E6AE387D5FCC368DBB86576572C1564D17E5A* L_22 = V_6;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_3;
								NullCheck(L_22);
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
								L_24 = HashAlgorithm_ComputeHash_mC9CD24714D75A8D61F12509BF952A26347FF22FB(L_22, L_23, NULL);
								il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
								String_t* L_25;
								L_25 = BitConverter_ToString_m5F1B0DD98D477249671A51379388B4A09B35B420(L_24, NULL);
								String_t* L_26 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
								NullCheck(L_25);
								String_t* L_27;
								L_27 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_25, _stringLiteral3B2C1C62D4D1C2A0C8A9AC42DB00D33C654F9AD0, L_26, NULL);
								V_5 = L_27;
								goto IL_009e_3;
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_009e_3:
						{
							String_t* L_28 = ___directory1;
							String_t* L_29 = V_5;
							String_t* L_30;
							L_30 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_29, _stringLiteralDE3C9D02D1C42093ED52EE94DABD76765A2A780F, NULL);
							il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
							String_t* L_31;
							L_31 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_28, L_30, NULL);
							V_7 = L_31;
							String_t* L_32 = V_7;
							bool L_33;
							L_33 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_32, NULL);
							if (!L_33)
							{
								goto IL_00c3_3;
							}
						}
						{
							goto IL_00f2_3;
						}

IL_00c3_3:
						{
							String_t* L_34 = V_7;
							FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_35 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
							NullCheck(L_35);
							FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_35, L_34, 1, NULL);
							BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_36 = (BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E*)il2cpp_codegen_object_new(BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E_il2cpp_TypeInfo_var);
							NullCheck(L_36);
							BinaryWriter__ctor_mF2F1235E378C3EC493A8C816597BCEB4205A9CA0(L_36, L_35, NULL);
							V_8 = L_36;
						}
						{
							auto __finallyBlock = il2cpp::utils::Finally([&]
							{

FINALLY_00df_3:
								{// begin finally (depth: 4)
									{
										BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_37 = V_8;
										if (!L_37)
										{
											goto IL_00ed_3;
										}
									}
									{
										BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_38 = V_8;
										NullCheck(L_38);
										InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_38);
									}

IL_00ed_3:
									{
										return;
									}
								}// end finally (depth: 4)
							});
							try
							{// begin try (depth: 4)
								BinaryWriter_tFB94D67EDFA3F6A34744A163BDABE287FDF2ED1E* L_39 = V_8;
								ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_40 = V_3;
								NullCheck(L_39);
								VirtualActionInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(9 /* System.Void System.IO.BinaryWriter::Write(System.Byte[]) */, L_39, L_40);
								goto IL_00ee_3;
							}// end try (depth: 4)
							catch(Il2CppExceptionWrapper& e)
							{
								__finallyBlock.StoreException(e.ex);
							}
						}

IL_00ee_3:
						{
							int32_t L_41 = V_0;
							V_0 = ((int32_t)il2cpp_codegen_add(L_41, 1));
						}

IL_00f2_3:
						{
							bool L_42;
							L_42 = Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4((&V_4), Enumerator_MoveNext_m5A8036FD044CA17B6B9F11640135700F7061BFE4_RuntimeMethod_var);
							if (L_42)
							{
								goto IL_005d_3;
							}
						}
						{
							goto IL_0111_2;
						}
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0111_2:
				{
					goto IL_0123_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0123_1:
		{
			il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
			RuntimeObject* L_43;
			L_43 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
			int32_t L_44 = V_0;
			int32_t L_45 = L_44;
			RuntimeObject* L_46 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_45);
			String_t* L_47;
			L_47 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCE3814F773812005D7611B6537F6A5F3C48FF97A, L_46, NULL);
			NullCheck(L_43);
			InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_43, 1, L_47);
			goto IL_0166;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0143;
		}
		throw e;
	}

CATCH_0143:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_48;
		L_48 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Exception_t* L_49 = V_9;
		NullCheck(L_49);
		String_t* L_50;
		L_50 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_49);
		String_t* L_51;
		L_51 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA020B57A0231AC0BF3C430F0B7A6F3A74CCB21A0)), L_50, NULL);
		NullCheck(L_48);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_48, 4, L_51);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0166;
	}// end catch (depth: 1)

IL_0166:
	{
		return;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::PrintCert(Firebase.Platform.PlatformLogLevel,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.X509Certificates.X509ChainStatus[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_PrintCert_mABC4CC3A946AB0DD5BC4278A4E41BEC576802ACB (int32_t ___logLevel0, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___cert1, X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* ___chainElementStatus2, String_t* ___chainElementInformation3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509KeyUsageFlags_tA8507F67CB3F1DF68E2126C9D40A62CCF27065BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral30D43FC31E773CBC77843C2FE8F811F53799D25A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral488410D28A9F604900922B8330A861918364B787);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52EBD272BF6013B4DC5340C6B0E1BB167745F86E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77833D2563D297077DCF9C67CF856153571C1740);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94229832643A48D64F9CDC258FEAB50ECB829FAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral94C8FB8AF905BE0ECF64EE89B4889ECACDE6A118);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3FA94AD28D48C87A4E07B45E4BFF83464B6AE8A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64AE7F9C7DEFF7CB7181A0CF80576233E18FE22);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* V_1 = NULL;
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_2;
	memset((&V_2), 0, sizeof(V_2));
	X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* V_3 = NULL;
	int32_t V_4 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	StringBuilder_t* G_B4_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	StringBuilder_t* G_B3_2 = NULL;
	String_t* G_B6_0 = NULL;
	String_t* G_B6_1 = NULL;
	StringBuilder_t* G_B6_2 = NULL;
	String_t* G_B5_0 = NULL;
	String_t* G_B5_1 = NULL;
	StringBuilder_t* G_B5_2 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	StringBuilder_t* G_B8_2 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	StringBuilder_t* G_B7_2 = NULL;
	String_t* G_B10_0 = NULL;
	StringBuilder_t* G_B10_1 = NULL;
	String_t* G_B9_0 = NULL;
	StringBuilder_t* G_B9_1 = NULL;
	int32_t G_B11_0 = 0;
	String_t* G_B11_1 = NULL;
	StringBuilder_t* G_B11_2 = NULL;
	String_t* G_B13_0 = NULL;
	String_t* G_B13_1 = NULL;
	StringBuilder_t* G_B13_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	StringBuilder_t* G_B12_2 = NULL;
	X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* G_B16_0 = NULL;
	String_t* G_B22_0 = NULL;
	RuntimeObject* G_B22_1 = NULL;
	String_t* G_B22_2 = NULL;
	StringBuilder_t* G_B22_3 = NULL;
	String_t* G_B21_0 = NULL;
	RuntimeObject* G_B21_1 = NULL;
	String_t* G_B21_2 = NULL;
	StringBuilder_t* G_B21_3 = NULL;
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_0 = ___cert1;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		return;
	}

IL_0007:
	{
		StringBuilder_t* L_1 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_1, NULL);
		V_0 = L_1;
		StringBuilder_t* L_2 = V_0;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_3 = ___cert1;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = X509Certificate_get_Issuer_m1922DC6FA16712898394AF2377B6D089BA2D169E(L_3, NULL);
		String_t* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = _stringLiteral52EBD272BF6013B4DC5340C6B0E1BB167745F86E;
		G_B3_2 = L_2;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = _stringLiteral52EBD272BF6013B4DC5340C6B0E1BB167745F86E;
			G_B4_2 = L_2;
			goto IL_0025;
		}
	}
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0025:
	{
		String_t* L_7;
		L_7 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B4_1, G_B4_0, NULL);
		NullCheck(G_B4_2);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B4_2, L_7, NULL);
		StringBuilder_t* L_9 = V_0;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_10 = ___cert1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = X509Certificate_get_Subject_m2568DA6469339937B44FCD5C7C69FF02934D075C(L_10, NULL);
		String_t* L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = _stringLiteral94229832643A48D64F9CDC258FEAB50ECB829FAE;
		G_B5_2 = L_9;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = _stringLiteral94229832643A48D64F9CDC258FEAB50ECB829FAE;
			G_B6_2 = L_9;
			goto IL_0048;
		}
	}
	{
		String_t* L_13 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B6_0 = L_13;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0048:
	{
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B6_1, G_B6_0, NULL);
		NullCheck(G_B6_2);
		StringBuilder_t* L_15;
		L_15 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B6_2, L_14, NULL);
		StringBuilder_t* L_16 = V_0;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_17 = ___cert1;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = X509Certificate2_get_SerialNumber_m12F610EEBE485A29FD49A06E8A33BB690476309B(L_17, NULL);
		String_t* L_19 = L_18;
		G_B7_0 = L_19;
		G_B7_1 = _stringLiteral94C8FB8AF905BE0ECF64EE89B4889ECACDE6A118;
		G_B7_2 = L_16;
		if (L_19)
		{
			G_B8_0 = L_19;
			G_B8_1 = _stringLiteral94C8FB8AF905BE0ECF64EE89B4889ECACDE6A118;
			G_B8_2 = L_16;
			goto IL_006b;
		}
	}
	{
		String_t* L_20 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B8_0 = L_20;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_006b:
	{
		String_t* L_21;
		L_21 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B8_1, G_B8_0, NULL);
		NullCheck(G_B8_2);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B8_2, L_21, NULL);
		StringBuilder_t* L_23 = V_0;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_24 = ___cert1;
		NullCheck(L_24);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_25;
		L_25 = X509Certificate2_get_NotAfter_m925CA3901B7856D0692C6DED4F6428A40A726787(L_24, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_26 = L_25;
		RuntimeObject* L_27 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_26);
		String_t* L_28;
		L_28 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralC3FA94AD28D48C87A4E07B45E4BFF83464B6AE8A, L_27, NULL);
		NullCheck(L_23);
		StringBuilder_t* L_29;
		L_29 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_23, L_28, NULL);
		StringBuilder_t* L_30 = V_0;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_31 = ___chainElementStatus2;
		G_B9_0 = _stringLiteral77833D2563D297077DCF9C67CF856153571C1740;
		G_B9_1 = L_30;
		if (!L_31)
		{
			G_B10_0 = _stringLiteral77833D2563D297077DCF9C67CF856153571C1740;
			G_B10_1 = L_30;
			goto IL_00a6;
		}
	}
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_32 = ___chainElementStatus2;
		NullCheck(L_32);
		G_B11_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B11_0 = 0;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00a7:
	{
		int32_t L_33 = G_B11_0;
		RuntimeObject* L_34 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_33);
		String_t* L_35;
		L_35 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B11_1, L_34, NULL);
		NullCheck(G_B11_2);
		StringBuilder_t* L_36;
		L_36 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B11_2, L_35, NULL);
		StringBuilder_t* L_37 = V_0;
		String_t* L_38 = ___chainElementInformation3;
		String_t* L_39 = L_38;
		G_B12_0 = L_39;
		G_B12_1 = _stringLiteralE64AE7F9C7DEFF7CB7181A0CF80576233E18FE22;
		G_B12_2 = L_37;
		if (L_39)
		{
			G_B13_0 = L_39;
			G_B13_1 = _stringLiteralE64AE7F9C7DEFF7CB7181A0CF80576233E18FE22;
			G_B13_2 = L_37;
			goto IL_00ca;
		}
	}
	{
		String_t* L_40 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B13_0 = L_40;
		G_B13_1 = G_B12_1;
		G_B13_2 = G_B12_2;
	}

IL_00ca:
	{
		String_t* L_41;
		L_41 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(G_B13_1, G_B13_0, NULL);
		NullCheck(G_B13_2);
		StringBuilder_t* L_42;
		L_42 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B13_2, L_41, NULL);
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_43 = ___cert1;
		NullCheck(L_43);
		X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* L_44;
		L_44 = X509Certificate2_get_Extensions_m3746E7EB004789DF5AF56AD36209676860901579(L_43, NULL);
		if (!L_44)
		{
			goto IL_00fa;
		}
	}
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_45 = ___cert1;
		NullCheck(L_45);
		X509ExtensionCollection_t03E0B5DD255DCFF3FE91FE55C5127BC834ABF4D0* L_46;
		L_46 = X509Certificate2_get_Extensions_m3746E7EB004789DF5AF56AD36209676860901579(L_45, NULL);
		NullCheck(L_46);
		X509Extension_tEDB806DCCB5A652375D9CC60A7A75AE8A2F4B7E5* L_47;
		L_47 = X509ExtensionCollection_get_Item_m411222FFB9DF3584180BA8A09ED061CFD5774F9D(L_46, _stringLiteralDEB31152738116748FADCEF38CE0C9964DACCF2F, NULL);
		G_B16_0 = ((X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B*)IsInstSealed((RuntimeObject*)L_47, X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B_il2cpp_TypeInfo_var));
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B16_0 = ((X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B*)(NULL));
	}

IL_00fb:
	{
		V_1 = G_B16_0;
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_48 = V_1;
		if (!L_48)
		{
			goto IL_011e;
		}
	}
	{
		StringBuilder_t* L_49 = V_0;
		X509KeyUsageExtension_t8AD500911A72309DBA02AF6C8461FA465CC56F1B* L_50 = V_1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = X509KeyUsageExtension_get_KeyUsages_m1BD6C5BC6E3E380982C135B2E81731435345144F(L_50, NULL);
		int32_t L_52 = L_51;
		RuntimeObject* L_53 = Box(X509KeyUsageFlags_tA8507F67CB3F1DF68E2126C9D40A62CCF27065BA_il2cpp_TypeInfo_var, &L_52);
		String_t* L_54;
		L_54 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral488410D28A9F604900922B8330A861918364B787, L_53, NULL);
		NullCheck(L_49);
		StringBuilder_t* L_55;
		L_55 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_49, L_54, NULL);
	}

IL_011e:
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_56 = ___chainElementStatus2;
		if (!L_56)
		{
			goto IL_017c;
		}
	}
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_57 = ___chainElementStatus2;
		V_3 = L_57;
		V_4 = 0;
		goto IL_0172;
	}

IL_012e:
	{
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_58 = V_3;
		int32_t L_59 = V_4;
		NullCheck(L_58);
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D L_60 = (*(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))));
		V_2 = L_60;
		StringBuilder_t* L_61 = V_0;
		int32_t L_62;
		L_62 = X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline((&V_2), NULL);
		int32_t L_63 = L_62;
		RuntimeObject* L_64 = Box(X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769_il2cpp_TypeInfo_var, &L_63);
		String_t* L_65;
		L_65 = X509ChainStatus_get_StatusInformation_m28E8E6FA07DA5C4E8124A955B20918BE4E0CF9E9_inline((&V_2), NULL);
		String_t* L_66 = L_65;
		G_B21_0 = L_66;
		G_B21_1 = L_64;
		G_B21_2 = _stringLiteral30D43FC31E773CBC77843C2FE8F811F53799D25A;
		G_B21_3 = L_61;
		if (L_66)
		{
			G_B22_0 = L_66;
			G_B22_1 = L_64;
			G_B22_2 = _stringLiteral30D43FC31E773CBC77843C2FE8F811F53799D25A;
			G_B22_3 = L_61;
			goto IL_0161;
		}
	}
	{
		String_t* L_67 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B22_0 = L_67;
		G_B22_1 = G_B21_1;
		G_B22_2 = G_B21_2;
		G_B22_3 = G_B21_3;
	}

IL_0161:
	{
		String_t* L_68;
		L_68 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(G_B22_2, G_B22_1, G_B22_0, NULL);
		NullCheck(G_B22_3);
		StringBuilder_t* L_69;
		L_69 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(G_B22_3, L_68, NULL);
		int32_t L_70 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_70, 1));
	}

IL_0172:
	{
		int32_t L_71 = V_4;
		X509ChainStatusU5BU5D_tA4CB502E13E6D62B9C824B15F3193FE7EC889299* L_72 = V_3;
		NullCheck(L_72);
		if ((((int32_t)L_71) < ((int32_t)((int32_t)(((RuntimeArray*)L_72)->max_length)))))
		{
			goto IL_012e;
		}
	}

IL_017c:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_73;
		L_73 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		int32_t L_74 = ___logLevel0;
		StringBuilder_t* L_75 = V_0;
		NullCheck(L_75);
		String_t* L_76;
		L_76 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_75);
		NullCheck(L_73);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_73, L_74, L_76);
		return;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::HackRefreshMonoRootStore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_HackRefreshMonoRootStore_mCD9D4F61452052E894C5371F40435F239FAA1893 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04F5CFEB9168BD4C7EB473F62010FE08DB839A42);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral73CAD35B5824AA33EF9DF492219EFA91122342DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E209AA61CB0242B5D20722DB93E91AF3AF8809E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBFFA9137BBB453DBE9D5A7A530F72B6D48AC7F44);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC15E4FC114737DA5B26332B0D569BA6A80EC8D28);
		s_Il2CppMethodInitialized = true;
	}
	Assembly_t* V_0 = NULL;
	AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* V_1 = NULL;
	int32_t V_2 = 0;
	Type_t* V_3 = NULL;
	FieldInfo_t* V_4 = NULL;
	FieldInfo_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			AppDomain_tFF7010567CBABAEEA7BB19835234D6485E16AD5F* L_0;
			L_0 = AppDomain_get_CurrentDomain_m38D86FD149C2C62AD0FAB0159D70ECB13D841667(NULL);
			NullCheck(L_0);
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_1;
			L_1 = AppDomain_GetAssemblies_m8EE862747CADACB8CC0BDDBD8CA7DAD7BD9D9249(L_0, NULL);
			V_1 = L_1;
			V_2 = 0;
			goto IL_0089_1;
		}

IL_0012_1:
		{
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_2 = V_1;
			int32_t L_3 = V_2;
			NullCheck(L_2);
			int32_t L_4 = L_3;
			Assembly_t* L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
			V_0 = L_5;
			Assembly_t* L_6 = V_0;
			NullCheck(L_6);
			AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* L_7;
			L_7 = VirtualFuncInvoker0< AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* >::Invoke(19 /* System.Reflection.AssemblyName System.Reflection.Assembly::GetName() */, L_6);
			NullCheck(L_7);
			String_t* L_8;
			L_8 = AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline(L_7, NULL);
			NullCheck(L_8);
			bool L_9;
			L_9 = String_Equals_mCD5F35DEDCAFE51ACD4E033726FC2EF8DF7E9B4D(L_8, _stringLiteral04F5CFEB9168BD4C7EB473F62010FE08DB839A42, NULL);
			if (!L_9)
			{
				goto IL_0085_1;
			}
		}
		{
			Assembly_t* L_10 = V_0;
			NullCheck(L_10);
			Type_t* L_11;
			L_11 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(17 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_10, _stringLiteral8E209AA61CB0242B5D20722DB93E91AF3AF8809E);
			V_3 = L_11;
			Type_t* L_12 = V_3;
			if (!L_12)
			{
				goto IL_0085_1;
			}
		}
		{
			Type_t* L_13 = V_3;
			NullCheck(L_13);
			FieldInfo_t* L_14;
			L_14 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(83 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_13, _stringLiteralC15E4FC114737DA5B26332B0D569BA6A80EC8D28, ((int32_t)40));
			V_4 = L_14;
			FieldInfo_t* L_15 = V_4;
			if (!L_15)
			{
				goto IL_0061_1;
			}
		}
		{
			FieldInfo_t* L_16 = V_4;
			NullCheck(L_16);
			FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_16, NULL, NULL, NULL);
		}

IL_0061_1:
		{
			Type_t* L_17 = V_3;
			NullCheck(L_17);
			FieldInfo_t* L_18;
			L_18 = VirtualFuncInvoker2< FieldInfo_t*, String_t*, int32_t >::Invoke(83 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_17, _stringLiteralBFFA9137BBB453DBE9D5A7A530F72B6D48AC7F44, ((int32_t)40));
			V_5 = L_18;
			FieldInfo_t* L_19 = V_5;
			if (!L_19)
			{
				goto IL_0085_1;
			}
		}
		{
			FieldInfo_t* L_20 = V_5;
			NullCheck(L_20);
			FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_20, NULL, NULL, NULL);
			goto IL_00ca;
		}

IL_0085_1:
		{
			int32_t L_21 = V_2;
			V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		}

IL_0089_1:
		{
			int32_t L_22 = V_2;
			AssemblyU5BU5D_t97B7B4E3FD4DA4944A4BFAA4DC484EA7D990B339* L_23 = V_1;
			NullCheck(L_23);
			if ((((int32_t)L_22) < ((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_00ba;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0097;
		}
		throw e;
	}

CATCH_0097:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
		RuntimeObject* L_24;
		L_24 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Exception_t* L_25 = V_6;
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_25);
		String_t* L_27;
		L_27 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral443EFC2C9C57DF0CC3C5FE7354AB48DDE3A4AEAF)), L_26, NULL);
		NullCheck(L_24);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_24, 4, L_27);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ba;
	}// end catch (depth: 1)

IL_00ba:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_28;
		L_28 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_28);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_28, 3, _stringLiteral73CAD35B5824AA33EF9DF492219EFA91122342DF);
	}

IL_00ca:
	{
		return;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::UpdateRootCertificates(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts_UpdateRootCertificates_mFFF38B3B0386EB6BE1FFC23C3C17DF4917473596 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_1 = NULL;
	Exception_t* V_2 = NULL;
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* V_3 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_4 = NULL;
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* V_5 = NULL;
	X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* V_6 = NULL;
	Exception_t* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E(NULL);
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___Sync_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0109:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				bool L_4 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____attemptedWebDownload_2;
				if (!L_4)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0110;
			}

IL_0026_1:
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____attemptedWebDownload_2 = (bool)1;
				V_1 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)NULL;
			}
			try
			{// begin try (depth: 2)
				RuntimeObject* L_5 = ___app0;
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_6;
				L_6 = InstallRootCerts_DecodeWebRootCollection_m13586B5232A68A6A1A17FAC8EED5AAB9CC6ED09A(L_5, NULL);
				V_1 = L_6;
				goto IL_0051_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_003a_1;
				}
				throw e;
			}

CATCH_003a_1:
			{// begin catch(System.Exception)
				V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
				RuntimeObject* L_7;
				L_7 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
				Exception_t* L_8 = V_2;
				NullCheck(L_8);
				String_t* L_9;
				L_9 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
				NullCheck(L_7);
				InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_7, 4, L_9);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0051_1;
			}// end catch (depth: 2)

IL_0051_1:
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_10 = V_1;
				if (!L_10)
				{
					goto IL_0062_1;
				}
			}
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_11 = V_1;
				NullCheck(L_11);
				int32_t L_12;
				L_12 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_11, NULL);
				if (L_12)
				{
					goto IL_0067_1;
				}
			}

IL_0062_1:
			{
				goto IL_0110;
			}

IL_0067_1:
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				String_t* L_13 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___TrustedRoot_6;
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_14 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)il2cpp_codegen_object_new(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
				NullCheck(L_14);
				X509Store__ctor_m6020905B4602BEF14DD0B375CCEDF6AF2E21F5D0(L_14, L_13, NULL);
				V_3 = L_14;
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_15 = V_3;
				NullCheck(L_15);
				X509Store_Open_mE65F1CB5311705EB955D576295B048C1155CCED8(L_15, 1, NULL);
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_16 = V_3;
				NullCheck(L_16);
				X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_17;
				L_17 = X509Store_get_Certificates_m3605E1FE284AD55C48E874C49CD22C11828D2DA0(L_16, NULL);
				V_4 = L_17;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_18 = V_1;
				NullCheck(L_18);
				X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_19;
				L_19 = X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14(L_18, NULL);
				V_6 = L_19;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00e1_1:
					{// begin finally (depth: 2)
						{
							X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_20 = V_6;
							RuntimeObject* L_21 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							V_8 = L_21;
							if (!L_21)
							{
								goto IL_00f7_1;
							}
						}
						{
							RuntimeObject* L_22 = V_8;
							NullCheck(L_22);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_22);
						}

IL_00f7_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_00d0_2;
					}

IL_008e_2:
					{
						X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_23 = V_6;
						NullCheck(L_23);
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_24;
						L_24 = X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1(L_23, NULL);
						V_5 = L_24;
						X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_25 = V_4;
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_26 = V_5;
						NullCheck(L_25);
						bool L_27;
						L_27 = X509CertificateCollection_Contains_m8330F734C35F280905C3058096AAB7FB83676CAE(L_25, L_26, NULL);
						if (L_27)
						{
							goto IL_00d0_2;
						}
					}
					try
					{// begin try (depth: 3)
						X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_28 = V_3;
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_29 = V_5;
						NullCheck(L_28);
						X509Store_Add_m03F5A6AEB3F39CB01135094A0D0E05144C257A85(L_28, ((X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)CastclassClass((RuntimeObject*)L_29, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var)), NULL);
						goto IL_00d0_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_00b7_2;
						}
						throw e;
					}

CATCH_00b7_2:
					{// begin catch(System.Exception)
						V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
						il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
						RuntimeObject* L_30;
						L_30 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
						Exception_t* L_31 = V_7;
						NullCheck(L_31);
						String_t* L_32;
						L_32 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_31);
						NullCheck(L_30);
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_30, 4, L_32);
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_00d0_2;
					}// end catch (depth: 3)

IL_00d0_2:
					{
						X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_33 = V_6;
						NullCheck(L_33);
						bool L_34;
						L_34 = X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA(L_33, NULL);
						if (L_34)
						{
							goto IL_008e_2;
						}
					}
					{
						goto IL_00f8_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00f8_1:
			{
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_35 = V_3;
				NullCheck(L_35);
				X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_35, NULL);
				InstallRootCerts_HackRefreshMonoRootStore_mCD9D4F61452052E894C5371F40435F239FAA1893(__this, NULL);
				goto IL_0110;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0110:
	{
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Unity.InstallRootCerts::Install(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* InstallRootCerts_Install_mDFF36B0C9A79E16AEFD085E4A8C115879C851781 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m6E00E8FEEA73EB6EB86CB2ABC4924402378AB787_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mA42FA0D6B2A039CD998C80EE29321E81BE6152C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral59FB80B27DEF7725CF09D21164DD2FF891566700);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75C52D00E2170B12A0D9B5F1D5526FAF06C6ECD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CB687E80C3B3ECC73E4A0BC2E161BAC503AFEF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF4DE7F71A23C55F5FA9D4B3C43297A55C601C43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF3ABA2FC3CDA8AE31C07983D66FBAE6F967082);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC0FA5BC126B504E52E5F85B59F0E4FEE1F64090);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE9281A932225DFCE1BECBCA7BB02276037CF7FF);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_1 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_2 = NULL;
	String_t* V_3 = NULL;
	bool V_4 = false;
	String_t* V_5 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_6 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_7 = NULL;
	X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* V_8 = NULL;
	X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* V_9 = NULL;
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* V_10 = NULL;
	X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* V_11 = NULL;
	Exception_t* V_12 = NULL;
	RuntimeObject* V_13 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B9_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E(NULL);
		if (L_0)
		{
			goto IL_000c;
		}
	}
	{
		return (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)NULL;
	}

IL_000c:
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___Sync_0;
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0219:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* L_4 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____installedRoots_1;
				RuntimeObject* L_5 = ___app0;
				NullCheck(L_4);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m6E00E8FEEA73EB6EB86CB2ABC4924402378AB787(L_4, L_5, (&V_1), Dictionary_2_TryGetValue_m6E00E8FEEA73EB6EB86CB2ABC4924402378AB787_RuntimeMethod_var);
				if (!L_6)
				{
					goto IL_0031_1;
				}
			}
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_7 = V_1;
				V_2 = L_7;
				goto IL_0220;
			}

IL_0031_1:
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_8 = (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)il2cpp_codegen_object_new(X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				X509CertificateCollection__ctor_m237A27DC157785FBC50EBAF3562AAF0907BF97EB(L_8, NULL);
				V_1 = L_8;
				String_t* L_9;
				L_9 = Environment_GetFolderPath_m8D283450E7FCF2F2CAFFF157D599C3EBA212B58C(((int32_t)26), NULL);
				il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
				String_t* L_10;
				L_10 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_9, _stringLiteral59FB80B27DEF7725CF09D21164DD2FF891566700, NULL);
				String_t* L_11;
				L_11 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_10, _stringLiteralDE9281A932225DFCE1BECBCA7BB02276037CF7FF, NULL);
				V_3 = L_11;
				V_4 = (bool)0;
			}
			try
			{// begin try (depth: 2)
				{
					String_t* L_12 = V_3;
					bool L_13;
					L_13 = Directory_Exists_m3D125E9E88C291CF11113444F961A64DD83AE1C7(L_12, NULL);
					if (L_13)
					{
						goto IL_006f_2;
					}
				}
				{
					String_t* L_14 = V_3;
					DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_15;
					L_15 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_14, NULL);
					G_B9_0 = ((((int32_t)((((RuntimeObject*)(DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2*)L_15) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
					goto IL_0070_2;
				}

IL_006f_2:
				{
					G_B9_0 = 1;
				}

IL_0070_2:
				{
					V_4 = (bool)G_B9_0;
					goto IL_007d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0077_1;
				}
				throw e;
			}

CATCH_0077_1:
			{// begin catch(System.Exception)
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_007d_1;
			}// end catch (depth: 2)

IL_007d_1:
			{
				bool L_16 = V_4;
				if (L_16)
				{
					goto IL_00ca_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
				RuntimeObject* L_17;
				L_17 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
				RuntimeObject* L_18 = ___app0;
				NullCheck(L_17);
				String_t* L_19;
				L_19 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(0 /* System.String Firebase.Platform.IAppConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_17, L_18);
				V_5 = L_19;
				String_t* L_20 = V_5;
				bool L_21;
				L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
				if (L_21)
				{
					goto IL_00ca_1;
				}
			}
			{
				il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
				RuntimeObject* L_22;
				L_22 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
				String_t* L_23 = V_5;
				String_t* L_24 = V_3;
				String_t* L_25;
				L_25 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralDAF3ABA2FC3CDA8AE31C07983D66FBAE6F967082, L_23, L_24, NULL);
				NullCheck(L_22);
				InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_22, 1, L_25);
				String_t* L_26 = V_5;
				Environment_SetEnvironmentVariable_m9CE31B38A224F3BE813E4790F7726BDE0F53324A(_stringLiteralBF4DE7F71A23C55F5FA9D4B3C43297A55C601C43, L_26, NULL);
				String_t* L_27 = V_5;
				V_3 = L_27;
				InstallRootCerts_HackRefreshMonoRootStore_mCD9D4F61452052E894C5371F40435F239FAA1893(__this, NULL);
			}

IL_00ca_1:
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_28;
				L_28 = InstallRootCerts_DecodeDefaultCollection_mFCA45FEDAEB255CF50CEB7107EB0739D4714CBCC(NULL);
				V_6 = L_28;
				RuntimeObject* L_29 = ___app0;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_30;
				L_30 = InstallRootCerts_DecodeCollection_m0E0481428138EB9B8A721F3CAD66A95DCBDBCE6A(L_29, NULL);
				V_7 = L_30;
				RuntimeObject* L_31 = ___app0;
				NullCheck(L_31);
				String_t* L_32;
				L_32 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* System.String Firebase.Platform.IFirebaseAppPlatform::get_Name() */, IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var, L_31);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				RuntimeObject* L_33;
				L_33 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
				NullCheck(L_33);
				String_t* L_34;
				L_34 = InterfaceFuncInvoker0< String_t* >::Invoke(3 /* System.String Firebase.Platform.IFirebaseAppUtils::GetDefaultInstanceName() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_33);
				bool L_35;
				L_35 = String_Equals_m3354EFE6393BED8DD6E18F69BEA131AAADCC622D(L_32, L_34, NULL);
				if (!L_35)
				{
					goto IL_0104_1;
				}
			}
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_36 = V_7;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_37 = V_6;
				NullCheck(L_36);
				X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB(L_36, L_37, NULL);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_38 = V_7;
				V_1 = L_38;
				goto IL_010c_1;
			}

IL_0104_1:
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_39 = V_1;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_40 = V_6;
				NullCheck(L_39);
				X509CertificateCollection_AddRange_m45914B11721824E8BE7FC2B2FC4ADD28F2C45EDB(L_39, L_40, NULL);
			}

IL_010c_1:
			{
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* L_41 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____installedRoots_1;
				RuntimeObject* L_42 = ___app0;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_43 = V_7;
				NullCheck(L_41);
				Dictionary_2_set_Item_mA42FA0D6B2A039CD998C80EE29321E81BE6152C1(L_41, L_42, L_43, Dictionary_2_set_Item_mA42FA0D6B2A039CD998C80EE29321E81BE6152C1_RuntimeMethod_var);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_44 = V_1;
				NullCheck(L_44);
				int32_t L_45;
				L_45 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_44, NULL);
				if (L_45)
				{
					goto IL_012b_1;
				}
			}
			{
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_46 = V_1;
				V_2 = L_46;
				goto IL_0220;
			}

IL_012b_1:
			{
				String_t* L_47 = V_3;
				il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
				String_t* L_48 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___TrustedRoot_6;
				il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
				String_t* L_49;
				L_49 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_47, L_48, NULL);
				InstallRootCerts_InstallDefaultCRLs_m695F98F45EBDFFF3CEB490E6A9704DE0D4D91D00(_stringLiteral9CB687E80C3B3ECC73E4A0BC2E161BAC503AFEF8, L_49, NULL);
				String_t* L_50 = V_3;
				String_t* L_51 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___IntermediateCA_7;
				String_t* L_52;
				L_52 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_50, L_51, NULL);
				InstallRootCerts_InstallDefaultCRLs_m695F98F45EBDFFF3CEB490E6A9704DE0D4D91D00(_stringLiteral75C52D00E2170B12A0D9B5F1D5526FAF06C6ECD7, L_52, NULL);
				il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
				RuntimeObject* L_53;
				L_53 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_54 = V_7;
				NullCheck(L_54);
				int32_t L_55;
				L_55 = CollectionBase_get_Count_m2BD48A6DDD376554A7956E4B26EC27F9F1E43C72(L_54, NULL);
				int32_t L_56 = L_55;
				RuntimeObject* L_57 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_56);
				String_t* L_58;
				L_58 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralDC0FA5BC126B504E52E5F85B59F0E4FEE1F64090, L_57, NULL);
				NullCheck(L_53);
				InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_53, 1, L_58);
				String_t* L_59 = ((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___TrustedRoot_6;
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_60 = (X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6*)il2cpp_codegen_object_new(X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6_il2cpp_TypeInfo_var);
				NullCheck(L_60);
				X509Store__ctor_m6020905B4602BEF14DD0B375CCEDF6AF2E21F5D0(L_60, L_59, NULL);
				V_8 = L_60;
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_61 = V_8;
				NullCheck(L_61);
				X509Store_Open_mE65F1CB5311705EB955D576295B048C1155CCED8(L_61, 1, NULL);
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_62 = V_8;
				NullCheck(L_62);
				X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* L_63;
				L_63 = X509Store_get_Certificates_m3605E1FE284AD55C48E874C49CD22C11828D2DA0(L_62, NULL);
				V_9 = L_63;
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_64 = V_1;
				NullCheck(L_64);
				X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_65;
				L_65 = X509CertificateCollection_GetEnumerator_mBD26239EE292204789D87CA73DBA5C898C2F4F14(L_64, NULL);
				V_11 = L_65;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_01f4_1:
					{// begin finally (depth: 2)
						{
							X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_66 = V_11;
							RuntimeObject* L_67 = ((RuntimeObject*)IsInst((RuntimeObject*)L_66, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
							V_13 = L_67;
							if (!L_67)
							{
								goto IL_020a_1;
							}
						}
						{
							RuntimeObject* L_68 = V_13;
							NullCheck(L_68);
							InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_68);
						}

IL_020a_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_01e3_2;
					}

IL_01a0_2:
					{
						X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_69 = V_11;
						NullCheck(L_69);
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_70;
						L_70 = X509CertificateEnumerator_get_Current_mF256C5D7194A99B5C567F6E62806C153DA8864F1(L_69, NULL);
						V_10 = L_70;
						X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_71 = V_9;
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_72 = V_10;
						NullCheck(L_71);
						bool L_73;
						L_73 = X509CertificateCollection_Contains_m8330F734C35F280905C3058096AAB7FB83676CAE(L_71, L_72, NULL);
						if (L_73)
						{
							goto IL_01e3_2;
						}
					}
					try
					{// begin try (depth: 3)
						X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_74 = V_8;
						X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_75 = V_10;
						NullCheck(L_74);
						X509Store_Add_m03F5A6AEB3F39CB01135094A0D0E05144C257A85(L_74, ((X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)CastclassClass((RuntimeObject*)L_75, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var)), NULL);
						goto IL_01e3_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
						{
							IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
							goto CATCH_01ca_2;
						}
						throw e;
					}

CATCH_01ca_2:
					{// begin catch(System.Exception)
						V_12 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
						il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var)));
						RuntimeObject* L_76;
						L_76 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
						Exception_t* L_77 = V_12;
						NullCheck(L_77);
						String_t* L_78;
						L_78 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_77);
						NullCheck(L_76);
						InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var)), L_76, 4, L_78);
						IL2CPP_POP_ACTIVE_EXCEPTION();
						goto IL_01e3_2;
					}// end catch (depth: 3)

IL_01e3_2:
					{
						X509CertificateEnumerator_t6629E2BB0FB5D92B2EB502312B764686BAFDF0D9* L_79 = V_11;
						NullCheck(L_79);
						bool L_80;
						L_80 = X509CertificateEnumerator_MoveNext_m2DCBF7B544E0E410B90DF3FD96B473B11A37E8DA(L_79, NULL);
						if (L_80)
						{
							goto IL_01a0_2;
						}
					}
					{
						goto IL_020b_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_020b_1:
			{
				X509Store_t19E126FCB4003D01A2DE6CE2C35E9E71E97D08E6* L_81 = V_8;
				NullCheck(L_81);
				X509Store_Close_mE444AB5FE15C355E4EF9369E7EB5F78F345320F0(L_81, NULL);
				X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_82 = V_1;
				V_2 = L_82;
				goto IL_0220;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0220:
	{
		X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* L_83 = V_2;
		return L_83;
	}
}
// System.Boolean Firebase.Unity.InstallRootCerts::MacOSXWorkaroundRemoteCertificateValidationCallback(System.Object,System.Security.Cryptography.X509Certificates.X509Certificate,System.Security.Cryptography.X509Certificates.X509Chain,System.Net.Security.SslPolicyErrors)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InstallRootCerts_MacOSXWorkaroundRemoteCertificateValidationCallback_mA275F31B4A54215957BBA6430AC4812E23C7EDA6 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, RuntimeObject* ___sender0, X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___certificate1, X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* ___chain2, int32_t ___sslPolicyErrors3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		int32_t L_0 = ___sslPolicyErrors3;
		if ((!(((uint32_t)L_0) == ((uint32_t)4))))
		{
			goto IL_0017;
		}
	}
	{
		X509Chain_t2E7F88A4C97CAB82AF938F13A11354A0475469E5* L_1 = ___chain2;
		X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* L_2 = ___certificate1;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_3 = (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)il2cpp_codegen_object_new(X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		X509Certificate2__ctor_m2C7F482BFC1A0BAAABDD8BE9BBB2026DA5F3E600(L_3, L_2, NULL);
		NullCheck(L_1);
		bool L_4;
		L_4 = X509Chain_Build_mF368D6BAE5925C8311B41BFBA08C5D91277C67E5(L_1, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		return L_5;
	}

IL_0017:
	{
		int32_t L_6 = ___sslPolicyErrors3;
		return (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}
}
// System.Net.Security.RemoteCertificateValidationCallback Firebase.Unity.InstallRootCerts::GetRemoteCertificateValidationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* InstallRootCerts_GetRemoteCertificateValidationCallback_m603D2488DFA29FF050A5A39E1A5E037A79E58CA6 (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_MacOSXWorkaroundRemoteCertificateValidationCallback_mA275F31B4A54215957BBA6430AC4812E23C7EDA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E(NULL);
		if (!L_0)
		{
			goto IL_0022;
		}
	}
	{
		bool L_1 = __this->____needsCertificateWorkaround_4;
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* L_2 = (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)il2cpp_codegen_object_new(RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		RemoteCertificateValidationCallback__ctor_mC5C0650D4E5D29475BDBDA5B43FEA44DB0DBF367(L_2, __this, (intptr_t)((void*)InstallRootCerts_MacOSXWorkaroundRemoteCertificateValidationCallback_mA275F31B4A54215957BBA6430AC4812E23C7EDA6_RuntimeMethod_var), NULL);
		return L_2;
	}

IL_0022:
	{
		return (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)NULL;
	}
}
// System.Void Firebase.Unity.InstallRootCerts::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InstallRootCerts__cctor_m3DB7BBA9BA95CA97C6934523A432B4AB754FC874 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mB8D02E815E321CE6194EFCB9D3DC80E2265A4190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral036A39F166AA79B6CD7A7131A6D0057339BA2FE4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___Sync_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___Sync_0), (void*)L_0);
		Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB* L_1 = (Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB*)il2cpp_codegen_object_new(Dictionary_2_tAAEE185155752FFBFF3DAD2E60BA4B58EB2638FB_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_mB8D02E815E321CE6194EFCB9D3DC80E2265A4190(L_1, Dictionary_2__ctor_mB8D02E815E321CE6194EFCB9D3DC80E2265A4190_RuntimeMethod_var);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____installedRoots_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____installedRoots_1), (void*)L_1);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3 = (InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->____instance_3), (void*)(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC*)NULL);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___TrustedRoot_6 = _stringLiteral036A39F166AA79B6CD7A7131A6D0057339BA2FE4;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___TrustedRoot_6), (void*)_stringLiteral036A39F166AA79B6CD7A7131A6D0057339BA2FE4);
		((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___IntermediateCA_7 = _stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514;
		Il2CppCodeGenWriteBarrier((void**)(&((InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_StaticFields*)il2cpp_codegen_static_fields_for(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var))->___IntermediateCA_7), (void*)_stringLiteral2F874A32C0360779E461A5ED6063EF8E6729A514);
		return;
	}
}
// <>__AnonType0`3<UnityEngine.RuntimePlatform,System.Boolean,System.Boolean> Firebase.Unity.InstallRootCerts::<InstallRootCerts>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* InstallRootCerts_U3CInstallRootCertsU3Em__0_m81ED117CB5406924CAEC294323883EEC5321230D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3E__AnonType0_3__ctor_m755DA4C0A42B9F88B84C3D6E2AB2F7C05932A2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		bool L_1;
		L_1 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = InstallRootCerts_get_InstallationRequired_m6567FE2DCA65FAF2761CD66F5BB3C9F4527BD75E(NULL);
		U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3* L_3 = (U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3*)il2cpp_codegen_object_new(U3CU3E__AnonType0_3_tAC523B605079A94085984352F1725FBFF25EF6F3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		U3CU3E__AnonType0_3__ctor_m755DA4C0A42B9F88B84C3D6E2AB2F7C05932A2AC(L_3, L_0, L_1, L_2, U3CU3E__AnonType0_3__ctor_m755DA4C0A42B9F88B84C3D6E2AB2F7C05932A2AC_RuntimeMethod_var);
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
// System.Void Firebase.Platform.FirebaseEditorDispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher__ctor_m393C0846188EFFC3FDAB3896A9B1FE9BCF196032 (FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Type Firebase.Platform.FirebaseEditorDispatcher::get_EditorApplicationType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral896A2A117718A23135B6923C80A00C014390CF99);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_0;
		L_0 = il2cpp_codegen_get_type(_stringLiteral896A2A117718A23135B6923C80A00C014390CF99, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8_RuntimeMethod_var);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t* L_3;
		L_3 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_2, _stringLiteral5A00A52D746A79D3B1B788CFBF70D40C304302E1, NULL);
		V_1 = L_3;
		PropertyInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Boolean Firebase.Platform.FirebaseEditorDispatcher::get_EditorIsPlayingOrWillChangePlaymode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	PropertyInfo_t* V_1 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		PropertyInfo_t* L_3;
		L_3 = Type_GetProperty_mD183124FC8A89121E8368058B327A7750B14281D(L_2, _stringLiteral7F900F58C3A67CA9C0902E5993677B7671078EDE, NULL);
		V_1 = L_3;
		PropertyInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t* L_5 = V_1;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* >::Invoke(19 /* System.Object System.Reflection.PropertyInfo::GetValue(System.Object,System.Object[]) */, L_5, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL);
		return ((*(bool*)((bool*)(bool*)UnBox(L_6, Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_il2cpp_TypeInfo_var))));
	}

IL_002c:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StartEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* G_B3_0 = NULL;
	FieldInfo_t* G_B2_0 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0), (void*)L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_0;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(G_B3_0, L_6, NULL, (bool)1, _stringLiteral3433AED96C62C86E15C34BD631F69FC3120A45E7, NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::StopEditorUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	FieldInfo_t* G_B3_0 = NULL;
	FieldInfo_t* G_B2_0 = NULL;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		FieldInfo_t* L_3;
		L_3 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_2, _stringLiteralA4F2DAAB1E148143AA39D4D0EC6AE18B58AC0AF6, NULL);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_4 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1;
		G_B2_0 = L_3;
		if (L_4)
		{
			G_B3_0 = L_3;
			goto IL_002f;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_5, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1), (void*)L_5);
		G_B3_0 = G_B2_0;
	}

IL_002f:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache1_1;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(G_B3_0, L_6, NULL, (bool)0, (String_t*)NULL, NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Update_m3B55BE984C3E80B021E6D488DA46229D2CAA4B38 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_0);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::ListenToPlayState(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340 (bool ___start0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28C266F303F178CE0931272538E30F328A704472);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69A7A27A97142E232EA28BA2557E507697865243);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	EventInfo_t* V_1 = NULL;
	Type_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	Delegate_t* V_4 = NULL;
	FieldInfo_t* V_5 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_6 = NULL;
	bool V_7 = false;
	{
		Type_t* L_0;
		L_0 = FirebaseEditorDispatcher_get_EditorApplicationType_mFBBC9F44140E8E4E34A576A6B0C8889891288AA8(NULL);
		V_0 = L_0;
		Type_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_00c0;
		}
	}
	{
		Type_t* L_2 = V_0;
		NullCheck(L_2);
		EventInfo_t* L_3;
		L_3 = Type_GetEvent_mB4D71EF747D967D102846CB4FADA5DA0291E6A83(L_2, _stringLiteral69A7A27A97142E232EA28BA2557E507697865243, NULL);
		V_1 = L_3;
		EventInfo_t* L_4 = V_1;
		if (!L_4)
		{
			goto IL_0084;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_5;
		L_5 = il2cpp_codegen_get_type(_stringLiteral28C266F303F178CE0931272538E30F328A704472, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340_RuntimeMethod_var);
		V_2 = L_5;
		Type_t* L_6 = V_2;
		if (!L_6)
		{
			goto IL_0084;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_7, NULL);
		NullCheck(L_8);
		MethodInfo_t* L_9;
		L_9 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_8, _stringLiteralF906AF52934523A28A29533224E8CEEDAC1486F2, ((int32_t)40), NULL);
		V_3 = L_9;
		MethodInfo_t* L_10 = V_3;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_11 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_12 = L_11;
		Type_t* L_13 = V_2;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_13);
		NullCheck(L_10);
		MethodInfo_t* L_14;
		L_14 = VirtualFuncInvoker1< MethodInfo_t*, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* >::Invoke(40 /* System.Reflection.MethodInfo System.Reflection.MethodInfo::MakeGenericMethod(System.Type[]) */, L_10, L_12);
		V_3 = L_14;
		EventInfo_t* L_15 = V_1;
		NullCheck(L_15);
		Type_t* L_16;
		L_16 = VirtualFuncInvoker0< Type_t* >::Invoke(19 /* System.Type System.Reflection.EventInfo::get_EventHandlerType() */, L_15);
		MethodInfo_t* L_17 = V_3;
		Delegate_t* L_18;
		L_18 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_16, NULL, L_17, NULL);
		V_4 = L_18;
		bool L_19 = ___start0;
		if (!L_19)
		{
			goto IL_007a;
		}
	}
	{
		EventInfo_t* L_20 = V_1;
		Delegate_t* L_21 = V_4;
		NullCheck(L_20);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(21 /* System.Void System.Reflection.EventInfo::AddEventHandler(System.Object,System.Delegate) */, L_20, NULL, L_21);
		goto IL_0083;
	}

IL_007a:
	{
		EventInfo_t* L_22 = V_1;
		Delegate_t* L_23 = V_4;
		NullCheck(L_22);
		VirtualActionInvoker2< RuntimeObject*, Delegate_t* >::Invoke(20 /* System.Void System.Reflection.EventInfo::RemoveEventHandler(System.Object,System.Delegate) */, L_22, NULL, L_23);
	}

IL_0083:
	{
		return;
	}

IL_0084:
	{
		Type_t* L_24 = V_0;
		NullCheck(L_24);
		FieldInfo_t* L_25;
		L_25 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_24, _stringLiteral174B9BBC1D59366161BECBD73C2048B5A97F4837, NULL);
		V_5 = L_25;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2;
		if (L_26)
		{
			goto IL_00a9;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_27, NULL, (intptr_t)((void*)FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48_RuntimeMethod_var), NULL);
		((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2), (void*)L_27);
	}

IL_00a9:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_28 = ((FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseEditorDispatcher_tC36AA65B08B38AB2721AADB81D51BA16CE86239C_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache2_2;
		V_6 = L_28;
		bool L_29 = ___start0;
		V_7 = L_29;
		FieldInfo_t* L_30 = V_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_31 = V_6;
		bool L_32 = V_7;
		FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3(L_30, L_31, NULL, L_32, (String_t*)NULL, NULL);
	}

IL_00c0:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::PlayModeStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_PlayModeStateChanged_m8598B90E768E7F3792A8F5621A642B11B6D92D48 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_0, NULL);
		if (L_1)
		{
			goto IL_0038;
		}
	}
	{
		bool L_2;
		L_2 = FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624(NULL);
		if (!L_2)
		{
			goto IL_0038;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3;
		L_3 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_3);
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(L_3, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4;
		L_4 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_4);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_4, (bool)1, NULL);
		goto IL_006b;
	}

IL_0038:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_5;
		L_5 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_5, NULL);
		if (!L_6)
		{
			goto IL_006b;
		}
	}
	{
		bool L_7;
		L_7 = FirebaseEditorDispatcher_get_EditorIsPlayingOrWillChangePlaymode_mDC0D88CA2E26A59A8DA923E16A729B8F3894F432(NULL);
		if (L_7)
		{
			goto IL_006b;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_8;
		L_8 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_8);
		FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451(L_8, NULL);
		FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9(NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_9;
		L_9 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		NullCheck(L_9);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(L_9, (bool)0, NULL);
	}

IL_006b:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::AddRemoveCallbackToField(System.Reflection.FieldInfo,System.Action,System.Object,System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_AddRemoveCallbackToField_mB98801F37829B2B0945EAF535495BF5654F47CB3 (FieldInfo_t* ___eventField0, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___callback1, RuntimeObject* ___target2, bool ___add3, String_t* ___errorMessage4, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Delegate_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Delegate_t* V_0 = NULL;
	Delegate_t* V_1 = NULL;
	Delegate_t* V_2 = NULL;
	{
		FieldInfo_t* L_0 = ___eventField0;
		if (!L_0)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t* L_1 = ___eventField0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_1, NULL);
		V_0 = ((Delegate_t*)IsInstClass((RuntimeObject*)L_2, Delegate_t_il2cpp_TypeInfo_var));
		bool L_3 = ___add3;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		FieldInfo_t* L_4 = ___eventField0;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_4);
		RuntimeObject* L_6 = ___target2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = ___callback1;
		NullCheck(L_7);
		MethodInfo_t* L_8;
		L_8 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_7, NULL);
		Delegate_t* L_9;
		L_9 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_5, L_6, L_8, NULL);
		V_1 = L_9;
		Delegate_t* L_10 = V_0;
		if (!L_10)
		{
			goto IL_0045;
		}
	}
	{
		FieldInfo_t* L_11 = ___eventField0;
		Delegate_t* L_12 = V_0;
		Delegate_t* L_13 = V_1;
		Delegate_t* L_14;
		L_14 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_12, L_13, NULL);
		NullCheck(L_11);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_11, NULL, L_14, NULL);
		goto IL_004d;
	}

IL_0045:
	{
		FieldInfo_t* L_15 = ___eventField0;
		Delegate_t* L_16 = V_1;
		NullCheck(L_15);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_15, NULL, L_16, NULL);
	}

IL_004d:
	{
		return;
	}

IL_004e:
	{
		Delegate_t* L_17 = V_0;
		if (!L_17)
		{
			goto IL_0076;
		}
	}
	{
		FieldInfo_t* L_18 = ___eventField0;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(16 /* System.Type System.Reflection.FieldInfo::get_FieldType() */, L_18);
		RuntimeObject* L_20 = ___target2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_21 = ___callback1;
		NullCheck(L_21);
		MethodInfo_t* L_22;
		L_22 = Delegate_get_Method_mB684A7525653DFE0EFC35E58449E1FC8E2A9F019(L_21, NULL);
		Delegate_t* L_23;
		L_23 = Delegate_CreateDelegate_mE2117ED279628E4E63D357AFAB3653DD909CB2D7(L_19, L_20, L_22, NULL);
		V_2 = L_23;
		FieldInfo_t* L_24 = ___eventField0;
		Delegate_t* L_25 = V_0;
		Delegate_t* L_26 = V_2;
		Delegate_t* L_27;
		L_27 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_25, L_26, NULL);
		NullCheck(L_24);
		FieldInfo_SetValue_mD8C0DA3A1A0CFF073F971622BBDBAAB6688B4B6C(L_24, NULL, L_27, NULL);
		return;
	}

IL_0076:
	{
		String_t* L_28 = ___errorMessage4;
		bool L_29;
		L_29 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_28, NULL);
		if (L_29)
		{
			goto IL_008a;
		}
	}
	{
		String_t* L_30 = ___errorMessage4;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_30, NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseEditorDispatcher::Terminate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C (bool ___isPlayMode0, const RuntimeMethod* method) 
{
	{
		FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340((bool)0, NULL);
		bool L_0 = ___isPlayMode0;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		FirebaseEditorDispatcher_StopEditorUpdate_m9588295D3A7A49CA6DA4E8D838245967DD0F7DDC(NULL);
	}

IL_0011:
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
// System.Void Firebase.Platform.FirebaseHandler::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__cctor_mB834BEBC4967AA6D7BECB601F72F86D9C4C21BEC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0;
		L_0 = FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52_inline(NULL);
		FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		bool L_0;
		L_0 = Application_get_isEditor_mEAC51E3ACE6DCE438087FB14BD75A3C219D354D0(NULL);
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		bool L_1;
		L_1 = FirebaseEditorDispatcher_get_EditorIsPlaying_mD79BA67FB01EE951514BBA6B0137A707DE923624(NULL);
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, L_1, NULL);
		FirebaseEditorDispatcher_ListenToPlayState_m118546E161DB612804CDABE45DCB919297528340((bool)1, NULL);
		goto IL_002d;
	}

IL_0026:
	{
		FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline(__this, (bool)1, NULL);
	}

IL_002d:
	{
		bool L_2;
		L_2 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(__this, NULL);
		if (!L_2)
		{
			goto IL_0043;
		}
	}
	{
		FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246(__this, NULL);
		goto IL_0048;
	}

IL_0043:
	{
		FirebaseEditorDispatcher_StartEditorUpdate_mA98611A34FD3DB10A0E61CA4CCB33863B16877E9(NULL);
	}

IL_0048:
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppUtils Firebase.Platform.FirebaseHandler::get_AppUtils()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_AppUtils(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.Int32 Firebase.Platform.FirebaseHandler::get_TickCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseHandler_get_TickCount_m767D64257A083D3EA0176DEBBE86ACB52D2171D7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		return L_0;
	}
}
// Firebase.Dispatcher Firebase.Platform.FirebaseHandler::get_ThreadDispatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_ThreadDispatcher(Firebase.Dispatcher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::get_IsPlayMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::set_IsPlayMode(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StartMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StartMonoBehaviour_m27FB410A511845F73EE29218BDEA9CEEAB1D5246 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		if (L_0)
		{
			goto IL_0010;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)__this);
	}

IL_0010:
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_1, _stringLiteral60FB63D7E83627D00092C51BE9FCDAAE7EC01CF5, NULL);
		V_0 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		NullCheck(L_2);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_3;
		L_3 = GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A(L_2, GameObject_AddComponent_TisFirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72_m28C6532E1F1B457178DAAA19892CC93D9FDFF73A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_5, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::StopMonoBehaviour()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CStopMonoBehaviourU3Em__0_mA5A0E400BF06AEE72A390D7981C479A9567EC159_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0033;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8;
		if (L_2)
		{
			goto IL_0028;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_3 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_3, NULL, (intptr_t)((void*)FirebaseHandler_U3CStopMonoBehaviourU3Em__0_mA5A0E400BF06AEE72A390D7981C479A9567EC159_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8), (void*)L_3);
	}

IL_0028:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_8;
		bool L_5;
		L_5 = FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4(L_4, FirebaseHandler_RunOnMainThread_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mAE5FCABDB6F0D5495736534F2072751B25E840B4_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::IsMainThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_IsMainThread_m08E16B823C1D5BC34C0810802660E29D98F0F5CB (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		if (!L_0)
		{
			goto IL_0015;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_1;
		L_1 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D(L_1, NULL);
		return L_2;
	}

IL_0015:
	{
		return (bool)0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::add_Updated(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_Updated_mD82DB01DF3C7F417BA8C651B9110536C40C83733 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___Updated_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::remove_Updated(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_remove_Updated_mA29976610BB4ADFCBD7B35C89DC05CB7E830C7B9 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_0 = NULL;
	EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* V_1 = NULL;
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF** L_2 = (&__this->___Updated_6);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_3 = V_1;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_6 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*>(L_2, ((EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)Castclass((RuntimeObject*)L_5, EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_8 = V_0;
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_8) == ((RuntimeObject*)(EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::add_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_add_ApplicationFocusChanged_mAF28459B6FD593725A9391EAB1A8C679766F8CC1 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_0 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_1 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E** L_2 = (&__this->___ApplicationFocusChanged_7);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_3 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_6 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*>(L_2, ((EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)Castclass((RuntimeObject*)L_5, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_8 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_8) == ((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::remove_ApplicationFocusChanged(System.EventHandler`1<Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_remove_ApplicationFocusChanged_m4ECEB5BD050757A5C1BC7E17D18A778C6943344C (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_0 = NULL;
	EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* V_1 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_7;
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E** L_2 = (&__this->___ApplicationFocusChanged_7);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_3 = V_1;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_4 = ___value0;
		Delegate_t* L_5;
		L_5 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_3, L_4, NULL);
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_6 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_7;
		L_7 = InterlockedCompareExchangeImpl<EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*>(L_2, ((EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)Castclass((RuntimeObject*)L_5, EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_8 = V_0;
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_8) == ((RuntimeObject*)(EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E*)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseHandler::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::CreatePartialOnMainThread(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5 (RuntimeObject* ___appUtils0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* V_0 = NULL;
	{
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_0 = (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE*)il2cpp_codegen_object_new(U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46(L_0, NULL);
		V_0 = L_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_1 = V_0;
		RuntimeObject* L_2 = ___appUtils0;
		NullCheck(L_1);
		L_1->___appUtils_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___appUtils_0), (void*)L_2);
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_3 = V_0;
		NullCheck(L_3);
		RuntimeObject* L_4 = L_3->___appUtils_0;
		U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* L_5 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_6, L_5, (intptr_t)((void*)U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		InterfaceActionInvoker1< Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.Void Firebase.Platform.IFirebaseAppUtils::TranslateDllNotFoundException(System.Action) */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_4, L_6);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Create(Firebase.Platform.IFirebaseAppUtils)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Create_mDC243F751CBDC835EDF2388C04C1A48FD9238FE9 (RuntimeObject* ___appUtils0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___appUtils0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_CreatePartialOnMainThread_mA40B80D6BC5D9D1DCEAB433495451ECC436027C5(L_0, NULL);
		UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06(NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0;
		L_0 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
		NullCheck(L_0);
		Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE(L_0, NULL);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void Firebase.Platform.IFirebaseAppUtils::PollCallbacks() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_1);
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_2 = __this->___Updated_6;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_3, NULL);
	}

IL_0030:
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		int32_t L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2;
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___tickCount_2 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* V_0 = NULL;
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_0 = __this->___ApplicationFocusChanged_7;
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		EventHandler_1_t9A81151178F9BE57BCBDEC74D73D78671B00EC6E* L_1 = __this->___ApplicationFocusChanged_7;
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_2 = (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD*)il2cpp_codegen_object_new(ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE(L_2, NULL);
		V_0 = L_2;
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_3 = V_0;
		bool L_4 = ___hasFocus0;
		NullCheck(L_3);
		ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline(L_3, L_4, NULL);
		ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* L_5 = V_0;
		NullCheck(L_1);
		EventHandler_1_Invoke_mAB03BE8CA671F3AB54D452480618930A1CADEE09_inline(L_1, NULL, L_5, NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::Terminate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_Terminate_mC220D81AC451121CE4A9EF309F3D23C203290A6D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		if (!L_0)
		{
			goto IL_0023;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline(L_1, NULL);
		FirebaseEditorDispatcher_Terminate_m60BF7BDCEFBD8E25FFB41DEE28CF787B4B9B1E9C(L_2, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		NullCheck(L_3);
		FirebaseHandler_StopMonoBehaviour_m6D5F532432F18CE6837F27A0FA9D586F55947451(L_3, NULL);
	}

IL_0023:
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::OnMonoBehaviourDestroyed(Firebase.Platform.FirebaseMonoBehaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* ___behaviour0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ___behaviour0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_1 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0016;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0 = (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0), (void*)(FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72*)NULL);
	}

IL_0016:
	{
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler::<StopMonoBehaviour>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHandler_U3CStopMonoBehaviourU3Em__0_mA5A0E400BF06AEE72A390D7981C479A9567EC159 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1(NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* L_2 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseMonoBehaviour_0;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_3, NULL);
	}

IL_0024:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseHandler::<Update>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHandler_U3CUpdateU3Em__1_m5E9FD5D8FC63F7B6B73F590E633BB07CE39710B1 (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		EventHandler_1_tF2D41B212D800E7E7D00F9BDEA817E57153988BF* L_0 = __this->___Updated_6;
		NullCheck(L_0);
		EventHandler_1_Invoke_m60078FEF33DC40DA542580DB35336F91D04360C2_inline(L_0, __this, (EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377*)NULL, NULL);
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
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs__ctor_m839E74DC0C6B72AB8A768A2D23F32ECE4A3B39AE (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(EventArgs_t37273F03EAC87217701DD431B190FBD84AD7C377_il2cpp_TypeInfo_var);
		EventArgs__ctor_mC6F9412D03203ADEF854117542C8EBF61624C8C3(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::get_HasFocus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ApplicationFocusChangedEventArgs_get_HasFocus_mB6FF8C7C84ED1B7DC25AAD0AABFF8C86D96BA3CF (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CHasFocusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/ApplicationFocusChangedEventArgs::set_HasFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107 (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
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
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0__ctor_mB6F31B16A48F50779D897ECE03524D288058DF46 (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHandler/<CreatePartialOnMainThread>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_U3CU3Em__0_m75CC84232DD114BBF6CACE54B45DB3668274556C (U3CCreatePartialOnMainThreadU3Ec__AnonStorey0_t910286566361BA0521D1C41AAA1B4F473AD5B2FE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		V_0 = L_1;
		RuntimeObject* L_2 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_2, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004e:
			{// begin finally (depth: 1)
				RuntimeObject* L_3 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_4 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
				if (!L_4)
				{
					goto IL_0020_1;
				}
			}
			{
				goto IL_0055;
			}

IL_0020_1:
			{
				RuntimeObject* L_5 = __this->___appUtils_0;
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline(L_5, NULL);
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_6;
				L_6 = FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline(NULL);
				if (L_6)
				{
					goto IL_003f_1;
				}
			}
			{
				Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_7 = (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6*)il2cpp_codegen_object_new(Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A(L_7, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline(L_7, NULL);
			}

IL_003f_1:
			{
				FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_8 = (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586*)il2cpp_codegen_object_new(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				NullCheck(L_8);
				FirebaseHandler__ctor_m528A373696F4853B62E70CA8C61E74DD582E3442(L_8, NULL);
				il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
				((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5 = L_8;
				Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5), (void*)L_8);
				goto IL_0055;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0055:
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
// System.Void Firebase.Platform.FirebaseLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__ctor_m6AEAF49EDF57271E2BFBC238EACBCDA92CFB000B (FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::IsStackTraceLogTypeIncompatibleWithNativeLogs(UnityEngine.StackTraceLogType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B (int32_t ___logType0, const RuntimeMethod* method) 
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___logType0;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		int32_t L_1 = ___logType0;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000c:
	{
		G_B3_0 = 1;
	}

IL_000d:
	{
		return (bool)((((int32_t)G_B3_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3EU7B86a38c22U2Df339U2D40ebU2Db429U2D6a15c926a2e7U7D_t63A87A81968A4E28F6B69B7C41FE49854CAFF6BE____U24fieldU2D0_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B);
		s_Il2CppMethodInitialized = true;
	}
	MethodInfo_t* V_0 = NULL;
	int32_t V_1 = 0;
	LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		NullCheck(L_1);
		MethodInfo_t* L_2;
		L_2 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_1, _stringLiteral57B9206E5BA716A0B4139531B38C1431A85E8D8B, NULL);
		V_0 = L_2;
		MethodInfo_t* L_3 = V_0;
		if (!L_3)
		{
			goto IL_006c;
		}
	}
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_4 = (LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063*)SZArrayNew(LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063_il2cpp_TypeInfo_var, (uint32_t)5);
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_5 = L_4;
		RuntimeFieldHandle_t6E4C45B6D2EA12FC99185805A7E77527899B25C5 L_6 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3EU7B86a38c22U2Df339U2D40ebU2Db429U2D6a15c926a2e7U7D_t63A87A81968A4E28F6B69B7C41FE49854CAFF6BE____U24fieldU2D0_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m751372AA3F24FBF6DA9B9D687CBFA2DE436CAB9B((RuntimeArray*)L_5, L_6, NULL);
		V_2 = L_5;
		V_3 = 0;
		goto IL_0063;
	}

IL_0034:
	{
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_7 = V_2;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		int32_t L_10 = (int32_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		V_1 = L_10;
		MethodInfo_t* L_11 = V_0;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_13 = L_12;
		int32_t L_14 = V_1;
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(LogType_t9CC0F1B620DFBF3A01E8C2D2316A850D745EF331_il2cpp_TypeInfo_var, &L_15);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_16);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_16);
		NullCheck(L_11);
		RuntimeObject* L_17;
		L_17 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_11, NULL, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_17, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		return (bool)1;
	}

IL_005f:
	{
		int32_t L_19 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0063:
	{
		int32_t L_20 = V_3;
		LogTypeU5BU5D_t61D0200D1B1B9181244CCD6879BF78C5E55B0063* L_21 = V_2;
		NullCheck(L_21);
		if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
		{
			goto IL_0034;
		}
	}

IL_006c:
	{
		return (bool)0;
	}
}
// System.Boolean Firebase.Platform.FirebaseLogger::get_CanRedirectNativeLogs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseLogger_get_CanRedirectNativeLogs_m1EEC26D9564564880A37D4DCBE6D4E288CD6C7DD (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B);
		s_Il2CppMethodInitialized = true;
	}
	FieldInfo_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_0 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42(L_0, MainThreadProperty_1_get_Value_mC6335B67D74A737EE8D42F56D6A25F6938393E42_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Application_tDB03BE91CDF0ACA614A5E0B67CFB77C44EB19B21_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		NullCheck(L_3);
		FieldInfo_t* L_4;
		L_4 = Type_GetField_m0BF55B1A27A1B6AB6D3477E7F9E1CF2A3451E1E0(L_3, _stringLiteralDB797A4D97C7FD6146460C6DC4591BE1D9CE6A0B, NULL);
		V_0 = L_4;
		FieldInfo_t* L_5 = V_0;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		FieldInfo_t* L_6 = V_0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(21 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = FirebaseLogger_IsStackTraceLogTypeIncompatibleWithNativeLogs_m9D61E661685855C6CDC6C84B3DDDB1BF2754CF2B(((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_7, StackTraceLogType_t2AD431F7181A4203AAE2D538963997CB3A917DF6_il2cpp_TypeInfo_var)))), NULL);
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(4 /* Firebase.Platform.PlatformLogLevel Firebase.Platform.IFirebaseAppUtils::GetLogLevel() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = ___logLevel0;
		int32_t L_3 = V_0;
		if ((((int32_t)L_2) >= ((int32_t)L_3)))
		{
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		int32_t L_4 = ___logLevel0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0036;
			}
			case 2:
			{
				goto IL_0036;
			}
			case 3:
			{
				goto IL_0041;
			}
			case 4:
			{
				goto IL_004c;
			}
			case 5:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_005c;
	}

IL_0036:
	{
		String_t* L_5 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		goto IL_005c;
	}

IL_0041:
	{
		String_t* L_6 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9(L_6, NULL);
		goto IL_005c;
	}

IL_004c:
	{
		String_t* L_7 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_7, NULL);
		goto IL_005c;
	}

IL_0057:
	{
		goto IL_005c;
	}

IL_005c:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger__cctor_mD2B909D7406D19E8777175B1494DB1CAE549B159 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_0 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_1 = (Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457*)il2cpp_codegen_object_new(Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_mDFFAE9C73346372438B5B04C4558AC42F1A3DA22(L_1, NULL, (intptr_t)((void*)FirebaseLogger_CurrentStackTraceLogTypeIsIncompatibleWithNativeLogs_m0F425143BB2FEABADE7FD419C02C0545941BD633_RuntimeMethod_var), NULL);
		((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1), (void*)L_1);
	}

IL_0018:
	{
		Func_1_t2BE7F58348C9CC544A8973B3A9E55541DE43C457* L_2 = ((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___U3CU3Ef__mgU24cache0_1;
		MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97* L_3 = (MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97*)il2cpp_codegen_object_new(MainThreadProperty_1_t0B3DED62013B23F9A8CB8C13A6EC7B04D8F02E97_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083(L_3, L_2, MainThreadProperty_1__ctor_mE45B71F1A1734B3DD3AD859664217EE29A07D083_RuntimeMethod_var);
		((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var))->___incompatibleStackUnwindingEnabled_0), (void*)L_3);
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
// System.Void Firebase.Platform.FirebaseMonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour__ctor_mE65E0F0D449146C96EF81AB694A08D627CE61870 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// Firebase.Platform.FirebaseHandler Firebase.Platform.FirebaseMonoBehaviour::GetFirebaseHandlerOrDestroyGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline(NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_2, NULL);
	}

IL_0017:
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = V_0;
		return L_3;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnEnable_mF2CFA86462A454B9C0206AAC3ACEF950FF3E3631 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_Update_m7DEE72CA7C251D41465F5997BA4455A33B429A6C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		float L_2;
		L_2 = PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A(NULL);
		PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline(L_2, NULL);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_3 = V_0;
		NullCheck(L_3);
		FirebaseHandler_Update_mDBFD412D735E6C3F328C9BA3E5B3C5ECFBF49138(L_3, NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnApplicationFocus(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnApplicationFocus_m47DCA45653CBECEC3CD2ED4AA93CFED775F7508C (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, bool ___hasFocus0, const RuntimeMethod* method) 
{
	FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* V_0 = NULL;
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0;
		L_0 = FirebaseMonoBehaviour_GetFirebaseHandlerOrDestroyGameObject_m45E0E65DFD7138558207655AC144AE884F578967(__this, NULL);
		V_0 = L_0;
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_2 = V_0;
		bool L_3 = ___hasFocus0;
		NullCheck(L_2);
		FirebaseHandler_OnApplicationFocus_mEDF45D3543635BFE0D26562C1AF3A7F8005D5054(L_2, L_3, NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void Firebase.Platform.FirebaseMonoBehaviour::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseMonoBehaviour_OnDestroy_m92D958429C5A513836C9CD93BC6A79F1E3632BB5 (FirebaseMonoBehaviour_t0DC02A14DFF90538B38698592F07B4373DB03C72* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_OnMonoBehaviourDestroyed_mA8F66B5127AFF337B3D27EE1EC59D27053A6534B(__this, NULL);
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
// System.Boolean Firebase.Platform.PlatformInformation::get_IsAndroid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsAndroid_mA671D9472B9FDCE9060CD79409611B524ACEB61B (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)((int32_t)11)))? 1 : 0);
	}
}
// System.Boolean Firebase.Platform.PlatformInformation::get_IsIOS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlatformInformation_get_IsIOS_mC19E79F4C15D4B8B2CF22DE2517074235DCF7082 (const RuntimeMethod* method) 
{
	{
		int32_t L_0;
		L_0 = Application_get_platform_m59EF7D6155D18891B24767F83F388160B1FF2138(NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)8))? 1 : 0);
	}
}
// System.String Firebase.Platform.PlatformInformation::get_DefaultConfigLocation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_DefaultConfigLocation_mAC7DD97F2C49460091AA1709BF677FFFA1D4BC74 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m59A9FF6317ED0685549AC5CE79E895E733585D0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_1, NULL, (intptr_t)((void*)PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m59A9FF6317ED0685549AC5CE79E895E733585D0B_RuntimeMethod_var), NULL);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2), (void*)L_1);
	}

IL_0018:
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_2;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(L_2, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		return L_3;
	}
}
// System.Threading.SynchronizationContext Firebase.Platform.PlatformInformation::get_SynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* PlatformInformation_get_SynchronizationContext_m6304D399636B2EEA57B32158E1C112C265F6A590 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0;
		L_0 = UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64(NULL);
		return L_0;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartup_m04B2E9239B3CF640EAE374E1AFA74B6EF3F2F76A (const RuntimeMethod* method) 
{
	{
		float L_0;
		L_0 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		return L_0;
	}
}
// System.Single Firebase.Platform.PlatformInformation::get_RealtimeSinceStartupSafe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlatformInformation_get_RealtimeSinceStartupSafe_mE4F24C3025FAC23BED29D3E46AE01309E308739F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.PlatformInformation::set_RealtimeSinceStartupSafe(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeName_m3412CC566E5CE3DFA00A4C2DF5AAC46C548B7B4A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral114BCE5E07B2B89600E7B0C1E7991AC7281CDDA6;
	}
}
// System.String Firebase.Platform.PlatformInformation::get_RuntimeVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_get_RuntimeVersion_mD8F3490DE409C7635E2876FE28631DC79240A45B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mE48989B468CE0E3F9646F3EDD771D09C3E87FA8F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		if (L_0)
		{
			goto IL_0031;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_2, NULL, (intptr_t)((void*)PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mE48989B468CE0E3F9646F3EDD771D09C3E87FA8F_RuntimeMethod_var), NULL);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3), (void*)L_2);
	}

IL_0022:
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_3 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_3;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_4;
		L_4 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(L_3, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0), (void*)L_4);
	}

IL_0031:
	{
		String_t* L_5 = ((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___runtimeVersion_0;
		return L_5;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_DefaultConfigLocation>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_DefaultConfigLocationU3Em__0_m59A9FF6317ED0685549AC5CE79E895E733585D0B (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		return L_0;
	}
}
// System.String Firebase.Platform.PlatformInformation::<get_RuntimeVersion>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlatformInformation_U3Cget_RuntimeVersionU3Em__1_mE48989B468CE0E3F9646F3EDD771D09C3E87FA8F (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_unityVersion_m27BB3207901305BD239E1C3A74035E15CF3E5D21(NULL);
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
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854 (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(__this, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.UnityConfigExtensions::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5;
		return L_0;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_GetWriteablePath_m5D26360887C19296CB6F5854A631D0D22F4D69BE (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_U3CGetWriteablePathU3Em__0_mC28C4C73A4FEE7238A38FA2ADC443F801C68E1CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_6;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_1, NULL, (intptr_t)((void*)UnityConfigExtensions_U3CGetWriteablePathU3Em__0_mC28C4C73A4FEE7238A38FA2ADC443F801C68E1CD_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_6), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache0_6;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(L_2, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions_SetEditorP12FileName_m235577E05D33C175FAD8CEDEB62EA3B6305C805B (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* __this, RuntimeObject* ___app0, String_t* ___p12Filename1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_U3CSetEditorP12FileNameU3Em__1_m32F3889FA5E4F9CDF62E4EDDE9B682466D34580A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_7;
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_1 = (Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C*)il2cpp_codegen_object_new(Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Func_1__ctor_m27A68E928C1D9158EAAD261086B9BC424339327B(L_1, NULL, (intptr_t)((void*)UnityConfigExtensions_U3CSetEditorP12FileNameU3Em__1_m32F3889FA5E4F9CDF62E4EDDE9B682466D34580A_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_7), (void*)L_1);
	}

IL_0018:
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		Func_1_t367387BB2C476D3F32DB12161B5FDC128DC3231C* L_2 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->___U3CU3Ef__amU24cache1_7;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5(L_2, FirebaseHandler_RunOnMainThread_TisString_t_m5EFE1793CD8764D4F538D958D19242E12383DAE5_RuntimeMethod_var);
		V_0 = L_3;
		String_t* L_4 = ___p12Filename1;
		V_1 = L_4;
		String_t* L_5 = V_1;
		bool L_6;
		L_6 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_5, NULL);
		if (L_6)
		{
			goto IL_0071;
		}
	}
	{
		String_t* L_7 = V_1;
		bool L_8;
		L_8 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_7, NULL);
		if (L_8)
		{
			goto IL_0071;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_9 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = L_9;
		String_t* L_11 = V_0;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_11);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_12 = L_10;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		Il2CppChar L_13 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		Il2CppChar L_14 = L_13;
		RuntimeObject* L_15 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_15);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_15);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = L_12;
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, _stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)_stringLiteral3BE6E51A121FE961DE7A83B45B4640474186C9EB);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = L_16;
		Il2CppChar L_18 = ((Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_StaticFields*)il2cpp_codegen_static_fields_for(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var))->___DirectorySeparatorChar_2;
		Il2CppChar L_19 = L_18;
		RuntimeObject* L_20 = Box(Char_t521A6F19B456D956AF452D926C32709DC03D6B17_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_20);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = L_17;
		String_t* L_22 = V_1;
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = String_Concat_m9EB826D3BC0EF2322AA8E55DF0D20EE41B1E5A36(L_21, NULL);
		V_1 = L_23;
	}

IL_0071:
	{
		String_t* L_24 = V_1;
		bool L_25;
		L_25 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_24, NULL);
		if (L_25)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_26 = V_1;
		bool L_27;
		L_27 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_26, NULL);
		if (L_27)
		{
			goto IL_0099;
		}
	}
	{
		String_t* L_28 = ___p12Filename1;
		String_t* L_29 = V_1;
		String_t* L_30;
		L_30 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_28, _stringLiteralF5669C0E0C44A1066B0D5F3BDB19A31F49AAFFCC, L_29, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(3, L_30, NULL);
	}

IL_0099:
	{
		RuntimeObject* L_31 = ___app0;
		String_t* L_32 = V_1;
		AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD(__this, L_31, L_32, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.UnityConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityConfigExtensions__cctor_m05339F49C7C012366A9AF76FA2844DE8A6C203BF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = (UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152*)il2cpp_codegen_object_new(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityConfigExtensions__ctor_m7B66E6481FB0FF321D962EF1A37B737210D0C854(L_0, NULL);
		((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5), (void*)L_0);
		return;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::<GetWriteablePath>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_U3CGetWriteablePathU3Em__0_mC28C4C73A4FEE7238A38FA2ADC443F801C68E1CD (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		return L_0;
	}
}
// System.String Firebase.Platform.Default.UnityConfigExtensions::<SetEditorP12FileName>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityConfigExtensions_U3CSetEditorP12FileNameU3Em__1_m32F3889FA5E4F9CDF62E4EDDE9B682466D34580A (const RuntimeMethod* method) 
{
	{
		String_t* L_0;
		L_0 = Application_get_dataPath_m4C8412CBEE4EAAAB6711CC9BEFFA73CEE5BDBEF7(NULL);
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
// System.Void Firebase.Unity.UnityHttpFactoryService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityHttpFactoryService__ctor_m117ECC758C8ABFD3AB5E22C354E28A90AAB7C5E5 (UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Unity.UnityHttpFactoryService Firebase.Unity.UnityHttpFactoryService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* UnityHttpFactoryService_get_Instance_mCAC16F2BA92C9F4DDECEF637BC79E56A677D48CC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* L_0 = ((UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// Firebase.Platform.FirebaseHttpRequest Firebase.Unity.UnityHttpFactoryService::OpenConnection(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* UnityHttpFactoryService_OpenConnection_mC7A1A5CE47651734F803F53B64D4DB3602EF4DB9 (UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_1 = (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0*)il2cpp_codegen_object_new(WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WWWHttpRequest__ctor_m2A6482C885CD91C5BCCF47C6423507BCD7C275D8(L_1, L_0, NULL);
		return L_1;
	}
}
// System.Void Firebase.Unity.UnityHttpFactoryService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityHttpFactoryService__cctor_mABC8EA8D953A8A592E82180E31CB6B8361AA4B58 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* L_0 = (UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B*)il2cpp_codegen_object_new(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityHttpFactoryService__ctor_m117ECC758C8ABFD3AB5E22C354E28A90AAB7C5E5(L_0, NULL);
		((UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Unity.UnityLoggingService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Unity.UnityLoggingService Firebase.Unity.UnityLoggingService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = ((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService_LogMessage_m0ADAA4CB5B1C937E56A61E5D0187A3926562DF22 (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___level0;
		String_t* L_1 = ___message1;
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(L_0, L_1, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityLoggingService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityLoggingService__cctor_m9C4AF209E4B43DCEC6C08532326D7F9DB636ED06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = (UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB*)il2cpp_codegen_object_new(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityLoggingService__ctor_mCD777147C85E451F625C68F6D3B5713E7FB00D31(L_0, NULL);
		((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Unity.UnityPlatformServices::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices__ctor_mD6C7932A0FECA1A848359AB6E2B1D2BEA6F9D997 (UnityPlatformServices_t7D48ED4FE484C77B2D6E77155BF53BFFD6BC60B4* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnityPlatformServices::SetupServices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityPlatformServices_SetupServices_mF1859373165CEFDF10CAB66606BAF8CC47B13A06 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* L_1;
		L_1 = UnityHttpFactoryService_get_Instance_mCAC16F2BA92C9F4DDECEF637BC79E56A677D48CC_inline(NULL);
		Services_set_HttpFactory_m4BA531E7E775B348A13077D125EB21BEED42739C_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_2;
		L_2 = UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19_inline(NULL);
		Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC_il2cpp_TypeInfo_var);
		InstallRootCerts_t609C2C83437C1B8A91D93D9CE079F1B803B958EC* L_3;
		L_3 = InstallRootCerts_get_Instance_mA8D7D48B405E511B033DD3BE06474B33C83B4176(NULL);
		Services_set_RootCerts_mE19783FFD106AFEAA0F42348A8AFF5DF15761008_inline(L_3, NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SynchronizationContext__ctor_m37D995A90765D897A69B7767A14E70E8F1845532(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		__this->___mainThreadId_4 = L_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = ___gameObject0;
		NullCheck(L_2);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_3;
		L_3 = GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3(L_2, GameObject_AddComponent_TisSynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA_m8EBC722B106AE0F77C444EF03B1FC8478BF9E7D3_RuntimeMethod_var);
		__this->___behavior_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___behavior_3), (void*)L_3);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_4 = __this->___behavior_3;
		NullCheck(L_4);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_5;
		L_5 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_4, NULL);
		__this->___queue_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_2), (void*)L_5);
		return;
	}
}
// Firebase.Unity.UnitySynchronizationContext Firebase.Unity.UnitySynchronizationContext::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEF6B54868904D9D06D525E97D1016EAA23EBBAA)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64_RuntimeMethod_var)));
	}

IL_0015:
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_2 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		return L_2;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Create(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Create_mF6BE8C8E97EC0AD01648FDBB68E30ACE260B2352 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameObject0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1;
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = ___gameObject0;
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_2 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)il2cpp_codegen_object_new(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnitySynchronizationContext__ctor_m02C29AFB8681306BC3D3761C68B805F815C169C9(L_2, L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)L_2);
	}

IL_0015:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Destroy_m9094753D08FC93D95972F6F8918C23A570B87DF1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		return;
	}
}
// System.Threading.ManualResetEvent Firebase.Unity.UnitySynchronizationContext::GetThreadEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0048:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_3 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
				L_4 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_4);
				int32_t L_5;
				L_5 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_4, NULL);
				NullCheck(L_3);
				bool L_6;
				L_6 = Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048(L_3, L_5, (&V_0), Dictionary_2_TryGetValue_m523AD6A503FCF15DD28F0785FAE73C3A78F80048_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_7 = (ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158*)il2cpp_codegen_object_new(ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158_il2cpp_TypeInfo_var);
				NullCheck(L_7);
				ManualResetEvent__ctor_m361CFCF6AC28BFFF5C8790DC2B5951791A1C4CEE(L_7, (bool)0, NULL);
				V_0 = L_7;
				il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
				Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_8 = ((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6;
				Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_9;
				L_9 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
				NullCheck(L_9);
				int32_t L_10;
				L_10 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_9, NULL);
				ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_11 = V_0;
				NullCheck(L_8);
				Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884(L_8, L_10, L_11, Dictionary_2_set_Item_m028C4569FA346D1EB7C69F4597C31397F0C6F884_RuntimeMethod_var);
			}

IL_0043_1:
			{
				goto IL_004f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = EventWaitHandle_Reset_m84719BED571BDAAEE27EE05F57295C7107A74DE6(L_12, NULL);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_14 = V_0;
		return L_14;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::PostCoroutine(System.Func`1<System.Collections.IEnumerator>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_U3CPostCoroutineU3Em__0_mF3A80A02A23E417A18E6347A9BC3E160EE539A16_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_0 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_0, __this, (intptr_t)((void*)UnitySynchronizationContext_U3CPostCoroutineU3Em__0_mF3A80A02A23E417A18E6347A9BC3E160EE539A16_RuntimeMethod_var), NULL);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_1 = ___coroutine0;
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_0, L_1);
		return;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext::SignaledCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Threading.ManualResetEvent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___newSignal1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* V_0 = NULL;
	{
		U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* L_0 = (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC*)il2cpp_codegen_object_new(U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSignaledCoroutineU3Ec__Iterator0__ctor_m139628D93758C39F840EA776C0735C14CD76BE77(L_0, NULL);
		V_0 = L_0;
		U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* L_1 = V_0;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = ___coroutine0;
		NullCheck(L_1);
		L_1->___coroutine_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___coroutine_0), (void*)L_2);
		U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* L_3 = V_0;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = ___newSignal1;
		NullCheck(L_3);
		L_3->___newSignal_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___newSignal_1), (void*)L_4);
		U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::SendCoroutine(System.Func`1<System.Collections.IEnumerator>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_SendCoroutine_mE4FA1E7A5DE78112436BD2AF080A0C557C93AA7B (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* ___coroutine0, int32_t ___timeout1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCoroutineU3Ec__AnonStorey2_U3CU3Em__0_m985F21923D8FA10BF5BC5B2EA0A4D09391E68E28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* V_0 = NULL;
	U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* V_1 = NULL;
	{
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_0 = (U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C*)il2cpp_codegen_object_new(U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendCoroutineU3Ec__AnonStorey1__ctor_m4830E000E383A20145625F857B3548A72F3B9423(L_0, NULL);
		V_0 = L_0;
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_1 = V_0;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = ___coroutine0;
		NullCheck(L_1);
		L_1->___coroutine_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___coroutine_0), (void*)L_2);
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U24this_1 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U24this_1), (void*)__this);
		int32_t L_4 = __this->___mainThreadId_4;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_5;
		L_5 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_5, NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)L_6))))
		{
			goto IL_0045;
		}
	}
	{
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_7 = __this->___behavior_3;
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_8 = V_0;
		NullCheck(L_8);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_9 = L_8->___coroutine_0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_9, NULL);
		NullCheck(L_7);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_7, L_10, NULL);
		goto IL_007d;
	}

IL_0045:
	{
		U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* L_12 = (U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E*)il2cpp_codegen_object_new(U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		U3CSendCoroutineU3Ec__AnonStorey2__ctor_mD55DB40213ED96F10E57064777F8938478AE9BAD(L_12, NULL);
		V_1 = L_12;
		U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* L_13 = V_1;
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_14 = V_0;
		NullCheck(L_13);
		L_13->___U3CU3Ef__refU241_1 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&L_13->___U3CU3Ef__refU241_1), (void*)L_14);
		U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* L_15 = V_1;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_16;
		L_16 = UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0(__this, NULL);
		NullCheck(L_15);
		L_15->___newSignal_0 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&L_15->___newSignal_0), (void*)L_16);
		U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* L_17 = V_1;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_18 = (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)il2cpp_codegen_object_new(Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC(L_18, L_17, (intptr_t)((void*)U3CSendCoroutineU3Ec__AnonStorey2_U3CU3Em__0_m985F21923D8FA10BF5BC5B2EA0A4D09391E68E28_RuntimeMethod_var), NULL);
		UnitySynchronizationContext_PostCoroutine_m1617464E6E5099766BED9E002891EB87E0413C40(__this, L_18, NULL);
		U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* L_19 = V_1;
		NullCheck(L_19);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_20 = L_19->___newSignal_0;
		int32_t L_21 = ___timeout1;
		NullCheck(L_20);
		bool L_22;
		L_22 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_20, L_21);
	}

IL_007d:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Post_m27CEEE71D49CB394434E47807272ADBB1B00B7A9 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___queue_2;
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0024:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_0;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3 = __this->___queue_2;
			SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_4 = ___d0;
			RuntimeObject* L_5 = ___state1;
			Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_6 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)il2cpp_codegen_object_new(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F(L_6, L_4, L_5, Tuple_2__ctor_m23CDE129D3AD4479E1302E40EF73080C8632534F_RuntimeMethod_var);
			NullCheck(L_3);
			Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83(L_3, L_6, Queue_1_Enqueue_m47B0A189B0B33BCBCF55992AAF6D5C4ABE7F5E83_RuntimeMethod_var);
			goto IL_002b;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::Send(System.Threading.SendOrPostCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_Send_m6287E48D5488043652D3E93E610AE279CD616D00 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___d0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* V_0 = NULL;
	U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* V_1 = NULL;
	{
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_0 = (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB*)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE(L_0, NULL);
		V_0 = L_0;
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_1 = V_0;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_2 = ___d0;
		NullCheck(L_1);
		L_1->___d_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___d_0), (void*)L_2);
		int32_t L_3 = __this->___mainThreadId_4;
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_4;
		L_4 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_4, NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_6 = V_0;
		NullCheck(L_6);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_7 = L_6->___d_0;
		RuntimeObject* L_8 = ___state1;
		NullCheck(L_7);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_7, L_8, NULL);
		goto IL_0070;
	}

IL_0033:
	{
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_9 = (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D*)il2cpp_codegen_object_new(U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B(L_9, NULL);
		V_1 = L_9;
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_10 = V_1;
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_11 = V_0;
		NullCheck(L_10);
		L_10->___U3CU3Ef__refU243_1 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_10->___U3CU3Ef__refU243_1), (void*)L_11);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_12 = V_1;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_13;
		L_13 = UnitySynchronizationContext_GetThreadEvent_m427C8A60FC426FB828BFE2FD8B3F4099CCDC25D0(__this, NULL);
		NullCheck(L_12);
		L_12->___newSignal_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->___newSignal_0), (void*)L_13);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_14 = V_1;
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_15 = (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*)il2cpp_codegen_object_new(SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		SendOrPostCallback__ctor_mE6F9D9606A00C3C18AEA057422ECF4106C80DA37(L_15, L_14, (intptr_t)((void*)U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09_RuntimeMethod_var), NULL);
		RuntimeObject* L_16 = ___state1;
		VirtualActionInvoker2< SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E*, RuntimeObject* >::Invoke(5 /* System.Void System.Threading.SynchronizationContext::Post(System.Threading.SendOrPostCallback,System.Object) */, __this, L_15, L_16);
		U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* L_17 = V_1;
		NullCheck(L_17);
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_18 = L_17->___newSignal_0;
		NullCheck(L_18);
		bool L_19;
		L_19 = VirtualFuncInvoker1< bool, int32_t >::Invoke(11 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32) */, L_18, ((int32_t)15000));
	}

IL_0070:
	{
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext__cctor_mA297F4ED255BC983DBB17CE889957C5AE8A08758 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1 = (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->____instance_1), (void*)(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690*)NULL);
		Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB* L_0 = (Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB*)il2cpp_codegen_object_new(Dictionary_2_t685E1072D6BF5D03945108D75216A223A8EA7FBB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D(L_0, Dictionary_2__ctor_m72D8077DA89EFD2BE1F61E6BE812DFB87A61CE5D_RuntimeMethod_var);
		((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_StaticFields*)il2cpp_codegen_static_fields_for(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var))->___signalDictionary_6), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext::<PostCoroutine>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnitySynchronizationContext_U3CPostCoroutineU3Em__0_mF3A80A02A23E417A18E6347A9BC3E160EE539A16 (UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___x0;
		V_0 = ((Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)Castclass((RuntimeObject*)L_0, Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var));
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_1 = __this->___behavior_3;
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = V_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_2, NULL);
		NullCheck(L_1);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_4;
		L_4 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_1, L_3, NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SynchronizationContextBehavoir__ctor_m535727BFD0F4884E295BF1DD883A4A47DB5CA226 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Collections.Generic.Queue`1<System.Tuple`2<System.Threading.SendOrPostCallback,System.Object>> Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::get_CallbackQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_0 = __this->___callbackQueue_4;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_1 = (Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F*)il2cpp_codegen_object_new(Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701(L_1, Queue_1__ctor_mCB766C7ACAE78532567A3CDC0DB2F2F7613E1701_RuntimeMethod_var);
		__this->___callbackQueue_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___callbackQueue_4), (void*)L_1);
	}

IL_0016:
	{
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_2 = __this->___callbackQueue_4;
		return L_2;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SynchronizationContextBehavoir_Start_m138FD9256FCC72808F0F211B4578B4F1B400A507 (SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* V_0 = NULL;
	{
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_0 = (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68*)il2cpp_codegen_object_new(U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714(L_0, NULL);
		V_0 = L_0;
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U24this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U24this_2), (void*)__this);
		U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* L_2 = V_0;
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
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0__ctor_mB92B3147875BD33C8AD7F30C1F67B0461D936714 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ec__Iterator0_MoveNext_m74D7C901137B1212E23317DDEE4036BE455E81E2 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U24PC_5;
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_00e8;
			}
		}
	}
	{
		goto IL_00f4;
	}

IL_0021:
	{
		__this->___U3CentryU3E__0_0 = (Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E__0_0), (void*)(Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA*)NULL);
		SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_2 = __this->___U24this_2;
		NullCheck(L_2);
		Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_3;
		L_3 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_2, NULL);
		__this->___U24locvar0_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24locvar0_1), (void*)L_3);
		RuntimeObject* L_4 = __this->___U24locvar0_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_4, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0075:
			{// begin finally (depth: 1)
				RuntimeObject* L_5 = __this->___U24locvar0_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_6 = __this->___U24this_2;
				NullCheck(L_6);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_7;
				L_7 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_6, NULL);
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_inline(L_7, Queue_1_get_Count_m2948F9B0BD57935D7584835A97B91C98252B42B2_RuntimeMethod_var);
				if ((((int32_t)L_8) <= ((int32_t)0)))
				{
					goto IL_0070_1;
				}
			}
			{
				SynchronizationContextBehavoir_t77EF1109836806C11E4F2C8ECF2867D9531FEBBA* L_9 = __this->___U24this_2;
				NullCheck(L_9);
				Queue_1_tBB890027A96D0D3343916455489502BC8FBEB73F* L_10;
				L_10 = SynchronizationContextBehavoir_get_CallbackQueue_m291C810E98C2BF128991603294E306DF9C54836E(L_9, NULL);
				NullCheck(L_10);
				Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_11;
				L_11 = Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A(L_10, Queue_1_Dequeue_m9F03297B32A022B56794CC307F0AF365210C556A_RuntimeMethod_var);
				__this->___U3CentryU3E__0_0 = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CentryU3E__0_0), (void*)L_11);
			}

IL_0070_1:
			{
				goto IL_0081;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0081:
	{
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_12 = __this->___U3CentryU3E__0_0;
		if (!L_12)
		{
			goto IL_00cd;
		}
	}
	{
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_13 = __this->___U3CentryU3E__0_0;
		NullCheck(L_13);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_14;
		L_14 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_13, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		if (!L_14)
		{
			goto IL_00cd;
		}
	}
	try
	{// begin try (depth: 1)
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_15 = __this->___U3CentryU3E__0_0;
		NullCheck(L_15);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_16;
		L_16 = Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_inline(L_15, Tuple_2_get_Item1_mC165002E29766B2CB7A1F453A1C220ED1B5D7E25_RuntimeMethod_var);
		Tuple_2_t9EC4E1A9EFB1ABACA7C36B1761CBDB693089F4DA* L_17 = __this->___U3CentryU3E__0_0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_inline(L_17, Tuple_2_get_Item2_m057128974F4A74EDE05F93B5652F2B6D5ECA5DBC_RuntimeMethod_var);
		NullCheck(L_16);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_16, L_18, NULL);
		goto IL_00cd;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.Exception)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_19 = V_1;
		NullCheck(L_19);
		String_t* L_20;
		L_20 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_19);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00cd;
	}// end catch (depth: 1)

IL_00cd:
	{
		__this->___U24current_3 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_3), (void*)NULL);
		bool L_21 = __this->___U24disposing_4;
		if (L_21)
		{
			goto IL_00e3;
		}
	}
	{
		__this->___U24PC_5 = 1;
	}

IL_00e3:
	{
		goto IL_00f6;
	}

IL_00e8:
	{
		goto IL_0021;
	}
	// Dead block : IL_00ed: ldarg.0

IL_00f4:
	{
		return (bool)0;
	}

IL_00f6:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m2AAC88DE28B82A563A0BB4E3C38D0458B764F1B3 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CStartU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_mE1491181139081AB51A52A70BB982E6A2A2E73C1 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Dispose_m26C7172AAC9ED6A0846FBD183AE136BA28BD54D3 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_4 = (bool)1;
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/SynchronizationContextBehavoir/<Start>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ec__Iterator0_Reset_m4C96FE57C954B1537D6E3D99C57FB57CE6965110 (U3CStartU3Ec__Iterator0_t222A0004720CA576CAC089134B24CBDA80693E68* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ec__Iterator0_Reset_m4C96FE57C954B1537D6E3D99C57FB57CE6965110_RuntimeMethod_var)));
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0__ctor_m139628D93758C39F840EA776C0735C14CD76BE77 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSignaledCoroutineU3Ec__Iterator0_MoveNext_m22CB69AB3959EAD0503AA5E336FA08412EE0424D (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U24PC_4;
		V_0 = L_0;
		__this->___U24PC_4 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0046;
			}
		}
	}
	{
		goto IL_0059;
	}

IL_0021:
	{
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_2 = __this->___coroutine_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Func_1_Invoke_mC8C2E075F688B1F6C0700B6DD0147A02A7AC1672_inline(L_2, NULL);
		__this->___U24current_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_2), (void*)L_3);
		bool L_4 = __this->___U24disposing_3;
		if (L_4)
		{
			goto IL_0041;
		}
	}
	{
		__this->___U24PC_4 = 1;
	}

IL_0041:
	{
		goto IL_005b;
	}

IL_0046:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_1;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
		__this->___U24PC_4 = (-1);
	}

IL_0059:
	{
		return (bool)0;
	}

IL_005b:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_m125588AA1FDB068CC23C3BA4390DA2A8A0374ECC (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_2;
		return L_0;
	}
}
// System.Object Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSignaledCoroutineU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m535B7E70C4E6C4F14A88D54D60FF6B793A2DED71 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_2;
		return L_0;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Dispose_mD8DB396F54F1016CB8475C4DBD2ECA87863307F9 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_3 = (bool)1;
		__this->___U24PC_4 = (-1);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<SignaledCoroutine>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSignaledCoroutineU3Ec__Iterator0_Reset_m40A4FAF30ABDFA59D05E9E932342577B8B5FDAE0 (U3CSignaledCoroutineU3Ec__Iterator0_tC58703BC1C0EB16184A306B8AACAE68243FF19CC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSignaledCoroutineU3Ec__Iterator0_Reset_m40A4FAF30ABDFA59D05E9E932342577B8B5FDAE0_RuntimeMethod_var)));
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey1__ctor_m4830E000E383A20145625F857B3548A72F3B9423 (U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoroutineU3Ec__AnonStorey2__ctor_mD55DB40213ED96F10E57064777F8938478AE9BAD (U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.IEnumerator Firebase.Unity.UnitySynchronizationContext/<SendCoroutine>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendCoroutineU3Ec__AnonStorey2_U3CU3Em__0_m985F21923D8FA10BF5BC5B2EA0A4D09391E68E28 (U3CSendCoroutineU3Ec__AnonStorey2_tF3318E0B5D0C9626BEE7239B69C936A6ADEB446E* __this, const RuntimeMethod* method) 
{
	{
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_0 = __this->___U3CU3Ef__refU241_1;
		NullCheck(L_0);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_1 = L_0->___U24this_1;
		U3CSendCoroutineU3Ec__AnonStorey1_tB73A38DA19EEBC025199918DCC1326071057950C* L_2 = __this->___U3CU3Ef__refU241_1;
		NullCheck(L_2);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_3 = L_2->___coroutine_0;
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_4 = __this->___newSignal_0;
		NullCheck(L_1);
		RuntimeObject* L_5;
		L_5 = UnitySynchronizationContext_SignaledCoroutine_m1C124CEDE9D2F102B3C5932739DE3DCAE918B1C9(L_1, L_3, L_4, NULL);
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey3__ctor_m19D3FA46A53ECB8F3137D07F07F07AF6CE0E2AFE (U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4__ctor_m017E216B01439F30DA0B08599B1700D90BDA757B (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Unity.UnitySynchronizationContext/<Send>c__AnonStorey4::<>m__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendU3Ec__AnonStorey4_U3CU3Em__0_m69DFDB921B19E4E00EEDF3FB22AD93087791EC09 (U3CSendU3Ec__AnonStorey4_tBD2906EC335BDD635256AEFAF7A0DD5534EB873D* __this, RuntimeObject* ___x0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		U3CSendU3Ec__AnonStorey3_t0877E086BABDA1BDD2F95E0E90A5C52922B00ABB* L_0 = __this->___U3CU3Ef__refU243_1;
		NullCheck(L_0);
		SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* L_1 = L_0->___d_0;
		RuntimeObject* L_2 = ___x0;
		NullCheck(L_1);
		SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline(L_1, L_2, NULL);
		goto IL_0027;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0016;
		}
		throw e;
	}

CATCH_0016:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		Exception_t* L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_3);
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_4, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0027;
	}// end catch (depth: 1)

IL_0027:
	{
		ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* L_5 = __this->___newSignal_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = EventWaitHandle_Set_mDF98D67F214714A9590DF82A1C51D3D851281E4D(L_5, NULL);
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
// System.Void Firebase.Unity.WWWHttpRequest::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest__ctor_m2A6482C885CD91C5BCCF47C6423507BCD7C275D8 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->____headers_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____headers_10), (void*)L_0);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_1 = (NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7*)il2cpp_codegen_object_new(NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		NameValueCollection__ctor_mCA29E5386DACDF19F6F51BC395324F0A8EE05604(L_1, NULL);
		__this->____responseheaders_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____responseheaders_11), (void*)L_1);
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m8F3BAE0B48E65BAA13C52FB020E502B3EA22CA6B(L_2, NULL);
		__this->____requestBody_12 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____requestBody_12), (void*)L_2);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		int32_t L_3 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___StatusNetworkUnavailable_8;
		__this->____responseCode_17 = L_3;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_4 = ___url0;
		FirebaseHttpRequest__ctor_m4DFB050B689DB7AE462D42881D361A9B6780913E(__this, L_4, NULL);
		return;
	}
}
// System.IO.Stream Firebase.Unity.WWWHttpRequest::get_OutputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WWWHttpRequest_get_OutputStream_m2C31BE83EF974E6C64E4011E772EA848783E2EE6 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	{
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_0 = __this->____requestBody_12;
		return L_0;
	}
}
// System.Int32 Firebase.Unity.WWWHttpRequest::get_ResponseCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWWHttpRequest_get_ResponseCode_m2CB51DCAA5A8F700DB83CFE0E58C1306C7DB5B62 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	{
		WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA(__this, NULL);
		int32_t L_0 = __this->____responseCode_17;
		return L_0;
	}
}
// System.Collections.Specialized.NameValueCollection Firebase.Unity.WWWHttpRequest::get_ResponseHeaderFields()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* WWWHttpRequest_get_ResponseHeaderFields_m989CC02E4AEA553A3DDB43F46617881EBC4BAFA2 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	{
		WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA(__this, NULL);
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_0 = __this->____responseheaders_11;
		return L_0;
	}
}
// System.Int64 Firebase.Unity.WWWHttpRequest::get_ResponseContentLength()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WWWHttpRequest_get_ResponseContentLength_m110F12490826765114F731E41D8FBE7B60B5251C (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	{
		WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA(__this, NULL);
		int64_t L_0 = __this->____responseLength_18;
		return L_0;
	}
}
// System.IO.Stream Firebase.Unity.WWWHttpRequest::get_InputStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WWWHttpRequest_get_InputStream_mF57CB201C13AF69B6CA9822FE4481D3EE7F85060 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____responseBodyBytes_16;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____responseBodyBytes_16;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		return L_2;
	}

IL_001d:
	{
		return (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
	}
}
// System.IO.Stream Firebase.Unity.WWWHttpRequest::get_ErrorStream()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* WWWHttpRequest_get_ErrorStream_m885F172EE7D1C1D6A36782D1417D790FBD709B49 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____responseBodyBytes_16;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->____responseBodyBytes_16;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_2 = (MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2*)il2cpp_codegen_object_new(MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		MemoryStream__ctor_m662CA0D5A0004A2E3B475FE8DCD687B654870AA2(L_2, L_1, NULL);
		return L_2;
	}

IL_001d:
	{
		return (Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE*)NULL;
	}
}
// System.Void Firebase.Unity.WWWHttpRequest::SetRequestProperty(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest_SetRequestProperty_m692E2B695844D9FB1A403B16F2EEDF37906BFD3B (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____headers_10;
		String_t* L_1 = ___key0;
		String_t* L_2 = ___value1;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		return;
	}
}
// System.Void Firebase.Unity.WWWHttpRequest::EnsureExecuted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest_EnsureExecuted_m38ADB0FEC317B2F9416FBC13F293034DC8CE27CA (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWHttpRequest_U3CEnsureExecutedU3Em__0_m16AA7BF2B3ADBF7ABDBB35BDF6C96D44C891CAD0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral821AFEA8E01316CE1B421A43D58E815D19003748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF7C9E66DED6069F8D1C0FBF8E979AD38802ADDD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3B97D94D824DC8EAD6EC5F4C534E300967F1112);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03C76CB2A2630A97CAE5C6F8244375B0613CBC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->____headers_10;
		NullCheck(L_0);
		bool L_1;
		L_1 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_0, _stringLiteral821AFEA8E01316CE1B421A43D58E815D19003748, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_1)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_2 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)__this)->____action_1;
		bool L_3;
		L_3 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_2, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, 5, NULL);
		if (L_3)
		{
			goto IL_0057;
		}
	}
	{
		String_t* L_4 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)__this)->____action_1;
		bool L_5;
		L_5 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_4, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, 5, NULL);
		if (L_5)
		{
			goto IL_0057;
		}
	}
	{
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_6 = __this->____headers_10;
		String_t* L_7 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)__this)->____action_1;
		NullCheck(L_6);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_6, _stringLiteral821AFEA8E01316CE1B421A43D58E815D19003748, L_7, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_0057:
	{
		bool L_8 = __this->____executed_14;
		if (L_8)
		{
			goto IL_011f;
		}
	}
	{
		__this->____responseCode_17 = 0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)__this)->____url_0;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		String_t* L_12;
		L_12 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralF03C76CB2A2630A97CAE5C6F8244375B0613CBC4, L_11, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_9, 0, L_12);
		__this->____executed_14 = (bool)1;
		MemoryStream_tAAED1B42172E3390584E4194308AB878E786AAC2* L_13 = __this->____requestBody_12;
		NullCheck(L_13);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = VirtualFuncInvoker0< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(34 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_13);
		__this->____requestBodyBytes_15 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____requestBodyBytes_15), (void*)L_14);
		RuntimeObject* L_15;
		L_15 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_16 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)__this)->____url_0;
		NullCheck(L_16);
		String_t* L_17;
		L_17 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		String_t* L_18;
		L_18 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralAF7C9E66DED6069F8D1C0FBF8E979AD38802ADDD, L_17, NULL);
		NullCheck(L_15);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_15, 0, L_18);
		il2cpp_codegen_runtime_class_init_inline(UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690_il2cpp_TypeInfo_var);
		UnitySynchronizationContext_t39352C0C5052D313916EAAF93A309E188B745690* L_19;
		L_19 = UnitySynchronizationContext_get_Instance_m7DC4B27A0A60BFDC91809D53B5A406EC17F86C64(NULL);
		Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941* L_20 = (Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941*)il2cpp_codegen_object_new(Func_1_t5C7016A1FC354629920CF15E7F2AD5A6E6D06941_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		Func_1__ctor_m46EE8C5F7DAECC4CF1353D682ABEC3A55D0AFAAC(L_20, __this, (intptr_t)((void*)WWWHttpRequest_U3CEnsureExecutedU3Em__0_m16AA7BF2B3ADBF7ABDBB35BDF6C96D44C891CAD0_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		UnitySynchronizationContext_SendCoroutine_mE4FA1E7A5DE78112436BD2AF080A0C557C93AA7B(L_19, L_20, (-1), NULL);
		String_t* L_21 = __this->____error_13;
		bool L_22;
		L_22 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_21, NULL);
		if (L_22)
		{
			goto IL_00f9;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_23;
		L_23 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_24 = __this->____error_13;
		NullCheck(L_23);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_23, 4, L_24);
	}

IL_00f9:
	{
		int32_t L_25 = __this->____responseCode_17;
		if (L_25)
		{
			goto IL_011f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_26;
		L_26 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_26);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_26, 0, _stringLiteralE3B97D94D824DC8EAD6EC5F4C534E300967F1112);
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		int32_t L_27 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___StatusNetworkUnavailable_8;
		__this->____responseCode_17 = L_27;
	}

IL_011f:
	{
		return;
	}
}
// System.Collections.IEnumerator Firebase.Unity.WWWHttpRequest::SendUnityRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WWWHttpRequest_SendUnityRequest_mC72E42955252228397B14C251388F047BC3F024A (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* V_0 = NULL;
	{
		U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* L_0 = (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73*)il2cpp_codegen_object_new(U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendUnityRequestU3Ec__Iterator0__ctor_m4F27670D17D4ED4A7CE66E3B22178C18BC992850(L_0, NULL);
		V_0 = L_0;
		U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U24this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U24this_2), (void*)__this);
		U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* L_2 = V_0;
		return L_2;
	}
}
// System.Void Firebase.Unity.WWWHttpRequest::TryParseResponse(UnityEngine.WWW)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWHttpRequest_TryParseResponse_mC190376E6DC978ED8F88026CA9570D6CF1DFF57B (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* ___www0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = __this->____responseCode_17;
		if (L_0)
		{
			goto IL_00cd;
		}
	}
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_1 = ___www0;
		NullCheck(L_1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2;
		L_2 = WWW_get_responseHeaders_m6C9B2980A00E0EE5F537D5CDD48BF6C42C4CF066(L_1, NULL);
		if (!L_2)
		{
			goto IL_00cd;
		}
	}
	{
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_3 = ___www0;
		NullCheck(L_3);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_4;
		L_4 = WWW_get_responseHeaders_m6C9B2980A00E0EE5F537D5CDD48BF6C42C4CF066(L_3, NULL);
		NullCheck(L_4);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_5;
		L_5 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_4, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		V_1 = L_5;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD((&V_1), Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004d_1;
			}

IL_0027_1:
			{
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_6;
				L_6 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline((&V_1), Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_0 = L_6;
				NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_7 = __this->____responseheaders_11;
				String_t* L_8;
				L_8 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_0), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				NullCheck(L_8);
				String_t* L_9;
				L_9 = String_ToUpper_m5F499BC30C2A5F5C96248B4C3D1A3B4694748B49(L_8, NULL);
				String_t* L_10;
				L_10 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_0), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				NullCheck(L_7);
				NameValueCollection_set_Item_mEEC24334890E9C0A05B88638B6A65DF5D888B0B0(L_7, L_9, L_10, NULL);
			}

IL_004d_1:
			{
				bool L_11;
				L_11 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438((&V_1), Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_11)
				{
					goto IL_0027_1;
				}
			}
			{
				goto IL_006c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006c:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_12 = __this->____responseheaders_11;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		String_t* L_13 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderStatus_6;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_009c;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_15 = __this->____responseheaders_11;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		String_t* L_16 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderStatus_6;
		NullCheck(L_15);
		String_t* L_17;
		L_17 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_15, L_16, NULL);
		int32_t L_18;
		L_18 = WWWHttpRequest_ParseIntHeader_m6C8A7DC2F82FC7196A218FE789C7BF60298F7804(L_17, NULL);
		__this->____responseCode_17 = L_18;
	}

IL_009c:
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_19 = __this->____responseheaders_11;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		String_t* L_20 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentLength_2;
		NullCheck(L_19);
		String_t* L_21;
		L_21 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00cd;
		}
	}
	{
		NameValueCollection_t52D1E38AB1D4ADD497A17DA305D663BB77B31DF7* L_22 = __this->____responseheaders_11;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		String_t* L_23 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentLength_2;
		NullCheck(L_22);
		String_t* L_24;
		L_24 = NameValueCollection_get_Item_mE3ED755803E67BC852123C70EEF8D53774FA635F(L_22, L_23, NULL);
		int32_t L_25;
		L_25 = WWWHttpRequest_ParseIntHeader_m6C8A7DC2F82FC7196A218FE789C7BF60298F7804(L_24, NULL);
		__this->____responseLength_18 = ((int64_t)L_25);
	}

IL_00cd:
	{
		return;
	}
}
// System.Int32 Firebase.Unity.WWWHttpRequest::ParseIntHeader(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WWWHttpRequest_ParseIntHeader_m6C8A7DC2F82FC7196A218FE789C7BF60298F7804 (String_t* ___statusLine0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral422AC61426903D426262726D783FB4E81ABFAFD3);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	{
		V_0 = 0;
		String_t* L_0 = ___statusLine0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_1 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)SZArrayNew(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)32));
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3;
		L_3 = String_Split_m101D35FEC86371D2BB4E3480F6F896880093B2E9(L_0, L_2, NULL);
		V_1 = L_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4 = V_1;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) < ((int32_t)3)))
		{
			goto IL_0044;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = 1;
		String_t* L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		bool L_8;
		L_8 = Int32_TryParse_mC928DE2FEC1C35ED5298BDDCA9868076E94B8A21(L_7, (&V_0), NULL);
		if (L_8)
		{
			goto IL_0044;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_9;
		L_9 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = 1;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		String_t* L_13;
		L_13 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral422AC61426903D426262726D783FB4E81ABFAFD3, L_12, NULL);
		NullCheck(L_9);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_9, 4, L_13);
	}

IL_0044:
	{
		int32_t L_14 = V_0;
		return L_14;
	}
}
// System.Collections.IEnumerator Firebase.Unity.WWWHttpRequest::<EnsureExecuted>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WWWHttpRequest_U3CEnsureExecutedU3Em__0_m16AA7BF2B3ADBF7ABDBB35BDF6C96D44C891CAD0 (WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0;
		L_0 = WWWHttpRequest_SendUnityRequest_mC72E42955252228397B14C251388F047BC3F024A(__this, NULL);
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
// System.Void Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUnityRequestU3Ec__Iterator0__ctor_m4F27670D17D4ED4A7CE66E3B22178C18BC992850 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSendUnityRequestU3Ec__Iterator0_MoveNext_mDF1577677F4C13740A4A1BE6196273F8A6923596 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8E228AA171C3F502250F2B2A0C17AF7F17AFDBCB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF0D58862BC39C198E534CD6A4EC67D83A4B33AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE644BB9BA7F977258773D5AD8398DFA8ED022BD9);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U24PC_5;
		V_0 = L_0;
		__this->___U24PC_5 = (-1);
		uint32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_0224;
			}
		}
	}
	{
		goto IL_0268;
	}

IL_0021:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_2 = __this->___U24this_2;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2->____requestBodyBytes_15;
		if (!L_3)
		{
			goto IL_0043;
		}
	}
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_4 = __this->___U24this_2;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = L_4->____requestBodyBytes_15;
		NullCheck(L_5);
		if (((int32_t)(((RuntimeArray*)L_5)->max_length)))
		{
			goto IL_0089;
		}
	}

IL_0043:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_6 = __this->___U24this_2;
		NullCheck(L_6);
		String_t* L_7 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)L_6)->____action_1;
		bool L_8;
		L_8 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_7, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, 5, NULL);
		if (!L_8)
		{
			goto IL_007d;
		}
	}
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_9 = __this->___U24this_2;
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD);
		NullCheck(L_9);
		L_9->____requestBodyBytes_15 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->____requestBodyBytes_15), (void*)L_11);
		goto IL_0089;
	}

IL_007d:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_12 = __this->___U24this_2;
		NullCheck(L_12);
		L_12->____requestBodyBytes_15 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_12->____requestBodyBytes_15), (void*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL);
	}

IL_0089:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_13;
		L_13 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_14 = __this->___U24this_2;
		NullCheck(L_14);
		String_t* L_15 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)L_14)->____action_1;
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_16 = __this->___U24this_2;
		NullCheck(L_16);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_17 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)L_16)->____url_0;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		String_t* L_19;
		L_19 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralCF0D58862BC39C198E534CD6A4EC67D83A4B33AF, L_15, _stringLiteral9D98CF45AE5B5E623759A6DCB43B04AC6BAE9719, L_18, NULL);
		NullCheck(L_13);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_13, 0, L_19);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_20 = __this->___U24this_2;
		NullCheck(L_20);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_21 = L_20->____headers_10;
		NullCheck(L_21);
		Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562 L_22;
		L_22 = Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6(L_21, Dictionary_2_GetEnumerator_m46EC45F42CA2279D83568CD3F216AAABA8E749F6_RuntimeMethod_var);
		__this->___U24locvar0_0 = L_22;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U24locvar0_0))->____dictionary_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U24locvar0_0))->____current_3))->___key_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___U24locvar0_0))->____current_3))->___value_1), (void*)NULL);
		#endif
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_011d:
			{// begin finally (depth: 1)
				Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_23 = (&__this->___U24locvar0_0);
				Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD(L_23, Enumerator_Dispose_m068DDFF5CAFBB15C8A0602DEADA7F10C5BB7ADCD_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0108_1;
			}

IL_00d9_1:
			{
				Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_24 = (&__this->___U24locvar0_0);
				KeyValuePair_2_t47AB280304B50F542FD7E14F25DB2C374AEDD80A L_25;
				L_25 = Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_inline(L_24, Enumerator_get_Current_m49070E88C2E34AB46E6292A3FB1C227576B8506E_RuntimeMethod_var);
				V_1 = L_25;
				il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
				RuntimeObject* L_26;
				L_26 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
				String_t* L_27;
				L_27 = KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_inline((&V_1), KeyValuePair_2_get_Key_m654BCCAE2F20CB11D8E8C2D2C886A0C8A13EB1C4_RuntimeMethod_var);
				String_t* L_28;
				L_28 = KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_inline((&V_1), KeyValuePair_2_get_Value_m7345512A32CB4DCAA0643050B18DC8DCD71B927A_RuntimeMethod_var);
				String_t* L_29;
				L_29 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_27, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_28, NULL);
				NullCheck(L_26);
				InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_26, 0, L_29);
			}

IL_0108_1:
			{
				Enumerator_t173E7BE1F35CA448C7E0EE77345C9E0EC0206562* L_30 = (&__this->___U24locvar0_0);
				bool L_31;
				L_31 = Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438(L_30, Enumerator_MoveNext_mA93491D9B55547D066053F3BC0A69C635F877438_RuntimeMethod_var);
				if (L_31)
				{
					goto IL_00d9_1;
				}
			}
			{
				goto IL_012f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012f:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_32 = __this->___U24this_2;
		NullCheck(L_32);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = L_32->____requestBodyBytes_15;
		if (!L_33)
		{
			goto IL_0174;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_34;
		L_34 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_35 = __this->___U24this_2;
		NullCheck(L_35);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_36 = L_35->____requestBodyBytes_15;
		NullCheck(L_36);
		V_2 = ((int32_t)(((RuntimeArray*)L_36)->max_length));
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_2), NULL);
		String_t* L_38;
		L_38 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE644BB9BA7F977258773D5AD8398DFA8ED022BD9, L_37, NULL);
		NullCheck(L_34);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_34, 0, L_38);
		goto IL_0184;
	}

IL_0174:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_39;
		L_39 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_39);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_39, 1, _stringLiteral8E228AA171C3F502250F2B2A0C17AF7F17AFDBCB);
	}

IL_0184:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_40 = __this->___U24this_2;
		NullCheck(L_40);
		String_t* L_41 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)L_40)->____action_1;
		bool L_42;
		L_42 = String_Equals_mCC34895D0DB2AD440C9D8767032215BC86B5C48B(L_41, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, 5, NULL);
		if (!L_42)
		{
			goto IL_01d3;
		}
	}
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_43 = __this->___U24this_2;
		NullCheck(L_43);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_44 = L_43->____headers_10;
		NullCheck(L_44);
		bool L_45;
		L_45 = Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F(L_44, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, Dictionary_2_ContainsKey_m17345EA05D3F26087F953F6793B2401AA6EE7B0F_RuntimeMethod_var);
		if (L_45)
		{
			goto IL_01d3;
		}
	}
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_46 = __this->___U24this_2;
		NullCheck(L_46);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_47 = L_46->____headers_10;
		String_t* L_48 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_47);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_47, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, L_48, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
	}

IL_01d3:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_49 = __this->___U24this_2;
		NullCheck(L_49);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_50 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*)L_49)->____url_0;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_50);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_52 = __this->___U24this_2;
		NullCheck(L_52);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_53 = L_52->____requestBodyBytes_15;
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_54 = __this->___U24this_2;
		NullCheck(L_54);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_55 = L_54->____headers_10;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_56 = (WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB*)il2cpp_codegen_object_new(WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB_il2cpp_TypeInfo_var);
		NullCheck(L_56);
		WWW__ctor_mD51946C4380DAAA935F7C5996E5A6AF135165A7E(L_56, L_51, L_53, L_55, NULL);
		__this->___U3CwwwU3E__0_1 = L_56;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CwwwU3E__0_1), (void*)L_56);
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_57 = __this->___U3CwwwU3E__0_1;
		__this->___U24current_3 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U24current_3), (void*)L_57);
		bool L_58 = __this->___U24disposing_4;
		if (L_58)
		{
			goto IL_021f;
		}
	}
	{
		__this->___U24PC_5 = 1;
	}

IL_021f:
	{
		goto IL_026a;
	}

IL_0224:
	{
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_59 = __this->___U24this_2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_60 = __this->___U3CwwwU3E__0_1;
		NullCheck(L_59);
		WWWHttpRequest_TryParseResponse_mC190376E6DC978ED8F88026CA9570D6CF1DFF57B(L_59, L_60, NULL);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_61 = __this->___U24this_2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_62 = __this->___U3CwwwU3E__0_1;
		NullCheck(L_62);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_63;
		L_63 = WWW_get_bytes_m83F5C24FC5AC80C5F3B9AF1E290E08F8B96C0642(L_62, NULL);
		NullCheck(L_61);
		L_61->____responseBodyBytes_16 = L_63;
		Il2CppCodeGenWriteBarrier((void**)(&L_61->____responseBodyBytes_16), (void*)L_63);
		WWWHttpRequest_t203C48F5BB1A6B44B58EE9E66014D43A2F097FD0* L_64 = __this->___U24this_2;
		WWW_tEADA9A43B98FC277E498F8E3206A3B8C4E5AF3FB* L_65 = __this->___U3CwwwU3E__0_1;
		NullCheck(L_65);
		String_t* L_66;
		L_66 = WWW_get_error_m6B2E4F6DB8ECC8217A112EC62AAA1D5E71AA1C93(L_65, NULL);
		NullCheck(L_64);
		L_64->____error_13 = L_66;
		Il2CppCodeGenWriteBarrier((void**)(&L_64->____error_13), (void*)L_66);
		__this->___U24PC_5 = (-1);
	}

IL_0268:
	{
		return (bool)0;
	}

IL_026a:
	{
		return (bool)1;
	}
}
// System.Object Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::System.Collections.Generic.IEnumerator<object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendUnityRequestU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CobjectU3E_get_Current_mFD284E1DFFB4E39B6D494CFBB650C117597B46B3 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Object Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSendUnityRequestU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_mCC2D8BB077A89B784001063DF454DDD26034956F (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U24current_3;
		return L_0;
	}
}
// System.Void Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUnityRequestU3Ec__Iterator0_Dispose_mAEECCA67D29AD8F95A0304CD6952F5EBCB22E1F1 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	{
		__this->___U24disposing_4 = (bool)1;
		__this->___U24PC_5 = (-1);
		return;
	}
}
// System.Void Firebase.Unity.WWWHttpRequest/<SendUnityRequest>c__Iterator0::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendUnityRequestU3Ec__Iterator0_Reset_m3EA097AEC209B2209C50C50125C956F46E392A31 (U3CSendUnityRequestU3Ec__Iterator0_tC6313A2101697FDB36D3D32C527AE3DD528EFB73* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSendUnityRequestU3Ec__Iterator0_Reset_m3EA097AEC209B2209C50C50125C956F46E392A31_RuntimeMethod_var)));
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
// System.Void Firebase.Platform.Default.AppConfigExtensions::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Default.AppConfigExtensions::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_0 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3;
		return L_0;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetWriteablePath(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetWriteablePath_m5C52729FFE052FECB9679E14ED42579744616426 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetDatabaseUrl_mC4D6A6B6F7A6C855DC5BBFA6E46D0C317CA9DF72 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___databaseUrl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___databaseUrl1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 0, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetDatabaseUrl(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetDatabaseUrl_m2B0BEFE705912EF00E39B23ABE51BA2046A28D5B (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* V_1 = NULL;
	String_t* G_B5_0 = NULL;
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 0, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_5 = ___app0;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		RuntimeObject* L_6 = ___app0;
		NullCheck(L_6);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7;
		L_7 = InterfaceFuncInvoker0< Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(2 /* System.Uri Firebase.Platform.IFirebaseAppPlatform::get_DatabaseUrl() */, IFirebaseAppPlatform_tB44DDF88ADD112DC55E9C5EF84C774D244C8C228_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_8 = V_1;
		il2cpp_codegen_runtime_class_init_inline(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Uri_op_Inequality_m64BE981CDF88B751677B80D883B201BF3CFD83F7(L_8, (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)NULL, NULL);
		if (!L_9)
		{
			goto IL_003c;
		}
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_10);
		G_B5_0 = L_11;
		goto IL_003d;
	}

IL_003c:
	{
		G_B5_0 = ((String_t*)(NULL));
	}

IL_003d:
	{
		V_0 = G_B5_0;
	}

IL_003e:
	{
		String_t* L_12 = V_0;
		return L_12;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12Password(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12Password_m98ADE552ACD32D8A882116B8AA4426A103532561 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___p12Password1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___p12Password1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 2, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorP12Password(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorP12Password_m24C86EB13AB4DF5A60DCCCD8AE5593D294A6C322 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 2, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorP12FileName_m54E25CCCD2E61CDC34E8E195C570FC9F0F8621BD (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___p12Filename1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___p12Filename1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 1, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorP12FileName_mB69AC105451EE34D6EFBBAA96A8989904A6A402D (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 1, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorServiceAccountEmail_mEA49372C5BDD4A53B37530C3792D29CB87CA6A1D (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___email1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___email1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 3, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorServiceAccountEmail_mCFD5F80F3B0452C3DEEE9548AC6582E76344ED92 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 3, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetEditorAuthUserId(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetEditorAuthUserId_mED73C594889D0A927D4CE90ADA6FD8BD8CB3D4CF (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___uid1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___uid1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 4, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetEditorAuthUserId(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetEditorAuthUserId_m44577AFF5C9B65D6D6E825CF8213E4E3635466CE (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAuthService_tAFC014FDC6CA5923FD0BF4924D39E0C1EACB3545_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_Auth_mA8369294DF80FB72EB7E6C79BC4F98DD6151EDB0_inline(NULL);
		RuntimeObject* L_1 = ___app0;
		NullCheck(L_0);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(3 /* System.String Firebase.Platform.IAuthService::GetCurrentUserId(Firebase.Platform.IFirebaseAppPlatform) */, IAuthService_tAFC014FDC6CA5923FD0BF4924D39E0C1EACB3545_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		RuntimeObject* L_5 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_6 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_7;
		L_7 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_5, 4, L_6, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0024:
	{
		String_t* L_8 = V_0;
		return L_8;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetCertPemFile(Firebase.Platform.IFirebaseAppPlatform,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetCertPemFile_mF510037EABCD9EA1708F7954112B9F2F41B73D59 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, String_t* ___certName1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		String_t* L_1 = ___certName1;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_2 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 5, L_1, L_2, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.String Firebase.Platform.Default.AppConfigExtensions::GetCertPemFile(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AppConfigExtensions_GetCertPemFile_m15B99A9210DD875A7E0DC0D4D6FB9328889BBB92 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 5, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::SetCertUpdateUrl(Firebase.Platform.IFirebaseAppPlatform,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions_SetCertUpdateUrl_m0C2A2179D5D8C04CD240FDD9E06611C0DD6649F1 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___certUrl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___app0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_1 = ___certUrl1;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_3 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E(L_0, 6, L_2, L_3, AppConfigExtensions_SetState_TisString_t_m8791A514664BB4837DFC28EA68606D803B5AD82E_RuntimeMethod_var);
		return;
	}
}
// System.Uri Firebase.Platform.Default.AppConfigExtensions::GetCertUpdateUrl(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* AppConfigExtensions_GetCertUpdateUrl_mB875B5B57538717AC09D4D353B67F65E8876DE89 (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___app0;
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_1 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4;
		String_t* L_2;
		L_2 = AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A(L_0, 6, L_1, AppConfigExtensions_GetState_TisString_t_m1E80B3A896579330C6AE8DAA1E228BCA5816FB0A_RuntimeMethod_var);
		V_0 = L_2;
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0;
		return L_5;
	}

IL_001e:
	{
		String_t* L_6 = V_0;
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_7 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_7, L_6, NULL);
		return L_7;
	}
}
// System.Void Firebase.Platform.Default.AppConfigExtensions::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppConfigExtensions__cctor_m6837C81C09BF5052B844FD3B68AC8A445498B12E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		s_Il2CppMethodInitialized = true;
	}
	{
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_0, _stringLiteral41C3A91ACED7A15B540EECC0D39B93A9C07B959D, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___DefaultUpdateUrl_0), (void*)L_0);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1 = _stringLiteral947107DA743C5DEC8247B198CC466791C8222A85;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Default_1), (void*)_stringLiteral947107DA743C5DEC8247B198CC466791C8222A85);
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___Sync_2), (void*)L_1);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_2 = (AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48*)il2cpp_codegen_object_new(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		AppConfigExtensions__ctor_mAAB3762C447D2387878715D18F41BADFE2DB001F(L_2, NULL);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3), (void*)L_2);
		Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04* L_3 = (Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04*)il2cpp_codegen_object_new(Dictionary_2_t73D7B210F00FD83B4F194279B052C32E9FCB1D04_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C(L_3, Dictionary_2__ctor_m4FB85806B2D5CF8ED85E32F65BEF2CB51759EC9C_RuntimeMethod_var);
		((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->___SStringState_4), (void*)L_3);
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
// System.Void Firebase.Platform.Default.BaseAuthService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService__ctor_mE8526CA5E8330258B89EDFFCE81AA330AAD8BE50 (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.Default.BaseAuthService Firebase.Platform.Default.BaseAuthService::get_BaseInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* BaseAuthService_get_BaseInstance_m469BFD58B369715D60199ABAFDEF2544B75F0736 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* L_0 = ((BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Boolean Firebase.Platform.Default.BaseAuthService::GetIsServiceAccountAuth(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BaseAuthService_GetIsServiceAccountAuth_m061DA43DBDB37D16D3D3FA0A9251BE602C7213FE (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	int32_t G_B6_0 = 0;
	{
		RuntimeObject* L_0 = ___app0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Firebase.Platform.IFirebaseAppPlatform Firebase.Platform.IFirebaseAppUtils::GetDefaultInstance() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_1);
		___app0 = L_2;
	}

IL_0012:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_4 = ___app0;
		NullCheck(L_3);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(6 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_3, L_4);
		V_0 = L_5;
		RuntimeObject* L_6;
		L_6 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_7 = ___app0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(8 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_6, L_7);
		V_1 = L_8;
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_9, NULL);
		if (L_10)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_11 = V_1;
		bool L_12;
		L_12 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_11, NULL);
		if (L_12)
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_13 = V_0;
		bool L_14;
		L_14 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_13, NULL);
		G_B6_0 = ((int32_t)(L_14));
		goto IL_0049;
	}

IL_0048:
	{
		G_B6_0 = 0;
	}

IL_0049:
	{
		return (bool)G_B6_0;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Platform.Default.BaseAuthService::GetTokenAsync(Firebase.Platform.IFirebaseAppPlatform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* BaseAuthService_GetTokenAsync_mBFB05E361B3FAC7A01028935DE0F9D63C055B46B (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, bool ___forceRefresh1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3126D9E65C7330570A199032544DC363F6860B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral832CAF363EA13935F4DD911E53801618DB7C7794);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9078DD5F3FE9CAC3808E5B8044AD2406566606D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC65194AACDC439C0EC6546D143DE29A7C4251534);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6D8FE09C5BD52D81E612507905848FB12E98A88);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* V_4 = NULL;
	ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* V_5 = NULL;
	Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_9 = NULL;
	GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* V_10 = NULL;
	{
		RuntimeObject* L_0 = ___app0;
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline(NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* Firebase.Platform.IFirebaseAppPlatform Firebase.Platform.IFirebaseAppUtils::GetDefaultInstance() */, IFirebaseAppUtils_t61EDF19372DFE7348E02194135E2F3B8801E3391_il2cpp_TypeInfo_var, L_1);
		___app0 = L_2;
	}

IL_0012:
	{
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_3 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_3, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject* L_4 = ___app0;
		bool L_5;
		L_5 = BaseAuthService_GetIsServiceAccountAuth_m061DA43DBDB37D16D3D3FA0A9251BE602C7213FE(__this, L_4, NULL);
		if (!L_5)
		{
			goto IL_0120;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_7 = ___app0;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(6 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorP12FileName(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_6, L_7);
		V_1 = L_8;
		RuntimeObject* L_9;
		L_9 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_10 = ___app0;
		NullCheck(L_9);
		String_t* L_11;
		L_11 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(4 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorP12Password(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_9, L_10);
		V_2 = L_11;
		RuntimeObject* L_12;
		L_12 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_13 = ___app0;
		NullCheck(L_12);
		String_t* L_14;
		L_14 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(8 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorServiceAccountEmail(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_12, L_13);
		V_3 = L_14;
		String_t* L_15 = V_2;
		bool L_16;
		L_16 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_15, NULL);
		if (!L_16)
		{
			goto IL_0059;
		}
	}
	{
		V_2 = _stringLiteral832CAF363EA13935F4DD911E53801618DB7C7794;
	}

IL_0059:
	{
		String_t* L_17 = V_1;
		String_t* L_18 = V_2;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_19 = (X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D*)il2cpp_codegen_object_new(X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		X509Certificate2__ctor_m14890D5B2E2764429EA43A0446C8844C3E10389B(L_19, L_17, L_18, 4, NULL);
		V_4 = L_19;
		String_t* L_20 = V_3;
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_21 = (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A*)il2cpp_codegen_object_new(Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		Initializer__ctor_m9089E9F8195CECFDA6A935AEAEEA81A345D3CB5C(L_21, L_20, NULL);
		V_6 = L_21;
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_22 = V_6;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, _stringLiteral9078DD5F3FE9CAC3808E5B8044AD2406566606D4);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9078DD5F3FE9CAC3808E5B8044AD2406566606D4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, _stringLiteralD6D8FE09C5BD52D81E612507905848FB12E98A88);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD6D8FE09C5BD52D81E612507905848FB12E98A88);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_26 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC(L_26, (RuntimeObject*)L_25, List_1__ctor_m0BAB01B25B1D62E100CC97401B1A9972D6DEB6EC_RuntimeMethod_var);
		NullCheck(L_22);
		Initializer_set_Scopes_mA12BFEABC1C8AAF34F5DCC827650CC6C1344B0DB_inline(L_22, L_26, NULL);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_27 = V_6;
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_28 = V_4;
		NullCheck(L_27);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_29;
		L_29 = Initializer_FromCertificate_m626547CF255594F46D260767D80422A809CE65F6(L_27, L_28, NULL);
		ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* L_30 = (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34*)il2cpp_codegen_object_new(ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var);
		NullCheck(L_30);
		ServiceAccountCredential__ctor_m42B5D097890D761716177CDB13D6E98392DE8176(L_30, L_29, NULL);
		V_5 = L_30;
		ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* L_31 = V_5;
		NullCheck(L_31);
		String_t* L_32;
		L_32 = ServiceCredential_GetAccessTokenForRequest_m7C592F5C11C5D3CB8BBA128C80E6301DDFC9CAF9(L_31, NULL);
		V_7 = L_32;
		String_t* L_33 = V_7;
		bool L_34;
		L_34 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_33, NULL);
		if (!L_34)
		{
			goto IL_00d2;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_35;
		L_35 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_35);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_35, 1, _stringLiteralC65194AACDC439C0EC6546D143DE29A7C4251534);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_36 = V_0;
		String_t* L_37 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_36);
		TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_36, L_37, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
		goto IL_011b;
	}

IL_00d2:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_38;
		L_38 = Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline(NULL);
		RuntimeObject* L_39 = ___app0;
		NullCheck(L_38);
		String_t* L_40;
		L_40 = InterfaceFuncInvoker1< String_t*, RuntimeObject* >::Invoke(10 /* System.String Firebase.Platform.IAppConfigExtensions::GetEditorAuthUserId(Firebase.Platform.IFirebaseAppPlatform) */, IAppConfigExtensions_t2BC1AFEF8FF5F2A7D5B45F23000CEE8FEE376418_il2cpp_TypeInfo_var, L_38, L_39);
		V_8 = L_40;
		V_9 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)NULL;
		String_t* L_41 = V_8;
		bool L_42;
		L_42 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_41, NULL);
		if (L_42)
		{
			goto IL_0103;
		}
	}
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_43 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_43, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_9 = L_43;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_44 = V_9;
		String_t* L_45 = V_8;
		NullCheck(L_44);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_44, _stringLiteral3126D9E65C7330570A199032544DC363F6860B07, L_45, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
	}

IL_0103:
	{
		String_t* L_46 = V_7;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_47 = V_9;
		GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* L_48 = (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D*)il2cpp_codegen_object_new(GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D_il2cpp_TypeInfo_var);
		NullCheck(L_48);
		GAuthToken__ctor_mF058BCA53DDD2FA2D9191AE11B778CF619120C34(L_48, L_46, L_47, NULL);
		V_10 = L_48;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_49 = V_0;
		GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* L_50 = V_10;
		NullCheck(L_50);
		String_t* L_51;
		L_51 = VirtualFuncInvoker0< String_t* >::Invoke(4 /* System.String Firebase.Platform.Security.GAuthToken::SerializeToString() */, L_50);
		NullCheck(L_49);
		TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_49, L_51, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
	}

IL_011b:
	{
		goto IL_012b;
	}

IL_0120:
	{
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_52 = V_0;
		String_t* L_53 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_52);
		TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1(L_52, L_53, TaskCompletionSource_1_SetResult_mA4FD1E75C7272079BE7032F18BCDC158463FE3E1_RuntimeMethod_var);
	}

IL_012b:
	{
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_54 = V_0;
		NullCheck(L_54);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_55;
		L_55 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_54, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		return L_55;
	}
}
// System.Void Firebase.Platform.Default.BaseAuthService::GetTokenAsync(Firebase.Platform.IFirebaseAppPlatform,System.Boolean,Firebase.Platform.IGetTokenCompletionListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService_GetTokenAsync_mC13D4110D827BE69307313A15916347AA93A5BF1 (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, bool ___forceRefresh1, RuntimeObject* ___listener2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTokenAsyncU3Ec__AnonStorey0_U3CU3Em__0_m5864748454398F83EC132E744C02A3624F23BFCF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* V_0 = NULL;
	{
		U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* L_0 = (U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA*)il2cpp_codegen_object_new(U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetTokenAsyncU3Ec__AnonStorey0__ctor_m579609AAE82246973EC3F36035DA11E1ED5B78A8(L_0, NULL);
		V_0 = L_0;
		U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* L_1 = V_0;
		RuntimeObject* L_2 = ___listener2;
		NullCheck(L_1);
		L_1->___listener_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___listener_0), (void*)L_2);
		RuntimeObject* L_3 = ___app0;
		bool L_4 = ___forceRefresh1;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_5;
		L_5 = VirtualFuncInvoker2< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*, RuntimeObject*, bool >::Invoke(8 /* System.Threading.Tasks.Task`1<System.String> Firebase.Platform.Default.BaseAuthService::GetTokenAsync(Firebase.Platform.IFirebaseAppPlatform,System.Boolean) */, __this, L_3, L_4);
		U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* L_6 = V_0;
		Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B* L_7 = (Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B*)il2cpp_codegen_object_new(Action_1_t04EE6D71337813893DE13688771E909BDBADAA1B_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_1__ctor_m9A99EE412CA28FA3656C2B3CEEEDEA403CF736F1(L_7, L_6, (intptr_t)((void*)U3CGetTokenAsyncU3Ec__AnonStorey0_U3CU3Em__0_m5864748454398F83EC132E744C02A3624F23BFCF_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8;
		L_8 = Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469(L_5, L_7, Task_1_ContinueWith_m2976BD674D15E3F3419CF9D4C4C27C863EAAC469_RuntimeMethod_var);
		return;
	}
}
// System.Void Firebase.Platform.Default.BaseAuthService::AddTokenChangeListener(Firebase.Platform.IFirebaseAppPlatform,Firebase.Platform.ITokenChangeListener)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService_AddTokenChangeListener_mD682B4BBAA15125D9C9249138D443610EEE3DADB (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, RuntimeObject* ___listener1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.String Firebase.Platform.Default.BaseAuthService::GetCurrentUserId(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BaseAuthService_GetCurrentUserId_m2BAC53D3BAB24BFB2AB10B67F6E80E4E90C99123 (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.BaseAuthService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseAuthService__cctor_mF3BFAFD57408DB8128ECDA2798C55AC7EA7679DC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* L_0 = (BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F*)il2cpp_codegen_object_new(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BaseAuthService__ctor_mE8526CA5E8330258B89EDFFCE81AA330AAD8BE50(L_0, NULL);
		((BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAsyncU3Ec__AnonStorey0__ctor_m579609AAE82246973EC3F36035DA11E1ED5B78A8 (U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Default.BaseAuthService/<GetTokenAsync>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTokenAsyncU3Ec__AnonStorey0_U3CU3Em__0_m5864748454398F83EC132E744C02A3624F23BFCF (U3CGetTokenAsyncU3Ec__AnonStorey0_tA7388CCDBCD309A47668DF973F974A1EBAE381AA* __this, Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___task0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGetTokenCompletionListener_tAE49A63FFCE583DD0CDD4DAD0BCC443551114E9C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_0 = ___task0;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		if (!L_1)
		{
			goto IL_0036;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_2;
		L_2 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_3 = ___task0;
		NullCheck(L_3);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_4;
		L_4 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_3, NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_2, 4, L_5);
		RuntimeObject* L_6 = __this->___listener_0;
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_6);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Firebase.Platform.IGetTokenCompletionListener::OnSuccess(System.String) */, IGetTokenCompletionListener_tAE49A63FFCE583DD0CDD4DAD0BCC443551114E9C_il2cpp_TypeInfo_var, L_6, L_7);
		goto IL_0047;
	}

IL_0036:
	{
		RuntimeObject* L_8 = __this->___listener_0;
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_9 = ___task0;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13(L_9, Task_1_get_Result_m75DDCE5DDCDA410C5506E2E7DD257E9E065EBB13_RuntimeMethod_var);
		NullCheck(L_8);
		InterfaceActionInvoker1< String_t* >::Invoke(0 /* System.Void Firebase.Platform.IGetTokenCompletionListener::OnSuccess(System.String) */, IGetTokenCompletionListener_tAE49A63FFCE583DD0CDD4DAD0BCC443551114E9C_il2cpp_TypeInfo_var, L_8, L_10);
	}

IL_0047:
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
// System.Void Firebase.Platform.Default.SystemClock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.DateTime Firebase.Platform.Default.SystemClock::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SystemClock_get_Now_mF545A8CFF00D1FA486FF4B2FD894284B00882370 (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_m636CB9651A9099D20BA1CF813A0C69637317325C(NULL);
		return L_0;
	}
}
// System.DateTime Firebase.Platform.Default.SystemClock::get_UtcNow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D SystemClock_get_UtcNow_m469D7DBAE9F16FB45B4EB066C59D08CBA1F493E8 (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_UtcNow_m06B6E9995FE16846A0F71EC9DB23E90BE2C5F9FA(NULL);
		return L_0;
	}
}
// System.Void Firebase.Platform.Default.SystemClock::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemClock__cctor_m99317E7A10E85BC5C8A63D709A1FD257B46F06DF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13* L_0 = (SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13*)il2cpp_codegen_object_new(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		SystemClock__ctor_m3F79E58AE923842C64A5EFA25E36918C5DB7495A(L_0, NULL);
		((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0), (void*)L_0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Platform.Security.GAuthToken::.ctor(System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GAuthToken__ctor_mF058BCA53DDD2FA2D9191AE11B778CF619120C34 (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* __this, String_t* ___token0, RuntimeObject* ___auth1, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___token0;
		__this->____token_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____token_4), (void*)L_0);
		RuntimeObject* L_1 = ___auth1;
		__this->____auth_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____auth_3), (void*)L_1);
		return;
	}
}
// Firebase.Platform.Security.GAuthToken Firebase.Platform.Security.GAuthToken::TryParseFromString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* GAuthToken_TryParseFromString_mE654198B2918F277C83CBFE6DE6F3E3E9A0B0F2C (String_t* ___rawToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* V_4 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___rawToken0;
		NullCheck(L_0);
		bool L_1;
		L_1 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, _stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D, NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		return (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D*)NULL;
	}

IL_0012:
	{
		String_t* L_2 = ___rawToken0;
		NullCheck(_stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D);
		int32_t L_3;
		L_3 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(_stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D, NULL);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = String_Substring_m6BA4A3FA3800FE92662D0847CC8E1EEF940DF472(L_2, L_3, NULL);
		V_0 = L_4;
	}
	try
	{// begin try (depth: 1)
		String_t* L_5 = V_0;
		RuntimeObject* L_6;
		L_6 = Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B(L_5, NULL);
		V_1 = ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var));
		RuntimeObject* L_7 = V_1;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_7, _stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(0 /* TValue System.Collections.Generic.IDictionary`2<System.String,System.Object>::get_Item(TKey) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_9, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_10, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var));
		String_t* L_11 = V_2;
		RuntimeObject* L_12 = V_3;
		GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* L_13 = (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D*)il2cpp_codegen_object_new(GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		GAuthToken__ctor_mF058BCA53DDD2FA2D9191AE11B778CF619120C34(L_13, L_11, L_12, NULL);
		V_4 = L_13;
		goto IL_006e;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005f;
		}
		throw e;
	}

CATCH_005f:
	{// begin catch(System.IO.IOException)
		V_5 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_14 = V_5;
		Exception_t* L_15 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_15);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_15, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral47E0992808628E76F29D63CE0E1B8F4F30BEF1E6)), L_14, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_15, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GAuthToken_TryParseFromString_mE654198B2918F277C83CBFE6DE6F3E3E9A0B0F2C_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_006e:
	{
		GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* L_16 = V_4;
		return L_16;
	}
}
// System.String Firebase.Platform.Security.GAuthToken::SerializeToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GAuthToken_SerializeToString_m0C89AA8297F5B14A3F32397B60D18765CF96107E (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_0 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_0, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		String_t* L_2 = __this->____token_4;
		NullCheck(L_1);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_1, _stringLiteral3988471A2015D5CC894E22E1A900B66E97CD4306, L_2);
		RuntimeObject* L_3 = V_0;
		RuntimeObject* L_4 = __this->____auth_3;
		NullCheck(L_3);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_3, _stringLiteralD555DED7CEC14AAFD2389F4CA5DB31942645053F, L_4);
	}
	try
	{// begin try (depth: 1)
		RuntimeObject* L_5 = V_0;
		String_t* L_6;
		L_6 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_5, NULL);
		V_1 = L_6;
		String_t* L_7 = V_1;
		String_t* L_8;
		L_8 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralBEEFCEA0E8C04E90805B1685131D95ED8698032D, L_7, NULL);
		V_2 = L_8;
		goto IL_004d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0040;
		}
		throw e;
	}

CATCH_0040:
	{// begin catch(System.IO.IOException)
		V_3 = ((IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*)IL2CPP_GET_ACTIVE_EXCEPTION(IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910*));
		IOException_t5D599190B003D41D45D4839A9B6B9AB53A755910* L_9 = V_3;
		Exception_t* L_10 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_10);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral455B6D3D57E297E94C0295E24170391CDFF15D69)), L_9, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&GAuthToken_SerializeToString_m0C89AA8297F5B14A3F32397B60D18765CF96107E_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_004d:
	{
		String_t* L_11 = V_2;
		return L_11;
	}
}
// System.String Firebase.Platform.Security.GAuthToken::GetToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GAuthToken_GetToken_mFB118D542D84007718872478064A5699C090DB95 (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->____token_4;
		return L_0;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Firebase.Platform.Security.GAuthToken::GetAuth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GAuthToken_GetAuth_m4DFD505BD25124495A7DD7CC50C0B695D9FF79D5 (GAuthToken_t79869C1AC0BB5749F0BE055880233EF7FD39492D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->____auth_3;
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
// System.Void Firebase.Platform.Security.ServiceAccountCredential::.ctor(Firebase.Platform.Security.ServiceAccountCredential/Initializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential__ctor_m42B5D097890D761716177CDB13D6E98392DE8176 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* ___initializer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_0 = ___initializer0;
		ServiceCredential__ctor_m68B3B05FD4731DBFEFB3AE28BD72686849EB6EA8(__this, L_0, NULL);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_1 = ___initializer0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Initializer_get_Id_mB6D88DE966CB512DC90D2497D6F20458EB383268_inline(L_1, NULL);
		ServiceAccountCredential_set_Id_m5A96D9B0A4A864588DB432904A12D964D9ED4245_inline(__this, L_2, NULL);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_3 = ___initializer0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = Initializer_get_User_mD4AF1F13250084851E28EC814A3FAB2FDF55AFB0_inline(L_3, NULL);
		ServiceAccountCredential_set_User_m80706753632CF9F1C3846F8BD8F80BB6F38D1868_inline(__this, L_4, NULL);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_5 = ___initializer0;
		NullCheck(L_5);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_6;
		L_6 = Initializer_get_Scopes_mD9C11DFE44A531690CAC303B23C14CE21608CAEB_inline(L_5, NULL);
		NullCheck(L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7;
		L_7 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_6, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		ServiceAccountCredential_set_Scopes_m8039522AC556C9873727372DB47715AB897905FA_inline(__this, L_7, NULL);
		Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* L_8 = ___initializer0;
		NullCheck(L_8);
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_9;
		L_9 = Initializer_get_Key_m4563568289D4765FFEE7F6C0EAFF929604238D56_inline(L_8, NULL);
		ServiceAccountCredential_set_Key_mDD526F93778F534191244F50ABB410FFC58D17AC_inline(__this, L_9, NULL);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_get_Id_mD626A6F7C554F2C3033C362CFBB76FDDDFCA9E10 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Id_m5A96D9B0A4A864588DB432904A12D964D9ED4245 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_get_User_m78E64835F889411A25B98C8D75DFF7C4B0AF8A19 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_User(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_User_m80706753632CF9F1C3846F8BD8F80BB6F38D1868 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.String[] Firebase.Platform.Security.ServiceAccountCredential::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ServiceAccountCredential_get_Scopes_m496B31CDB1A4DC40F66DDDE55659787FB1F2F61B (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CScopesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Scopes(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Scopes_m8039522AC556C9873727372DB47715AB897905FA (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CScopesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScopesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ServiceAccountCredential_get_Key_m63D7DDB6A6AD1B7A042FF5483E54B7FA523D974D (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = __this->___U3CKeyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Key_mDD526F93778F534191244F50ABB410FFC58D17AC (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::SendOAuth(Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential_SendOAuth_mF4D3BC100872E68DBFD510CA003F40E14705347C (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* ___request0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral241699D849E896FB9BC68DBD68D19ABB88FD56BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A1EFD48C04CE4AF708F3D1CD05A62511D4484AB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4ED7B68968992538C38548E07BAA752E60DF5D67);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6645154D30F9E0386C5E37D62453B39BB138437A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75BAD137802716F9C93A19121940C3B4C683710A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CD8F729884106AEB055F7783C49B0F9CAFF47C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA11151DC96733502F8A3CC8D21240FB16B4A357D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED3F55CDB80B3A56C4940573B5D309AC815ADA1D);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_4 = NULL;
	int32_t V_5 = 0;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_6 = NULL;
	String_t* V_7 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_1;
		L_1 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		String_t* L_2;
		L_2 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralED3F55CDB80B3A56C4940573B5D309AC815ADA1D, L_1, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_0, 1, L_2);
		RuntimeObject* L_3;
		L_3 = Services_get_HttpFactory_m93BD1BF483E87832F03A2615ABA7C166D4FB6591_inline(NULL);
		String_t* L_4;
		L_4 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_5 = (Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E*)il2cpp_codegen_object_new(Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Uri__ctor_m6CA436E6AD2768A121FA851CBEEFA3623E849D3A(L_5, L_4, NULL);
		NullCheck(L_3);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_6;
		L_6 = InterfaceFuncInvoker1< FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC*, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* >::Invoke(0 /* Firebase.Platform.FirebaseHttpRequest Firebase.Platform.IHttpFactoryService::OpenConnection(System.Uri) */, IHttpFactoryService_t969F728796F7A2B9942A751830AF81B5BD2A206B_il2cpp_TypeInfo_var, L_3, L_5);
		V_0 = L_6;
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_7 = V_0;
		NullCheck(L_7);
		FirebaseHttpRequest_SetRequestMethod_m6679685EB2167782FF88078329CF400945350722_inline(L_7, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		String_t* L_9 = ((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentType_3;
		NullCheck(L_8);
		VirtualActionInvoker2< String_t*, String_t* >::Invoke(11 /* System.Void Firebase.Platform.FirebaseHttpRequest::SetRequestProperty(System.String,System.String) */, L_8, L_9, _stringLiteral14B6DF3349D302FD20ED0B3BD448C2045066E9BE);
		StringBuilder_t* L_10 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_10, NULL);
		V_1 = L_10;
		StringBuilder_t* L_11 = V_1;
		NullCheck(L_11);
		StringBuilder_t* L_12;
		L_12 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_11, _stringLiteral241699D849E896FB9BC68DBD68D19ABB88FD56BC, NULL);
		StringBuilder_t* L_13 = V_1;
		NullCheck(L_13);
		StringBuilder_t* L_14;
		L_14 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_13, _stringLiteral4A1EFD48C04CE4AF708F3D1CD05A62511D4484AB, NULL);
		StringBuilder_t* L_15 = V_1;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_15, _stringLiteral8D004CCFB2C7F7062B882865483FF7F4DC36E04E, NULL);
		StringBuilder_t* L_17 = V_1;
		NullCheck(L_17);
		StringBuilder_t* L_18;
		L_18 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, _stringLiteral4ED7B68968992538C38548E07BAA752E60DF5D67, NULL);
		StringBuilder_t* L_19 = V_1;
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_20 = ___request0;
		NullCheck(L_20);
		String_t* L_21 = L_20->___Assertion_0;
		NullCheck(L_19);
		StringBuilder_t* L_22;
		L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_21, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_23;
		L_23 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StringBuilder_t* L_24 = V_1;
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_24);
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26;
		L_26 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_23, L_25);
		V_2 = L_26;
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_27 = V_0;
		NullCheck(L_27);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_28;
		L_28 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(5 /* System.IO.Stream Firebase.Platform.FirebaseHttpRequest::get_OutputStream() */, L_27);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_2;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_30 = V_2;
		NullCheck(L_30);
		NullCheck(L_28);
		VirtualActionInvoker3< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)(((RuntimeArray*)L_30)->max_length)));
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_31 = V_0;
		NullCheck(L_31);
		int32_t L_32;
		L_32 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_31);
		if ((((int32_t)L_32) < ((int32_t)((int32_t)200))))
		{
			goto IL_013f;
		}
	}
	{
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_33 = V_0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_33);
		if ((((int32_t)L_34) >= ((int32_t)((int32_t)300))))
		{
			goto IL_013f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_35;
		L_35 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_36;
		L_36 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_37 = V_0;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_37);
		V_3 = L_38;
		String_t* L_39;
		L_39 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_3), NULL);
		String_t* L_40;
		L_40 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral9CD8F729884106AEB055F7783C49B0F9CAFF47C4, L_36, L_39, NULL);
		NullCheck(L_35);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_35, 1, L_40);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_41 = V_0;
		NullCheck(L_41);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_42;
		L_42 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(9 /* System.IO.Stream Firebase.Platform.FirebaseHttpRequest::get_InputStream() */, L_41);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_43 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_43);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_43, L_42, NULL);
		V_4 = L_43;
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_44 = ___request0;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_45 = V_4;
		NullCheck(L_45);
		String_t* L_46;
		L_46 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_45);
		NullCheck(L_44);
		L_44->___ResponseBody_1 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&L_44->___ResponseBody_1), (void*)L_46);
		RuntimeObject* L_47;
		L_47 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_48;
		L_48 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_49 = ___request0;
		NullCheck(L_49);
		String_t* L_50 = L_49->___ResponseBody_1;
		String_t* L_51;
		L_51 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral6645154D30F9E0386C5E37D62453B39BB138437A, L_48, L_50, NULL);
		NullCheck(L_47);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_47, 1, L_51);
		goto IL_01a9;
	}

IL_013f:
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_52;
		L_52 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_53;
		L_53 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_54 = V_0;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 Firebase.Platform.FirebaseHttpRequest::get_ResponseCode() */, L_54);
		V_5 = L_55;
		String_t* L_56;
		L_56 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_5), NULL);
		String_t* L_57;
		L_57 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralA11151DC96733502F8A3CC8D21240FB16B4A357D, L_53, L_56, NULL);
		NullCheck(L_52);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_52, 4, L_57);
		FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* L_58 = V_0;
		NullCheck(L_58);
		Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* L_59;
		L_59 = VirtualFuncInvoker0< Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* >::Invoke(10 /* System.IO.Stream Firebase.Platform.FirebaseHttpRequest::get_ErrorStream() */, L_58);
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_60 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_60);
		StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_60, L_59, NULL);
		V_6 = L_60;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_61 = V_6;
		NullCheck(L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_61);
		V_7 = L_62;
		RuntimeObject* L_63;
		L_63 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		String_t* L_64;
		L_64 = ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline(__this, NULL);
		String_t* L_65 = V_7;
		String_t* L_66;
		L_66 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral75BAD137802716F9C93A19121940C3B4C683710A, L_64, L_65, NULL);
		NullCheck(L_63);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_63, 1, L_66);
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_67 = ___request0;
		NullCheck(L_67);
		L_67->___ResponseBody_1 = (String_t*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&L_67->___ResponseBody_1), (void*)(String_t*)NULL);
	}

IL_01a9:
	{
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::GetAccessTokenForRequestSync(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_GetAccessTokenForRequestSync_m9C51F36E304180E9573323D28B590589CEFE80D3 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___taskCancellationToken0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1405C2A661574468F6107DE8ADDF274A347D4F54);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* V_1 = NULL;
	OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	String_t* G_B7_0 = NULL;
	{
		String_t* L_0;
		L_0 = ServiceAccountCredential_CreatePayload_m1C0CFF1543DAFAC23335F0154E27CA18EA669B3F(__this, NULL);
		String_t* L_1;
		L_1 = ServiceAccountCredential_CreateAssertionFromPayload_m7B1A62DC5784AF6D2B4309339C12AC5483D080B1(__this, L_0, NULL);
		V_0 = L_1;
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_2 = (OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827*)il2cpp_codegen_object_new(OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OAuthRequest__ctor_m2A163A38E307500796A68060188F6BDB2A9838D6(L_2, NULL);
		V_2 = L_2;
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_3 = V_2;
		String_t* L_4 = V_0;
		NullCheck(L_3);
		L_3->___Assertion_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___Assertion_0), (void*)L_4);
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_5 = V_2;
		V_1 = L_5;
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_6 = V_1;
		ServiceAccountCredential_SendOAuth_mF4D3BC100872E68DBFD510CA003F40E14705347C(__this, L_6, NULL);
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_7 = V_1;
		NullCheck(L_7);
		String_t* L_8 = L_7->___ResponseBody_1;
		bool L_9;
		L_9 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_8, NULL);
		if (!L_9)
		{
			goto IL_0035;
		}
	}
	{
		return (String_t*)NULL;
	}

IL_0035:
	{
		OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* L_10 = V_1;
		NullCheck(L_10);
		String_t* L_11 = L_10->___ResponseBody_1;
		RuntimeObject* L_12;
		L_12 = Json_Deserialize_m1823918610311F093CBF1E0C77B52C348008763B(L_11, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_12, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var));
		V_4 = NULL;
		RuntimeObject* L_13 = V_3;
		if (!L_13)
		{
			goto IL_005d;
		}
	}
	{
		RuntimeObject* L_14 = V_3;
		NullCheck(L_14);
		bool L_15;
		L_15 = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject** >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19_il2cpp_TypeInfo_var, L_14, _stringLiteral1405C2A661574468F6107DE8ADDF274A347D4F54, (&V_4));
	}

IL_005d:
	{
		RuntimeObject* L_16 = V_4;
		if (!L_16)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_17 = V_4;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_17);
		G_B7_0 = L_18;
		goto IL_0071;
	}

IL_0070:
	{
		G_B7_0 = ((String_t*)(NULL));
	}

IL_0071:
	{
		return G_B7_0;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::CreateAssertionFromPayload(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_CreateAssertionFromPayload_m7B1A62DC5784AF6D2B4309339C12AC5483D080B1 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___serializedPayload0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE37EF1C827F00334AAA6DE13074553F72C2AE5D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringBuilder_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		V_0 = _stringLiteralCE37EF1C827F00334AAA6DE13074553F72C2AE5D;
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_1 = L_0;
		StringBuilder_t* L_1 = V_1;
		String_t* L_2 = V_0;
		String_t* L_3;
		L_3 = ServiceAccountCredential_UrlSafeBase64Encode_mFB01379C90FBAA1E220A5508C3F989866470B68C(__this, L_2, NULL);
		NullCheck(L_1);
		StringBuilder_t* L_4;
		L_4 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_1, L_3, NULL);
		NullCheck(L_4);
		StringBuilder_t* L_5;
		L_5 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_4, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		String_t* L_6 = ___serializedPayload0;
		String_t* L_7;
		L_7 = ServiceAccountCredential_UrlSafeBase64Encode_mFB01379C90FBAA1E220A5508C3F989866470B68C(__this, L_6, NULL);
		NullCheck(L_5);
		StringBuilder_t* L_8;
		L_8 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_5, L_7, NULL);
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_9;
		L_9 = ServiceAccountCredential_get_Key_m63D7DDB6A6AD1B7A042FF5483E54B7FA523D974D_inline(__this, NULL);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_10;
		L_10 = Encoding_get_ASCII_mCC61B512D320FD4E2E71CC0DFDF8DDF3CD215C65(NULL);
		StringBuilder_t* L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, L_12);
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
		L_14 = RSACryptoServiceProvider_SignData_mF69CFBC0B0F0DC4D4F328458010E73A361A5FB39(L_9, L_13, _stringLiteral158B6A1BFB4007A30B92DF912CBC29F2328168DD, NULL);
		String_t* L_15;
		L_15 = ServiceAccountCredential_UrlSafeBase64Encode_m8BF5F06B48CA869E6FAF9022930EFC95C2616B75(__this, L_14, NULL);
		V_2 = L_15;
		StringBuilder_t* L_16 = V_1;
		NullCheck(L_16);
		StringBuilder_t* L_17;
		L_17 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_16, _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D, NULL);
		String_t* L_18 = V_2;
		NullCheck(L_17);
		StringBuilder_t* L_19;
		L_19 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_18, NULL);
		StringBuilder_t* L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		return L_21;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::CreatePayload()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_CreatePayload_m1C0CFF1543DAFAC23335F0154E27CA18EA669B3F (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D1BDBFCC51F4695254B3C53B7142111EC52EA17);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62E6275F312E6BAFBE60EEB16DF367046BE2200D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8134FFE209F938F66706246E8D9C58EFF0116037);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA5BB4A32F259AC5E5797D43346AEDC60FED828F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD22B36C8DECD84A16E8C0C07565FA2EACB5F0132);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECCC734F364206CB24A1C3B12ED53FDF863B173E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_1;
	memset((&V_1), 0, sizeof(V_1));
	Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* V_2 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = ServiceCredential_get_Clock_m8DADC338ED1496378117271D825A14109C4633D8_inline(__this, NULL);
		NullCheck(L_0);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = InterfaceFuncInvoker0< DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D >::Invoke(1 /* System.DateTime Firebase.Platform.IClockService::get_UtcNow() */, IClockService_t62FFADE4F3DABB6EBE3869EEBE8C577963F1A026_il2cpp_TypeInfo_var, L_0);
		il2cpp_codegen_runtime_class_init_inline(ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_2 = ((ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_StaticFields*)il2cpp_codegen_static_fields_for(ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var))->___UnixEpoch_6;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_3;
		L_3 = DateTime_op_Subtraction_m64D26F5ABFAE6E166A7E567093D025F6C69F0123(L_1, L_2, NULL);
		V_1 = L_3;
		double L_4;
		L_4 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_1), NULL);
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_4);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_5 = (Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710*)il2cpp_codegen_object_new(Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9(L_5, Dictionary_2__ctor_mC4F3DF292BAD88F4BF193C49CD689FAEBC4570A9_RuntimeMethod_var);
		V_2 = L_5;
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_6 = V_2;
		String_t* L_7;
		L_7 = ServiceAccountCredential_get_Id_mD626A6F7C554F2C3033C362CFBB76FDDDFCA9E10_inline(__this, NULL);
		NullCheck(L_6);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_6, _stringLiteralD22B36C8DECD84A16E8C0C07565FA2EACB5F0132, L_7, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_8 = V_2;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9;
		L_9 = ServiceAccountCredential_get_Scopes_m496B31CDB1A4DC40F66DDDE55659787FB1F2F61B_inline(__this, NULL);
		String_t* L_10;
		L_10 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, L_9, NULL);
		NullCheck(L_8);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_8, _stringLiteral4D1BDBFCC51F4695254B3C53B7142111EC52EA17, L_10, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_11 = V_2;
		NullCheck(L_11);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_11, _stringLiteralBA5BB4A32F259AC5E5797D43346AEDC60FED828F, _stringLiteral8134FFE209F938F66706246E8D9C58EFF0116037, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_12 = V_2;
		int32_t L_13 = V_0;
		int32_t L_14 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)3600)));
		RuntimeObject* L_15 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_14);
		NullCheck(L_12);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_12, _stringLiteralECCC734F364206CB24A1C3B12ED53FDF863B173E, L_15, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_16 = V_2;
		int32_t L_17 = V_0;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341(L_16, _stringLiteral62E6275F312E6BAFBE60EEB16DF367046BE2200D, L_19, Dictionary_2_set_Item_m7CCA97075B48AFB2B97E5A072B94BC7679374341_RuntimeMethod_var);
		Dictionary_2_tA348003A3C1CEFB3096E9D2A0BC7F1AC8EC4F710* L_20 = V_2;
		String_t* L_21;
		L_21 = Json_Serialize_m695EB36DCD38B14656ECDCD9C5DB32A04E31AA50(L_20, NULL);
		return L_21;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::UrlSafeBase64Encode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_UrlSafeBase64Encode_mFB01379C90FBAA1E220A5508C3F989866470B68C (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_0;
		L_0 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(19 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, L_1);
		String_t* L_3;
		L_3 = ServiceAccountCredential_UrlSafeBase64Encode_m8BF5F06B48CA869E6FAF9022930EFC95C2616B75(__this, L_2, NULL);
		return L_3;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential::UrlSafeBase64Encode(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_UrlSafeBase64Encode_m8BF5F06B48CA869E6FAF9022930EFC95C2616B75 (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___bytes0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___bytes0;
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Convert_ToBase64String_mD0680EF77270244071965AFA1207921C73EEA323(L_0, NULL);
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_1);
		String_t* L_3;
		L_3 = String_Replace_mABDB7003A1D0AEDCAE9FF85E3DFFFBA752D2A166(L_1, _stringLiteral1FA13CA565DC9B5105D70A528D26A6FC7A57049E, L_2, NULL);
		NullCheck(L_3);
		String_t* L_4;
		L_4 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_3, ((int32_t)43), ((int32_t)45), NULL);
		NullCheck(L_4);
		String_t* L_5;
		L_5 = String_Replace_m86403DC5F422D8D5E1CFAAF255B103CB807EDAAF(L_4, ((int32_t)47), ((int32_t)95), NULL);
		return L_5;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceAccountCredential__cctor_m4015281F0A0E49DFE5A4E97F41739F1953E0A2A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mD89390EF215242275A4E8F78C2C3E8BC3EF6F3C3((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_StaticFields*)il2cpp_codegen_static_fields_for(ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34_il2cpp_TypeInfo_var))->___UnixEpoch_6 = L_0;
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
// System.Void Firebase.Platform.Security.ServiceAccountCredential/UploadCompleted::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadCompleted__ctor_m115949C7B7593E017B16026C54B970274C8DD3EB (UploadCompleted_tC4B70D62A1F675097292FD37449F8946659F67E9* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Platform.Security.ServiceAccountCredential/OAuthRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OAuthRequest__ctor_m2A163A38E307500796A68060188F6BDB2A9838D6 (OAuthRequest_t7EB7D09DD01E379BA1ACACE2DDAB7BADD492F827* __this, const RuntimeMethod* method) 
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
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m9089E9F8195CECFDA6A935AEAEEA81A345D3CB5C (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___id0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8134FFE209F938F66706246E8D9C58EFF0116037);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___id0;
		Initializer__ctor_m50E4C1F45E5C677A1D7950F924D606A4BE38FC68(__this, L_0, _stringLiteral8134FFE209F938F66706246E8D9C58EFF0116037, NULL);
		return;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m50E4C1F45E5C677A1D7950F924D606A4BE38FC68 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___id0, String_t* ___tokenServerUrl1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___tokenServerUrl1;
		Initializer__ctor_m111A6513E8D8BB4BD6A1B378622A6E5F016AA041(__this, L_0, NULL);
		String_t* L_1 = ___id0;
		Initializer_set_Id_m08ABEE59B541CFDC4094F3C65760416D55E53E42_inline(__this, L_1, NULL);
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_2 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_2, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		Initializer_set_Scopes_mA12BFEABC1C8AAF34F5DCC827650CC6C1344B0DB_inline(__this, L_2, NULL);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Initializer_get_Id_mB6D88DE966CB512DC90D2497D6F20458EB383268 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Id(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_Id_m08ABEE59B541CFDC4094F3C65760416D55E53E42 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_User()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Initializer_get_User_mD4AF1F13250084851E28EC814A3FAB2FDF55AFB0 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_User(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_User_m94060CC54CA0D18124F7C19381DCA4F8B5119198 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Scopes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Initializer_get_Scopes_mD9C11DFE44A531690CAC303B23C14CE21608CAEB (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CScopesU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Scopes(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_Scopes_mA12BFEABC1C8AAF34F5DCC827650CC6C1344B0DB (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CScopesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScopesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// System.Security.Cryptography.RSACryptoServiceProvider Firebase.Platform.Security.ServiceAccountCredential/Initializer::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* Initializer_get_Key_m4563568289D4765FFEE7F6C0EAFF929604238D56 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = __this->___U3CKeyU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceAccountCredential/Initializer::set_Key(System.Security.Cryptography.RSACryptoServiceProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_Key_m0C000BC4609F2130CE861B663FA7B19EBB3B5D53 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// Firebase.Platform.Security.ServiceAccountCredential/Initializer Firebase.Platform.Security.ServiceAccountCredential/Initializer::FromCertificate(System.Security.Cryptography.X509Certificates.X509Certificate2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* Initializer_FromCertificate_m626547CF255594F46D260767D80422A809CE65F6 (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* ___certificate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		X509Certificate2_t2BEAEA485A3CEA81D191B12A341675DBC54CDD2D* L_0 = ___certificate0;
		NullCheck(L_0);
		AsymmetricAlgorithm_t5E7E9D26CE0EDCAABD84F616A44E476473BA2AF8* L_1;
		L_1 = X509Certificate2_get_PrivateKey_mB2D1370AFF6F005B4A18A2223363C353B8D24A4A(L_0, NULL);
		V_0 = ((RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)CastclassSealed((RuntimeObject*)L_1, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var));
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_2 = V_0;
		NullCheck(L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3;
		L_3 = RSACryptoServiceProvider_ExportCspBlob_m0745D39B49985BD4B008C5520E98A43F7B8B65F8(L_2, (bool)1, NULL);
		V_1 = L_3;
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_4 = (RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C*)il2cpp_codegen_object_new(RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		RSACryptoServiceProvider__ctor_mE4BC404364B89F41C863EC3860ED4B9D7DD7A06F(L_4, NULL);
		Initializer_set_Key_m0C000BC4609F2130CE861B663FA7B19EBB3B5D53_inline(__this, L_4, NULL);
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_5;
		L_5 = Initializer_get_Key_m4563568289D4765FFEE7F6C0EAFF929604238D56_inline(__this, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = V_1;
		NullCheck(L_5);
		RSACryptoServiceProvider_ImportCspBlob_mC558B0030B36D08EE5D57D5D7F6ACC0FC5CB370D(L_5, L_6, NULL);
		return __this;
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
// System.Void Firebase.Platform.Security.ServiceCredential::.ctor(Firebase.Platform.Security.ServiceCredential/Initializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCredential__ctor_m68B3B05FD4731DBFEFB3AE28BD72686849EB6EA8 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* ___initializer0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* L_0 = ___initializer0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = Initializer_get_TokenServerUrl_m128C14BF839E0CDBA61A306CA410FC3E261E9E41_inline(L_0, NULL);
		ServiceCredential_set_TokenServerUrl_mF24E253C70694808380491585E553FE85EBEB993_inline(__this, L_1, NULL);
		Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* L_2 = ___initializer0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Initializer_get_Clock_m6E78A2FDB2BB9E9462E30213D295FE3B05729404_inline(L_2, NULL);
		ServiceCredential_set_Clock_m07E29DFABC561A022E1DCF94717155B03A0D9C7C_inline(__this, L_3, NULL);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceCredential::get_TokenServerUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenServerUrlU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceCredential::set_TokenServerUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCredential_set_TokenServerUrl_mF24E253C70694808380491585E553FE85EBEB993 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenServerUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenServerUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential::get_Clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ServiceCredential_get_Clock_m8DADC338ED1496378117271D825A14109C4633D8 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClockU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceCredential::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServiceCredential_set_Clock_m07E29DFABC561A022E1DCF94717155B03A0D9C7C (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceCredential::GetAccessTokenForRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ServiceCredential_GetAccessTokenForRequest_m7C592F5C11C5D3CB8BBA128C80E6301DDFC9CAF9 (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) 
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = V_0;
		String_t* L_1;
		L_1 = VirtualFuncInvoker1< String_t*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(4 /* System.String Firebase.Platform.Security.ServiceCredential::GetAccessTokenForRequestSync(System.Threading.CancellationToken) */, __this, L_0);
		return L_1;
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
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer__ctor_m111A6513E8D8BB4BD6A1B378622A6E5F016AA041 (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, String_t* ___tokenServerUrl0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		String_t* L_0 = ___tokenServerUrl0;
		Initializer_set_TokenServerUrl_mC5729867A011B402245BF043DCAD5BD34DE95365_inline(__this, L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0;
		Initializer_set_Clock_m98F4FA860266C013BB50B20FA743A0149324FC4E_inline(__this, L_1, NULL);
		return;
	}
}
// System.String Firebase.Platform.Security.ServiceCredential/Initializer::get_TokenServerUrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Initializer_get_TokenServerUrl_m128C14BF839E0CDBA61A306CA410FC3E261E9E41 (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenServerUrlU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::set_TokenServerUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_TokenServerUrl_mC5729867A011B402245BF043DCAD5BD34DE95365 (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenServerUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenServerUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IClockService Firebase.Platform.Security.ServiceCredential/Initializer::get_Clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Initializer_get_Clock_m6E78A2FDB2BB9E9462E30213D295FE3B05729404 (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClockU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.Security.ServiceCredential/Initializer::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Initializer_set_Clock_m98F4FA860266C013BB50B20FA743A0149324FC4E (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClockU3Ek__BackingField_1), (void*)L_0);
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
// System.Void Firebase.ExceptionAggregator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator__ctor_m4CBCF8A532FC8FBECDD242CA0983596A236D8E37 (ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Collections.Generic.List`1<System.Exception> Firebase.ExceptionAggregator::get_Exceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3(L_1, List_1__ctor_mD910536376B8EBB5BDB30088BE4FE395391592F3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0), (void*)L_1);
	}

IL_0014:
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_2 = ((ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var))->___threadLocalExceptions_0;
		return L_2;
	}
}
// System.Exception Firebase.ExceptionAggregator::GetAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* V_0 = NULL;
	int32_t V_1 = 0;
	Exception_t* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0;
		L_0 = ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913(NULL);
		V_0 = L_0;
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1 = V_0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline(L_1, List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = (Exception_t*)NULL;
		int32_t L_3 = V_1;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_4 = V_0;
		NullCheck(L_4);
		Exception_t* L_5;
		L_5 = List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23(L_4, 0, List_1_get_Item_m8915FA10115EA488EBCCFED6C74E11364E162A23_RuntimeMethod_var);
		V_2 = L_5;
		goto IL_0036;
	}

IL_0023:
	{
		int32_t L_6 = V_1;
		if ((((int32_t)L_6) <= ((int32_t)1)))
		{
			goto IL_0036;
		}
	}
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_7 = V_0;
		NullCheck(L_7);
		ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* L_8;
		L_8 = List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674(L_7, List_1_ToArray_m0B7B24FBD852FDE8C9EEC3AC5A3AD4E932EB6674_RuntimeMethod_var);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_9 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F(L_9, (RuntimeObject*)L_8, NULL);
		V_2 = L_9;
	}

IL_0036:
	{
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_10 = V_0;
		NullCheck(L_10);
		List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_inline(L_10, List_1_Clear_m77AB6DB3A46250AD8149B5CB7B5768D64D3F4012_RuntimeMethod_var);
		Exception_t* L_11 = V_2;
		return L_11;
	}
}
// System.Void Firebase.ExceptionAggregator::ThrowAndClearPendingExceptions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		Exception_t* L_0;
		L_0 = ExceptionAggregator_GetAndClearPendingExceptions_mA4395620FC225FC126511A21E6709E9FA86A7ED7(NULL);
		V_0 = L_0;
		Exception_t* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		Exception_t* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var)));
		Exception_t* L_3;
		L_3 = ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0(L_2, NULL);
		Exception_t* L_4 = V_0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_ThrowAndClearPendingExceptions_m48D57F6BE623AADAFCB7B293A44D32CC23A35EE9_RuntimeMethod_var)));
	}

IL_0015:
	{
		return;
	}
}
// System.Exception Firebase.ExceptionAggregator::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* ExceptionAggregator_LogException_m30ADE417F64E724741FB051CE03F3A2D81F3A1F0 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		s_Il2CppMethodInitialized = true;
	}
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_0 = NULL;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* V_1 = NULL;
	Exception_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		Exception_t* L_0 = ___exception0;
		if (!L_0)
		{
			goto IL_0086;
		}
	}
	{
		Exception_t* L_1 = ___exception0;
		V_0 = ((AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)IsInstClass((RuntimeObject*)L_1, AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var));
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2 = V_0;
		if (!L_2)
		{
			goto IL_007a;
		}
	}
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_3 = (List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD*)il2cpp_codegen_object_new(List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E(L_3, List_1__ctor_mCA8DD57EAC70C2B5923DBB9D5A77CEAC22E7068E_RuntimeMethod_var);
		V_1 = L_3;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_4 = V_0;
		NullCheck(L_4);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_5;
		L_5 = AggregateException_Flatten_m60F51FEE2794F91B3E47529599BE98971B7CA291(L_4, NULL);
		NullCheck(L_5);
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_6;
		L_6 = AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline(L_5, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC(L_6, ReadOnlyCollection_1_GetEnumerator_m7B522F5E33A2823F23DAD24EE1819E5278D111FC_RuntimeMethod_var);
		V_3 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_8 = V_3;
					if (!L_8)
					{
						goto IL_005e;
					}
				}
				{
					RuntimeObject* L_9 = V_3;
					NullCheck(L_9);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_9);
				}

IL_005e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_002f_1:
			{
				RuntimeObject* L_10 = V_3;
				NullCheck(L_10);
				Exception_t* L_11;
				L_11 = InterfaceFuncInvoker0< Exception_t* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_tF15715088C2FF1D64704AE886A3A152AFCECCC36_il2cpp_TypeInfo_var, L_10);
				V_2 = L_11;
				List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_12 = V_1;
				Exception_t* L_13 = V_2;
				NullCheck(L_13);
				String_t* L_14;
				L_14 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_13);
				NullCheck(L_12);
				List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_inline(L_12, L_14, List_1_Add_mF10DB1D3CBB0B14215F0E4F8AB4934A1955E5351_RuntimeMethod_var);
			}

IL_0042_1:
			{
				RuntimeObject* L_15 = V_3;
				NullCheck(L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
				if (L_16)
				{
					goto IL_002f_1;
				}
			}
			{
				goto IL_005f;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005f:
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_17 = V_1;
		NullCheck(L_17);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18;
		L_18 = List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A(L_17, List_1_ToArray_m2C402D882AA60FC1D5C7C09A129BE7779F833B4A_RuntimeMethod_var);
		String_t* L_19;
		L_19 = String_Join_m557B6B554B87C1742FA0B128500073B421ED0BFD(_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, L_18, NULL);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_19, NULL);
		goto IL_0086;
	}

IL_007a:
	{
		Exception_t* L_20 = ___exception0;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_20);
		il2cpp_codegen_runtime_class_init_inline(FirebaseLogger_t17574FB770AB2CB02AF3459B2EF9D27FC9C24F42_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA369905E81D1C7988F02D10C909588A688017AA4(4, L_21, NULL);
	}

IL_0086:
	{
		Exception_t* L_22 = ___exception0;
		return L_22;
	}
}
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	Exception_t* V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		goto IL_001c;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_000b;
		}
		throw e;
	}

CATCH_000b:
	{// begin catch(System.Exception)
		V_0 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var)));
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_1;
		L_1 = ExceptionAggregator_get_Exceptions_m4458200DA9F107A00E8237CD41DE17E7834C0913(NULL);
		Exception_t* L_2 = V_0;
		NullCheck(L_1);
		List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_1, L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001c;
	}// end catch (depth: 1)

IL_001c:
	{
		return;
	}
}
// System.Void Firebase.ExceptionAggregator::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator__cctor_m5F1FD4F23378B5121739AC1B2055BA43547C9642 (const RuntimeMethod* method) 
{
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
// System.Void Firebase.Platform.FirebaseHttpRequest::.ctor(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHttpRequest__ctor_m4DFB050B689DB7AE462D42881D361A9B6780913E (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___url0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* L_0 = ___url0;
		__this->____url_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____url_0), (void*)L_0);
		return;
	}
}
// System.Boolean Firebase.Platform.FirebaseHttpRequest::get_IsConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FirebaseHttpRequest_get_IsConnected_m2779BEED3D0021C80E70C15BF283C586008D08AE (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, const RuntimeMethod* method) 
{
	{
		return (bool)1;
	}
}
// System.Void Firebase.Platform.FirebaseHttpRequest::SetRequestMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHttpRequest_SetRequestMethod_m6679685EB2167782FF88078329CF400945350722 (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___action0;
		__this->____action_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_1), (void*)L_0);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseHttpRequest::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseHttpRequest__cctor_mBC7EB59E9ACBBCD5723A44FE6FEBBE9CFC41AD14 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E9992EEF3C263169CC6E264F3A6E0361C8CCCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral98DC63C9B798605745EDB7457C85928078445AFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDE7FC9A997204E10513B219B9C2FD9E843A4A86);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6A3E10F76F52D367E1044143F29F2BA82802AC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEFC136E1432828F26FB2716513A16BE1F4192DC7);
		s_Il2CppMethodInitialized = true;
	}
	{
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentLength_2 = _stringLiteral14E9992EEF3C263169CC6E264F3A6E0361C8CCCE;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentLength_2), (void*)_stringLiteral14E9992EEF3C263169CC6E264F3A6E0361C8CCCE);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentType_3 = _stringLiteralCDE7FC9A997204E10513B219B9C2FD9E843A4A86;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderContentType_3), (void*)_stringLiteralCDE7FC9A997204E10513B219B9C2FD9E843A4A86);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderRange_4 = _stringLiteralD6A3E10F76F52D367E1044143F29F2BA82802AC2;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderRange_4), (void*)_stringLiteralD6A3E10F76F52D367E1044143F29F2BA82802AC2);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderUserAgent_5 = _stringLiteralEFC136E1432828F26FB2716513A16BE1F4192DC7;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderUserAgent_5), (void*)_stringLiteralEFC136E1432828F26FB2716513A16BE1F4192DC7);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderStatus_6 = _stringLiteral98DC63C9B798605745EDB7457C85928078445AFE;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___HeaderStatus_6), (void*)_stringLiteral98DC63C9B798605745EDB7457C85928078445AFE);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___Timeout_7 = ((int32_t)10000);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___StatusNetworkUnavailable_8 = ((int32_t)-2);
		((FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC_il2cpp_TypeInfo_var))->___StatusOk_9 = ((int32_t)200);
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
// System.Void Firebase.Platform.NoopCertificateService::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoopCertificateService__ctor_mFCD411F1D799877FC38595783FDD52C48D298798 (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.NoopCertificateService Firebase.Platform.NoopCertificateService::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* NoopCertificateService_get_Instance_m5617064807965C527C9E5B4DF524CB4FC547E6C4 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* L_0 = ((NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Firebase.Platform.NoopCertificateService::Install(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE* NoopCertificateService_Install_mFC5FFA05500A76FEEA41EFC8B463834FA28E239D (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8300F90CFA2C6EED8FB78F9A042C910560412775);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_0, 3, _stringLiteral8300F90CFA2C6EED8FB78F9A042C910560412775);
		return (X509CertificateCollection_t2900D71D188EDCA7DEB5077D36103EE5DA6805CE*)NULL;
	}
}
// System.Void Firebase.Platform.NoopCertificateService::UpdateRootCertificates(Firebase.Platform.IFirebaseAppPlatform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoopCertificateService_UpdateRootCertificates_m445A27514BAB2E26C0059CA3981322CEF441BA93 (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* __this, RuntimeObject* ___app0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCFA143781A317B8217BE0470B8D109727EE952EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline(NULL);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, String_t* >::Invoke(0 /* System.Void Firebase.Platform.ILoggingService::LogMessage(Firebase.Platform.PlatformLogLevel,System.String) */, ILoggingService_t39576CA38C73068394A2E2032D0873F962DA9DF4_il2cpp_TypeInfo_var, L_0, 3, _stringLiteralCFA143781A317B8217BE0470B8D109727EE952EE);
		return;
	}
}
// System.Net.Security.RemoteCertificateValidationCallback Firebase.Platform.NoopCertificateService::GetRemoteCertificateValidationCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* NoopCertificateService_GetRemoteCertificateValidationCallback_m4F77B77AF89CC3B567C6ED692048AD09F8FAA4E0 (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* __this, const RuntimeMethod* method) 
{
	{
		return (RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955*)NULL;
	}
}
// System.Void Firebase.Platform.NoopCertificateService::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoopCertificateService__cctor_mD28ACADF116905BA327DC3DA05936A0C660EA196 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* L_0 = (NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1*)il2cpp_codegen_object_new(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NoopCertificateService__ctor_mFCD411F1D799877FC38595783FDD52C48D298798(L_0, NULL);
		((NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Platform.DebugLogger::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.DebugLogger Firebase.Platform.DebugLogger::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = ((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.DebugLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger_LogMessage_m4146EA44504F20093150685C0D01791AF4539D1B (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Void Firebase.Platform.DebugLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogger__cctor_m0176E974D2D66B3A574A7FB919DAD103095C882E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = (DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1*)il2cpp_codegen_object_new(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DebugLogger__ctor_m975238F7F458467754AB4691AA1175EBB3BE7C9B(L_0, NULL);
		((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
// System.Void Firebase.Platform.Services::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services__cctor_mA49E5137FA072E8742842A11423FBB8D3F1C41F7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3_inline(NULL);
		Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* L_1;
		L_1 = BaseAuthService_get_BaseInstance_m469BFD58B369715D60199ABAFDEF2544B75F0736_inline(NULL);
		Services_set_Auth_m622188F8E5EF1E7B04346852E173734FABAF423F_inline(L_1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* L_2;
		L_2 = NoopCertificateService_get_Instance_m5617064807965C527C9E5B4DF524CB4FC547E6C4_inline(NULL);
		Services_set_RootCerts_mE19783FFD106AFEAA0F42348A8AFF5DF15761008_inline(L_2, NULL);
		il2cpp_codegen_runtime_class_init_inline(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var);
		RuntimeObject* L_3 = ((SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_StaticFields*)il2cpp_codegen_static_fields_for(SystemClock_t56839C5A7890CD3F89A336EE0173FAA84AB3FA13_il2cpp_TypeInfo_var))->___Instance_0;
		Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_4;
		L_4 = DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E_inline(NULL);
		Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline(L_4, NULL);
		return;
	}
}
// Firebase.Platform.IAppConfigExtensions Firebase.Platform.Services::get_AppConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_AppConfig(Firebase.Platform.IAppConfigExtensions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IAuthService Firebase.Platform.Services::get_Auth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_mA8369294DF80FB72EB7E6C79BC4F98DD6151EDB0 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Auth(Firebase.Platform.IAuthService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Auth_m622188F8E5EF1E7B04346852E173734FABAF423F (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Firebase.Platform.ICertificateService Firebase.Platform.Services::get_RootCerts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_RootCerts_m9753A1504CC14565B22CEB11FDE12A839457B25D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CRootCertsU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_RootCerts(Firebase.Platform.ICertificateService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_RootCerts_mE19783FFD106AFEAA0F42348A8AFF5DF15761008 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CRootCertsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CRootCertsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IClockService Firebase.Platform.Services::get_Clock()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Clock_m2429211439B5115AC7E5223E549E60B0C645BFE2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Clock(Firebase.Platform.IClockService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
// Firebase.Platform.IHttpFactoryService Firebase.Platform.Services::get_HttpFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_HttpFactory_m93BD1BF483E87832F03A2615ABA7C166D4FB6591 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_HttpFactory(Firebase.Platform.IHttpFactoryService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_HttpFactory_m4BA531E7E775B348A13077D125EB21BEED42739C (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
// Firebase.Platform.ILoggingService Firebase.Platform.Services::get_Logging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Firebase.Platform.Services::set_Logging(Firebase.Platform.ILoggingService)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736 (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5), (void*)L_0);
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
// System.Void Firebase.Dispatcher::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher__ctor_m20D7687CB59CF114ACF69131CD3BA289B80A8B2A (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_1), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_1;
		L_1 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_1, NULL);
		__this->___ownerThreadId_0 = L_2;
		return;
	}
}
// System.Boolean Firebase.Dispatcher::ManagesThisThread()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dispatcher_ManagesThisThread_mF00448368389637B00847E99D9DA66DEF82E118D (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	{
		Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* L_0;
		L_0 = Thread_get_CurrentThread_m6D4719F4993DB9200490531FF02D4076FF9CA9BD(NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Thread_get_ManagedThreadId_m74ACB74A574EE535C2B00B7D64F203A62E796B05(L_0, NULL);
		int32_t L_2 = __this->___ownerThreadId_0;
		return (bool)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void Firebase.Dispatcher::PollJobs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dispatcher_PollJobs_m90DF848D76273E55DB08A80E9C246E9E92E931CE (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	RuntimeObject* V_1 = NULL;

IL_0000:
	{
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_1;
		V_1 = L_0;
		RuntimeObject* L_1 = V_1;
		Monitor_Enter_m759A82E6E56E06C313A9AF4679E304E0D58ABB93(L_1, NULL);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0039:
			{// begin finally (depth: 1)
				RuntimeObject* L_2 = V_1;
				Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = __this->___queue_1;
				NullCheck(L_3);
				int32_t L_4;
				L_4 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_3, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				if ((((int32_t)L_4) <= ((int32_t)0)))
				{
					goto IL_002f_1;
				}
			}
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_5 = __this->___queue_1;
				NullCheck(L_5);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6;
				L_6 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_5, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				V_0 = L_6;
				goto IL_0034_1;
			}

IL_002f_1:
			{
				goto IL_004b;
			}

IL_0034_1:
			{
				goto IL_0040;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0040:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_0;
		il2cpp_codegen_runtime_class_init_inline(ExceptionAggregator_t79259EF5E7CCF32340080CFAC267848A89DA90E3_il2cpp_TypeInfo_var);
		ExceptionAggregator_Wrap_m634CB376212591B294956C0EEAECF47DA7D1DA73(L_7, NULL);
		goto IL_0000;
	}

IL_004b:
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
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Firebase.Platform.FirebaseAppUtilsStub Firebase.Platform.FirebaseAppUtilsStub::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = ((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::TranslateDllNotFoundException(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_TranslateDllNotFoundException_mDDDE0AFBE2714E5A360C9C26184C46E0FD6169E7 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
		return;
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::PollCallbacks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub_PollCallbacks_mB4F4C4556E7FE81BCAFAB9D06A2AF268E62F9463 (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// Firebase.Platform.IFirebaseAppPlatform Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* FirebaseAppUtilsStub_GetDefaultInstance_mC20A8C9F16A70117B9BB5D5081146CB75CBCD4BF (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return (RuntimeObject*)NULL;
	}
}
// System.String Firebase.Platform.FirebaseAppUtilsStub::GetDefaultInstanceName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseAppUtilsStub_GetDefaultInstanceName_mDAFC215F046D6B4E4319AAA6AF04C2ECF89B5DCE (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166);
		s_Il2CppMethodInitialized = true;
	}
	{
		return _stringLiteral8B600FF89C754A6094C3604CCCB7D8E99C423166;
	}
}
// Firebase.Platform.PlatformLogLevel Firebase.Platform.FirebaseAppUtilsStub::GetLogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseAppUtilsStub_GetLogLevel_mE32FBF80367DE28198974386C8E0F17CFD2B925F (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* __this, const RuntimeMethod* method) 
{
	{
		return (int32_t)(1);
	}
}
// System.Void Firebase.Platform.FirebaseAppUtilsStub::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseAppUtilsStub__cctor_m49126C4C89278662AD9FC83D8A33DE9B484ACAE5 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = (FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02*)il2cpp_codegen_object_new(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		FirebaseAppUtilsStub__ctor_m26C823CCA8BC46F64579375E15FA2B1766402132(L_0, NULL);
		((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Logging_m920D920C8FD8D9697E285CB32D347AEA7EB23729_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_AppConfig_mC08EC98ACB1D5FAC108C084898388231487E9DEF_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_HttpFactory_m93BD1BF483E87832F03A2615ABA7C166D4FB6591_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHttpRequest_SetRequestMethod_m6679685EB2167782FF88078329CF400945350722_inline (FirebaseHttpRequest_t7369C203C363FC42B81F12E4C6EC6B8328FCAADC* __this, String_t* ___action0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___action0;
		__this->____action_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t X509ChainStatus_get_Status_m58AB369B6D5CDF2436644C1936953058FBBDEF99_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->___status_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* X509ChainStatus_get_StatusInformation_m28E8E6FA07DA5C4E8124A955B20918BE4E0CF9E9_inline (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___info_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AssemblyName_get_Name_m7899B9B3F289EEBAF62AEAB51D1CA91DA92C4E6A_inline (AssemblyName_t555F1570F523D87D970C6E7F27B1B44C83EADDD2* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___name_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* FirebaseHandler_get_AppUtils_m5D80C76317AFA8DBEEFEF2427573A6EE7B6F7B27_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* FirebaseHandler_get_DefaultInstance_mA9CB9A4A902158BA4278F33DACD3BCDFFBAC1DFC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___firebaseHandler_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FirebaseHandler_get_IsPlayMode_m9B9EF275DDA78C0897805EEF2CF096070AA77D96_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = __this->___U3CIsPlayModeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_IsPlayMode_mD40E7856155867FC95E46FA9E1985EA7FA47ED29_inline (FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CIsPlayModeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* FirebaseAppUtilsStub_get_Instance_m244EC63DAE4F4E0E3C15F0D27684ACFFA3DAFE52_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var);
		FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02* L_0 = ((FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseAppUtilsStub_tA2C798DD03529908BA1CC968E5CD737BA58F5A02_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_AppUtils_mC10907C6221AEB36A2D5D70019BB350B78A2F091_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CAppUtilsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* FirebaseHandler_get_ThreadDispatcher_m9AC2F2F2B74FC2A06A1C9077D636A5F02919455A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ApplicationFocusChangedEventArgs_set_HasFocus_m144DF1C01B04C22AC4C98A06E2FE88E89AA9C107_inline (ApplicationFocusChangedEventArgs_t690673A946CDA5EEC650A2D8E6A2848783AC9BAD* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		bool L_0 = ___value0;
		__this->___U3CHasFocusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseHandler_set_ThreadDispatcher_mC81DFF9F890B338F76B7499DCAF8D738B7D93AEE_inline (Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dispatcher_tBD1370511B5D6C10B211FBD3AF8E4F9D6B3CD8C6* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var);
		((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseHandler_t11BC96204B8CDE75558E6BBDB2ED05FA2979B586_il2cpp_TypeInfo_var))->___U3CThreadDispatcherU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlatformInformation_set_RealtimeSinceStartupSafe_mF2DD01812E69B3C0A7B9821BFB764002CC26FABE_inline (float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___value0;
		((PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_StaticFields*)il2cpp_codegen_static_fields_for(PlatformInformation_t6F0BE1D51BAD01D2A08CEC7ED766A21511F40E94_il2cpp_TypeInfo_var))->___U3CRealtimeSinceStartupSafeU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityConfigExtensions_get_DefaultInstance_m549B8B6A3C1F683B8498D5A3C928CB1A0D973BEB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var);
		UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152* L_0 = ((UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_StaticFields*)il2cpp_codegen_static_fields_for(UnityConfigExtensions_tA9B2A38D4A5718276B9A2E776C138969F0575152_il2cpp_TypeInfo_var))->____instance_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_AppConfig_mBB4502D93EFA0ACF3AF805439C02F2E25A189DDF_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAppConfigU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* UnityHttpFactoryService_get_Instance_mCAC16F2BA92C9F4DDECEF637BC79E56A677D48CC_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var);
		UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B* L_0 = ((UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_StaticFields*)il2cpp_codegen_static_fields_for(UnityHttpFactoryService_tC48585E67E7232AF9ABC2112AEC771365255AF9B_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_HttpFactory_m4BA531E7E775B348A13077D125EB21BEED42739C_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CHttpFactoryU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* UnityLoggingService_get_Instance_m021E0B3DDED042B341A7CE9885B8C26722481A19_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var);
		UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB* L_0 = ((UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_StaticFields*)il2cpp_codegen_static_fields_for(UnityLoggingService_t6BE39D9F1F1EFE495EB479964B33753AA2C87CBB_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Logging_m0CAF5C7A4389A34D37C24F7CF15F1EE928FBB736_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CLoggingU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_RootCerts_mE19783FFD106AFEAA0F42348A8AFF5DF15761008_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CRootCertsU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CRootCertsU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SendOrPostCallback_Invoke_m23B949AF9D78E8635F84E1E7775A50472B4F9C28_inline (SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* __this, RuntimeObject* ___state0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___state0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Services_get_Auth_mA8369294DF80FB72EB7E6C79BC4F98DD6151EDB0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Scopes_mA12BFEABC1C8AAF34F5DCC827650CC6C1344B0DB_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___value0, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = ___value0;
		__this->___U3CScopesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScopesU3Ek__BackingField_4), (void*)L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_Id_mB6D88DE966CB512DC90D2497D6F20458EB383268_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Id_m5A96D9B0A4A864588DB432904A12D964D9ED4245_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_User_mD4AF1F13250084851E28EC814A3FAB2FDF55AFB0_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CUserU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_User_m80706753632CF9F1C3846F8BD8F80BB6F38D1868_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CUserU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUserU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* Initializer_get_Scopes_mD9C11DFE44A531690CAC303B23C14CE21608CAEB_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* L_0 = __this->___U3CScopesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Scopes_m8039522AC556C9873727372DB47715AB897905FA_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___value0, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = ___value0;
		__this->___U3CScopesU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CScopesU3Ek__BackingField_4), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* Initializer_get_Key_m4563568289D4765FFEE7F6C0EAFF929604238D56_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = __this->___U3CKeyU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceAccountCredential_set_Key_mDD526F93778F534191244F50ABB410FFC58D17AC_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceCredential_get_TokenServerUrl_mB3D940AD95B2DC4EA6ED538C1F927C03309A201E_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenServerUrlU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ServiceAccountCredential_get_Key_m63D7DDB6A6AD1B7A042FF5483E54B7FA523D974D_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = __this->___U3CKeyU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* ServiceCredential_get_Clock_m8DADC338ED1496378117271D825A14109C4633D8_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClockU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ServiceAccountCredential_get_Id_mD626A6F7C554F2C3033C362CFBB76FDDDFCA9E10_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CIdU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ServiceAccountCredential_get_Scopes_m496B31CDB1A4DC40F66DDDE55659787FB1F2F61B_inline (ServiceAccountCredential_t3021890782929DAA2DEC0D426F5229D56E22EE34* __this, const RuntimeMethod* method) 
{
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = __this->___U3CScopesU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Id_m08ABEE59B541CFDC4094F3C65760416D55E53E42_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Key_m0C000BC4609F2130CE861B663FA7B19EBB3B5D53_inline (Initializer_tFFF2F3EDD20463C988B38AAA2D2D9B1CF90D6C6A* __this, RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* ___value0, const RuntimeMethod* method) 
{
	{
		RSACryptoServiceProvider_t5B3DF0CAFF65D4103EB90063F3C3B00FE2C6967C* L_0 = ___value0;
		__this->___U3CKeyU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CKeyU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Initializer_get_TokenServerUrl_m128C14BF839E0CDBA61A306CA410FC3E261E9E41_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = __this->___U3CTokenServerUrlU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCredential_set_TokenServerUrl_mF24E253C70694808380491585E553FE85EBEB993_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenServerUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenServerUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Initializer_get_Clock_m6E78A2FDB2BB9E9462E30213D295FE3B05729404_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CClockU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ServiceCredential_set_Clock_m07E29DFABC561A022E1DCF94717155B03A0D9C7C_inline (ServiceCredential_t9F0B406260D2FDA1CFA9B71A8FBEEC80F12FF1ED* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_TokenServerUrl_mC5729867A011B402245BF043DCAD5BD34DE95365_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___value0;
		__this->___U3CTokenServerUrlU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTokenServerUrlU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Initializer_set_Clock_m98F4FA860266C013BB50B20FA743A0149324FC4E_inline (Initializer_t5FD917FE67A73D21B5076E1AC268741C9FCA2E26* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___value0;
		__this->___U3CClockU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CClockU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* AggregateException_get_InnerExceptions_m3044DE61416F827389F2975C67AC1AD89EA050A5_inline (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, const RuntimeMethod* method) 
{
	{
		ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* L_0 = __this->___m_innerExceptions_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* AppConfigExtensions_get_Instance_m5B36D38B2B9B77779577C1903669B0C4622BC0A3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var);
		AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48* L_0 = ((AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_StaticFields*)il2cpp_codegen_static_fields_for(AppConfigExtensions_t6B8627CD4EFF8F05D2F749CC406E5E12F04CEE48_il2cpp_TypeInfo_var))->____instance_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* BaseAuthService_get_BaseInstance_m469BFD58B369715D60199ABAFDEF2544B75F0736_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var);
		BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F* L_0 = ((BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_StaticFields*)il2cpp_codegen_static_fields_for(BaseAuthService_t72C81861F1FE6772E29B2B0E767D38814716205F_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Auth_m622188F8E5EF1E7B04346852E173734FABAF423F_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CAuthU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* NoopCertificateService_get_Instance_m5617064807965C527C9E5B4DF524CB4FC547E6C4_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var);
		NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1* L_0 = ((NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_StaticFields*)il2cpp_codegen_static_fields_for(NoopCertificateService_t73B7AFC3493DBFC0E32067D3933428A600B8EAB1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Services_set_Clock_mD344BF4787A29D1C67D08109D75F7481DD5CEB74_inline (RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var);
		((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_StaticFields*)il2cpp_codegen_static_fields_for(Services_t4EDE95322734B379A0DA3AAEF079E28E9132D69E_il2cpp_TypeInfo_var))->___U3CClockU3Ek__BackingField_3), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* DebugLogger_get_Instance_m4CB5A78C6B263A8DE29330C339515830785AB43E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var);
		DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1* L_0 = ((DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_StaticFields*)il2cpp_codegen_static_fields_for(DebugLogger_t06BB6B0EBB4D36FCB961CCF80EE1FE4F0A88B4C1_il2cpp_TypeInfo_var))->____instance_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool U3CU3E__AnonType0_3_get_InstallationRequired_mB7EAFD8E46B495A4B1F2C10BF41D0250F75BF26F_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___U3CInstallationRequiredU3E_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t U3CU3E__AnonType0_3_get_Platform_m8BFCF7940AC116CEA007C5310C3F24AD806F895C_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___U3CPlatformU3E_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool U3CU3E__AnonType0_3_get_IsEditor_mFF46327DA1CF6663F209C0BA346FC148515A86C2_gshared_inline (U3CU3E__AnonType0_3_t4594AD1FA1E72F173174C8057F465445ED256080* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___U3CIsEditorU3E_1;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mBD72C04FF5A08A2EA93DFD21037CD1C27A48D07A_gshared_inline (EventHandler_1_tD8C4A5BE1F7C91B1A7E99AE87AFD2F5432C38746* __this, RuntimeObject* ___sender0, RuntimeObject* ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Func_1_Invoke_m1412272198DFA4066C83206E5B43353AF10A2EEE_gshared_inline (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* __this, const RuntimeMethod* method) 
{
	typedef RuntimeObject* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item1_mBF34A596062BBB3C1DD2A6CA36810366F445C9FA_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item1_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Tuple_2_get_Item2_m4C8E8E93C0299E98E046C765CA6ABB544412C1D9_gshared_inline (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___m_Item2_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 Enumerator_get_Current_mE3475384B761E1C7971D3639BD09117FE8363422_gshared_inline (Enumerator_tEA93FE2B778D098F590CA168BEFC4CD85D73A6B9* __this, const RuntimeMethod* method) 
{
	{
		KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230 L_0 = (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Key_mBD8EA7557C27E6956F2AF29DA3F7499B2F51A282_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___key_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* KeyValuePair_2_get_Value_mC6BD8075F9C9DDEF7B4D731E5C38EC19103988E7_gshared_inline (KeyValuePair_2_tFC32D2507216293851350D29B64D79F950B55230* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___value_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_gshared_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method) 
{
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
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
