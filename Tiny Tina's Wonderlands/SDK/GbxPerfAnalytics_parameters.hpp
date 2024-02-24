#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryVector
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryVector_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x38(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D1A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x48(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryString
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryString_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x38(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D2D[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x50(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryRotator
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryRotator_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x38(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x44(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D3D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x48(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryInt
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryInt_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D5A[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x40(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryFloat
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryFloat_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x38(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x40(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryByte
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryByte_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D84[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x40(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.SetNamedTelemetryBool
struct UGbxTelemetryBlueprintLibrary_SetNamedTelemetryBool_Params
{
public:
	struct FK2TelemetryValues                    StatArray;                                         // 0x0(0x28)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x38(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetTelemetryValue                Opt;                                               // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_D9E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FK2TelemetryValues                    ReturnValue;                                       // 0x40(0x28)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.MakeTelemetryEventRef
struct UGbxTelemetryBlueprintLibrary_MakeTelemetryEventRef_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FK2EventRef                           ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.IsValid
struct UGbxTelemetryBlueprintLibrary_IsValid_Params
{
public:
	struct FK2EventRef                           EventRef;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryValues
struct UGbxTelemetryBlueprintLibrary_EmitTelemetryValues_Params
{
public:
	class FString                                EventContext;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FK2TelemetryValues                    Values;                                            // 0x10(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x40(0x10)(Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunOnClient;                                      // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x51(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DDE[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.EmitTelemetryEvent
struct UGbxTelemetryBlueprintLibrary_EmitTelemetryEvent_Params
{
public:
	struct FK2EventRef                           Event;                                             // 0x0(0x18)(Parm, NativeAccessSpecifierPublic)
	class FString                                EventContext;                                      // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               EventInstigatorObject;                             // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x40(0x10)(Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRunOnClient;                                      // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x51(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E24[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxPerfAnalytics.GbxTelemetryBlueprintLibrary.DefineTelemetryEventRef
struct UGbxTelemetryBlueprintLibrary_DefineTelemetryEventRef_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TableDesc;                                         // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FK2EventRef                           ReturnValue;                                       // 0x20(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}


