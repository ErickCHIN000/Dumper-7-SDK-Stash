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
// Function Ability_Melee_Minstrel.Ability_Melee_Minstrel_C.DoHiltMod_Hit
struct UAbility_Melee_Minstrel_C_DoHiltMod_Hit_Params
{
public:
	class UGbxDamageType*                        DamageType;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamagedActor;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  Details;                                           // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
};

// 0x210 (0x210 - 0x0)
// Function Ability_Melee_Minstrel.Ability_Melee_Minstrel_C.ExecuteUbergraph_Ability_Melee_Minstrel
struct UAbility_Melee_Minstrel_C_ExecuteUbergraph_Ability_Melee_Minstrel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_409B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetAbilityOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorAimViewPoint_OutLocation;         // 0x10(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetActorAimViewPoint_OutRotation;         // 0x1C(0xC)(IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetValueOfAttribute_ReturnValue;          // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetForwardVector_ReturnValue;             // 0x2C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxDamageType*                        K2Node_Event_DamageType;                           // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamagedActor;                         // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCausedDamageDetails                  K2Node_Event_Details;                              // 0x48(0x60)(ContainsInstancedReference)
	struct FVector                               CallFunc_RandomUnitVectorInConeInDegrees_ReturnValue; // 0xA8(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xB4(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_RunEnvQueryForBestActor_ResultActor;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunEnvQueryForBestActor_ReturnValue;      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_40CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLightProjectileInitializationData    K2Node_MakeStruct_LightProjectileInitializationData; // 0xD0(0x140)(ContainsInstancedReference)
};

}
}


