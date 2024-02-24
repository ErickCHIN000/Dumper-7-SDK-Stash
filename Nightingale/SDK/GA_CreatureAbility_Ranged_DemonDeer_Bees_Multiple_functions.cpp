#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple.GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C
// (None)

class UClass* UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C");

	return Clss;
}


// GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple.Default__GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C* UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C*>(UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple.GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C.SpawnProjectiles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      ProjectileClass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  ProjectileStart                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ProjectileVelocity                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_CreatureBase_C*          InstigatingCreature                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             ProjectileDamage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     StartingLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              ImpactGameplayEffects                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TMap<class ABP_ProjectileBase_C*, struct FVector>Projectiles                                                      (Parm, OutParm)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CurrentPitchOffset                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, double>                PitchOffsets                                                     (Edit, BlueprintVisible)
// double                             CurrentSpreadOffset                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class ABP_ProjectileBase_C*, struct FVector>ProjectilesL                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// TMap<int32, double>                SpreadOffsets                                                    (Edit, BlueprintVisible)
// TMap<int32, double>                K2Node_MakeVariable_MakeVariableOutput                           (None)
// TMap<int32, double>                K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ProjectileSourceData     K2Node_MakeStruct_S_ProjectileSourceData                         (ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ABP_ProjectileBase_C*        CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Yaw_ImplicitCast                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeRotator_Pitch_ImplicitCast                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C::SpawnProjectiles(class UClass* ProjectileClass, const struct FTransform& ProjectileStart, const struct FVector& ProjectileVelocity, class ABP_CreatureBase_C* InstigatingCreature, double ProjectileDamage, class AActor* IntendedTarget, const struct FVector& StartingLocation, TArray<class UClass*>& ImpactGameplayEffects, TMap<class ABP_ProjectileBase_C*, struct FVector>* Projectiles, bool* bSuccess, double CurrentPitchOffset, TMap<int32, double> PitchOffsets, double CurrentSpreadOffset, TMap<class ABP_ProjectileBase_C*, struct FVector> ProjectilesL, TMap<int32, double> SpreadOffsets, TMap<int32, double> K2Node_MakeVariable_MakeVariableOutput, TMap<int32, double> K2Node_MakeVariable_MakeVariableOutput_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FS_ProjectileSourceData& K2Node_MakeStruct_S_ProjectileSourceData, int32 Temp_int_Variable, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_ProjectileBase_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MakeRotator_Yaw_ImplicitCast, float CallFunc_MakeRotator_Pitch_ImplicitCast, float K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C", "SpawnProjectiles");

	Params::UGA_CreatureAbility_Ranged_DemonDeer_Bees_Multiple_C_SpawnProjectiles_Params Parms{};

	Parms.ProjectileClass = ProjectileClass;
	Parms.ProjectileStart = ProjectileStart;
	Parms.ProjectileVelocity = ProjectileVelocity;
	Parms.InstigatingCreature = InstigatingCreature;
	Parms.ProjectileDamage = ProjectileDamage;
	Parms.IntendedTarget = IntendedTarget;
	Parms.StartingLocation = StartingLocation;
	Parms.ImpactGameplayEffects = ImpactGameplayEffects;
	Parms.CurrentPitchOffset = CurrentPitchOffset;
	Parms.PitchOffsets = PitchOffsets;
	Parms.CurrentSpreadOffset = CurrentSpreadOffset;
	Parms.ProjectilesL = ProjectilesL;
	Parms.SpreadOffsets = SpreadOffsets;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.K2Node_MakeStruct_S_ProjectileSourceData = K2Node_MakeStruct_S_ProjectileSourceData;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeRotator_Yaw_ImplicitCast = CallFunc_MakeRotator_Yaw_ImplicitCast;
	Parms.CallFunc_MakeRotator_Pitch_ImplicitCast = CallFunc_MakeRotator_Pitch_ImplicitCast;
	Parms.K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast = K2Node_MakeStruct_ProjectileDamage_35_6F7B2C90499376C84C4B638F2A609613_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Projectiles != nullptr)
		*Projectiles = Parms.Projectiles;

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


