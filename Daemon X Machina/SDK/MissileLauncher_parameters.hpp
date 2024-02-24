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

// 0xA8 (0xA8 - 0x0)
// Function MissileLauncher.MissileLauncher_C.ExecuteUbergraph_MissileLauncher
struct AMissileLauncher_C_ExecuteUbergraph_MissileLauncher_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_23E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AArsenalCharacter_C*                   K2Node_DynamicCast_AsArsenal_Character;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsPlayerControlled_ReturnValue;           // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FTransform>                    CallFunc_AttackWithTargetActor_spawnTransformList; // 0x20(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_AttackWithTargetActor_ownerVelocity;      // 0x30(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_240[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_AttackWithTargetActor_speedRandRateList;  // 0x40(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_AttackWithTargetActor_impactRandOffsetList; // 0x50(0x10)(ZeroConstructor, ReferenceParm)
	class AActor*                                CallFunc_GetLockOnTarget_Target;                   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FTransform>                    CallFunc_AttackWithTargetActor_spawnTransformList1; // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	struct FVector                               CallFunc_AttackWithTargetActor_ownerVelocity1;     // 0x78(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_244[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<float>                                CallFunc_AttackWithTargetActor_speedRandRateList1; // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FVector>                       CallFunc_AttackWithTargetActor_impactRandOffsetList1; // 0x98(0x10)(ZeroConstructor, ReferenceParm)
};

}
}


