#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESetTelemetryValue : uint8
{
	Overwrite                      = 0,
	IfNew                          = 1,
	ESetTelemetryValue_MAX         = 2,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct GbxPerfAnalytics.K2EventRef
struct FK2EventRef
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E54[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct GbxPerfAnalytics.K2TelemetryValues
struct FK2TelemetryValues
{
public:
	uint8                                        Pad_E57[0x10];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2EventRef                           Event;                                             // 0x10(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}


