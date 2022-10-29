#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task>
struct Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t673DFF64E51C18A8B1287F4BD988966CE3B15A45;
// System.Collections.Generic.List`1<System.Byte[]>
struct List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Resolution[]
struct ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;
// System.Net.WebHeaderCollection/RfcChar[]
struct RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// System.Collections.ArrayList
struct ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonToggle
struct ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CardController
struct CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.Net.CookieCollection
struct CookieCollection_t2D2FA42D43C1A8053D95FD2205360B2E0B94AF06;
// System.Net.CookieContainer
struct CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.Text.Decoder
struct Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370;
// System.Text.DecoderFallback
struct DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB;
// System.Text.EncoderFallback
struct EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4;
// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C;
// Feedback2Controller
struct Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494;
// FeedbackController
struct FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126;
// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.Net.HeaderInfoTable
struct HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F;
// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A;
// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Net.ICredentials
struct ICredentials_t7F4F7C8E1E36461DC5388554FF404E2203D30C48;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.Net.IWebProxy
struct IWebProxy_t27B6C29F0B62B717A9778AD251E31C21A91C32B3;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// ListToggle
struct ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Mono.Security.Interface.MonoTlsProvider
struct MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7;
// Mono.Security.Interface.MonoTlsSettings
struct MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D;
// NarrationController
struct NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA;
// Nav_SceneChange
struct Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB;
// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Page1_Interaction
struct Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42;
// Page3_0_1Controller
struct Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954;
// Practice2VideoController
struct Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35;
// PracticeVideoController
struct PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C;
// Random_SceneChange
struct Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3;
// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A;
// RecordPlayController
struct RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72;
// RecordSaveController
struct RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// SaveUserInfo
struct SaveUserInfo_t8D521D25F43FDB2598D8CF8F143B69B559FFF581;
// ScrollManager
struct ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60;
// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA;
// ScrollScript
struct ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E;
// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.Net.ServerCertValidationCallback
struct ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA;
// System.Net.ServicePoint
struct ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0;
// SpeechToText
struct SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// Stage1CompleteController
struct Stage1CompleteController_tDA18BF894D5F7CA564FF2CB0EE9FD9222A0929A8;
// Stage2CompleteController
struct Stage2CompleteController_t95798291AFBAAEAD702979319BF0ACC677F15BAF;
// Stage3CompleteController
struct Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A;
// StageBtnChange
struct StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3;
// System.String
struct String_t;
// System.StringComparer
struct StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// TrainController
struct TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialController
struct TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C;
// UI_SceneChange
struct UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA;
// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// VideoHandler
struct VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86;
// ViewCard
struct ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WebCam
struct WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF;
// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62;
// System.Net.WebCompletionSource
struct WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4;
// System.Net.WebOperation
struct WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00;
// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E;
// System.Net.WebRequestStream
struct WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B;
// stt
struct stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry
struct NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22;
// RecordSaveController/<waitFeedback>d__11
struct U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C;
// RecordSaveController/<waitSuccess>d__10
struct U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2;
// UnityEngine.UI.ScrollRect/ScrollRectEvent
struct ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED;
// SpeechToText/<PostVoice>d__18
struct U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53;
// SpeechToText/VoiceRecognize
struct VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974;
// System.Net.TimerThread/Queue
struct Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB;
// VideoHandler/<PrepareVideo>d__3
struct U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8;
// System.Net.WebRequest/DesignerWebRequestCreate
struct DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A;
// stt/<PostVoice>d__16
struct U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72;
// stt/VoiceRecognize
struct VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6;

IL2CPP_EXTERN_C RuntimeClass* BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral03A957F295EEA8356D0510A3137F2709636BF549;
IL2CPP_EXTERN_C String_t* _stringLiteral0DD175E66A72FDD33586B2EA57C605C4A1F7093C;
IL2CPP_EXTERN_C String_t* _stringLiteral1110AD9B1979CA8CCDD901B2845BAD9FD3D1BD26;
IL2CPP_EXTERN_C String_t* _stringLiteral133E4D655F9709B6AA1093F2C738B5F6BD912810;
IL2CPP_EXTERN_C String_t* _stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral15353998BC0FEFECCE4F7EF3D83F3C416D25F022;
IL2CPP_EXTERN_C String_t* _stringLiteral1C06D8F2495334D962C2DFEDD080D3DA729C1C87;
IL2CPP_EXTERN_C String_t* _stringLiteral1C622E06069F1F5C8BF0BBF0016F81F756A1710D;
IL2CPP_EXTERN_C String_t* _stringLiteral1EB32F915A0498F9005661D12DC44B2FF0AE4E84;
IL2CPP_EXTERN_C String_t* _stringLiteral20C04320C63179942F6C6C18F3C1DD63B20D228E;
IL2CPP_EXTERN_C String_t* _stringLiteral26DFE14E81017C0E883BE43958464A83E09712A5;
IL2CPP_EXTERN_C String_t* _stringLiteral2965B3A8C2FFE597B74603ECDFE087BE6F65F7D0;
IL2CPP_EXTERN_C String_t* _stringLiteral2C2899BB324D437620510CDBE48DE06B1EF2EDCE;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D;
IL2CPP_EXTERN_C String_t* _stringLiteral33E81761641345813DD169AAE875C47F354B87B9;
IL2CPP_EXTERN_C String_t* _stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4;
IL2CPP_EXTERN_C String_t* _stringLiteral37AF36F2E66A1320477D3E372F6C36C72F2909A4;
IL2CPP_EXTERN_C String_t* _stringLiteral384C82C04D368F6A8C277BF68BD959D6EAED8E81;
IL2CPP_EXTERN_C String_t* _stringLiteral47E421A0253A9E8A570881FBD0627CEED6A90807;
IL2CPP_EXTERN_C String_t* _stringLiteral484F7150AB53494F0C2748FFA791EDDBCECB7778;
IL2CPP_EXTERN_C String_t* _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758;
IL2CPP_EXTERN_C String_t* _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2DFB1275555587873BE1BA86D929BC0BE5B1F5;
IL2CPP_EXTERN_C String_t* _stringLiteral641255E7CDC790311725CCB47DB63D989117D244;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral68B4BB2C684DC2304FD840B097A031F0618CCDE0;
IL2CPP_EXTERN_C String_t* _stringLiteral6D616BAD371FCA22A131D77150DEC154C6148FC5;
IL2CPP_EXTERN_C String_t* _stringLiteral6E2A1E95ACBBAF462C545B0AFA27E60608939044;
IL2CPP_EXTERN_C String_t* _stringLiteral74E683ADA46BDA77A1E883EBC3A79680A634A85F;
IL2CPP_EXTERN_C String_t* _stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A3A22380D283C36EFF620CC85B1F5AB48ACCD74;
IL2CPP_EXTERN_C String_t* _stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE;
IL2CPP_EXTERN_C String_t* _stringLiteral7EF5D2B8C633B9B737BB9761C5B6D414E2F47DDE;
IL2CPP_EXTERN_C String_t* _stringLiteral801D8833BA004D17402685FF6318357FBC1B44F9;
IL2CPP_EXTERN_C String_t* _stringLiteral817FBC8BE8C7857B3D6E3ABCF92CBDDB8223BEBF;
IL2CPP_EXTERN_C String_t* _stringLiteral8541EE780EF4DC1F34810B10894AE1E92EDF2AFC;
IL2CPP_EXTERN_C String_t* _stringLiteral87800B4A75DD8B0011C948E92D83F2E86C6B5712;
IL2CPP_EXTERN_C String_t* _stringLiteral889681BC3A80E56134690DF875A3FBA61B5B466C;
IL2CPP_EXTERN_C String_t* _stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58;
IL2CPP_EXTERN_C String_t* _stringLiteral911BBAF6EE2E8B8539792FBDB85037632AAFF286;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9D8B9FD355171813130CD3B41FD9F37299B0129C;
IL2CPP_EXTERN_C String_t* _stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9;
IL2CPP_EXTERN_C String_t* _stringLiteralA054EF3BCC300EA4D2C9A849E83B5A072D9DEC5B;
IL2CPP_EXTERN_C String_t* _stringLiteralA094D70D9DE22D5DA98BACF8F508493F18555E43;
IL2CPP_EXTERN_C String_t* _stringLiteralA167048534E5FECD791503CFDB493AAF4DB7C77E;
IL2CPP_EXTERN_C String_t* _stringLiteralA27B365DFED618556AC0BEDBC6F9404F3B6A08EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469;
IL2CPP_EXTERN_C String_t* _stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B;
IL2CPP_EXTERN_C String_t* _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604;
IL2CPP_EXTERN_C String_t* _stringLiteralA70404454AB55F3143AD9DFD63FE5BDE24FBE67B;
IL2CPP_EXTERN_C String_t* _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E;
IL2CPP_EXTERN_C String_t* _stringLiteralAB6511403DAE59CCF2465B82E6018127C5093F77;
IL2CPP_EXTERN_C String_t* _stringLiteralAE6299F91DAA0F344C6731281B03FB38284D0CB9;
IL2CPP_EXTERN_C String_t* _stringLiteralB64D9AAFE51181A105C4BAA552671091DA93FDD0;
IL2CPP_EXTERN_C String_t* _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F;
IL2CPP_EXTERN_C String_t* _stringLiteralB8F69A9E93D2E1821DEF40EB2CC3366478285E53;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8;
IL2CPP_EXTERN_C String_t* _stringLiteralC1914BF22FEC7A97A71BAEF5492B71BDD9979776;
IL2CPP_EXTERN_C String_t* _stringLiteralC2BEA1A2159F1EB8FF67E0DE1EA2DFD8C6B1C90D;
IL2CPP_EXTERN_C String_t* _stringLiteralC5C7FFE413849F314AE012FDFAC66E3E2AAE0345;
IL2CPP_EXTERN_C String_t* _stringLiteralC6347ECA22C6DF182EF85FDF20EB9438FD9C5DE0;
IL2CPP_EXTERN_C String_t* _stringLiteralC6C27B57AF1002C9029CFEF4015A5CB58520BA18;
IL2CPP_EXTERN_C String_t* _stringLiteralC821208638FFC1CF18E6352E75ADEECECB68F377;
IL2CPP_EXTERN_C String_t* _stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE;
IL2CPP_EXTERN_C String_t* _stringLiteralD34F53D6EAB55E6A41864ABFDDAD1C942F3CE340;
IL2CPP_EXTERN_C String_t* _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198;
IL2CPP_EXTERN_C String_t* _stringLiteralD6283870D9F21EFD35B495616BF397B01FA65367;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC49BC785D61BC9059D58A11D4236141FAE16DFE;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0A824476E32633DB9AC86E53F3AD44D92E8948;
IL2CPP_EXTERN_C String_t* _stringLiteralDE0DD70FB06DBE96877F1F8536FAF73A328B01B6;
IL2CPP_EXTERN_C String_t* _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191;
IL2CPP_EXTERN_C String_t* _stringLiteralE14289FFCC642220740F632EA7B9DB2A151E9557;
IL2CPP_EXTERN_C String_t* _stringLiteralE72244112E26CC7393078017740C57633BD6F11F;
IL2CPP_EXTERN_C String_t* _stringLiteralE950F75E81DA790C3F01E7A14E1540C1F060DED9;
IL2CPP_EXTERN_C String_t* _stringLiteralF31EF0A3102B972AB34E9DD1727BD61576897EE2;
IL2CPP_EXTERN_C String_t* _stringLiteralF34550EE1F0479AABE0E68A88AD01EA39EB14FAD;
IL2CPP_EXTERN_C String_t* _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184;
IL2CPP_EXTERN_C String_t* _stringLiteralF8C9656D321F0A83C958BE5A3C99AFAA5D55B500;
IL2CPP_EXTERN_C String_t* _stringLiteralF95955C96CDED0175A4CF665EDCBB2C1D3B06D02;
IL2CPP_EXTERN_C String_t* _stringLiteralFA79DF414A80C6DBDBAB707743934FF4E0367122;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E;
IL2CPP_EXTERN_C String_t* _stringLiteralFD7E1424DC8725F5485D12AA80FC1C3FA0767FC2;
IL2CPP_EXTERN_C String_t* _stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549;
IL2CPP_EXTERN_C String_t* _stringLiteralFE7B033E378509772AB366A1073C8FE4C64F070D;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E_m3FC6302C290CCCBD43AE9F13FEE2AF543EEE176A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mEFEB4A968ACD1FAE64812EDE0FDE3B0A2B1455EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60_mAE3254D6FBFA5F4842FC645DA40C44AC368EB8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_mABEA32EA90E9E1C7801D1D8C6F164D16D63FED14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisVoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17_m95462C534F57B839E03EB9241A1DC58890783919_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PracticeVideoController_CheckOver_m056C5589FECC32D685C3027C4194591636A924CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostVoiceU3Ed__16_System_Collections_IEnumerator_Reset_mA5E646E18E84F921C4812CE947CD3965396A9A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPostVoiceU3Ed__18_System_Collections_IEnumerator_Reset_m027F52F4E2ABBABDA63BA317DD145694D15EF1F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPrepareVideoU3Ed__3_System_Collections_IEnumerator_Reset_m23D6B520AAE603AA57902BE1AB38DA12410179F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitFeedbackU3Ed__11_System_Collections_IEnumerator_Reset_m6D79AE57FCC4638F31EB4915E7B9CF686EA19768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CwaitSuccessU3Ed__10_System_Collections_IEnumerator_Reset_mB5ECB2DEF105A6DFC308842E7D79804A86A2FD04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2_RuntimeMethod_var;
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 ;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com;
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke;
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<System.Single>
struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____items_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__items_1() const { return ____items_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;

public:
	inline static int32_t get_offset_of_m_Used_0() { return static_cast<int32_t>(offsetof(AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF, ___m_Used_0)); }
	inline bool get_m_Used_0() const { return ___m_Used_0; }
	inline bool* get_address_of_m_Used_0() { return &___m_Used_0; }
	inline void set_m_Used_0(bool value)
	{
		___m_Used_0 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Text.Encoding
struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___dataItem_10)); }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t09A62F57142BF0456C8F414898A37E79BCC9F09E * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___encoderFallback_13)); }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_t02AC990075E17EB09F0D7E4831C3B3F264025CC4 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827, ___decoderFallback_14)); }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_tF86D337D6576E81E5DA285E5673183EBC66DEF8D * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___encodings_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29  : public RuntimeObject
{
public:
	// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::_readOnly
	bool ____readOnly_0;
	// System.Collections.ArrayList System.Collections.Specialized.NameObjectCollectionBase::_entriesArray
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ____entriesArray_1;
	// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::_keyComparer
	RuntimeObject* ____keyComparer_2;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_entriesTable
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ____entriesTable_3;
	// System.Collections.Specialized.NameObjectCollectionBase/NameObjectEntry modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Specialized.NameObjectCollectionBase::_nullKeyEntry
	NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * ____nullKeyEntry_4;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Specialized.NameObjectCollectionBase::_serializationInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____serializationInfo_5;
	// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::_version
	int32_t ____version_6;

public:
	inline static int32_t get_offset_of__readOnly_0() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____readOnly_0)); }
	inline bool get__readOnly_0() const { return ____readOnly_0; }
	inline bool* get_address_of__readOnly_0() { return &____readOnly_0; }
	inline void set__readOnly_0(bool value)
	{
		____readOnly_0 = value;
	}

	inline static int32_t get_offset_of__entriesArray_1() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesArray_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get__entriesArray_1() const { return ____entriesArray_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of__entriesArray_1() { return &____entriesArray_1; }
	inline void set__entriesArray_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		____entriesArray_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesArray_1), (void*)value);
	}

	inline static int32_t get_offset_of__keyComparer_2() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____keyComparer_2)); }
	inline RuntimeObject* get__keyComparer_2() const { return ____keyComparer_2; }
	inline RuntimeObject** get_address_of__keyComparer_2() { return &____keyComparer_2; }
	inline void set__keyComparer_2(RuntimeObject* value)
	{
		____keyComparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____keyComparer_2), (void*)value);
	}

	inline static int32_t get_offset_of__entriesTable_3() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____entriesTable_3)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get__entriesTable_3() const { return ____entriesTable_3; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of__entriesTable_3() { return &____entriesTable_3; }
	inline void set__entriesTable_3(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		____entriesTable_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____entriesTable_3), (void*)value);
	}

	inline static int32_t get_offset_of__nullKeyEntry_4() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____nullKeyEntry_4)); }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * get__nullKeyEntry_4() const { return ____nullKeyEntry_4; }
	inline NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 ** get_address_of__nullKeyEntry_4() { return &____nullKeyEntry_4; }
	inline void set__nullKeyEntry_4(NameObjectEntry_tB3CCC5A6F04E0522370F45A92233E91A5B9F4C22 * value)
	{
		____nullKeyEntry_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____nullKeyEntry_4), (void*)value);
	}

	inline static int32_t get_offset_of__serializationInfo_5() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____serializationInfo_5)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__serializationInfo_5() const { return ____serializationInfo_5; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__serializationInfo_5() { return &____serializationInfo_5; }
	inline void set__serializationInfo_5(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____serializationInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____serializationInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of__version_6() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29, ____version_6)); }
	inline int32_t get__version_6() const { return ____version_6; }
	inline int32_t* get_address_of__version_6() { return &____version_6; }
	inline void set__version_6(int32_t value)
	{
		____version_6 = value;
	}
};

struct NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields
{
public:
	// System.StringComparer System.Collections.Specialized.NameObjectCollectionBase::defaultComparer
	StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * ___defaultComparer_7;

public:
	inline static int32_t get_offset_of_defaultComparer_7() { return static_cast<int32_t>(offsetof(NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29_StaticFields, ___defaultComparer_7)); }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * get_defaultComparer_7() const { return ___defaultComparer_7; }
	inline StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 ** get_address_of_defaultComparer_7() { return &___defaultComparer_7; }
	inline void set_defaultComparer_7(StringComparer_t69EC059128AD0CAE268CA1A1C33125DAC9D7F8D6 * value)
	{
		___defaultComparer_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_7), (void*)value);
	}
};


// SavWav
struct SavWav_t6C61F09E4CB4EA720B7C8215878D7C7FA5F5B824  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.WWWForm
struct WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<System.Byte[]> UnityEngine.WWWForm::formData
	List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * ___formData_0;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fieldNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fieldNames_1;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::fileNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___fileNames_2;
	// System.Collections.Generic.List`1<System.String> UnityEngine.WWWForm::types
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___types_3;
	// System.Byte[] UnityEngine.WWWForm::boundary
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___boundary_4;
	// System.Boolean UnityEngine.WWWForm::containsFiles
	bool ___containsFiles_5;

public:
	inline static int32_t get_offset_of_formData_0() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___formData_0)); }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * get_formData_0() const { return ___formData_0; }
	inline List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE ** get_address_of_formData_0() { return &___formData_0; }
	inline void set_formData_0(List_1_t08E192A6E99857FD75EAA081A5D3BEC33729EDBE * value)
	{
		___formData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___formData_0), (void*)value);
	}

	inline static int32_t get_offset_of_fieldNames_1() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fieldNames_1)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fieldNames_1() const { return ___fieldNames_1; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fieldNames_1() { return &___fieldNames_1; }
	inline void set_fieldNames_1(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fieldNames_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fieldNames_1), (void*)value);
	}

	inline static int32_t get_offset_of_fileNames_2() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___fileNames_2)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_fileNames_2() const { return ___fileNames_2; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_fileNames_2() { return &___fileNames_2; }
	inline void set_fileNames_2(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___fileNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_types_3() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___types_3)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_types_3() const { return ___types_3; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_types_3() { return &___types_3; }
	inline void set_types_3(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___types_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___types_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___boundary_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_boundary_4() const { return ___boundary_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundary_4), (void*)value);
	}

	inline static int32_t get_offset_of_containsFiles_5() { return static_cast<int32_t>(offsetof(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB, ___containsFiles_5)); }
	inline bool get_containsFiles_5() const { return ___containsFiles_5; }
	inline bool* get_address_of_containsFiles_5() { return &___containsFiles_5; }
	inline void set_containsFiles_5(bool value)
	{
		___containsFiles_5 = value;
	}
};


// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// RecordSaveController/<waitFeedback>d__11
struct U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C  : public RuntimeObject
{
public:
	// System.Int32 RecordSaveController/<waitFeedback>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RecordSaveController/<waitFeedback>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RecordSaveController RecordSaveController/<waitFeedback>d__11::<>4__this
	RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * ___U3CU3E4__this_2;
	// System.Single RecordSaveController/<waitFeedback>d__11::seconds
	float ___seconds_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C, ___U3CU3E4__this_2)); }
	inline RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_3() { return static_cast<int32_t>(offsetof(U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C, ___seconds_3)); }
	inline float get_seconds_3() const { return ___seconds_3; }
	inline float* get_address_of_seconds_3() { return &___seconds_3; }
	inline void set_seconds_3(float value)
	{
		___seconds_3 = value;
	}
};


// RecordSaveController/<waitSuccess>d__10
struct U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2  : public RuntimeObject
{
public:
	// System.Int32 RecordSaveController/<waitSuccess>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RecordSaveController/<waitSuccess>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// RecordSaveController RecordSaveController/<waitSuccess>d__10::<>4__this
	RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * ___U3CU3E4__this_2;
	// System.Single RecordSaveController/<waitSuccess>d__10::seconds
	float ___seconds_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2, ___U3CU3E4__this_2)); }
	inline RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_seconds_3() { return static_cast<int32_t>(offsetof(U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2, ___seconds_3)); }
	inline float get_seconds_3() const { return ___seconds_3; }
	inline float* get_address_of_seconds_3() { return &___seconds_3; }
	inline void set_seconds_3(float value)
	{
		___seconds_3 = value;
	}
};


// SpeechToText/<PostVoice>d__18
struct U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53  : public RuntimeObject
{
public:
	// System.Int32 SpeechToText/<PostVoice>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object SpeechToText/<PostVoice>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String SpeechToText/<PostVoice>d__18::url
	String_t* ___url_2;
	// System.Byte[] SpeechToText/<PostVoice>d__18::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_3;
	// SpeechToText SpeechToText/<PostVoice>d__18::<>4__this
	SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * ___U3CU3E4__this_4;
	// UnityEngine.Networking.UnityWebRequest SpeechToText/<PostVoice>d__18::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_5;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___U3CU3E4__this_4)); }
	inline SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53, ___U3CrequestU3E5__2_5)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_5() const { return ___U3CrequestU3E5__2_5; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_5() { return &___U3CrequestU3E5__2_5; }
	inline void set_U3CrequestU3E5__2_5(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_5), (void*)value);
	}
};


// SpeechToText/VoiceRecognize
struct VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17  : public RuntimeObject
{
public:
	// System.String SpeechToText/VoiceRecognize::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}
};


// VideoHandler/<PrepareVideo>d__3
struct U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0  : public RuntimeObject
{
public:
	// System.Int32 VideoHandler/<PrepareVideo>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object VideoHandler/<PrepareVideo>d__3::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// VideoHandler VideoHandler/<PrepareVideo>d__3::<>4__this
	VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0, ___U3CU3E4__this_2)); }
	inline VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// stt/<PostVoice>d__16
struct U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72  : public RuntimeObject
{
public:
	// System.Int32 stt/<PostVoice>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object stt/<PostVoice>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String stt/<PostVoice>d__16::url
	String_t* ___url_2;
	// System.Byte[] stt/<PostVoice>d__16::data
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data_3;
	// UnityEngine.Networking.UnityWebRequest stt/<PostVoice>d__16::<request>5__2
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CrequestU3E5__2_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_url_2() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72, ___url_2)); }
	inline String_t* get_url_2() const { return ___url_2; }
	inline String_t** get_address_of_url_2() { return &___url_2; }
	inline void set_url_2(String_t* value)
	{
		___url_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_2), (void*)value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72, ___data_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_data_3() const { return ___data_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrequestU3E5__2_4() { return static_cast<int32_t>(offsetof(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72, ___U3CrequestU3E5__2_4)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CrequestU3E5__2_4() const { return ___U3CrequestU3E5__2_4; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CrequestU3E5__2_4() { return &___U3CrequestU3E5__2_4; }
	inline void set_U3CrequestU3E5__2_4(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CrequestU3E5__2_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrequestU3E5__2_4), (void*)value);
	}
};


// stt/VoiceRecognize
struct VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6  : public RuntimeObject
{
public:
	// System.String stt/VoiceRecognize::text
	String_t* ___text_0;

public:
	inline static int32_t get_offset_of_text_0() { return static_cast<int32_t>(offsetof(VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6, ___text_0)); }
	inline String_t* get_text_0() const { return ___text_0; }
	inline String_t** get_address_of_text_0() { return &___text_0; }
	inline void set_text_0(String_t* value)
	{
		___text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_0), (void*)value);
	}
};


// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E  : public AbstractEventData_tA0B5065DE3430C0031ADE061668E1C7073D718DF
{
public:
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * ___m_EventSystem_1;

public:
	inline static int32_t get_offset_of_m_EventSystem_1() { return static_cast<int32_t>(offsetof(BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E, ___m_EventSystem_1)); }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * get_m_EventSystem_1() const { return ___m_EventSystem_1; }
	inline EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C ** get_address_of_m_EventSystem_1() { return &___m_EventSystem_1; }
	inline void set_m_EventSystem_1(EventSystem_t5DC458FCD0355A74CDCCE79287B38B9C4278E39C * value)
	{
		___m_EventSystem_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EventSystem_1), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D  : public NameObjectCollectionBase_t1317925F87C5856FA09F855B2B03D838DDC88D29
{
public:
	// System.String[] System.Collections.Specialized.NameValueCollection::_all
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____all_8;
	// System.String[] System.Collections.Specialized.NameValueCollection::_allKeys
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____allKeys_9;

public:
	inline static int32_t get_offset_of__all_8() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____all_8)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__all_8() const { return ____all_8; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__all_8() { return &____all_8; }
	inline void set__all_8(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____all_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____all_8), (void*)value);
	}

	inline static int32_t get_offset_of__allKeys_9() { return static_cast<int32_t>(offsetof(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D, ____allKeys_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__allKeys_9() const { return ____allKeys_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__allKeys_9() { return &____allKeys_9; }
	inline void set__allKeys_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____allKeys_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____allKeys_9), (void*)value);
	}
};


// UnityEngine.Rect
struct Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * ____asyncActiveSemaphore_3;

public:
	inline static int32_t get_offset_of__activeReadWriteTask_2() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____activeReadWriteTask_2)); }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * get__activeReadWriteTask_2() const { return ____activeReadWriteTask_2; }
	inline ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 ** get_address_of__activeReadWriteTask_2() { return &____activeReadWriteTask_2; }
	inline void set__activeReadWriteTask_2(ReadWriteTask_t32CD2C230786712954C1DB518DBE420A1F4C7974 * value)
	{
		____activeReadWriteTask_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeReadWriteTask_2), (void*)value);
	}

	inline static int32_t get_offset_of__asyncActiveSemaphore_3() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB, ____asyncActiveSemaphore_3)); }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * get__asyncActiveSemaphore_3() const { return ____asyncActiveSemaphore_3; }
	inline SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 ** get_address_of__asyncActiveSemaphore_3() { return &____asyncActiveSemaphore_3; }
	inline void set__asyncActiveSemaphore_3(SemaphoreSlim_t3EF85FC980AE57957BEBB6B78E81DE2E3233D385 * value)
	{
		____asyncActiveSemaphore_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncActiveSemaphore_3), (void*)value);
	}
};

struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields
{
public:
	// System.IO.Stream System.IO.Stream::Null
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___Null_1;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB_StaticFields, ___Null_1)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_Null_1() const { return ___Null_1; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}
};


// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.UInt16
struct UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};


// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Net.Security.AuthenticationLevel
struct AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165 
{
public:
	// System.Int32 System.Net.Security.AuthenticationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AuthenticationLevel_tABDA8290B869DCA69B73080E99B1E3FE6F475165, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Net.DecompressionMethods
struct DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC 
{
public:
	// System.Int32 System.Net.DecompressionMethods::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DecompressionMethods_t76ACF45ED0A6BDCC13358657248D674BCC1015BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.FileAccess
struct FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B 
{
public:
	// System.Int32 System.IO.FileAccess::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccess_t09E176678AB8520C44024354E0DB2F01D40A2F5B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileAttributes
struct FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE 
{
public:
	// System.Int32 System.IO.FileAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAttributes_t47DBB9A73CF80C7CA21C9AAB8D5336C92D32C1AE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.FileMode
struct FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336 
{
public:
	// System.Int32 System.IO.FileMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileMode_t7AB84351F909CC2A0F99B798E50C6E8610994336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpStatusCode
struct HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.MemoryStream
struct MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.MemoryStream::_buffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____buffer_4;
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
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ____lastReadTask_13;

public:
	inline static int32_t get_offset_of__buffer_4() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____buffer_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__buffer_4() const { return ____buffer_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__buffer_4() { return &____buffer_4; }
	inline void set__buffer_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____buffer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_4), (void*)value);
	}

	inline static int32_t get_offset_of__origin_5() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____origin_5)); }
	inline int32_t get__origin_5() const { return ____origin_5; }
	inline int32_t* get_address_of__origin_5() { return &____origin_5; }
	inline void set__origin_5(int32_t value)
	{
		____origin_5 = value;
	}

	inline static int32_t get_offset_of__position_6() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____position_6)); }
	inline int32_t get__position_6() const { return ____position_6; }
	inline int32_t* get_address_of__position_6() { return &____position_6; }
	inline void set__position_6(int32_t value)
	{
		____position_6 = value;
	}

	inline static int32_t get_offset_of__length_7() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____length_7)); }
	inline int32_t get__length_7() const { return ____length_7; }
	inline int32_t* get_address_of__length_7() { return &____length_7; }
	inline void set__length_7(int32_t value)
	{
		____length_7 = value;
	}

	inline static int32_t get_offset_of__capacity_8() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____capacity_8)); }
	inline int32_t get__capacity_8() const { return ____capacity_8; }
	inline int32_t* get_address_of__capacity_8() { return &____capacity_8; }
	inline void set__capacity_8(int32_t value)
	{
		____capacity_8 = value;
	}

	inline static int32_t get_offset_of__expandable_9() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____expandable_9)); }
	inline bool get__expandable_9() const { return ____expandable_9; }
	inline bool* get_address_of__expandable_9() { return &____expandable_9; }
	inline void set__expandable_9(bool value)
	{
		____expandable_9 = value;
	}

	inline static int32_t get_offset_of__writable_10() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____writable_10)); }
	inline bool get__writable_10() const { return ____writable_10; }
	inline bool* get_address_of__writable_10() { return &____writable_10; }
	inline void set__writable_10(bool value)
	{
		____writable_10 = value;
	}

	inline static int32_t get_offset_of__exposable_11() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____exposable_11)); }
	inline bool get__exposable_11() const { return ____exposable_11; }
	inline bool* get_address_of__exposable_11() { return &____exposable_11; }
	inline void set__exposable_11(bool value)
	{
		____exposable_11 = value;
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}

	inline static int32_t get_offset_of__lastReadTask_13() { return static_cast<int32_t>(offsetof(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C, ____lastReadTask_13)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get__lastReadTask_13() const { return ____lastReadTask_13; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of__lastReadTask_13() { return &____lastReadTask_13; }
	inline void set__lastReadTask_13(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		____lastReadTask_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____lastReadTask_13), (void*)value);
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// System.IO.SeekOrigin
struct SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F 
{
public:
	// System.Int32 System.IO.SeekOrigin::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SeekOrigin_t4A91B37D046CD7A6578066059AE9F6269A888D4F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.IO.StreamReader
struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.IO.Stream System.IO.StreamReader::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_5;
	// System.Text.Encoding System.IO.StreamReader::encoding
	Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding_6;
	// System.Text.Decoder System.IO.StreamReader::decoder
	Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * ___decoder_7;
	// System.Byte[] System.IO.StreamReader::byteBuffer
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___byteBuffer_8;
	// System.Char[] System.IO.StreamReader::charBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___charBuffer_9;
	// System.Byte[] System.IO.StreamReader::_preamble
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ____preamble_10;
	// System.Int32 System.IO.StreamReader::charPos
	int32_t ___charPos_11;
	// System.Int32 System.IO.StreamReader::charLen
	int32_t ___charLen_12;
	// System.Int32 System.IO.StreamReader::byteLen
	int32_t ___byteLen_13;
	// System.Int32 System.IO.StreamReader::bytePos
	int32_t ___bytePos_14;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_15;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_16;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_17;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_18;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_19;
	// System.Threading.Tasks.Task modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StreamReader::_asyncReadTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ____asyncReadTask_20;

public:
	inline static int32_t get_offset_of_stream_5() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___stream_5)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_5() const { return ___stream_5; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_5() { return &___stream_5; }
	inline void set_stream_5(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_5), (void*)value);
	}

	inline static int32_t get_offset_of_encoding_6() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___encoding_6)); }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * get_encoding_6() const { return ___encoding_6; }
	inline Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 ** get_address_of_encoding_6() { return &___encoding_6; }
	inline void set_encoding_6(Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * value)
	{
		___encoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_decoder_7() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___decoder_7)); }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * get_decoder_7() const { return ___decoder_7; }
	inline Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 ** get_address_of_decoder_7() { return &___decoder_7; }
	inline void set_decoder_7(Decoder_t91B2ED8AEC25AA24D23A00265203BE992B12C370 * value)
	{
		___decoder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoder_7), (void*)value);
	}

	inline static int32_t get_offset_of_byteBuffer_8() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteBuffer_8)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_byteBuffer_8() const { return ___byteBuffer_8; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_byteBuffer_8() { return &___byteBuffer_8; }
	inline void set_byteBuffer_8(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___byteBuffer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byteBuffer_8), (void*)value);
	}

	inline static int32_t get_offset_of_charBuffer_9() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charBuffer_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_charBuffer_9() const { return ___charBuffer_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_charBuffer_9() { return &___charBuffer_9; }
	inline void set_charBuffer_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___charBuffer_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___charBuffer_9), (void*)value);
	}

	inline static int32_t get_offset_of__preamble_10() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____preamble_10)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get__preamble_10() const { return ____preamble_10; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of__preamble_10() { return &____preamble_10; }
	inline void set__preamble_10(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		____preamble_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preamble_10), (void*)value);
	}

	inline static int32_t get_offset_of_charPos_11() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charPos_11)); }
	inline int32_t get_charPos_11() const { return ___charPos_11; }
	inline int32_t* get_address_of_charPos_11() { return &___charPos_11; }
	inline void set_charPos_11(int32_t value)
	{
		___charPos_11 = value;
	}

	inline static int32_t get_offset_of_charLen_12() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___charLen_12)); }
	inline int32_t get_charLen_12() const { return ___charLen_12; }
	inline int32_t* get_address_of_charLen_12() { return &___charLen_12; }
	inline void set_charLen_12(int32_t value)
	{
		___charLen_12 = value;
	}

	inline static int32_t get_offset_of_byteLen_13() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___byteLen_13)); }
	inline int32_t get_byteLen_13() const { return ___byteLen_13; }
	inline int32_t* get_address_of_byteLen_13() { return &___byteLen_13; }
	inline void set_byteLen_13(int32_t value)
	{
		___byteLen_13 = value;
	}

	inline static int32_t get_offset_of_bytePos_14() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ___bytePos_14)); }
	inline int32_t get_bytePos_14() const { return ___bytePos_14; }
	inline int32_t* get_address_of_bytePos_14() { return &___bytePos_14; }
	inline void set_bytePos_14(int32_t value)
	{
		___bytePos_14 = value;
	}

	inline static int32_t get_offset_of__maxCharsPerBuffer_15() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____maxCharsPerBuffer_15)); }
	inline int32_t get__maxCharsPerBuffer_15() const { return ____maxCharsPerBuffer_15; }
	inline int32_t* get_address_of__maxCharsPerBuffer_15() { return &____maxCharsPerBuffer_15; }
	inline void set__maxCharsPerBuffer_15(int32_t value)
	{
		____maxCharsPerBuffer_15 = value;
	}

	inline static int32_t get_offset_of__detectEncoding_16() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____detectEncoding_16)); }
	inline bool get__detectEncoding_16() const { return ____detectEncoding_16; }
	inline bool* get_address_of__detectEncoding_16() { return &____detectEncoding_16; }
	inline void set__detectEncoding_16(bool value)
	{
		____detectEncoding_16 = value;
	}

	inline static int32_t get_offset_of__checkPreamble_17() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____checkPreamble_17)); }
	inline bool get__checkPreamble_17() const { return ____checkPreamble_17; }
	inline bool* get_address_of__checkPreamble_17() { return &____checkPreamble_17; }
	inline void set__checkPreamble_17(bool value)
	{
		____checkPreamble_17 = value;
	}

	inline static int32_t get_offset_of__isBlocked_18() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____isBlocked_18)); }
	inline bool get__isBlocked_18() const { return ____isBlocked_18; }
	inline bool* get_address_of__isBlocked_18() { return &____isBlocked_18; }
	inline void set__isBlocked_18(bool value)
	{
		____isBlocked_18 = value;
	}

	inline static int32_t get_offset_of__closable_19() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____closable_19)); }
	inline bool get__closable_19() const { return ____closable_19; }
	inline bool* get_address_of__closable_19() { return &____closable_19; }
	inline void set__closable_19(bool value)
	{
		____closable_19 = value;
	}

	inline static int32_t get_offset_of__asyncReadTask_20() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3, ____asyncReadTask_20)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get__asyncReadTask_20() const { return ____asyncReadTask_20; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of__asyncReadTask_20() { return &____asyncReadTask_20; }
	inline void set__asyncReadTask_20(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		____asyncReadTask_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____asyncReadTask_20), (void*)value);
	}
};

struct StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields
{
public:
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * ___Null_4;

public:
	inline static int32_t get_offset_of_Null_4() { return static_cast<int32_t>(offsetof(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_StaticFields, ___Null_4)); }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * get_Null_4() const { return ___Null_4; }
	inline StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 ** get_address_of_Null_4() { return &___Null_4; }
	inline void set_Null_4(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * value)
	{
		___Null_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_4), (void*)value);
	}
};


// System.Security.Principal.TokenImpersonationLevel
struct TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838 
{
public:
	// System.Int32 System.Security.Principal.TokenImpersonationLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TokenImpersonationLevel_t666D9E038A04949CBCDDDBA08E5FD612F3EE4838, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.WebCamKind
struct WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2 
{
public:
	// System.Int32 UnityEngine.WebCamKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebCamKind_t27EA4C0DCCBC088C1C35CC9BB08F0BCF22A890F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Net.WebHeaderCollectionType
struct WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736 
{
public:
	// System.UInt16 System.Net.WebHeaderCollectionType::value__
	uint16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WebHeaderCollectionType_t07786FA148E21DD3628FCEA5DAE961CAC9202736, ___value___2)); }
	inline uint16_t get_value___2() const { return ___value___2; }
	inline uint16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint16_t value)
	{
		___value___2 = value;
	}
};


// System.Net.HttpWebRequest/NtlmAuthState
struct NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535 
{
public:
	// System.Int32 System.Net.HttpWebRequest/NtlmAuthState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NtlmAuthState_tB25DC6ECE6512540ECD9B75F3B047DA7E5976535, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.PointerEventData/InputButton
struct InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D 
{
public:
	// System.Int32 UnityEngine.EventSystems.PointerEventData/InputButton::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputButton_tA5409FE587ADC841D2BF80835D04074A89C59A9D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/MovementType
struct MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/MovementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MovementType_tAC9293D74600C5C0F8769961576D21C7107BB258, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ScrollRect/ScrollbarVisibility
struct ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E 
{
public:
	// System.Int32 UnityEngine.UI.ScrollRect/ScrollbarVisibility::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ScrollbarVisibility_t8223EB8BD4F3CB01D1A246265D1563AAB5F89F2E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Scrollbar/Direction
struct Direction_tCE7C4B78403A18007E901268411DB754E7B784B7 
{
public:
	// System.Int32 UnityEngine.UI.Scrollbar/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tCE7C4B78403A18007E901268411DB754E7B784B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.IO.FileStream
struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26  : public Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB
{
public:
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * ___safeHandle_8;
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

public:
	inline static int32_t get_offset_of_buf_6() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_6)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_6() const { return ___buf_6; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_6() { return &___buf_6; }
	inline void set_buf_6(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_6), (void*)value);
	}

	inline static int32_t get_offset_of_name_7() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___name_7)); }
	inline String_t* get_name_7() const { return ___name_7; }
	inline String_t** get_address_of_name_7() { return &___name_7; }
	inline void set_name_7(String_t* value)
	{
		___name_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_7), (void*)value);
	}

	inline static int32_t get_offset_of_safeHandle_8() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___safeHandle_8)); }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * get_safeHandle_8() const { return ___safeHandle_8; }
	inline SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 ** get_address_of_safeHandle_8() { return &___safeHandle_8; }
	inline void set_safeHandle_8(SafeFileHandle_tC77A9860A03C31DC46AD2C08EC10EACDC3B7A662 * value)
	{
		___safeHandle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___safeHandle_8), (void*)value);
	}

	inline static int32_t get_offset_of_isExposed_9() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___isExposed_9)); }
	inline bool get_isExposed_9() const { return ___isExposed_9; }
	inline bool* get_address_of_isExposed_9() { return &___isExposed_9; }
	inline void set_isExposed_9(bool value)
	{
		___isExposed_9 = value;
	}

	inline static int32_t get_offset_of_append_startpos_10() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___append_startpos_10)); }
	inline int64_t get_append_startpos_10() const { return ___append_startpos_10; }
	inline int64_t* get_address_of_append_startpos_10() { return &___append_startpos_10; }
	inline void set_append_startpos_10(int64_t value)
	{
		___append_startpos_10 = value;
	}

	inline static int32_t get_offset_of_access_11() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___access_11)); }
	inline int32_t get_access_11() const { return ___access_11; }
	inline int32_t* get_address_of_access_11() { return &___access_11; }
	inline void set_access_11(int32_t value)
	{
		___access_11 = value;
	}

	inline static int32_t get_offset_of_owner_12() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___owner_12)); }
	inline bool get_owner_12() const { return ___owner_12; }
	inline bool* get_address_of_owner_12() { return &___owner_12; }
	inline void set_owner_12(bool value)
	{
		___owner_12 = value;
	}

	inline static int32_t get_offset_of_async_13() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___async_13)); }
	inline bool get_async_13() const { return ___async_13; }
	inline bool* get_address_of_async_13() { return &___async_13; }
	inline void set_async_13(bool value)
	{
		___async_13 = value;
	}

	inline static int32_t get_offset_of_canseek_14() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___canseek_14)); }
	inline bool get_canseek_14() const { return ___canseek_14; }
	inline bool* get_address_of_canseek_14() { return &___canseek_14; }
	inline void set_canseek_14(bool value)
	{
		___canseek_14 = value;
	}

	inline static int32_t get_offset_of_anonymous_15() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___anonymous_15)); }
	inline bool get_anonymous_15() const { return ___anonymous_15; }
	inline bool* get_address_of_anonymous_15() { return &___anonymous_15; }
	inline void set_anonymous_15(bool value)
	{
		___anonymous_15 = value;
	}

	inline static int32_t get_offset_of_buf_dirty_16() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_dirty_16)); }
	inline bool get_buf_dirty_16() const { return ___buf_dirty_16; }
	inline bool* get_address_of_buf_dirty_16() { return &___buf_dirty_16; }
	inline void set_buf_dirty_16(bool value)
	{
		___buf_dirty_16 = value;
	}

	inline static int32_t get_offset_of_buf_size_17() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_size_17)); }
	inline int32_t get_buf_size_17() const { return ___buf_size_17; }
	inline int32_t* get_address_of_buf_size_17() { return &___buf_size_17; }
	inline void set_buf_size_17(int32_t value)
	{
		___buf_size_17 = value;
	}

	inline static int32_t get_offset_of_buf_length_18() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_length_18)); }
	inline int32_t get_buf_length_18() const { return ___buf_length_18; }
	inline int32_t* get_address_of_buf_length_18() { return &___buf_length_18; }
	inline void set_buf_length_18(int32_t value)
	{
		___buf_length_18 = value;
	}

	inline static int32_t get_offset_of_buf_offset_19() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_offset_19)); }
	inline int32_t get_buf_offset_19() const { return ___buf_offset_19; }
	inline int32_t* get_address_of_buf_offset_19() { return &___buf_offset_19; }
	inline void set_buf_offset_19(int32_t value)
	{
		___buf_offset_19 = value;
	}

	inline static int32_t get_offset_of_buf_start_20() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26, ___buf_start_20)); }
	inline int64_t get_buf_start_20() const { return ___buf_start_20; }
	inline int64_t* get_address_of_buf_start_20() { return &___buf_start_20; }
	inline void set_buf_start_20(int64_t value)
	{
		___buf_start_20 = value;
	}
};

struct FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields
{
public:
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject * ___buf_recycle_lock_5;

public:
	inline static int32_t get_offset_of_buf_recycle_4() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_4)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_buf_recycle_4() const { return ___buf_recycle_4; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_buf_recycle_4() { return &___buf_recycle_4; }
	inline void set_buf_recycle_4(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___buf_recycle_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_4), (void*)value);
	}

	inline static int32_t get_offset_of_buf_recycle_lock_5() { return static_cast<int32_t>(offsetof(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_StaticFields, ___buf_recycle_lock_5)); }
	inline RuntimeObject * get_buf_recycle_lock_5() const { return ___buf_recycle_lock_5; }
	inline RuntimeObject ** get_address_of_buf_recycle_lock_5() { return &___buf_recycle_lock_5; }
	inline void set_buf_recycle_lock_5(RuntimeObject * value)
	{
		___buf_recycle_lock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buf_recycle_lock_5), (void*)value);
	}
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.Net.HttpWebResponse
struct HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB  : public WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0
{
public:
	// System.Uri System.Net.HttpWebResponse::uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___uri_1;
	// System.Net.WebHeaderCollection System.Net.HttpWebResponse::webHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___webHeaders_2;
	// System.Net.CookieCollection System.Net.HttpWebResponse::cookieCollection
	CookieCollection_t2D2FA42D43C1A8053D95FD2205360B2E0B94AF06 * ___cookieCollection_3;
	// System.String System.Net.HttpWebResponse::method
	String_t* ___method_4;
	// System.Version System.Net.HttpWebResponse::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_5;
	// System.Net.HttpStatusCode System.Net.HttpWebResponse::statusCode
	int32_t ___statusCode_6;
	// System.String System.Net.HttpWebResponse::statusDescription
	String_t* ___statusDescription_7;
	// System.Int64 System.Net.HttpWebResponse::contentLength
	int64_t ___contentLength_8;
	// System.String System.Net.HttpWebResponse::contentType
	String_t* ___contentType_9;
	// System.Net.CookieContainer System.Net.HttpWebResponse::cookie_container
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ___cookie_container_10;
	// System.Boolean System.Net.HttpWebResponse::disposed
	bool ___disposed_11;
	// System.IO.Stream System.Net.HttpWebResponse::stream
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream_12;

public:
	inline static int32_t get_offset_of_uri_1() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___uri_1)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_uri_1() const { return ___uri_1; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_uri_1() { return &___uri_1; }
	inline void set_uri_1(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___uri_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_1), (void*)value);
	}

	inline static int32_t get_offset_of_webHeaders_2() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___webHeaders_2)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_webHeaders_2() const { return ___webHeaders_2; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_webHeaders_2() { return &___webHeaders_2; }
	inline void set_webHeaders_2(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___webHeaders_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webHeaders_2), (void*)value);
	}

	inline static int32_t get_offset_of_cookieCollection_3() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___cookieCollection_3)); }
	inline CookieCollection_t2D2FA42D43C1A8053D95FD2205360B2E0B94AF06 * get_cookieCollection_3() const { return ___cookieCollection_3; }
	inline CookieCollection_t2D2FA42D43C1A8053D95FD2205360B2E0B94AF06 ** get_address_of_cookieCollection_3() { return &___cookieCollection_3; }
	inline void set_cookieCollection_3(CookieCollection_t2D2FA42D43C1A8053D95FD2205360B2E0B94AF06 * value)
	{
		___cookieCollection_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieCollection_3), (void*)value);
	}

	inline static int32_t get_offset_of_method_4() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___method_4)); }
	inline String_t* get_method_4() const { return ___method_4; }
	inline String_t** get_address_of_method_4() { return &___method_4; }
	inline void set_method_4(String_t* value)
	{
		___method_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_4), (void*)value);
	}

	inline static int32_t get_offset_of_version_5() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___version_5)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_5() const { return ___version_5; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_5() { return &___version_5; }
	inline void set_version_5(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_5), (void*)value);
	}

	inline static int32_t get_offset_of_statusCode_6() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___statusCode_6)); }
	inline int32_t get_statusCode_6() const { return ___statusCode_6; }
	inline int32_t* get_address_of_statusCode_6() { return &___statusCode_6; }
	inline void set_statusCode_6(int32_t value)
	{
		___statusCode_6 = value;
	}

	inline static int32_t get_offset_of_statusDescription_7() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___statusDescription_7)); }
	inline String_t* get_statusDescription_7() const { return ___statusDescription_7; }
	inline String_t** get_address_of_statusDescription_7() { return &___statusDescription_7; }
	inline void set_statusDescription_7(String_t* value)
	{
		___statusDescription_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___statusDescription_7), (void*)value);
	}

	inline static int32_t get_offset_of_contentLength_8() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___contentLength_8)); }
	inline int64_t get_contentLength_8() const { return ___contentLength_8; }
	inline int64_t* get_address_of_contentLength_8() { return &___contentLength_8; }
	inline void set_contentLength_8(int64_t value)
	{
		___contentLength_8 = value;
	}

	inline static int32_t get_offset_of_contentType_9() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___contentType_9)); }
	inline String_t* get_contentType_9() const { return ___contentType_9; }
	inline String_t** get_address_of_contentType_9() { return &___contentType_9; }
	inline void set_contentType_9(String_t* value)
	{
		___contentType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentType_9), (void*)value);
	}

	inline static int32_t get_offset_of_cookie_container_10() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___cookie_container_10)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get_cookie_container_10() const { return ___cookie_container_10; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of_cookie_container_10() { return &___cookie_container_10; }
	inline void set_cookie_container_10(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		___cookie_container_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookie_container_10), (void*)value);
	}

	inline static int32_t get_offset_of_disposed_11() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___disposed_11)); }
	inline bool get_disposed_11() const { return ___disposed_11; }
	inline bool* get_address_of_disposed_11() { return &___disposed_11; }
	inline void set_disposed_11(bool value)
	{
		___disposed_11 = value;
	}

	inline static int32_t get_offset_of_stream_12() { return static_cast<int32_t>(offsetof(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB, ___stream_12)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_stream_12() const { return ___stream_12; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_stream_12() { return &___stream_12; }
	inline void set_stream_12(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___stream_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stream_12), (void*)value);
	}
};


// System.IO.MonoIOStat
struct MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 
{
public:
	// System.IO.FileAttributes System.IO.MonoIOStat::fileAttributes
	int32_t ___fileAttributes_0;
	// System.Int64 System.IO.MonoIOStat::Length
	int64_t ___Length_1;
	// System.Int64 System.IO.MonoIOStat::CreationTime
	int64_t ___CreationTime_2;
	// System.Int64 System.IO.MonoIOStat::LastAccessTime
	int64_t ___LastAccessTime_3;
	// System.Int64 System.IO.MonoIOStat::LastWriteTime
	int64_t ___LastWriteTime_4;

public:
	inline static int32_t get_offset_of_fileAttributes_0() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___fileAttributes_0)); }
	inline int32_t get_fileAttributes_0() const { return ___fileAttributes_0; }
	inline int32_t* get_address_of_fileAttributes_0() { return &___fileAttributes_0; }
	inline void set_fileAttributes_0(int32_t value)
	{
		___fileAttributes_0 = value;
	}

	inline static int32_t get_offset_of_Length_1() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___Length_1)); }
	inline int64_t get_Length_1() const { return ___Length_1; }
	inline int64_t* get_address_of_Length_1() { return &___Length_1; }
	inline void set_Length_1(int64_t value)
	{
		___Length_1 = value;
	}

	inline static int32_t get_offset_of_CreationTime_2() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___CreationTime_2)); }
	inline int64_t get_CreationTime_2() const { return ___CreationTime_2; }
	inline int64_t* get_address_of_CreationTime_2() { return &___CreationTime_2; }
	inline void set_CreationTime_2(int64_t value)
	{
		___CreationTime_2 = value;
	}

	inline static int32_t get_offset_of_LastAccessTime_3() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastAccessTime_3)); }
	inline int64_t get_LastAccessTime_3() const { return ___LastAccessTime_3; }
	inline int64_t* get_address_of_LastAccessTime_3() { return &___LastAccessTime_3; }
	inline void set_LastAccessTime_3(int64_t value)
	{
		___LastAccessTime_3 = value;
	}

	inline static int32_t get_offset_of_LastWriteTime_4() { return static_cast<int32_t>(offsetof(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71, ___LastWriteTime_4)); }
	inline int64_t get_LastWriteTime_4() const { return ___LastWriteTime_4; }
	inline int64_t* get_address_of_LastWriteTime_4() { return &___LastWriteTime_4; }
	inline void set_LastWriteTime_4(int64_t value)
	{
		___LastWriteTime_4 = value;
	}
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954  : public BaseEventData_t722C48843CF21B50E06CC0E2E679415E38A7444E
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;

public:
	inline static int32_t get_offset_of_U3CpointerEnterU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerEnterU3Ek__BackingField_2)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerEnterU3Ek__BackingField_2() const { return ___U3CpointerEnterU3Ek__BackingField_2; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerEnterU3Ek__BackingField_2() { return &___U3CpointerEnterU3Ek__BackingField_2; }
	inline void set_U3CpointerEnterU3Ek__BackingField_2(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerEnterU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerEnterU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerPress_3() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___m_PointerPress_3)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_PointerPress_3() const { return ___m_PointerPress_3; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_PointerPress_3() { return &___m_PointerPress_3; }
	inline void set_m_PointerPress_3(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_PointerPress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerPress_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3ClastPressU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3ClastPressU3Ek__BackingField_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3ClastPressU3Ek__BackingField_4() const { return ___U3ClastPressU3Ek__BackingField_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3ClastPressU3Ek__BackingField_4() { return &___U3ClastPressU3Ek__BackingField_4; }
	inline void set_U3ClastPressU3Ek__BackingField_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3ClastPressU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3ClastPressU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CrawPointerPressU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CrawPointerPressU3Ek__BackingField_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CrawPointerPressU3Ek__BackingField_5() const { return ___U3CrawPointerPressU3Ek__BackingField_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CrawPointerPressU3Ek__BackingField_5() { return &___U3CrawPointerPressU3Ek__BackingField_5; }
	inline void set_U3CrawPointerPressU3Ek__BackingField_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CrawPointerPressU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CrawPointerPressU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerDragU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerDragU3Ek__BackingField_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerDragU3Ek__BackingField_6() const { return ___U3CpointerDragU3Ek__BackingField_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerDragU3Ek__BackingField_6() { return &___U3CpointerDragU3Ek__BackingField_6; }
	inline void set_U3CpointerDragU3Ek__BackingField_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerDragU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerDragU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerClickU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerClickU3Ek__BackingField_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_U3CpointerClickU3Ek__BackingField_7() const { return ___U3CpointerClickU3Ek__BackingField_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_U3CpointerClickU3Ek__BackingField_7() { return &___U3CpointerClickU3Ek__BackingField_7; }
	inline void set_U3CpointerClickU3Ek__BackingField_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___U3CpointerClickU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CpointerClickU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerCurrentRaycastU3Ek__BackingField_8)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerCurrentRaycastU3Ek__BackingField_8() const { return ___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerCurrentRaycastU3Ek__BackingField_8() { return &___U3CpointerCurrentRaycastU3Ek__BackingField_8; }
	inline void set_U3CpointerCurrentRaycastU3Ek__BackingField_8(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerCurrentRaycastU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerCurrentRaycastU3Ek__BackingField_8))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerPressRaycastU3Ek__BackingField_9)); }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  get_U3CpointerPressRaycastU3Ek__BackingField_9() const { return ___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE * get_address_of_U3CpointerPressRaycastU3Ek__BackingField_9() { return &___U3CpointerPressRaycastU3Ek__BackingField_9; }
	inline void set_U3CpointerPressRaycastU3Ek__BackingField_9(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  value)
	{
		___U3CpointerPressRaycastU3Ek__BackingField_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___m_GameObject_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CpointerPressRaycastU3Ek__BackingField_9))->___module_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_hovered_10() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___hovered_10)); }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * get_hovered_10() const { return ___hovered_10; }
	inline List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 ** get_address_of_hovered_10() { return &___hovered_10; }
	inline void set_hovered_10(List_1_t6D0A10F47F3440798295D2FFFC6D016477AF38E5 * value)
	{
		___hovered_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hovered_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CeligibleForClickU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CeligibleForClickU3Ek__BackingField_11)); }
	inline bool get_U3CeligibleForClickU3Ek__BackingField_11() const { return ___U3CeligibleForClickU3Ek__BackingField_11; }
	inline bool* get_address_of_U3CeligibleForClickU3Ek__BackingField_11() { return &___U3CeligibleForClickU3Ek__BackingField_11; }
	inline void set_U3CeligibleForClickU3Ek__BackingField_11(bool value)
	{
		___U3CeligibleForClickU3Ek__BackingField_11 = value;
	}

	inline static int32_t get_offset_of_U3CpointerIdU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpointerIdU3Ek__BackingField_12)); }
	inline int32_t get_U3CpointerIdU3Ek__BackingField_12() const { return ___U3CpointerIdU3Ek__BackingField_12; }
	inline int32_t* get_address_of_U3CpointerIdU3Ek__BackingField_12() { return &___U3CpointerIdU3Ek__BackingField_12; }
	inline void set_U3CpointerIdU3Ek__BackingField_12(int32_t value)
	{
		___U3CpointerIdU3Ek__BackingField_12 = value;
	}

	inline static int32_t get_offset_of_U3CpositionU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpositionU3Ek__BackingField_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpositionU3Ek__BackingField_13() const { return ___U3CpositionU3Ek__BackingField_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpositionU3Ek__BackingField_13() { return &___U3CpositionU3Ek__BackingField_13; }
	inline void set_U3CpositionU3Ek__BackingField_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpositionU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CdeltaU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdeltaU3Ek__BackingField_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CdeltaU3Ek__BackingField_14() const { return ___U3CdeltaU3Ek__BackingField_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CdeltaU3Ek__BackingField_14() { return &___U3CdeltaU3Ek__BackingField_14; }
	inline void set_U3CdeltaU3Ek__BackingField_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CdeltaU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CpressPositionU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CpressPositionU3Ek__BackingField_15)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CpressPositionU3Ek__BackingField_15() const { return ___U3CpressPositionU3Ek__BackingField_15; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CpressPositionU3Ek__BackingField_15() { return &___U3CpressPositionU3Ek__BackingField_15; }
	inline void set_U3CpressPositionU3Ek__BackingField_15(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CpressPositionU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CworldPositionU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldPositionU3Ek__BackingField_16)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldPositionU3Ek__BackingField_16() const { return ___U3CworldPositionU3Ek__BackingField_16; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldPositionU3Ek__BackingField_16() { return &___U3CworldPositionU3Ek__BackingField_16; }
	inline void set_U3CworldPositionU3Ek__BackingField_16(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldPositionU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CworldNormalU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CworldNormalU3Ek__BackingField_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_U3CworldNormalU3Ek__BackingField_17() const { return ___U3CworldNormalU3Ek__BackingField_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_U3CworldNormalU3Ek__BackingField_17() { return &___U3CworldNormalU3Ek__BackingField_17; }
	inline void set_U3CworldNormalU3Ek__BackingField_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___U3CworldNormalU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CclickTimeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickTimeU3Ek__BackingField_18)); }
	inline float get_U3CclickTimeU3Ek__BackingField_18() const { return ___U3CclickTimeU3Ek__BackingField_18; }
	inline float* get_address_of_U3CclickTimeU3Ek__BackingField_18() { return &___U3CclickTimeU3Ek__BackingField_18; }
	inline void set_U3CclickTimeU3Ek__BackingField_18(float value)
	{
		___U3CclickTimeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CclickCountU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CclickCountU3Ek__BackingField_19)); }
	inline int32_t get_U3CclickCountU3Ek__BackingField_19() const { return ___U3CclickCountU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CclickCountU3Ek__BackingField_19() { return &___U3CclickCountU3Ek__BackingField_19; }
	inline void set_U3CclickCountU3Ek__BackingField_19(int32_t value)
	{
		___U3CclickCountU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CscrollDeltaU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CscrollDeltaU3Ek__BackingField_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_U3CscrollDeltaU3Ek__BackingField_20() const { return ___U3CscrollDeltaU3Ek__BackingField_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_U3CscrollDeltaU3Ek__BackingField_20() { return &___U3CscrollDeltaU3Ek__BackingField_20; }
	inline void set_U3CscrollDeltaU3Ek__BackingField_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___U3CscrollDeltaU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CuseDragThresholdU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CuseDragThresholdU3Ek__BackingField_21)); }
	inline bool get_U3CuseDragThresholdU3Ek__BackingField_21() const { return ___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CuseDragThresholdU3Ek__BackingField_21() { return &___U3CuseDragThresholdU3Ek__BackingField_21; }
	inline void set_U3CuseDragThresholdU3Ek__BackingField_21(bool value)
	{
		___U3CuseDragThresholdU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CdraggingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CdraggingU3Ek__BackingField_22)); }
	inline bool get_U3CdraggingU3Ek__BackingField_22() const { return ___U3CdraggingU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CdraggingU3Ek__BackingField_22() { return &___U3CdraggingU3Ek__BackingField_22; }
	inline void set_U3CdraggingU3Ek__BackingField_22(bool value)
	{
		___U3CdraggingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CbuttonU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954, ___U3CbuttonU3Ek__BackingField_23)); }
	inline int32_t get_U3CbuttonU3Ek__BackingField_23() const { return ___U3CbuttonU3Ek__BackingField_23; }
	inline int32_t* get_address_of_U3CbuttonU3Ek__BackingField_23() { return &___U3CbuttonU3Ek__BackingField_23; }
	inline void set_U3CbuttonU3Ek__BackingField_23(int32_t value)
	{
		___U3CbuttonU3Ek__BackingField_23 = value;
	}
};


// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_DownloadHandler_1)); }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_UploadHandler_2)); }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___m_Uri_4)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tDA66C86D1302CE4266DBB078361F7A363C7B005E_marshaled_com* ___m_CertificateHandler_3;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396  : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_pinvoke : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396_marshaled_com : public AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com
{
	UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669  : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_pinvoke : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandlerRaw
struct UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_marshaled_com : public UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA_marshaled_com
{
};

// UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C 
{
public:
	// System.String UnityEngine.WebCamDevice::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.WebCamDevice::m_DepthCameraName
	String_t* ___m_DepthCameraName_1;
	// System.Int32 UnityEngine.WebCamDevice::m_Flags
	int32_t ___m_Flags_2;
	// UnityEngine.WebCamKind UnityEngine.WebCamDevice::m_Kind
	int32_t ___m_Kind_3;
	// UnityEngine.Resolution[] UnityEngine.WebCamDevice::m_Resolutions
	ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* ___m_Resolutions_4;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DepthCameraName_1() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_DepthCameraName_1)); }
	inline String_t* get_m_DepthCameraName_1() const { return ___m_DepthCameraName_1; }
	inline String_t** get_address_of_m_DepthCameraName_1() { return &___m_DepthCameraName_1; }
	inline void set_m_DepthCameraName_1(String_t* value)
	{
		___m_DepthCameraName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DepthCameraName_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_2() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Flags_2)); }
	inline int32_t get_m_Flags_2() const { return ___m_Flags_2; }
	inline int32_t* get_address_of_m_Flags_2() { return &___m_Flags_2; }
	inline void set_m_Flags_2(int32_t value)
	{
		___m_Flags_2 = value;
	}

	inline static int32_t get_offset_of_m_Kind_3() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Kind_3)); }
	inline int32_t get_m_Kind_3() const { return ___m_Kind_3; }
	inline int32_t* get_address_of_m_Kind_3() { return &___m_Kind_3; }
	inline void set_m_Kind_3(int32_t value)
	{
		___m_Kind_3 = value;
	}

	inline static int32_t get_offset_of_m_Resolutions_4() { return static_cast<int32_t>(offsetof(WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C, ___m_Resolutions_4)); }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* get_m_Resolutions_4() const { return ___m_Resolutions_4; }
	inline ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597** get_address_of_m_Resolutions_4() { return &___m_Resolutions_4; }
	inline void set_m_Resolutions_4(ResolutionU5BU5D_t06BC9930CBEA8A2A4EEBA9534C2498E7CD0B5597* value)
	{
		___m_Resolutions_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Resolutions_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};
// Native definition for COM marshalling of UnityEngine.WebCamDevice
struct WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_DepthCameraName_1;
	int32_t ___m_Flags_2;
	int32_t ___m_Kind_3;
	Resolution_t1906ED569E57B1BD0C7F7A8DBCEA1D584F5F1767 * ___m_Resolutions_4;
};

// System.Net.WebHeaderCollection
struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4  : public NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D
{
public:
	// System.String[] System.Net.WebHeaderCollection::m_CommonHeaders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_CommonHeaders_11;
	// System.Int32 System.Net.WebHeaderCollection::m_NumCommonHeaders
	int32_t ___m_NumCommonHeaders_12;
	// System.Collections.Specialized.NameValueCollection System.Net.WebHeaderCollection::m_InnerCollection
	NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * ___m_InnerCollection_15;
	// System.Net.WebHeaderCollectionType System.Net.WebHeaderCollection::m_Type
	uint16_t ___m_Type_16;

public:
	inline static int32_t get_offset_of_m_CommonHeaders_11() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_CommonHeaders_11)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_CommonHeaders_11() const { return ___m_CommonHeaders_11; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_CommonHeaders_11() { return &___m_CommonHeaders_11; }
	inline void set_m_CommonHeaders_11(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_CommonHeaders_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CommonHeaders_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_NumCommonHeaders_12() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_NumCommonHeaders_12)); }
	inline int32_t get_m_NumCommonHeaders_12() const { return ___m_NumCommonHeaders_12; }
	inline int32_t* get_address_of_m_NumCommonHeaders_12() { return &___m_NumCommonHeaders_12; }
	inline void set_m_NumCommonHeaders_12(int32_t value)
	{
		___m_NumCommonHeaders_12 = value;
	}

	inline static int32_t get_offset_of_m_InnerCollection_15() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_InnerCollection_15)); }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * get_m_InnerCollection_15() const { return ___m_InnerCollection_15; }
	inline NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D ** get_address_of_m_InnerCollection_15() { return &___m_InnerCollection_15; }
	inline void set_m_InnerCollection_15(NameValueCollection_tE3BED11C58844E8A4D9A74F359692B9A51781B4D * value)
	{
		___m_InnerCollection_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InnerCollection_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_16() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4, ___m_Type_16)); }
	inline uint16_t get_m_Type_16() const { return ___m_Type_16; }
	inline uint16_t* get_address_of_m_Type_16() { return &___m_Type_16; }
	inline void set_m_Type_16(uint16_t value)
	{
		___m_Type_16 = value;
	}
};

struct WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields
{
public:
	// System.Net.HeaderInfoTable System.Net.WebHeaderCollection::HInfo
	HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * ___HInfo_10;
	// System.String[] System.Net.WebHeaderCollection::s_CommonHeaderNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___s_CommonHeaderNames_13;
	// System.SByte[] System.Net.WebHeaderCollection::s_CommonHeaderHints
	SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* ___s_CommonHeaderHints_14;
	// System.Char[] System.Net.WebHeaderCollection::HttpTrimCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HttpTrimCharacters_17;
	// System.Net.WebHeaderCollection/RfcChar[] System.Net.WebHeaderCollection::RfcCharMap
	RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* ___RfcCharMap_18;

public:
	inline static int32_t get_offset_of_HInfo_10() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HInfo_10)); }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * get_HInfo_10() const { return ___HInfo_10; }
	inline HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 ** get_address_of_HInfo_10() { return &___HInfo_10; }
	inline void set_HInfo_10(HeaderInfoTable_tC14711FD51BE2B331032AB0BAE14E2E2D88E77D4 * value)
	{
		___HInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderNames_13() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderNames_13)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_s_CommonHeaderNames_13() const { return ___s_CommonHeaderNames_13; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_s_CommonHeaderNames_13() { return &___s_CommonHeaderNames_13; }
	inline void set_s_CommonHeaderNames_13(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___s_CommonHeaderNames_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderNames_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_CommonHeaderHints_14() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___s_CommonHeaderHints_14)); }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* get_s_CommonHeaderHints_14() const { return ___s_CommonHeaderHints_14; }
	inline SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7** get_address_of_s_CommonHeaderHints_14() { return &___s_CommonHeaderHints_14; }
	inline void set_s_CommonHeaderHints_14(SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* value)
	{
		___s_CommonHeaderHints_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CommonHeaderHints_14), (void*)value);
	}

	inline static int32_t get_offset_of_HttpTrimCharacters_17() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___HttpTrimCharacters_17)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HttpTrimCharacters_17() const { return ___HttpTrimCharacters_17; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HttpTrimCharacters_17() { return &___HttpTrimCharacters_17; }
	inline void set_HttpTrimCharacters_17(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HttpTrimCharacters_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HttpTrimCharacters_17), (void*)value);
	}

	inline static int32_t get_offset_of_RfcCharMap_18() { return static_cast<int32_t>(offsetof(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4_StaticFields, ___RfcCharMap_18)); }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* get_RfcCharMap_18() const { return ___RfcCharMap_18; }
	inline RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3** get_address_of_RfcCharMap_18() { return &___RfcCharMap_18; }
	inline void set_RfcCharMap_18(RfcCharU5BU5D_t58A49D25CFFD1B17023C3AD1BE05914C4A3FE8D3* value)
	{
		___RfcCharMap_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RfcCharMap_18), (void*)value);
	}
};


// System.Net.WebRequest
struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Net.Security.AuthenticationLevel System.Net.WebRequest::m_AuthenticationLevel
	int32_t ___m_AuthenticationLevel_4;
	// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::m_ImpersonationLevel
	int32_t ___m_ImpersonationLevel_5;

public:
	inline static int32_t get_offset_of_m_AuthenticationLevel_4() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_AuthenticationLevel_4)); }
	inline int32_t get_m_AuthenticationLevel_4() const { return ___m_AuthenticationLevel_4; }
	inline int32_t* get_address_of_m_AuthenticationLevel_4() { return &___m_AuthenticationLevel_4; }
	inline void set_m_AuthenticationLevel_4(int32_t value)
	{
		___m_AuthenticationLevel_4 = value;
	}

	inline static int32_t get_offset_of_m_ImpersonationLevel_5() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E, ___m_ImpersonationLevel_5)); }
	inline int32_t get_m_ImpersonationLevel_5() const { return ___m_ImpersonationLevel_5; }
	inline int32_t* get_address_of_m_ImpersonationLevel_5() { return &___m_ImpersonationLevel_5; }
	inline void set_m_ImpersonationLevel_5(int32_t value)
	{
		___m_ImpersonationLevel_5 = value;
	}
};

struct WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields
{
public:
	// System.Collections.ArrayList modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_PrefixList
	ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * ___s_PrefixList_1;
	// System.Object System.Net.WebRequest::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_2;
	// System.Net.TimerThread/Queue System.Net.WebRequest::s_DefaultTimerQueue
	Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * ___s_DefaultTimerQueue_3;
	// System.Net.WebRequest/DesignerWebRequestCreate System.Net.WebRequest::webRequestCreate
	DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * ___webRequestCreate_6;
	// System.Net.IWebProxy modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxy
	RuntimeObject* ___s_DefaultWebProxy_7;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Net.WebRequest::s_DefaultWebProxyInitialized
	bool ___s_DefaultWebProxyInitialized_8;

public:
	inline static int32_t get_offset_of_s_PrefixList_1() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_PrefixList_1)); }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * get_s_PrefixList_1() const { return ___s_PrefixList_1; }
	inline ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 ** get_address_of_s_PrefixList_1() { return &___s_PrefixList_1; }
	inline void set_s_PrefixList_1(ArrayList_t6C1A49839DC1F0D568E8E11FA1626FCF0EC06575 * value)
	{
		___s_PrefixList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrefixList_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_2() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_InternalSyncObject_2)); }
	inline RuntimeObject * get_s_InternalSyncObject_2() const { return ___s_InternalSyncObject_2; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_2() { return &___s_InternalSyncObject_2; }
	inline void set_s_InternalSyncObject_2(RuntimeObject * value)
	{
		___s_InternalSyncObject_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultTimerQueue_3() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultTimerQueue_3)); }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * get_s_DefaultTimerQueue_3() const { return ___s_DefaultTimerQueue_3; }
	inline Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB ** get_address_of_s_DefaultTimerQueue_3() { return &___s_DefaultTimerQueue_3; }
	inline void set_s_DefaultTimerQueue_3(Queue_tBA613BE3643BDEB5F58ACBD9BD6499402CA178BB * value)
	{
		___s_DefaultTimerQueue_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultTimerQueue_3), (void*)value);
	}

	inline static int32_t get_offset_of_webRequestCreate_6() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___webRequestCreate_6)); }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * get_webRequestCreate_6() const { return ___webRequestCreate_6; }
	inline DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A ** get_address_of_webRequestCreate_6() { return &___webRequestCreate_6; }
	inline void set_webRequestCreate_6(DesignerWebRequestCreate_tC9CEDD13174469ABB2A24A158F14669B05BA262A * value)
	{
		___webRequestCreate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webRequestCreate_6), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxy_7() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxy_7)); }
	inline RuntimeObject* get_s_DefaultWebProxy_7() const { return ___s_DefaultWebProxy_7; }
	inline RuntimeObject** get_address_of_s_DefaultWebProxy_7() { return &___s_DefaultWebProxy_7; }
	inline void set_s_DefaultWebProxy_7(RuntimeObject* value)
	{
		___s_DefaultWebProxy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultWebProxy_7), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultWebProxyInitialized_8() { return static_cast<int32_t>(offsetof(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_StaticFields, ___s_DefaultWebProxyInitialized_8)); }
	inline bool get_s_DefaultWebProxyInitialized_8() const { return ___s_DefaultWebProxyInitialized_8; }
	inline bool* get_address_of_s_DefaultWebProxyInitialized_8() { return &___s_DefaultWebProxyInitialized_8; }
	inline void set_s_DefaultWebProxyInitialized_8(bool value)
	{
		___s_DefaultWebProxyInitialized_8 = value;
	}
};


// System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 
{
public:
	// System.Net.HttpWebRequest System.Net.HttpWebRequest/AuthorizationState::request
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isProxy
	bool ___isProxy_1;
	// System.Boolean System.Net.HttpWebRequest/AuthorizationState::isCompleted
	bool ___isCompleted_2;
	// System.Net.HttpWebRequest/NtlmAuthState System.Net.HttpWebRequest/AuthorizationState::ntlm_auth_state
	int32_t ___ntlm_auth_state_3;

public:
	inline static int32_t get_offset_of_request_0() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___request_0)); }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * get_request_0() const { return ___request_0; }
	inline HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A ** get_address_of_request_0() { return &___request_0; }
	inline void set_request_0(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * value)
	{
		___request_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___request_0), (void*)value);
	}

	inline static int32_t get_offset_of_isProxy_1() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isProxy_1)); }
	inline bool get_isProxy_1() const { return ___isProxy_1; }
	inline bool* get_address_of_isProxy_1() { return &___isProxy_1; }
	inline void set_isProxy_1(bool value)
	{
		___isProxy_1 = value;
	}

	inline static int32_t get_offset_of_isCompleted_2() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___isCompleted_2)); }
	inline bool get_isCompleted_2() const { return ___isCompleted_2; }
	inline bool* get_address_of_isCompleted_2() { return &___isCompleted_2; }
	inline void set_isCompleted_2(bool value)
	{
		___isCompleted_2 = value;
	}

	inline static int32_t get_offset_of_ntlm_auth_state_3() { return static_cast<int32_t>(offsetof(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55, ___ntlm_auth_state_3)); }
	inline int32_t get_ntlm_auth_state_3() const { return ___ntlm_auth_state_3; }
	inline int32_t* get_address_of_ntlm_auth_state_3() { return &___ntlm_auth_state_3; }
	inline void set_ntlm_auth_state_3(int32_t value)
	{
		___ntlm_auth_state_3 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_pinvoke
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};
// Native definition for COM marshalling of System.Net.HttpWebRequest/AuthorizationState
struct AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55_marshaled_com
{
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * ___request_0;
	int32_t ___isProxy_1;
	int32_t ___isCompleted_2;
	int32_t ___ntlm_auth_state_3;
};

// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.IO.FileSystemInfo
struct FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.IO.MonoIOStat System.IO.FileSystemInfo::_data
	MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  ____data_1;
	// System.Int32 System.IO.FileSystemInfo::_dataInitialised
	int32_t ____dataInitialised_2;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_3;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_4;
	// System.String System.IO.FileSystemInfo::_displayPath
	String_t* ____displayPath_5;

public:
	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____data_1)); }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  get__data_1() const { return ____data_1; }
	inline MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71 * get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(MonoIOStat_t24C11A45B0B5F84242B31BA1EF48458595FF5F71  value)
	{
		____data_1 = value;
	}

	inline static int32_t get_offset_of__dataInitialised_2() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____dataInitialised_2)); }
	inline int32_t get__dataInitialised_2() const { return ____dataInitialised_2; }
	inline int32_t* get_address_of__dataInitialised_2() { return &____dataInitialised_2; }
	inline void set__dataInitialised_2(int32_t value)
	{
		____dataInitialised_2 = value;
	}

	inline static int32_t get_offset_of_FullPath_3() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___FullPath_3)); }
	inline String_t* get_FullPath_3() const { return ___FullPath_3; }
	inline String_t** get_address_of_FullPath_3() { return &___FullPath_3; }
	inline void set_FullPath_3(String_t* value)
	{
		___FullPath_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FullPath_3), (void*)value);
	}

	inline static int32_t get_offset_of_OriginalPath_4() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ___OriginalPath_4)); }
	inline String_t* get_OriginalPath_4() const { return ___OriginalPath_4; }
	inline String_t** get_address_of_OriginalPath_4() { return &___OriginalPath_4; }
	inline void set_OriginalPath_4(String_t* value)
	{
		___OriginalPath_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OriginalPath_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayPath_5() { return static_cast<int32_t>(offsetof(FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246, ____displayPath_5)); }
	inline String_t* get__displayPath_5() const { return ____displayPath_5; }
	inline String_t** get_address_of__displayPath_5() { return &____displayPath_5; }
	inline void set__displayPath_5(String_t* value)
	{
		____displayPath_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayPath_5), (void*)value);
	}
};


// System.Net.HttpWebRequest
struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A  : public WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E
{
public:
	// System.Uri System.Net.HttpWebRequest::requestUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___requestUri_9;
	// System.Uri System.Net.HttpWebRequest::actualUri
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___actualUri_10;
	// System.Boolean System.Net.HttpWebRequest::hostChanged
	bool ___hostChanged_11;
	// System.Boolean System.Net.HttpWebRequest::allowAutoRedirect
	bool ___allowAutoRedirect_12;
	// System.Boolean System.Net.HttpWebRequest::allowBuffering
	bool ___allowBuffering_13;
	// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::certificates
	X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * ___certificates_14;
	// System.String System.Net.HttpWebRequest::connectionGroup
	String_t* ___connectionGroup_15;
	// System.Boolean System.Net.HttpWebRequest::haveContentLength
	bool ___haveContentLength_16;
	// System.Int64 System.Net.HttpWebRequest::contentLength
	int64_t ___contentLength_17;
	// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::continueDelegate
	HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * ___continueDelegate_18;
	// System.Net.CookieContainer System.Net.HttpWebRequest::cookieContainer
	CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * ___cookieContainer_19;
	// System.Net.ICredentials System.Net.HttpWebRequest::credentials
	RuntimeObject* ___credentials_20;
	// System.Boolean System.Net.HttpWebRequest::haveResponse
	bool ___haveResponse_21;
	// System.Boolean System.Net.HttpWebRequest::requestSent
	bool ___requestSent_22;
	// System.Net.WebHeaderCollection System.Net.HttpWebRequest::webHeaders
	WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * ___webHeaders_23;
	// System.Boolean System.Net.HttpWebRequest::keepAlive
	bool ___keepAlive_24;
	// System.Int32 System.Net.HttpWebRequest::maxAutoRedirect
	int32_t ___maxAutoRedirect_25;
	// System.String System.Net.HttpWebRequest::mediaType
	String_t* ___mediaType_26;
	// System.String System.Net.HttpWebRequest::method
	String_t* ___method_27;
	// System.String System.Net.HttpWebRequest::initialMethod
	String_t* ___initialMethod_28;
	// System.Boolean System.Net.HttpWebRequest::pipelined
	bool ___pipelined_29;
	// System.Boolean System.Net.HttpWebRequest::preAuthenticate
	bool ___preAuthenticate_30;
	// System.Boolean System.Net.HttpWebRequest::usedPreAuth
	bool ___usedPreAuth_31;
	// System.Version System.Net.HttpWebRequest::version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___version_32;
	// System.Boolean System.Net.HttpWebRequest::force_version
	bool ___force_version_33;
	// System.Version System.Net.HttpWebRequest::actualVersion
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ___actualVersion_34;
	// System.Net.IWebProxy System.Net.HttpWebRequest::proxy
	RuntimeObject* ___proxy_35;
	// System.Boolean System.Net.HttpWebRequest::sendChunked
	bool ___sendChunked_36;
	// System.Net.ServicePoint System.Net.HttpWebRequest::servicePoint
	ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * ___servicePoint_37;
	// System.Int32 System.Net.HttpWebRequest::timeout
	int32_t ___timeout_38;
	// System.Net.WebRequestStream System.Net.HttpWebRequest::writeStream
	WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * ___writeStream_39;
	// System.Net.HttpWebResponse System.Net.HttpWebRequest::webResponse
	HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * ___webResponse_40;
	// System.Net.WebCompletionSource System.Net.HttpWebRequest::responseTask
	WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * ___responseTask_41;
	// System.Net.WebOperation System.Net.HttpWebRequest::currentOperation
	WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * ___currentOperation_42;
	// System.Int32 System.Net.HttpWebRequest::aborted
	int32_t ___aborted_43;
	// System.Boolean System.Net.HttpWebRequest::gotRequestStream
	bool ___gotRequestStream_44;
	// System.Int32 System.Net.HttpWebRequest::redirects
	int32_t ___redirects_45;
	// System.Boolean System.Net.HttpWebRequest::expectContinue
	bool ___expectContinue_46;
	// System.Boolean System.Net.HttpWebRequest::getResponseCalled
	bool ___getResponseCalled_47;
	// System.Object System.Net.HttpWebRequest::locker
	RuntimeObject * ___locker_48;
	// System.Boolean System.Net.HttpWebRequest::finished_reading
	bool ___finished_reading_49;
	// System.Net.DecompressionMethods System.Net.HttpWebRequest::auto_decomp
	int32_t ___auto_decomp_50;
	// System.Int32 System.Net.HttpWebRequest::readWriteTimeout
	int32_t ___readWriteTimeout_52;
	// Mono.Security.Interface.MonoTlsProvider System.Net.HttpWebRequest::tlsProvider
	MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * ___tlsProvider_53;
	// Mono.Security.Interface.MonoTlsSettings System.Net.HttpWebRequest::tlsSettings
	MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * ___tlsSettings_54;
	// System.Net.ServerCertValidationCallback System.Net.HttpWebRequest::certValidationCallback
	ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * ___certValidationCallback_55;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___auth_state_56;
	// System.Net.HttpWebRequest/AuthorizationState System.Net.HttpWebRequest::proxy_auth_state
	AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  ___proxy_auth_state_57;
	// System.String System.Net.HttpWebRequest::host
	String_t* ___host_58;
	// System.Func`2<System.IO.Stream,System.Threading.Tasks.Task> System.Net.HttpWebRequest::ResendContentFactory
	Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * ___ResendContentFactory_59;
	// System.Boolean System.Net.HttpWebRequest::<ThrowOnError>k__BackingField
	bool ___U3CThrowOnErrorU3Ek__BackingField_60;
	// System.Boolean System.Net.HttpWebRequest::unsafe_auth_blah
	bool ___unsafe_auth_blah_61;

public:
	inline static int32_t get_offset_of_requestUri_9() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestUri_9)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_requestUri_9() const { return ___requestUri_9; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_requestUri_9() { return &___requestUri_9; }
	inline void set_requestUri_9(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___requestUri_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requestUri_9), (void*)value);
	}

	inline static int32_t get_offset_of_actualUri_10() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualUri_10)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_actualUri_10() const { return ___actualUri_10; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_actualUri_10() { return &___actualUri_10; }
	inline void set_actualUri_10(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___actualUri_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualUri_10), (void*)value);
	}

	inline static int32_t get_offset_of_hostChanged_11() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___hostChanged_11)); }
	inline bool get_hostChanged_11() const { return ___hostChanged_11; }
	inline bool* get_address_of_hostChanged_11() { return &___hostChanged_11; }
	inline void set_hostChanged_11(bool value)
	{
		___hostChanged_11 = value;
	}

	inline static int32_t get_offset_of_allowAutoRedirect_12() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowAutoRedirect_12)); }
	inline bool get_allowAutoRedirect_12() const { return ___allowAutoRedirect_12; }
	inline bool* get_address_of_allowAutoRedirect_12() { return &___allowAutoRedirect_12; }
	inline void set_allowAutoRedirect_12(bool value)
	{
		___allowAutoRedirect_12 = value;
	}

	inline static int32_t get_offset_of_allowBuffering_13() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___allowBuffering_13)); }
	inline bool get_allowBuffering_13() const { return ___allowBuffering_13; }
	inline bool* get_address_of_allowBuffering_13() { return &___allowBuffering_13; }
	inline void set_allowBuffering_13(bool value)
	{
		___allowBuffering_13 = value;
	}

	inline static int32_t get_offset_of_certificates_14() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certificates_14)); }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * get_certificates_14() const { return ___certificates_14; }
	inline X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B ** get_address_of_certificates_14() { return &___certificates_14; }
	inline void set_certificates_14(X509CertificateCollection_t2990976CAD6265665564A400870A381968AB706B * value)
	{
		___certificates_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certificates_14), (void*)value);
	}

	inline static int32_t get_offset_of_connectionGroup_15() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___connectionGroup_15)); }
	inline String_t* get_connectionGroup_15() const { return ___connectionGroup_15; }
	inline String_t** get_address_of_connectionGroup_15() { return &___connectionGroup_15; }
	inline void set_connectionGroup_15(String_t* value)
	{
		___connectionGroup_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___connectionGroup_15), (void*)value);
	}

	inline static int32_t get_offset_of_haveContentLength_16() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveContentLength_16)); }
	inline bool get_haveContentLength_16() const { return ___haveContentLength_16; }
	inline bool* get_address_of_haveContentLength_16() { return &___haveContentLength_16; }
	inline void set_haveContentLength_16(bool value)
	{
		___haveContentLength_16 = value;
	}

	inline static int32_t get_offset_of_contentLength_17() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___contentLength_17)); }
	inline int64_t get_contentLength_17() const { return ___contentLength_17; }
	inline int64_t* get_address_of_contentLength_17() { return &___contentLength_17; }
	inline void set_contentLength_17(int64_t value)
	{
		___contentLength_17 = value;
	}

	inline static int32_t get_offset_of_continueDelegate_18() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___continueDelegate_18)); }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * get_continueDelegate_18() const { return ___continueDelegate_18; }
	inline HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F ** get_address_of_continueDelegate_18() { return &___continueDelegate_18; }
	inline void set_continueDelegate_18(HttpContinueDelegate_t84ADA70221E0AC5A340AD9D012F81C1683FC240F * value)
	{
		___continueDelegate_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___continueDelegate_18), (void*)value);
	}

	inline static int32_t get_offset_of_cookieContainer_19() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___cookieContainer_19)); }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * get_cookieContainer_19() const { return ___cookieContainer_19; }
	inline CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 ** get_address_of_cookieContainer_19() { return &___cookieContainer_19; }
	inline void set_cookieContainer_19(CookieContainer_tF22AADBBB0BBD4D3FF4440A226F8E8580B08F4C2 * value)
	{
		___cookieContainer_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cookieContainer_19), (void*)value);
	}

	inline static int32_t get_offset_of_credentials_20() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___credentials_20)); }
	inline RuntimeObject* get_credentials_20() const { return ___credentials_20; }
	inline RuntimeObject** get_address_of_credentials_20() { return &___credentials_20; }
	inline void set_credentials_20(RuntimeObject* value)
	{
		___credentials_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___credentials_20), (void*)value);
	}

	inline static int32_t get_offset_of_haveResponse_21() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___haveResponse_21)); }
	inline bool get_haveResponse_21() const { return ___haveResponse_21; }
	inline bool* get_address_of_haveResponse_21() { return &___haveResponse_21; }
	inline void set_haveResponse_21(bool value)
	{
		___haveResponse_21 = value;
	}

	inline static int32_t get_offset_of_requestSent_22() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___requestSent_22)); }
	inline bool get_requestSent_22() const { return ___requestSent_22; }
	inline bool* get_address_of_requestSent_22() { return &___requestSent_22; }
	inline void set_requestSent_22(bool value)
	{
		___requestSent_22 = value;
	}

	inline static int32_t get_offset_of_webHeaders_23() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webHeaders_23)); }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * get_webHeaders_23() const { return ___webHeaders_23; }
	inline WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 ** get_address_of_webHeaders_23() { return &___webHeaders_23; }
	inline void set_webHeaders_23(WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * value)
	{
		___webHeaders_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webHeaders_23), (void*)value);
	}

	inline static int32_t get_offset_of_keepAlive_24() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___keepAlive_24)); }
	inline bool get_keepAlive_24() const { return ___keepAlive_24; }
	inline bool* get_address_of_keepAlive_24() { return &___keepAlive_24; }
	inline void set_keepAlive_24(bool value)
	{
		___keepAlive_24 = value;
	}

	inline static int32_t get_offset_of_maxAutoRedirect_25() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___maxAutoRedirect_25)); }
	inline int32_t get_maxAutoRedirect_25() const { return ___maxAutoRedirect_25; }
	inline int32_t* get_address_of_maxAutoRedirect_25() { return &___maxAutoRedirect_25; }
	inline void set_maxAutoRedirect_25(int32_t value)
	{
		___maxAutoRedirect_25 = value;
	}

	inline static int32_t get_offset_of_mediaType_26() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___mediaType_26)); }
	inline String_t* get_mediaType_26() const { return ___mediaType_26; }
	inline String_t** get_address_of_mediaType_26() { return &___mediaType_26; }
	inline void set_mediaType_26(String_t* value)
	{
		___mediaType_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mediaType_26), (void*)value);
	}

	inline static int32_t get_offset_of_method_27() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___method_27)); }
	inline String_t* get_method_27() const { return ___method_27; }
	inline String_t** get_address_of_method_27() { return &___method_27; }
	inline void set_method_27(String_t* value)
	{
		___method_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_27), (void*)value);
	}

	inline static int32_t get_offset_of_initialMethod_28() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___initialMethod_28)); }
	inline String_t* get_initialMethod_28() const { return ___initialMethod_28; }
	inline String_t** get_address_of_initialMethod_28() { return &___initialMethod_28; }
	inline void set_initialMethod_28(String_t* value)
	{
		___initialMethod_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___initialMethod_28), (void*)value);
	}

	inline static int32_t get_offset_of_pipelined_29() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___pipelined_29)); }
	inline bool get_pipelined_29() const { return ___pipelined_29; }
	inline bool* get_address_of_pipelined_29() { return &___pipelined_29; }
	inline void set_pipelined_29(bool value)
	{
		___pipelined_29 = value;
	}

	inline static int32_t get_offset_of_preAuthenticate_30() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___preAuthenticate_30)); }
	inline bool get_preAuthenticate_30() const { return ___preAuthenticate_30; }
	inline bool* get_address_of_preAuthenticate_30() { return &___preAuthenticate_30; }
	inline void set_preAuthenticate_30(bool value)
	{
		___preAuthenticate_30 = value;
	}

	inline static int32_t get_offset_of_usedPreAuth_31() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___usedPreAuth_31)); }
	inline bool get_usedPreAuth_31() const { return ___usedPreAuth_31; }
	inline bool* get_address_of_usedPreAuth_31() { return &___usedPreAuth_31; }
	inline void set_usedPreAuth_31(bool value)
	{
		___usedPreAuth_31 = value;
	}

	inline static int32_t get_offset_of_version_32() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___version_32)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_version_32() const { return ___version_32; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_version_32() { return &___version_32; }
	inline void set_version_32(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___version_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___version_32), (void*)value);
	}

	inline static int32_t get_offset_of_force_version_33() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___force_version_33)); }
	inline bool get_force_version_33() const { return ___force_version_33; }
	inline bool* get_address_of_force_version_33() { return &___force_version_33; }
	inline void set_force_version_33(bool value)
	{
		___force_version_33 = value;
	}

	inline static int32_t get_offset_of_actualVersion_34() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___actualVersion_34)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get_actualVersion_34() const { return ___actualVersion_34; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of_actualVersion_34() { return &___actualVersion_34; }
	inline void set_actualVersion_34(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		___actualVersion_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actualVersion_34), (void*)value);
	}

	inline static int32_t get_offset_of_proxy_35() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_35)); }
	inline RuntimeObject* get_proxy_35() const { return ___proxy_35; }
	inline RuntimeObject** get_address_of_proxy_35() { return &___proxy_35; }
	inline void set_proxy_35(RuntimeObject* value)
	{
		___proxy_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_35), (void*)value);
	}

	inline static int32_t get_offset_of_sendChunked_36() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___sendChunked_36)); }
	inline bool get_sendChunked_36() const { return ___sendChunked_36; }
	inline bool* get_address_of_sendChunked_36() { return &___sendChunked_36; }
	inline void set_sendChunked_36(bool value)
	{
		___sendChunked_36 = value;
	}

	inline static int32_t get_offset_of_servicePoint_37() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___servicePoint_37)); }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * get_servicePoint_37() const { return ___servicePoint_37; }
	inline ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 ** get_address_of_servicePoint_37() { return &___servicePoint_37; }
	inline void set_servicePoint_37(ServicePoint_tA9162DE1F4EDB0DE0A8028EECEB94FDBAB719DB0 * value)
	{
		___servicePoint_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___servicePoint_37), (void*)value);
	}

	inline static int32_t get_offset_of_timeout_38() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___timeout_38)); }
	inline int32_t get_timeout_38() const { return ___timeout_38; }
	inline int32_t* get_address_of_timeout_38() { return &___timeout_38; }
	inline void set_timeout_38(int32_t value)
	{
		___timeout_38 = value;
	}

	inline static int32_t get_offset_of_writeStream_39() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___writeStream_39)); }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * get_writeStream_39() const { return ___writeStream_39; }
	inline WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 ** get_address_of_writeStream_39() { return &___writeStream_39; }
	inline void set_writeStream_39(WebRequestStream_t9F0251C03B8D0975476759A9C3791E6849E43887 * value)
	{
		___writeStream_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writeStream_39), (void*)value);
	}

	inline static int32_t get_offset_of_webResponse_40() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___webResponse_40)); }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * get_webResponse_40() const { return ___webResponse_40; }
	inline HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB ** get_address_of_webResponse_40() { return &___webResponse_40; }
	inline void set_webResponse_40(HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * value)
	{
		___webResponse_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___webResponse_40), (void*)value);
	}

	inline static int32_t get_offset_of_responseTask_41() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___responseTask_41)); }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * get_responseTask_41() const { return ___responseTask_41; }
	inline WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E ** get_address_of_responseTask_41() { return &___responseTask_41; }
	inline void set_responseTask_41(WebCompletionSource_tF1258B468350A374EC59049FE0E31C7879D6AB1E * value)
	{
		___responseTask_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___responseTask_41), (void*)value);
	}

	inline static int32_t get_offset_of_currentOperation_42() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___currentOperation_42)); }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * get_currentOperation_42() const { return ___currentOperation_42; }
	inline WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 ** get_address_of_currentOperation_42() { return &___currentOperation_42; }
	inline void set_currentOperation_42(WebOperation_tA657473A4429C6E434B401D4BF98A8654E5B3E00 * value)
	{
		___currentOperation_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentOperation_42), (void*)value);
	}

	inline static int32_t get_offset_of_aborted_43() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___aborted_43)); }
	inline int32_t get_aborted_43() const { return ___aborted_43; }
	inline int32_t* get_address_of_aborted_43() { return &___aborted_43; }
	inline void set_aborted_43(int32_t value)
	{
		___aborted_43 = value;
	}

	inline static int32_t get_offset_of_gotRequestStream_44() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___gotRequestStream_44)); }
	inline bool get_gotRequestStream_44() const { return ___gotRequestStream_44; }
	inline bool* get_address_of_gotRequestStream_44() { return &___gotRequestStream_44; }
	inline void set_gotRequestStream_44(bool value)
	{
		___gotRequestStream_44 = value;
	}

	inline static int32_t get_offset_of_redirects_45() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___redirects_45)); }
	inline int32_t get_redirects_45() const { return ___redirects_45; }
	inline int32_t* get_address_of_redirects_45() { return &___redirects_45; }
	inline void set_redirects_45(int32_t value)
	{
		___redirects_45 = value;
	}

	inline static int32_t get_offset_of_expectContinue_46() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___expectContinue_46)); }
	inline bool get_expectContinue_46() const { return ___expectContinue_46; }
	inline bool* get_address_of_expectContinue_46() { return &___expectContinue_46; }
	inline void set_expectContinue_46(bool value)
	{
		___expectContinue_46 = value;
	}

	inline static int32_t get_offset_of_getResponseCalled_47() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___getResponseCalled_47)); }
	inline bool get_getResponseCalled_47() const { return ___getResponseCalled_47; }
	inline bool* get_address_of_getResponseCalled_47() { return &___getResponseCalled_47; }
	inline void set_getResponseCalled_47(bool value)
	{
		___getResponseCalled_47 = value;
	}

	inline static int32_t get_offset_of_locker_48() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___locker_48)); }
	inline RuntimeObject * get_locker_48() const { return ___locker_48; }
	inline RuntimeObject ** get_address_of_locker_48() { return &___locker_48; }
	inline void set_locker_48(RuntimeObject * value)
	{
		___locker_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locker_48), (void*)value);
	}

	inline static int32_t get_offset_of_finished_reading_49() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___finished_reading_49)); }
	inline bool get_finished_reading_49() const { return ___finished_reading_49; }
	inline bool* get_address_of_finished_reading_49() { return &___finished_reading_49; }
	inline void set_finished_reading_49(bool value)
	{
		___finished_reading_49 = value;
	}

	inline static int32_t get_offset_of_auto_decomp_50() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auto_decomp_50)); }
	inline int32_t get_auto_decomp_50() const { return ___auto_decomp_50; }
	inline int32_t* get_address_of_auto_decomp_50() { return &___auto_decomp_50; }
	inline void set_auto_decomp_50(int32_t value)
	{
		___auto_decomp_50 = value;
	}

	inline static int32_t get_offset_of_readWriteTimeout_52() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___readWriteTimeout_52)); }
	inline int32_t get_readWriteTimeout_52() const { return ___readWriteTimeout_52; }
	inline int32_t* get_address_of_readWriteTimeout_52() { return &___readWriteTimeout_52; }
	inline void set_readWriteTimeout_52(int32_t value)
	{
		___readWriteTimeout_52 = value;
	}

	inline static int32_t get_offset_of_tlsProvider_53() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsProvider_53)); }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * get_tlsProvider_53() const { return ___tlsProvider_53; }
	inline MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 ** get_address_of_tlsProvider_53() { return &___tlsProvider_53; }
	inline void set_tlsProvider_53(MonoTlsProvider_tBE72637BEDBD1516A1BC30D94F7159B7289CF0D7 * value)
	{
		___tlsProvider_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsProvider_53), (void*)value);
	}

	inline static int32_t get_offset_of_tlsSettings_54() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___tlsSettings_54)); }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * get_tlsSettings_54() const { return ___tlsSettings_54; }
	inline MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 ** get_address_of_tlsSettings_54() { return &___tlsSettings_54; }
	inline void set_tlsSettings_54(MonoTlsSettings_tBDF72C906FE6477EFBA9493F7F5CB5ADE2C80E21 * value)
	{
		___tlsSettings_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tlsSettings_54), (void*)value);
	}

	inline static int32_t get_offset_of_certValidationCallback_55() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___certValidationCallback_55)); }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * get_certValidationCallback_55() const { return ___certValidationCallback_55; }
	inline ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA ** get_address_of_certValidationCallback_55() { return &___certValidationCallback_55; }
	inline void set_certValidationCallback_55(ServerCertValidationCallback_t885D5EF5D7240832CCAD6FA7D59D4ED2DEAAB1FA * value)
	{
		___certValidationCallback_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___certValidationCallback_55), (void*)value);
	}

	inline static int32_t get_offset_of_auth_state_56() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___auth_state_56)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_auth_state_56() const { return ___auth_state_56; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_auth_state_56() { return &___auth_state_56; }
	inline void set_auth_state_56(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___auth_state_56 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___auth_state_56))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_proxy_auth_state_57() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___proxy_auth_state_57)); }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  get_proxy_auth_state_57() const { return ___proxy_auth_state_57; }
	inline AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55 * get_address_of_proxy_auth_state_57() { return &___proxy_auth_state_57; }
	inline void set_proxy_auth_state_57(AuthorizationState_tAFF7CCE61655C69AC36E9D910C218D983D959B55  value)
	{
		___proxy_auth_state_57 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___proxy_auth_state_57))->___request_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_host_58() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___host_58)); }
	inline String_t* get_host_58() const { return ___host_58; }
	inline String_t** get_address_of_host_58() { return &___host_58; }
	inline void set_host_58(String_t* value)
	{
		___host_58 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___host_58), (void*)value);
	}

	inline static int32_t get_offset_of_ResendContentFactory_59() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___ResendContentFactory_59)); }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * get_ResendContentFactory_59() const { return ___ResendContentFactory_59; }
	inline Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 ** get_address_of_ResendContentFactory_59() { return &___ResendContentFactory_59; }
	inline void set_ResendContentFactory_59(Func_2_t1536C4C0AD9482796F7C72574A4B3DE8607E4E20 * value)
	{
		___ResendContentFactory_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ResendContentFactory_59), (void*)value);
	}

	inline static int32_t get_offset_of_U3CThrowOnErrorU3Ek__BackingField_60() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___U3CThrowOnErrorU3Ek__BackingField_60)); }
	inline bool get_U3CThrowOnErrorU3Ek__BackingField_60() const { return ___U3CThrowOnErrorU3Ek__BackingField_60; }
	inline bool* get_address_of_U3CThrowOnErrorU3Ek__BackingField_60() { return &___U3CThrowOnErrorU3Ek__BackingField_60; }
	inline void set_U3CThrowOnErrorU3Ek__BackingField_60(bool value)
	{
		___U3CThrowOnErrorU3Ek__BackingField_60 = value;
	}

	inline static int32_t get_offset_of_unsafe_auth_blah_61() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A, ___unsafe_auth_blah_61)); }
	inline bool get_unsafe_auth_blah_61() const { return ___unsafe_auth_blah_61; }
	inline bool* get_address_of_unsafe_auth_blah_61() { return &___unsafe_auth_blah_61; }
	inline void set_unsafe_auth_blah_61(bool value)
	{
		___unsafe_auth_blah_61 = value;
	}
};

struct HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields
{
public:
	// System.Int32 System.Net.HttpWebRequest::defaultMaxResponseHeadersLength
	int32_t ___defaultMaxResponseHeadersLength_51;

public:
	inline static int32_t get_offset_of_defaultMaxResponseHeadersLength_51() { return static_cast<int32_t>(offsetof(HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_StaticFields, ___defaultMaxResponseHeadersLength_51)); }
	inline int32_t get_defaultMaxResponseHeadersLength_51() const { return ___defaultMaxResponseHeadersLength_51; }
	inline int32_t* get_address_of_defaultMaxResponseHeadersLength_51() { return &___defaultMaxResponseHeadersLength_51; }
	inline void set_defaultMaxResponseHeadersLength_51(int32_t value)
	{
		___defaultMaxResponseHeadersLength_51 = value;
	}
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.WebCamTexture
struct WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.IO.DirectoryInfo
struct DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD  : public FileSystemInfo_t4479D65BB34DEAFCDA2A98F8B797D7C19EFDA246
{
public:
	// System.String System.IO.DirectoryInfo::current
	String_t* ___current_6;
	// System.String System.IO.DirectoryInfo::parent
	String_t* ___parent_7;

public:
	inline static int32_t get_offset_of_current_6() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___current_6)); }
	inline String_t* get_current_6() const { return ___current_6; }
	inline String_t** get_address_of_current_6() { return &___current_6; }
	inline void set_current_6(String_t* value)
	{
		___current_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_6), (void*)value);
	}

	inline static int32_t get_offset_of_parent_7() { return static_cast<int32_t>(offsetof(DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD, ___parent_7)); }
	inline String_t* get_parent_7() const { return ___parent_7; }
	inline String_t** get_address_of_parent_7() { return &___parent_7; }
	inline void set_parent_7(String_t* value)
	{
		___parent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_7), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___prepareCompleted_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___loopPointReached_5;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___started_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___frameDropped_7;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * ___errorReceived_8;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___seekCompleted_9;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * ___clockResyncOccurred_10;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * ___frameReady_11;

public:
	inline static int32_t get_offset_of_prepareCompleted_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___prepareCompleted_4)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_prepareCompleted_4() const { return ___prepareCompleted_4; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_prepareCompleted_4() { return &___prepareCompleted_4; }
	inline void set_prepareCompleted_4(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___prepareCompleted_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prepareCompleted_4), (void*)value);
	}

	inline static int32_t get_offset_of_loopPointReached_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___loopPointReached_5)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_loopPointReached_5() const { return ___loopPointReached_5; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_loopPointReached_5() { return &___loopPointReached_5; }
	inline void set_loopPointReached_5(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___loopPointReached_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loopPointReached_5), (void*)value);
	}

	inline static int32_t get_offset_of_started_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___started_6)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_started_6() const { return ___started_6; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_started_6() { return &___started_6; }
	inline void set_started_6(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___started_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___started_6), (void*)value);
	}

	inline static int32_t get_offset_of_frameDropped_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameDropped_7)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_frameDropped_7() const { return ___frameDropped_7; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_frameDropped_7() { return &___frameDropped_7; }
	inline void set_frameDropped_7(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___frameDropped_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameDropped_7), (void*)value);
	}

	inline static int32_t get_offset_of_errorReceived_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___errorReceived_8)); }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * get_errorReceived_8() const { return ___errorReceived_8; }
	inline ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 ** get_address_of_errorReceived_8() { return &___errorReceived_8; }
	inline void set_errorReceived_8(ErrorEventHandler_tD47781EBB7CF0CC4C111496024BD59B1D1A6A1F2 * value)
	{
		___errorReceived_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorReceived_8), (void*)value);
	}

	inline static int32_t get_offset_of_seekCompleted_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___seekCompleted_9)); }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * get_seekCompleted_9() const { return ___seekCompleted_9; }
	inline EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD ** get_address_of_seekCompleted_9() { return &___seekCompleted_9; }
	inline void set_seekCompleted_9(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * value)
	{
		___seekCompleted_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seekCompleted_9), (void*)value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_10() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___clockResyncOccurred_10)); }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * get_clockResyncOccurred_10() const { return ___clockResyncOccurred_10; }
	inline TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 ** get_address_of_clockResyncOccurred_10() { return &___clockResyncOccurred_10; }
	inline void set_clockResyncOccurred_10(TimeEventHandler_t7CA131EB85E0FFCBE8660E030698BD83D3994DD8 * value)
	{
		___clockResyncOccurred_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clockResyncOccurred_10), (void*)value);
	}

	inline static int32_t get_offset_of_frameReady_11() { return static_cast<int32_t>(offsetof(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86, ___frameReady_11)); }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * get_frameReady_11() const { return ___frameReady_11; }
	inline FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC ** get_address_of_frameReady_11() { return &___frameReady_11; }
	inline void set_frameReady_11(FrameReadyEventHandler_t9529BD5A34E9C8BE7D8A39D46A6C4ABC673374EC * value)
	{
		___frameReady_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frameReady_11), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// ButtonToggle
struct ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image ButtonToggle::btn1
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn1_4;
	// UnityEngine.UI.Image ButtonToggle::btn2
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn2_5;
	// UnityEngine.Sprite ButtonToggle::select_btn1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_btn1_6;
	// UnityEngine.Sprite ButtonToggle::select_btn2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_btn2_7;
	// UnityEngine.Sprite ButtonToggle::unSelect_btn1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_btn1_8;
	// UnityEngine.Sprite ButtonToggle::unSelect_btn2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_btn2_9;
	// System.Boolean ButtonToggle::isSelect1
	bool ___isSelect1_10;

public:
	inline static int32_t get_offset_of_btn1_4() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___btn1_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn1_4() const { return ___btn1_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn1_4() { return &___btn1_4; }
	inline void set_btn1_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn1_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn2_5() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___btn2_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn2_5() const { return ___btn2_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn2_5() { return &___btn2_5; }
	inline void set_btn2_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn2_5), (void*)value);
	}

	inline static int32_t get_offset_of_select_btn1_6() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___select_btn1_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_btn1_6() const { return ___select_btn1_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_btn1_6() { return &___select_btn1_6; }
	inline void set_select_btn1_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_btn1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_btn1_6), (void*)value);
	}

	inline static int32_t get_offset_of_select_btn2_7() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___select_btn2_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_btn2_7() const { return ___select_btn2_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_btn2_7() { return &___select_btn2_7; }
	inline void set_select_btn2_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_btn2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_btn2_7), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_btn1_8() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___unSelect_btn1_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_btn1_8() const { return ___unSelect_btn1_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_btn1_8() { return &___unSelect_btn1_8; }
	inline void set_unSelect_btn1_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_btn1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_btn1_8), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_btn2_9() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___unSelect_btn2_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_btn2_9() const { return ___unSelect_btn2_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_btn2_9() { return &___unSelect_btn2_9; }
	inline void set_unSelect_btn2_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_btn2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_btn2_9), (void*)value);
	}

	inline static int32_t get_offset_of_isSelect1_10() { return static_cast<int32_t>(offsetof(ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482, ___isSelect1_10)); }
	inline bool get_isSelect1_10() const { return ___isSelect1_10; }
	inline bool* get_address_of_isSelect1_10() { return &___isSelect1_10; }
	inline void set_isSelect1_10(bool value)
	{
		___isSelect1_10 = value;
	}
};


// CardController
struct CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource CardController::soundSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundSource_4;
	// UnityEngine.UI.Image CardController::card
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___card_5;
	// UnityEngine.Sprite CardController::active_card
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___active_card_6;
	// UnityEngine.Sprite CardController::deactive_card
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___deactive_card_7;
	// System.Boolean CardController::active
	bool ___active_8;

public:
	inline static int32_t get_offset_of_soundSource_4() { return static_cast<int32_t>(offsetof(CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936, ___soundSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundSource_4() const { return ___soundSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundSource_4() { return &___soundSource_4; }
	inline void set_soundSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_card_5() { return static_cast<int32_t>(offsetof(CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936, ___card_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_card_5() const { return ___card_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_card_5() { return &___card_5; }
	inline void set_card_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___card_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___card_5), (void*)value);
	}

	inline static int32_t get_offset_of_active_card_6() { return static_cast<int32_t>(offsetof(CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936, ___active_card_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_active_card_6() const { return ___active_card_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_active_card_6() { return &___active_card_6; }
	inline void set_active_card_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___active_card_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___active_card_6), (void*)value);
	}

	inline static int32_t get_offset_of_deactive_card_7() { return static_cast<int32_t>(offsetof(CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936, ___deactive_card_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_deactive_card_7() const { return ___deactive_card_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_deactive_card_7() { return &___deactive_card_7; }
	inline void set_deactive_card_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___deactive_card_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deactive_card_7), (void*)value);
	}

	inline static int32_t get_offset_of_active_8() { return static_cast<int32_t>(offsetof(CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936, ___active_8)); }
	inline bool get_active_8() const { return ___active_8; }
	inline bool* get_address_of_active_8() { return &___active_8; }
	inline void set_active_8(bool value)
	{
		___active_8 = value;
	}
};


// Feedback2Controller
struct Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Feedback2Controller::soundSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundSource_4;
	// UnityEngine.GameObject Feedback2Controller::feedbackCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___feedbackCanvas_5;
	// System.Boolean Feedback2Controller::active
	bool ___active_6;

public:
	inline static int32_t get_offset_of_soundSource_4() { return static_cast<int32_t>(offsetof(Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494, ___soundSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundSource_4() const { return ___soundSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundSource_4() { return &___soundSource_4; }
	inline void set_soundSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_feedbackCanvas_5() { return static_cast<int32_t>(offsetof(Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494, ___feedbackCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_feedbackCanvas_5() const { return ___feedbackCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_feedbackCanvas_5() { return &___feedbackCanvas_5; }
	inline void set_feedbackCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___feedbackCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedbackCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}
};


// FeedbackController
struct FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource FeedbackController::soundSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundSource_4;
	// System.String FeedbackController::sceneName
	String_t* ___sceneName_5;
	// System.Boolean FeedbackController::active
	bool ___active_6;

public:
	inline static int32_t get_offset_of_soundSource_4() { return static_cast<int32_t>(offsetof(FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126, ___soundSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundSource_4() const { return ___soundSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundSource_4() { return &___soundSource_4; }
	inline void set_soundSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName_5() { return static_cast<int32_t>(offsetof(FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126, ___sceneName_5)); }
	inline String_t* get_sceneName_5() const { return ___sceneName_5; }
	inline String_t** get_address_of_sceneName_5() { return &___sceneName_5; }
	inline void set_sceneName_5(String_t* value)
	{
		___sceneName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_5), (void*)value);
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}
};


// ListToggle
struct ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image ListToggle::list1
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___list1_4;
	// UnityEngine.UI.Image ListToggle::list2
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___list2_5;
	// UnityEngine.Sprite ListToggle::select_list1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_list1_6;
	// UnityEngine.Sprite ListToggle::select_list2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_list2_7;
	// UnityEngine.Sprite ListToggle::unSelect_list1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_list1_8;
	// UnityEngine.Sprite ListToggle::unSelect_list2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_list2_9;
	// System.Boolean ListToggle::isSelect1
	bool ___isSelect1_10;
	// UnityEngine.GameObject ListToggle::cardChicken
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cardChicken_11;
	// UnityEngine.GameObject ListToggle::cardCook
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___cardCook_12;

public:
	inline static int32_t get_offset_of_list1_4() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___list1_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_list1_4() const { return ___list1_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_list1_4() { return &___list1_4; }
	inline void set_list1_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___list1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list1_4), (void*)value);
	}

	inline static int32_t get_offset_of_list2_5() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___list2_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_list2_5() const { return ___list2_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_list2_5() { return &___list2_5; }
	inline void set_list2_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___list2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list2_5), (void*)value);
	}

	inline static int32_t get_offset_of_select_list1_6() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___select_list1_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_list1_6() const { return ___select_list1_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_list1_6() { return &___select_list1_6; }
	inline void set_select_list1_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_list1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_list1_6), (void*)value);
	}

	inline static int32_t get_offset_of_select_list2_7() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___select_list2_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_list2_7() const { return ___select_list2_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_list2_7() { return &___select_list2_7; }
	inline void set_select_list2_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_list2_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_list2_7), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_list1_8() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___unSelect_list1_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_list1_8() const { return ___unSelect_list1_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_list1_8() { return &___unSelect_list1_8; }
	inline void set_unSelect_list1_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_list1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_list1_8), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_list2_9() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___unSelect_list2_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_list2_9() const { return ___unSelect_list2_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_list2_9() { return &___unSelect_list2_9; }
	inline void set_unSelect_list2_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_list2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_list2_9), (void*)value);
	}

	inline static int32_t get_offset_of_isSelect1_10() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___isSelect1_10)); }
	inline bool get_isSelect1_10() const { return ___isSelect1_10; }
	inline bool* get_address_of_isSelect1_10() { return &___isSelect1_10; }
	inline void set_isSelect1_10(bool value)
	{
		___isSelect1_10 = value;
	}

	inline static int32_t get_offset_of_cardChicken_11() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___cardChicken_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cardChicken_11() const { return ___cardChicken_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cardChicken_11() { return &___cardChicken_11; }
	inline void set_cardChicken_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cardChicken_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardChicken_11), (void*)value);
	}

	inline static int32_t get_offset_of_cardCook_12() { return static_cast<int32_t>(offsetof(ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F, ___cardCook_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_cardCook_12() const { return ___cardCook_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_cardCook_12() { return &___cardCook_12; }
	inline void set_cardCook_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___cardCook_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cardCook_12), (void*)value);
	}
};


// NarrationController
struct NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource NarrationController::soundSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundSource_4;
	// UnityEngine.Sprite NarrationController::btn_active
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___btn_active_5;
	// System.Boolean NarrationController::active
	bool ___active_6;
	// System.Single NarrationController::nar_sec
	float ___nar_sec_7;
	// System.Single NarrationController::pos_x
	float ___pos_x_8;
	// System.Single NarrationController::pos_y
	float ___pos_y_9;
	// System.Single NarrationController::scale_x
	float ___scale_x_10;

public:
	inline static int32_t get_offset_of_soundSource_4() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___soundSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundSource_4() const { return ___soundSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundSource_4() { return &___soundSource_4; }
	inline void set_soundSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn_active_5() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___btn_active_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_btn_active_5() const { return ___btn_active_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_btn_active_5() { return &___btn_active_5; }
	inline void set_btn_active_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___btn_active_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_active_5), (void*)value);
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}

	inline static int32_t get_offset_of_nar_sec_7() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___nar_sec_7)); }
	inline float get_nar_sec_7() const { return ___nar_sec_7; }
	inline float* get_address_of_nar_sec_7() { return &___nar_sec_7; }
	inline void set_nar_sec_7(float value)
	{
		___nar_sec_7 = value;
	}

	inline static int32_t get_offset_of_pos_x_8() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___pos_x_8)); }
	inline float get_pos_x_8() const { return ___pos_x_8; }
	inline float* get_address_of_pos_x_8() { return &___pos_x_8; }
	inline void set_pos_x_8(float value)
	{
		___pos_x_8 = value;
	}

	inline static int32_t get_offset_of_pos_y_9() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___pos_y_9)); }
	inline float get_pos_y_9() const { return ___pos_y_9; }
	inline float* get_address_of_pos_y_9() { return &___pos_y_9; }
	inline void set_pos_y_9(float value)
	{
		___pos_y_9 = value;
	}

	inline static int32_t get_offset_of_scale_x_10() { return static_cast<int32_t>(offsetof(NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA, ___scale_x_10)); }
	inline float get_scale_x_10() const { return ___scale_x_10; }
	inline float* get_address_of_scale_x_10() { return &___scale_x_10; }
	inline void set_scale_x_10(float value)
	{
		___scale_x_10 = value;
	}
};


// Nav_SceneChange
struct Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// NewBehaviourScript
struct NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Page1_Interaction
struct Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Page1_Interaction::findMark1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___findMark1_4;
	// UnityEngine.GameObject Page1_Interaction::findMark2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___findMark2_5;

public:
	inline static int32_t get_offset_of_findMark1_4() { return static_cast<int32_t>(offsetof(Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42, ___findMark1_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_findMark1_4() const { return ___findMark1_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_findMark1_4() { return &___findMark1_4; }
	inline void set_findMark1_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___findMark1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___findMark1_4), (void*)value);
	}

	inline static int32_t get_offset_of_findMark2_5() { return static_cast<int32_t>(offsetof(Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42, ___findMark2_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_findMark2_5() const { return ___findMark2_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_findMark2_5() { return &___findMark2_5; }
	inline void set_findMark2_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___findMark2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___findMark2_5), (void*)value);
	}
};


// Page3_0_1Controller
struct Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioSource Page3_0_1Controller::soundSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___soundSource_4;
	// UnityEngine.Sprite Page3_0_1Controller::btn_active
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___btn_active_5;
	// System.Boolean Page3_0_1Controller::active
	bool ___active_6;

public:
	inline static int32_t get_offset_of_soundSource_4() { return static_cast<int32_t>(offsetof(Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49, ___soundSource_4)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_soundSource_4() const { return ___soundSource_4; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_soundSource_4() { return &___soundSource_4; }
	inline void set_soundSource_4(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___soundSource_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___soundSource_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn_active_5() { return static_cast<int32_t>(offsetof(Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49, ___btn_active_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_btn_active_5() const { return ___btn_active_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_btn_active_5() { return &___btn_active_5; }
	inline void set_btn_active_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___btn_active_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_active_5), (void*)value);
	}

	inline static int32_t get_offset_of_active_6() { return static_cast<int32_t>(offsetof(Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49, ___active_6)); }
	inline bool get_active_6() const { return ___active_6; }
	inline bool* get_address_of_active_6() { return &___active_6; }
	inline void set_active_6(bool value)
	{
		___active_6 = value;
	}
};


// Practice2VideoController
struct Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject Practice2VideoController::mouseCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___mouseCanvas_4;
	// UnityEngine.GameObject Practice2VideoController::tougueCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___tougueCanvas_5;
	// UnityEngine.UI.Image Practice2VideoController::btn
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn_6;
	// UnityEngine.Sprite Practice2VideoController::mouseBtn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___mouseBtn_7;
	// UnityEngine.Sprite Practice2VideoController::tougueBtn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___tougueBtn_8;
	// System.Boolean Practice2VideoController::active
	bool ___active_9;

public:
	inline static int32_t get_offset_of_mouseCanvas_4() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___mouseCanvas_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_mouseCanvas_4() const { return ___mouseCanvas_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_mouseCanvas_4() { return &___mouseCanvas_4; }
	inline void set_mouseCanvas_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___mouseCanvas_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseCanvas_4), (void*)value);
	}

	inline static int32_t get_offset_of_tougueCanvas_5() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___tougueCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_tougueCanvas_5() const { return ___tougueCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_tougueCanvas_5() { return &___tougueCanvas_5; }
	inline void set_tougueCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___tougueCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tougueCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_btn_6() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___btn_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn_6() const { return ___btn_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn_6() { return &___btn_6; }
	inline void set_btn_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_6), (void*)value);
	}

	inline static int32_t get_offset_of_mouseBtn_7() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___mouseBtn_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_mouseBtn_7() const { return ___mouseBtn_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_mouseBtn_7() { return &___mouseBtn_7; }
	inline void set_mouseBtn_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___mouseBtn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mouseBtn_7), (void*)value);
	}

	inline static int32_t get_offset_of_tougueBtn_8() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___tougueBtn_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_tougueBtn_8() const { return ___tougueBtn_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_tougueBtn_8() { return &___tougueBtn_8; }
	inline void set_tougueBtn_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___tougueBtn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tougueBtn_8), (void*)value);
	}

	inline static int32_t get_offset_of_active_9() { return static_cast<int32_t>(offsetof(Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35, ___active_9)); }
	inline bool get_active_9() const { return ___active_9; }
	inline bool* get_address_of_active_9() { return &___active_9; }
	inline void set_active_9(bool value)
	{
		___active_9 = value;
	}
};


// PracticeVideoController
struct PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer PracticeVideoController::video
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___video_4;
	// UnityEngine.GameObject PracticeVideoController::videoCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___videoCanvas_5;
	// UnityEngine.UI.Image PracticeVideoController::btn
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn_6;
	// UnityEngine.Sprite PracticeVideoController::play_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___play_btn_7;
	// UnityEngine.Sprite PracticeVideoController::pause_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___pause_btn_8;
	// System.Boolean PracticeVideoController::state
	bool ___state_9;

public:
	inline static int32_t get_offset_of_video_4() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___video_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_video_4() const { return ___video_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_video_4() { return &___video_4; }
	inline void set_video_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___video_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___video_4), (void*)value);
	}

	inline static int32_t get_offset_of_videoCanvas_5() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___videoCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_videoCanvas_5() const { return ___videoCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_videoCanvas_5() { return &___videoCanvas_5; }
	inline void set_videoCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___videoCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_btn_6() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___btn_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn_6() const { return ___btn_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn_6() { return &___btn_6; }
	inline void set_btn_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_6), (void*)value);
	}

	inline static int32_t get_offset_of_play_btn_7() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___play_btn_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_play_btn_7() const { return ___play_btn_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_play_btn_7() { return &___play_btn_7; }
	inline void set_play_btn_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___play_btn_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___play_btn_7), (void*)value);
	}

	inline static int32_t get_offset_of_pause_btn_8() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___pause_btn_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_pause_btn_8() const { return ___pause_btn_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_pause_btn_8() { return &___pause_btn_8; }
	inline void set_pause_btn_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___pause_btn_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pause_btn_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C, ___state_9)); }
	inline bool get_state_9() const { return ___state_9; }
	inline bool* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(bool value)
	{
		___state_9 = value;
	}
};


// Random_SceneChange
struct Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String Random_SceneChange::sceneName1
	String_t* ___sceneName1_4;
	// System.String Random_SceneChange::sceneName2
	String_t* ___sceneName2_5;
	// System.String Random_SceneChange::sceneName3
	String_t* ___sceneName3_6;

public:
	inline static int32_t get_offset_of_sceneName1_4() { return static_cast<int32_t>(offsetof(Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3, ___sceneName1_4)); }
	inline String_t* get_sceneName1_4() const { return ___sceneName1_4; }
	inline String_t** get_address_of_sceneName1_4() { return &___sceneName1_4; }
	inline void set_sceneName1_4(String_t* value)
	{
		___sceneName1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName1_4), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName2_5() { return static_cast<int32_t>(offsetof(Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3, ___sceneName2_5)); }
	inline String_t* get_sceneName2_5() const { return ___sceneName2_5; }
	inline String_t** get_address_of_sceneName2_5() { return &___sceneName2_5; }
	inline void set_sceneName2_5(String_t* value)
	{
		___sceneName2_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName2_5), (void*)value);
	}

	inline static int32_t get_offset_of_sceneName3_6() { return static_cast<int32_t>(offsetof(Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3, ___sceneName3_6)); }
	inline String_t* get_sceneName3_6() const { return ___sceneName3_6; }
	inline String_t** get_address_of_sceneName3_6() { return &___sceneName3_6; }
	inline void set_sceneName3_6(String_t* value)
	{
		___sceneName3_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName3_6), (void*)value);
	}
};


// RecordPlayController
struct RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String RecordPlayController::answer
	String_t* ___answer_4;
	// UnityEngine.AudioSource RecordPlayController::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_5;

public:
	inline static int32_t get_offset_of_answer_4() { return static_cast<int32_t>(offsetof(RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72, ___answer_4)); }
	inline String_t* get_answer_4() const { return ___answer_4; }
	inline String_t** get_address_of_answer_4() { return &___answer_4; }
	inline void set_answer_4(String_t* value)
	{
		___answer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answer_4), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_5() { return static_cast<int32_t>(offsetof(RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72, ___audioSource_5)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_5() const { return ___audioSource_5; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_5() { return &___audioSource_5; }
	inline void set_audioSource_5(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_5), (void*)value);
	}
};


// RecordSaveController
struct RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String RecordSaveController::answer
	String_t* ___answer_4;
	// System.String RecordSaveController::correctSceneName
	String_t* ___correctSceneName_5;
	// System.String RecordSaveController::wrongSceneName
	String_t* ___wrongSceneName_6;
	// UnityEngine.AudioSource RecordSaveController::practiceAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___practiceAudio_7;
	// UnityEngine.GameObject RecordSaveController::successCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___successCanvas_8;
	// UnityEngine.GameObject RecordSaveController::feedbackCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___feedbackCanvas_9;
	// UnityEngine.AudioSource RecordSaveController::successAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___successAudio_10;
	// UnityEngine.AudioSource RecordSaveController::feedbackAudio
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___feedbackAudio_11;

public:
	inline static int32_t get_offset_of_answer_4() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___answer_4)); }
	inline String_t* get_answer_4() const { return ___answer_4; }
	inline String_t** get_address_of_answer_4() { return &___answer_4; }
	inline void set_answer_4(String_t* value)
	{
		___answer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answer_4), (void*)value);
	}

	inline static int32_t get_offset_of_correctSceneName_5() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___correctSceneName_5)); }
	inline String_t* get_correctSceneName_5() const { return ___correctSceneName_5; }
	inline String_t** get_address_of_correctSceneName_5() { return &___correctSceneName_5; }
	inline void set_correctSceneName_5(String_t* value)
	{
		___correctSceneName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___correctSceneName_5), (void*)value);
	}

	inline static int32_t get_offset_of_wrongSceneName_6() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___wrongSceneName_6)); }
	inline String_t* get_wrongSceneName_6() const { return ___wrongSceneName_6; }
	inline String_t** get_address_of_wrongSceneName_6() { return &___wrongSceneName_6; }
	inline void set_wrongSceneName_6(String_t* value)
	{
		___wrongSceneName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wrongSceneName_6), (void*)value);
	}

	inline static int32_t get_offset_of_practiceAudio_7() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___practiceAudio_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_practiceAudio_7() const { return ___practiceAudio_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_practiceAudio_7() { return &___practiceAudio_7; }
	inline void set_practiceAudio_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___practiceAudio_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___practiceAudio_7), (void*)value);
	}

	inline static int32_t get_offset_of_successCanvas_8() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___successCanvas_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_successCanvas_8() const { return ___successCanvas_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_successCanvas_8() { return &___successCanvas_8; }
	inline void set_successCanvas_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___successCanvas_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successCanvas_8), (void*)value);
	}

	inline static int32_t get_offset_of_feedbackCanvas_9() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___feedbackCanvas_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_feedbackCanvas_9() const { return ___feedbackCanvas_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_feedbackCanvas_9() { return &___feedbackCanvas_9; }
	inline void set_feedbackCanvas_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___feedbackCanvas_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedbackCanvas_9), (void*)value);
	}

	inline static int32_t get_offset_of_successAudio_10() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___successAudio_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_successAudio_10() const { return ___successAudio_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_successAudio_10() { return &___successAudio_10; }
	inline void set_successAudio_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___successAudio_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___successAudio_10), (void*)value);
	}

	inline static int32_t get_offset_of_feedbackAudio_11() { return static_cast<int32_t>(offsetof(RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47, ___feedbackAudio_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_feedbackAudio_11() const { return ___feedbackAudio_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_feedbackAudio_11() { return &___feedbackAudio_11; }
	inline void set_feedbackAudio_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___feedbackAudio_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___feedbackAudio_11), (void*)value);
	}
};


// SaveUserInfo
struct SaveUserInfo_t8D521D25F43FDB2598D8CF8F143B69B559FFF581  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// ScrollManager
struct ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Scrollbar ScrollManager::scrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___scrollbar_4;
	// UnityEngine.Transform ScrollManager::contentTr
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___contentTr_5;
	// System.Single[] ScrollManager::pos
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___pos_7;
	// System.Single ScrollManager::distance
	float ___distance_8;
	// System.Single ScrollManager::curPos
	float ___curPos_9;
	// System.Single ScrollManager::targetPos
	float ___targetPos_10;
	// System.Boolean ScrollManager::isDrag
	bool ___isDrag_11;
	// System.Int32 ScrollManager::targetIndex
	int32_t ___targetIndex_12;

public:
	inline static int32_t get_offset_of_scrollbar_4() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___scrollbar_4)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_scrollbar_4() const { return ___scrollbar_4; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_scrollbar_4() { return &___scrollbar_4; }
	inline void set_scrollbar_4(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___scrollbar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollbar_4), (void*)value);
	}

	inline static int32_t get_offset_of_contentTr_5() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___contentTr_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_contentTr_5() const { return ___contentTr_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_contentTr_5() { return &___contentTr_5; }
	inline void set_contentTr_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___contentTr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___contentTr_5), (void*)value);
	}

	inline static int32_t get_offset_of_pos_7() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___pos_7)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_pos_7() const { return ___pos_7; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_pos_7() { return &___pos_7; }
	inline void set_pos_7(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___pos_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pos_7), (void*)value);
	}

	inline static int32_t get_offset_of_distance_8() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___distance_8)); }
	inline float get_distance_8() const { return ___distance_8; }
	inline float* get_address_of_distance_8() { return &___distance_8; }
	inline void set_distance_8(float value)
	{
		___distance_8 = value;
	}

	inline static int32_t get_offset_of_curPos_9() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___curPos_9)); }
	inline float get_curPos_9() const { return ___curPos_9; }
	inline float* get_address_of_curPos_9() { return &___curPos_9; }
	inline void set_curPos_9(float value)
	{
		___curPos_9 = value;
	}

	inline static int32_t get_offset_of_targetPos_10() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___targetPos_10)); }
	inline float get_targetPos_10() const { return ___targetPos_10; }
	inline float* get_address_of_targetPos_10() { return &___targetPos_10; }
	inline void set_targetPos_10(float value)
	{
		___targetPos_10 = value;
	}

	inline static int32_t get_offset_of_isDrag_11() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___isDrag_11)); }
	inline bool get_isDrag_11() const { return ___isDrag_11; }
	inline bool* get_address_of_isDrag_11() { return &___isDrag_11; }
	inline void set_isDrag_11(bool value)
	{
		___isDrag_11 = value;
	}

	inline static int32_t get_offset_of_targetIndex_12() { return static_cast<int32_t>(offsetof(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60, ___targetIndex_12)); }
	inline int32_t get_targetIndex_12() const { return ___targetIndex_12; }
	inline int32_t* get_address_of_targetIndex_12() { return &___targetIndex_12; }
	inline void set_targetIndex_12(int32_t value)
	{
		___targetIndex_12 = value;
	}
};


// SpeechToText
struct SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String SpeechToText::_microphoneID
	String_t* ____microphoneID_4;
	// System.Int32 SpeechToText::_recordingLengthSec
	int32_t ____recordingLengthSec_5;
	// System.Int32 SpeechToText::_recordingHZ
	int32_t ____recordingHZ_6;
	// System.String SpeechToText::url
	String_t* ___url_8;
	// UnityEngine.AudioSource SpeechToText::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_9;
	// System.String SpeechToText::answer
	String_t* ___answer_10;
	// UnityEngine.UI.Button SpeechToText::btnReplay
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btnReplay_11;
	// UnityEngine.UI.Button SpeechToText::btnSave
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btnSave_12;
	// UnityEngine.UI.Image SpeechToText::btn
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn_13;
	// UnityEngine.Sprite SpeechToText::select_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_btn_14;
	// UnityEngine.Sprite SpeechToText::unSelect_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_btn_15;
	// System.Boolean SpeechToText::isSelect
	bool ___isSelect_16;

public:
	inline static int32_t get_offset_of__microphoneID_4() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ____microphoneID_4)); }
	inline String_t* get__microphoneID_4() const { return ____microphoneID_4; }
	inline String_t** get_address_of__microphoneID_4() { return &____microphoneID_4; }
	inline void set__microphoneID_4(String_t* value)
	{
		____microphoneID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____microphoneID_4), (void*)value);
	}

	inline static int32_t get_offset_of__recordingLengthSec_5() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ____recordingLengthSec_5)); }
	inline int32_t get__recordingLengthSec_5() const { return ____recordingLengthSec_5; }
	inline int32_t* get_address_of__recordingLengthSec_5() { return &____recordingLengthSec_5; }
	inline void set__recordingLengthSec_5(int32_t value)
	{
		____recordingLengthSec_5 = value;
	}

	inline static int32_t get_offset_of__recordingHZ_6() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ____recordingHZ_6)); }
	inline int32_t get__recordingHZ_6() const { return ____recordingHZ_6; }
	inline int32_t* get_address_of__recordingHZ_6() { return &____recordingHZ_6; }
	inline void set__recordingHZ_6(int32_t value)
	{
		____recordingHZ_6 = value;
	}

	inline static int32_t get_offset_of_url_8() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___url_8)); }
	inline String_t* get_url_8() const { return ___url_8; }
	inline String_t** get_address_of_url_8() { return &___url_8; }
	inline void set_url_8(String_t* value)
	{
		___url_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_8), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___audioSource_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_answer_10() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___answer_10)); }
	inline String_t* get_answer_10() const { return ___answer_10; }
	inline String_t** get_address_of_answer_10() { return &___answer_10; }
	inline void set_answer_10(String_t* value)
	{
		___answer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___answer_10), (void*)value);
	}

	inline static int32_t get_offset_of_btnReplay_11() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___btnReplay_11)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btnReplay_11() const { return ___btnReplay_11; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btnReplay_11() { return &___btnReplay_11; }
	inline void set_btnReplay_11(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btnReplay_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnReplay_11), (void*)value);
	}

	inline static int32_t get_offset_of_btnSave_12() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___btnSave_12)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btnSave_12() const { return ___btnSave_12; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btnSave_12() { return &___btnSave_12; }
	inline void set_btnSave_12(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btnSave_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btnSave_12), (void*)value);
	}

	inline static int32_t get_offset_of_btn_13() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___btn_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn_13() const { return ___btn_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn_13() { return &___btn_13; }
	inline void set_btn_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_13), (void*)value);
	}

	inline static int32_t get_offset_of_select_btn_14() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___select_btn_14)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_btn_14() const { return ___select_btn_14; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_btn_14() { return &___select_btn_14; }
	inline void set_select_btn_14(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_btn_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_btn_14), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_btn_15() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___unSelect_btn_15)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_btn_15() const { return ___unSelect_btn_15; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_btn_15() { return &___unSelect_btn_15; }
	inline void set_unSelect_btn_15(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_btn_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_btn_15), (void*)value);
	}

	inline static int32_t get_offset_of_isSelect_16() { return static_cast<int32_t>(offsetof(SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE, ___isSelect_16)); }
	inline bool get_isSelect_16() const { return ___isSelect_16; }
	inline bool* get_address_of_isSelect_16() { return &___isSelect_16; }
	inline void set_isSelect_16(bool value)
	{
		___isSelect_16 = value;
	}
};


// Stage1CompleteController
struct Stage1CompleteController_tDA18BF894D5F7CA564FF2CB0EE9FD9222A0929A8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Stage2CompleteController
struct Stage2CompleteController_t95798291AFBAAEAD702979319BF0ACC677F15BAF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Stage3CompleteController
struct Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SpriteRenderer Stage3CompleteController::image
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___image_4;
	// UnityEngine.Sprite Stage3CompleteController::sprite1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite1_5;
	// UnityEngine.Sprite Stage3CompleteController::sprite2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite2_6;
	// UnityEngine.Sprite Stage3CompleteController::sprite3
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___sprite3_7;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A, ___image_4)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_image_4() const { return ___image_4; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}

	inline static int32_t get_offset_of_sprite1_5() { return static_cast<int32_t>(offsetof(Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A, ___sprite1_5)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite1_5() const { return ___sprite1_5; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite1_5() { return &___sprite1_5; }
	inline void set_sprite1_5(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite1_5), (void*)value);
	}

	inline static int32_t get_offset_of_sprite2_6() { return static_cast<int32_t>(offsetof(Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A, ___sprite2_6)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite2_6() const { return ___sprite2_6; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite2_6() { return &___sprite2_6; }
	inline void set_sprite2_6(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite2_6), (void*)value);
	}

	inline static int32_t get_offset_of_sprite3_7() { return static_cast<int32_t>(offsetof(Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A, ___sprite3_7)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_sprite3_7() const { return ___sprite3_7; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_sprite3_7() { return &___sprite3_7; }
	inline void set_sprite3_7(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___sprite3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sprite3_7), (void*)value);
	}
};


// StageBtnChange
struct StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Scrollbar StageBtnChange::scrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___scrollbar_4;
	// UnityEngine.UI.Button StageBtnChange::btn1
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn1_5;
	// UnityEngine.UI.Button StageBtnChange::btn2
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn2_6;
	// UnityEngine.UI.Button StageBtnChange::btn3
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___btn3_7;
	// UnityEngine.Sprite StageBtnChange::img1
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___img1_8;
	// UnityEngine.Sprite StageBtnChange::img2
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___img2_9;
	// UnityEngine.Sprite StageBtnChange::img3
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___img3_10;

public:
	inline static int32_t get_offset_of_scrollbar_4() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___scrollbar_4)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_scrollbar_4() const { return ___scrollbar_4; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_scrollbar_4() { return &___scrollbar_4; }
	inline void set_scrollbar_4(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___scrollbar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollbar_4), (void*)value);
	}

	inline static int32_t get_offset_of_btn1_5() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___btn1_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn1_5() const { return ___btn1_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn1_5() { return &___btn1_5; }
	inline void set_btn1_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn1_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn1_5), (void*)value);
	}

	inline static int32_t get_offset_of_btn2_6() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___btn2_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn2_6() const { return ___btn2_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn2_6() { return &___btn2_6; }
	inline void set_btn2_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn2_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn2_6), (void*)value);
	}

	inline static int32_t get_offset_of_btn3_7() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___btn3_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_btn3_7() const { return ___btn3_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_btn3_7() { return &___btn3_7; }
	inline void set_btn3_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___btn3_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn3_7), (void*)value);
	}

	inline static int32_t get_offset_of_img1_8() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___img1_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_img1_8() const { return ___img1_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_img1_8() { return &___img1_8; }
	inline void set_img1_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___img1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img1_8), (void*)value);
	}

	inline static int32_t get_offset_of_img2_9() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___img2_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_img2_9() const { return ___img2_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_img2_9() { return &___img2_9; }
	inline void set_img2_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___img2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img2_9), (void*)value);
	}

	inline static int32_t get_offset_of_img3_10() { return static_cast<int32_t>(offsetof(StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566, ___img3_10)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_img3_10() const { return ___img3_10; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_img3_10() { return &___img3_10; }
	inline void set_img3_10(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___img3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___img3_10), (void*)value);
	}
};


// TrainController
struct TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean TrainController::correct
	bool ___correct_4;
	// System.Single TrainController::positionX
	float ___positionX_5;
	// System.Single TrainController::positionY
	float ___positionY_6;
	// System.String TrainController::sceneName
	String_t* ___sceneName_7;
	// System.Boolean TrainController::triggerActive
	bool ___triggerActive_8;

public:
	inline static int32_t get_offset_of_correct_4() { return static_cast<int32_t>(offsetof(TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598, ___correct_4)); }
	inline bool get_correct_4() const { return ___correct_4; }
	inline bool* get_address_of_correct_4() { return &___correct_4; }
	inline void set_correct_4(bool value)
	{
		___correct_4 = value;
	}

	inline static int32_t get_offset_of_positionX_5() { return static_cast<int32_t>(offsetof(TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598, ___positionX_5)); }
	inline float get_positionX_5() const { return ___positionX_5; }
	inline float* get_address_of_positionX_5() { return &___positionX_5; }
	inline void set_positionX_5(float value)
	{
		___positionX_5 = value;
	}

	inline static int32_t get_offset_of_positionY_6() { return static_cast<int32_t>(offsetof(TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598, ___positionY_6)); }
	inline float get_positionY_6() const { return ___positionY_6; }
	inline float* get_address_of_positionY_6() { return &___positionY_6; }
	inline void set_positionY_6(float value)
	{
		___positionY_6 = value;
	}

	inline static int32_t get_offset_of_sceneName_7() { return static_cast<int32_t>(offsetof(TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598, ___sceneName_7)); }
	inline String_t* get_sceneName_7() const { return ___sceneName_7; }
	inline String_t** get_address_of_sceneName_7() { return &___sceneName_7; }
	inline void set_sceneName_7(String_t* value)
	{
		___sceneName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_7), (void*)value);
	}

	inline static int32_t get_offset_of_triggerActive_8() { return static_cast<int32_t>(offsetof(TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598, ___triggerActive_8)); }
	inline bool get_triggerActive_8() const { return ___triggerActive_8; }
	inline bool* get_address_of_triggerActive_8() { return &___triggerActive_8; }
	inline void set_triggerActive_8(bool value)
	{
		___triggerActive_8 = value;
	}
};


// TutorialController
struct TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Video.VideoPlayer TutorialController::video
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___video_4;
	// UnityEngine.GameObject TutorialController::videoCanvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___videoCanvas_5;
	// System.Boolean TutorialController::playOnAwake
	bool ___playOnAwake_6;
	// System.Boolean TutorialController::active
	bool ___active_7;

public:
	inline static int32_t get_offset_of_video_4() { return static_cast<int32_t>(offsetof(TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C, ___video_4)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_video_4() const { return ___video_4; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_video_4() { return &___video_4; }
	inline void set_video_4(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___video_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___video_4), (void*)value);
	}

	inline static int32_t get_offset_of_videoCanvas_5() { return static_cast<int32_t>(offsetof(TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C, ___videoCanvas_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_videoCanvas_5() const { return ___videoCanvas_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_videoCanvas_5() { return &___videoCanvas_5; }
	inline void set_videoCanvas_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___videoCanvas_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___videoCanvas_5), (void*)value);
	}

	inline static int32_t get_offset_of_playOnAwake_6() { return static_cast<int32_t>(offsetof(TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C, ___playOnAwake_6)); }
	inline bool get_playOnAwake_6() const { return ___playOnAwake_6; }
	inline bool* get_address_of_playOnAwake_6() { return &___playOnAwake_6; }
	inline void set_playOnAwake_6(bool value)
	{
		___playOnAwake_6 = value;
	}

	inline static int32_t get_offset_of_active_7() { return static_cast<int32_t>(offsetof(TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C, ___active_7)); }
	inline bool get_active_7() const { return ___active_7; }
	inline bool* get_address_of_active_7() { return &___active_7; }
	inline void set_active_7(bool value)
	{
		___active_7 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UI_SceneChange
struct UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UI_SceneChange::sceneName
	String_t* ___sceneName_4;

public:
	inline static int32_t get_offset_of_sceneName_4() { return static_cast<int32_t>(offsetof(UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB, ___sceneName_4)); }
	inline String_t* get_sceneName_4() const { return ___sceneName_4; }
	inline String_t** get_address_of_sceneName_4() { return &___sceneName_4; }
	inline void set_sceneName_4(String_t* value)
	{
		___sceneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sceneName_4), (void*)value);
	}
};


// VideoHandler
struct VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage VideoHandler::mScreen
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___mScreen_4;
	// UnityEngine.Video.VideoPlayer VideoHandler::mVideoPlayer
	VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___mVideoPlayer_5;

public:
	inline static int32_t get_offset_of_mScreen_4() { return static_cast<int32_t>(offsetof(VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D, ___mScreen_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_mScreen_4() const { return ___mScreen_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_mScreen_4() { return &___mScreen_4; }
	inline void set_mScreen_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___mScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_mVideoPlayer_5() { return static_cast<int32_t>(offsetof(VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D, ___mVideoPlayer_5)); }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * get_mVideoPlayer_5() const { return ___mVideoPlayer_5; }
	inline VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 ** get_address_of_mVideoPlayer_5() { return &___mVideoPlayer_5; }
	inline void set_mVideoPlayer_5(VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * value)
	{
		___mVideoPlayer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mVideoPlayer_5), (void*)value);
	}
};


// ViewCard
struct ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Vector2 ViewCard::startPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___startPos_4;

public:
	inline static int32_t get_offset_of_startPos_4() { return static_cast<int32_t>(offsetof(ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01, ___startPos_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_startPos_4() const { return ___startPos_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_startPos_4() { return &___startPos_4; }
	inline void set_startPos_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___startPos_4 = value;
	}
};


// WebCam
struct WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.RawImage WebCam::display
	RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * ___display_4;
	// UnityEngine.WebCamTexture WebCam::camTexture
	WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * ___camTexture_5;
	// System.Int32 WebCam::currentIndex
	int32_t ___currentIndex_6;

public:
	inline static int32_t get_offset_of_display_4() { return static_cast<int32_t>(offsetof(WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF, ___display_4)); }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * get_display_4() const { return ___display_4; }
	inline RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A ** get_address_of_display_4() { return &___display_4; }
	inline void set_display_4(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * value)
	{
		___display_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___display_4), (void*)value);
	}

	inline static int32_t get_offset_of_camTexture_5() { return static_cast<int32_t>(offsetof(WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF, ___camTexture_5)); }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * get_camTexture_5() const { return ___camTexture_5; }
	inline WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 ** get_address_of_camTexture_5() { return &___camTexture_5; }
	inline void set_camTexture_5(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * value)
	{
		___camTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___camTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_currentIndex_6() { return static_cast<int32_t>(offsetof(WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF, ___currentIndex_6)); }
	inline int32_t get_currentIndex_6() const { return ___currentIndex_6; }
	inline int32_t* get_address_of_currentIndex_6() { return &___currentIndex_6; }
	inline void set_currentIndex_6(int32_t value)
	{
		___currentIndex_6 = value;
	}
};


// stt
struct stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String stt::_microphoneID
	String_t* ____microphoneID_4;
	// UnityEngine.AudioClip stt::_recording
	AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ____recording_5;
	// System.Int32 stt::_recordingLengthSec
	int32_t ____recordingLengthSec_6;
	// System.Int32 stt::_recordingHZ
	int32_t ____recordingHZ_7;
	// System.String stt::fileCheck
	String_t* ___fileCheck_9;
	// System.String stt::url
	String_t* ___url_10;
	// System.String stt::filename
	String_t* ___filename_11;
	// UnityEngine.UI.Image stt::btn
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___btn_12;
	// UnityEngine.Sprite stt::select_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___select_btn_13;
	// UnityEngine.Sprite stt::unSelect_btn
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___unSelect_btn_14;
	// System.Boolean stt::isSelect
	bool ___isSelect_15;

public:
	inline static int32_t get_offset_of__microphoneID_4() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ____microphoneID_4)); }
	inline String_t* get__microphoneID_4() const { return ____microphoneID_4; }
	inline String_t** get_address_of__microphoneID_4() { return &____microphoneID_4; }
	inline void set__microphoneID_4(String_t* value)
	{
		____microphoneID_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____microphoneID_4), (void*)value);
	}

	inline static int32_t get_offset_of__recording_5() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ____recording_5)); }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * get__recording_5() const { return ____recording_5; }
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** get_address_of__recording_5() { return &____recording_5; }
	inline void set__recording_5(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		____recording_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____recording_5), (void*)value);
	}

	inline static int32_t get_offset_of__recordingLengthSec_6() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ____recordingLengthSec_6)); }
	inline int32_t get__recordingLengthSec_6() const { return ____recordingLengthSec_6; }
	inline int32_t* get_address_of__recordingLengthSec_6() { return &____recordingLengthSec_6; }
	inline void set__recordingLengthSec_6(int32_t value)
	{
		____recordingLengthSec_6 = value;
	}

	inline static int32_t get_offset_of__recordingHZ_7() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ____recordingHZ_7)); }
	inline int32_t get__recordingHZ_7() const { return ____recordingHZ_7; }
	inline int32_t* get_address_of__recordingHZ_7() { return &____recordingHZ_7; }
	inline void set__recordingHZ_7(int32_t value)
	{
		____recordingHZ_7 = value;
	}

	inline static int32_t get_offset_of_fileCheck_9() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___fileCheck_9)); }
	inline String_t* get_fileCheck_9() const { return ___fileCheck_9; }
	inline String_t** get_address_of_fileCheck_9() { return &___fileCheck_9; }
	inline void set_fileCheck_9(String_t* value)
	{
		___fileCheck_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fileCheck_9), (void*)value);
	}

	inline static int32_t get_offset_of_url_10() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___url_10)); }
	inline String_t* get_url_10() const { return ___url_10; }
	inline String_t** get_address_of_url_10() { return &___url_10; }
	inline void set_url_10(String_t* value)
	{
		___url_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_10), (void*)value);
	}

	inline static int32_t get_offset_of_filename_11() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___filename_11)); }
	inline String_t* get_filename_11() const { return ___filename_11; }
	inline String_t** get_address_of_filename_11() { return &___filename_11; }
	inline void set_filename_11(String_t* value)
	{
		___filename_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___filename_11), (void*)value);
	}

	inline static int32_t get_offset_of_btn_12() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___btn_12)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_btn_12() const { return ___btn_12; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_btn_12() { return &___btn_12; }
	inline void set_btn_12(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___btn_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___btn_12), (void*)value);
	}

	inline static int32_t get_offset_of_select_btn_13() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___select_btn_13)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_select_btn_13() const { return ___select_btn_13; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_select_btn_13() { return &___select_btn_13; }
	inline void set_select_btn_13(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___select_btn_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___select_btn_13), (void*)value);
	}

	inline static int32_t get_offset_of_unSelect_btn_14() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___unSelect_btn_14)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_unSelect_btn_14() const { return ___unSelect_btn_14; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_unSelect_btn_14() { return &___unSelect_btn_14; }
	inline void set_unSelect_btn_14(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___unSelect_btn_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unSelect_btn_14), (void*)value);
	}

	inline static int32_t get_offset_of_isSelect_15() { return static_cast<int32_t>(offsetof(stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE, ___isSelect_15)); }
	inline bool get_isSelect_15() const { return ___isSelect_15; }
	inline bool* get_address_of_isSelect_15() { return &___isSelect_15; }
	inline void set_isSelect_15(bool value)
	{
		___isSelect_15 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.ScrollRect
struct ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Content
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Content_4;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Horizontal
	bool ___m_Horizontal_5;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Vertical
	bool ___m_Vertical_6;
	// UnityEngine.UI.ScrollRect/MovementType UnityEngine.UI.ScrollRect::m_MovementType
	int32_t ___m_MovementType_7;
	// System.Single UnityEngine.UI.ScrollRect::m_Elasticity
	float ___m_Elasticity_8;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Inertia
	bool ___m_Inertia_9;
	// System.Single UnityEngine.UI.ScrollRect::m_DecelerationRate
	float ___m_DecelerationRate_10;
	// System.Single UnityEngine.UI.ScrollRect::m_ScrollSensitivity
	float ___m_ScrollSensitivity_11;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Viewport
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Viewport_12;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_HorizontalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_HorizontalScrollbar_13;
	// UnityEngine.UI.Scrollbar UnityEngine.UI.ScrollRect::m_VerticalScrollbar
	Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * ___m_VerticalScrollbar_14;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_HorizontalScrollbarVisibility
	int32_t ___m_HorizontalScrollbarVisibility_15;
	// UnityEngine.UI.ScrollRect/ScrollbarVisibility UnityEngine.UI.ScrollRect::m_VerticalScrollbarVisibility
	int32_t ___m_VerticalScrollbarVisibility_16;
	// System.Single UnityEngine.UI.ScrollRect::m_HorizontalScrollbarSpacing
	float ___m_HorizontalScrollbarSpacing_17;
	// System.Single UnityEngine.UI.ScrollRect::m_VerticalScrollbarSpacing
	float ___m_VerticalScrollbarSpacing_18;
	// UnityEngine.UI.ScrollRect/ScrollRectEvent UnityEngine.UI.ScrollRect::m_OnValueChanged
	ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * ___m_OnValueChanged_19;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PointerStartLocalCursor
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PointerStartLocalCursor_20;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_ContentStartPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ContentStartPosition_21;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_ViewRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ViewRect_22;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ContentBounds_23;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_ViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_ViewBounds_24;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_Velocity
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Velocity_25;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Dragging
	bool ___m_Dragging_26;
	// System.Boolean UnityEngine.UI.ScrollRect::m_Scrolling
	bool ___m_Scrolling_27;
	// UnityEngine.Vector2 UnityEngine.UI.ScrollRect::m_PrevPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PrevPosition_28;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevContentBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevContentBounds_29;
	// UnityEngine.Bounds UnityEngine.UI.ScrollRect::m_PrevViewBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_PrevViewBounds_30;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HasRebuiltLayout
	bool ___m_HasRebuiltLayout_31;
	// System.Boolean UnityEngine.UI.ScrollRect::m_HSliderExpand
	bool ___m_HSliderExpand_32;
	// System.Boolean UnityEngine.UI.ScrollRect::m_VSliderExpand
	bool ___m_VSliderExpand_33;
	// System.Single UnityEngine.UI.ScrollRect::m_HSliderHeight
	float ___m_HSliderHeight_34;
	// System.Single UnityEngine.UI.ScrollRect::m_VSliderWidth
	float ___m_VSliderWidth_35;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_Rect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Rect_36;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_HorizontalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HorizontalScrollbarRect_37;
	// UnityEngine.RectTransform UnityEngine.UI.ScrollRect::m_VerticalScrollbarRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_VerticalScrollbarRect_38;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.ScrollRect::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_39;
	// UnityEngine.Vector3[] UnityEngine.UI.ScrollRect::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_40;

public:
	inline static int32_t get_offset_of_m_Content_4() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Content_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Content_4() const { return ___m_Content_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Content_4() { return &___m_Content_4; }
	inline void set_m_Content_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Content_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Content_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Horizontal_5() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Horizontal_5)); }
	inline bool get_m_Horizontal_5() const { return ___m_Horizontal_5; }
	inline bool* get_address_of_m_Horizontal_5() { return &___m_Horizontal_5; }
	inline void set_m_Horizontal_5(bool value)
	{
		___m_Horizontal_5 = value;
	}

	inline static int32_t get_offset_of_m_Vertical_6() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Vertical_6)); }
	inline bool get_m_Vertical_6() const { return ___m_Vertical_6; }
	inline bool* get_address_of_m_Vertical_6() { return &___m_Vertical_6; }
	inline void set_m_Vertical_6(bool value)
	{
		___m_Vertical_6 = value;
	}

	inline static int32_t get_offset_of_m_MovementType_7() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_MovementType_7)); }
	inline int32_t get_m_MovementType_7() const { return ___m_MovementType_7; }
	inline int32_t* get_address_of_m_MovementType_7() { return &___m_MovementType_7; }
	inline void set_m_MovementType_7(int32_t value)
	{
		___m_MovementType_7 = value;
	}

	inline static int32_t get_offset_of_m_Elasticity_8() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Elasticity_8)); }
	inline float get_m_Elasticity_8() const { return ___m_Elasticity_8; }
	inline float* get_address_of_m_Elasticity_8() { return &___m_Elasticity_8; }
	inline void set_m_Elasticity_8(float value)
	{
		___m_Elasticity_8 = value;
	}

	inline static int32_t get_offset_of_m_Inertia_9() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Inertia_9)); }
	inline bool get_m_Inertia_9() const { return ___m_Inertia_9; }
	inline bool* get_address_of_m_Inertia_9() { return &___m_Inertia_9; }
	inline void set_m_Inertia_9(bool value)
	{
		___m_Inertia_9 = value;
	}

	inline static int32_t get_offset_of_m_DecelerationRate_10() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_DecelerationRate_10)); }
	inline float get_m_DecelerationRate_10() const { return ___m_DecelerationRate_10; }
	inline float* get_address_of_m_DecelerationRate_10() { return &___m_DecelerationRate_10; }
	inline void set_m_DecelerationRate_10(float value)
	{
		___m_DecelerationRate_10 = value;
	}

	inline static int32_t get_offset_of_m_ScrollSensitivity_11() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ScrollSensitivity_11)); }
	inline float get_m_ScrollSensitivity_11() const { return ___m_ScrollSensitivity_11; }
	inline float* get_address_of_m_ScrollSensitivity_11() { return &___m_ScrollSensitivity_11; }
	inline void set_m_ScrollSensitivity_11(float value)
	{
		___m_ScrollSensitivity_11 = value;
	}

	inline static int32_t get_offset_of_m_Viewport_12() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Viewport_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Viewport_12() const { return ___m_Viewport_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Viewport_12() { return &___m_Viewport_12; }
	inline void set_m_Viewport_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Viewport_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Viewport_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbar_13() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbar_13)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_HorizontalScrollbar_13() const { return ___m_HorizontalScrollbar_13; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_HorizontalScrollbar_13() { return &___m_HorizontalScrollbar_13; }
	inline void set_m_HorizontalScrollbar_13(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_HorizontalScrollbar_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbar_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbar_14() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbar_14)); }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * get_m_VerticalScrollbar_14() const { return ___m_VerticalScrollbar_14; }
	inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 ** get_address_of_m_VerticalScrollbar_14() { return &___m_VerticalScrollbar_14; }
	inline void set_m_VerticalScrollbar_14(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * value)
	{
		___m_VerticalScrollbar_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbar_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarVisibility_15() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarVisibility_15)); }
	inline int32_t get_m_HorizontalScrollbarVisibility_15() const { return ___m_HorizontalScrollbarVisibility_15; }
	inline int32_t* get_address_of_m_HorizontalScrollbarVisibility_15() { return &___m_HorizontalScrollbarVisibility_15; }
	inline void set_m_HorizontalScrollbarVisibility_15(int32_t value)
	{
		___m_HorizontalScrollbarVisibility_15 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarVisibility_16() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarVisibility_16)); }
	inline int32_t get_m_VerticalScrollbarVisibility_16() const { return ___m_VerticalScrollbarVisibility_16; }
	inline int32_t* get_address_of_m_VerticalScrollbarVisibility_16() { return &___m_VerticalScrollbarVisibility_16; }
	inline void set_m_VerticalScrollbarVisibility_16(int32_t value)
	{
		___m_VerticalScrollbarVisibility_16 = value;
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarSpacing_17() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarSpacing_17)); }
	inline float get_m_HorizontalScrollbarSpacing_17() const { return ___m_HorizontalScrollbarSpacing_17; }
	inline float* get_address_of_m_HorizontalScrollbarSpacing_17() { return &___m_HorizontalScrollbarSpacing_17; }
	inline void set_m_HorizontalScrollbarSpacing_17(float value)
	{
		___m_HorizontalScrollbarSpacing_17 = value;
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarSpacing_18() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarSpacing_18)); }
	inline float get_m_VerticalScrollbarSpacing_18() const { return ___m_VerticalScrollbarSpacing_18; }
	inline float* get_address_of_m_VerticalScrollbarSpacing_18() { return &___m_VerticalScrollbarSpacing_18; }
	inline void set_m_VerticalScrollbarSpacing_18(float value)
	{
		___m_VerticalScrollbarSpacing_18 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_19() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_OnValueChanged_19)); }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * get_m_OnValueChanged_19() const { return ___m_OnValueChanged_19; }
	inline ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E ** get_address_of_m_OnValueChanged_19() { return &___m_OnValueChanged_19; }
	inline void set_m_OnValueChanged_19(ScrollRectEvent_tA2F08EF8BB0B0B0F72DB8242DC5AB17BB0D1731E * value)
	{
		___m_OnValueChanged_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_PointerStartLocalCursor_20() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PointerStartLocalCursor_20)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PointerStartLocalCursor_20() const { return ___m_PointerStartLocalCursor_20; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PointerStartLocalCursor_20() { return &___m_PointerStartLocalCursor_20; }
	inline void set_m_PointerStartLocalCursor_20(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PointerStartLocalCursor_20 = value;
	}

	inline static int32_t get_offset_of_m_ContentStartPosition_21() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentStartPosition_21)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ContentStartPosition_21() const { return ___m_ContentStartPosition_21; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ContentStartPosition_21() { return &___m_ContentStartPosition_21; }
	inline void set_m_ContentStartPosition_21(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ContentStartPosition_21 = value;
	}

	inline static int32_t get_offset_of_m_ViewRect_22() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewRect_22)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ViewRect_22() const { return ___m_ViewRect_22; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ViewRect_22() { return &___m_ViewRect_22; }
	inline void set_m_ViewRect_22(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ViewRect_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ViewRect_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContentBounds_23() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ContentBounds_23)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ContentBounds_23() const { return ___m_ContentBounds_23; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ContentBounds_23() { return &___m_ContentBounds_23; }
	inline void set_m_ContentBounds_23(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ContentBounds_23 = value;
	}

	inline static int32_t get_offset_of_m_ViewBounds_24() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_ViewBounds_24)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_ViewBounds_24() const { return ___m_ViewBounds_24; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_ViewBounds_24() { return &___m_ViewBounds_24; }
	inline void set_m_ViewBounds_24(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_ViewBounds_24 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_25() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Velocity_25)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Velocity_25() const { return ___m_Velocity_25; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Velocity_25() { return &___m_Velocity_25; }
	inline void set_m_Velocity_25(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Velocity_25 = value;
	}

	inline static int32_t get_offset_of_m_Dragging_26() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Dragging_26)); }
	inline bool get_m_Dragging_26() const { return ___m_Dragging_26; }
	inline bool* get_address_of_m_Dragging_26() { return &___m_Dragging_26; }
	inline void set_m_Dragging_26(bool value)
	{
		___m_Dragging_26 = value;
	}

	inline static int32_t get_offset_of_m_Scrolling_27() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Scrolling_27)); }
	inline bool get_m_Scrolling_27() const { return ___m_Scrolling_27; }
	inline bool* get_address_of_m_Scrolling_27() { return &___m_Scrolling_27; }
	inline void set_m_Scrolling_27(bool value)
	{
		___m_Scrolling_27 = value;
	}

	inline static int32_t get_offset_of_m_PrevPosition_28() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevPosition_28)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PrevPosition_28() const { return ___m_PrevPosition_28; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PrevPosition_28() { return &___m_PrevPosition_28; }
	inline void set_m_PrevPosition_28(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PrevPosition_28 = value;
	}

	inline static int32_t get_offset_of_m_PrevContentBounds_29() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevContentBounds_29)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevContentBounds_29() const { return ___m_PrevContentBounds_29; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevContentBounds_29() { return &___m_PrevContentBounds_29; }
	inline void set_m_PrevContentBounds_29(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevContentBounds_29 = value;
	}

	inline static int32_t get_offset_of_m_PrevViewBounds_30() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_PrevViewBounds_30)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_PrevViewBounds_30() const { return ___m_PrevViewBounds_30; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_PrevViewBounds_30() { return &___m_PrevViewBounds_30; }
	inline void set_m_PrevViewBounds_30(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_PrevViewBounds_30 = value;
	}

	inline static int32_t get_offset_of_m_HasRebuiltLayout_31() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HasRebuiltLayout_31)); }
	inline bool get_m_HasRebuiltLayout_31() const { return ___m_HasRebuiltLayout_31; }
	inline bool* get_address_of_m_HasRebuiltLayout_31() { return &___m_HasRebuiltLayout_31; }
	inline void set_m_HasRebuiltLayout_31(bool value)
	{
		___m_HasRebuiltLayout_31 = value;
	}

	inline static int32_t get_offset_of_m_HSliderExpand_32() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderExpand_32)); }
	inline bool get_m_HSliderExpand_32() const { return ___m_HSliderExpand_32; }
	inline bool* get_address_of_m_HSliderExpand_32() { return &___m_HSliderExpand_32; }
	inline void set_m_HSliderExpand_32(bool value)
	{
		___m_HSliderExpand_32 = value;
	}

	inline static int32_t get_offset_of_m_VSliderExpand_33() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderExpand_33)); }
	inline bool get_m_VSliderExpand_33() const { return ___m_VSliderExpand_33; }
	inline bool* get_address_of_m_VSliderExpand_33() { return &___m_VSliderExpand_33; }
	inline void set_m_VSliderExpand_33(bool value)
	{
		___m_VSliderExpand_33 = value;
	}

	inline static int32_t get_offset_of_m_HSliderHeight_34() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HSliderHeight_34)); }
	inline float get_m_HSliderHeight_34() const { return ___m_HSliderHeight_34; }
	inline float* get_address_of_m_HSliderHeight_34() { return &___m_HSliderHeight_34; }
	inline void set_m_HSliderHeight_34(float value)
	{
		___m_HSliderHeight_34 = value;
	}

	inline static int32_t get_offset_of_m_VSliderWidth_35() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VSliderWidth_35)); }
	inline float get_m_VSliderWidth_35() const { return ___m_VSliderWidth_35; }
	inline float* get_address_of_m_VSliderWidth_35() { return &___m_VSliderWidth_35; }
	inline void set_m_VSliderWidth_35(float value)
	{
		___m_VSliderWidth_35 = value;
	}

	inline static int32_t get_offset_of_m_Rect_36() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Rect_36)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Rect_36() const { return ___m_Rect_36; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Rect_36() { return &___m_Rect_36; }
	inline void set_m_Rect_36(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Rect_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rect_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_HorizontalScrollbarRect_37() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_HorizontalScrollbarRect_37)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HorizontalScrollbarRect_37() const { return ___m_HorizontalScrollbarRect_37; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HorizontalScrollbarRect_37() { return &___m_HorizontalScrollbarRect_37; }
	inline void set_m_HorizontalScrollbarRect_37(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HorizontalScrollbarRect_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HorizontalScrollbarRect_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_VerticalScrollbarRect_38() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_VerticalScrollbarRect_38)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_VerticalScrollbarRect_38() const { return ___m_VerticalScrollbarRect_38; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_VerticalScrollbarRect_38() { return &___m_VerticalScrollbarRect_38; }
	inline void set_m_VerticalScrollbarRect_38(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_VerticalScrollbarRect_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VerticalScrollbarRect_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tracker_39() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Tracker_39)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_39() const { return ___m_Tracker_39; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_39() { return &___m_Tracker_39; }
	inline void set_m_Tracker_39(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_39 = value;
	}

	inline static int32_t get_offset_of_m_Corners_40() { return static_cast<int32_t>(offsetof(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA, ___m_Corners_40)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_40() const { return ___m_Corners_40; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_40() { return &___m_Corners_40; }
	inline void set_m_Corners_40(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_40), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// ScrollScript
struct ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E  : public ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA
{
public:
	// System.Boolean ScrollScript::forParent
	bool ___forParent_41;
	// ScrollManager ScrollScript::scrollManager
	ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * ___scrollManager_42;
	// UnityEngine.UI.ScrollRect ScrollScript::parentScrollRect
	ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * ___parentScrollRect_43;

public:
	inline static int32_t get_offset_of_forParent_41() { return static_cast<int32_t>(offsetof(ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E, ___forParent_41)); }
	inline bool get_forParent_41() const { return ___forParent_41; }
	inline bool* get_address_of_forParent_41() { return &___forParent_41; }
	inline void set_forParent_41(bool value)
	{
		___forParent_41 = value;
	}

	inline static int32_t get_offset_of_scrollManager_42() { return static_cast<int32_t>(offsetof(ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E, ___scrollManager_42)); }
	inline ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * get_scrollManager_42() const { return ___scrollManager_42; }
	inline ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 ** get_address_of_scrollManager_42() { return &___scrollManager_42; }
	inline void set_scrollManager_42(ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * value)
	{
		___scrollManager_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scrollManager_42), (void*)value);
	}

	inline static int32_t get_offset_of_parentScrollRect_43() { return static_cast<int32_t>(offsetof(ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E, ___parentScrollRect_43)); }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * get_parentScrollRect_43() const { return ___parentScrollRect_43; }
	inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA ** get_address_of_parentScrollRect_43() { return &___parentScrollRect_43; }
	inline void set_parentScrollRect_43(ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * value)
	{
		___parentScrollRect_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentScrollRect_43), (void*)value);
	}
};


// UnityEngine.UI.Scrollbar
struct Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;

public:
	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_HandleRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_Value_22() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Value_22)); }
	inline float get_m_Value_22() const { return ___m_Value_22; }
	inline float* get_address_of_m_Value_22() { return &___m_Value_22; }
	inline void set_m_Value_22(float value)
	{
		___m_Value_22 = value;
	}

	inline static int32_t get_offset_of_m_Size_23() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Size_23)); }
	inline float get_m_Size_23() const { return ___m_Size_23; }
	inline float* get_address_of_m_Size_23() { return &___m_Size_23; }
	inline void set_m_Size_23(float value)
	{
		___m_Size_23 = value;
	}

	inline static int32_t get_offset_of_m_NumberOfSteps_24() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_NumberOfSteps_24)); }
	inline int32_t get_m_NumberOfSteps_24() const { return ___m_NumberOfSteps_24; }
	inline int32_t* get_address_of_m_NumberOfSteps_24() { return &___m_NumberOfSteps_24; }
	inline void set_m_NumberOfSteps_24(int32_t value)
	{
		___m_NumberOfSteps_24 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_25() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_OnValueChanged_25)); }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * get_m_OnValueChanged_25() const { return ___m_OnValueChanged_25; }
	inline ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED ** get_address_of_m_OnValueChanged_25() { return &___m_OnValueChanged_25; }
	inline void set_m_OnValueChanged_25(ScrollEvent_tD181ECDC6DDCEE9E32FBEFB0E657F0001E3099ED * value)
	{
		___m_OnValueChanged_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_25), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContainerRect_26() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_ContainerRect_26)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_ContainerRect_26() const { return ___m_ContainerRect_26; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_ContainerRect_26() { return &___m_ContainerRect_26; }
	inline void set_m_ContainerRect_26(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_ContainerRect_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ContainerRect_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_27() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Offset_27)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_27() const { return ___m_Offset_27; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_27() { return &___m_Offset_27; }
	inline void set_m_Offset_27(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_27 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_28() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_Tracker_28)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_28() const { return ___m_Tracker_28; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_28() { return &___m_Tracker_28; }
	inline void set_m_Tracker_28(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_28 = value;
	}

	inline static int32_t get_offset_of_m_PointerDownRepeat_29() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_PointerDownRepeat_29)); }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * get_m_PointerDownRepeat_29() const { return ___m_PointerDownRepeat_29; }
	inline Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 ** get_address_of_m_PointerDownRepeat_29() { return &___m_PointerDownRepeat_29; }
	inline void set_m_PointerDownRepeat_29(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * value)
	{
		___m_PointerDownRepeat_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PointerDownRepeat_29), (void*)value);
	}

	inline static int32_t get_offset_of_isPointerDownAndNotDragging_30() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___isPointerDownAndNotDragging_30)); }
	inline bool get_isPointerDownAndNotDragging_30() const { return ___isPointerDownAndNotDragging_30; }
	inline bool* get_address_of_isPointerDownAndNotDragging_30() { return &___isPointerDownAndNotDragging_30; }
	inline void set_isPointerDownAndNotDragging_30(bool value)
	{
		___isPointerDownAndNotDragging_30 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_31() { return static_cast<int32_t>(offsetof(Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28, ___m_DelayedUpdateVisuals_31)); }
	inline bool get_m_DelayedUpdateVisuals_31() const { return ___m_DelayedUpdateVisuals_31; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_31() { return &___m_DelayedUpdateVisuals_31; }
	inline void set_m_DelayedUpdateVisuals_31(bool value)
	{
		___m_DelayedUpdateVisuals_31 = value;
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.RawImage
struct RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Texture UnityEngine.UI.RawImage::m_Texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___m_Texture_36;
	// UnityEngine.Rect UnityEngine.UI.RawImage::m_UVRect
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_UVRect_37;

public:
	inline static int32_t get_offset_of_m_Texture_36() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_Texture_36)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_m_Texture_36() const { return ___m_Texture_36; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_m_Texture_36() { return &___m_Texture_36; }
	inline void set_m_Texture_36(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___m_Texture_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Texture_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_UVRect_37() { return static_cast<int32_t>(offsetof(RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A, ___m_UVRect_37)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_UVRect_37() const { return ___m_UVRect_37; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_UVRect_37() { return &___m_UVRect_37; }
	inline void set_m_UVRect_37(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_UVRect_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UnityEngine.WebCamDevice[]
struct WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  m_Items[1];

public:
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_DepthCameraName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___m_Resolutions_4), (void*)NULL);
		#endif
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared (String_t* ___json0, const RuntimeMethod* method);

// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioSource::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3 (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400 (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Collections.IEnumerator RecordSaveController::waitSuccess(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordSaveController_waitSuccess_mFA8B9D424EC9BC78292D3764F4F9CBA436CF2C4C (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, float ___seconds0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator RecordSaveController::waitFeedback(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordSaveController_waitFeedback_m68FDC7F4B0B592E0BB3E837613E5EAEFB769016C (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void RecordSaveController/<waitSuccess>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitSuccessU3Ed__10__ctor_mF7AFD9A7D64BCAA45CD2454A275128180D9CC2E7 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void RecordSaveController/<waitFeedback>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFeedbackU3Ed__11__ctor_m8168100B85D0FEBC73F0E0799B68E392268A75EC (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Boolean System.String::EndsWith(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463 (const RuntimeMethod* method);
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method);
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE (String_t* ___path0, const RuntimeMethod* method);
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A (String_t* ___path0, const RuntimeMethod* method);
// System.IO.FileStream SavWav::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * SavWav_CreateEmpty_m3F9CC38183EF60CE47B5B6730430C2F73D339A9B (String_t* ___filepath0, const RuntimeMethod* method);
// System.Void SavWav::ConvertAndWrite(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_ConvertAndWrite_m4CABE44611567091FA68583548F7009781FC2F2D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method);
// System.Void SavWav::WriteHeader(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_WriteHeader_m4657DBC9C2CE5F037AB50C6331B57FA1374B09FF (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_samples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.AudioClip::GetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_gshared)(__this, ___collection0, method);
}
// System.Int32 UnityEngine.AudioClip::get_channels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.AudioClip::get_frequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip SavWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SavWav_TrimSilence_mD708687DC3246B5DA9C5D3B3AF94442DF5C2BCAB (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method);
// UnityEngine.AudioClip SavWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SavWav_TrimSilence_m6230215A36E39B518E3A6BCAAB69182575EB69E2 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ____3D4, bool ___stream5, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Single>::get_Item(System.Int32)
inline float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  float (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, const RuntimeMethod*))List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Single>::get_Count()
inline int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.AudioClip UnityEngine.AudioClip::Create(System.String,System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioClip_Create_m7E9CB790FEC5614187662C53DE687ED94AC752C8 (String_t* ___name0, int32_t ___lengthSamples1, int32_t ___channels2, int32_t ___frequency3, bool ____3D4, bool ___stream5, const RuntimeMethod* method);
// !0[] System.Collections.Generic.List`1<System.Single>::ToArray()
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *, const RuntimeMethod*))List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_gshared)(__this, method);
}
// System.Boolean UnityEngine.AudioClip::SetData(System.Single[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, int32_t ___offsetSamples1, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8 (int16_t ___value0, const RuntimeMethod* method);
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2 (RuntimeArray * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E (const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7 (int64_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39 (int32_t ___value0, const RuntimeMethod* method);
// System.Byte[] System.BitConverter::GetBytes(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296 (uint16_t ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.UI.Scrollbar::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, const RuntimeMethod* method);
// System.Single ScrollManager::SetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollManager_SetPos_m179DB4E2B1EF2571AE5A94F573BC3D54E914DC95 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<ScrollScript>()
inline ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * Component_GetComponent_TisScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E_m3FC6302C290CCCBD43AE9F13FEE2AF543EEE176A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Scrollbar>()
inline Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * Component_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mEFEB4A968ACD1FAE64812EDE0FDE3B0A2B1455EC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197 (Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3 (String_t* ___tag0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ScrollManager>()
inline ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * GameObject_GetComponent_TisScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60_mAE3254D6FBFA5F4842FC645DA40C44AC368EB8E9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.ScrollRect>()
inline ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * GameObject_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_mABEA32EA90E9E1C7801D1D8C6F164D16D63FED14 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::get_delta()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method);
// System.Void ScrollManager::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnBeginDrag_m3462DCB8BC34597B5708DBFFFA6CABAC0E0F6DF2 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnBeginDrag_mFD8547604ADE7E19C1CB247BE3C3D30EDBF6F170 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void ScrollManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnDrag_mC7E101A7EF4EE0C8E81E1149B0D09796F9F58028 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnDrag_mAE4C9A8E16CE9E40F1F50F6CC9DBAC5107327C24 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void ScrollManager::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnEndDrag_m422041C6BE912AB62596195FE06DF05F6D3F28F1 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect_OnEndDrag_m655F48C5CD01CFC9802144038A635B6F663FE828 (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.ScrollRect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollRect__ctor_mB4B056D158F001158736D43FF95A79C4749F81EB (ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * __this, const RuntimeMethod* method);
// System.String[] UnityEngine.Microphone::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.IO.File::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77 (String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Console::WriteLine(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Console_WriteLine_m4B2F36DB25614A4C2E237548DB2B56B277C530CD (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.Microphone::Start(System.String,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D (String_t* ___deviceName0, bool ___loop1, int32_t ___lengthSec2, int32_t ___frequency3, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Microphone::IsRecording(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4 (String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void UnityEngine.Microphone::End(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F (String_t* ___deviceName0, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean SavWav::Save(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavWav_Save_mF79C42FE3B2D3445F35CA3E0D232777F7422803E (String_t* ___filename0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method);
// System.Byte[] SpeechToText::getByteFromAudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SpeechToText_getByteFromAudioClip_m0CCA804886E1DA20AEC88AF664558756FBC3ADC0 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip0, const RuntimeMethod* method);
// System.Collections.IEnumerator SpeechToText::PostVoice(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechToText_PostVoice_m2A7B54DC7A3D653F6EDBF8FCBCAF810494C2B585 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, String_t* ___url0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method);
// System.Void System.IO.MemoryStream::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * __this, const RuntimeMethod* method);
// System.Int32 SpeechToText::WriteFileHeader(System.IO.MemoryStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileHeader_mAFD56A1A012FAC6CAEFF18AB6BF3378A5A80FCC5 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, int32_t ___fileSize1, const RuntimeMethod* method);
// System.Int32 SpeechToText::WriteFileFormat(System.IO.MemoryStream&,System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileFormat_mA60D93A501CF3A138EEAF4C5094747AF42DDEFC8 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, int32_t ___channels1, int32_t ___sampleRate2, uint16_t ___bitDepth3, const RuntimeMethod* method);
// System.Int32 SpeechToText::WriteFileData(System.IO.MemoryStream&,UnityEngine.AudioClip,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileData_mE704807E7DDD1A0F20F844A9298452B7E6F68E53 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip1, uint16_t ___bitDepth2, const RuntimeMethod* method);
// System.Void SpeechToText/<PostVoice>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__18__ctor_mF2D913A321F632741190063755875C700DDA615D (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void SpeechToText::startRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_startRecording_mA1B9992D844DDD5A7B48A13154680649A013F41D (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method);
// System.Void SpeechToText::ChangeBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_ChangeBtn_m8EA2D523F2CF4DD7590DE1E74E88E40DFACE7595 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method);
// System.Void SpeechToText::stopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_stopRecording_m596BF800BBDE228F46E507B22352A44D65342D0E (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173 (const RuntimeMethod* method);
// System.Int32 SpeechToText::WriteBytesToMemoryStream(System.IO.MemoryStream&,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, String_t* ___tag2, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 SpeechToText::BytesPerSample(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_BytesPerSample_mFD4086FDA5592479C7E7E311998136687E92F611 (uint16_t ___bitDepth0, const RuntimeMethod* method);
// System.Byte[] SpeechToText::ConvertAudioClipDataToInt16ByteArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SpeechToText_ConvertAudioClipDataToInt16ByteArray_m385F1EC326108E128AE0F1410D5659057FD04628 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCA113BB7A4ED0108883DCECAEF16A0F8FB3E5EDF (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m85F48A07C1F028876CBF5ACAE49D88F003985438 (float ___value0, const RuntimeMethod* method);
// System.Void System.IO.Stream::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0 (Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator VideoHandler::PrepareVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoHandler_PrepareVideo_m400C2D958F12C136BF4BDB1B89AD4AE001E41CF3 (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method);
// System.Void VideoHandler/<PrepareVideo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrepareVideoU3Ed__3__ctor_m29EE86F4ED3E2B6279CD4E1E4B846BD96A3D7CA2 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPrepared()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Video.VideoPlayer::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022 (int32_t ___button0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.RawImage::set_texture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99 (RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// UnityEngine.WebCamDevice[] UnityEngine.WebCamTexture::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C (const RuntimeMethod* method);
// System.String UnityEngine.WebCamDevice::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4 (WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture__ctor_m6111EBCE92DE22B7A72D134F6BB5BB787238242E (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, String_t* ___deviceName0, const RuntimeMethod* method);
// System.Void UnityEngine.WebCamTexture::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1 (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * __this, const RuntimeMethod* method);
// System.Void stt::speechTransformText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method);
// System.Void stt/<PostVoice>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__16__ctor_m02D4CE17E026C2DDF98B67236304C1316D60AEEB (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode,System.IO.FileAccess)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * __this, String_t* ___path0, int32_t ___mode1, int32_t ___access2, const RuntimeMethod* method);
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * WebRequest_Create_mE5C98DA6F421133D33D07FDF1858213D5A03DE46 (String_t* ___requestUriString0, const RuntimeMethod* method);
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream,System.Text.Encoding)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mFA7564812FC1200208BCC51CF24D3BE25BD15497 (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * __this, Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___stream0, Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * ___encoding1, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<stt/VoiceRecognize>(System.String)
inline VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void stt::startRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_startRecording_mB101D12B901BCBD94A852BA2CF91BC879A331BB8 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method);
// System.Void stt::ChangeBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_ChangeBtn_mBA9B05F2FA2F825C17AC1037318CF08CE82E537F (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method);
// System.Void stt::stopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_stopRecording_mED8C6B0C8C9BCBEB0249BD96DE4BE1D1480D2D48 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WWWForm::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055 (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Post(System.String,UnityEngine.WWWForm)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646 (String_t* ___uri0, WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * ___formData1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::SetRequestHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, String_t* ___name0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UploadHandlerRaw::.ctor(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9 (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.Networking.UnityWebRequest::set_uploadHandler(UnityEngine.Networking.UploadHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, UploadHandler_t5F80A2A6874D4D330751BE3524009C21C9B74BDA * ___value0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732 (UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A (DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<SpeechToText/VoiceRecognize>(System.String)
inline VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * JsonUtility_FromJson_TisVoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17_m95462C534F57B839E03EB9241A1DC58890783919 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m7398DCFD1F6BF2A10AB1274ABED512F322F8F4B4_gshared)(___json0, method);
}
// System.Void UnityEngine.Video.VideoPlayer::Prepare()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Video.VideoPlayer::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29 (VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void ButtonToggle::ChangeBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonToggle_ChangeBtn_mE5AB41B35A32C208B852C4E0A1C250EB8AEB17AE (ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB64D9AAFE51181A105C4BAA552671091DA93FDD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isSelect1)
		bool L_0 = __this->get_isSelect1_10();
		if (!L_0)
		{
			goto IL_0041;
		}
	}
	{
		// isSelect1 = false;
		__this->set_isSelect1_10((bool)0);
		// PlayerPrefs.SetString("level", "spout");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, _stringLiteralB64D9AAFE51181A105C4BAA552671091DA93FDD0, /*hidden argument*/NULL);
		// btn1.sprite = unSelect_btn1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_btn1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_unSelect_btn1_8();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// btn2.sprite = select_btn2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_btn2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_select_btn2_7();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// isSelect1 = true;
		__this->set_isSelect1_10((bool)1);
		// PlayerPrefs.SetString("level", "seed");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D, /*hidden argument*/NULL);
		// btn1.sprite = select_btn1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_btn1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_select_btn1_6();
		NullCheck(L_5);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_6, /*hidden argument*/NULL);
		// btn2.sprite = unSelect_btn2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_btn2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_unSelect_btn2_9();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonToggle_Start_m9185DFCDF9FE0EF6CD9ECF6501BF9E3ABF22E84A (ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("level", "seed");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, _stringLiteral2D1336CF54989C981F460E20B23CF7092A4FBD4D, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonToggle_Update_m1C69CCB538BF26DC5C6F991BBAC8A9A1442D9BF3 (ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonToggle__ctor_m022877DFEFB5FCC75F6D810EB002F2FBDC4E5139 (ButtonToggle_t9BC1C344BC42592A97D263F9B35B56DF61164482 * __this, const RuntimeMethod* method)
{
	{
		// public bool isSelect1 = true;
		__this->set_isSelect1_10((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CardController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_Start_mDEBD8381C4968B566A794F07E21B9D7DEE38209A (CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_soundSource_4(L_0);
		// }
		return;
	}
}
// System.Void CardController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_Update_mABA4D14EC6A2397697C4A20D26B1A15DA85B70BB (CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936 * __this, const RuntimeMethod* method)
{
	{
		// if (!soundSource.isPlaying && active)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_002d;
		}
	}
	{
		bool L_2 = __this->get_active_8();
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// card.sprite = deactive_card;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_card_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_deactive_card_7();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// active = false;
		__this->set_active_8((bool)0);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void CardController::PlayCard()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController_PlayCard_m1D83E82728DF3AEDF2E1B8633D4795C0864BAF98 (CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936 * __this, const RuntimeMethod* method)
{
	{
		// card.sprite = active_card;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_card_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_active_card_6();
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_1, /*hidden argument*/NULL);
		// soundSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = __this->get_soundSource_4();
		NullCheck(L_2);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_2, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_8((bool)1);
		// }
		return;
	}
}
// System.Void CardController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardController__ctor_m558A28CDE4691CF299F1D1653133D5813A74877C (CardController_t8B36F19786A48C0821EAB57FAEC1B6BEFD0FB936 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Feedback2Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feedback2Controller_Start_mCF7992BC0F45E69A35E15F0846A67887046C89DD (Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC49BC785D61BC9059D58A11D4236141FAE16DFE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14289FFCC642220740F632EA7B9DB2A151E9557);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundSource = this.gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_soundSource_4(L_1);
		// feedbackCanvas = GameObject.Find("Feedback");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralDC49BC785D61BC9059D58A11D4236141FAE16DFE, /*hidden argument*/NULL);
		__this->set_feedbackCanvas_5(L_2);
		// Invoke("AudioStart", 0.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralE14289FFCC642220740F632EA7B9DB2A151E9557, (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Feedback2Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feedback2Controller_Update_m760005D11089649F6C136769FE45D6DC1E0B629B (Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494 * __this, const RuntimeMethod* method)
{
	{
		// if (!soundSource.isPlaying && active)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		bool L_2 = __this->get_active_6();
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// feedbackCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_feedbackCanvas_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void Feedback2Controller::AudioStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feedback2Controller_AudioStart_m9D8812BC61397C938BC2AA159A9480923E29D949 (Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494 * __this, const RuntimeMethod* method)
{
	{
		// this.soundSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_6((bool)1);
		// }
		return;
	}
}
// System.Void Feedback2Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Feedback2Controller__ctor_m6FB550C698438D56F8F2929B2A01A6BBAEC46A49 (Feedback2Controller_tD150E34F3A5B4E42F5F12A54C596C06D133D8494 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void FeedbackController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackController_Start_m62DE5AC8D3CC7747813C3C2C3A967FD856D59752 (FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE14289FFCC642220740F632EA7B9DB2A151E9557);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundSource = this.gameObject.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_0, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_soundSource_4(L_1);
		// Invoke("AudioStart", 0.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralE14289FFCC642220740F632EA7B9DB2A151E9557, (0.5f), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FeedbackController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackController_Update_mD25E0AC25D2933EF0343C642DE822C7291A1D928 (FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral801D8833BA004D17402685FF6318357FBC1B44F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!soundSource.isPlaying && active)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		bool L_2 = __this->get_active_6();
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// Invoke("MoveParamScene", 0.5f);
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral801D8833BA004D17402685FF6318357FBC1B44F9, (0.5f), /*hidden argument*/NULL);
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void FeedbackController::AudioStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackController_AudioStart_mC1AD20DF9D95A47C4F9059D019632527FCE6FA57 (FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126 * __this, const RuntimeMethod* method)
{
	{
		// this.soundSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_6((bool)1);
		// }
		return;
	}
}
// System.Void FeedbackController::MoveParamScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackController_MoveParamScene_m62937155560B72B2BA89A9977EDB5E7B195931B8 (FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->get_sceneName_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void FeedbackController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FeedbackController__ctor_mA23288D9F01FA3FA59E504246C7BAEE61F2962A4 (FeedbackController_t590F4EB0E0CDBD3AB80CEF134AB4D6BCB45C1126 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ListToggle::Changelist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToggle_Changelist_m4618E38592104E634A5A560A2F1B44143FAB5687 (ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33E81761641345813DD169AAE875C47F354B87B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isSelect1)
		bool L_0 = __this->get_isSelect1_10();
		if (!L_0)
		{
			goto IL_0059;
		}
	}
	{
		// isSelect1 = false;
		__this->set_isSelect1_10((bool)0);
		// PlayerPrefs.SetString("dictionary", "cookcook");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, _stringLiteral33E81761641345813DD169AAE875C47F354B87B9, /*hidden argument*/NULL);
		// list1.sprite = unSelect_list1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_list1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_unSelect_list1_8();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// list2.sprite = select_list2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_list2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_select_list2_7();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// cardChicken.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_cardChicken_11();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// cardCook.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_cardCook_12();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// isSelect1 = true;
		__this->set_isSelect1_10((bool)1);
		// PlayerPrefs.SetString("dictionary", "chicken");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, _stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3, /*hidden argument*/NULL);
		// list1.sprite = select_list1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_list1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_select_list1_6();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// list2.sprite = unSelect_list2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_list2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_unSelect_list2_9();
		NullCheck(L_9);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// cardChicken.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_cardChicken_11();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// cardCook.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_cardCook_12();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ListToggle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToggle_Start_m641D6B12E80ED749ADC82CEC381904CC3D9FE8E2 (ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C04320C63179942F6C6C18F3C1DD63B20D228E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33E81761641345813DD169AAE875C47F354B87B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8541EE780EF4DC1F34810B10894AE1E92EDF2AFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// this.cardChicken = GameObject.Find("CardList_NiceChicken");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral20C04320C63179942F6C6C18F3C1DD63B20D228E, /*hidden argument*/NULL);
		__this->set_cardChicken_11(L_0);
		// this.cardCook = GameObject.Find("CardList_CookCookABC");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral8541EE780EF4DC1F34810B10894AE1E92EDF2AFC, /*hidden argument*/NULL);
		__this->set_cardCook_12(L_1);
		// string dictionaryBook = PlayerPrefs.GetString("dictionary");
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (dictionaryBook.Equals("chicken") || dictionaryBook.Equals(""))
		String_t* L_3 = V_0;
		NullCheck(L_3);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, _stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0045;
		}
	}
	{
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0096;
		}
	}

IL_0045:
	{
		// isSelect1 = true;
		__this->set_isSelect1_10((bool)1);
		// PlayerPrefs.SetString("dictionary", "chicken");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, _stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3, /*hidden argument*/NULL);
		// list1.sprite = select_list1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_list1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_select_list1_6();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// list2.sprite = unSelect_list2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_list2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = __this->get_unSelect_list2_9();
		NullCheck(L_9);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_9, L_10, /*hidden argument*/NULL);
		// cardChicken.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_cardChicken_11();
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// cardCook.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_cardCook_12();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// } else
		return;
	}

IL_0096:
	{
		// isSelect1 = false;
		__this->set_isSelect1_10((bool)0);
		// PlayerPrefs.SetString("dictionary", "cookcook");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, _stringLiteral33E81761641345813DD169AAE875C47F354B87B9, /*hidden argument*/NULL);
		// list1.sprite = unSelect_list1;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_13 = __this->get_list1_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_14 = __this->get_unSelect_list1_8();
		NullCheck(L_13);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_13, L_14, /*hidden argument*/NULL);
		// list2.sprite = select_list2;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15 = __this->get_list2_5();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = __this->get_select_list2_7();
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_16, /*hidden argument*/NULL);
		// cardChicken.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_cardChicken_11();
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// cardCook.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_cardCook_12();
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ListToggle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToggle_Update_mA572B7D682C7DDE2543EC46018A366A124ECC117 (ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ListToggle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListToggle__ctor_m165BDF2EA6BED4CBBC8511DA9FBC6113170E9B92 (ListToggle_tB9860AC480842FC667E5C37CCA5D5F62A33E636F * __this, const RuntimeMethod* method)
{
	{
		// public bool isSelect1 = true;
		__this->set_isSelect1_10((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NarrationController::ChangePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationController_ChangePosition_m1C8EE365C1655FBB0ACEC4D6379909B11AA6AD0A (NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA * __this, const RuntimeMethod* method)
{
	{
		// this.transform.position = new Vector3(pos_x, pos_y, 0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_1 = __this->get_pos_x_8();
		float L_2 = __this->get_pos_y_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_3), L_1, L_2, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_3, /*hidden argument*/NULL);
		// this.transform.localScale = new Vector3(scale_x, 0.6f, 0.6f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_5 = __this->get_scale_x_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_5, (0.600000024f), (0.600000024f), /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_4, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NarrationController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationController_Start_m3C38DA243600F0932D351BA18D3E47F80947ED88 (NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD34F53D6EAB55E6A41864ABFDDAD1C942F3CE340);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_soundSource_4(L_0);
		// Invoke("ChangePosition", nar_sec);
		float L_1 = __this->get_nar_sec_7();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralD34F53D6EAB55E6A41864ABFDDAD1C942F3CE340, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NarrationController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationController_Update_mC457DA61806423D0B48EDBE4C803257DACF74015 (NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!soundSource.isPlaying && !active)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004b;
		}
	}
	{
		bool L_2 = __this->get_active_6();
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		// GameObject.FindGameObjectWithTag("next").GetComponent<Image>().sprite = this.btn_active;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_btn_active_5();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// GameObject.FindGameObjectWithTag("next").GetComponent<Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE, /*hidden argument*/NULL);
		NullCheck(L_6);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7;
		L_7 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_7);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_7, (bool)1, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_6((bool)1);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void NarrationController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NarrationController__ctor_mD882CA0EC6D1B8D9CF21C04F920FA83AE56230BA (NarrationController_tB3FED5D2BCD306AB5E2136B59183374D67A5B1DA * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Nav_SceneChange::MoveBookCase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveBookCase_m828BE114A87DF2CB3B440D866375B318E6AA7F89 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral484F7150AB53494F0C2748FFA791EDDBCECB7778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral68B4BB2C684DC2304FD840B097A031F0618CCDE0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to bookcase");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral68B4BB2C684DC2304FD840B097A031F0618CCDE0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("2_BookCase");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral484F7150AB53494F0C2748FFA791EDDBCECB7778, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveCharacter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveCharacter_mB7283AAAFCB913141791089D85205EF253FF0597 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral817FBC8BE8C7857B3D6E3ABCF92CBDDB8223BEBF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA094D70D9DE22D5DA98BACF8F508493F18555E43);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to character");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA094D70D9DE22D5DA98BACF8F508493F18555E43, /*hidden argument*/NULL);
		// SceneManager.LoadScene("9_Character");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral817FBC8BE8C7857B3D6E3ABCF92CBDDB8223BEBF, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveDictionary_mF213784F4F370825B75A7595E289DCA83CC940A2 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA054EF3BCC300EA4D2C9A849E83B5A072D9DEC5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA167048534E5FECD791503CFDB493AAF4DB7C77E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to dictionary");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralA054EF3BCC300EA4D2C9A849E83B5A072D9DEC5B, /*hidden argument*/NULL);
		// SceneManager.LoadScene("10.1_BookList");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA167048534E5FECD791503CFDB493AAF4DB7C77E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveInformation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveInformation_mCA93C1FB96F065D67305892D3DAF62E58FEFDE9D (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA70404454AB55F3143AD9DFD63FE5BDE24FBE67B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5C7FFE413849F314AE012FDFAC66E3E2AAE0345);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to infomation");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC5C7FFE413849F314AE012FDFAC66E3E2AAE0345, /*hidden argument*/NULL);
		// SceneManager.LoadScene("11_Information");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA70404454AB55F3143AD9DFD63FE5BDE24FBE67B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveSetting_m98180CA68B62A5F7FAA32D5CCC6626111A6BB6A5 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15353998BC0FEFECCE4F7EF3D83F3C416D25F022);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to setting");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral15353998BC0FEFECCE4F7EF3D83F3C416D25F022, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveExit_mCD780C39446B44EB2E0A0F7EBA502D5A2FC580FF (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A3A22380D283C36EFF620CC85B1F5AB48ACCD74);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to exit");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral7A3A22380D283C36EFF620CC85B1F5AB48ACCD74, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::MoveTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange_MoveTree_mD4FA9D7433423261EF443208A012A2BB4BA2CA01 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C06D8F2495334D962C2DFEDD080D3DA729C1C87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8F69A9E93D2E1821DEF40EB2CC3366478285E53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("move to tree");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1C06D8F2495334D962C2DFEDD080D3DA729C1C87, /*hidden argument*/NULL);
		// SceneManager.LoadScene("2.1_Tree");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB8F69A9E93D2E1821DEF40EB2CC3366478285E53, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Nav_SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nav_SceneChange__ctor_m87C22565210D1B0463EA0392DC3AB857B3B3A706 (Nav_SceneChange_tC97D289A4FE45CEA54F7D270DDCBD12763B488DB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NewBehaviourScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Start_m783F84A617DADC4574B0BF1524481E6B96C65661 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript_Update_m411C4D5C2D993FD70092FDA0FE2AC4786F8AC001 (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NewBehaviourScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NewBehaviourScript__ctor_m437970EA37D66BDF32972F4CC0F65B95E5961FAA (NewBehaviourScript_t5ED8D4BD4668DBECFEFD841BD2A8CC1D8FCF38CB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Page1_Interaction::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page1_Interaction_Start_mCC28F4C23A39F5F1AB56F4FCFC889D993802D9F1 (Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37AF36F2E66A1320477D3E372F6C36C72F2909A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0A824476E32633DB9AC86E53F3AD44D92E8948);
		s_Il2CppMethodInitialized = true;
	}
	{
		// findMark1 = GameObject.Find("1_7 동그라미1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral37AF36F2E66A1320477D3E372F6C36C72F2909A4, /*hidden argument*/NULL);
		__this->set_findMark1_4(L_0);
		// findMark2 = GameObject.Find("1_7 동그라미2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralDE0A824476E32633DB9AC86E53F3AD44D92E8948, /*hidden argument*/NULL);
		__this->set_findMark2_5(L_1);
		// findMark1.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_findMark1_4();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// findMark2.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_findMark2_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Page1_Interaction::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page1_Interaction_Update_m59E07E0C75D93A9593374D67C2911EFC65C59C99 (Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2DFB1275555587873BE1BA86D929BC0BE5B1F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC821208638FFC1CF18E6352E75ADEECECB68F377);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_00d4;
		}
	}
	{
		// Vector2 pos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_1;
		L_1 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_1, L_2, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_3, /*hidden argument*/NULL);
		// RaycastHit2D hit = Physics2D.Raycast(pos, Vector2.zero, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_6;
		L_6 = Physics2D_Raycast_m684AD52FAD1E3BF5AE53F8E48AF92202114053C2(L_4, L_5, (0.0f), /*hidden argument*/NULL);
		V_0 = L_6;
		// if(hit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_7;
		L_7 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00d4;
		}
	}
	{
		// GameObject click_object = hit.transform.gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = RaycastHit2D_get_transform_m0CD992BD94BCE7F1CFB44D987924328B6C0E8864((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// Debug.Log(click_object.name);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = V_1;
		NullCheck(L_11);
		String_t* L_12;
		L_12 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// if(click_object.name.Equals("1_3 병아리2"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = V_1;
		NullCheck(L_13);
		String_t* L_14;
		L_14 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15;
		L_15 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_14, _stringLiteral5C2DFB1275555587873BE1BA86D929BC0BE5B1F5, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0097;
		}
	}
	{
		// click_object.transform.position = new Vector3(-4.1f, -1.37f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = V_1;
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_18), (-4.0999999f), (-1.37f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_17, L_18, /*hidden argument*/NULL);
		// findMark1.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = __this->get_findMark1_4();
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// } else if(click_object.name.Equals("1_4 병아리3"))
		return;
	}

IL_0097:
	{
		// } else if(click_object.name.Equals("1_4 병아리3"))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = V_1;
		NullCheck(L_20);
		String_t* L_21;
		L_21 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_22;
		L_22 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_21, _stringLiteralC821208638FFC1CF18E6352E75ADEECECB68F377, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00d4;
		}
	}
	{
		// click_object.transform.position = new Vector3(4.1f, -2.55f, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		NullCheck(L_23);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		memset((&L_25), 0, sizeof(L_25));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_25), (4.0999999f), (-2.54999995f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_24, L_25, /*hidden argument*/NULL);
		// findMark2.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_findMark2_5();
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
	}

IL_00d4:
	{
		// }
		return;
	}
}
// System.Void Page1_Interaction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page1_Interaction__ctor_m16FEA12DCAD7ED061E357BB6163DE3EB8C0D2538 (Page1_Interaction_tF1E9DEE1CFFE5F15CD6CA7F5E0700893FAE9BA42 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Page3_0_1Controller::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page3_0_1Controller_Start_mEAEFB3540EBA9CA88FF79F7FF620A0C46FBF61CF (Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// soundSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_soundSource_4(L_0);
		// }
		return;
	}
}
// System.Void Page3_0_1Controller::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page3_0_1Controller_Update_mDFBF0559873CDE23FB4003C3DDC08900FC3C77BC (Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!soundSource.isPlaying && !active)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_soundSource_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = AudioSource_get_isPlaying_mEA69477C77D542971F7B454946EF25DFBE0AF6A8(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_004b;
		}
	}
	{
		bool L_2 = __this->get_active_6();
		if (L_2)
		{
			goto IL_004b;
		}
	}
	{
		// GameObject.FindGameObjectWithTag("next").GetComponent<Image>().sprite = this.btn_active;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE, /*hidden argument*/NULL);
		NullCheck(L_3);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4;
		L_4 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_3, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = __this->get_btn_active_5();
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// GameObject.FindGameObjectWithTag("next").GetComponent<Button>().interactable = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralD0DB973E7F82F4AAED82B1E31C11863F2059D0BE, /*hidden argument*/NULL);
		NullCheck(L_6);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7;
		L_7 = GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8(L_6, /*hidden argument*/GameObject_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mC89B59084AF54D6861DE55F9F1FC4226E4F616A8_RuntimeMethod_var);
		NullCheck(L_7);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_7, (bool)1, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_6((bool)1);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Page3_0_1Controller::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Page3_0_1Controller__ctor_mFEF894DB11F1626850F60B7A88ED3E46A99DFD66 (Page3_0_1Controller_t52FA1CD8FCD444741A3549DFD268C979EDB14F49 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Practice2VideoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Practice2VideoController_Start_mB112FCD336424E51A5386EC06BAF99E449AF15C1 (Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35 * __this, const RuntimeMethod* method)
{
	{
		// mouseCanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_mouseCanvas_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// tougueCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_tougueCanvas_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Practice2VideoController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Practice2VideoController_Update_m0E9823578E6412BDE441F8E66A451FDFCC92CC4E (Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Practice2VideoController::ToggleBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Practice2VideoController_ToggleBtn_mCF3DABEEFD3F0C68675122DD174FFB05F36C46BE (Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35 * __this, const RuntimeMethod* method)
{
	{
		// if (active)     //true: 입모양 선택, false: 혀모양 선택
		bool L_0 = __this->get_active_9();
		if (!L_0)
		{
			goto IL_0039;
		}
	}
	{
		// mouseCanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_mouseCanvas_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// tougueCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_tougueCanvas_5();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// btn.sprite = mouseBtn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_btn_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_mouseBtn_7();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// active = false;
		__this->set_active_9((bool)0);
		// } else
		return;
	}

IL_0039:
	{
		// mouseCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_mouseCanvas_4();
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tougueCanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_tougueCanvas_5();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// btn.sprite = tougueBtn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_7 = __this->get_btn_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_tougueBtn_8();
		NullCheck(L_7);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_7, L_8, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_9((bool)1);
		// }
		return;
	}
}
// System.Void Practice2VideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Practice2VideoController__ctor_mDBC05A1E9C9B2F270855E2B541ED155308589484 (Practice2VideoController_t05C5CE506B582E530604704AB582621A6D79BC35 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PracticeVideoController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeVideoController_Start_m532187142FA7AA1E65B1AF53CB782418BABFE7AF (PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PracticeVideoController_CheckOver_m056C5589FECC32D685C3027C4194591636A924CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// video.loopPointReached += CheckOver;
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_video_4();
		EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD * L_1 = (EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD *)il2cpp_codegen_object_new(EventHandler_t99288A74FAB288C0033E28A5CD3DABE77B109BFD_il2cpp_TypeInfo_var);
		EventHandler__ctor_mA1A6722C36644D8F49E5A5008B68352561E03400(L_1, __this, (intptr_t)((intptr_t)PracticeVideoController_CheckOver_m056C5589FECC32D685C3027C4194591636A924CB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		VideoPlayer_add_loopPointReached_m01BBFFE55835498DFF2A1C8CEF3292B4780E4964(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PracticeVideoController::TogglePlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeVideoController_TogglePlayVideo_m0626B8A768B44ED6C15D99DF831930C786E3282E (PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C * __this, const RuntimeMethod* method)
{
	{
		// if (state)                      //true: 재생하기, false: 정지하기
		bool L_0 = __this->get_state_9();
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// video.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_video_4();
		NullCheck(L_1);
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_1, /*hidden argument*/NULL);
		// btn.sprite = pause_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_btn_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3 = __this->get_pause_btn_8();
		NullCheck(L_2);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_2, L_3, /*hidden argument*/NULL);
		// state = false;
		__this->set_state_9((bool)0);
		// } else
		return;
	}

IL_002c:
	{
		// video.Pause();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_video_4();
		NullCheck(L_4);
		VideoPlayer_Pause_m9A4568E69F3C3DDD2F83AF8FC0D594E39C9B479A(L_4, /*hidden argument*/NULL);
		// btn.sprite = play_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_btn_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_6 = __this->get_play_btn_7();
		NullCheck(L_5);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_5, L_6, /*hidden argument*/NULL);
		// state = true;
		__this->set_state_9((bool)1);
		// }
		return;
	}
}
// System.Void PracticeVideoController::CheckOver(UnityEngine.Video.VideoPlayer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeVideoController_CheckOver_m056C5589FECC32D685C3027C4194591636A924CB (PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C * __this, VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * ___vp0, const RuntimeMethod* method)
{
	{
		// btn.sprite = play_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_btn_6();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_1 = __this->get_play_btn_7();
		NullCheck(L_0);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_0, L_1, /*hidden argument*/NULL);
		// state = true;
		__this->set_state_9((bool)1);
		// }
		return;
	}
}
// System.Void PracticeVideoController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PracticeVideoController__ctor_m091965AF76BDC538A3DDAFBC946698A2B43E30E0 (PracticeVideoController_tC2C6D96AF23A5DFDC4A55677516771D8A3D03F4C * __this, const RuntimeMethod* method)
{
	{
		// bool state = true;
		__this->set_state_9((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Random_SceneChange::MoveRandomScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_SceneChange_MoveRandomScene_mD12E414502A8492A376023A4FB998AD2D58778AF (Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133E4D655F9709B6AA1093F2C738B5F6BD912810);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C622E06069F1F5C8BF0BBF0016F81F756A1710D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2965B3A8C2FFE597B74603ECDFE087BE6F65F7D0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral384C82C04D368F6A8C277BF68BD959D6EAED8E81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2A1E95ACBBAF462C545B0AFA27E60608939044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1914BF22FEC7A97A71BAEF5492B71BDD9979776);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int randomNum = Random.Range(1, 4);
		int32_t L_0;
		L_0 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(1, 4, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001d;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_007f;
			}
		}
	}
	{
		return;
	}

IL_001d:
	{
		// Debug.Log("1번으로 이동:" + randomNum);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral2965B3A8C2FFE597B74603ECDFE087BE6F65F7D0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Word", "병아리");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B, _stringLiteralC1914BF22FEC7A97A71BAEF5492B71BDD9979776, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName1);
		String_t* L_4 = __this->get_sceneName1_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_4, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_004e:
	{
		// Debug.Log("2번으로 이동:" + randomNum);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral384C82C04D368F6A8C277BF68BD959D6EAED8E81, L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_6, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Word", "오리");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B, _stringLiteral6E2A1E95ACBBAF462C545B0AFA27E60608939044, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName2);
		String_t* L_7 = __this->get_sceneName2_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_7, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_007f:
	{
		// Debug.Log("3번으로 이동:" + randomNum);
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_9;
		L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1C622E06069F1F5C8BF0BBF0016F81F756A1710D, L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_9, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Word", "삐악삐악");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B, _stringLiteral133E4D655F9709B6AA1093F2C738B5F6BD912810, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName3);
		String_t* L_10 = __this->get_sceneName3_6();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_10, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Random_SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_SceneChange__ctor_mFC455817670D451957AA80B22B28BC581CB0E8CF (Random_SceneChange_tAD88EC4C000C86309A8C056107379A68D7BCD6C3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RecordPlayController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPlayController_Start_mAAF8D9DC37FA1E364DB61B91B1094D6883526B8A (RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// audioSource = this.GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0;
		L_0 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_5(L_0);
		// }
		return;
	}
}
// System.Void RecordPlayController::SttResultPlay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPlayController_SttResultPlay_m06F75C898850181CEE1FAF8A636AAA46BC45DEDA (RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72 * __this, const RuntimeMethod* method)
{
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_0 = __this->get_audioSource_5();
		NullCheck(L_0);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecordPlayController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordPlayController__ctor_m4983FE2F274CDD6EF0F30B5350AF7086D36D094B (RecordPlayController_t34303BB40254D8D8AFD60B0BD96F338D2221AF72 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RecordSaveController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSaveController_Start_m341BB9BAAEB3791618F7DDCA8838A0D8EB696EB1 (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D8B9FD355171813130CD3B41FD9F37299B0129C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// successCanvas = GameObject.Find("Success");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890, /*hidden argument*/NULL);
		__this->set_successCanvas_8(L_0);
		// feedbackCanvas = GameObject.Find("FeedBack");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral9D8B9FD355171813130CD3B41FD9F37299B0129C, /*hidden argument*/NULL);
		__this->set_feedbackCanvas_9(L_1);
		// successAudio = successCanvas.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_successCanvas_8();
		NullCheck(L_2);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3;
		L_3 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_2, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_successAudio_10(L_3);
		// feedbackAudio = feedbackCanvas.GetComponent<AudioSource>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_feedbackCanvas_9();
		NullCheck(L_4);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5;
		L_5 = GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mAF312D503D6F1D34AF86F86AE5CD74920A901E53_RuntimeMethod_var);
		__this->set_feedbackAudio_11(L_5);
		// successCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_successCanvas_8();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// feedbackCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_feedbackCanvas_9();
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RecordSaveController::SttResultSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSaveController_SttResultSave_m3FE97BD62D719723128A8DAFDC5510BD0064055F (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BEA1A2159F1EB8FF67E0DE1EA2DFD8C6B1C90D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// string sttResult = PlayerPrefs.GetString("sttResult");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralC2BEA1A2159F1EB8FF67E0DE1EA2DFD8C6B1C90D, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (answer.Equals(sttResult))
		String_t* L_1 = __this->get_answer_4();
		String_t* L_2 = V_0;
		NullCheck(L_1);
		bool L_3;
		L_3 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002c;
		}
	}
	{
		// StartCoroutine(waitSuccess(2.0f));
		RuntimeObject* L_4;
		L_4 = RecordSaveController_waitSuccess_mFA8B9D424EC9BC78292D3764F4F9CBA436CF2C4C(__this, (2.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002c:
	{
		// StartCoroutine(waitFeedback(2.0f));
		RuntimeObject* L_6;
		L_6 = RecordSaveController_waitFeedback_m68FDC7F4B0B592E0BB3E837613E5EAEFB769016C(__this, (2.0f), /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_7;
		L_7 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RecordSaveController::waitSuccess(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordSaveController_waitSuccess_mFA8B9D424EC9BC78292D3764F4F9CBA436CF2C4C (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * L_0 = (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 *)il2cpp_codegen_object_new(U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2_il2cpp_TypeInfo_var);
		U3CwaitSuccessU3Ed__10__ctor_mF7AFD9A7D64BCAA45CD2454A275128180D9CC2E7(L_0, 0, /*hidden argument*/NULL);
		U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * L_2 = L_1;
		float L_3 = ___seconds0;
		NullCheck(L_2);
		L_2->set_seconds_3(L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator RecordSaveController::waitFeedback(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecordSaveController_waitFeedback_m68FDC7F4B0B592E0BB3E837613E5EAEFB769016C (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, float ___seconds0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * L_0 = (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C *)il2cpp_codegen_object_new(U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C_il2cpp_TypeInfo_var);
		U3CwaitFeedbackU3Ed__11__ctor_m8168100B85D0FEBC73F0E0799B68E392268A75EC(L_0, 0, /*hidden argument*/NULL);
		U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * L_2 = L_1;
		float L_3 = ___seconds0;
		NullCheck(L_2);
		L_2->set_seconds_3(L_3);
		return L_2;
	}
}
// System.Void RecordSaveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecordSaveController__ctor_mB643A9F0AD0E3678C35D9EF27631507BE191EC4F (RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Boolean SavWav::Save(System.String,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SavWav_Save_mF79C42FE3B2D3445F35CA3E0D232777F7422803E (String_t* ___filename0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!filename.ToLower().EndsWith(".wav"))
		String_t* L_0 = ___filename0;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = String_EndsWith_m9A6011FDF8EBFFD3BCB51FE5BE58BE265116DCBE(L_1, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_001f;
		}
	}
	{
		// filename += ".wav";
		String_t* L_3 = ___filename0;
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		___filename0 = L_4;
	}

IL_001f:
	{
		// var filepath = Path.Combine(Application.persistentDataPath, filename);
		String_t* L_5;
		L_5 = Application_get_persistentDataPath_mBD9C84D06693A9DEF2D9D2206B59D4BCF8A03463(/*hidden argument*/NULL);
		String_t* L_6 = ___filename0;
		IL2CPP_RUNTIME_CLASS_INIT(Path_tF1D95B78D57C1C1211BA6633FF2AC22FD6C48921_il2cpp_TypeInfo_var);
		String_t* L_7;
		L_7 = Path_Combine_mC22E47A9BB232F02ED3B6B5F6DD53338D37782EF(L_5, L_6, /*hidden argument*/NULL);
		// Debug.Log(filepath);
		String_t* L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_8, /*hidden argument*/NULL);
		// Directory.CreateDirectory(Path.GetDirectoryName(filepath));
		String_t* L_9 = L_8;
		String_t* L_10;
		L_10 = Path_GetDirectoryName_mFF7B47C1E2D3A3FD4B769257808A619D7117BEDE(L_9, /*hidden argument*/NULL);
		DirectoryInfo_t4EF3610F45F0D234800D01ADA8F3F476AE0CF5CD * L_11;
		L_11 = Directory_CreateDirectory_m38040338519C48CE52137CC146372A153D5C6A7A(L_10, /*hidden argument*/NULL);
		// using (var fileStream = CreateEmpty(filepath))
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12;
		L_12 = SavWav_CreateEmpty_m3F9CC38183EF60CE47B5B6730430C2F73D339A9B(L_9, /*hidden argument*/NULL);
		V_0 = L_12;
	}

IL_0042:
	try
	{ // begin try (depth: 1)
		// ConvertAndWrite(fileStream, clip);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_13 = V_0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_14 = ___clip1;
		SavWav_ConvertAndWrite_m4CABE44611567091FA68583548F7009781FC2F2D(L_13, L_14, /*hidden argument*/NULL);
		// WriteHeader(fileStream, clip);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_15 = V_0;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_16 = ___clip1;
		SavWav_WriteHeader_m4657DBC9C2CE5F037AB50C6331B57FA1374B09FF(L_15, L_16, /*hidden argument*/NULL);
		// }
		IL2CPP_LEAVE(0x5C, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_17 = V_0;
			if (!L_17)
			{
				goto IL_005b;
			}
		}

IL_0055:
		{
			FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_18 = V_0;
			NullCheck(L_18);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_18);
		}

IL_005b:
		{
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5C, IL_005c)
	}

IL_005c:
	{
		// return true; // TODO: return false if there's a failure saving the file
		return (bool)1;
	}
}
// UnityEngine.AudioClip SavWav::TrimSilence(UnityEngine.AudioClip,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SavWav_TrimSilence_m01B110C052E2A0CE397DB7EFD71E0441F9419E39 (AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, float ___min1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	{
		// var samples = new float[clip.samples];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// clip.GetData(samples, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = ___clip0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_3, L_4, 0, /*hidden argument*/NULL);
		// return TrimSilence(new List<float>(samples), min, clip.channels, clip.frequency);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA *)il2cpp_codegen_object_new(List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA_il2cpp_TypeInfo_var);
		List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D(L_7, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/List_1__ctor_m65426A0A2C2F83271252601E2AF4A31C3A0FD22D_RuntimeMethod_var);
		float L_8 = ___min1;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9 = ___clip0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_9, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = ___clip0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_11, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_13;
		L_13 = SavWav_TrimSilence_mD708687DC3246B5DA9C5D3B3AF94442DF5C2BCAB(L_7, L_8, L_10, L_12, /*hidden argument*/NULL);
		return L_13;
	}
}
// UnityEngine.AudioClip SavWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SavWav_TrimSilence_mD708687DC3246B5DA9C5D3B3AF94442DF5C2BCAB (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, const RuntimeMethod* method)
{
	{
		// return TrimSilence(samples, min, channels, hz, false, false);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___samples0;
		float L_1 = ___min1;
		int32_t L_2 = ___channels2;
		int32_t L_3 = ___hz3;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4;
		L_4 = SavWav_TrimSilence_m6230215A36E39B518E3A6BCAAB69182575EB69E2(L_0, L_1, L_2, L_3, (bool)0, (bool)0, /*hidden argument*/NULL);
		return L_4;
	}
}
// UnityEngine.AudioClip SavWav::TrimSilence(System.Collections.Generic.List`1<System.Single>,System.Single,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * SavWav_TrimSilence_m6230215A36E39B518E3A6BCAAB69182575EB69E2 (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * ___samples0, float ___min1, int32_t ___channels2, int32_t ___hz3, bool ____3D4, bool ___stream5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (i = 0; i < samples.Count; i++)
		V_0 = 0;
		goto IL_0017;
	}

IL_0004:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_0 = ___samples0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		float L_2;
		L_2 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		float L_3;
		L_3 = fabsf(L_2);
		float L_4 = ___min1;
		if ((((float)L_3) > ((float)L_4)))
		{
			goto IL_0020;
		}
	}
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0017:
	{
		// for (i = 0; i < samples.Count; i++)
		int32_t L_6 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_7 = ___samples0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_7, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		if ((((int32_t)L_6) < ((int32_t)L_8)))
		{
			goto IL_0004;
		}
	}

IL_0020:
	{
		// samples.RemoveRange(0, i);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_9 = ___samples0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554(L_9, 0, L_10, /*hidden argument*/List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		// for (i = samples.Count - 1; i > 0; i--)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_11 = ___samples0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_11, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0046;
	}

IL_0033:
	{
		// if (Mathf.Abs(samples[i]) > min)
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_13 = ___samples0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		float L_15;
		L_15 = List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_inline(L_13, L_14, /*hidden argument*/List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_RuntimeMethod_var);
		float L_16;
		L_16 = fabsf(L_15);
		float L_17 = ___min1;
		if ((((float)L_16) > ((float)L_17)))
		{
			goto IL_004a;
		}
	}
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0046:
	{
		// for (i = samples.Count - 1; i > 0; i--)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) > ((int32_t)0)))
		{
			goto IL_0033;
		}
	}

IL_004a:
	{
		// samples.RemoveRange(i, samples.Count - i);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_20 = ___samples0;
		int32_t L_21 = V_0;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_22 = ___samples0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_22, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		int32_t L_24 = V_0;
		NullCheck(L_20);
		List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554(L_20, L_21, ((int32_t)il2cpp_codegen_subtract((int32_t)L_23, (int32_t)L_24)), /*hidden argument*/List_1_RemoveRange_m3C02335CFC5106AE22A3A6766602716222F52554_RuntimeMethod_var);
		// var clip = AudioClip.Create("TempClip", samples.Count, channels, hz, _3D, stream);
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_25 = ___samples0;
		NullCheck(L_25);
		int32_t L_26;
		L_26 = List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_inline(L_25, /*hidden argument*/List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_RuntimeMethod_var);
		int32_t L_27 = ___channels2;
		int32_t L_28 = ___hz3;
		bool L_29 = ____3D4;
		bool L_30 = ___stream5;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_31;
		L_31 = AudioClip_Create_m7E9CB790FEC5614187662C53DE687ED94AC752C8(_stringLiteral7CE10074DA4EDD547E37EFFF41398CD6AD4437FE, L_26, L_27, L_28, L_29, L_30, /*hidden argument*/NULL);
		// clip.SetData(samples.ToArray(), 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_32 = L_31;
		List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * L_33 = ___samples0;
		NullCheck(L_33);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34;
		L_34 = List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4(L_33, /*hidden argument*/List_1_ToArray_m37D2664B90FFB92110C2EE462D0E5CFB0216C2F4_RuntimeMethod_var);
		NullCheck(L_32);
		bool L_35;
		L_35 = AudioClip_SetData_m3424F9C6C5B7A15491B79F961C30D8F0051E34F7(L_32, L_34, 0, /*hidden argument*/NULL);
		// return clip;
		return L_32;
	}
}
// System.IO.FileStream SavWav::CreateEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * SavWav_CreateEmpty_m3F9CC38183EF60CE47B5B6730430C2F73D339A9B (String_t* ___filepath0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * V_0 = NULL;
	uint8_t V_1 = 0x0;
	int32_t V_2 = 0;
	{
		// var fileStream = new FileStream(filepath, FileMode.Create);
		String_t* L_0 = ___filepath0;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_1 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_mDC286819520925AB5873921EFFEADA1EC1648CFB(L_1, L_0, 2, /*hidden argument*/NULL);
		V_0 = L_1;
		// byte emptyByte = new byte();
		V_1 = (uint8_t)0;
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		V_2 = 0;
		goto IL_0019;
	}

IL_000e:
	{
		// fileStream.WriteByte(emptyByte);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = V_0;
		uint8_t L_3 = V_1;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(29 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_2, L_3);
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		int32_t L_4 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0019:
	{
		// for (int i = 0; i < HEADER_SIZE; i++) //preparing the header
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)44))))
		{
			goto IL_000e;
		}
	}
	{
		// return fileStream;
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = V_0;
		return L_6;
	}
}
// System.Void SavWav::ConvertAndWrite(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_ConvertAndWrite_m4CABE44611567091FA68583548F7009781FC2F2D (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var samples = new float[clip.samples];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)L_1);
		V_0 = L_2;
		// clip.GetData(samples, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = ___clip1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = V_0;
		NullCheck(L_3);
		bool L_5;
		L_5 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_3, L_4, 0, /*hidden argument*/NULL);
		// Int16[] intData = new Int16[samples.Length];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = V_0;
		NullCheck(L_6);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_7 = (Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD*)SZArrayNew(Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		V_1 = L_7;
		// Byte[] bytesData = new Byte[samples.Length * 2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))), (int32_t)2)));
		V_2 = L_9;
		// int rescaleFactor = 32767; //to convert float to Int16
		V_3 = ((int32_t)32767);
		// for (int i = 0; i < samples.Length; i++)
		V_4 = 0;
		goto IL_0060;
	}

IL_0034:
	{
		// intData[i] = (short)(samples[i] * rescaleFactor);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_10 = V_1;
		int32_t L_11 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = V_0;
		int32_t L_13 = V_4;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		float L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = V_3;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (int16_t)il2cpp_codegen_cast_double_to_int<int16_t>(((float)il2cpp_codegen_multiply((float)L_15, (float)((float)((float)L_16))))));
		// Byte[] byteArr = new Byte[2];
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)2);
		// byteArr = BitConverter.GetBytes(intData[i]);
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_18 = V_1;
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		int16_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8(L_21, /*hidden argument*/NULL);
		// byteArr.CopyTo(bytesData, i * 2);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_2;
		int32_t L_24 = V_4;
		NullCheck((RuntimeArray *)(RuntimeArray *)L_22);
		Array_CopyTo_m6AF950973942E09BAB1F21B055BBD2CD58C980B2((RuntimeArray *)(RuntimeArray *)L_22, (RuntimeArray *)(RuntimeArray *)L_23, ((int32_t)il2cpp_codegen_multiply((int32_t)L_24, (int32_t)2)), /*hidden argument*/NULL);
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_25 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_0060:
	{
		// for (int i = 0; i < samples.Length; i++)
		int32_t L_26 = V_4;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_27 = V_0;
		NullCheck(L_27);
		if ((((int32_t)L_26) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_27)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		// fileStream.Write(bytesData, 0, bytesData.Length);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_28 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_2;
		NullCheck(L_30);
		NullCheck(L_28);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_28, L_29, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))));
		// }
		return;
	}
}
// System.Void SavWav::WriteHeader(System.IO.FileStream,UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SavWav_WriteHeader_m4657DBC9C2CE5F037AB50C6331B57FA1374B09FF (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * ___fileStream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_3 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_5 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_6 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_7 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_8 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_9 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_10 = NULL;
	uint16_t V_11 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_12 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_13 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_14 = NULL;
	{
		// var hz = clip.frequency;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___clip1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_0, /*hidden argument*/NULL);
		// var channels = clip.channels;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___clip1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// var samples = clip.samples;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4 = ___clip1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		// fileStream.Seek(0, SeekOrigin.Begin);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = ___fileStream0;
		NullCheck(L_6);
		int64_t L_7;
		L_7 = VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(25 /* System.Int64 System.IO.Stream::Seek(System.Int64,System.IO.SeekOrigin) */, L_6, ((int64_t)((int64_t)0)), 0);
		// Byte[] riff = System.Text.Encoding.UTF8.GetBytes("RIFF");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_8;
		L_8 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_8, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		V_2 = L_9;
		// fileStream.Write(riff, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_10 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = V_2;
		NullCheck(L_10);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_10, L_11, 0, 4);
		// Byte[] chunkSize = BitConverter.GetBytes(fileStream.Length - 8);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_12 = ___fileStream0;
		NullCheck(L_12);
		int64_t L_13;
		L_13 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_12);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = BitConverter_GetBytes_m4BCB9C5EF4286885A640995E44AB52E5F629E3C7(((int64_t)il2cpp_codegen_subtract((int64_t)L_13, (int64_t)((int64_t)((int64_t)8)))), /*hidden argument*/NULL);
		V_3 = L_14;
		// fileStream.Write(chunkSize, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_15 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_3;
		NullCheck(L_15);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_15, L_16, 0, 4);
		// Byte[] wave = System.Text.Encoding.UTF8.GetBytes("WAVE");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_17;
		L_17 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18;
		L_18 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_17, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		V_4 = L_18;
		// fileStream.Write(wave, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_19 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_4;
		NullCheck(L_19);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, 4);
		// Byte[] fmt = System.Text.Encoding.UTF8.GetBytes("fmt ");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_21;
		L_21 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_21);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_22;
		L_22 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_21, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		V_5 = L_22;
		// fileStream.Write(fmt, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_23 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_5;
		NullCheck(L_23);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, 4);
		// Byte[] subChunk1 = BitConverter.GetBytes(16);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25;
		L_25 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)16), /*hidden argument*/NULL);
		V_6 = L_25;
		// fileStream.Write(subChunk1, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_26 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_27 = V_6;
		NullCheck(L_26);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, 4);
		// UInt16 one = 1;
		// Byte[] audioFormat = BitConverter.GetBytes(one);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_28;
		L_28 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)1, /*hidden argument*/NULL);
		V_7 = L_28;
		// fileStream.Write(audioFormat, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_29 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_30 = V_7;
		NullCheck(L_29);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, 2);
		// Byte[] numChannels = BitConverter.GetBytes(channels);
		int32_t L_31 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_32;
		L_32 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_31, /*hidden argument*/NULL);
		V_8 = L_32;
		// fileStream.Write(numChannels, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_33 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_34 = V_8;
		NullCheck(L_33);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, 2);
		// Byte[] sampleRate = BitConverter.GetBytes(hz);
		int32_t L_35 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_36;
		L_36 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_35, /*hidden argument*/NULL);
		V_9 = L_36;
		// fileStream.Write(sampleRate, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_37 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_38 = V_9;
		NullCheck(L_37);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_37, L_38, 0, 4);
		// Byte[] byteRate = BitConverter.GetBytes(hz * channels * 2); // sampleRate * bytesPerSample*number of channels, here 44100*2*2
		int32_t L_39 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_40;
		L_40 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_35, (int32_t)L_39)), (int32_t)2)), /*hidden argument*/NULL);
		V_10 = L_40;
		// fileStream.Write(byteRate, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_41 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_42 = V_10;
		NullCheck(L_41);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_41, L_42, 0, 4);
		// UInt16 blockAlign = (ushort)(channels * 2);
		int32_t L_43 = V_0;
		V_11 = (uint16_t)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_43, (int32_t)2))));
		// fileStream.Write(BitConverter.GetBytes(blockAlign), 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_44 = ___fileStream0;
		uint16_t L_45 = V_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_46;
		L_46 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_45, /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_44, L_46, 0, 2);
		// UInt16 bps = 16;
		// Byte[] bitsPerSample = BitConverter.GetBytes(bps);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_47;
		L_47 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296((uint16_t)((int32_t)16), /*hidden argument*/NULL);
		V_12 = L_47;
		// fileStream.Write(bitsPerSample, 0, 2);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_48 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_49 = V_12;
		NullCheck(L_48);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_48, L_49, 0, 2);
		// Byte[] datastring = System.Text.Encoding.UTF8.GetBytes("data");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_50;
		L_50 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		NullCheck(L_50);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_51;
		L_51 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_50, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		V_13 = L_51;
		// fileStream.Write(datastring, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_52 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_53 = V_13;
		NullCheck(L_52);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_52, L_53, 0, 4);
		// Byte[] subChunk2 = BitConverter.GetBytes(samples * channels * 2);
		int32_t L_54 = V_1;
		int32_t L_55 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_56;
		L_56 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_54, (int32_t)L_55)), (int32_t)2)), /*hidden argument*/NULL);
		V_14 = L_56;
		// fileStream.Write(subChunk2, 0, 4);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_57 = ___fileStream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_58 = V_14;
		NullCheck(L_57);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_57, L_58, 0, 4);
		// }
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
// System.Void SaveUserInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveUserInfo_Start_m576F9C63083245D982789E332DFA2B3E1DDE4205 (SaveUserInfo_t8D521D25F43FDB2598D8CF8F143B69B559FFF581 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0DD175E66A72FDD33586B2EA57C605C4A1F7093C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Stage1", "incomplete");      //단계 완료시 complete, 미완료시 incomplete
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58, _stringLiteral0DD175E66A72FDD33586B2EA57C605C4A1F7093C, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Stage2", "incomplete");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9, _stringLiteral0DD175E66A72FDD33586B2EA57C605C4A1F7093C, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("Stage3", "incomplete");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B, _stringLiteral0DD175E66A72FDD33586B2EA57C605C4A1F7093C, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SaveUserInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveUserInfo_Update_m31FA2E8E2FC2F53362DEF02ED8184E26641B1379 (SaveUserInfo_t8D521D25F43FDB2598D8CF8F143B69B559FFF581 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void SaveUserInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SaveUserInfo__ctor_m7A115CB42022B4725A3A8596BF18E7B2BF1FF9C0 (SaveUserInfo_t8D521D25F43FDB2598D8CF8F143B69B559FFF581 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScrollManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_Start_m719393747E0B2426E76298783DC20E107FFA165E (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// distance = 1f / (SIZE - 1);
		__this->set_distance_8((1.0f));
		// for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
		V_0 = 0;
		goto IL_0024;
	}

IL_000f:
	{
		// for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = __this->get_pos_7();
		int32_t L_1 = V_0;
		float L_2 = __this->get_distance_8();
		int32_t L_3 = V_0;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (float)((float)il2cpp_codegen_multiply((float)L_2, (float)((float)((float)L_3)))));
		// for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0024:
	{
		// for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)2)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// System.Single ScrollManager::SetPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ScrollManager_SetPos_m179DB4E2B1EF2571AE5A94F573BC3D54E914DC95 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// for(int i = 0; i < SIZE; i++)
		V_0 = 0;
		goto IL_0055;
	}

IL_0004:
	{
		// if(scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_0 = __this->get_scrollbar_4();
		NullCheck(L_0);
		float L_1;
		L_1 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_pos_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = __this->get_distance_8();
		if ((!(((float)L_1) < ((float)((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f)))))))))
		{
			goto IL_0051;
		}
	}
	{
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_7 = __this->get_scrollbar_4();
		NullCheck(L_7);
		float L_8;
		L_8 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_7, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_pos_7();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->get_distance_8();
		if ((!(((float)L_8) > ((float)((float)il2cpp_codegen_subtract((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(0.5f)))))))))
		{
			goto IL_0051;
		}
	}
	{
		// return pos[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_pos_7();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		return L_17;
	}

IL_0051:
	{
		// for(int i = 0; i < SIZE; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0055:
	{
		// for(int i = 0; i < SIZE; i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return (0.0f);
	}
}
// System.Void ScrollManager::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnBeginDrag_m3462DCB8BC34597B5708DBFFFA6CABAC0E0F6DF2 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// curPos = SetPos();
		float L_0;
		L_0 = ScrollManager_SetPos_m179DB4E2B1EF2571AE5A94F573BC3D54E914DC95(__this, /*hidden argument*/NULL);
		__this->set_curPos_9(L_0);
		// }
		return;
	}
}
// System.Void ScrollManager::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnDrag_mC7E101A7EF4EE0C8E81E1149B0D09796F9F58028 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// isDrag = true;
		__this->set_isDrag_11((bool)1);
		// }
		return;
	}
}
// System.Void ScrollManager::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_OnEndDrag_m422041C6BE912AB62596195FE06DF05F6D3F28F1 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E_m3FC6302C290CCCBD43AE9F13FEE2AF543EEE176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mEFEB4A968ACD1FAE64812EDE0FDE3B0A2B1455EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// isDrag = false;
		__this->set_isDrag_11((bool)0);
		// for(int i = 0; i<SIZE; i++)
		V_0 = 0;
		goto IL_0061;
	}

IL_000b:
	{
		// if (scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_0 = __this->get_scrollbar_4();
		NullCheck(L_0);
		float L_1;
		L_1 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_0, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = __this->get_pos_7();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = __this->get_distance_8();
		if ((!(((float)L_1) < ((float)((float)il2cpp_codegen_add((float)L_5, (float)((float)il2cpp_codegen_multiply((float)L_6, (float)(0.5f)))))))))
		{
			goto IL_005d;
		}
	}
	{
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_7 = __this->get_scrollbar_4();
		NullCheck(L_7);
		float L_8;
		L_8 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_7, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = __this->get_pos_7();
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		float L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->get_distance_8();
		if ((!(((float)L_8) > ((float)((float)il2cpp_codegen_subtract((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(0.5f)))))))))
		{
			goto IL_005d;
		}
	}
	{
		// targetPos = pos[i];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_pos_7();
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		float L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		__this->set_targetPos_10(L_17);
	}

IL_005d:
	{
		// for(int i = 0; i<SIZE; i++)
		int32_t L_18 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0061:
	{
		// for(int i = 0; i<SIZE; i++)
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) < ((int32_t)2)))
		{
			goto IL_000b;
		}
	}
	{
		// for (int i = 0; i < SIZE; i++)
		V_1 = 0;
		goto IL_00c6;
	}

IL_0069:
	{
		// if (contentTr.GetChild(i).GetComponent<ScrollScript>() && curPos != pos[i] && targetPos == pos[i])
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = __this->get_contentTr_5();
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_20, L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * L_23;
		L_23 = Component_GetComponent_TisScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E_m3FC6302C290CCCBD43AE9F13FEE2AF543EEE176A(L_22, /*hidden argument*/Component_GetComponent_TisScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E_m3FC6302C290CCCBD43AE9F13FEE2AF543EEE176A_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00c2;
		}
	}
	{
		float L_25 = __this->get_curPos_9();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_26 = __this->get_pos_7();
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((float)L_25) == ((float)L_29)))
		{
			goto IL_00c2;
		}
	}
	{
		float L_30 = __this->get_targetPos_10();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_31 = __this->get_pos_7();
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if ((!(((float)L_30) == ((float)L_34))))
		{
			goto IL_00c2;
		}
	}
	{
		// contentTr.GetChild(i).GetChild(1).GetComponent<Scrollbar>().value = 1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35 = __this->get_contentTr_5();
		int32_t L_36 = V_1;
		NullCheck(L_35);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_35, L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_37, 1, /*hidden argument*/NULL);
		NullCheck(L_38);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_39;
		L_39 = Component_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mEFEB4A968ACD1FAE64812EDE0FDE3B0A2B1455EC(L_38, /*hidden argument*/Component_GetComponent_TisScrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28_mEFEB4A968ACD1FAE64812EDE0FDE3B0A2B1455EC_RuntimeMethod_var);
		NullCheck(L_39);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_39, (1.0f), /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// for (int i = 0; i < SIZE; i++)
		int32_t L_40 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00c6:
	{
		// for (int i = 0; i < SIZE; i++)
		int32_t L_41 = V_1;
		if ((((int32_t)L_41) < ((int32_t)2)))
		{
			goto IL_0069;
		}
	}
	{
		// }
		return;
	}
}
// System.Void ScrollManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_Update_mF3E47539AE1F968833778C5665682452FE205606 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, const RuntimeMethod* method)
{
	{
		// if(!isDrag) scrollbar.value = Mathf.Lerp(scrollbar.value, targetPos, 0.1f);
		bool L_0 = __this->get_isDrag_11();
		if (L_0)
		{
			goto IL_002e;
		}
	}
	{
		// if(!isDrag) scrollbar.value = Mathf.Lerp(scrollbar.value, targetPos, 0.1f);
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_1 = __this->get_scrollbar_4();
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_2 = __this->get_scrollbar_4();
		NullCheck(L_2);
		float L_3;
		L_3 = Scrollbar_get_value_mC925448739BB4DC891D49F600D370D808296BD07(L_2, /*hidden argument*/NULL);
		float L_4 = __this->get_targetPos_10();
		float L_5;
		L_5 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_3, L_4, (0.100000001f), /*hidden argument*/NULL);
		NullCheck(L_1);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_1, L_5, /*hidden argument*/NULL);
	}

IL_002e:
	{
		// }
		return;
	}
}
// System.Void ScrollManager::TabClick(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager_TabClick_m73D5200E1FEFEAF04FB6604A514CE11D5B89B2F2 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, int32_t ___n0, const RuntimeMethod* method)
{
	{
		// targetIndex = n;
		int32_t L_0 = ___n0;
		__this->set_targetIndex_12(L_0);
		// targetPos = pos[n];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = __this->get_pos_7();
		int32_t L_2 = ___n0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		float L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		__this->set_targetPos_10(L_4);
		// }
		return;
	}
}
// System.Void ScrollManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollManager__ctor_m292749EA7654EE244BFDCEE8A39B349C6AD4F4F0 (ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] pos = new float[SIZE];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_pos_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScrollScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollScript_Start_mAD22A90AF4E75274A034EFA0026A5A600D3F03FC (ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60_mAE3254D6FBFA5F4842FC645DA40C44AC368EB8E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_mABEA32EA90E9E1C7801D1D8C6F164D16D63FED14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA27B365DFED618556AC0BEDBC6F9404F3B6A08EE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// scrollManager = GameObject.FindWithTag("ScrollManager").GetComponent<ScrollManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralA27B365DFED618556AC0BEDBC6F9404F3B6A08EE, /*hidden argument*/NULL);
		NullCheck(L_0);
		ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * L_1;
		L_1 = GameObject_GetComponent_TisScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60_mAE3254D6FBFA5F4842FC645DA40C44AC368EB8E9(L_0, /*hidden argument*/GameObject_GetComponent_TisScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60_mAE3254D6FBFA5F4842FC645DA40C44AC368EB8E9_RuntimeMethod_var);
		__this->set_scrollManager_42(L_1);
		// parentScrollRect = GameObject.FindWithTag("ScrollManager").GetComponent<ScrollRect>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_FindWithTag_mEF75D1FF1E55B338A77161FDCB68ED0A2A911DF3(_stringLiteralA27B365DFED618556AC0BEDBC6F9404F3B6A08EE, /*hidden argument*/NULL);
		NullCheck(L_2);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_3;
		L_3 = GameObject_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_mABEA32EA90E9E1C7801D1D8C6F164D16D63FED14(L_2, /*hidden argument*/GameObject_GetComponent_TisScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA_mABEA32EA90E9E1C7801D1D8C6F164D16D63FED14_RuntimeMethod_var);
		__this->set_parentScrollRect_43(L_3);
		// }
		return;
	}
}
// System.Void ScrollScript::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollScript_OnBeginDrag_m7B86E7C14F494839B8ACD26BEAF80617FF727FAD (ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// forParent = Mathf.Abs(eventData.delta.x) > Mathf.Abs(eventData.delta.y);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_0 = ___eventData0;
		NullCheck(L_0);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		L_1 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_0();
		float L_3;
		L_3 = fabsf(L_2);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___eventData0;
		NullCheck(L_4);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_1();
		float L_7;
		L_7 = fabsf(L_6);
		__this->set_forParent_41((bool)((((float)L_3) > ((float)L_7))? 1 : 0));
		// if (forParent)
		bool L_8 = __this->get_forParent_41();
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		// scrollManager.OnBeginDrag(eventData);
		ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * L_9 = __this->get_scrollManager_42();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_10 = ___eventData0;
		NullCheck(L_9);
		ScrollManager_OnBeginDrag_m3462DCB8BC34597B5708DBFFFA6CABAC0E0F6DF2(L_9, L_10, /*hidden argument*/NULL);
		// parentScrollRect.OnBeginDrag(eventData);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_11 = __this->get_parentScrollRect_43();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_12 = ___eventData0;
		NullCheck(L_11);
		VirtActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(44 /* System.Void UnityEngine.UI.ScrollRect::OnBeginDrag(UnityEngine.EventSystems.PointerEventData) */, L_11, L_12);
		// }
		return;
	}

IL_0049:
	{
		// else base.OnBeginDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_13 = ___eventData0;
		ScrollRect_OnBeginDrag_mFD8547604ADE7E19C1CB247BE3C3D30EDBF6F170(__this, L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollScript::OnDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollScript_OnDrag_mC20BFBE6DD92EAFBE2F61470E6194F0C0980DBA0 (ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if (forParent)
		bool L_0 = __this->get_forParent_41();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// scrollManager.OnDrag(eventData);
		ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * L_1 = __this->get_scrollManager_42();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_1);
		ScrollManager_OnDrag_mC7E101A7EF4EE0C8E81E1149B0D09796F9F58028(L_1, L_2, /*hidden argument*/NULL);
		// parentScrollRect.OnDrag(eventData);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_3 = __this->get_parentScrollRect_43();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___eventData0;
		NullCheck(L_3);
		VirtActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(46 /* System.Void UnityEngine.UI.ScrollRect::OnDrag(UnityEngine.EventSystems.PointerEventData) */, L_3, L_4);
		// }
		return;
	}

IL_0021:
	{
		// else base.OnDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = ___eventData0;
		ScrollRect_OnDrag_mAE4C9A8E16CE9E40F1F50F6CC9DBAC5107327C24(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollScript::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollScript_OnEndDrag_m264B752D9F4A3700D71163085C2F9B6913C4B469 (ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// if (forParent)
		bool L_0 = __this->get_forParent_41();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// scrollManager.OnEndDrag(eventData);
		ScrollManager_t70D7E8A7C5B3979C6F97A0DA0232240492C12F60 * L_1 = __this->get_scrollManager_42();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_2 = ___eventData0;
		NullCheck(L_1);
		ScrollManager_OnEndDrag_m422041C6BE912AB62596195FE06DF05F6D3F28F1(L_1, L_2, /*hidden argument*/NULL);
		// parentScrollRect.OnEndDrag(eventData);
		ScrollRect_tB16156010F89FFDAAB2127CA878608FD91B9FBEA * L_3 = __this->get_parentScrollRect_43();
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_4 = ___eventData0;
		NullCheck(L_3);
		VirtActionInvoker1< PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * >::Invoke(45 /* System.Void UnityEngine.UI.ScrollRect::OnEndDrag(UnityEngine.EventSystems.PointerEventData) */, L_3, L_4);
		// }
		return;
	}

IL_0021:
	{
		// else base.OnEndDrag(eventData);
		PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * L_5 = ___eventData0;
		ScrollRect_OnEndDrag_m655F48C5CD01CFC9802144038A635B6F663FE828(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ScrollScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScrollScript__ctor_m9F1D29E082234DD955BA4DCB8EEE694866EA6C07 (ScrollScript_t7A97FB95C932ECB3324FD3A6D5F1A0C54A23DC1E * __this, const RuntimeMethod* method)
{
	{
		ScrollRect__ctor_mB4B056D158F001158736D43FF95A79C4749F81EB(__this, /*hidden argument*/NULL);
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
// System.Void SpeechToText::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_Start_m267850BC47676FDE6C472D0AE6E3B36A63D03D98 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method)
{
	{
		// _microphoneID = Microphone.devices[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set__microphoneID_4(L_2);
		// }
		return;
	}
}
// System.Void SpeechToText::startRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_startRecording_mA1B9992D844DDD5A7B48A13154680649A013F41D (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF34550EE1F0479AABE0E68A88AD01EA39EB14FAD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD7E1424DC8725F5485D12AA80FC1C3FA0767FC2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Exception_t * V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// string fileCheck = @"/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Resources/" + answer + ".wav";
		String_t* L_0 = __this->get_answer_10();
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralFD7E1424DC8725F5485D12AA80FC1C3FA0767FC2, L_0, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		V_0 = L_1;
		// if (File.Exists(fileCheck))
		String_t* L_2 = V_0;
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0039;
		}
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		// File.Delete(fileCheck);
		String_t* L_4 = V_0;
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0039;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0026;
		}
		throw e;
	}

CATCH_0026:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_1 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Console.WriteLine("The deletion failed: {0}", e.Message);
		Exception_t * L_5 = V_1;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var)));
		Console_WriteLine_m4B2F36DB25614A4C2E237548DB2B56B277C530CD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1110AD9B1979CA8CCDD901B2845BAD9FD3D1BD26)), L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0039;
	} // end catch (depth: 1)

IL_0039:
	{
		// Debug.Log("start recording");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF34550EE1F0479AABE0E68A88AD01EA39EB14FAD, /*hidden argument*/NULL);
		// audioSource.clip = Microphone.Start(_microphoneID, false, _recordingLengthSec, _recordingHZ);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7 = __this->get_audioSource_9();
		String_t* L_8 = __this->get__microphoneID_4();
		int32_t L_9 = __this->get__recordingLengthSec_5();
		int32_t L_10 = __this->get__recordingHZ_6();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11;
		L_11 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_8, (bool)0, L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_7);
		AudioSource_set_clip_mD1F50F7BA6EA3AF25B4922473352C5180CFF7B2B(L_7, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpeechToText::stopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_stopRecording_m596BF800BBDE228F46E507B22352A44D65342D0E (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6347ECA22C6DF182EF85FDF20EB9438FD9C5DE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA79DF414A80C6DBDBAB707743934FF4E0367122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD7E1424DC8725F5485D12AA80FC1C3FA0767FC2);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	{
		// if (Microphone.IsRecording(_microphoneID))
		String_t* L_0 = __this->get__microphoneID_4();
		bool L_1;
		L_1 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0087;
		}
	}
	{
		// Microphone.End(_microphoneID);
		String_t* L_2 = __this->get__microphoneID_4();
		Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_2, /*hidden argument*/NULL);
		// Debug.Log("stop recording");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFA79DF414A80C6DBDBAB707743934FF4E0367122, /*hidden argument*/NULL);
		// if (audioSource.clip == null)
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_3 = __this->get_audioSource_9();
		NullCheck(L_3);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_4;
		L_4 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError("nothing recorded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC6347ECA22C6DF182EF85FDF20EB9438FD9C5DE0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0040:
	{
		// SavWav.Save("/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Resources/" + answer, audioSource.clip);
		String_t* L_6 = __this->get_answer_10();
		String_t* L_7;
		L_7 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFD7E1424DC8725F5485D12AA80FC1C3FA0767FC2, L_6, /*hidden argument*/NULL);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = __this->get_audioSource_9();
		NullCheck(L_8);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9;
		L_9 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_8, /*hidden argument*/NULL);
		bool L_10;
		L_10 = SavWav_Save_mF79C42FE3B2D3445F35CA3E0D232777F7422803E(L_7, L_9, /*hidden argument*/NULL);
		// byte[] byteData = getByteFromAudioClip(audioSource.clip);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_11 = __this->get_audioSource_9();
		NullCheck(L_11);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_12;
		L_12 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = SpeechToText_getByteFromAudioClip_m0CCA804886E1DA20AEC88AF664558756FBC3ADC0(__this, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// StartCoroutine(PostVoice(url, byteData));
		String_t* L_14 = __this->get_url_8();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15 = V_0;
		RuntimeObject* L_16;
		L_16 = SpeechToText_PostVoice_m2A7B54DC7A3D653F6EDBF8FCBCAF810494C2B585(__this, L_14, L_15, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
	}

IL_0087:
	{
		// return;
		return;
	}
}
// System.Byte[] SpeechToText::getByteFromAudioClip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SpeechToText_getByteFromAudioClip_m0CCA804886E1DA20AEC88AF664558756FBC3ADC0 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	uint16_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// MemoryStream stream = new MemoryStream();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// ushort bitDepth = 16;
		V_1 = (uint16_t)((int32_t)16);
		// int fileSize = audioClip.samples * BlockSize_16Bit + headerSize;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_1 = ___audioClip0;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_1, /*hidden argument*/NULL);
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_2, (int32_t)2)), (int32_t)((int32_t)44)));
		// WriteFileHeader(ref stream, fileSize);
		int32_t L_3 = V_2;
		int32_t L_4;
		L_4 = SpeechToText_WriteFileHeader_mAFD56A1A012FAC6CAEFF18AB6BF3378A5A80FCC5((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)(&V_0), L_3, /*hidden argument*/NULL);
		// WriteFileFormat(ref stream, audioClip.channels, audioClip.frequency, bitDepth);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = ___audioClip0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_5, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = ___audioClip0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = AudioClip_get_frequency_m5346F253EE3761A2535B20E0E27B6AB0B875BFCD(L_7, /*hidden argument*/NULL);
		uint16_t L_9 = V_1;
		int32_t L_10;
		L_10 = SpeechToText_WriteFileFormat_mA60D93A501CF3A138EEAF4C5094747AF42DDEFC8((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)(&V_0), L_6, L_8, L_9, /*hidden argument*/NULL);
		// WriteFileData(ref stream, audioClip, bitDepth);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_11 = ___audioClip0;
		uint16_t L_12 = V_1;
		int32_t L_13;
		L_13 = SpeechToText_WriteFileData_mE704807E7DDD1A0F20F844A9298452B7E6F68E53((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)(&V_0), L_11, L_12, /*hidden argument*/NULL);
		// byte[] bytes = stream.ToArray();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_14 = V_0;
		NullCheck(L_14);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_15;
		L_15 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_14);
		// return bytes;
		return L_15;
	}
}
// System.Collections.IEnumerator SpeechToText::PostVoice(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SpeechToText_PostVoice_m2A7B54DC7A3D653F6EDBF8FCBCAF810494C2B585 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, String_t* ___url0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * L_0 = (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 *)il2cpp_codegen_object_new(U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53_il2cpp_TypeInfo_var);
		U3CPostVoiceU3Ed__18__ctor_mF2D913A321F632741190063755875C700DDA615D(L_0, 0, /*hidden argument*/NULL);
		U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_4(__this);
		U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * L_2 = L_1;
		String_t* L_3 = ___url0;
		NullCheck(L_2);
		L_2->set_url_2(L_3);
		U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * L_4 = L_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = ___data1;
		NullCheck(L_4);
		L_4->set_data_3(L_5);
		return L_4;
	}
}
// System.Void SpeechToText::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_OnPointerDown_mF3421A0690AD98A345A5DF35DDE2660DD966165B (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// startRecording();
		SpeechToText_startRecording_mA1B9992D844DDD5A7B48A13154680649A013F41D(__this, /*hidden argument*/NULL);
		// ChangeBtn();
		SpeechToText_ChangeBtn_m8EA2D523F2CF4DD7590DE1E74E88E40DFACE7595(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpeechToText::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_OnPointerUp_m777B3C4F556BBA548FD0533356F574CA382B138F (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// stopRecording();
		SpeechToText_stopRecording_m596BF800BBDE228F46E507B22352A44D65342D0E(__this, /*hidden argument*/NULL);
		// ChangeBtn();
		SpeechToText_ChangeBtn_m8EA2D523F2CF4DD7590DE1E74E88E40DFACE7595(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void SpeechToText::ChangeBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText_ChangeBtn_m8EA2D523F2CF4DD7590DE1E74E88E40DFACE7595 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method)
{
	{
		// if (isSelect)
		bool L_0 = __this->get_isSelect_16();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// isSelect = false;
		__this->set_isSelect_16((bool)0);
		// btn.sprite = unSelect_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_btn_13();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_unSelect_btn_15();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0021:
	{
		// isSelect = true;
		__this->set_isSelect_16((bool)1);
		// btn.sprite = select_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_btn_13();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_select_btn_14();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Int32 SpeechToText::WriteFileHeader(System.IO.MemoryStream&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileHeader_mAFD56A1A012FAC6CAEFF18AB6BF3378A5A80FCC5 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, int32_t ___fileSize1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAE6299F91DAA0F344C6731281B03FB38284D0CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF95955C96CDED0175A4CF665EDCBB2C1D3B06D02);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	{
		// int count = 0;
		// byte[] riff = Encoding.ASCII.GetBytes("RIFF");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteral54E6A56386072FAEC10025F380D0CC554BAC0758);
		V_0 = L_1;
		// count += WriteBytesToMemoryStream(ref stream, riff, "ID");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_2 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4;
		L_4 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_2, L_3, _stringLiteralF68BE93499EBDA525EAB969E88B05907332F6184, /*hidden argument*/NULL);
		// int chunkSize = fileSize - 8; // total size - 8 for the other two fields in the header
		int32_t L_5 = ___fileSize1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)8));
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(chunkSize), "CHUNK_SIZE");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_6 = ___stream0;
		int32_t L_7 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_7, /*hidden argument*/NULL);
		int32_t L_9;
		L_9 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_6, L_8, _stringLiteralF95955C96CDED0175A4CF665EDCBB2C1D3B06D02, /*hidden argument*/NULL);
		// byte[] wave = Encoding.ASCII.GetBytes("WAVE");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralA77FDC67CD3D8A6113B858540BA409191CDF979E);
		V_2 = L_11;
		// count += WriteBytesToMemoryStream(ref stream, wave, "FORMAT");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_12 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		int32_t L_14;
		L_14 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_12, L_13, _stringLiteralAE6299F91DAA0F344C6731281B03FB38284D0CB9, /*hidden argument*/NULL);
		// return count;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)0, (int32_t)L_4)), (int32_t)L_9)), (int32_t)L_14));
	}
}
// System.Int32 SpeechToText::WriteFileFormat(System.IO.MemoryStream&,System.Int32,System.Int32,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileFormat_mA60D93A501CF3A138EEAF4C5094747AF42DDEFC8 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, int32_t ___channels1, int32_t ___sampleRate2, uint16_t ___bitDepth3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26DFE14E81017C0E883BE43958464A83E09712A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C2899BB324D437620510CDBE48DE06B1EF2EDCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47E421A0253A9E8A570881FBD0627CEED6A90807);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral87800B4A75DD8B0011C948E92D83F2E86C6B5712);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral889681BC3A80E56134690DF875A3FBA61B5B466C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE72244112E26CC7393078017740C57633BD6F11F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE950F75E81DA790C3F01E7A14E1540C1F060DED9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF8C9656D321F0A83C958BE5A3C99AFAA5D55B500);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	int32_t V_1 = 0;
	uint16_t V_2 = 0;
	uint16_t V_3 = 0;
	int32_t V_4 = 0;
	uint16_t V_5 = 0;
	{
		// int count = 0;
		// byte[] id = Encoding.ASCII.GetBytes("fmt ");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_0;
		L_0 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1;
		L_1 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_0, _stringLiteralB6894A493D9B16556A8AF2157FE4DFA1C4747B3F);
		V_0 = L_1;
		// count += WriteBytesToMemoryStream(ref stream, id, "FMT_ID");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_2 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = V_0;
		int32_t L_4;
		L_4 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_2, L_3, _stringLiteral26DFE14E81017C0E883BE43958464A83E09712A5, /*hidden argument*/NULL);
		// int subchunk1Size = 16; // 24 - 8
		V_1 = ((int32_t)16);
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(subchunk1Size), "SUBCHUNK_SIZE");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_5 = ___stream0;
		int32_t L_6 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7;
		L_7 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_6, /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_5, L_7, _stringLiteralE72244112E26CC7393078017740C57633BD6F11F, /*hidden argument*/NULL);
		// UInt16 audioFormat = 1;
		V_2 = (uint16_t)1;
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(audioFormat), "AUDIO_FORMAT");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_9 = ___stream0;
		uint16_t L_10 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_10, /*hidden argument*/NULL);
		int32_t L_12;
		L_12 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_9, L_11, _stringLiteral2C2899BB324D437620510CDBE48DE06B1EF2EDCE, /*hidden argument*/NULL);
		// UInt16 numChannels = Convert.ToUInt16(channels);
		int32_t L_13 = ___channels1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint16_t L_14;
		L_14 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(numChannels), "CHANNELS");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_15 = ___stream0;
		uint16_t L_16 = V_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_17;
		L_17 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_16, /*hidden argument*/NULL);
		int32_t L_18;
		L_18 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_15, L_17, _stringLiteralF8C9656D321F0A83C958BE5A3C99AFAA5D55B500, /*hidden argument*/NULL);
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(sampleRate), "SAMPLE_RATE");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_19 = ___stream0;
		int32_t L_20 = ___sampleRate2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_21;
		L_21 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_20, /*hidden argument*/NULL);
		int32_t L_22;
		L_22 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_19, L_21, _stringLiteralE950F75E81DA790C3F01E7A14E1540C1F060DED9, /*hidden argument*/NULL);
		// int byteRate = sampleRate * channels * BytesPerSample(bitDepth);
		int32_t L_23 = ___sampleRate2;
		int32_t L_24 = ___channels1;
		uint16_t L_25 = ___bitDepth3;
		int32_t L_26;
		L_26 = SpeechToText_BytesPerSample_mFD4086FDA5592479C7E7E311998136687E92F611(L_25, /*hidden argument*/NULL);
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_23, (int32_t)L_24)), (int32_t)L_26));
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(byteRate), "BYTE_RATE");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_27 = ___stream0;
		int32_t L_28 = V_4;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_29;
		L_29 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_28, /*hidden argument*/NULL);
		int32_t L_30;
		L_30 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_27, L_29, _stringLiteral87800B4A75DD8B0011C948E92D83F2E86C6B5712, /*hidden argument*/NULL);
		// UInt16 blockAlign = Convert.ToUInt16(channels * BytesPerSample(bitDepth));
		int32_t L_31 = ___channels1;
		uint16_t L_32 = ___bitDepth3;
		int32_t L_33;
		L_33 = SpeechToText_BytesPerSample_mFD4086FDA5592479C7E7E311998136687E92F611(L_32, /*hidden argument*/NULL);
		uint16_t L_34;
		L_34 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(((int32_t)il2cpp_codegen_multiply((int32_t)L_31, (int32_t)L_33)), /*hidden argument*/NULL);
		V_5 = L_34;
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(blockAlign), "BLOCK_ALIGN");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_35 = ___stream0;
		uint16_t L_36 = V_5;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_37;
		L_37 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_36, /*hidden argument*/NULL);
		int32_t L_38;
		L_38 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_35, L_37, _stringLiteral889681BC3A80E56134690DF875A3FBA61B5B466C, /*hidden argument*/NULL);
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(bitDepth), "BITS_PER_SAMPLE");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_39 = ___stream0;
		uint16_t L_40 = ___bitDepth3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_41;
		L_41 = BitConverter_GetBytes_m3C97C148BCA617D42430B74AB3B71E6F64E8F296(L_40, /*hidden argument*/NULL);
		int32_t L_42;
		L_42 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_39, L_41, _stringLiteral47E421A0253A9E8A570881FBD0627CEED6A90807, /*hidden argument*/NULL);
		// return count;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)0, (int32_t)L_4)), (int32_t)L_8)), (int32_t)L_12)), (int32_t)L_18)), (int32_t)L_22)), (int32_t)L_30)), (int32_t)L_38)), (int32_t)L_42));
	}
}
// System.Int32 SpeechToText::WriteFileData(System.IO.MemoryStream&,UnityEngine.AudioClip,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteFileData_mE704807E7DDD1A0F20F844A9298452B7E6F68E53 (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___audioClip1, uint16_t ___bitDepth2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6D616BAD371FCA22A131D77150DEC154C6148FC5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74E683ADA46BDA77A1E883EBC3A79680A634A85F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EF5D2B8C633B9B737BB9761C5B6D414E2F47DDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		s_Il2CppMethodInitialized = true;
	}
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_0 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_1 = NULL;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_2 = NULL;
	int32_t V_3 = 0;
	{
		// int count = 0;
		// float[] data = new float[audioClip.samples * audioClip.channels];
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_0 = ___audioClip1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_0, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_2 = ___audioClip1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = AudioClip_get_channels_m7592B378317BFA41DF2228636124E4DD5B86D3B8(L_2, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_1, (int32_t)L_3)));
		V_0 = L_4;
		// audioClip.GetData(data, 0);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5 = ___audioClip1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = V_0;
		NullCheck(L_5);
		bool L_7;
		L_7 = AudioClip_GetData_m2D7410645789EBED93CAA8146D271C79156E2CB0(L_5, L_6, 0, /*hidden argument*/NULL);
		// byte[] bytes = ConvertAudioClipDataToInt16ByteArray(data);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = SpeechToText_ConvertAudioClipDataToInt16ByteArray_m385F1EC326108E128AE0F1410D5659057FD04628(L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// byte[] id = Encoding.ASCII.GetBytes("data");
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_10;
		L_10 = Encoding_get_ASCII_mD3E8370997347A3F6822BDA50BC0A1DBC0059173(/*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11;
		L_11 = VirtFuncInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, String_t* >::Invoke(16 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_10, _stringLiteralA44A39671D4B7FA8FBE50D795EAB52248D5C5469);
		V_2 = L_11;
		// count += WriteBytesToMemoryStream(ref stream, id, "DATA_ID");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_12 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = V_2;
		int32_t L_14;
		L_14 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_12, L_13, _stringLiteral74E683ADA46BDA77A1E883EBC3A79680A634A85F, /*hidden argument*/NULL);
		// int subchunk2Size = Convert.ToInt32(audioClip.samples * BlockSize_16Bit); // BlockSize (bitDepth)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_15 = ___audioClip1;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = AudioClip_get_samples_m741BFBA562FBFDBE67AFE98A38B1B4A871D2D567(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_17;
		L_17 = Convert_ToInt32_mCA113BB7A4ED0108883DCECAEF16A0F8FB3E5EDF(((int32_t)il2cpp_codegen_multiply((int32_t)L_16, (int32_t)2)), /*hidden argument*/NULL);
		V_3 = L_17;
		// count += WriteBytesToMemoryStream(ref stream, BitConverter.GetBytes(subchunk2Size), "SAMPLES");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_18 = ___stream0;
		int32_t L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20;
		L_20 = BitConverter_GetBytes_m5C926FE938C878F7E4E95A5DED46C34DB1431D39(L_19, /*hidden argument*/NULL);
		int32_t L_21;
		L_21 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_18, L_20, _stringLiteral6D616BAD371FCA22A131D77150DEC154C6148FC5, /*hidden argument*/NULL);
		// count += WriteBytesToMemoryStream(ref stream, bytes, "DATA");
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_22 = ___stream0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23 = V_1;
		int32_t L_24;
		L_24 = SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_22, L_23, _stringLiteral7EF5D2B8C633B9B737BB9761C5B6D414E2F47DDE, /*hidden argument*/NULL);
		// return count;
		return ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)0, (int32_t)L_14)), (int32_t)L_21)), (int32_t)L_24));
	}
}
// System.Byte[] SpeechToText::ConvertAudioClipDataToInt16ByteArray(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* SpeechToText_ConvertAudioClipDataToInt16ByteArray_m385F1EC326108E128AE0F1410D5659057FD04628 (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * V_0 = NULL;
	int32_t V_1 = 0;
	int16_t V_2 = 0;
	int32_t V_3 = 0;
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_4 = NULL;
	{
		// MemoryStream dataStream = new MemoryStream();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_0 = (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C *)il2cpp_codegen_object_new(MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C_il2cpp_TypeInfo_var);
		MemoryStream__ctor_mD27B3DF2400D46A4A81EE78B0BD2C29EFCFAA44F(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// int x = sizeof(Int16);
		V_1 = 2;
		// Int16 maxValue = Int16.MaxValue;
		V_2 = (int16_t)((int32_t)32767);
		// int i = 0;
		V_3 = 0;
		goto IL_002e;
	}

IL_0012:
	{
		// dataStream.Write(BitConverter.GetBytes(Convert.ToInt16(data[i] * maxValue)), 0, x);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_1 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___data0;
		int32_t L_3 = V_3;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		float L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int16_t L_6 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int16_t L_7;
		L_7 = Convert_ToInt16_m85F48A07C1F028876CBF5ACAE49D88F003985438(((float)il2cpp_codegen_multiply((float)L_5, (float)((float)((float)L_6)))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BitConverter_t8DCBA24B909F1B221372AF2B37C76DCF614BA654_il2cpp_TypeInfo_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8;
		L_8 = BitConverter_GetBytes_m4178DFE7B47F12FAF452AA4742B16FC3BA9618A8(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_1;
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_8, 0, L_9);
		// ++i;
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002e:
	{
		// while (i < data.Length)
		int32_t L_11 = V_3;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12 = ___data0;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))))
		{
			goto IL_0012;
		}
	}
	{
		// byte[] bytes = dataStream.ToArray();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_14;
		L_14 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(33 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_13);
		V_4 = L_14;
		// dataStream.Dispose();
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_15 = V_0;
		NullCheck(L_15);
		Stream_Dispose_m117324084DDAD414761AD29FB17A419840BA6EA0(L_15, /*hidden argument*/NULL);
		// return bytes;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16 = V_4;
		return L_16;
	}
}
// System.Int32 SpeechToText::WriteBytesToMemoryStream(System.IO.MemoryStream&,System.Byte[],System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_WriteBytesToMemoryStream_m7532F9FB65277911BE151BB2CC5CB5BA8C7DD38F (MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** ___stream0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes1, String_t* ___tag2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// int count = bytes.Length;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes1;
		NullCheck(L_0);
		V_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
		// stream.Write(bytes, 0, count);
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C ** L_1 = ___stream0;
		MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C * L_2 = *((MemoryStream_t0B450399DD6D0175074FED99DD321D65771C9E1C **)L_1);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___bytes1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_2, L_3, 0, L_4);
		// return count;
		int32_t L_5 = V_0;
		return L_5;
	}
}
// System.Int32 SpeechToText::BytesPerSample(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpeechToText_BytesPerSample_mFD4086FDA5592479C7E7E311998136687E92F611 (uint16_t ___bitDepth0, const RuntimeMethod* method)
{
	{
		// return bitDepth / 8;
		uint16_t L_0 = ___bitDepth0;
		return ((int32_t)((int32_t)L_0/(int32_t)8));
	}
}
// System.Void SpeechToText::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpeechToText__ctor_m60721EA1403687D358F3A7E49A69C93A638AB763 (SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0DD70FB06DBE96877F1F8536FAF73A328B01B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _recordingLengthSec = 3;
		__this->set__recordingLengthSec_5(3);
		// private int _recordingHZ = 22050;
		__this->set__recordingHZ_6(((int32_t)22050));
		// string url = "https://naveropenapi.apigw.ntruss.com/recog/v1/stt?lang=Kor";
		__this->set_url_8(_stringLiteralDE0DD70FB06DBE96877F1F8536FAF73A328B01B6);
		// public bool isSelect = true;
		__this->set_isSelect_16((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Stage1CompleteController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1CompleteController_Start_m9529BB9908E704923F6A2D2C88BD27046D4F9E56 (Stage1CompleteController_tDA18BF894D5F7CA564FF2CB0EE9FD9222A0929A8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Stage1", "complete");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Stage1CompleteController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage1CompleteController__ctor_m6ED96C624D7EAD0D5090C4488C823991DADB7F73 (Stage1CompleteController_tDA18BF894D5F7CA564FF2CB0EE9FD9222A0929A8 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Stage2CompleteController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2CompleteController_Start_m26FADA8552FE4E7C89D3C471C8553740C36E4940 (Stage2CompleteController_t95798291AFBAAEAD702979319BF0ACC677F15BAF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("Stage2", "complete");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Stage2CompleteController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage2CompleteController__ctor_m0C36AA805938915EA9B94B57F59FF3F0CFED7639 (Stage2CompleteController_t95798291AFBAAEAD702979319BF0ACC677F15BAF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Stage3CompleteController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3CompleteController_Start_mF94568A6CA158792315F00C40190415FAFBD22A8 (Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral133E4D655F9709B6AA1093F2C738B5F6BD912810);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6E2A1E95ACBBAF462C545B0AFA27E60608939044);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1914BF22FEC7A97A71BAEF5492B71BDD9979776);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// PlayerPrefs.SetString("Stage3", "complete");
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		// string word = PlayerPrefs.GetString("Word");
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral78FDE75CC51155B24738BAB1580CA89ECA80730B, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (word.Equals("병아리"))
		String_t* L_1 = V_0;
		NullCheck(L_1);
		bool L_2;
		L_2 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_1, _stringLiteralC1914BF22FEC7A97A71BAEF5492B71BDD9979776, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		// this.image.sprite = this.sprite1;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_image_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_sprite1_5();
		NullCheck(L_3);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0039:
	{
		// else if (word.Equals("오리"))
		String_t* L_5 = V_0;
		NullCheck(L_5);
		bool L_6;
		L_6 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_5, _stringLiteral6E2A1E95ACBBAF462C545B0AFA27E60608939044, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// this.image.sprite = this.sprite2;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_7 = __this->get_image_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = __this->get_sprite2_6();
		NullCheck(L_7);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_7, L_8, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0058:
	{
		// else if (word.Equals("삐악삐악"))
		String_t* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_9, _stringLiteral133E4D655F9709B6AA1093F2C738B5F6BD912810, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		// this.image.sprite = this.sprite3;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_11 = __this->get_image_4();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_12 = __this->get_sprite3_7();
		NullCheck(L_11);
		SpriteRenderer_set_sprite_mBCFFBF3F10C068FD1174C4506DF73E204303FC1A(L_11, L_12, /*hidden argument*/NULL);
	}

IL_0076:
	{
		// }
		return;
	}
}
// System.Void Stage3CompleteController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stage3CompleteController__ctor_mC820F9B749A18211930952F49868034FD9E5CCB1 (Stage3CompleteController_t3A79E9D72B5E0D9A1A02493AA614E043E97ED21A * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void StageBtnChange::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageBtnChange_Start_m0325394D3B42BD187C6F9470CB872CA94CECE2AE (StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		// string stage1 = PlayerPrefs.GetString("Stage1");        //단계 완료시 complete, 미완료시 incomplete
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral8D4041E16926EB8CD78A1D7F27D9C3C82C472B58, /*hidden argument*/NULL);
		// string stage2 = PlayerPrefs.GetString("Stage2");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9FD3BE4AEC36C31704382524C47E56A3996CB4A9, /*hidden argument*/NULL);
		V_0 = L_1;
		// string stage3 = PlayerPrefs.GetString("Stage3");
		String_t* L_2;
		L_2 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralA500D3A0421A724D538F18759BA16ACC8B5F3C1B, /*hidden argument*/NULL);
		V_1 = L_2;
		// string level = PlayerPrefs.GetString("level");          //씨앗 단계는 seed, 새싹 단계는 spout
		String_t* L_3;
		L_3 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, /*hidden argument*/NULL);
		V_2 = L_3;
		// if (stage1.Equals("complete"))
		NullCheck(L_0);
		bool L_4;
		L_4 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_0, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0069;
		}
	}
	{
		// scrollbar.value = 0.5f;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_5 = __this->get_scrollbar_4();
		NullCheck(L_5);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_5, (0.5f), /*hidden argument*/NULL);
		// this.btn2.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_btn2_6();
		NullCheck(L_6);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_6, (bool)1, /*hidden argument*/NULL);
		// this.btn1.GetComponent<Image>().sprite = this.img1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = __this->get_btn1_5();
		NullCheck(L_7);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8;
		L_8 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_7, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_9 = __this->get_img1_8();
		NullCheck(L_8);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0069:
	{
		// if (stage2.Equals("complete"))
		String_t* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a8;
		}
	}
	{
		// scrollbar.value = 1.0f;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_12 = __this->get_scrollbar_4();
		NullCheck(L_12);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_12, (1.0f), /*hidden argument*/NULL);
		// this.btn3.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = __this->get_btn3_7();
		NullCheck(L_13);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_13, (bool)1, /*hidden argument*/NULL);
		// this.btn2.GetComponent<Image>().sprite = this.img2;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_14 = __this->get_btn2_6();
		NullCheck(L_14);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_15;
		L_15 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_14, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_16 = __this->get_img2_9();
		NullCheck(L_15);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_15, L_16, /*hidden argument*/NULL);
	}

IL_00a8:
	{
		// if (stage3.Equals("complete"))
		String_t* L_17 = V_1;
		NullCheck(L_17);
		bool L_18;
		L_18 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_17, _stringLiteralFCA001B0ACD7E9D57F0E0B7CB87A4B810138F72E, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00e7;
		}
	}
	{
		// scrollbar.value = 1.0f;
		Scrollbar_tECAC7FD315210FC856A3EC60AE1847A66AAF6C28 * L_19 = __this->get_scrollbar_4();
		NullCheck(L_19);
		Scrollbar_set_value_mEDFFDDF8153EA01B897198648DCFB1D1EA539197(L_19, (1.0f), /*hidden argument*/NULL);
		// this.btn3.interactable = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20 = __this->get_btn3_7();
		NullCheck(L_20);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_20, (bool)1, /*hidden argument*/NULL);
		// this.btn3.GetComponent<Image>().sprite = this.img3;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_21 = __this->get_btn3_7();
		NullCheck(L_21);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_22;
		L_22 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB(L_21, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16EE05A2EC191674136625164C3D3B0162E2FBBB_RuntimeMethod_var);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_23 = __this->get_img3_10();
		NullCheck(L_22);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_22, L_23, /*hidden argument*/NULL);
	}

IL_00e7:
	{
		// Debug.Log(level);
		String_t* L_24 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void StageBtnChange::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageBtnChange_Update_m070DC3DEFBA0851490A2607BB598C0EF1FAAC6E6 (StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void StageBtnChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StageBtnChange__ctor_m9C6CE21460275749BE064BF8BAAB96DCFD3B84B4 (StageBtnChange_tC28F565E5ECB1E739B3477081ECA2505531DD566 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TrainController::OnMouseDrag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainController_OnMouseDrag_m931E5A8006EF4E78908689ED9394421B29D226C8 (TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598 * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 mousePosition = new Vector3(Input.mousePosition.x, Input.mousePosition.y, 10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_0), L_1, L_3, (10.0f), /*hidden argument*/NULL);
		// this.transform.position = Camera.main.ScreenToWorldPoint(mousePosition);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_5;
		L_5 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = V_0;
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_5, L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_4, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrainController::OnMouseUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainController_OnMouseUp_m142E102FC6E12580BFB2214F88A4A073D63D5685 (TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6283870D9F21EFD35B495616BF397B01FA65367);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (triggerActive && correct)
		bool L_0 = __this->get_triggerActive_8();
		if (!L_0)
		{
			goto IL_0025;
		}
	}
	{
		bool L_1 = __this->get_correct_4();
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// Debug.Log("정답이애옹");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralD6283870D9F21EFD35B495616BF397B01FA65367, /*hidden argument*/NULL);
		// SceneManager.LoadScene(sceneName);
		String_t* L_2 = __this->get_sceneName_7();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_2, /*hidden argument*/NULL);
	}

IL_0025:
	{
		// this.transform.position = new Vector3(positionX, positionY, 0.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		float L_4 = __this->get_positionX_5();
		float L_5 = __this->get_positionY_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), L_4, L_5, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrainController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainController_OnTriggerEnter2D_m794FE5308AB7080FD3FCF3F227B1018E797C5D97 (TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	{
		// triggerActive = true;
		__this->set_triggerActive_8((bool)1);
		// }
		return;
	}
}
// System.Void TrainController::OnTriggerExit2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainController_OnTriggerExit2D_m82D1FC219ADD9141BC2D13E9D4CE39E77B4CC1D4 (TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	{
		// triggerActive = false;
		__this->set_triggerActive_8((bool)0);
		// }
		return;
	}
}
// System.Void TrainController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrainController__ctor_m84245422C389D7DE23C4BD56520A9C762E23E7D3 (TrainController_t77CD74ECC9461A97D5FF0C973F9F9D505CE06598 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TutorialController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialController_Start_m1582A4F31346FC711A332CD48736F51D77A21497 (TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C * __this, const RuntimeMethod* method)
{
	{
		// if (!playOnAwake)
		bool L_0 = __this->get_playOnAwake_6();
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// videoCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_videoCanvas_5();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// active = false;
		__this->set_active_7((bool)0);
	}

IL_001b:
	{
		// }
		return;
	}
}
// System.Void TutorialController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialController_Update_mFEBBD7D14B33977B65F4C56AAA97E0D9AA96E2FD (TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C * __this, const RuntimeMethod* method)
{
	{
		// if(video.isPaused && active)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_video_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = VideoPlayer_get_isPaused_mD2983280A0974DA8B8278A62E4DF44EF4ED7F372(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		bool L_2 = __this->get_active_7();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// videoCanvas.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_videoCanvas_5();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// active = false;
		__this->set_active_7((bool)0);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void TutorialController::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialController_PlayVideo_m7833FD699D8E8C028B6A240C6B558CCB565E3D56 (TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C * __this, const RuntimeMethod* method)
{
	{
		// videoCanvas.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_videoCanvas_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// video.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_1 = __this->get_video_4();
		NullCheck(L_1);
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_1, /*hidden argument*/NULL);
		// active = true;
		__this->set_active_7((bool)1);
		// }
		return;
	}
}
// System.Void TutorialController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TutorialController__ctor_m273AD4BF18E220B078775D1290EB6B46FD7D2ECD (TutorialController_t8593BA21DECCD5F35FC89333541E9BC4E8CCF77C * __this, const RuntimeMethod* method)
{
	{
		// bool active = true;
		__this->set_active_7((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UI_SceneChange::RestartScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SceneChange_RestartScene_m5E7303F323CC80FC2E85C96B25B69A451D187C50 (UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// SceneManager.LoadScene(SceneManager.GetActiveScene().name);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_0), /*hidden argument*/NULL);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_SceneChange::MoveParamScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SceneChange_MoveParamScene_mAA193B162A8E94E6FD2293160C7968ACBE3E2F59 (UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(sceneName);
		String_t* L_0 = __this->get_sceneName_4();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UI_SceneChange::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UI_SceneChange__ctor_m59058F2843D17FBF99EC20B92001DD4F0D827993 (UI_SceneChange_t1F5CEF8CFAD756BB99C2E7A04CFC52FD148D96FB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void VideoHandler::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoHandler_Start_m1F75C356859B1DA5C2DC7D5277A746FB68DF3E9F (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mScreen != null && mVideoPlayer != null)
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_0 = __this->get_mScreen_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_mVideoPlayer_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// StartCoroutine(PrepareVideo());
		RuntimeObject* L_4;
		L_4 = VideoHandler_PrepareVideo_m400C2D958F12C136BF4BDB1B89AD4AE001E41CF3(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_5;
		L_5 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_4, /*hidden argument*/NULL);
	}

IL_0029:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator VideoHandler::PrepareVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VideoHandler_PrepareVideo_m400C2D958F12C136BF4BDB1B89AD4AE001E41CF3 (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * L_0 = (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 *)il2cpp_codegen_object_new(U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0_il2cpp_TypeInfo_var);
		U3CPrepareVideoU3Ed__3__ctor_m29EE86F4ED3E2B6279CD4E1E4B846BD96A3D7CA2(L_0, 0, /*hidden argument*/NULL);
		U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void VideoHandler::PlayVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoHandler_PlayVideo_mD34FBFBA4451F356AF683BC6E5E3DEC2C961D336 (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mVideoPlayer != null && mVideoPlayer.isPrepared)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_mVideoPlayer_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_mVideoPlayer_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// mVideoPlayer.Play();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_mVideoPlayer_5();
		NullCheck(L_4);
		VideoPlayer_Play_m2AD0D39D70055A5AADCF63430D3D9CEC7DCB0516(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void VideoHandler::StopVideo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoHandler_StopVideo_m37038F01BE7939A30CB7E76687D22A834FCD0D39 (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mVideoPlayer != null && mVideoPlayer.isPrepared)
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_0 = __this->get_mVideoPlayer_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_2 = __this->get_mVideoPlayer_5();
		NullCheck(L_2);
		bool L_3;
		L_3 = VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0026;
		}
	}
	{
		// mVideoPlayer.Stop();
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_4 = __this->get_mVideoPlayer_5();
		NullCheck(L_4);
		VideoPlayer_Stop_mC65F299C170F41E6823207427F782982031DE293(L_4, /*hidden argument*/NULL);
	}

IL_0026:
	{
		// }
		return;
	}
}
// System.Void VideoHandler::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VideoHandler__ctor_m07BA078B57C6CE33BC7C073121F94902486212CB (VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ViewCard::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewCard_Start_mD28DDBFE4294ACD2A1A5B21E1346E252EAA7197B (ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ViewCard::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewCard_Update_mD48A6AB0AFAB7B3BFE95D7249C1E2222AFFB0122 (ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33E81761641345813DD169AAE875C47F354B87B9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral911BBAF6EE2E8B8539792FBDB85037632AAFF286);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF31EF0A3102B972AB34E9DD1727BD61576897EE2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m466D81FDCC87C9CB07557B39DCB435EB691F1EF3(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		// this.startPos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		L_2 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_1, /*hidden argument*/NULL);
		__this->set_startPos_4(L_2);
		// } else if (Input.GetMouseButtonUp(0))
		return;
	}

IL_0019:
	{
		// } else if (Input.GetMouseButtonUp(0))
		bool L_3;
		L_3 = Input_GetMouseButtonUp_m2BA562F8C4FE8364EEC93970093E776371DF4022(0, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_007d;
		}
	}
	{
		// Vector2 endPos = Input.mousePosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Input_get_mousePosition_m79528BC2F30C57054641F709C855130AE586AC0E(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_4, /*hidden argument*/NULL);
		// float swipeLength = endPos.x - this.startPos.x;
		float L_6 = L_5.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_7 = __this->get_address_of_startPos_4();
		float L_8 = L_7->get_x_0();
		// if (swipeLength < -350)
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_6, (float)L_8))) < ((float)(-350.0f)))))
		{
			goto IL_007d;
		}
	}
	{
		// string dictionaryBook = PlayerPrefs.GetString("dictionary");
		String_t* L_9;
		L_9 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteralC0E02A0440A6BB4475B7E59901C37A6A25E773C8, /*hidden argument*/NULL);
		V_0 = L_9;
		// if (dictionaryBook.Equals("chicken"))
		String_t* L_10 = V_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_10, _stringLiteral139AF5D01C2FAD2B20F373AD5A80937B0B0B9FF3, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0066;
		}
	}
	{
		// SceneManager.LoadScene("10.2_NiceChicken");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral911BBAF6EE2E8B8539792FBDB85037632AAFF286, /*hidden argument*/NULL);
		// } else if (dictionaryBook.Equals("cookcook")){
		return;
	}

IL_0066:
	{
		// } else if (dictionaryBook.Equals("cookcook")){
		String_t* L_12 = V_0;
		NullCheck(L_12);
		bool L_13;
		L_13 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_12, _stringLiteral33E81761641345813DD169AAE875C47F354B87B9, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_007d;
		}
	}
	{
		// SceneManager.LoadScene("10.3_CookCookABC");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralF31EF0A3102B972AB34E9DD1727BD61576897EE2, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void ViewCard::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViewCard__ctor_m3B26FC4F0CA177B23E104607932C15A6731C8089 (ViewCard_t691CE49DC3541979D67608C642FB41E41C976D01 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WebCam::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCam_Start_m32D15007C3B8F2CBF31B3CE9EE9F9B7BBB56F022 (WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (camTexture != null)
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_0 = __this->get_camTexture_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		// display.texture = null;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_2 = __this->get_display_4();
		NullCheck(L_2);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_2, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL, /*hidden argument*/NULL);
		// camTexture.Stop();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_3 = __this->get_camTexture_5();
		NullCheck(L_3);
		WebCamTexture_Stop_m55FF77D033EF17D83A6B717418EBA39F174B5708(L_3, /*hidden argument*/NULL);
		// camTexture = null;
		__this->set_camTexture_5((WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)NULL);
	}

IL_002c:
	{
		// WebCamDevice device = WebCamTexture.devices[currentIndex];
		WebCamDeviceU5BU5D_t5509CE66483F44F4D0DB82BF41F86C649CB7B70E* L_4;
		L_4 = WebCamTexture_get_devices_m5E211AF8615AED8AAF97A669F41845FC85A0CD7C(/*hidden argument*/NULL);
		int32_t L_5 = __this->get_currentIndex_6();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C  L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_0 = L_7;
		// camTexture = new WebCamTexture(device.name);
		String_t* L_8;
		L_8 = WebCamDevice_get_name_mD475CBF038076E5657D55D4DA43A7DC69CE6B6D4((WebCamDevice_t84AC34018729892FB910F4F146AB9820DD006A2C *)(&V_0), /*hidden argument*/NULL);
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_9 = (WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 *)il2cpp_codegen_object_new(WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62_il2cpp_TypeInfo_var);
		WebCamTexture__ctor_m6111EBCE92DE22B7A72D134F6BB5BB787238242E(L_9, L_8, /*hidden argument*/NULL);
		__this->set_camTexture_5(L_9);
		// display.texture = camTexture;
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_10 = __this->get_display_4();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_11 = __this->get_camTexture_5();
		NullCheck(L_10);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_10, L_11, /*hidden argument*/NULL);
		// camTexture.Play();
		WebCamTexture_t8E1DA1358E0E093A75FF35A336DD81B9EEC7AA62 * L_12 = __this->get_camTexture_5();
		NullCheck(L_12);
		WebCamTexture_Play_m8527994B54606AE71602DB93195D2BA44CEDC2B1(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WebCam::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebCam__ctor_m7E774F3A850C40B2BD0690F7813EF9B1B080D082 (WebCam_t2042586C5E91F45A8AB1A591D72C71F1BEC3B5CF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void stt::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_Start_mCF2FCD6C7BF19DE9412C44DEBBA9F8F1AAD50469 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	{
		// _microphoneID = Microphone.devices[0];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0;
		L_0 = Microphone_get_devices_m550C09D23C4FF50A6F3E1A2198D741436CCB584A(/*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = 0;
		String_t* L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		__this->set__microphoneID_4(L_2);
		// }
		return;
	}
}
// System.Void stt::startRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_startRecording_mB101D12B901BCBD94A852BA2CF91BC879A331BB8 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF34550EE1F0479AABE0E68A88AD01EA39EB14FAD);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// fileCheck = @"/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/" + filename + ".wav";
		String_t* L_0 = __this->get_filename_11();
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4, L_0, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		__this->set_fileCheck_9(L_1);
		// if (File.Exists(fileCheck))
		String_t* L_2 = __this->get_fileCheck_9();
		bool L_3;
		L_3 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0048;
		}
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		// File.Delete(fileCheck);
		String_t* L_4 = __this->get_fileCheck_9();
		File_Delete_m82FE53535A3911380F7E4C8AD44D77FAB330FD77(L_4, /*hidden argument*/NULL);
		// }
		goto IL_0048;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{ // begin catch(System.Exception)
		// catch (Exception e)
		V_0 = ((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *));
		// Console.WriteLine("The deletion failed: {0}", e.Message);
		Exception_t * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_5);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Console_t79987B1B5914E76054A8CBE506B9E11936A8BC07_il2cpp_TypeInfo_var)));
		Console_WriteLine_m4B2F36DB25614A4C2E237548DB2B56B277C530CD(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1110AD9B1979CA8CCDD901B2845BAD9FD3D1BD26)), L_6, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0048;
	} // end catch (depth: 1)

IL_0048:
	{
		// Debug.Log("start recording");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralF34550EE1F0479AABE0E68A88AD01EA39EB14FAD, /*hidden argument*/NULL);
		// _recording = Microphone.Start(_microphoneID, false, _recordingLengthSec, _recordingHZ);
		String_t* L_7 = __this->get__microphoneID_4();
		int32_t L_8 = __this->get__recordingLengthSec_6();
		int32_t L_9 = __this->get__recordingHZ_7();
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_10;
		L_10 = Microphone_Start_m7F08B42DC2B97BE649F7329C0FAC54125FE0AC5D(L_7, (bool)0, L_8, L_9, /*hidden argument*/NULL);
		__this->set__recording_5(L_10);
		// }
		return;
	}
}
// System.Void stt::stopRecording()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_stopRecording_mED8C6B0C8C9BCBEB0249BD96DE4BE1D1480D2D48 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6347ECA22C6DF182EF85FDF20EB9438FD9C5DE0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA79DF414A80C6DBDBAB707743934FF4E0367122);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Microphone.IsRecording(_microphoneID))
		String_t* L_0 = __this->get__microphoneID_4();
		bool L_1;
		L_1 = Microphone_IsRecording_mF5DE093DAB01451F89AAAAD2260F101B25A75EC4(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_006a;
		}
	}
	{
		// Microphone.End(_microphoneID);
		String_t* L_2 = __this->get__microphoneID_4();
		Microphone_End_mF41BC1D2BA47C6FC2C25BA106F99A5704ACE518F(L_2, /*hidden argument*/NULL);
		// Debug.Log("stop recording");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralFA79DF414A80C6DBDBAB707743934FF4E0367122, /*hidden argument*/NULL);
		// if (_recording == null)
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_3 = __this->get__recording_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_003b;
		}
	}
	{
		// Debug.LogError("nothing recorded");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(_stringLiteralC6347ECA22C6DF182EF85FDF20EB9438FD9C5DE0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_003b:
	{
		// SavWav.Save("/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/" + filename, _recording);
		String_t* L_5 = __this->get_filename_11();
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4, L_5, /*hidden argument*/NULL);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_7 = __this->get__recording_5();
		bool L_8;
		L_8 = SavWav_Save_mF79C42FE3B2D3445F35CA3E0D232777F7422803E(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0057:
	{
		// while (!File.Exists(fileCheck)) { }
		String_t* L_9 = __this->get_fileCheck_9();
		bool L_10;
		L_10 = File_Exists_mDAEBF2732BC830270FD98346F069B04E97BB1D5B(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0057;
		}
	}
	{
		// speechTransformText();
		stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2(__this, /*hidden argument*/NULL);
	}

IL_006a:
	{
		// return;
		return;
	}
}
// System.Collections.IEnumerator stt::PostVoice(System.String,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* stt_PostVoice_m51BA55AF94EED73488734005CB8F7625FDC272C8 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, String_t* ___url0, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * L_0 = (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 *)il2cpp_codegen_object_new(U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72_il2cpp_TypeInfo_var);
		U3CPostVoiceU3Ed__16__ctor_m02D4CE17E026C2DDF98B67236304C1316D60AEEB(L_0, 0, /*hidden argument*/NULL);
		U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * L_1 = L_0;
		String_t* L_2 = ___url0;
		NullCheck(L_1);
		L_1->set_url_2(L_2);
		U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * L_3 = L_1;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___data1;
		NullCheck(L_3);
		L_3->set_data_3(L_4);
		return L_3;
	}
}
// System.Void stt::speechTransformText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A957F295EEA8356D0510A3137F2709636BF549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EB32F915A0498F9005661D12DC44B2FF0AE4E84);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB6511403DAE59CCF2465B82E6018127C5093F77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6C27B57AF1002C9029CFEF4015A5CB58520BA18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* V_0 = NULL;
	String_t* V_1 = NULL;
	HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * V_2 = NULL;
	StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * V_3 = NULL;
	String_t* V_4 = NULL;
	VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * V_5 = NULL;
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// string FilePath = $"/Users/swumac/Desktop/project_maldodum/maldodum_dev/Assets/Audio/practice_files/{filename}.wav";
		String_t* L_0 = __this->get_filename_11();
		String_t* L_1;
		L_1 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteral35578FF6A2891D2EBEACB643ADEB7ED4B9FD20C4, L_0, _stringLiteralD36877C5F51DFCF27BD6E50EFE17F811114D9198, /*hidden argument*/NULL);
		// FileStream fs = new FileStream(FilePath, FileMode.Open, FileAccess.Read);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_2 = (FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 *)il2cpp_codegen_object_new(FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26_il2cpp_TypeInfo_var);
		FileStream__ctor_m427E5D4CDC40E0431E91B713C6576F1F3DCC5E8D(L_2, L_1, 3, 1, /*hidden argument*/NULL);
		// byte[] fileData = new byte[fs.Length];
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_3 = L_2;
		NullCheck(L_3);
		int64_t L_4;
		L_4 = VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.Stream::get_Length() */, L_3);
		if ((int64_t)(L_4) > INTPTR_MAX) IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), stt_speechTransformText_m6EA83D5AD08F1D760CCD94D870C8F8C3080A6AA2_RuntimeMethod_var);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_5 = (ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*)SZArrayNew(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726_il2cpp_TypeInfo_var, (uint32_t)((intptr_t)L_4));
		V_0 = L_5;
		// fs.Read(fileData, 0, fileData.Length);
		FileStream_t6342275F1C1E26F5EEB5AD510933C95B78A5DA26 * L_6 = L_3;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_7 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_8 = V_0;
		NullCheck(L_8);
		NullCheck(L_6);
		int32_t L_9;
		L_9 = VirtFuncInvoker3< int32_t, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(26 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_6, L_7, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))));
		// fs.Close();
		NullCheck(L_6);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_6);
		// string lang = "Kor";    // 언어 코드 ( Kor, Jpn, Eng, Chn )
		V_1 = _stringLiteralAB6511403DAE59CCF2465B82E6018127C5093F77;
		// string url = $"https://naveropenapi.apigw.ntruss.com/recog/v1/stt?lang={lang}";
		String_t* L_10 = V_1;
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral1EB32F915A0498F9005661D12DC44B2FF0AE4E84, L_10, /*hidden argument*/NULL);
		// HttpWebRequest request = (HttpWebRequest)WebRequest.Create(url);
		IL2CPP_RUNTIME_CLASS_INIT(WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E_il2cpp_TypeInfo_var);
		WebRequest_t130159AA9419464E465AE0DC62721CC40E86EE8E * L_12;
		L_12 = WebRequest_Create_mE5C98DA6F421133D33D07FDF1858213D5A03DE46(L_11, /*hidden argument*/NULL);
		V_2 = ((HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A *)CastclassClass((RuntimeObject*)L_12, HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A_il2cpp_TypeInfo_var));
		// request.Headers.Add("X-NCP-APIGW-API-KEY-ID", "ex75mlx2mv");
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_13 = V_2;
		NullCheck(L_13);
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_14;
		L_14 = VirtFuncInvoker0< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_13);
		NullCheck(L_14);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_14, _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191, _stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549);
		// request.Headers.Add("X-NCP-APIGW-API-KEY", "GmvcS77loE4q0eVFmSS6vLiVBQ8JEICsRQRnuP4A");
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_15 = V_2;
		NullCheck(L_15);
		WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * L_16;
		L_16 = VirtFuncInvoker0< WebHeaderCollection_tB7EEB47640F12A532E1D8331A5AD498A289824D4 * >::Invoke(11 /* System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers() */, L_15);
		NullCheck(L_16);
		VirtActionInvoker2< String_t*, String_t* >::Invoke(13 /* System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String) */, L_16, _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604, _stringLiteral03A957F295EEA8356D0510A3137F2709636BF549);
		// request.Method = "POST";
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_17 = V_2;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(9 /* System.Void System.Net.WebRequest::set_Method(System.String) */, L_17, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		// request.ContentType = "application/octet-stream";
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_18 = V_2;
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.Net.WebRequest::set_ContentType(System.String) */, L_18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		// request.ContentLength = fileData.Length;
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_19 = V_2;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_20 = V_0;
		NullCheck(L_20);
		NullCheck(L_19);
		VirtActionInvoker1< int64_t >::Invoke(13 /* System.Void System.Net.WebRequest::set_ContentLength(System.Int64) */, L_19, ((int64_t)((int64_t)((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))));
		// using (Stream requestStream = request.GetRequestStream())
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_21 = V_2;
		NullCheck(L_21);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_22;
		L_22 = VirtFuncInvoker0< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(20 /* System.IO.Stream System.Net.WebRequest::GetRequestStream() */, L_21);
		V_6 = L_22;
	}

IL_00a8:
	try
	{ // begin try (depth: 1)
		// requestStream.Write(fileData, 0, fileData.Length);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_23 = V_6;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_24 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_25 = V_0;
		NullCheck(L_25);
		NullCheck(L_23);
		VirtActionInvoker3< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726*, int32_t, int32_t >::Invoke(28 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))));
		// requestStream.Close();
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_26 = V_6;
		NullCheck(L_26);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_26);
		// }
		IL2CPP_LEAVE(0xC9, FINALLY_00bd);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00bd;
	}

FINALLY_00bd:
	{ // begin finally (depth: 1)
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_27 = V_6;
			if (!L_27)
			{
				goto IL_00c8;
			}
		}

IL_00c1:
		{
			Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_28 = V_6;
			NullCheck(L_28);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_28);
		}

IL_00c8:
		{
			IL2CPP_END_FINALLY(189)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(189)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xC9, IL_00c9)
	}

IL_00c9:
	{
		// HttpWebResponse response = (HttpWebResponse)request.GetResponse();
		HttpWebRequest_tDF8F794F1E3A8A19A63C2B57C1A28A42698BF07A * L_29 = V_2;
		NullCheck(L_29);
		WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * L_30;
		L_30 = VirtFuncInvoker0< WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * >::Invoke(21 /* System.Net.WebResponse System.Net.WebRequest::GetResponse() */, L_29);
		// Stream stream = response.GetResponseStream();
		HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB * L_31 = ((HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB *)CastclassClass((RuntimeObject*)L_30, HttpWebResponse_tD58890FA8C0EA55ED8B628D0FB87E9DF9B8CE7EB_il2cpp_TypeInfo_var));
		NullCheck(L_31);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_32;
		L_32 = VirtFuncInvoker0< Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * >::Invoke(11 /* System.IO.Stream System.Net.WebResponse::GetResponseStream() */, L_31);
		// StreamReader reader = new StreamReader(stream, Encoding.UTF8);
		Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * L_33 = L_32;
		Encoding_tE901442411E2E70039D2A4AE77FB81C3D6064827 * L_34;
		L_34 = Encoding_get_UTF8_mC877FB3137BBD566AEE7B15F9BF61DC4EF8F5E5E(/*hidden argument*/NULL);
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_35 = (StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 *)il2cpp_codegen_object_new(StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3_il2cpp_TypeInfo_var);
		StreamReader__ctor_mFA7564812FC1200208BCC51CF24D3BE25BD15497(L_35, L_33, L_34, /*hidden argument*/NULL);
		V_3 = L_35;
		// string text = reader.ReadToEnd();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_36 = V_3;
		NullCheck(L_36);
		String_t* L_37;
		L_37 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.IO.TextReader::ReadToEnd() */, L_36);
		V_4 = L_37;
		// stream.Close();
		NullCheck(L_33);
		VirtActionInvoker0::Invoke(16 /* System.Void System.IO.Stream::Close() */, L_33);
		// response.Close();
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(9 /* System.Void System.Net.WebResponse::Close() */, L_31);
		// reader.Close();
		StreamReader_tA857ACC7ABF9AA4638E1291E6D2539C14D2963D3 * L_38 = V_3;
		NullCheck(L_38);
		VirtActionInvoker0::Invoke(7 /* System.Void System.IO.TextReader::Close() */, L_38);
		// VoiceRecognize voiceRecognize = JsonUtility.FromJson<VoiceRecognize>(text);
		String_t* L_39 = V_4;
		VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * L_40;
		L_40 = JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67(L_39, /*hidden argument*/JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67_RuntimeMethod_var);
		V_5 = L_40;
		// Debug.Log(voiceRecognize.text);
		VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * L_41 = V_5;
		NullCheck(L_41);
		String_t* L_42 = L_41->get_text_0();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_42, /*hidden argument*/NULL);
		// PlayerPrefs.SetString("tx", voiceRecognize.text);
		VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * L_43 = V_5;
		NullCheck(L_43);
		String_t* L_44 = L_43->get_text_0();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC6C27B57AF1002C9029CFEF4015A5CB58520BA18, L_44, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void stt::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_OnPointerDown_m3755AE7212B50B18F83922BF3AE4647862477845 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// startRecording();
		stt_startRecording_mB101D12B901BCBD94A852BA2CF91BC879A331BB8(__this, /*hidden argument*/NULL);
		// ChangeBtn();
		stt_ChangeBtn_mBA9B05F2FA2F825C17AC1037318CF08CE82E537F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void stt::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_OnPointerUp_mD804E8E860BF74F1CE038CE89EF738FB8E6CC094 (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * ___eventData0, const RuntimeMethod* method)
{
	{
		// stopRecording();
		stt_stopRecording_mED8C6B0C8C9BCBEB0249BD96DE4BE1D1480D2D48(__this, /*hidden argument*/NULL);
		// ChangeBtn();
		stt_ChangeBtn_mBA9B05F2FA2F825C17AC1037318CF08CE82E537F(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void stt::ChangeBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt_ChangeBtn_mBA9B05F2FA2F825C17AC1037318CF08CE82E537F (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	{
		// if (isSelect)
		bool L_0 = __this->get_isSelect_15();
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		// isSelect = false;
		__this->set_isSelect_15((bool)0);
		// btn.sprite = unSelect_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_1 = __this->get_btn_12();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = __this->get_unSelect_btn_14();
		NullCheck(L_1);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0021:
	{
		// isSelect = true;
		__this->set_isSelect_15((bool)1);
		// btn.sprite = select_btn;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = __this->get_btn_12();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_4 = __this->get_select_btn_13();
		NullCheck(L_3);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void stt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void stt__ctor_m3E367C745F9BB1B3D369796D5B2BA3DD30588E6B (stt_tD54F31FF1E57491B64B4DA524A864421F023FDEE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE0DD70FB06DBE96877F1F8536FAF73A328B01B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _recordingLengthSec = 5;
		__this->set__recordingLengthSec_6(5);
		// private int _recordingHZ = 22050;
		__this->set__recordingHZ_7(((int32_t)22050));
		// string url = "https://naveropenapi.apigw.ntruss.com/recog/v1/stt?lang=Kor";
		__this->set_url_10(_stringLiteralDE0DD70FB06DBE96877F1F8536FAF73A328B01B6);
		// public bool isSelect = true;
		__this->set_isSelect_15((bool)1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RecordSaveController/<waitFeedback>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFeedbackU3Ed__11__ctor_m8168100B85D0FEBC73F0E0799B68E392268A75EC (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RecordSaveController/<waitFeedback>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFeedbackU3Ed__11_System_IDisposable_Dispose_m60991C1FBA731A77DBE3E5EAC1AD37B2BFC26948 (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RecordSaveController/<waitFeedback>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitFeedbackU3Ed__11_MoveNext_m69E1F6FA71CFD51295D8326382BFCB5A73B083D1 (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0085;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// feedbackCanvas.SetActive(true);
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_feedbackCanvas_9();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// practiceAudio.Play();
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_5 = V_1;
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_practiceAudio_7();
		NullCheck(L_6);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(seconds);
		float L_7 = __this->get_seconds_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// feedbackAudio.Play();
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_9 = V_1;
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_feedbackAudio_11();
		NullCheck(L_10);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(6.2f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (6.19999981f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0085:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(wrongSceneName);
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_wrongSceneName_6();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object RecordSaveController/<waitFeedback>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitFeedbackU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBC5E7E4C6F4229F0FA577FC19140FBB7F8A6BDA3 (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RecordSaveController/<waitFeedback>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitFeedbackU3Ed__11_System_Collections_IEnumerator_Reset_m6D79AE57FCC4638F31EB4915E7B9CF686EA19768 (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitFeedbackU3Ed__11_System_Collections_IEnumerator_Reset_m6D79AE57FCC4638F31EB4915E7B9CF686EA19768_RuntimeMethod_var)));
	}
}
// System.Object RecordSaveController/<waitFeedback>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitFeedbackU3Ed__11_System_Collections_IEnumerator_get_Current_m008E51512A518E94EC6C49AF9E98B88A1D3E2EB4 (U3CwaitFeedbackU3Ed__11_t565BF2ECAF80EA99CBF2FC48D0117C24B280E73C * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void RecordSaveController/<waitSuccess>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitSuccessU3Ed__10__ctor_mF7AFD9A7D64BCAA45CD2454A275128180D9CC2E7 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RecordSaveController/<waitSuccess>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitSuccessU3Ed__10_System_IDisposable_Dispose_m3C9FCB183A3F4A719F6ADF09D556B9E203461545 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RecordSaveController/<waitSuccess>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CwaitSuccessU3Ed__10_MoveNext_m7CCA4A5026D7D5E3E0412F0ACC58C59690118776 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_005a;
			}
			case 2:
			{
				goto IL_0085;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// successCanvas.SetActive(true);
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_3 = V_1;
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3->get_successCanvas_8();
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// practiceAudio.Play();
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_5 = V_1;
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_practiceAudio_7();
		NullCheck(L_6);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_6, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(seconds);
		float L_7 = __this->get_seconds_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_005a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// successAudio.Play();
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_9 = V_1;
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10 = L_9->get_successAudio_10();
		NullCheck(L_10);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_10, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(3.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_11 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_11, (3.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_11);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0085:
	{
		__this->set_U3CU3E1__state_0((-1));
		// SceneManager.LoadScene(correctSceneName);
		RecordSaveController_t28B9ED368276F5DE4ECAF8AB07C0BE1FBB9DFB47 * L_12 = V_1;
		NullCheck(L_12);
		String_t* L_13 = L_12->get_correctSceneName_5();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_13, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object RecordSaveController/<waitSuccess>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitSuccessU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m65D5BDE7EF2A3F22572D2EB7DD6CAC1395EA7E9D (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RecordSaveController/<waitSuccess>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CwaitSuccessU3Ed__10_System_Collections_IEnumerator_Reset_mB5ECB2DEF105A6DFC308842E7D79804A86A2FD04 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CwaitSuccessU3Ed__10_System_Collections_IEnumerator_Reset_mB5ECB2DEF105A6DFC308842E7D79804A86A2FD04_RuntimeMethod_var)));
	}
}
// System.Object RecordSaveController/<waitSuccess>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CwaitSuccessU3Ed__10_System_Collections_IEnumerator_get_Current_m389A1C9F94C98ABC380936B3EADD537F7A8D4392 (U3CwaitSuccessU3Ed__10_tA5BA0BFB6D7B93DC86DC260C70F50B244BC77DA2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SpeechToText/<PostVoice>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__18__ctor_mF2D913A321F632741190063755875C700DDA615D (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void SpeechToText/<PostVoice>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__18_System_IDisposable_Dispose_mCB2002A00693C10574CBFB1905AADDD2E8929891 (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean SpeechToText/<PostVoice>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostVoiceU3Ed__18_MoveNext_m7D3563E9E1DE494A6402D50DFB155D10F0A20060 (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisVoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17_m95462C534F57B839E03EB9241A1DC58890783919_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A957F295EEA8356D0510A3137F2709636BF549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2BEA1A2159F1EB8FF67E0DE1EA2DFD8C6B1C90D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7B033E378509772AB366A1073C8FE4C64F070D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * V_1 = NULL;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_2 = NULL;
	VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * V_3 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * L_1 = __this->get_U3CU3E4__this_4();
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
			goto IL_00a8;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_4 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_4, /*hidden argument*/NULL);
		V_2 = L_4;
		// UnityWebRequest request = UnityWebRequest.Post(url, form);
		String_t* L_5 = __this->get_url_2();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_6 = V_2;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7;
		L_7 = UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646(L_5, L_6, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_5(L_7);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY-ID", "ex75mlx2mv");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_8, _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191, _stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549, /*hidden argument*/NULL);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY", "GmvcS77loE4q0eVFmSS6vLiVBQ8JEICsRQRnuP4A");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_9);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_9, _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604, _stringLiteral03A957F295EEA8356D0510A3137F2709636BF549, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/octet-stream");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_10);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_10, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244, /*hidden argument*/NULL);
		// request.uploadHandler = new UploadHandlerRaw(data);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_11 = __this->get_U3CrequestU3E5__2_5();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12 = __this->get_data_3();
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_13 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_13, L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_11, L_13, /*hidden argument*/NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_14 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_14);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_15;
		L_15 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_14, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrequestU3E5__2_5();
		if (L_16)
		{
			goto IL_00c9;
		}
	}
	{
		// Debug.LogError(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_17 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_17);
		String_t* L_18;
		L_18 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_18, /*hidden argument*/NULL);
		// }
		goto IL_011c;
	}

IL_00c9:
	{
		// string message = request.downloadHandler.text;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_19 = __this->get_U3CrequestU3E5__2_5();
		NullCheck(L_19);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_20;
		L_20 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21;
		L_21 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_20, /*hidden argument*/NULL);
		// VoiceRecognize voiceRecognize = JsonUtility.FromJson<VoiceRecognize>(message);
		VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * L_22;
		L_22 = JsonUtility_FromJson_TisVoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17_m95462C534F57B839E03EB9241A1DC58890783919(L_21, /*hidden argument*/JsonUtility_FromJson_TisVoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17_m95462C534F57B839E03EB9241A1DC58890783919_RuntimeMethod_var);
		V_3 = L_22;
		// PlayerPrefs.SetString("sttResult", voiceRecognize.text);
		VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * L_23 = V_3;
		NullCheck(L_23);
		String_t* L_24 = L_23->get_text_0();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteralC2BEA1A2159F1EB8FF67E0DE1EA2DFD8C6B1C90D, L_24, /*hidden argument*/NULL);
		// Debug.Log("Voice Server responded: " + voiceRecognize.text);
		VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * L_25 = V_3;
		NullCheck(L_25);
		String_t* L_26 = L_25->get_text_0();
		String_t* L_27;
		L_27 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFE7B033E378509772AB366A1073C8FE4C64F070D, L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_27, /*hidden argument*/NULL);
		// btnReplay.interactable = true;
		SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * L_28 = V_1;
		NullCheck(L_28);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_29 = L_28->get_btnReplay_11();
		NullCheck(L_29);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_29, (bool)1, /*hidden argument*/NULL);
		// btnSave.interactable = true;
		SpeechToText_tC4C21E99BCB2DCDD837069F0F05EF5D7D35651CE * L_30 = V_1;
		NullCheck(L_30);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_31 = L_30->get_btnSave_12();
		NullCheck(L_31);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_31, (bool)1, /*hidden argument*/NULL);
	}

IL_011c:
	{
		// }
		return (bool)0;
	}
}
// System.Object SpeechToText/<PostVoice>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostVoiceU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m572E2EAAE39B5608BDDAE5E80BB4E00BFC4ECB5C (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void SpeechToText/<PostVoice>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__18_System_Collections_IEnumerator_Reset_m027F52F4E2ABBABDA63BA317DD145694D15EF1F0 (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostVoiceU3Ed__18_System_Collections_IEnumerator_Reset_m027F52F4E2ABBABDA63BA317DD145694D15EF1F0_RuntimeMethod_var)));
	}
}
// System.Object SpeechToText/<PostVoice>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostVoiceU3Ed__18_System_Collections_IEnumerator_get_Current_m2BC6E527213F1CC36C66F5E861B757047442AF19 (U3CPostVoiceU3Ed__18_t6B2924970732A770478E1961F55AFF576FF48E53 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void SpeechToText/VoiceRecognize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceRecognize__ctor_m331155CDAD6C86B9395E6FBD5536933C70EE03F5 (VoiceRecognize_t0A9C317481BA511FB0CC5522F49BE6E1594DFD17 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VideoHandler/<PrepareVideo>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrepareVideoU3Ed__3__ctor_m29EE86F4ED3E2B6279CD4E1E4B846BD96A3D7CA2 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void VideoHandler/<PrepareVideo>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrepareVideoU3Ed__3_System_IDisposable_Dispose_m3E5DE653FD20EE3AEADC09E1B75824310927D0DD (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean VideoHandler/<PrepareVideo>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPrepareVideoU3Ed__3_MoveNext_mDD413796AC41E500A3F3BFBBC36516C0627A4559 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// mVideoPlayer.Prepare();
		VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * L_4 = V_1;
		NullCheck(L_4);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_5 = L_4->get_mVideoPlayer_5();
		NullCheck(L_5);
		VideoPlayer_Prepare_m3B32C1AA66866136ABDEF92F762D3479C0459903(L_5, /*hidden argument*/NULL);
		goto IL_004b;
	}

IL_002b:
	{
		// yield return new WaitForSeconds(0.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (0.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0044:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_004b:
	{
		// while (!mVideoPlayer.isPrepared)
		VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * L_7 = V_1;
		NullCheck(L_7);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_8 = L_7->get_mVideoPlayer_5();
		NullCheck(L_8);
		bool L_9;
		L_9 = VideoPlayer_get_isPrepared_m747401DA6ADE60190873F918AD83AB7382D0E423(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_002b;
		}
	}
	{
		// mScreen.texture = mVideoPlayer.texture;
		VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * L_10 = V_1;
		NullCheck(L_10);
		RawImage_tFE280EF0C73AF19FE9AC24DB06501937DC2D6F1A * L_11 = L_10->get_mScreen_4();
		VideoHandler_t9CBFAA81A60F597547FD41B112F6485D8B69797D * L_12 = V_1;
		NullCheck(L_12);
		VideoPlayer_t47DCC396CBA28512CF97C6CC4F55878E8D62FE86 * L_13 = L_12->get_mVideoPlayer_5();
		NullCheck(L_13);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_14;
		L_14 = VideoPlayer_get_texture_m8DF9A2351F42E2F9622BF5DFD8439F2CBAB95A29(L_13, /*hidden argument*/NULL);
		NullCheck(L_11);
		RawImage_set_texture_m1D7BAE6CB629C36894B664D9F5D68CACA88B8D99(L_11, L_14, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object VideoHandler/<PrepareVideo>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPrepareVideoU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD532527B894D76516319B96C443D8992A3A56565 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void VideoHandler/<PrepareVideo>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPrepareVideoU3Ed__3_System_Collections_IEnumerator_Reset_m23D6B520AAE603AA57902BE1AB38DA12410179F6 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPrepareVideoU3Ed__3_System_Collections_IEnumerator_Reset_m23D6B520AAE603AA57902BE1AB38DA12410179F6_RuntimeMethod_var)));
	}
}
// System.Object VideoHandler/<PrepareVideo>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPrepareVideoU3Ed__3_System_Collections_IEnumerator_get_Current_mD2C4BC0F4353A6B49BB3E536F0B84A8AA6AD5257 (U3CPrepareVideoU3Ed__3_t3567A41367DC4F8B47959BEC530E2347632630B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void stt/<PostVoice>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__16__ctor_m02D4CE17E026C2DDF98B67236304C1316D60AEEB (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void stt/<PostVoice>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__16_System_IDisposable_Dispose_m11CB2527176728E3ADD26E1FE769AD9B5745C1DE (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean stt/<PostVoice>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPostVoiceU3Ed__16_MoveNext_m6F3904AE1AA5631C7E72FC0E20AFEA2B3F549D93 (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral03A957F295EEA8356D0510A3137F2709636BF549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral641255E7CDC790311725CCB47DB63D989117D244);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE7B033E378509772AB366A1073C8FE4C64F070D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * V_1 = NULL;
	VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * V_2 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_00a1;
		}
	}
	{
		return (bool)0;
	}

IL_0013:
	{
		__this->set_U3CU3E1__state_0((-1));
		// WWWForm form = new WWWForm();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_3 = (WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB *)il2cpp_codegen_object_new(WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB_il2cpp_TypeInfo_var);
		WWWForm__ctor_mA0987933892AF6FA9E01603B214E86EC52F6B055(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		// UnityWebRequest request = UnityWebRequest.Post(url, form);
		String_t* L_4 = __this->get_url_2();
		WWWForm_t078274293DA1BDA9AB5689AF8BCBF0EE17A2BABB * L_5 = V_1;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_6;
		L_6 = UnityWebRequest_Post_m5F29B83B6FEDEAEAAC938DD26AE484A2750DB646(L_4, L_5, /*hidden argument*/NULL);
		__this->set_U3CrequestU3E5__2_4(L_6);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY-ID", "ex75mlx2mv");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_7 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_7);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_7, _stringLiteralDFBB9DB74E567528C553B92481C6E97CB3CC5191, _stringLiteralFD840B4F377DFE9CE031BD1C1F479F9888ED8549, /*hidden argument*/NULL);
		// request.SetRequestHeader("X-NCP-APIGW-API-KEY", "GmvcS77loE4q0eVFmSS6vLiVBQ8JEICsRQRnuP4A");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_8 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_8);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_8, _stringLiteralA57982DBA0ADBED33403CE51D02C305E9BF87604, _stringLiteral03A957F295EEA8356D0510A3137F2709636BF549, /*hidden argument*/NULL);
		// request.SetRequestHeader("Content-Type", "application/octet-stream");
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_9 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_9);
		UnityWebRequest_SetRequestHeader_m5ED4EFBACC106390DF5D81D19E4D4D9D59F13EFB(L_9, _stringLiteral5B58EBE31E594BF8FA4BEA3CD075473149322B18, _stringLiteral641255E7CDC790311725CCB47DB63D989117D244, /*hidden argument*/NULL);
		// request.uploadHandler = new UploadHandlerRaw(data);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_10 = __this->get_U3CrequestU3E5__2_4();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_11 = __this->get_data_3();
		UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 * L_12 = (UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669 *)il2cpp_codegen_object_new(UploadHandlerRaw_t398466F5905D0829DE2807D531A2419DA8B61669_il2cpp_TypeInfo_var);
		UploadHandlerRaw__ctor_mB46261D7AA64B605D5CA8FF9027A4A32E57A7BD9(L_12, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		UnityWebRequest_set_uploadHandler_m8D5DF24FBE7F8F0DCF27E11CE3C6CF4363DF23BA(L_10, L_12, /*hidden argument*/NULL);
		// yield return request.SendWebRequest();
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_13 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_13);
		UnityWebRequestAsyncOperation_tDCAC6B6C7D51563F8DFD4963E3BE362470125396 * L_14;
		L_14 = UnityWebRequest_SendWebRequest_m990921023F56ECB8FF8C118894A317EB6E2F5B50(L_13, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_14);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a1:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (request == null)
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_15 = __this->get_U3CrequestU3E5__2_4();
		if (L_15)
		{
			goto IL_00c2;
		}
	}
	{
		// Debug.LogError(request.error);
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_16 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_16);
		String_t* L_17;
		L_17 = UnityWebRequest_get_error_m32B69D2365C1FE2310B5936C7C295B71A92CC2B4(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_17, /*hidden argument*/NULL);
		// }
		goto IL_00ed;
	}

IL_00c2:
	{
		// string message = request.downloadHandler.text;
		UnityWebRequest_tB75B39F6951CA0DBA2D5BEDF85FDCAAC6026A37E * L_18 = __this->get_U3CrequestU3E5__2_4();
		NullCheck(L_18);
		DownloadHandler_tEEAE0DD53DB497C8A491C4F7B7A14C3CA027B1DB * L_19;
		L_19 = UnityWebRequest_get_downloadHandler_mCE0A0C53A63419FE5AE25915AFB36EABE294C732(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		String_t* L_20;
		L_20 = DownloadHandler_get_text_mD89D7125640800A8F5C4B9401C080C405953828A(L_19, /*hidden argument*/NULL);
		// VoiceRecognize voiceRecognize = JsonUtility.FromJson<VoiceRecognize>(message);
		VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * L_21;
		L_21 = JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67(L_20, /*hidden argument*/JsonUtility_FromJson_TisVoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6_m59AFF19F1D779CB54F827174A84D323EC5A67D67_RuntimeMethod_var);
		V_2 = L_21;
		// Debug.Log("Voice Server responded: " + voiceRecognize.text);
		VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * L_22 = V_2;
		NullCheck(L_22);
		String_t* L_23 = L_22->get_text_0();
		String_t* L_24;
		L_24 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFE7B033E378509772AB366A1073C8FE4C64F070D, L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_24, /*hidden argument*/NULL);
	}

IL_00ed:
	{
		// }
		return (bool)0;
	}
}
// System.Object stt/<PostVoice>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostVoiceU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m344BC8B249FACAC805B9C63DA13CC641499D5E7E (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void stt/<PostVoice>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPostVoiceU3Ed__16_System_Collections_IEnumerator_Reset_mA5E646E18E84F921C4812CE947CD3965396A9A80 (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPostVoiceU3Ed__16_System_Collections_IEnumerator_Reset_mA5E646E18E84F921C4812CE947CD3965396A9A80_RuntimeMethod_var)));
	}
}
// System.Object stt/<PostVoice>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CPostVoiceU3Ed__16_System_Collections_IEnumerator_get_Current_m4D952392499A8E49D10DFA446F95CF48AFE63F22 (U3CPostVoiceU3Ed__16_t7D44CBC7D92F44BB9C685989A37989D650000F72 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void stt/VoiceRecognize::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VoiceRecognize__ctor_mE7359A8C1FA2AA13FA53B90C12A1D5E27AD10E68 (VoiceRecognize_t8B04D220FCC504CA8ABB74A878FF929E02E23FD6 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  PointerEventData_get_delta_mCEECFB10CBB95E1C5FFD8A24B54A3989D926CA34_inline (PointerEventData_tC6C1BEE9D4C8755A31DA7FC0C9A1F28A36456954 * __this, const RuntimeMethod* method)
{
	{
		// public Vector2 delta { get; set; }
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = __this->get_U3CdeltaU3Ek__BackingField_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float List_1_get_Item_mE747DE332539CAC0473E9C10EC3657830A3BBF97_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)__this->get__items_1();
		int32_t L_3 = ___index0;
		float L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_2, (int32_t)L_3);
		return (float)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m7577339CA0941CF47BA92256F81ECDC3C91ACA9C_gshared_inline (List_1_t6726F9309570A0BDC5D42E10777F3E2931C487AA * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
