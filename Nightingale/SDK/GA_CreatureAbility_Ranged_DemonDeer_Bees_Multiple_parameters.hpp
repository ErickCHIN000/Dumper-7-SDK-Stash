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

// 0x464 (0x464 - 0x0)
// Function GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple.GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C.SpawnProjectiles
struct UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C_SpawnProjectiles_Params
{
public:
	class UClass*                                ProjectileClass;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7303[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ProjectileStart;                                   // 0x10(0x60)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ProjectileVelocity;                                // 0x70(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    InstigatingCreature;                               // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       ProjectileDamage;                                  // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                IntendedTarget;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StartingLocation;                                  // 0xA0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UClass*>                        ImpactGameplayEffects;                             // 0xB8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TMap<class ABP_ProjectileBase_C*, struct FVector> Projectiles;                                       // 0xC8(0x50)(Parm, OutParm)
	bool                                         bSuccess;                                          // 0x118(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7334[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CurrentPitchOffset;                                // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<int32, double>                          PitchOffsets;                                      // 0x128(0x50)(Edit, BlueprintVisible)
	double                                       CurrentSpreadOffset;                               // 0x178(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL;                                      // 0x180(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TMap<int32, double>                          SpreadOffsets;                                     // 0x1D0(0x50)(Edit, BlueprintVisible)
	TMap<int32, double>                          K2Node_MakeVariable_MakeVariableOutput;            // 0x220(0x50)(None)
	TMap<int32, double>                          K2Node_MakeVariable_MakeVariableOutput_1;          // 0x270(0x50)(None)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GreaterGreater_VectorRotator_ReturnValue; // 0x2E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ProjectileSourceData               K2Node_MakeStruct_S_ProjectileSourceData;          // 0x300(0x131)(ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7375[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x438(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_737C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x440(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileBase_C*                  CallFunc_FinishSpawningActor_ReturnValue;          // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x451(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_73D1[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x454(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x458(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast; // 0x460(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


