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

// 0xF9 (0xF9 - 0x0)
// Function BP_HitableBehaviour_Tree.BP_HitableBehaviour_Tree_C.ConsumeHit
struct UBP_HitableBehaviour_Tree_C_ConsumeHit_Params
{
public:
	class UActorState*                           ActorStateIn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusDamagePacket                   DamagePacket;                                      // 0x8(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ConsumeHit_ReturnValue;                   // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EIcarusDamageType                 CallFunc_GetDamageTypeFromEvent_ReturnValue;       // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xE3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_TreeBase_C*                        K2Node_DynamicCast_AsBP_Tree_Base;                 // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10A (0x10A - 0x0)
// Function BP_HitableBehaviour_Tree.BP_HitableBehaviour_Tree_C.CanConsumeHit
struct UBP_HitableBehaviour_Tree_C_CanConsumeHit_Params
{
public:
	class UActorState*                           ActorStateIn;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIcarusDamagePacket                   DamagePacket;                                      // 0x8(0xD8)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6FD[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 CallFunc_GetGameplayTagContainer_OutContainer;     // 0xE8(0x20)(None)
	bool                                         CallFunc_GetGameplayTagContainer_ReturnValue;      // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


