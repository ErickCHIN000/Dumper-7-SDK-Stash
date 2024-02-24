#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMetricsClass : uint8
{
	MetricsClass_Building          = 0,
	MetricsClass_Challenges        = 1,
	MetricsClass_Combat            = 2,
	MetricsClass_Crafting          = 3,
	MetricsClass_Currency          = 4,
	MetricsClass_Customization     = 5,
	MetricsClass_Dialogue          = 6,
	MetricsClass_Gameplay          = 7,
	MetricsClass_Movement          = 8,
	MetricsClass_Prosperity        = 9,
	MetricsClass_Resources         = 10,
	MetricsClass_Interaction       = 11,
	MetricsClass_Quests            = 12,
	MetricsClass_Codex             = 13,
	MetricsClass_Default           = 14,
	MetricsClass_Session           = 15,
	MetricsClass_RPC               = 16,
	MetricsClass_Performance       = 17,
	MetricsClass_System            = 18,
	MetricsClass_Login             = 19,
	MetricsClass_Connection        = 20,
	MetricsClass_EditorTelemetry   = 21,
	MetricsClass_Observability     = 22,
	MetricsClass_Options           = 23,
	MetricsClass_Social            = 24,
	MetricsClass_PlayerReporting   = 25,
	MetricsClass_UI                = 26,
	MetricsClass_MAX               = 27,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MetricsServiceProvider.MetricsEventAttr
struct FMetricsEventAttr
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MetricsServiceProvider.TelemetryEventDescriptor
struct FTelemetryEventDescriptor
{
public:
	enum class EMetricsClass                     MetricsClass;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                EventName;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMetricsEventAttr>             Attributes;                                        // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MetricsServiceProvider.FailedTelemetryExpectation
struct FFailedTelemetryExpectation
{
public:
	struct FTelemetryEventDescriptor             Expectation;                                       // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FTelemetryEventDescriptor>     ClosestEvents;                                     // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

}


