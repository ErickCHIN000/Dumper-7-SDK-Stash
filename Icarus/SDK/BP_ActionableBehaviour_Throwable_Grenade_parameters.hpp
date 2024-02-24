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

// 0x3 (0x3 - 0x0)
// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.IsCharging
struct UBP_ActionableBehaviour_Throwable_Grenade_C_IsCharging_Params
{
public:
	bool                                         Charging;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCharging_Charging;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.RequestThrow
struct UBP_ActionableBehaviour_Throwable_Grenade_C_RequestThrow_Params
{
public:
	bool                                         CallFunc_CanThrow_CanThrow;                        // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.CanThrow
struct UBP_ActionableBehaviour_Throwable_Grenade_C_CanThrow_Params
{
public:
	bool                                         CanThrow;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_CanThrow_CanThrow;                        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xC0 (0xC0 - 0x0)
// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.OnTraitAnimNotify
struct UBP_ActionableBehaviour_Throwable_Grenade_C_OnTraitAnimNotify_Params
{
public:
	struct FAnimNotifyEvent                      Notify;                                            // 0x0(0xB8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class AActor*                                AnimInstancePawn;                                  // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD2 (0xD2 - 0x0)
// Function BP_ActionableBehaviour_Throwable_Grenade.BP_ActionableBehaviour_Throwable_Grenade_C.ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade
struct UBP_ActionableBehaviour_Throwable_Grenade_C_ExecuteUbergraph_BP_ActionableBehaviour_Throwable_Grenade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_90C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNotifyEvent                      K2Node_Event_Notify;                               // 0x8(0xB8)(ConstParm, ContainsInstancedReference)
	class AActor*                                K2Node_Event_AnimInstancePawn;                     // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusAnimNotify*                     K2Node_DynamicCast_AsIcarus_Anim_Notify;           // 0xC8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


