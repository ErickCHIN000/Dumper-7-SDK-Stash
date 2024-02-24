#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x6B8 - 0x6B8)
// BlueprintGeneratedClass GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple.GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C
class UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C : public UGA_CreatureAbility_Ranged_DemonDeer_Bees_C
{
public:

	static class UClass* StaticClass();
	static class UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C* GetDefaultObj();

	void SpawnProjectiles(class UClass* ProjectileClass, const struct FTransform& ProjectileStart, const struct FVector& ProjectileVelocity, class ABP_CreatureBase_C* InstigatingCreature, double ProjectileDamage, class AActor* IntendedTarget, const struct FVector& StartingLocation, TArray<class UClass*>& ImpactGameplayEffects, TMap<class ABP_ProjectileBase_C*, struct FVector>* Projectiles, bool* bSuccess, double CurrentPitchOffset, TMap<int32, double> PitchOffsets, double CurrentSpreadOffset, TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL, TMap<int32, double> SpreadOffsets, TMap<int32, double> K2Node_MakeVariable_MakeVariableOutput, TMap<int32, double> K2Node_MakeVariable_MakeVariableOutput_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FS_ProjectileSourceData& K2Node_MakeStruct_S_ProjectileSourceData, int32 Temp_int_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast);
};

}


