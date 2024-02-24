#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnemyCharacter.EnemyCharacter_C
// (Actor, Pawn)

class UClass* AEnemyCharacter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnemyCharacter_C");

	return Clss;
}


// EnemyCharacter_C EnemyCharacter.Default__EnemyCharacter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEnemyCharacter_C* AEnemyCharacter_C::GetDefaultObj()
{
	static class AEnemyCharacter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEnemyCharacter_C*>(AEnemyCharacter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_IsInParryableState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsParryableState_                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::Enemy_IsInParryableState(bool* IsParryableState_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_IsInParryableState");

	Params::AEnemyCharacter_C_Enemy_IsInParryableState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsParryableState_ != nullptr)
		*IsParryableState_ = Parms.IsParryableState_;

}


// Function EnemyCharacter.EnemyCharacter_C.BossCrucix_IsSimulatingLittleBro
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::BossCrucix_IsSimulatingLittleBro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BossCrucix_IsSimulatingLittleBro");

	Params::AEnemyCharacter_C_BossCrucix_IsSimulatingLittleBro_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.BossCharacterHadern_IsHadern
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHadern                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::BossCharacterHadern_IsHadern(bool* IsHadern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BossCharacterHadern_IsHadern");

	Params::AEnemyCharacter_C_BossCharacterHadern_IsHadern_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IsHadern != nullptr)
		*IsHadern = Parms.IsHadern;

}


// Function EnemyCharacter.EnemyCharacter_C.BossCryptCharacter_GetThrowAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ThrowAttack                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::BossCryptCharacter_GetThrowAttack(bool* ThrowAttack)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BossCryptCharacter_GetThrowAttack");

	Params::AEnemyCharacter_C_BossCryptCharacter_GetThrowAttack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ThrowAttack != nullptr)
		*ThrowAttack = Parms.ThrowAttack;

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyCommon_SkipDeathBlowReactionAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldSkip                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::EnemyCommon_SkipDeathBlowReactionAnimation(bool* ShouldSkip)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyCommon_SkipDeathBlowReactionAnimation");

	Params::AEnemyCharacter_C_EnemyCommon_SkipDeathBlowReactionAnimation_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldSkip != nullptr)
		*ShouldSkip = Parms.ShouldSkip;

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyCommon_GetHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::EnemyCommon_GetHealth(float* Health, float* MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyCommon_GetHealth");

	Params::AEnemyCharacter_C_EnemyCommon_GetHealth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Health != nullptr)
		*Health = Parms.Health;

	if (MaxHealth != nullptr)
		*MaxHealth = Parms.MaxHealth;

}


// Function EnemyCharacter.EnemyCharacter_C.HandleRemoveFromTimeline
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Removed_                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::HandleRemoveFromTimeline(bool* Removed_, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HandleRemoveFromTimeline");

	Params::AEnemyCharacter_C_HandleRemoveFromTimeline_Params Parms{};

	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Removed_ != nullptr)
		*Removed_ = Parms.Removed_;

}


// Function EnemyCharacter.EnemyCharacter_C.CathedralExplosionFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Local_Loc                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UForceFeedbackComponent*     CallFunc_SpawnForceFeedbackAtLocation_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CathedralExplosionFX(const struct FVector& Local_Loc, class UForceFeedbackComponent* CallFunc_SpawnForceFeedbackAtLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CathedralExplosionFX");

	Params::AEnemyCharacter_C_CathedralExplosionFX_Params Parms{};

	Parms.Local_Loc = Local_Loc;
	Parms.CallFunc_SpawnForceFeedbackAtLocation_ReturnValue = CallFunc_SpawnForceFeedbackAtLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.HandleCathFreeze
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::HandleCathFreeze(class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HandleCathFreeze");

	Params::AEnemyCharacter_C_HandleCathFreeze_Params Parms{};

	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.GetCurrentStormModeDifficulty
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Local_DataTable                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StormMode_GetDifficulty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

class UDataTable* AEnemyCharacter_C::GetCurrentStormModeDifficulty(class UDataTable* Local_DataTable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_StormMode_GetDifficulty_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetCurrentStormModeDifficulty");

	Params::AEnemyCharacter_C_GetCurrentStormModeDifficulty_Params Parms{};

	Parms.Local_DataTable = Local_DataTable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetDifficulty_ReturnValue = CallFunc_StormMode_GetDifficulty_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.HandleCathExplosion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HitActor                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   TracedEnemies                                                    (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_DirectionTo2D_Dir                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item_1                                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::HandleCathExplosion(class AActor* HitActor, const TArray<class AEnemyCharacter_C*>& TracedEnemies, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVector& CallFunc_DirectionTo2D_Dir, float CallFunc_ApplyDamage_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, const struct FHitResult& CallFunc_Array_Get_Item_1, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HandleCathExplosion");

	Params::AEnemyCharacter_C_HandleCathExplosion_Params Parms{};

	Parms.HitActor = HitActor;
	Parms.TracedEnemies = TracedEnemies;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DirectionTo2D_Dir = CallFunc_DirectionTo2D_Dir;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.StormMode_DropItemChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IncreaseChance_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_ShellDye           CallFunc_StormMode_GetCurrentShadeForCharacter_Shade             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::StormMode_DropItemChance(bool* IncreaseChance_, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_ShellDye CallFunc_StormMode_GetCurrentShadeForCharacter_Shade, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StormMode_DropItemChance");

	Params::AEnemyCharacter_C_StormMode_DropItemChance_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetCurrentShadeForCharacter_Shade = CallFunc_StormMode_GetCurrentShadeForCharacter_Shade;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IncreaseChance_ != nullptr)
		*IncreaseChance_ = Parms.IncreaseChance_;

}


// Function EnemyCharacter.EnemyCharacter_C.Death_HandleStormModeMilestones
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::Death_HandleStormModeMilestones(bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6, bool K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Death_HandleStormModeMilestones");

	Params::AEnemyCharacter_C_Death_HandleStormModeMilestones_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_4;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_5;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.IsRangedEnemy?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::IsRangedEnemy_(bool K2Node_SwitchName_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "IsRangedEnemy?");

	Params::AEnemyCharacter_C_IsRangedEnemy__Params Parms{};

	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyDodgeSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnemyDodgeSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyDodgeSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.IsEnemyDisabled?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::IsEnemyDisabled_(class AController* CallFunc_GetController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "IsEnemyDisabled?");

	Params::AEnemyCharacter_C_IsEnemyDisabled__Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.LoadEnemySaveState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_StormModeActive                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsLevelPhaseValid                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               Local_GM                                                         (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, struct FMapSaveState>K2Node_Select_Default                                            (None)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMapSaveState               CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEnemySaveState             CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::LoadEnemySaveState(bool Local_StormModeActive, bool Local_IsLevelPhaseValid, class AGameplayGM_C* Local_GM, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, TMap<class FName, struct FMapSaveState> K2Node_Select_Default, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue_1, const struct FEnemySaveState& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "LoadEnemySaveState");

	Params::AEnemyCharacter_C_LoadEnemySaveState_Params Parms{};

	Parms.Local_StormModeActive = Local_StormModeActive;
	Parms.Local_IsLevelPhaseValid = Local_IsLevelPhaseValid;
	Parms.Local_GM = Local_GM;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue_1 = CallFunc_GetGameMode_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_GM_1 = K2Node_DynamicCast_AsGameplay_GM_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.CustomOnEnemyFadeOutMat
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::CustomOnEnemyFadeOutMat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CustomOnEnemyFadeOutMat");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.CustomOnEnemyFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CustomOnEnemyFadeOut(float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CustomOnEnemyFadeOut");

	Params::AEnemyCharacter_C_CustomOnEnemyFadeOut_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.SetEnemyOpacityOnMat_FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetEyesComponent_Mesh                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetEnemyOpacityOnMat_FadeIn(float InputPin, class UStaticMeshComponent* CallFunc_GetEyesComponent_Mesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetEnemyOpacityOnMat_FadeIn");

	Params::AEnemyCharacter_C_SetEnemyOpacityOnMat_FadeIn_Params Parms{};

	Parms.InputPin = InputPin;
	Parms.CallFunc_GetEyesComponent_Mesh = CallFunc_GetEyesComponent_Mesh;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.DebugFadeInEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void AEnemyCharacter_C::DebugFadeInEnemy(const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DebugFadeInEnemy");

	Params::AEnemyCharacter_C_DebugFadeInEnemy_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.SetEnemyOpacityOnMat_FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Opacity                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetEyesComponent_Mesh                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkMeshAtkComponent_SkMeshAtkComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetEnemyOpacityOnMat_FadeOut(float Opacity, float Local_Opacity, class UStaticMeshComponent* CallFunc_GetEyesComponent_Mesh, class USkeletalMeshComponent* CallFunc_GetSkMeshAtkComponent_SkMeshAtkComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetEnemyOpacityOnMat_FadeOut");

	Params::AEnemyCharacter_C_SetEnemyOpacityOnMat_FadeOut_Params Parms{};

	Parms.Opacity = Opacity;
	Parms.Local_Opacity = Local_Opacity;
	Parms.CallFunc_GetEyesComponent_Mesh = CallFunc_GetEyesComponent_Mesh;
	Parms.CallFunc_GetSkMeshAtkComponent_SkMeshAtkComponent = CallFunc_GetSkMeshAtkComponent_SkMeshAtkComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.GetEyesComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        Mesh                                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetEyesComponent(class UStaticMeshComponent** Mesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetEyesComponent");

	Params::AEnemyCharacter_C_GetEyesComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Mesh != nullptr)
		*Mesh = Parms.Mesh;

}


// Function EnemyCharacter.EnemyCharacter_C.RemoveEnemyIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::RemoveEnemyIndicator(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "RemoveEnemyIndicator");

	Params::AEnemyCharacter_C_RemoveEnemyIndicator_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PhysicalHit_UpdateBlendWeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PhysicalHit_BlendWeight                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PhysicalHit_UpdateBlendWeight(float PhysicalHit_BlendWeight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PhysicalHit_UpdateBlendWeight");

	Params::AEnemyCharacter_C_PhysicalHit_UpdateBlendWeight_Params Parms{};

	Parms.PhysicalHit_BlendWeight = PhysicalHit_BlendWeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.CreateEnemyIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_EnemyIndicator_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CreateEnemyIndicator(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_EnemyIndicator_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CreateEnemyIndicator");

	Params::AEnemyCharacter_C_CreateEnemyIndicator_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.WasKilledThisFrame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bYes                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::WasKilledThisFrame(bool* bYes, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "WasKilledThisFrame");

	Params::AEnemyCharacter_C_WasKilledThisFrame_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bYes != nullptr)
		*bYes = Parms.bYes;

}


// Function EnemyCharacter.EnemyCharacter_C.SetBodiesAlwaysSimulating
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetBodiesAlwaysSimulating(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetBodiesAlwaysSimulating");

	Params::AEnemyCharacter_C_SetBodiesAlwaysSimulating_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.StopPhysicalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECollisionEnabled       CallFunc_GetCollisionEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::StopPhysicalHit(bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ECollisionEnabled CallFunc_GetCollisionEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StopPhysicalHit");

	Params::AEnemyCharacter_C_StopPhysicalHit_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCollisionEnabled_ReturnValue = CallFunc_GetCollisionEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ShouldWeSimulateHitReaction
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        bone                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Simulate_                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Local_Bone                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ShouldWeSimulateHitReaction(class FName bone, const struct FVector& ImpactNormal, bool* Simulate_, class FName Local_Bone, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ShouldWeSimulateHitReaction");

	Params::AEnemyCharacter_C_ShouldWeSimulateHitReaction_Params Parms{};

	Parms.bone = bone;
	Parms.ImpactNormal = ImpactNormal;
	Parms.Local_Bone = Local_Bone;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

	if (Simulate_ != nullptr)
		*Simulate_ = Parms.Simulate_;

}


// Function EnemyCharacter.EnemyCharacter_C.SpawnBodyDeathParticleFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::SpawnBodyDeathParticleFX(const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SpawnBodyDeathParticleFX");

	Params::AEnemyCharacter_C_SpawnBodyDeathParticleFX_Params Parms{};

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.GetResolveMultiplierOnBeingHit
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Multiplier                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetResolveMultiplierOnBeingHit(float* Multiplier, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetResolveMultiplierOnBeingHit");

	Params::AEnemyCharacter_C_GetResolveMultiplierOnBeingHit_Params Parms{};

	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Multiplier != nullptr)
		*Multiplier = Parms.Multiplier;

}


// Function EnemyCharacter.EnemyCharacter_C.ShouldTakePoiseDamageOnDefelect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ShouldTakePoiseDamage                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::ShouldTakePoiseDamageOnDefelect(bool* ShouldTakePoiseDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ShouldTakePoiseDamageOnDefelect");

	Params::AEnemyCharacter_C_ShouldTakePoiseDamageOnDefelect_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShouldTakePoiseDamage != nullptr)
		*ShouldTakePoiseDamage = Parms.ShouldTakePoiseDamage;

}


// Function EnemyCharacter.EnemyCharacter_C.CrossRiposteDamageMultiplier
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              DamageIn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DamageOut                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CrossRiposteDamageMultiplier(float DamageIn, float* DamageOut, bool Temp_bool_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CrossRiposteDamageMultiplier");

	Params::AEnemyCharacter_C_CrossRiposteDamageMultiplier_Params Parms{};

	Parms.DamageIn = DamageIn;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (DamageOut != nullptr)
		*DamageOut = Parms.DamageOut;

}


// Function EnemyCharacter.EnemyCharacter_C.HandleCrossRiposteEmitter
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::HandleCrossRiposteEmitter(float Alpha, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HandleCrossRiposteEmitter");

	Params::AEnemyCharacter_C_HandleCrossRiposteEmitter_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.HandleCrossRiposteDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::HandleCrossRiposteDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HandleCrossRiposteDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayFootstepAudio
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepSocket         FootstepSocket                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PlayFootstepAudio_Success                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::PlayFootstepAudio(enum class EFootstepSocket FootstepSocket, float VolumeMultiplier, float PitchMultiplier, bool* Success, bool CallFunc_PlayFootstepAudio_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayFootstepAudio");

	Params::AEnemyCharacter_C_PlayFootstepAudio_Params Parms{};

	Parms.FootstepSocket = FootstepSocket;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.CallFunc_PlayFootstepAudio_Success = CallFunc_PlayFootstepAudio_Success;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function EnemyCharacter.EnemyCharacter_C.IsPlayingParryRiposteReactOrDead?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::IsPlayingParryRiposteReactOrDead_(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "IsPlayingParryRiposteReactOrDead?");

	Params::AEnemyCharacter_C_IsPlayingParryRiposteReactOrDead__Params Parms{};

	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.AggroBossOnPlayerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AggroBossOnPlayerDamage(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_MakeLiteralName_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AggroBossOnPlayerDamage");

	Params::AEnemyCharacter_C_AggroBossOnPlayerDamage_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayUniversalDeathSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PlayUniversalDeathSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayUniversalDeathSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.CanSeePlayer?
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::CanSeePlayer_(TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CanSeePlayer?");

	Params::AEnemyCharacter_C_CanSeePlayer__Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetCustomAttackWait
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetCustomAttackWait(float FloatValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetCustomAttackWait");

	Params::AEnemyCharacter_C_AI_SetCustomAttackWait_Params Parms{};

	Parms.FloatValue = FloatValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayerDistanceToTetherCenter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AEnemyCharacter_C::PlayerDistanceToTetherCenter(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayerDistanceToTetherCenter");

	Params::AEnemyCharacter_C_PlayerDistanceToTetherCenter_Params Parms{};

	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.DistanceToTetherCenter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float AEnemyCharacter_C::DistanceToTetherCenter(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DistanceToTetherCenter");

	Params::AEnemyCharacter_C_DistanceToTetherCenter_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetWaitWhenDamaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FloatValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetWaitWhenDamaged(float FloatValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetWaitWhenDamaged");

	Params::AEnemyCharacter_C_AI_SetWaitWhenDamaged_Params Parms{};

	Parms.FloatValue = FloatValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.DropItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OffsetFromDefualtDropLoc                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Local_Transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// struct FVector                     Local_Location                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetBoltDropChance_Chance                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGlowing_Pickup_Actor_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRangedEnemy__ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StormMode_AskForASeed_Seed                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGlowing_Pickup_Actor_C*     CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AConfigurable_Glowing_Pickup_StormMode_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class URuneRandomizerComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_RandomizedObject_C>K2Node_DynamicCast_AsBPI_Randomized_Object_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::DropItem(class FName ID, const struct FVector& OffsetFromDefualtDropLoc, const struct FTransform& Local_Transform, const struct FVector& Local_Location, class FName Local_ID, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetBoltDropChance_Chance, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class AGlowing_Pickup_Actor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsRangedEnemy__ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_StormMode_AskForASeed_Seed, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, class AGlowing_Pickup_Actor_C* CallFunc_FinishSpawningActor_ReturnValue_1, class AConfigurable_Glowing_Pickup_StormMode_C* CallFunc_FinishSpawningActor_ReturnValue_2, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_1, bool K2Node_DynamicCast_bSuccess_3, class URuneRandomizerComponent_C* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IBPI_RandomizedObject_C> K2Node_DynamicCast_AsBPI_Randomized_Object_2, bool K2Node_DynamicCast_bSuccess_4, class FName Temp_name_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_5, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, bool CallFunc_StormModeIsActive_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DropItem");

	Params::AEnemyCharacter_C_DropItem_Params Parms{};

	Parms.ID = ID;
	Parms.OffsetFromDefualtDropLoc = OffsetFromDefualtDropLoc;
	Parms.Local_Transform = Local_Transform;
	Parms.Local_Location = Local_Location;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBoltDropChance_Chance = CallFunc_GetBoltDropChance_Chance;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsRangedEnemy__ReturnValue = CallFunc_IsRangedEnemy__ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_AskForASeed_Seed = CallFunc_StormMode_AskForASeed_Seed;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object = K2Node_DynamicCast_AsBPI_Randomized_Object;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object_1 = K2Node_DynamicCast_AsBPI_Randomized_Object_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Randomized_Object_2 = K2Node_DynamicCast_AsBPI_Randomized_Object_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_MakeLiteralByte_ReturnValue_1 = CallFunc_MakeLiteralByte_ReturnValue_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.IsAlone
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              DistanceThreshold                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bAlone                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetSquaredDistanceTo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::IsAlone(float DistanceThreshold, bool* bAlone, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "IsAlone");

	Params::AEnemyCharacter_C_IsAlone_Params Parms{};

	Parms.DistanceThreshold = DistanceThreshold;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSquaredDistanceTo_ReturnValue = CallFunc_GetSquaredDistanceTo_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (bAlone != nullptr)
		*bAlone = Parms.bAlone;

}


// Function EnemyCharacter.EnemyCharacter_C.GetSkMeshAtkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USkeletalMeshComponent*      SkMeshAtkComponent                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetSkMeshAtkComponent(class USkeletalMeshComponent** SkMeshAtkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetSkMeshAtkComponent");

	Params::AEnemyCharacter_C_GetSkMeshAtkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkMeshAtkComponent != nullptr)
		*SkMeshAtkComponent = Parms.SkMeshAtkComponent;

}


// Function EnemyCharacter.EnemyCharacter_C.GetGlimpseDropTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScaledCapsuleHalfHeight_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

struct FTransform AEnemyCharacter_C::GetGlimpseDropTransform(const struct FTransform& CallFunc_GetTransform_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetGlimpseDropTransform");

	Params::AEnemyCharacter_C_GetGlimpseDropTransform_Params Parms{};

	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetScaledCapsuleHalfHeight_ReturnValue = CallFunc_GetScaledCapsuleHalfHeight_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.PlayEnemyFootstepParticle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        InSocketName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_9                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable_10                                          (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingle_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingle_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_GetSurfaceType_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PlayEnemyFootstepParticle(class FName InSocketName, const struct FVector& Scale, enum class EPhysicalSurface Temp_byte_Variable, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable_1, class UParticleSystem* Temp_object_Variable_2, class UParticleSystem* Temp_object_Variable_3, class UParticleSystem* Temp_object_Variable_4, class UParticleSystem* Temp_object_Variable_5, class UParticleSystem* Temp_object_Variable_6, class UParticleSystem* Temp_object_Variable_7, class UParticleSystem* Temp_object_Variable_8, class UParticleSystem* Temp_object_Variable_9, TArray<class AActor*>& Temp_object_Variable_10, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayEnemyFootstepParticle");

	Params::AEnemyCharacter_C_PlayEnemyFootstepParticle_Params Parms{};

	Parms.InSocketName = InSocketName;
	Parms.Scale = Scale;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.Temp_object_Variable_9 = Temp_object_Variable_9;
	Parms.Temp_object_Variable_10 = Temp_object_Variable_10;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingle_OutHit = CallFunc_LineTraceSingle_OutHit;
	Parms.CallFunc_LineTraceSingle_ReturnValue = CallFunc_LineTraceSingle_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetSurfaceType_ReturnValue = CallFunc_GetSurfaceType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ShouldPlayDamageAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageType*                 Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USwordRiposteDamage_C*       K2Node_DynamicCast_AsSword_Riposte_Damage                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAxeRiposteDamage_C*         K2Node_DynamicCast_AsAxe_Riposte_Damage                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKatanasRiposteDamage_C*     K2Node_DynamicCast_AsKatanas_Riposte_Damage                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHammerRiposteDamage_C*      K2Node_DynamicCast_AsHammer_Riposte_Damage                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaffRiposteDamage_C*       K2Node_DynamicCast_AsStaff_Riposte_Damage                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::ShouldPlayDamageAnimation(class UDamageType* DamageType, bool* bShouldPlayDeathAnim, class UDamageType* Local_Damage, class USwordRiposteDamage_C* K2Node_DynamicCast_AsSword_Riposte_Damage, bool K2Node_DynamicCast_bSuccess, class UAxeRiposteDamage_C* K2Node_DynamicCast_AsAxe_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_1, class UKatanasRiposteDamage_C* K2Node_DynamicCast_AsKatanas_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_2, class UHammerRiposteDamage_C* K2Node_DynamicCast_AsHammer_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_3, class UStaffRiposteDamage_C* K2Node_DynamicCast_AsStaff_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ShouldPlayDamageAnimation");

	Params::AEnemyCharacter_C_ShouldPlayDamageAnimation_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.Local_Damage = Local_Damage;
	Parms.K2Node_DynamicCast_AsSword_Riposte_Damage = K2Node_DynamicCast_AsSword_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAxe_Riposte_Damage = K2Node_DynamicCast_AsAxe_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsKatanas_Riposte_Damage = K2Node_DynamicCast_AsKatanas_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsHammer_Riposte_Damage = K2Node_DynamicCast_AsHammer_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsStaff_Riposte_Damage = K2Node_DynamicCast_AsStaff_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldPlayDeathAnim != nullptr)
		*bShouldPlayDeathAnim = Parms.bShouldPlayDeathAnim;

}


// Function EnemyCharacter.EnemyCharacter_C.ShouldPlayDeathAnimtion
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDamageType*                 Local_Damage                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USwordRiposteDamage_C*       K2Node_DynamicCast_AsSword_Riposte_Damage                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAxeRiposteDamage_C*         K2Node_DynamicCast_AsAxe_Riposte_Damage                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKatanasRiposteDamage_C*     K2Node_DynamicCast_AsKatanas_Riposte_Damage                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHammerRiposteDamage_C*      K2Node_DynamicCast_AsHammer_Riposte_Damage                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStaffRiposteDamage_C*       K2Node_DynamicCast_AsStaff_Riposte_Damage                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::ShouldPlayDeathAnimtion(class UDamageType* DamageType, bool* bShouldPlayDeathAnim, class UDamageType* Local_Damage, class USwordRiposteDamage_C* K2Node_DynamicCast_AsSword_Riposte_Damage, bool K2Node_DynamicCast_bSuccess, class UAxeRiposteDamage_C* K2Node_DynamicCast_AsAxe_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_1, class UKatanasRiposteDamage_C* K2Node_DynamicCast_AsKatanas_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_2, class UHammerRiposteDamage_C* K2Node_DynamicCast_AsHammer_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_3, class UStaffRiposteDamage_C* K2Node_DynamicCast_AsStaff_Riposte_Damage, bool K2Node_DynamicCast_bSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ShouldPlayDeathAnimtion");

	Params::AEnemyCharacter_C_ShouldPlayDeathAnimtion_Params Parms{};

	Parms.DamageType = DamageType;
	Parms.Local_Damage = Local_Damage;
	Parms.K2Node_DynamicCast_AsSword_Riposte_Damage = K2Node_DynamicCast_AsSword_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsAxe_Riposte_Damage = K2Node_DynamicCast_AsAxe_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsKatanas_Riposte_Damage = K2Node_DynamicCast_AsKatanas_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsHammer_Riposte_Damage = K2Node_DynamicCast_AsHammer_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsStaff_Riposte_Damage = K2Node_DynamicCast_AsStaff_Riposte_Damage;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

	if (bShouldPlayDeathAnim != nullptr)
		*bShouldPlayDeathAnim = Parms.bShouldPlayDeathAnim;

}


// Function EnemyCharacter.EnemyCharacter_C.DropRandomLoot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDropSomething                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Row_ID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_DropItem_                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemDrop>           Local_Drop                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// float                              RandomNumber                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Counter                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_SumTotal                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SumWeight                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// struct FItemDrop                   CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_DropItemChance_IncreaseChance_                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDrop                   CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemDrop                   CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEnemyLoot                  CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::DropRandomLoot(bool* bDropSomething, class FName* Row_ID, bool Local_DropItem_, const TArray<struct FItemDrop>& Local_Drop, float RandomNumber, float Counter, float Local_SumTotal, float SumWeight, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const struct FItemDrop& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_RandomFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, bool CallFunc_StormMode_DropItemChance_IncreaseChance_, float K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, const struct FItemDrop& CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemDrop& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FEnemyLoot& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_4, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_RandomFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DropRandomLoot");

	Params::AEnemyCharacter_C_DropRandomLoot_Params Parms{};

	Parms.Local_DropItem_ = Local_DropItem_;
	Parms.Local_Drop = Local_Drop;
	Parms.RandomNumber = RandomNumber;
	Parms.Counter = Counter;
	Parms.Local_SumTotal = Local_SumTotal;
	Parms.SumWeight = SumWeight;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_StormMode_DropItemChance_IncreaseChance_ = CallFunc_StormMode_DropItemChance_IncreaseChance_;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_4 = CallFunc_Add_FloatFloat_ReturnValue_4;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_5 = CallFunc_Add_FloatFloat_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (bDropSomething != nullptr)
		*bDropSomething = Parms.bDropSomething;

	if (Row_ID != nullptr)
		*Row_ID = Parms.Row_ID;

}


// Function EnemyCharacter.EnemyCharacter_C.LoadBalanceData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  Local_DataTable                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  CallFunc_GetCurrentStormModeDifficulty_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable_8                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FEnemyBalance               CallFunc_GetDataTableRowFromName_OutRow                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::LoadBalanceData(class UDataTable* Local_DataTable, int32 Temp_int_Variable, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, bool Temp_bool_Variable, class UDataTable* Temp_object_Variable_7, class UDataTable* CallFunc_GetCurrentStormModeDifficulty_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_StormModeIsActive_ReturnValue, bool Temp_bool_Variable_1, class UDataTable* Temp_object_Variable_8, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UDataTable* K2Node_Select_Default_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FEnemyBalance& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "LoadBalanceData");

	Params::AEnemyCharacter_C_LoadBalanceData_Params Parms{};

	Parms.Local_DataTable = Local_DataTable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_GetCurrentStormModeDifficulty_ReturnValue = CallFunc_GetCurrentStormModeDifficulty_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_object_Variable_8 = Temp_object_Variable_8;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetShouldBasicStrafe
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldStrafe_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetShouldBasicStrafe(bool ShouldStrafe_, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetShouldBasicStrafe");

	Params::AEnemyCharacter_C_AI_SetShouldBasicStrafe_Params Parms{};

	Parms.ShouldStrafe_ = ShouldStrafe_;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.EnableStandardRagdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnableStandardRagdoll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnableStandardRagdoll");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SelectRandomAttack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              AttackCount                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Repeat2ChanceModifier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Repeat3ChanceModifier                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              SelectedAttack                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaybeThis                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SelectRandomAttack(int32 AttackCount, float Repeat2ChanceModifier, float Repeat3ChanceModifier, int32* SelectedAttack, int32 MaybeThis, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue_1, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SelectRandomAttack");

	Params::AEnemyCharacter_C_SelectRandomAttack_Params Parms{};

	Parms.AttackCount = AttackCount;
	Parms.Repeat2ChanceModifier = Repeat2ChanceModifier;
	Parms.Repeat3ChanceModifier = Repeat3ChanceModifier;
	Parms.MaybeThis = MaybeThis;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SelectedAttack != nullptr)
		*SelectedAttack = Parms.SelectedAttack;

}


// Function EnemyCharacter.EnemyCharacter_C.SelectAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DistanceFromPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::SelectAttack(float DistanceFromPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SelectAttack");

	Params::AEnemyCharacter_C_SelectAttack_Params Parms{};

	Parms.DistanceFromPlayer = DistanceFromPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.CanReachPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanReach                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNavigationPath*             CallFunc_FindPathToLocationSynchronously_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::CanReachPlayer(bool* bCanReach, class APawn* CallFunc_GetPlayerPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UNavigationPath* CallFunc_FindPathToLocationSynchronously_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CanReachPlayer");

	Params::AEnemyCharacter_C_CanReachPlayer_Params Parms{};

	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_FindPathToLocationSynchronously_ReturnValue = CallFunc_FindPathToLocationSynchronously_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanReach != nullptr)
		*bCanReach = Parms.bCanReach;

}


// Function EnemyCharacter.EnemyCharacter_C.GetTauntAnimation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UAnimMontage*                TauntAnim                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetTauntAnimation(class UAnimMontage** TauntAnim, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UAnimMontage* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetTauntAnimation");

	Params::AEnemyCharacter_C_GetTauntAnimation_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (TauntAnim != nullptr)
		*TauntAnim = Parms.TauntAnim;

}


// Function EnemyCharacter.EnemyCharacter_C.AI_GetPairedAttackInstanceSynced
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::AI_GetPairedAttackInstanceSynced(class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_GetPairedAttackInstanceSynced");

	Params::AEnemyCharacter_C_AI_GetPairedAttackInstanceSynced_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetSelectedPairedAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SelectedPairedAttack_                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetSelectedPairedAttack(bool SelectedPairedAttack_, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetSelectedPairedAttack");

	Params::AEnemyCharacter_C_AI_SetSelectedPairedAttack_Params Parms{};

	Parms.SelectedPairedAttack_ = SelectedPairedAttack_;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayRunAwayMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::PlayRunAwayMontage(float CallFunc_PlayAnimMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayRunAwayMontage");

	Params::AEnemyCharacter_C_PlayRunAwayMontage_Params Parms{};

	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_AbortCurrentAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_AbortCurrentAttack(class AController* CallFunc_GetController_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_AbortCurrentAttack");

	Params::AEnemyCharacter_C_AI_AbortCurrentAttack_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetCurrentAttackDistance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetCurrentAttackDistance(float Distance, class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetCurrentAttackDistance");

	Params::AEnemyCharacter_C_AI_SetCurrentAttackDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReduceHealth
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHealth                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ReduceHealth(float Delta, float* NewHealth, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReduceHealth");

	Params::AEnemyCharacter_C_ReduceHealth_Params Parms{};

	Parms.Delta = Delta;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewHealth != nullptr)
		*NewHealth = Parms.NewHealth;

}


// Function EnemyCharacter.EnemyCharacter_C.UpdateMaterialBloodParam
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     CallFunc_GetChildrenComponents_Children                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              K2Node_DynamicCast_AsMesh_Component                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::UpdateMaterialBloodParam(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UMeshComponent* K2Node_DynamicCast_AsMesh_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UpdateMaterialBloodParam");

	Params::AEnemyCharacter_C_UpdateMaterialBloodParam_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_GetChildrenComponents_Children = CallFunc_GetChildrenComponents_Children;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsMesh_Component = K2Node_DynamicCast_AsMesh_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayDeathMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PlayDeathMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayDeathMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetCurrentTargetAsPlayerOnAggro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_DynamicCast_AsActor                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetCurrentTargetAsPlayerOnAggro(class AController* CallFunc_GetController_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetCurrentTargetAsPlayerOnAggro");

	Params::AEnemyCharacter_C_SetCurrentTargetAsPlayerOnAggro_Params Parms{};

	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsActor = K2Node_DynamicCast_AsActor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayHitReactionMontage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PlayHitReactionMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayHitReactionMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.GetOffHandComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        OffhandComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetOffHandComponent(class UStaticMeshComponent** OffhandComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetOffHandComponent");

	Params::AEnemyCharacter_C_GetOffHandComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OffhandComponent != nullptr)
		*OffhandComponent = Parms.OffhandComponent;

}


// Function EnemyCharacter.EnemyCharacter_C.UpdateCurrentMontagePlayLength
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PlayLengthAtDefaultPlaybackSpeed                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScaledPlayRate_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayLength_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void AEnemyCharacter_C::UpdateCurrentMontagePlayLength(float* PlayLengthAtDefaultPlaybackSpeed, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, float CallFunc_GetScaledPlayRate_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetPlayLength_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UpdateCurrentMontagePlayLength");

	Params::AEnemyCharacter_C_UpdateCurrentMontagePlayLength_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_GetScaledPlayRate_ReturnValue = CallFunc_GetScaledPlayRate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayLength_ReturnValue = CallFunc_GetPlayLength_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (PlayLengthAtDefaultPlaybackSpeed != nullptr)
		*PlayLengthAtDefaultPlaybackSpeed = Parms.PlayLengthAtDefaultPlaybackSpeed;

}


// Function EnemyCharacter.EnemyCharacter_C.SetWeaponVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetWeaponVisibility(bool Visible_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetWeaponVisibility");

	Params::AEnemyCharacter_C_SetWeaponVisibility_Params Parms{};

	Parms.Visible_ = Visible_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.KillAfterDelay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 Instigator                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::KillAfterDelay(float Delay, float BaseDamage, class AController* Instigator, const struct FHitResult& HitInfo, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "KillAfterDelay");

	Params::AEnemyCharacter_C_KillAfterDelay_Params Parms{};

	Parms.Delay = Delay;
	Parms.BaseDamage = BaseDamage;
	Parms.Instigator = Instigator;
	Parms.HitInfo = HitInfo;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ForceEnemyAttack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ForceEnemyAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ForceEnemyAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SaveEnemyState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Died_                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_StormModeActive                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameModeBase*               CallFunc_GetGameMode_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayGM_C*               K2Node_DynamicCast_AsGameplay_GM                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, struct FMapSaveState>K2Node_Select_Default                                            (None)
// struct FMapSaveState               CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SaveEnemyState(bool Died_, bool Local_StormModeActive, bool Temp_bool_Variable, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class AGameModeBase* CallFunc_GetGameMode_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class AGameplayGM_C* K2Node_DynamicCast_AsGameplay_GM, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, TMap<class FName, struct FMapSaveState> K2Node_Select_Default, const struct FMapSaveState& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SaveEnemyState");

	Params::AEnemyCharacter_C_SaveEnemyState_Params Parms{};

	Parms.Died_ = Died_;
	Parms.Local_StormModeActive = Local_StormModeActive;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameMode_ReturnValue = CallFunc_GetGameMode_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_GM = K2Node_DynamicCast_AsGameplay_GM;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetBlackBoardIsStunned
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStunned_                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetBlackBoardIsStunned(bool IsStunned_, const class FString& Reason, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& K2Node_Select_Default, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetBlackBoardIsStunned");

	Params::AEnemyCharacter_C_AI_SetBlackBoardIsStunned_Params Parms{};

	Parms.IsStunned_ = IsStunned_;
	Parms.Reason = Reason;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.KnockDown
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WasKnockedDown_                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::KnockDown(bool* WasKnockedDown_, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "KnockDown");

	Params::AEnemyCharacter_C_KnockDown_Params Parms{};

	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (WasKnockedDown_ != nullptr)
		*WasKnockedDown_ = Parms.WasKnockedDown_;

}


// Function EnemyCharacter.EnemyCharacter_C.CheckForHeadbutt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CheckForHeadbutt(class AActor* OtherActor, const struct FHitResult& Hit, float CallFunc_PlayAnimMontage_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CheckForHeadbutt");

	Params::AEnemyCharacter_C_CheckForHeadbutt_Params Parms{};

	Parms.OtherActor = OtherActor;
	Parms.Hit = Hit;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayDeathSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PlayDeathSound(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayDeathSound");

	Params::AEnemyCharacter_C_PlayDeathSound_Params Parms{};

	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayWasHitSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PlayWasHitSound(const struct FVector& HitLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayWasHitSound");

	Params::AEnemyCharacter_C_PlayWasHitSound_Params Parms{};

	Parms.HitLocation = HitLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.SetWasDamagedAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::SetWasDamagedAnimations(class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetWasDamagedAnimations");

	Params::AEnemyCharacter_C_SetWasDamagedAnimations_Params Parms{};

	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.UseSeeThroughWallsMat?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SetSeeThroughWallsMat                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::UseSeeThroughWallsMat_(bool SetSeeThroughWallsMat, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UseSeeThroughWallsMat?");

	Params::AEnemyCharacter_C_UseSeeThroughWallsMat__Params Parms{};

	Parms.SetSeeThroughWallsMat = SetSeeThroughWallsMat;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ShouldBreakDestructible?
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ShouldBreakDestructible_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ShouldBreakDestructible?");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SpawnDeathBloodFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SpawnDeathBloodFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SpawnDeathBloodFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetBlackboardWasDamaged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AI_SetBlackboardWasDamaged(class FName CallFunc_MakeLiteralName_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetBlackboardWasDamaged");

	Params::AEnemyCharacter_C_AI_SetBlackboardWasDamaged_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AggroOnPlayerDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      PlayerToAggro                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFromLute_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AController* CallFunc_GetController_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AggroOnPlayerDamage");

	Params::AEnemyCharacter_C_AggroOnPlayerDamage_Params Parms{};

	Parms.PlayerToAggro = PlayerToAggro;
	Parms.bIsFromLute_ = bIsFromLute_;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.RollChanceToBlock
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PercentChance                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              RollResult                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AEnemyCharacter_C::RollChanceToBlock(int32 PercentChance, int32 RollResult, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "RollChanceToBlock");

	Params::AEnemyCharacter_C_RollChanceToBlock_Params Parms{};

	Parms.PercentChance = PercentChance;
	Parms.RollResult = RollResult;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EnemyCharacter.EnemyCharacter_C.CheckForDropBees
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_P_Bees_C*                CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FHitResult>          CallFunc_SphereTraceMultiForObjects_OutHits                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_SphereTraceMultiForObjects_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::CheckForDropBees(class AActor* Killer, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& K2Node_MakeArray_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABP_P_Bees_C* CallFunc_FinishSpawningActor_ReturnValue, TArray<struct FHitResult>& CallFunc_SphereTraceMultiForObjects_OutHits, bool CallFunc_SphereTraceMultiForObjects_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FHitResult& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CheckForDropBees");

	Params::AEnemyCharacter_C_CheckForDropBees_Params Parms{};

	Parms.Killer = Killer;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_SphereTraceMultiForObjects_OutHits = CallFunc_SphereTraceMultiForObjects_OutHits;
	Parms.CallFunc_SphereTraceMultiForObjects_ReturnValue = CallFunc_SphereTraceMultiForObjects_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.SpawnEssence
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SpawnEssence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SpawnEssence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DropGlimpses
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_DropGlimpse                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Local_ChanceBoost                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_ChanceTotal                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_RandomNumber                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GlimpsesToDrop                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_2                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetGlimpseDropTransform_ReturnValue                     (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Glimpse_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::DropGlimpses(class AActor* Killer, bool Local_DropGlimpse, float Local_ChanceBoost, float Local_ChanceTotal, int32 Local_RandomNumber, int32 GlimpsesToDrop, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Variable, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Conv_FloatToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, int32 CallFunc_RandomIntegerInRange_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, const struct FTransform& CallFunc_GetGlimpseDropTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AUsable_Glimpse_C* CallFunc_FinishSpawningActor_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, int32 K2Node_Select_Default_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DropGlimpses");

	Params::AEnemyCharacter_C_DropGlimpses_Params Parms{};

	Parms.Killer = Killer;
	Parms.Local_DropGlimpse = Local_DropGlimpse;
	Parms.Local_ChanceBoost = Local_ChanceBoost;
	Parms.Local_ChanceTotal = Local_ChanceTotal;
	Parms.Local_RandomNumber = Local_RandomNumber;
	Parms.GlimpsesToDrop = GlimpsesToDrop;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_2 = CallFunc_Conv_FloatToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetGlimpseDropTransform_ReturnValue = CallFunc_GetGlimpseDropTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.DropTar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              GlimpsesToDrop                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetParryStacksTarBonus_TarBonus                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::DropTar(class AActor* Killer, int32 GlimpsesToDrop, float CallFunc_Conv_IntToFloat_ReturnValue, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, int32 CallFunc_GetParryStacksTarBonus_TarBonus, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DropTar");

	Params::AEnemyCharacter_C_DropTar_Params Parms{};

	Parms.Killer = Killer;
	Parms.GlimpsesToDrop = GlimpsesToDrop;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetParryStacksTarBonus_TarBonus = CallFunc_GetParryStacksTarBonus_TarBonus;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.GetName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Name                                                             (Parm, OutParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void AEnemyCharacter_C::GetName(class FText* Name, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetName");

	Params::AEnemyCharacter_C_GetName_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Name != nullptr)
		*Name = Parms.Name;

}


// Function EnemyCharacter.EnemyCharacter_C.GetMeleeTraceEnd
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceEnd                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetMeleeAtkComponent_MeleeAtkComponent                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetComponentBounds_Origin                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetComponentBounds_BoxExtent                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetComponentBounds_SphereRadius                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetUpVector_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetMeleeTraceEnd(class FName OptionalSocketOverride, struct FVector* TraceEnd, class UStaticMeshComponent* CallFunc_GetMeleeAtkComponent_MeleeAtkComponent, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FVector& CallFunc_GetUpVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetMeleeTraceEnd");

	Params::AEnemyCharacter_C_GetMeleeTraceEnd_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetMeleeAtkComponent_MeleeAtkComponent = CallFunc_GetMeleeAtkComponent_MeleeAtkComponent;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_GetComponentBounds_Origin = CallFunc_GetComponentBounds_Origin;
	Parms.CallFunc_GetComponentBounds_BoxExtent = CallFunc_GetComponentBounds_BoxExtent;
	Parms.CallFunc_GetComponentBounds_SphereRadius = CallFunc_GetComponentBounds_SphereRadius;
	Parms.CallFunc_GetUpVector_ReturnValue = CallFunc_GetUpVector_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceEnd != nullptr)
		*TraceEnd = std::move(Parms.TraceEnd);

}


// Function EnemyCharacter.EnemyCharacter_C.GetMeleeTraceStart
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        OptionalSocketOverride                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     TraceStart                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetMeleeAtkComponent_MeleeAtkComponent                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_SelectVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetMeleeTraceStart(class FName OptionalSocketOverride, struct FVector* TraceStart, class UStaticMeshComponent* CallFunc_GetMeleeAtkComponent_MeleeAtkComponent, bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_SelectVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetMeleeTraceStart");

	Params::AEnemyCharacter_C_GetMeleeTraceStart_Params Parms{};

	Parms.OptionalSocketOverride = OptionalSocketOverride;
	Parms.CallFunc_GetMeleeAtkComponent_MeleeAtkComponent = CallFunc_GetMeleeAtkComponent_MeleeAtkComponent;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SelectVector_ReturnValue = CallFunc_SelectVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TraceStart != nullptr)
		*TraceStart = std::move(Parms.TraceStart);

}


// Function EnemyCharacter.EnemyCharacter_C.GetMeleeAtkComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UStaticMeshComponent*        MeleeAtkComponent                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetMeleeAtkComponent(class UStaticMeshComponent** MeleeAtkComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetMeleeAtkComponent");

	Params::AEnemyCharacter_C_GetMeleeAtkComponent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MeleeAtkComponent != nullptr)
		*MeleeAtkComponent = Parms.MeleeAtkComponent;

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyDeath
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Killer                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldPlayDeathAnim                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     DropOffset                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalShouldPlayDeathAnim                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorInt_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DropRandomLoot_bDropSomething                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_DropRandomLoot_Row_ID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::EnemyDeath(class AActor* Killer, bool bShouldPlayDeathAnim, const struct FVector& DropOffset, bool LocalShouldPlayDeathAnim, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Multiply_VectorInt_ReturnValue, bool CallFunc_DropRandomLoot_bDropSomething, class FName CallFunc_DropRandomLoot_Row_ID, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_StormModeIsActive_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyDeath");

	Params::AEnemyCharacter_C_EnemyDeath_Params Parms{};

	Parms.Killer = Killer;
	Parms.bShouldPlayDeathAnim = bShouldPlayDeathAnim;
	Parms.DropOffset = DropOffset;
	Parms.LocalShouldPlayDeathAnim = LocalShouldPlayDeathAnim;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_Multiply_VectorInt_ReturnValue = CallFunc_Multiply_VectorInt_ReturnValue;
	Parms.CallFunc_DropRandomLoot_bDropSomething = CallFunc_DropRandomLoot_bDropSomething;
	Parms.CallFunc_DropRandomLoot_Row_ID = CallFunc_DropRandomLoot_Row_ID;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.GetDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetDamage(float* Damage, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetDamage");

	Params::AEnemyCharacter_C_GetDamage_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}


// Function EnemyCharacter.EnemyCharacter_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::UserConstructionScript(const class FString& CallFunc_GetObjectName_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UserConstructionScript");

	Params::AEnemyCharacter_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Start__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Start__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Start__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Start__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Start__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Start__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Duration__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Duration__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Duration__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Duration__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Duration__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Duration__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Reverse__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Reverse__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Reverse__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_TimeFreeze_Reverse__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_TimeFreeze_Reverse__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_TimeFreeze_Reverse__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit__FireImpulse__EventFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit__FireImpulse__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit__FireImpulse__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit_ResetBodies__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit_ResetBodies__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit_ResetBodies__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit_ResetBodies__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit_ResetBodies__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit_ResetBodies__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit_Smooth__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit_Smooth__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit_Smooth__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit_Smooth__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit_Smooth__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit_Smooth__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_PhysicalHit_Smooth__FireImpulse__EventFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_PhysicalHit_Smooth__FireImpulse__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_PhysicalHit_Smooth__FireImpulse__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.FadeIn__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FadeIn__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FadeIn__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.FadeIn__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FadeIn__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FadeIn__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_OpacityFade__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_OpacityFade__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_OpacityFade__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_OpacityFade__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_OpacityFade__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_OpacityFade__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_2__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_2__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_2__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Timeline_2__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Timeline_2__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Timeline_2__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFail_0276DCE44AA67C3DAB8011B4FADEE1D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFail_0276DCE44AA67C3DAB8011B4FADEE1D2(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFail_0276DCE44AA67C3DAB8011B4FADEE1D2");

	Params::AEnemyCharacter_C_OnFail_0276DCE44AA67C3DAB8011B4FADEE1D2_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnSuccess_0276DCE44AA67C3DAB8011B4FADEE1D2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnSuccess_0276DCE44AA67C3DAB8011B4FADEE1D2(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnSuccess_0276DCE44AA67C3DAB8011B4FADEE1D2");

	Params::AEnemyCharacter_C_OnSuccess_0276DCE44AA67C3DAB8011B4FADEE1D2_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_B5F8C3C54C103EEF6C261D881EA7CF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_B5F8C3C54C103EEF6C261D881EA7CF03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_B5F8C3C54C103EEF6C261D881EA7CF03");

	Params::AEnemyCharacter_C_OnNotifyEnd_B5F8C3C54C103EEF6C261D881EA7CF03_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_B5F8C3C54C103EEF6C261D881EA7CF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_B5F8C3C54C103EEF6C261D881EA7CF03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_B5F8C3C54C103EEF6C261D881EA7CF03");

	Params::AEnemyCharacter_C_OnNotifyBegin_B5F8C3C54C103EEF6C261D881EA7CF03_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_B5F8C3C54C103EEF6C261D881EA7CF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_B5F8C3C54C103EEF6C261D881EA7CF03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_B5F8C3C54C103EEF6C261D881EA7CF03");

	Params::AEnemyCharacter_C_OnInterrupted_B5F8C3C54C103EEF6C261D881EA7CF03_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_B5F8C3C54C103EEF6C261D881EA7CF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_B5F8C3C54C103EEF6C261D881EA7CF03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_B5F8C3C54C103EEF6C261D881EA7CF03");

	Params::AEnemyCharacter_C_OnBlendOut_B5F8C3C54C103EEF6C261D881EA7CF03_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_B5F8C3C54C103EEF6C261D881EA7CF03
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_B5F8C3C54C103EEF6C261D881EA7CF03(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_B5F8C3C54C103EEF6C261D881EA7CF03");

	Params::AEnemyCharacter_C_OnCompleted_B5F8C3C54C103EEF6C261D881EA7CF03_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFail_355C30AB4B023F33B518A4A3A97B3446
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFail_355C30AB4B023F33B518A4A3A97B3446(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFail_355C30AB4B023F33B518A4A3A97B3446");

	Params::AEnemyCharacter_C_OnFail_355C30AB4B023F33B518A4A3A97B3446_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnSuccess_355C30AB4B023F33B518A4A3A97B3446
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnSuccess_355C30AB4B023F33B518A4A3A97B3446(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnSuccess_355C30AB4B023F33B518A4A3A97B3446");

	Params::AEnemyCharacter_C_OnSuccess_355C30AB4B023F33B518A4A3A97B3446_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFail_97DB20B34BA5D45AABDB7384922AC763
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFail_97DB20B34BA5D45AABDB7384922AC763(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFail_97DB20B34BA5D45AABDB7384922AC763");

	Params::AEnemyCharacter_C_OnFail_97DB20B34BA5D45AABDB7384922AC763_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnSuccess_97DB20B34BA5D45AABDB7384922AC763
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnSuccess_97DB20B34BA5D45AABDB7384922AC763(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnSuccess_97DB20B34BA5D45AABDB7384922AC763");

	Params::AEnemyCharacter_C_OnSuccess_97DB20B34BA5D45AABDB7384922AC763_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFail_F3429DC040EF06310A94A0AC9C89CF42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFail_F3429DC040EF06310A94A0AC9C89CF42(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFail_F3429DC040EF06310A94A0AC9C89CF42");

	Params::AEnemyCharacter_C_OnFail_F3429DC040EF06310A94A0AC9C89CF42_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnSuccess_F3429DC040EF06310A94A0AC9C89CF42
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnSuccess_F3429DC040EF06310A94A0AC9C89CF42(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnSuccess_F3429DC040EF06310A94A0AC9C89CF42");

	Params::AEnemyCharacter_C_OnSuccess_F3429DC040EF06310A94A0AC9C89CF42_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_7E8AC98F411420BFE6D624AB7848E473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_7E8AC98F411420BFE6D624AB7848E473(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_7E8AC98F411420BFE6D624AB7848E473");

	Params::AEnemyCharacter_C_OnNotifyEnd_7E8AC98F411420BFE6D624AB7848E473_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_7E8AC98F411420BFE6D624AB7848E473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_7E8AC98F411420BFE6D624AB7848E473(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_7E8AC98F411420BFE6D624AB7848E473");

	Params::AEnemyCharacter_C_OnNotifyBegin_7E8AC98F411420BFE6D624AB7848E473_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_7E8AC98F411420BFE6D624AB7848E473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_7E8AC98F411420BFE6D624AB7848E473(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_7E8AC98F411420BFE6D624AB7848E473");

	Params::AEnemyCharacter_C_OnInterrupted_7E8AC98F411420BFE6D624AB7848E473_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_7E8AC98F411420BFE6D624AB7848E473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_7E8AC98F411420BFE6D624AB7848E473(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_7E8AC98F411420BFE6D624AB7848E473");

	Params::AEnemyCharacter_C_OnBlendOut_7E8AC98F411420BFE6D624AB7848E473_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_7E8AC98F411420BFE6D624AB7848E473
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_7E8AC98F411420BFE6D624AB7848E473(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_7E8AC98F411420BFE6D624AB7848E473");

	Params::AEnemyCharacter_C_OnCompleted_7E8AC98F411420BFE6D624AB7848E473_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_E15B9DCC441332C8D7C3DA801A118DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_E15B9DCC441332C8D7C3DA801A118DDF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_E15B9DCC441332C8D7C3DA801A118DDF");

	Params::AEnemyCharacter_C_OnNotifyEnd_E15B9DCC441332C8D7C3DA801A118DDF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_E15B9DCC441332C8D7C3DA801A118DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_E15B9DCC441332C8D7C3DA801A118DDF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_E15B9DCC441332C8D7C3DA801A118DDF");

	Params::AEnemyCharacter_C_OnNotifyBegin_E15B9DCC441332C8D7C3DA801A118DDF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_E15B9DCC441332C8D7C3DA801A118DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_E15B9DCC441332C8D7C3DA801A118DDF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_E15B9DCC441332C8D7C3DA801A118DDF");

	Params::AEnemyCharacter_C_OnInterrupted_E15B9DCC441332C8D7C3DA801A118DDF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_E15B9DCC441332C8D7C3DA801A118DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_E15B9DCC441332C8D7C3DA801A118DDF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_E15B9DCC441332C8D7C3DA801A118DDF");

	Params::AEnemyCharacter_C_OnBlendOut_E15B9DCC441332C8D7C3DA801A118DDF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_E15B9DCC441332C8D7C3DA801A118DDF
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_E15B9DCC441332C8D7C3DA801A118DDF(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_E15B9DCC441332C8D7C3DA801A118DDF");

	Params::AEnemyCharacter_C_OnCompleted_E15B9DCC441332C8D7C3DA801A118DDF_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_B08AA0B74B944C4EC1010786E72F9EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_B08AA0B74B944C4EC1010786E72F9EF2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_B08AA0B74B944C4EC1010786E72F9EF2");

	Params::AEnemyCharacter_C_OnNotifyEnd_B08AA0B74B944C4EC1010786E72F9EF2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_B08AA0B74B944C4EC1010786E72F9EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_B08AA0B74B944C4EC1010786E72F9EF2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_B08AA0B74B944C4EC1010786E72F9EF2");

	Params::AEnemyCharacter_C_OnNotifyBegin_B08AA0B74B944C4EC1010786E72F9EF2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_B08AA0B74B944C4EC1010786E72F9EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_B08AA0B74B944C4EC1010786E72F9EF2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_B08AA0B74B944C4EC1010786E72F9EF2");

	Params::AEnemyCharacter_C_OnInterrupted_B08AA0B74B944C4EC1010786E72F9EF2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_B08AA0B74B944C4EC1010786E72F9EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_B08AA0B74B944C4EC1010786E72F9EF2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_B08AA0B74B944C4EC1010786E72F9EF2");

	Params::AEnemyCharacter_C_OnBlendOut_B08AA0B74B944C4EC1010786E72F9EF2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_B08AA0B74B944C4EC1010786E72F9EF2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_B08AA0B74B944C4EC1010786E72F9EF2(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_B08AA0B74B944C4EC1010786E72F9EF2");

	Params::AEnemyCharacter_C_OnCompleted_B08AA0B74B944C4EC1010786E72F9EF2_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_FDEEC4F4457F87F5F51A6AA026B9CD29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_FDEEC4F4457F87F5F51A6AA026B9CD29(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_FDEEC4F4457F87F5F51A6AA026B9CD29");

	Params::AEnemyCharacter_C_OnNotifyEnd_FDEEC4F4457F87F5F51A6AA026B9CD29_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_FDEEC4F4457F87F5F51A6AA026B9CD29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_FDEEC4F4457F87F5F51A6AA026B9CD29(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_FDEEC4F4457F87F5F51A6AA026B9CD29");

	Params::AEnemyCharacter_C_OnNotifyBegin_FDEEC4F4457F87F5F51A6AA026B9CD29_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_FDEEC4F4457F87F5F51A6AA026B9CD29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_FDEEC4F4457F87F5F51A6AA026B9CD29(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_FDEEC4F4457F87F5F51A6AA026B9CD29");

	Params::AEnemyCharacter_C_OnInterrupted_FDEEC4F4457F87F5F51A6AA026B9CD29_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_FDEEC4F4457F87F5F51A6AA026B9CD29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_FDEEC4F4457F87F5F51A6AA026B9CD29(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_FDEEC4F4457F87F5F51A6AA026B9CD29");

	Params::AEnemyCharacter_C_OnBlendOut_FDEEC4F4457F87F5F51A6AA026B9CD29_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_FDEEC4F4457F87F5F51A6AA026B9CD29
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_FDEEC4F4457F87F5F51A6AA026B9CD29(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_FDEEC4F4457F87F5F51A6AA026B9CD29");

	Params::AEnemyCharacter_C_OnCompleted_FDEEC4F4457F87F5F51A6AA026B9CD29_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyEnd_964551C749E37D1CC9A71A804E139056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyEnd_964551C749E37D1CC9A71A804E139056(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyEnd_964551C749E37D1CC9A71A804E139056");

	Params::AEnemyCharacter_C_OnNotifyEnd_964551C749E37D1CC9A71A804E139056_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnNotifyBegin_964551C749E37D1CC9A71A804E139056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnNotifyBegin_964551C749E37D1CC9A71A804E139056(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnNotifyBegin_964551C749E37D1CC9A71A804E139056");

	Params::AEnemyCharacter_C_OnNotifyBegin_964551C749E37D1CC9A71A804E139056_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnInterrupted_964551C749E37D1CC9A71A804E139056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnInterrupted_964551C749E37D1CC9A71A804E139056(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnInterrupted_964551C749E37D1CC9A71A804E139056");

	Params::AEnemyCharacter_C_OnInterrupted_964551C749E37D1CC9A71A804E139056_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnBlendOut_964551C749E37D1CC9A71A804E139056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnBlendOut_964551C749E37D1CC9A71A804E139056(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnBlendOut_964551C749E37D1CC9A71A804E139056");

	Params::AEnemyCharacter_C_OnBlendOut_964551C749E37D1CC9A71A804E139056_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCompleted_964551C749E37D1CC9A71A804E139056
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NotifyName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCompleted_964551C749E37D1CC9A71A804E139056(class FName NotifyName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCompleted_964551C749E37D1CC9A71A804E139056");

	Params::AEnemyCharacter_C_OnCompleted_964551C749E37D1CC9A71A804E139056_Params Parms{};

	Parms.NotifyName = NotifyName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFail_3532A0CD46E650548D9D54BA7801F3EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFail_3532A0CD46E650548D9D54BA7801F3EE(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFail_3532A0CD46E650548D9D54BA7801F3EE");

	Params::AEnemyCharacter_C_OnFail_3532A0CD46E650548D9D54BA7801F3EE_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnSuccess_3532A0CD46E650548D9D54BA7801F3EE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPathFollowingResult    MovementResult                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnSuccess_3532A0CD46E650548D9D54BA7801F3EE(enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnSuccess_3532A0CD46E650548D9D54BA7801F3EE");

	Params::AEnemyCharacter_C_OnSuccess_3532A0CD46E650548D9D54BA7801F3EE_Params Parms{};

	Parms.MovementResult = MovementResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyBlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnemyBlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyBlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayAttackMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAnimMontage*                MontageToPlay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PlayRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartingPosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        StartingSection                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PlayAttackMontage(class UAnimMontage* MontageToPlay, float PlayRate, float StartingPosition, class FName StartingSection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayAttackMontage");

	Params::AEnemyCharacter_C_PlayAttackMontage_Params Parms{};

	Parms.MontageToPlay = MontageToPlay;
	Parms.PlayRate = PlayRate;
	Parms.StartingPosition = StartingPosition;
	Parms.StartingSection = StartingSection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.BlendOutMontage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BlendOutMontage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BlendOutMontage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ApplyDamageToHitActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DamageToApply                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ApplyDamageToHitActor(float DamageToApply)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ApplyDamageToHitActor");

	Params::AEnemyCharacter_C_ApplyDamageToHitActor_Params Parms{};

	Parms.DamageToApply = DamageToApply;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.EnablePlayerReachTest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnablePlayerReachTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnablePlayerReachTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.StartBloodHitTraceTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StartBloodHitTraceTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StartBloodHitTraceTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.BloodHitTrace
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BloodHitTrace()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BloodHitTrace");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ResetBloodTraceTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ResetBloodTraceTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ResetBloodTraceTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ModifyHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ModifyHealth(float Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ModifyHealth");

	Params::AEnemyCharacter_C_ModifyHealth_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnCheck()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCheck");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DH_ShowEnemyHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DH_ShowEnemyHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DH_ShowEnemyHealth");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.UpdateEnemyHPDebugDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::UpdateEnemyHPDebugDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UpdateEnemyHPDebugDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Time_Freeze_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DurationBonus                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::Time_Freeze_Start(float DurationBonus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Time_Freeze_Start");

	Params::AEnemyCharacter_C_Time_Freeze_Start_Params Parms{};

	Parms.DurationBonus = DurationBonus;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.Time_Freeze_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Time_Freeze_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Time_Freeze_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Time_Freeze_Reverse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Time_Freeze_Reverse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Time_Freeze_Reverse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.TimeFreezeAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::TimeFreezeAlpha(float Alpha)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "TimeFreezeAlpha");

	Params::AEnemyCharacter_C_TimeFreezeAlpha_Params Parms{};

	Parms.Alpha = Alpha;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PhysicalHitReaction
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        bone                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactNormal                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::PhysicalHitReaction(class FName bone, const struct FVector& ImpactNormal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PhysicalHitReaction");

	Params::AEnemyCharacter_C_PhysicalHitReaction_Params Parms{};

	Parms.bone = bone;
	Parms.ImpactNormal = ImpactNormal;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.PhysicalHitResetBodies
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PhysicalHitResetBodies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PhysicalHitResetBodies");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetWasDeadLastFrameNextFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SetWasDeadLastFrameNextFrame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetWasDeadLastFrameNextFrame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.GetKicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Kicker                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     KickerLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ImpactLocation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Impulse                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::GetKicked(class AActor* Kicker, const struct FVector& KickerLocation, const struct FVector& ImpactLocation, const struct FVector& Impulse)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetKicked");

	Params::AEnemyCharacter_C_GetKicked_Params Parms{};

	Parms.Kicker = Kicker;
	Parms.KickerLocation = KickerLocation;
	Parms.ImpactLocation = ImpactLocation;
	Parms.Impulse = Impulse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEnemyCharacter_C::OnLanded(struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnLanded");

	Params::AEnemyCharacter_C_OnLanded_Params Parms{};

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ResetStun
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ResetStun()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ResetStun");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetSignificanceBP
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EDHSignificanceLevel    SignificanceLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetSignificanceBP");

	Params::AEnemyCharacter_C_SetSignificanceBP_Params Parms{};

	Parms.SignificanceLevel = SignificanceLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyCommon_StopPhysicalHit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnemyCommon_StopPhysicalHit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyCommon_StopPhysicalHit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PhysicalHit_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PhysicalHit_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PhysicalHit_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PhysicalHit_Impulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PhysicalHit_Impulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PhysicalHit_Impulse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetPatrollingSplineActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PatrollingSpline_C*      PatrollingSplineActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::SetPatrollingSplineActor(class ABP_PatrollingSpline_C* PatrollingSplineActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetPatrollingSplineActor");

	Params::AEnemyCharacter_C_SetPatrollingSplineActor_Params Parms{};

	Parms.PatrollingSplineActor = PatrollingSplineActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.TauntPlayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::TauntPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "TauntPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_DeAggroPlayer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Enemy_DeAggroPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_DeAggroPlayer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyDisabled_BindOnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDied                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::EnemyDisabled_BindOnDamage(bool bDied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyDisabled_BindOnDamage");

	Params::AEnemyCharacter_C_EnemyDisabled_BindOnDamage_Params Parms{};

	Parms.bDied = bDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.MeleeBasicAttackAnimSequence
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::MeleeBasicAttackAnimSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "MeleeBasicAttackAnimSequence");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_ReEnable
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Enemy_ReEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_ReEnable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_DeAggro_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Enemy_DeAggro_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_DeAggro_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTimeFreeze_Begin
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnTimeFreeze_Begin()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTimeFreeze_Begin");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTimeFreeze_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnTimeFreeze_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTimeFreeze_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_StoneSkinTimeline_End
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Enemy_StoneSkinTimeline_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_StoneSkinTimeline_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Enemy_StoneSkinTimeline_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::Enemy_StoneSkinTimeline_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Enemy_StoneSkinTimeline_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.BossCrucix_SimLittleBro_Stop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BossCrucix_SimLittleBro_Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BossCrucix_SimLittleBro_Stop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.BossCrucix_SimLittleBro_Start
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BossCrucix_SimLittleBro_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BossCrucix_SimLittleBro_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFadeOutAggroedEnemies_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           EnemyToIgnore                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnFadeOutAggroedEnemies_Set(class AEnemyCharacter_C* EnemyToIgnore, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFadeOutAggroedEnemies_Set");

	Params::AEnemyCharacter_C_OnFadeOutAggroedEnemies_Set_Params Parms{};

	Parms.EnemyToIgnore = EnemyToIgnore;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFadeOutAggroedEnemies_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnFadeOutAggroedEnemies_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFadeOutAggroedEnemies_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnForceReturnToSpawner_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnForceReturnToSpawner_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnForceReturnToSpawner_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnForceReturnToSpawner_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AEnemyCharacter_C*           IgnoreSelf                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Reason                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnForceReturnToSpawner_Set(class AEnemyCharacter_C* IgnoreSelf, const class FString& Reason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnForceReturnToSpawner_Set");

	Params::AEnemyCharacter_C_OnForceReturnToSpawner_Set_Params Parms{};

	Parms.IgnoreSelf = IgnoreSelf;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnHideEnemyAI_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::OnHideEnemyAI_Set(bool Hidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnHideEnemyAI_Set");

	Params::AEnemyCharacter_C_OnHideEnemyAI_Set_Params Parms{};

	Parms.Hidden = Hidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnHideEnemyAI_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnHideEnemyAI_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnHideEnemyAI_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DestroySelfOnCathedralChaliceConsume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DestroySelfOnCathedralChaliceConsume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DestroySelfOnCathedralChaliceConsume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetupCathedralDestroyOnChaliceBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SetupCathedralDestroyOnChaliceBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetupCathedralDestroyOnChaliceBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.RestartAILogic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::RestartAILogic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "RestartAILogic");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DisableEnemyAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DisableEnemyAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DisableEnemyAI");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ResetEnemyAI
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RestartLogic_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::ResetEnemyAI(bool RestartLogic_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ResetEnemyAI");

	Params::AEnemyCharacter_C_ResetEnemyAI_Params Parms{};

	Parms.RestartLogic_ = RestartLogic_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReactivateOnPlayerFinishedCrawling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ReactivateOnPlayerFinishedCrawling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReactivateOnPlayerFinishedCrawling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DeAggroOnPlayerCrawling
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DeAggroOnPlayerCrawling()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DeAggroOnPlayerCrawling");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetupPlayerCrawlBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SetupPlayerCrawlBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetupPlayerCrawlBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnPauseEnemyAI_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeDilation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnPauseEnemyAI_Set(float TimeDilation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnPauseEnemyAI_Set");

	Params::AEnemyCharacter_C_OnPauseEnemyAI_Set_Params Parms{};

	Parms.TimeDilation = TimeDilation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnPauseEnemyAI_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnPauseEnemyAI_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnPauseEnemyAI_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnPlayerDead
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnPlayerDead()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnPlayerDead");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.SetupPlayerDeadBinding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::SetupPlayerDeadBinding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "SetupPlayerDeadBinding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayAggroAlert
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PlayAggroAlert()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayAggroAlert");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.PlayPreAggroPose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::PlayPreAggroPose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "PlayPreAggroPose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCheckDespawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnCheckDespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCheckDespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnWasAggroed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnWasAggroed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnWasAggroed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.InitAfterSpawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAdvancedEnemySpawner_C*     SpawnerRef                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        UniqueId                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            PhaseToSpawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPermanentlyDeadOnceKilled_                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointA                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bShouldWander_                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              PatrolPointB                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              AggroRadius                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   TriggerToActivateOnAggro                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ShouldPatrol_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  SpawnTransform                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "InitAfterSpawn");

	Params::AEnemyCharacter_C_InitAfterSpawn_Params Parms{};

	Parms.SpawnerRef = SpawnerRef;
	Parms.UniqueId = UniqueId;
	Parms.PhaseToSpawn = PhaseToSpawn;
	Parms.bPermanentlyDeadOnceKilled_ = bPermanentlyDeadOnceKilled_;
	Parms.PatrolPointA = PatrolPointA;
	Parms.bShouldWander_ = bShouldWander_;
	Parms.PatrolPointB = PatrolPointB;
	Parms.AggroRadius = AggroRadius;
	Parms.TriggerToActivateOnAggro = TriggerToActivateOnAggro;
	Parms.ShouldPatrol_ = ShouldPatrol_;
	Parms.SpawnTransform = SpawnTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.BreakEnemyShield
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BreakEnemyShield()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BreakEnemyShield");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.LoadBehaviorTree
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::LoadBehaviorTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "LoadBehaviorTree");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.GetEnemySavedState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::GetEnemySavedState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "GetEnemySavedState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEnemyCharacter_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature");

	Params::AEnemyCharacter_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature_Params Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.StopSlowFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StopSlowFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StopSlowFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.StartSlowFunction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StartSlowFunction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StartSlowFunction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.HitByLifePotion
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::HitByLifePotion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HitByLifePotion");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DestroyActorAfterKillTriggerFade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DestroyActorAfterKillTriggerFade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DestroyActorAfterKillTriggerFade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DeathByKillVolume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DeathByKillVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DeathByKillVolume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.EnemyHitDeflected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::EnemyHitDeflected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "EnemyHitDeflected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.UnFreeze
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::UnFreeze()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UnFreeze");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Freeze
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              FreezeDuration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::Freeze(float FreezeDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Freeze");

	Params::AEnemyCharacter_C_Freeze_Params Parms{};

	Parms.FreezeDuration = FreezeDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.UnFreezeOnDamage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::UnFreezeOnDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UnFreezeOnDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.FadeInOnSpawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FadeInOnSpawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FadeInOnSpawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.FadeImmediately
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FadeImmediately()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FadeImmediately");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.FadeOnDeath
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FadeOnDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FadeOnDeath");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.HitEnemyAfterDelay
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BaseDamage                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitFromDirection                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::HitEnemyAfterDelay(float Delay, float BaseDamage, struct FVector& HitFromDirection, struct FHitResult& HitInfo, class AController* EventInstigator, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "HitEnemyAfterDelay");

	Params::AEnemyCharacter_C_HitEnemyAfterDelay_Params Parms{};

	Parms.Delay = Delay;
	Parms.BaseDamage = BaseDamage;
	Parms.HitFromDirection = HitFromDirection;
	Parms.HitInfo = HitInfo;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceivePointDamage
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         HitComponent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        BoneName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ShotFromDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEnemyCharacter_C::ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, struct FHitResult& HitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceivePointDamage");

	Params::AEnemyCharacter_C_ReceivePointDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.ShotFromDirection = ShotFromDirection;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitInfo = HitInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceiveAnyDamage
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceiveAnyDamage");

	Params::AEnemyCharacter_C_ReceiveAnyDamage_Params Parms{};

	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.AI_SetAggroAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                PlayerToAggro                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DelayTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::AI_SetAggroAfterDelay(class AZero_Base_C* PlayerToAggro, float DelayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "AI_SetAggroAfterDelay");

	Params::AEnemyCharacter_C_AI_SetAggroAfterDelay_Params Parms{};

	Parms.PlayerToAggro = PlayerToAggro;
	Parms.DelayTime = DelayTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.DestroyCharacter
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::DestroyCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DestroyCharacter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.DestroyAfterTimeout
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Timeout                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::DestroyAfterTimeout(float Timeout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "DestroyAfterTimeout");

	Params::AEnemyCharacter_C_DestroyAfterTimeout_Params Parms{};

	Parms.Timeout = Timeout;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceivePossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 NewController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ReceivePossessed(class AController* NewController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceivePossessed");

	Params::AEnemyCharacter_C_ReceivePossessed_Params Parms{};

	Parms.NewController = NewController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.ReceiveUnpossessed
// (Event, Public, BlueprintEvent)
// Parameters:
// class AController*                 OldController                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ReceiveUnpossessed(class AController* OldController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ReceiveUnpossessed");

	Params::AEnemyCharacter_C_ReceiveUnpossessed_Params Parms{};

	Parms.OldController = OldController;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.BreakPetrificationState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BreakPetrificationState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BreakPetrificationState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.CritVictimBlood
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Socket                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::CritVictimBlood(class FName Socket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "CritVictimBlood");

	Params::AEnemyCharacter_C_CritVictimBlood_Params Parms{};

	Parms.Socket = Socket;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.StyleBloodAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StyleBloodAfterDelay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StyleBloodAfterDelay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.StyleBlood
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StyleBlood()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StyleBlood");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.Perform occlusion trace on death, if occluded slowly blend to static pose instead of ragdoll
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDrawDebugTrace         DrawDebugType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               PartialPhysicsSimInsteadOfRegular                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Head_bone                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::Perform_occlusion_trace_on_death__if_occluded_slowly_blend_to_static_pose_instead_of_ragdoll(enum class EDrawDebugTrace DrawDebugType, bool PartialPhysicsSimInsteadOfRegular, class FName Head_bone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "Perform occlusion trace on death, if occluded slowly blend to static pose instead of ragdoll");

	Params::AEnemyCharacter_C_Perform_occlusion_trace_on_death__if_occluded_slowly_blend_to_static_pose_instead_of_ragdoll_Params Parms{};

	Parms.DrawDebugType = DrawDebugType;
	Parms.PartialPhysicsSimInsteadOfRegular = PartialPhysicsSimInsteadOfRegular;
	Parms.Head_bone = Head_bone;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.KnockDownEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::KnockDownEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "KnockDownEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ResetHeadbuttAfterDelay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ResetHeadbuttAfterDelay(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ResetHeadbuttAfterDelay");

	Params::AEnemyCharacter_C_ResetHeadbuttAfterDelay_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.FinishKnockdown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::FinishKnockdown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "FinishKnockdown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.RegenHPDuringTetherWalk
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::RegenHPDuringTetherWalk()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "RegenHPDuringTetherWalk");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.StartTetherHealthRegen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::StartTetherHealthRegen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "StartTetherHealthRegen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnFinishTetherSystemWalkBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnFinishTetherSystemWalkBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnFinishTetherSystemWalkBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.InitTetherSystem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::InitTetherSystem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "InitTetherSystem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.TetherTest
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::TetherTest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "TetherTest");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ForceReturn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::ForceReturn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ForceReturn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.ExecuteUbergraph_EnemyCharacter
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_24                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_23                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_22                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_21                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_20                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_19                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_18                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_17                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_16                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_15                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_14                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_13                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_12                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_11                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_24                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_10                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_25                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_9                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_26                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_27                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_7                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_28                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_29                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_30                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_31                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_32                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_33                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_34                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_35                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_36                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_37                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_38                          (ZeroConstructor, NoDestructor)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_39                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_40                          (ZeroConstructor, NoDestructor)
// enum class EPathFollowingResult    Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_CustomEvent_MontageToPlay                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_PlayRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_StartingPosition                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StartingSection                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DamageToApply                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_41                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CanReachPlayer_bCanReach                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReduceHealth_NewHealth                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              K2Node_CustomEvent_DurationBonus                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_42                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_43                          (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_Alpha                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Bone                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_ImpactNormal                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldWeSimulateHitReaction_Simulate_                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECollisionEnabled       CallFunc_GetCollisionEnabled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_44                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_45                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MeshSphereTrace_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_MeshSphereTrace_OutHit                                  (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanReachPlayer_bCanReach_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent_2                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Kicker                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_KickerLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ImpactLocation                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_Impulse                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_46                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDHSignificanceLevel    K2Node_Event_SignificanceLevel                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class ABP_PatrollingSpline_C*      K2Node_Event_PatrollingSplineActor                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetTauntAnimation_TauntAnim                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnemyDisabled__ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bDied                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_47                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsEnemyDisabled__ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsEnemyDisabled__ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRiposteCathDropItemChance_Chance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeSinceCreation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_48                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_1                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_2                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_3                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_CustomEvent_EnemyToIgnore                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Reason_1                                      (ZeroConstructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_49                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_4                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_18                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_50                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_4                       (NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AEnemyCharacter_C*           K2Node_CustomEvent_IgnoreSelf                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_Reason                                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_19                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_9                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetDisplayName_ReturnValue_5                            (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_51                          (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_20                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_21                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Hidden                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_22                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentPersistentLevelName_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUsable_Chalice_C*           K2Node_DynamicCast_AsUsable_Chalice                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_52                          (ZeroConstructor, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_5                       (NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_RestartLogic_                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_2              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_53                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_6                       (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_6                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_24                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_3              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_25                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeDilation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_6                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_23                            (ZeroConstructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_24                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_25                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_25                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_54                          (ZeroConstructor, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_9                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_26                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_7                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_27                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_28                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_55                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_56                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_7                       (NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_29                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_30                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_31                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_32                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_10                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetActorNameStr_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_26                            (ZeroConstructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_11                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasRecentlyRendered_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_12                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NotifyName_26                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_4              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_27                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_57                          (ZeroConstructor, NoDestructor)
// class AAdvancedEnemySpawner_C*     K2Node_Event_SpawnerRef                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_UniqueID                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ELevelPhases            K2Node_Event_PhaseToSpawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPermanentlyDeadOnceKilled_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointA                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShouldWander_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APatrolPoint_C*              K2Node_Event_PatrolPointB                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_AggroRadius                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_TriggerOnEnemyAggro_C*   K2Node_Event_TriggerToActivateOnAggro                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_ShouldPatrol_                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  K2Node_Event_SpawnTransform                                      (IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_8                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_10                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AMyDetourCrowdAIController_C*K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_5              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RunBehaviorTree_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_HitComponent                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_ComponentBoundEvent_NormalImpulse                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_ComponentBoundEvent_Hit                                   (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyDamage_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UMaterialInterface*>  CallFunc_GetMaterials_ReturnValue                                (ReferenceParm, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_GetMaterial_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandleRemoveFromTimeline_Removed_                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_58                          (ZeroConstructor, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_28                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ReduceHealth_NewHealth_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_59                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_NotifyName_29                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ClassClass_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayDamageAnimation_bShouldPlayDeathAnim          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_60                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_33                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ProcessDamageType_DamageOut                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_34                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_35                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldTakePoiseDamageOnDefelect_ShouldTakePoiseDamage   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_36                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetController_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_37                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_38                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_FreezeDuration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetOffHandComponent_OffhandComponent                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetMeleeAtkComponent_MeleeAtkComponent                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetOffHandComponent_OffhandComponent_1                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_GetMeleeAtkComponent_MeleeAtkComponent_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BaseDamage                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HitFromDirection                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_HitInfo                                       (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AController*                 K2Node_CustomEvent_EventInstigator                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType_1                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_HitComponent                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_BoneName                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_ShotFromDirection                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_ApplyPointDamage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_Event_DamageType                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_InstigatedBy                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_CrossRiposteDamageMultiplier_DamageOut                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_9                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_11                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_39                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_CustomEvent_PlayerToAggro                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_DelayTime                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Timeout                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_8                       (NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_NewController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_Event_OldController                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_Socket                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPathFollowingResult    Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_13                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_GetPosition_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_40                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDrawDebugTrace         K2Node_CustomEvent_DrawDebugType                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_PartialPhysicsSimInsteadOfRegular             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_head_bone                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_SphereTraceSingle_OutHit                                (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_SphereTraceSingle_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentActiveMontage_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Montage_GetPosition_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayAnimMontage_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_41                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue_7                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_27                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_14                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_15                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABossBaseCharacter_C*        K2Node_DynamicCast_AsBoss_Base_Character                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 CallFunc_GetController_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_ApplyDamage_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_12                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_61                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_PlayerDistanceToTetherCenter_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceToTetherCenter_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PlayerDistanceToTetherCenter_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceToTetherCenter_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_42                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_16                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceToTetherCenter_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue_10                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_13                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPathFollowingResult    K2Node_CustomEvent_MovementResult_9                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Dot_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_9                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetCurrentMontage_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_GetTauntAnimation_TauntAnim_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_43                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayMontageCallbackProxy*   CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAIAsyncTaskBlueprintProxy*  CallFunc_CreateMoveToProxyObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_44                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_45                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_46                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::ExecuteUbergraph_EnemyCharacter(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class EPathFollowingResult Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_23, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class FName K2Node_CustomEvent_NotifyName_22, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class FName K2Node_CustomEvent_NotifyName_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class FName K2Node_CustomEvent_NotifyName_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class FName K2Node_CustomEvent_NotifyName_19, class FName K2Node_CustomEvent_NotifyName_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class FName K2Node_CustomEvent_NotifyName_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class FName K2Node_CustomEvent_NotifyName_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class FName K2Node_CustomEvent_NotifyName_15, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class FName Temp_name_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_14, class FName K2Node_CustomEvent_NotifyName_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, class FName K2Node_CustomEvent_NotifyName_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, class FName K2Node_CustomEvent_NotifyName_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_24, class FName K2Node_CustomEvent_NotifyName_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_25, class FName Temp_name_Variable_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_26, class FName K2Node_CustomEvent_NotifyName_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_27, class FName K2Node_CustomEvent_NotifyName_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_28, class FName K2Node_CustomEvent_NotifyName_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_29, class FName K2Node_CustomEvent_NotifyName_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_30, class FName Temp_name_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_31, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_32, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_33, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_34, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_35, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_36, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_37, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_38, class FName Temp_name_Variable_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_39, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_40, enum class EPathFollowingResult Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UAnimMontage* K2Node_CustomEvent_MontageToPlay, float K2Node_CustomEvent_PlayRate, float K2Node_CustomEvent_StartingPosition, class FName K2Node_CustomEvent_StartingSection, float K2Node_Event_DamageToApply, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_41, bool CallFunc_CanReachPlayer_bCanReach, float K2Node_Event_Amount, float CallFunc_ReduceHealth_NewHealth, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float K2Node_CustomEvent_DurationBonus, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_42, bool CallFunc_BooleanOR_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_43, float K2Node_CustomEvent_Alpha, class FName K2Node_CustomEvent_Bone, const struct FVector& K2Node_CustomEvent_ImpactNormal, bool CallFunc_ShouldWeSimulateHitReaction_Simulate_, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, enum class ECollisionEnabled CallFunc_GetCollisionEnabled_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_44, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_45, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_MeshSphereTrace_ReturnValue, const struct FHitResult& CallFunc_MeshSphereTrace_OutHit, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanReachPlayer_bCanReach_1, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, class AZero_Base_C* K2Node_DynamicCast_As0_Base_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, class AActor* K2Node_Event_Kicker, const struct FVector& K2Node_Event_KickerLocation, const struct FVector& K2Node_Event_ImpactLocation, const struct FVector& K2Node_Event_Impulse, const struct FHitResult& K2Node_Event_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_46, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, bool K2Node_SwitchEnum_CmpSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, enum class EPathFollowingResult Temp_byte_Variable_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class ABP_PatrollingSpline_C* K2Node_Event_PatrollingSplineActor, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_6, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_MakeLiteralName_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_1, class UAnimMontage* CallFunc_GetTauntAnimation_TauntAnim, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_2, bool CallFunc_IsEnemyDisabled__ReturnValue, bool K2Node_CustomEvent_bDied, bool CallFunc_Not_PreBool_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_47, bool CallFunc_IsEnemyDisabled__ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_IsEnemyDisabled__ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetRiposteCathDropItemChance_Chance, bool CallFunc_Not_PreBool_ReturnValue_6, float CallFunc_GetGameTimeSinceCreation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, class FName CallFunc_MakeLiteralName_ReturnValue_3, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_3, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_48, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_GetDisplayName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FName CallFunc_MakeLiteralName_ReturnValue_4, class FName CallFunc_MakeLiteralName_ReturnValue_5, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_8, class UObject* CallFunc_GetValueAsObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, class AEnemyCharacter_C* K2Node_CustomEvent_EnemyToIgnore, const class FString& K2Node_CustomEvent_Reason_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_49, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class FName CallFunc_MakeLiteralName_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_12, const class FString& CallFunc_GetDisplayName_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, bool CallFunc_IsValid_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_14, class FName CallFunc_MakeLiteralName_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_50, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_4, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_15, class UObject* CallFunc_GetValueAsObject_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_16, class AEnemyCharacter_C* K2Node_CustomEvent_IgnoreSelf, const class FString& K2Node_CustomEvent_Reason, const class FString& CallFunc_Concat_StrStr_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_17, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_9, const class FString& CallFunc_GetDisplayName_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_51, const class FString& CallFunc_Concat_StrStr_ReturnValue_20, const class FString& CallFunc_Concat_StrStr_ReturnValue_21, bool K2Node_CustomEvent_Hidden, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_22, class FName CallFunc_GetCurrentPersistentLevelName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, class FName Temp_name_Variable_5, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class AUsable_Chalice_C* K2Node_DynamicCast_AsUsable_Chalice, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_52, class AController* CallFunc_GetController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_5, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_19, class AController* CallFunc_GetController_ReturnValue_1, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1, bool K2Node_DynamicCast_bSuccess_5, bool K2Node_CustomEvent_RestartLogic_, class AController* CallFunc_GetController_ReturnValue_2, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_2, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_20, bool CallFunc_IsValid_ReturnValue_21, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_53, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_6, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_22, class FName CallFunc_MakeLiteralName_ReturnValue_8, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_23, class UObject* CallFunc_GetValueAsObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_24, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class AController* CallFunc_GetController_ReturnValue_3, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_3, bool K2Node_DynamicCast_bSuccess_7, class FName K2Node_CustomEvent_NotifyName_25, float K2Node_CustomEvent_TimeDilation, const class FString& CallFunc_GetDisplayName_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_23, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_24, const class FString& CallFunc_Concat_StrStr_ReturnValue_25, bool CallFunc_IsValid_ReturnValue_25, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_54, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_2, class FName CallFunc_MakeLiteralName_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_26, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_27, class UObject* CallFunc_GetValueAsObject_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_28, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_55, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_56, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_7, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_29, bool CallFunc_IsValid_ReturnValue_30, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_31, bool CallFunc_IsValid_ReturnValue_32, bool CallFunc_Not_PreBool_ReturnValue_10, const class FString& CallFunc_GetActorNameStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_26, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_WasRecentlyRendered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_12, class AAIController* CallFunc_GetAIController_ReturnValue, class FName K2Node_CustomEvent_NotifyName_26, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_4, bool K2Node_DynamicCast_bSuccess_8, class FName K2Node_CustomEvent_NotifyName_27, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_57, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_8, class FName CallFunc_MakeLiteralName_ReturnValue_10, class AController* CallFunc_GetController_ReturnValue_4, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_5, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_RunBehaviorTree_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class AZero_Base_C* K2Node_DynamicCast_As0_Base_2, bool K2Node_DynamicCast_bSuccess_10, class AController* CallFunc_GetController_ReturnValue_5, float CallFunc_ApplyDamage_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_11, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim, bool CallFunc_HandleRemoveFromTimeline_Removed_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_58, class FName K2Node_CustomEvent_NotifyName_28, float CallFunc_ReduceHealth_NewHealth_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_59, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class FName K2Node_CustomEvent_NotifyName_29, bool CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_ShouldPlayDamageAnimation_bShouldPlayDeathAnim, bool CallFunc_BooleanAND_ReturnValue_6, class UClass* CallFunc_GetObjectClass_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_60, bool CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim_1, bool CallFunc_IsValid_ReturnValue_33, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_12, float CallFunc_ProcessDamageType_DamageOut, bool CallFunc_IsValid_ReturnValue_34, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_35, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_ShouldTakePoiseDamageOnDefelect_ShouldTakePoiseDamage, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, bool CallFunc_IsValid_ReturnValue_36, class AController* CallFunc_GetController_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_37, bool CallFunc_IsValid_ReturnValue_38, float K2Node_Event_FreezeDuration, class UStaticMeshComponent* CallFunc_GetOffHandComponent_OffhandComponent, class UStaticMeshComponent* CallFunc_GetMeleeAtkComponent_MeleeAtkComponent, class UStaticMeshComponent* CallFunc_GetOffHandComponent_OffhandComponent_1, class UStaticMeshComponent* CallFunc_GetMeleeAtkComponent_MeleeAtkComponent_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, float K2Node_CustomEvent_Delay_1, float K2Node_CustomEvent_BaseDamage, const struct FVector& K2Node_CustomEvent_HitFromDirection, const struct FHitResult& K2Node_CustomEvent_HitInfo, class AController* K2Node_CustomEvent_EventInstigator, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_Event_Damage_1, class UDamageType* K2Node_Event_DamageType_1, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, class UPrimitiveComponent* K2Node_Event_HitComponent, class FName K2Node_Event_BoneName, const struct FVector& K2Node_Event_ShotFromDirection, class AController* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FHitResult& K2Node_Event_HitInfo, float CallFunc_ApplyPointDamage_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, float CallFunc_CrossRiposteDamageMultiplier_DamageOut, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_9, class FName CallFunc_MakeLiteralName_ReturnValue_11, bool CallFunc_IsValid_ReturnValue_39, class AZero_Base_C* K2Node_CustomEvent_PlayerToAggro, float K2Node_CustomEvent_DelayTime, float K2Node_CustomEvent_Timeout, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_8, class AController* K2Node_Event_NewController, class AController* K2Node_Event_OldController, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class FName K2Node_CustomEvent_Socket, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_3, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, enum class EPathFollowingResult Temp_byte_Variable_4, bool CallFunc_Not_PreBool_ReturnValue_13, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float CallFunc_Montage_GetPosition_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_40, float CallFunc_Add_FloatFloat_ReturnValue_2, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_3, enum class EDrawDebugTrace K2Node_CustomEvent_DrawDebugType, bool K2Node_CustomEvent_PartialPhysicsSimInsteadOfRegular, class FName K2Node_CustomEvent_head_bone, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_4, class UAnimMontage* CallFunc_GetCurrentActiveMontage_ReturnValue, float CallFunc_Montage_GetPosition_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base_3, bool K2Node_DynamicCast_bSuccess_13, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4, float CallFunc_PlayAnimMontage_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_41, float K2Node_CustomEvent_Delay, bool Temp_bool_IsClosed_Variable, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, const class FString& CallFunc_GetDisplayName_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_27, bool CallFunc_Not_PreBool_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_15, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_7, class ABossBaseCharacter_C* K2Node_DynamicCast_AsBoss_Base_Character, bool K2Node_DynamicCast_bSuccess_14, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_8, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, class AController* CallFunc_GetController_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_ApplyDamage_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class FName CallFunc_MakeLiteralName_ReturnValue_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_61, float CallFunc_PlayerDistanceToTetherCenter_ReturnValue, float CallFunc_DistanceToTetherCenter_ReturnValue, float CallFunc_PlayerDistanceToTetherCenter_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_DistanceToTetherCenter_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, bool CallFunc_Greater_FloatFloat_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_42, bool CallFunc_BooleanAND_ReturnValue_8, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_16, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_6, class APawn* CallFunc_GetPlayerPawn_ReturnValue, float CallFunc_DistanceToTetherCenter_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_7, bool CallFunc_Greater_FloatFloat_ReturnValue_8, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue_10, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_10, class FName CallFunc_MakeLiteralName_ReturnValue_13, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_9, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue, class AAIController* CallFunc_GetAIController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_10, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue_2, float CallFunc_Dot_VectorVector_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_9, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_11, class UAnimMontage* CallFunc_GetCurrentMontage_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, class UAnimMontage* CallFunc_GetTauntAnimation_TauntAnim_1, bool CallFunc_IsValid_ReturnValue_43, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_44, bool CallFunc_IsValid_ReturnValue_45, bool CallFunc_IsValid_ReturnValue_46, class AActor* K2Node_Select_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "ExecuteUbergraph_EnemyCharacter");

	Params::AEnemyCharacter_C_ExecuteUbergraph_EnemyCharacter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_MovementResult_4 = K2Node_CustomEvent_MovementResult_4;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_MovementResult_3 = K2Node_CustomEvent_MovementResult_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_MovementResult_2 = K2Node_CustomEvent_MovementResult_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_NotifyName_24 = K2Node_CustomEvent_NotifyName_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_NotifyName_23 = K2Node_CustomEvent_NotifyName_23;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CustomEvent_NotifyName_22 = K2Node_CustomEvent_NotifyName_22;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CustomEvent_NotifyName_21 = K2Node_CustomEvent_NotifyName_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CustomEvent_NotifyName_20 = K2Node_CustomEvent_NotifyName_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CustomEvent_NotifyName_19 = K2Node_CustomEvent_NotifyName_19;
	Parms.K2Node_CustomEvent_NotifyName_18 = K2Node_CustomEvent_NotifyName_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CustomEvent_NotifyName_17 = K2Node_CustomEvent_NotifyName_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CustomEvent_NotifyName_16 = K2Node_CustomEvent_NotifyName_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_CustomEvent_NotifyName_15 = K2Node_CustomEvent_NotifyName_15;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CustomEvent_NotifyName_14 = K2Node_CustomEvent_NotifyName_14;
	Parms.K2Node_CustomEvent_NotifyName_13 = K2Node_CustomEvent_NotifyName_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_CustomEvent_NotifyName_12 = K2Node_CustomEvent_NotifyName_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_CustomEvent_NotifyName_11 = K2Node_CustomEvent_NotifyName_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_24 = K2Node_CreateDelegate_OutputDelegate_24;
	Parms.K2Node_CustomEvent_NotifyName_10 = K2Node_CustomEvent_NotifyName_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_25 = K2Node_CreateDelegate_OutputDelegate_25;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_9 = K2Node_CustomEvent_NotifyName_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_26 = K2Node_CreateDelegate_OutputDelegate_26;
	Parms.K2Node_CustomEvent_NotifyName_8 = K2Node_CustomEvent_NotifyName_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_27 = K2Node_CreateDelegate_OutputDelegate_27;
	Parms.K2Node_CustomEvent_NotifyName_7 = K2Node_CustomEvent_NotifyName_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_28 = K2Node_CreateDelegate_OutputDelegate_28;
	Parms.K2Node_CustomEvent_NotifyName_6 = K2Node_CustomEvent_NotifyName_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_29 = K2Node_CreateDelegate_OutputDelegate_29;
	Parms.K2Node_CustomEvent_NotifyName_5 = K2Node_CustomEvent_NotifyName_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_30 = K2Node_CreateDelegate_OutputDelegate_30;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_31 = K2Node_CreateDelegate_OutputDelegate_31;
	Parms.K2Node_CreateDelegate_OutputDelegate_32 = K2Node_CreateDelegate_OutputDelegate_32;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_33 = K2Node_CreateDelegate_OutputDelegate_33;
	Parms.K2Node_CreateDelegate_OutputDelegate_34 = K2Node_CreateDelegate_OutputDelegate_34;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CustomEvent_NotifyName_4 = K2Node_CustomEvent_NotifyName_4;
	Parms.K2Node_CustomEvent_NotifyName_3 = K2Node_CustomEvent_NotifyName_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_35 = K2Node_CreateDelegate_OutputDelegate_35;
	Parms.K2Node_CustomEvent_NotifyName_2 = K2Node_CustomEvent_NotifyName_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_36 = K2Node_CreateDelegate_OutputDelegate_36;
	Parms.K2Node_CustomEvent_NotifyName_1 = K2Node_CustomEvent_NotifyName_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_37 = K2Node_CreateDelegate_OutputDelegate_37;
	Parms.K2Node_CustomEvent_NotifyName = K2Node_CustomEvent_NotifyName;
	Parms.K2Node_CreateDelegate_OutputDelegate_38 = K2Node_CreateDelegate_OutputDelegate_38;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_39 = K2Node_CreateDelegate_OutputDelegate_39;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_CustomEvent_MovementResult_1 = K2Node_CustomEvent_MovementResult_1;
	Parms.K2Node_CustomEvent_MovementResult = K2Node_CustomEvent_MovementResult;
	Parms.K2Node_CreateDelegate_OutputDelegate_40 = K2Node_CreateDelegate_OutputDelegate_40;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.K2Node_CustomEvent_MontageToPlay = K2Node_CustomEvent_MontageToPlay;
	Parms.K2Node_CustomEvent_PlayRate = K2Node_CustomEvent_PlayRate;
	Parms.K2Node_CustomEvent_StartingPosition = K2Node_CustomEvent_StartingPosition;
	Parms.K2Node_CustomEvent_StartingSection = K2Node_CustomEvent_StartingSection;
	Parms.K2Node_Event_DamageToApply = K2Node_Event_DamageToApply;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_41 = K2Node_CreateDelegate_OutputDelegate_41;
	Parms.CallFunc_CanReachPlayer_bCanReach = CallFunc_CanReachPlayer_bCanReach;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_ReduceHealth_NewHealth = CallFunc_ReduceHealth_NewHealth;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_CustomEvent_DurationBonus = K2Node_CustomEvent_DurationBonus;
	Parms.K2Node_CustomEvent_MovementResult_5 = K2Node_CustomEvent_MovementResult_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_42 = K2Node_CreateDelegate_OutputDelegate_42;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_43 = K2Node_CreateDelegate_OutputDelegate_43;
	Parms.K2Node_CustomEvent_Alpha = K2Node_CustomEvent_Alpha;
	Parms.K2Node_CustomEvent_Bone = K2Node_CustomEvent_Bone;
	Parms.K2Node_CustomEvent_ImpactNormal = K2Node_CustomEvent_ImpactNormal;
	Parms.CallFunc_ShouldWeSimulateHitReaction_Simulate_ = CallFunc_ShouldWeSimulateHitReaction_Simulate_;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetCollisionEnabled_ReturnValue = CallFunc_GetCollisionEnabled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_44 = K2Node_CreateDelegate_OutputDelegate_44;
	Parms.K2Node_CreateDelegate_OutputDelegate_45 = K2Node_CreateDelegate_OutputDelegate_45;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_MeshSphereTrace_ReturnValue = CallFunc_MeshSphereTrace_ReturnValue;
	Parms.CallFunc_MeshSphereTrace_OutHit = CallFunc_MeshSphereTrace_OutHit;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_BreakHitResult_bBlockingHit_1 = CallFunc_BreakHitResult_bBlockingHit_1;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_1 = CallFunc_BreakHitResult_bInitialOverlap_1;
	Parms.CallFunc_BreakHitResult_Time_1 = CallFunc_BreakHitResult_Time_1;
	Parms.CallFunc_BreakHitResult_Distance_1 = CallFunc_BreakHitResult_Distance_1;
	Parms.CallFunc_BreakHitResult_Location_1 = CallFunc_BreakHitResult_Location_1;
	Parms.CallFunc_BreakHitResult_ImpactPoint_1 = CallFunc_BreakHitResult_ImpactPoint_1;
	Parms.CallFunc_BreakHitResult_Normal_1 = CallFunc_BreakHitResult_Normal_1;
	Parms.CallFunc_BreakHitResult_ImpactNormal_1 = CallFunc_BreakHitResult_ImpactNormal_1;
	Parms.CallFunc_BreakHitResult_PhysMat_1 = CallFunc_BreakHitResult_PhysMat_1;
	Parms.CallFunc_BreakHitResult_HitActor_1 = CallFunc_BreakHitResult_HitActor_1;
	Parms.CallFunc_BreakHitResult_HitComponent_1 = CallFunc_BreakHitResult_HitComponent_1;
	Parms.CallFunc_BreakHitResult_HitBoneName_1 = CallFunc_BreakHitResult_HitBoneName_1;
	Parms.CallFunc_BreakHitResult_HitItem_1 = CallFunc_BreakHitResult_HitItem_1;
	Parms.CallFunc_BreakHitResult_FaceIndex_1 = CallFunc_BreakHitResult_FaceIndex_1;
	Parms.CallFunc_BreakHitResult_TraceStart_1 = CallFunc_BreakHitResult_TraceStart_1;
	Parms.CallFunc_BreakHitResult_TraceEnd_1 = CallFunc_BreakHitResult_TraceEnd_1;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanReachPlayer_bCanReach_1 = CallFunc_CanReachPlayer_bCanReach_1;
	Parms.CallFunc_BreakHitResult_bBlockingHit_2 = CallFunc_BreakHitResult_bBlockingHit_2;
	Parms.CallFunc_BreakHitResult_bInitialOverlap_2 = CallFunc_BreakHitResult_bInitialOverlap_2;
	Parms.CallFunc_BreakHitResult_Time_2 = CallFunc_BreakHitResult_Time_2;
	Parms.CallFunc_BreakHitResult_Distance_2 = CallFunc_BreakHitResult_Distance_2;
	Parms.CallFunc_BreakHitResult_Location_2 = CallFunc_BreakHitResult_Location_2;
	Parms.CallFunc_BreakHitResult_ImpactPoint_2 = CallFunc_BreakHitResult_ImpactPoint_2;
	Parms.CallFunc_BreakHitResult_Normal_2 = CallFunc_BreakHitResult_Normal_2;
	Parms.CallFunc_BreakHitResult_ImpactNormal_2 = CallFunc_BreakHitResult_ImpactNormal_2;
	Parms.CallFunc_BreakHitResult_PhysMat_2 = CallFunc_BreakHitResult_PhysMat_2;
	Parms.CallFunc_BreakHitResult_HitActor_2 = CallFunc_BreakHitResult_HitActor_2;
	Parms.CallFunc_BreakHitResult_HitComponent_2 = CallFunc_BreakHitResult_HitComponent_2;
	Parms.CallFunc_BreakHitResult_HitBoneName_2 = CallFunc_BreakHitResult_HitBoneName_2;
	Parms.CallFunc_BreakHitResult_HitItem_2 = CallFunc_BreakHitResult_HitItem_2;
	Parms.CallFunc_BreakHitResult_FaceIndex_2 = CallFunc_BreakHitResult_FaceIndex_2;
	Parms.CallFunc_BreakHitResult_TraceStart_2 = CallFunc_BreakHitResult_TraceStart_2;
	Parms.CallFunc_BreakHitResult_TraceEnd_2 = CallFunc_BreakHitResult_TraceEnd_2;
	Parms.K2Node_DynamicCast_As0_Base_1 = K2Node_DynamicCast_As0_Base_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_Event_Kicker = K2Node_Event_Kicker;
	Parms.K2Node_Event_KickerLocation = K2Node_Event_KickerLocation;
	Parms.K2Node_Event_ImpactLocation = K2Node_Event_ImpactLocation;
	Parms.K2Node_Event_Impulse = K2Node_Event_Impulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_CreateDelegate_OutputDelegate_46 = K2Node_CreateDelegate_OutputDelegate_46;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Event_SignificanceLevel = K2Node_Event_SignificanceLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue = CallFunc_IsPhotoModeSpeedChangeInProgress_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.K2Node_Event_PatrollingSplineActor = K2Node_Event_PatrollingSplineActor;
	Parms.K2Node_CustomEvent_MovementResult_6 = K2Node_CustomEvent_MovementResult_6;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_GetBlackboard_ReturnValue_1 = CallFunc_GetBlackboard_ReturnValue_1;
	Parms.CallFunc_GetTauntAnimation_TauntAnim = CallFunc_GetTauntAnimation_TauntAnim;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_MakeLiteralName_ReturnValue_2 = CallFunc_MakeLiteralName_ReturnValue_2;
	Parms.CallFunc_GetBlackboard_ReturnValue_2 = CallFunc_GetBlackboard_ReturnValue_2;
	Parms.CallFunc_IsEnemyDisabled__ReturnValue = CallFunc_IsEnemyDisabled__ReturnValue;
	Parms.K2Node_CustomEvent_bDied = K2Node_CustomEvent_bDied;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_47 = K2Node_CreateDelegate_OutputDelegate_47;
	Parms.CallFunc_IsEnemyDisabled__ReturnValue_1 = CallFunc_IsEnemyDisabled__ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_IsEnemyDisabled__ReturnValue_2 = CallFunc_IsEnemyDisabled__ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetRiposteCathDropItemChance_Chance = CallFunc_GetRiposteCathDropItemChance_Chance;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_GetGameTimeSinceCreation_ReturnValue = CallFunc_GetGameTimeSinceCreation_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_1 = CallFunc_GetPlayerCharacter_ReturnValue_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_2 = CallFunc_GetPlayerCharacter_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_MakeLiteralName_ReturnValue_3 = CallFunc_MakeLiteralName_ReturnValue_3;
	Parms.CallFunc_GetBlackboard_ReturnValue_3 = CallFunc_GetBlackboard_ReturnValue_3;
	Parms.K2Node_CustomEvent_MovementResult_7 = K2Node_CustomEvent_MovementResult_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_48 = K2Node_CreateDelegate_OutputDelegate_48;
	Parms.CallFunc_GetDisplayName_ReturnValue_1 = CallFunc_GetDisplayName_ReturnValue_1;
	Parms.CallFunc_GetDisplayName_ReturnValue_2 = CallFunc_GetDisplayName_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_GetDisplayName_ReturnValue_3 = CallFunc_GetDisplayName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_MakeLiteralName_ReturnValue_4 = CallFunc_MakeLiteralName_ReturnValue_4;
	Parms.CallFunc_MakeLiteralName_ReturnValue_5 = CallFunc_MakeLiteralName_ReturnValue_5;
	Parms.CallFunc_GetBlackboard_ReturnValue_4 = CallFunc_GetBlackboard_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetValueAsObject_ReturnValue_1 = CallFunc_GetValueAsObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_CustomEvent_EnemyToIgnore = K2Node_CustomEvent_EnemyToIgnore;
	Parms.K2Node_CustomEvent_Reason_1 = K2Node_CustomEvent_Reason_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_49 = K2Node_CreateDelegate_OutputDelegate_49;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_6 = CallFunc_MakeLiteralName_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_GetDisplayName_ReturnValue_4 = CallFunc_GetDisplayName_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue = CallFunc_CreateMoveToProxyObject_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Concat_StrStr_ReturnValue_18 = CallFunc_Concat_StrStr_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_MakeLiteralName_ReturnValue_7 = CallFunc_MakeLiteralName_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_50 = K2Node_CreateDelegate_OutputDelegate_50;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_4 = CallFunc_K2_SetTimerDelegate_ReturnValue_4;
	Parms.CallFunc_GetBlackboard_ReturnValue_5 = CallFunc_GetBlackboard_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_GetValueAsObject_ReturnValue_2 = CallFunc_GetValueAsObject_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.K2Node_CustomEvent_IgnoreSelf = K2Node_CustomEvent_IgnoreSelf;
	Parms.K2Node_CustomEvent_Reason = K2Node_CustomEvent_Reason;
	Parms.CallFunc_Concat_StrStr_ReturnValue_19 = CallFunc_Concat_StrStr_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_9 = CallFunc_Not_PreBool_ReturnValue_9;
	Parms.CallFunc_GetDisplayName_ReturnValue_5 = CallFunc_GetDisplayName_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_51 = K2Node_CreateDelegate_OutputDelegate_51;
	Parms.CallFunc_Concat_StrStr_ReturnValue_20 = CallFunc_Concat_StrStr_ReturnValue_20;
	Parms.CallFunc_Concat_StrStr_ReturnValue_21 = CallFunc_Concat_StrStr_ReturnValue_21;
	Parms.K2Node_CustomEvent_Hidden = K2Node_CustomEvent_Hidden;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_22 = CallFunc_Concat_StrStr_ReturnValue_22;
	Parms.CallFunc_GetCurrentPersistentLevelName_ReturnValue = CallFunc_GetCurrentPersistentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.K2Node_DynamicCast_AsUsable_Chalice = K2Node_DynamicCast_AsUsable_Chalice;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_52 = K2Node_CreateDelegate_OutputDelegate_52;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_5 = CallFunc_K2_SetTimerDelegate_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_GetController_ReturnValue_1 = CallFunc_GetController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_CustomEvent_RestartLogic_ = K2Node_CustomEvent_RestartLogic_;
	Parms.CallFunc_GetController_ReturnValue_2 = CallFunc_GetController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_2 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_2;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.K2Node_CreateDelegate_OutputDelegate_53 = K2Node_CreateDelegate_OutputDelegate_53;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_6 = CallFunc_K2_SetTimerDelegate_ReturnValue_6;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue_1 = CallFunc_CreateMoveToProxyObject_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_MakeLiteralName_ReturnValue_8 = CallFunc_MakeLiteralName_ReturnValue_8;
	Parms.CallFunc_GetBlackboard_ReturnValue_6 = CallFunc_GetBlackboard_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_GetValueAsObject_ReturnValue_3 = CallFunc_GetValueAsObject_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_24 = CallFunc_IsValid_ReturnValue_24;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.CallFunc_GetController_ReturnValue_3 = CallFunc_GetController_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_3 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_3;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_CustomEvent_NotifyName_25 = K2Node_CustomEvent_NotifyName_25;
	Parms.K2Node_CustomEvent_TimeDilation = K2Node_CustomEvent_TimeDilation;
	Parms.CallFunc_GetDisplayName_ReturnValue_6 = CallFunc_GetDisplayName_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_23 = CallFunc_Concat_StrStr_ReturnValue_23;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_24 = CallFunc_Concat_StrStr_ReturnValue_24;
	Parms.CallFunc_Concat_StrStr_ReturnValue_25 = CallFunc_Concat_StrStr_ReturnValue_25;
	Parms.CallFunc_IsValid_ReturnValue_25 = CallFunc_IsValid_ReturnValue_25;
	Parms.K2Node_CreateDelegate_OutputDelegate_54 = K2Node_CreateDelegate_OutputDelegate_54;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue_2 = CallFunc_CreateMoveToProxyObject_ReturnValue_2;
	Parms.CallFunc_MakeLiteralName_ReturnValue_9 = CallFunc_MakeLiteralName_ReturnValue_9;
	Parms.CallFunc_IsValid_ReturnValue_26 = CallFunc_IsValid_ReturnValue_26;
	Parms.CallFunc_GetBlackboard_ReturnValue_7 = CallFunc_GetBlackboard_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_27 = CallFunc_IsValid_ReturnValue_27;
	Parms.CallFunc_GetValueAsObject_ReturnValue_4 = CallFunc_GetValueAsObject_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_28 = CallFunc_IsValid_ReturnValue_28;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_55 = K2Node_CreateDelegate_OutputDelegate_55;
	Parms.K2Node_CreateDelegate_OutputDelegate_56 = K2Node_CreateDelegate_OutputDelegate_56;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_7 = CallFunc_K2_SetTimerDelegate_ReturnValue_7;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_29 = CallFunc_IsValid_ReturnValue_29;
	Parms.CallFunc_IsValid_ReturnValue_30 = CallFunc_IsValid_ReturnValue_30;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_31 = CallFunc_IsValid_ReturnValue_31;
	Parms.CallFunc_IsValid_ReturnValue_32 = CallFunc_IsValid_ReturnValue_32;
	Parms.CallFunc_Not_PreBool_ReturnValue_10 = CallFunc_Not_PreBool_ReturnValue_10;
	Parms.CallFunc_GetActorNameStr_ReturnValue = CallFunc_GetActorNameStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_26 = CallFunc_Concat_StrStr_ReturnValue_26;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_3 = CallFunc_Greater_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue_3 = CallFunc_GetPlayerCharacter_ReturnValue_3;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_4 = CallFunc_Greater_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_11 = CallFunc_Not_PreBool_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_WasRecentlyRendered_ReturnValue = CallFunc_WasRecentlyRendered_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_12 = CallFunc_Not_PreBool_ReturnValue_12;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_26 = K2Node_CustomEvent_NotifyName_26;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_4 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_4;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_NotifyName_27 = K2Node_CustomEvent_NotifyName_27;
	Parms.K2Node_CreateDelegate_OutputDelegate_57 = K2Node_CreateDelegate_OutputDelegate_57;
	Parms.K2Node_Event_SpawnerRef = K2Node_Event_SpawnerRef;
	Parms.K2Node_Event_UniqueID = K2Node_Event_UniqueID;
	Parms.K2Node_Event_PhaseToSpawn = K2Node_Event_PhaseToSpawn;
	Parms.K2Node_Event_bPermanentlyDeadOnceKilled_ = K2Node_Event_bPermanentlyDeadOnceKilled_;
	Parms.K2Node_Event_PatrolPointA = K2Node_Event_PatrolPointA;
	Parms.K2Node_Event_bShouldWander_ = K2Node_Event_bShouldWander_;
	Parms.K2Node_Event_PatrolPointB = K2Node_Event_PatrolPointB;
	Parms.K2Node_Event_AggroRadius = K2Node_Event_AggroRadius;
	Parms.K2Node_Event_TriggerToActivateOnAggro = K2Node_Event_TriggerToActivateOnAggro;
	Parms.K2Node_Event_ShouldPatrol_ = K2Node_Event_ShouldPatrol_;
	Parms.K2Node_Event_SpawnTransform = K2Node_Event_SpawnTransform;
	Parms.CallFunc_GetBlackboard_ReturnValue_8 = CallFunc_GetBlackboard_ReturnValue_8;
	Parms.CallFunc_MakeLiteralName_ReturnValue_10 = CallFunc_MakeLiteralName_ReturnValue_10;
	Parms.CallFunc_GetController_ReturnValue_4 = CallFunc_GetController_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_5 = K2Node_DynamicCast_AsMy_Detour_Crowd_AIController_5;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_RunBehaviorTree_ReturnValue = CallFunc_RunBehaviorTree_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_HitComponent = K2Node_ComponentBoundEvent_HitComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_NormalImpulse = K2Node_ComponentBoundEvent_NormalImpulse;
	Parms.K2Node_ComponentBoundEvent_Hit = K2Node_ComponentBoundEvent_Hit;
	Parms.K2Node_DynamicCast_As0_Base_2 = K2Node_DynamicCast_As0_Base_2;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetController_ReturnValue_5 = CallFunc_GetController_ReturnValue_5;
	Parms.CallFunc_ApplyDamage_ReturnValue = CallFunc_ApplyDamage_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetMaterials_ReturnValue = CallFunc_GetMaterials_ReturnValue;
	Parms.CallFunc_GetMaterial_ReturnValue = CallFunc_GetMaterial_ReturnValue;
	Parms.CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim = CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim;
	Parms.CallFunc_HandleRemoveFromTimeline_Removed_ = CallFunc_HandleRemoveFromTimeline_Removed_;
	Parms.K2Node_CreateDelegate_OutputDelegate_58 = K2Node_CreateDelegate_OutputDelegate_58;
	Parms.K2Node_CustomEvent_NotifyName_28 = K2Node_CustomEvent_NotifyName_28;
	Parms.CallFunc_ReduceHealth_NewHealth_1 = CallFunc_ReduceHealth_NewHealth_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_59 = K2Node_CreateDelegate_OutputDelegate_59;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_NotifyName_29 = K2Node_CustomEvent_NotifyName_29;
	Parms.CallFunc_NotEqual_ClassClass_ReturnValue = CallFunc_NotEqual_ClassClass_ReturnValue;
	Parms.CallFunc_ShouldPlayDamageAnimation_bShouldPlayDeathAnim = CallFunc_ShouldPlayDamageAnimation_bShouldPlayDeathAnim;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_60 = K2Node_CreateDelegate_OutputDelegate_60;
	Parms.CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim_1 = CallFunc_ShouldPlayDeathAnimtion_bShouldPlayDeathAnim_1;
	Parms.CallFunc_IsValid_ReturnValue_33 = CallFunc_IsValid_ReturnValue_33;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_ProcessDamageType_DamageOut = CallFunc_ProcessDamageType_DamageOut;
	Parms.CallFunc_IsValid_ReturnValue_34 = CallFunc_IsValid_ReturnValue_34;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation = CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation;
	Parms.CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue = CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue_3 = CallFunc_CreateMoveToProxyObject_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_35 = CallFunc_IsValid_ReturnValue_35;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_ShouldTakePoiseDamageOnDefelect_ShouldTakePoiseDamage = CallFunc_ShouldTakePoiseDamageOnDefelect_ShouldTakePoiseDamage;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_IsValid_ReturnValue_36 = CallFunc_IsValid_ReturnValue_36;
	Parms.CallFunc_GetController_ReturnValue_6 = CallFunc_GetController_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_37 = CallFunc_IsValid_ReturnValue_37;
	Parms.CallFunc_IsValid_ReturnValue_38 = CallFunc_IsValid_ReturnValue_38;
	Parms.K2Node_Event_FreezeDuration = K2Node_Event_FreezeDuration;
	Parms.CallFunc_GetOffHandComponent_OffhandComponent = CallFunc_GetOffHandComponent_OffhandComponent;
	Parms.CallFunc_GetMeleeAtkComponent_MeleeAtkComponent = CallFunc_GetMeleeAtkComponent_MeleeAtkComponent;
	Parms.CallFunc_GetOffHandComponent_OffhandComponent_1 = CallFunc_GetOffHandComponent_OffhandComponent_1;
	Parms.CallFunc_GetMeleeAtkComponent_MeleeAtkComponent_1 = CallFunc_GetMeleeAtkComponent_MeleeAtkComponent_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.K2Node_CustomEvent_Delay_1 = K2Node_CustomEvent_Delay_1;
	Parms.K2Node_CustomEvent_BaseDamage = K2Node_CustomEvent_BaseDamage;
	Parms.K2Node_CustomEvent_HitFromDirection = K2Node_CustomEvent_HitFromDirection;
	Parms.K2Node_CustomEvent_HitInfo = K2Node_CustomEvent_HitInfo;
	Parms.K2Node_CustomEvent_EventInstigator = K2Node_CustomEvent_EventInstigator;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageType_1 = K2Node_Event_DamageType_1;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_HitComponent = K2Node_Event_HitComponent;
	Parms.K2Node_Event_BoneName = K2Node_Event_BoneName;
	Parms.K2Node_Event_ShotFromDirection = K2Node_Event_ShotFromDirection;
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.CallFunc_ApplyPointDamage_ReturnValue = CallFunc_ApplyPointDamage_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageType = K2Node_Event_DamageType;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.CallFunc_CrossRiposteDamageMultiplier_DamageOut = CallFunc_CrossRiposteDamageMultiplier_DamageOut;
	Parms.CallFunc_GetBlackboard_ReturnValue_9 = CallFunc_GetBlackboard_ReturnValue_9;
	Parms.CallFunc_MakeLiteralName_ReturnValue_11 = CallFunc_MakeLiteralName_ReturnValue_11;
	Parms.CallFunc_IsValid_ReturnValue_39 = CallFunc_IsValid_ReturnValue_39;
	Parms.K2Node_CustomEvent_PlayerToAggro = K2Node_CustomEvent_PlayerToAggro;
	Parms.K2Node_CustomEvent_DelayTime = K2Node_CustomEvent_DelayTime;
	Parms.K2Node_CustomEvent_Timeout = K2Node_CustomEvent_Timeout;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_8 = CallFunc_K2_SetTimerDelegate_ReturnValue_8;
	Parms.K2Node_Event_NewController = K2Node_Event_NewController;
	Parms.K2Node_Event_OldController = K2Node_Event_OldController;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_Socket = K2Node_CustomEvent_Socket;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_3 = CallFunc_SpawnEmitterAtLocation_ReturnValue_3;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_4 = CallFunc_SpawnEmitterAtLocation_ReturnValue_4;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_13 = CallFunc_Not_PreBool_ReturnValue_13;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_Montage_GetPosition_ReturnValue = CallFunc_Montage_GetPosition_ReturnValue;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_40 = CallFunc_IsValid_ReturnValue_40;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_2 = CallFunc_Add_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetAnimInstance_ReturnValue_3 = CallFunc_GetAnimInstance_ReturnValue_3;
	Parms.K2Node_CustomEvent_DrawDebugType = K2Node_CustomEvent_DrawDebugType;
	Parms.K2Node_CustomEvent_PartialPhysicsSimInsteadOfRegular = K2Node_CustomEvent_PartialPhysicsSimInsteadOfRegular;
	Parms.K2Node_CustomEvent_head_bone = K2Node_CustomEvent_head_bone;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_Add_VectorVector_ReturnValue_2 = CallFunc_Add_VectorVector_ReturnValue_2;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_SphereTraceSingle_OutHit = CallFunc_SphereTraceSingle_OutHit;
	Parms.CallFunc_SphereTraceSingle_ReturnValue = CallFunc_SphereTraceSingle_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue_4 = CallFunc_GetAnimInstance_ReturnValue_4;
	Parms.CallFunc_GetCurrentActiveMontage_ReturnValue = CallFunc_GetCurrentActiveMontage_ReturnValue;
	Parms.CallFunc_Montage_GetPosition_ReturnValue_1 = CallFunc_Montage_GetPosition_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base_3 = K2Node_DynamicCast_As0_Base_3;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_4;
	Parms.CallFunc_PlayAnimMontage_ReturnValue = CallFunc_PlayAnimMontage_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_41 = CallFunc_IsValid_ReturnValue_41;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_GetDisplayName_ReturnValue_7 = CallFunc_GetDisplayName_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_27 = CallFunc_Concat_StrStr_ReturnValue_27;
	Parms.CallFunc_Not_PreBool_ReturnValue_14 = CallFunc_Not_PreBool_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_15 = CallFunc_Not_PreBool_ReturnValue_15;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_8 = CallFunc_K2_GetActorLocation_ReturnValue_8;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBoss_Base_Character = K2Node_DynamicCast_AsBoss_Base_Character;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_CustomEvent_MovementResult_8 = K2Node_CustomEvent_MovementResult_8;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.CallFunc_GetController_ReturnValue_7 = CallFunc_GetController_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_ApplyDamage_ReturnValue_1 = CallFunc_ApplyDamage_ReturnValue_1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_6 = CallFunc_GetCharacterAs0_Base_As0_Base_6;
	Parms.CallFunc_MakeLiteralName_ReturnValue_12 = CallFunc_MakeLiteralName_ReturnValue_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_61 = K2Node_CreateDelegate_OutputDelegate_61;
	Parms.CallFunc_PlayerDistanceToTetherCenter_ReturnValue = CallFunc_PlayerDistanceToTetherCenter_ReturnValue;
	Parms.CallFunc_DistanceToTetherCenter_ReturnValue = CallFunc_DistanceToTetherCenter_ReturnValue;
	Parms.CallFunc_PlayerDistanceToTetherCenter_ReturnValue_1 = CallFunc_PlayerDistanceToTetherCenter_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_DistanceToTetherCenter_ReturnValue_1 = CallFunc_DistanceToTetherCenter_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_9 = CallFunc_K2_GetActorLocation_ReturnValue_9;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_5 = CallFunc_Greater_FloatFloat_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_42 = CallFunc_IsValid_ReturnValue_42;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_16 = CallFunc_Not_PreBool_ReturnValue_16;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_3 = CallFunc_Add_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_6 = CallFunc_Greater_FloatFloat_ReturnValue_6;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_DistanceToTetherCenter_ReturnValue_2 = CallFunc_DistanceToTetherCenter_ReturnValue_2;
	Parms.CallFunc_GetDistanceTo_ReturnValue_1 = CallFunc_GetDistanceTo_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_7 = CallFunc_Greater_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_8 = CallFunc_Greater_FloatFloat_ReturnValue_8;
	Parms.CallFunc_GetBlackboard_ReturnValue_10 = CallFunc_GetBlackboard_ReturnValue_10;
	Parms.CallFunc_BooleanAND_ReturnValue_9 = CallFunc_BooleanAND_ReturnValue_9;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_10 = CallFunc_BooleanAND_ReturnValue_10;
	Parms.CallFunc_MakeLiteralName_ReturnValue_13 = CallFunc_MakeLiteralName_ReturnValue_13;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_CustomEvent_MovementResult_9 = K2Node_CustomEvent_MovementResult_9;
	Parms.CallFunc_GetCurrentMontage_ReturnValue = CallFunc_GetCurrentMontage_ReturnValue;
	Parms.CallFunc_GetAIController_ReturnValue_1 = CallFunc_GetAIController_ReturnValue_1;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetCurrentMontage_ReturnValue_1 = CallFunc_GetCurrentMontage_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_10 = CallFunc_K2_GetActorLocation_ReturnValue_10;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_2 = CallFunc_Subtract_VectorVector_ReturnValue_2;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue_2 = CallFunc_GetDistanceTo_ReturnValue_2;
	Parms.CallFunc_Dot_VectorVector_ReturnValue = CallFunc_Dot_VectorVector_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_9 = CallFunc_Greater_FloatFloat_ReturnValue_9;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_11 = CallFunc_BooleanAND_ReturnValue_11;
	Parms.CallFunc_GetCurrentMontage_ReturnValue_2 = CallFunc_GetCurrentMontage_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_GetTauntAnimation_TauntAnim_1 = CallFunc_GetTauntAnimation_TauntAnim_1;
	Parms.CallFunc_IsValid_ReturnValue_43 = CallFunc_IsValid_ReturnValue_43;
	Parms.CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5 = CallFunc_CreateProxyObjectForPlayMontage_ReturnValue_5;
	Parms.CallFunc_CreateMoveToProxyObject_ReturnValue_4 = CallFunc_CreateMoveToProxyObject_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_44 = CallFunc_IsValid_ReturnValue_44;
	Parms.CallFunc_IsValid_ReturnValue_45 = CallFunc_IsValid_ReturnValue_45;
	Parms.CallFunc_IsValid_ReturnValue_46 = CallFunc_IsValid_ReturnValue_46;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_11 = CallFunc_K2_GetActorLocation_ReturnValue_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.UnFrozenOnDamage__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::UnFrozenOnDamage__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "UnFrozenOnDamage__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnEnemyHeavyStaggerFinish__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnEnemyHeavyStaggerFinish__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnEnemyHeavyStaggerFinish__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTetherWalkBackCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnTetherWalkBackCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTetherWalkBackCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTetherWalkBackInterrupted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnTetherWalkBackInterrupted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTetherWalkBackInterrupted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTetherStartWalkBack__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnTetherStartWalkBack__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTetherStartWalkBack__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnAnyDmgTaken__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDied                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::OnAnyDmgTaken__DelegateSignature(bool bDied)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnAnyDmgTaken__DelegateSignature");

	Params::AEnemyCharacter_C_OnAnyDmgTaken__DelegateSignature_Params Parms{};

	Parms.bDied = bDied;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OpacityFadeCompleted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OpacityFadeCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OpacityFadeCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCurrentAttackFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnCurrentAttackFinished__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCurrentAttackFinished__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnDespawn__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnDespawn__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnDespawn__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::OnDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnDeath__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnemyCharacter.EnemyCharacter_C.OnTauntFinished__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInterrupted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEnemyCharacter_C::OnTauntFinished__DelegateSignature(bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnTauntFinished__DelegateSignature");

	Params::AEnemyCharacter_C_OnTauntFinished__DelegateSignature_Params Parms{};

	Parms.bInterrupted = bInterrupted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.OnCurrentWaitTimeModified__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewRemainingTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEnemyCharacter_C::OnCurrentWaitTimeModified__DelegateSignature(float NewRemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "OnCurrentWaitTimeModified__DelegateSignature");

	Params::AEnemyCharacter_C_OnCurrentWaitTimeModified__DelegateSignature_Params Parms{};

	Parms.NewRemainingTime = NewRemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyCharacter.EnemyCharacter_C.BTLoaded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AEnemyCharacter_C::BTLoaded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnemyCharacter_C", "BTLoaded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


