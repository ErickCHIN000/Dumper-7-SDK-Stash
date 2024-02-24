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

// 0x2E8 (0x2E8 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.SpawnMiniHawks
struct ULightProj_Spell_Hawk_Ricochet_C_SpawnMiniHawks_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       LocalEQS;                                          // 0x8(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FSpawnableSpellBasicData              CallFunc_GetSpellData_Res;                         // 0xC0(0x40)(NoDestructor)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue1;               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsGbx_Damage_Type;         // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17E0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x11C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x128(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x134(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue1;        // 0x140(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_GetInstigator_ReturnValue2;               // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x158(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDataTableValue_OutValue;               // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetDataTableValue_ReturnValue;            // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue1;            // 0x16C(0xC)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_FloatFloat_ReturnValue1;         // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_RunEnvQueryForBestActor_ResultActor;      // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RunEnvQueryForBestActor_ReturnValue;      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOakLightProjectileInitializationData K2Node_MakeStruct_OakLightProjectileInitializationData; // 0x190(0x158)(ContainsInstancedReference)
};

// 0xF1 (0xF1 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.ExecuteHawkEQS
struct ULightProj_Spell_Hawk_Ricochet_C_ExecuteHawkEQS_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ResultActors;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor)
	bool                                         ResultValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_184E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       LocalEQS;                                          // 0x20(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        CallFunc_RunEnvQueryForAllActors_ResultActors;     // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_RunEnvQueryForAllActors_ReturnValue;      // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x71 (0x71 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.GetElementalHawkAbility
struct ULightProj_Spell_Hawk_Ricochet_C_GetElementalHawkAbility_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbility_Spell_ElementalHawk_C*        Res;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGrenadeMod*                           OwningMod;                                         // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnableSpellBasicData              CallFunc_GetSpellData_Res;                         // 0x18(0x40)(NoDestructor)
	class UGbxAbilityManagerComponent*           CallFunc_GetComponentByClass_ReturnValue;          // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxAbility*                           CallFunc_FindAbility_ReturnValue;                  // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAbility_Spell_ElementalHawk_C*        K2Node_DynamicCast_AsAbility_Spell_Elemental_Hawk; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.GetSpellData
struct ULightProj_Spell_Hawk_Ricochet_C_GetSpellData_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpawnableSpellBasicData              Res;                                               // 0x8(0x40)(Parm, OutParm, NoDestructor)
	class USpellLightProjectile*                 K2Node_DynamicCast_AsSpell_Light_Projectile;       // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.TryNewHomingTarget
struct ULightProj_Spell_Hawk_Ricochet_C_TryNewHomingTarget_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetTarget_ReturnValue;                    // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAlive_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_FindHawkHomingTarget_HomingTarget;        // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindHawkHomingTarget_Res;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18D9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHoming_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF0 (0xF0 - 0x0)
// Function LightProj_Spell_Hawk_Ricochet.LightProj_Spell_Hawk_Ricochet_C.FindHawkHomingTarget
struct ULightProj_Spell_Hawk_Ricochet_C_FindHawkHomingTarget_Params
{
public:
	class ULightProjectile*                      Projectile;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                HomingTarget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Res;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_190A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       LocalEQS;                                          // 0x18(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<class AActor*>                        CallFunc_ExecuteHawkEQS_ResultActors;              // 0xD0(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_ExecuteHawkEQS_ResultValue;               // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1911[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


