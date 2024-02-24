#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVaJson : uint8
{
	None                           = 0,
	Null                           = 1,
	String                         = 2,
	Number                         = 3,
	Boolean                        = 4,
	Array                          = 5,
	Object                         = 6,
	EVaJson_MAX                    = 7,
};

enum class ERequestStatus : uint8
{
	NotStarted                     = 0,
	Processing                     = 1,
	Failed                         = 2,
	Failed_ConnectionError         = 3,
	Succeeded                      = 4,
	ERequestStatus_MAX             = 5,
};

enum class ERequestContentType : uint8
{
	X_www_form_urlencoded_url      = 0,
	X_www_form_urlencoded_body     = 1,
	Json                           = 2,
	binary                         = 3,
	ERequestContentType_MAX        = 4,
};

enum class ERequestVerb : uint8
{
	GET                            = 0,
	POST                           = 1,
	PUT                            = 2,
	DEL                            = 3,
	CUSTOM                         = 4,
	ERequestVerb_MAX               = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// ScriptStruct VaRestPlugin.VaRestCallResponse
struct FVaRestCallResponse
{
public:
	class UVaRestRequestJSON*                    Request;                                           // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Callback;                                          // 0x10(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_972[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

}


