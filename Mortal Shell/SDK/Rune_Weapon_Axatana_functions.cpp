#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Rune_Weapon_Axatana.Rune_Weapon_Axatana_C
// (None)

class UClass* URune_Weapon_Axatana_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Rune_Weapon_Axatana_C");

	return Clss;
}


// Rune_Weapon_Axatana_C Rune_Weapon_Axatana.Default__Rune_Weapon_Axatana_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URune_Weapon_Axatana_C* URune_Weapon_Axatana_C::GetDefaultObj()
{
	static class URune_Weapon_Axatana_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URune_Weapon_Axatana_C*>(URune_Weapon_Axatana_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.GetAxatanaSpawnLoc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector URune_Weapon_Axatana_C::GetAxatanaSpawnLoc(const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "GetAxatanaSpawnLoc");

	Params::URune_Weapon_Axatana_C_GetAxatanaSpawnLoc_Params Parms{};

	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.ShouldRiposte
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool URune_Weapon_Axatana_C::ShouldRiposte(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "ShouldRiposte");

	Params::URune_Weapon_Axatana_C_ShouldRiposte_Params Parms{};

	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.GetCurrentHitActor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class AActor*                      HitActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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

void URune_Weapon_Axatana_C::GetCurrentHitActor(class AActor** HitActor, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "GetCurrentHitActor");

	Params::URune_Weapon_Axatana_C_GetCurrentHitActor_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

	if (HitActor != nullptr)
		*HitActor = Parms.HitActor;

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.HandleResolveForRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void URune_Weapon_Axatana_C::HandleResolveForRiposte(bool CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "HandleResolveForRiposte");

	Params::URune_Weapon_Axatana_C_HandleResolveForRiposte_Params Parms{};

	Parms.CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue = CallFunc_Has_Enough_Resolve_To_Empowered_Riposte__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.Rune_Disable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::Rune_Disable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "Rune_Disable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.OnTransformingAxatana
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        TransformID                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_Axatana_C::OnTransformingAxatana(class FName TransformID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "OnTransformingAxatana");

	Params::URune_Weapon_Axatana_C_OnTransformingAxatana_Params Parms{};

	Parms.TransformID = TransformID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.OnTransformingAxatana_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::OnTransformingAxatana_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "OnTransformingAxatana_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.Rune_Enable
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::Rune_Enable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "Rune_Enable");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.SubToDamageApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::SubToDamageApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "SubToDamageApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.UnsubFromDamageApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::UnsubFromDamageApplied()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "UnsubFromDamageApplied");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.OnDamageAppliedToHitActor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::OnDamageAppliedToHitActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "OnDamageAppliedToHitActor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.StaminaBuffOver
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::StaminaBuffOver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "StaminaBuffOver");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.OnEnemyGettingHit
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_AttackType         AttackType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      HitEnemy                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ComboCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ComboMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_Axatana_C::OnEnemyGettingHit(enum class Enum_AttackType AttackType, class AActor* HitEnemy, int32 ComboCount, int32 ComboMax)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "OnEnemyGettingHit");

	Params::URune_Weapon_Axatana_C_OnEnemyGettingHit_Params Parms{};

	Parms.AttackType = AttackType;
	Parms.HitEnemy = HitEnemy;
	Parms.ComboCount = ComboCount;
	Parms.ComboMax = ComboMax;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.SubToOnEnemyGettingHitWithAttackType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::SubToOnEnemyGettingHitWithAttackType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "SubToOnEnemyGettingHitWithAttackType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.UnsubFromOnEnemyGettingHitWithAttackType
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void URune_Weapon_Axatana_C::UnsubFromOnEnemyGettingHitWithAttackType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "UnsubFromOnEnemyGettingHitWithAttackType");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Rune_Weapon_Axatana.Rune_Weapon_Axatana_C.ExecuteUbergraph_Rune_Weapon_Axatana
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetChanceForTier_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_CustomEvent_TransformID                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_AttackType         K2Node_CustomEvent_AttackType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_HitEnemy                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ComboCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ComboMax                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_WasKilledThisFrame_bYes                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UBuffObjectBleedDPS_C*       CallFunc_SpawnObject_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetChanceForTier_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetCurrentHitActor_HitActor                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           K2Node_DynamicCast_AsEnemy_Character_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetCurrentHitActor_HitActor_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldRiposte_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddStatusIcon_IconID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetAxatanaSpawnLoc_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Axatana_TransformDamage_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetValueForTier_RuneX                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URune_Weapon_Axatana_C::ExecuteUbergraph_Rune_Weapon_Axatana(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystem* Temp_object_Variable_1, float CallFunc_GetChanceForTier_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_Variable, float CallFunc_GetChanceForTier_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchName_CmpSuccess, class FName K2Node_CustomEvent_TransformID, bool K2Node_SwitchName_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetChanceForTier_ReturnValue_2, float CallFunc_RandomFloat_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchName_CmpSuccess_2, float CallFunc_GetChanceForTier_ReturnValue_3, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, class UBuffLifeStealForNextXHit_C* CallFunc_SpawnObject_ReturnValue, bool K2Node_SwitchName_CmpSuccess_3, enum class Enum_AttackType K2Node_CustomEvent_AttackType, class AActor* K2Node_CustomEvent_HitEnemy, int32 K2Node_CustomEvent_ComboCount, int32 K2Node_CustomEvent_ComboMax, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchName_CmpSuccess_4, bool CallFunc_WasKilledThisFrame_bYes, float CallFunc_GetChanceForTier_ReturnValue_4, float CallFunc_RandomFloat_ReturnValue_2, bool CallFunc_Less_FloatFloat_ReturnValue_2, float CallFunc_GetChanceForTier_ReturnValue_5, float CallFunc_RandomFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBuffObjectBleedDPS_C* CallFunc_SpawnObject_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetChanceForTier_ReturnValue_6, class AActor* CallFunc_GetCurrentHitActor_HitActor, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character_1, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetCurrentHitActor_HitActor_1, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldRiposte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_MakeLiteralFloat_ReturnValue_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, int32 CallFunc_AddStatusIcon_IconID, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, const struct FVector& CallFunc_GetAxatanaSpawnLoc_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_Axatana_TransformDamage_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_GetValueForTier_RuneX, float CallFunc_Conv_IntToFloat_ReturnValue, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Rune_Weapon_Axatana_C", "ExecuteUbergraph_Rune_Weapon_Axatana");

	Params::URune_Weapon_Axatana_C_ExecuteUbergraph_Rune_Weapon_Axatana_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue = CallFunc_GetChanceForTier_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetChanceForTier_ReturnValue_1 = CallFunc_GetChanceForTier_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CustomEvent_TransformID = K2Node_CustomEvent_TransformID;
	Parms.K2Node_SwitchName_CmpSuccess_1 = K2Node_SwitchName_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetChanceForTier_ReturnValue_2 = CallFunc_GetChanceForTier_ReturnValue_2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_2 = K2Node_SwitchName_CmpSuccess_2;
	Parms.CallFunc_GetChanceForTier_ReturnValue_3 = CallFunc_GetChanceForTier_ReturnValue_3;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_1 = CallFunc_Less_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess_3 = K2Node_SwitchName_CmpSuccess_3;
	Parms.K2Node_CustomEvent_AttackType = K2Node_CustomEvent_AttackType;
	Parms.K2Node_CustomEvent_HitEnemy = K2Node_CustomEvent_HitEnemy;
	Parms.K2Node_CustomEvent_ComboCount = K2Node_CustomEvent_ComboCount;
	Parms.K2Node_CustomEvent_ComboMax = K2Node_CustomEvent_ComboMax;
	Parms.K2Node_DynamicCast_AsEnemy_Character = K2Node_DynamicCast_AsEnemy_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchName_CmpSuccess_4 = K2Node_SwitchName_CmpSuccess_4;
	Parms.CallFunc_WasKilledThisFrame_bYes = CallFunc_WasKilledThisFrame_bYes;
	Parms.CallFunc_GetChanceForTier_ReturnValue_4 = CallFunc_GetChanceForTier_ReturnValue_4;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_2 = CallFunc_Less_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetChanceForTier_ReturnValue_5 = CallFunc_GetChanceForTier_ReturnValue_5;
	Parms.CallFunc_RandomFloat_ReturnValue_3 = CallFunc_RandomFloat_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue_3 = CallFunc_Less_FloatFloat_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SpawnObject_ReturnValue_1 = CallFunc_SpawnObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetChanceForTier_ReturnValue_6 = CallFunc_GetChanceForTier_ReturnValue_6;
	Parms.CallFunc_GetCurrentHitActor_HitActor = CallFunc_GetCurrentHitActor_HitActor;
	Parms.K2Node_DynamicCast_AsEnemy_Character_1 = K2Node_DynamicCast_AsEnemy_Character_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentHitActor_HitActor_1 = CallFunc_GetCurrentHitActor_HitActor_1;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldRiposte_ReturnValue = CallFunc_ShouldRiposte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1 = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1;
	Parms.CallFunc_AddStatusIcon_IconID = CallFunc_AddStatusIcon_IconID;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_GetAxatanaSpawnLoc_ReturnValue = CallFunc_GetAxatanaSpawnLoc_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetValueForTier_RuneX = CallFunc_GetValueForTier_RuneX;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


