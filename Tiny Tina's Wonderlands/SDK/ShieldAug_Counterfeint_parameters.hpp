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

// 0xB1 (0xB1 - 0x0)
// Function ShieldAug_Counterfeint.ShieldAug_Counterfeint_C.K2_TriggerEffect
struct UShieldAug_Counterfeint_C_K2_TriggerEffect_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference)
	struct FAugmentData                          StackData;                                         // 0x20(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	class AOakCharacter*                         Player;                                            // 0x58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AOakCharacter*                         K2Node_DynamicCast_AsOak_Character;                // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x78(0x10)(ZeroConstructor, ReferenceParm)
	class UGbxAbilityManagerComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43E0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxAbility*                           CallFunc_FindAbility_ReturnValue;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAbility_Counterfeint_C*               K2Node_DynamicCast_AsAbility_Counterfeint;         // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess1;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x61 (0x61 - 0x0)
// Function ShieldAug_Counterfeint.ShieldAug_Counterfeint_C.K2_NativeDelayCallback
struct UShieldAug_Counterfeint_C_K2_NativeDelayCallback_Params
{
public:
	class AShield*                               Shield;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAugmentData                          StackData;                                         // 0x8(0x38)(BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	class FName                                  DelayName;                                         // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStatusEffectRemoveSpec               K2Node_MakeStruct_StatusEffectRemoveSpec;          // 0x50(0x10)(NoDestructor)
	bool                                         CallFunc_RemoveStatusEffect_ReturnValue;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


