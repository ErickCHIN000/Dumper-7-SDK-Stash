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

// 0x1 (0x1 - 0x0)
// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SetSpyglassState
struct UBP_PlayerTrackingComponent_C_SetSpyglassState_Params
{
public:
	bool                                         SpyglassUp;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.GetSpyglassState
struct UBP_PlayerTrackingComponent_C_GetSpyglassState_Params
{
public:
	bool                                         SpyglassUp;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SpyglassStateChanged_Event
struct UBP_PlayerTrackingComponent_C_SpyglassStateChanged_Event_Params
{
public:
	bool                                         SpyglassUp;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.ExecuteUbergraph_BP_PlayerTrackingComponent
struct UBP_PlayerTrackingComponent_C_ExecuteUbergraph_BP_PlayerTrackingComponent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_SpyglassUp;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_622[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_PlayerTrackingComponent.BP_PlayerTrackingComponent_C.SpyglassStateChanged__DelegateSignature
struct UBP_PlayerTrackingComponent_C_SpyglassStateChanged__DelegateSignature_Params
{
public:
	bool                                         SpyglassUp;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


