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

// 0x20 (0x20 - 0x0)
// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_PositionVector
struct ITelemetrySerializationInterface_GetTelemetryAttribute_PositionVector_Params
{
public:
	struct FVector                               OutPositionVector;                                 // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectUniqueId
struct ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectUniqueId_Params
{
public:
	class FString                                OutUniqueID;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectType
struct ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectType_Params
{
public:
	class FString                                OutObjectType;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function TelemetryRuntime.TelemetrySerializationInterface.GetTelemetryAttribute_ObjectName
struct ITelemetrySerializationInterface_GetTelemetryAttribute_ObjectName_Params
{
public:
	class FString                                OutObjectName;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29[0x7];                                       // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


