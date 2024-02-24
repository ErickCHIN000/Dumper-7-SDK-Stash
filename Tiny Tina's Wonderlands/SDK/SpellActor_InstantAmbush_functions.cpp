#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_InstantAmbush.SpellActor_InstantAmbush_C
// (Actor)

class UClass* ASpellActor_InstantAmbush_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_InstantAmbush_C");

	return Clss;
}


// SpellActor_InstantAmbush_C SpellActor_InstantAmbush.Default__SpellActor_InstantAmbush_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_InstantAmbush_C* ASpellActor_InstantAmbush_C::GetDefaultObj()
{
	static class ASpellActor_InstantAmbush_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_InstantAmbush_C*>(ASpellActor_InstantAmbush_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.CacheHydraDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::CacheHydraDamage(float CallFunc_GetValueOfAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "CacheHydraDamage");

	Params::ASpellActor_InstantAmbush_C_CacheHydraDamage_Params Parms{};

	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.GetHydraFireLocation
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     Loc                                                              (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Rot                                                              (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::GetHydraFireLocation(enum class EHydraHeads Head, struct FVector* Loc, struct FRotator* Rot, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "GetHydraFireLocation");

	Params::ASpellActor_InstantAmbush_C_GetHydraFireLocation_Params Parms{};

	Parms.Head = Head;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;

	UObject::ProcessEvent(Func, &Parms);

	if (Loc != nullptr)
		*Loc = std::move(Parms.Loc);

	if (Rot != nullptr)
		*Rot = std::move(Parms.Rot);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HasValidTarget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAlive_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_InstantAmbush_C::HasValidTarget(bool* Res, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsAlive_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HasValidTarget");

	Params::ASpellActor_InstantAmbush_C_HasValidTarget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsAlive_ReturnValue = CallFunc_IsAlive_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.SetLifetime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetSpellDuration_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_InstantAmbush_C::SetLifetime(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetSpellDuration_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "SetLifetime");

	Params::ASpellActor_InstantAmbush_C_SetLifetime_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetSpellDuration_ReturnValue = CallFunc_GetSpellDuration_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.CacheSpellInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::CacheSpellInfo(bool* Res, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "CacheSpellInfo");

	Params::ASpellActor_InstantAmbush_C_CacheSpellInfo_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.TrackActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakGameInstance*            K2Node_DynamicCast_AsOak_Game_Instance                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ASpellActor_InstantAmbush_C::TrackActor(bool Enable, class APawn* CallFunc_GetInstigator_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UOakGameInstance* K2Node_DynamicCast_AsOak_Game_Instance, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "TrackActor");

	Params::ASpellActor_InstantAmbush_C_TrackActor_Params Parms{};

	Parms.Enable = Enable;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Game_Instance = K2Node_DynamicCast_AsOak_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HydraSpellActor_FireProjectile
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EHydraHeads             Head                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::HydraSpellActor_FireProjectile(enum class EHydraHeads Head)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HydraSpellActor_FireProjectile");

	Params::ASpellActor_InstantAmbush_C_HydraSpellActor_FireProjectile_Params Parms{};

	Parms.Head = Head;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HydraSpellActor_BeginAttacking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::HydraSpellActor_BeginAttacking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HydraSpellActor_BeginAttacking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.TryFidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::TryFidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "TryFidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HydraAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::HydraAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HydraAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.LookForHydraTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::LookForHydraTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "LookForHydraTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.Audio_Play_Despawn
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::Audio_Play_Despawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "Audio_Play_Despawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.Audio_Play_Spit
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     HeadLocation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::Audio_Play_Spit(const struct FVector& HeadLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "Audio_Play_Spit");

	Params::ASpellActor_InstantAmbush_C_Audio_Play_Spit_Params Parms{};

	Parms.HeadLocation = HeadLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.Audio_Play_Spawn
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::Audio_Play_Spawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "Audio_Play_Spawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.BeginCleanup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::BeginCleanup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "BeginCleanup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.PlayHydraDepsawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::PlayHydraDepsawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "PlayHydraDepsawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HydraSpellActor_FinishDespawn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::HydraSpellActor_FinishDespawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HydraSpellActor_FinishDespawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.BeginDepsawnAction
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::BeginDepsawnAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "BeginDepsawnAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.HydraSpellActor_Audio_SpawnAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ASpellActor_InstantAmbush_C::HydraSpellActor_Audio_SpawnAmmo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "HydraSpellActor_Audio_SpawnAmmo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SpellActor_InstantAmbush.SpellActor_InstantAmbush_C.ExecuteUbergraph_SpellActor_InstantAmbush
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FGbxActionRegister>  Temp_struct_Variable1                                            (ConstParm, ZeroConstructor, ReferenceParm)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EMoveComponentAction    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RandomUnitVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FForceSelection             CallFunc_Conv_FloatToForceSelection_ReturnValue                  (NoDestructor)
// enum class EHydraHeads             K2Node_Event_Head                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetHydraFireLocation_Loc                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetHydraFireLocation_Rot                                (IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetForwardVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTransform>          CallFunc_GeneratePointsOnFan_ReturnValue                         (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue2                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetDirectionUnitVector_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromX_ReturnValue                                (IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasValidTarget_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetActorSocket_ReturnValue                              (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CacheSpellInfo_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue3                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_HeadLocation                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue1                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue2                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue3                        (None)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue1                    (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseEvent*                 CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue4                        (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               Temp_bool_Has_Been_Initd_Variable1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location1                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation1                                (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale1                                   (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FOakLightProjectileInitializationDataK2Node_MakeStruct_OakLightProjectileInitializationData           (ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue4                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidTarget_Res1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAction*                  CallFunc_K2Play_ReturnValue1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostAttachedEvent_ReturnValue                           (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue1                       (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue1                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASpellActor_InstantAmbush_C::ExecuteUbergraph_SpellActor_InstantAmbush(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, TArray<struct FGbxActionRegister>& Temp_struct_Variable1, float Temp_float_Variable, bool Temp_bool_Variable, enum class EMoveComponentAction Temp_byte_Variable, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FForceSelection& CallFunc_Conv_FloatToForceSelection_ReturnValue, enum class EHydraHeads K2Node_Event_Head, const struct FVector& CallFunc_GetHydraFireLocation_Loc, const struct FRotator& CallFunc_GetHydraFireLocation_Rot, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UGbxAction* CallFunc_K2Play_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, bool CallFunc_HasValidTarget_Res, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, float K2Node_Select_Default, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FTransform& CallFunc_GetActorSocket_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue1, bool CallFunc_CacheSpellInfo_Res, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue3, const struct FVector& K2Node_CustomEvent_HeadLocation, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue2, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue3, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue1, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue4, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable1, int32 Temp_int_Array_Index_Variable, const struct FTransform& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue4, bool CallFunc_HasValidTarget_Res1, class UGbxAction* CallFunc_K2Play_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue1, bool CallFunc_Less_IntInt_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpellActor_InstantAmbush_C", "ExecuteUbergraph_SpellActor_InstantAmbush");

	Params::ASpellActor_InstantAmbush_C_ExecuteUbergraph_SpellActor_InstantAmbush_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable1 = Temp_struct_Variable1;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_RandomUnitVector_ReturnValue = CallFunc_RandomUnitVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_Conv_FloatToForceSelection_ReturnValue = CallFunc_Conv_FloatToForceSelection_ReturnValue;
	Parms.K2Node_Event_Head = K2Node_Event_Head;
	Parms.CallFunc_GetHydraFireLocation_Loc = CallFunc_GetHydraFireLocation_Loc;
	Parms.CallFunc_GetHydraFireLocation_Rot = CallFunc_GetHydraFireLocation_Rot;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetForwardVector_ReturnValue = CallFunc_GetForwardVector_ReturnValue;
	Parms.CallFunc_GeneratePointsOnFan_ReturnValue = CallFunc_GeneratePointsOnFan_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_K2Play_ReturnValue = CallFunc_K2Play_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue1 = CallFunc_K2_GetActorLocation_ReturnValue1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue2 = CallFunc_K2_GetActorLocation_ReturnValue2;
	Parms.CallFunc_GetDirectionUnitVector_ReturnValue = CallFunc_GetDirectionUnitVector_ReturnValue;
	Parms.CallFunc_MakeRotFromX_ReturnValue = CallFunc_MakeRotFromX_ReturnValue;
	Parms.CallFunc_HasValidTarget_Res = CallFunc_HasValidTarget_Res;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_GetActorSocket_ReturnValue = CallFunc_GetActorSocket_ReturnValue;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_CacheSpellInfo_Res = CallFunc_CacheSpellInfo_Res;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue3 = CallFunc_K2_GetActorLocation_ReturnValue3;
	Parms.K2Node_CustomEvent_HeadLocation = K2Node_CustomEvent_HeadLocation;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue1 = CallFunc_PostEventAtLocation_ReturnValue1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue2 = CallFunc_PostEventAtLocation_ReturnValue2;
	Parms.CallFunc_PostEventAtLocation_ReturnValue3 = CallFunc_PostEventAtLocation_ReturnValue3;
	Parms.CallFunc_GetClassElementalType_ReturnValue1 = CallFunc_GetClassElementalType_ReturnValue1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue1 = CallFunc_K2_GetComponentLocation_ReturnValue1;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.CallFunc_PostEventAtLocation_ReturnValue4 = CallFunc_PostEventAtLocation_ReturnValue4;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable1 = Temp_bool_Has_Been_Initd_Variable1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable1 = Temp_bool_IsClosed_Variable1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakTransform_Location1 = CallFunc_BreakTransform_Location1;
	Parms.CallFunc_BreakTransform_Rotation1 = CallFunc_BreakTransform_Rotation1;
	Parms.CallFunc_BreakTransform_Scale1 = CallFunc_BreakTransform_Scale1;
	Parms.K2Node_MakeStruct_OakLightProjectileInitializationData = K2Node_MakeStruct_OakLightProjectileInitializationData;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue4 = CallFunc_K2_GetActorLocation_ReturnValue4;
	Parms.CallFunc_HasValidTarget_Res1 = CallFunc_HasValidTarget_Res1;
	Parms.CallFunc_K2Play_ReturnValue1 = CallFunc_K2Play_ReturnValue1;
	Parms.CallFunc_PostAttachedEvent_ReturnValue = CallFunc_PostAttachedEvent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue1 = CallFunc_Multiply_VectorFloat_ReturnValue1;
	Parms.CallFunc_Add_VectorVector_ReturnValue1 = CallFunc_Add_VectorVector_ReturnValue1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


