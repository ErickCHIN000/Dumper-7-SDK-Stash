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
// Function BP_LaptopEventManager.BP_LaptopEventManager_C.CallRandomEvent
struct ABP_LaptopEventManager_C_CallRandomEvent_Params
{
public:
	class UNarrativeComponent*                   CallFunc_GetNarrativeComponent_ReturnValue;        // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Random_OutItem;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Random_OutIndex;                    // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_140F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuest*                                CallFunc_BeginQuest_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_LaptopEventManager.BP_LaptopEventManager_C.ExecuteUbergraph_BP_LaptopEventManager
struct ABP_LaptopEventManager_C_ExecuteUbergraph_BP_LaptopEventManager_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_LaptopEventManager.BP_LaptopEventManager_C.SelectCertainLocation__DelegateSignature
struct ABP_LaptopEventManager_C_SelectCertainLocation__DelegateSignature_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_LaptopEventMaster_C*               Event;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}


