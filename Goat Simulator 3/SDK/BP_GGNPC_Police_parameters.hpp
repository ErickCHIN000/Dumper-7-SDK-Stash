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

// 0x8 (0x8 - 0x0)
// Function BP_GGNPC_Police.BP_GGNPC_Police_C.OnLoaded_8F7D24694C82F721A577578B5AD69B0C
struct ABP_GGNPC_Police_C_OnLoaded_8F7D24694C82F721A577578B5AD69B0C_Params
{
public:
	TSubclassOf<class UObject>                   Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_GGNPC_Police.BP_GGNPC_Police_C.ReceiveEndPlay
struct ABP_GGNPC_Police_C_ReceiveEndPlay_Params
{
public:
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_GGNPC_Police.BP_GGNPC_Police_C.ExecuteUbergraph_BP_GGNPC_Police
struct ABP_GGNPC_Police_C_ExecuteUbergraph_BP_GGNPC_Police_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UObject>                   K2Node_CustomEvent_Loaded;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                Temp_class_Variable;                               // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEndPlayReason                    K2Node_Event_EndPlayReason;                        // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


