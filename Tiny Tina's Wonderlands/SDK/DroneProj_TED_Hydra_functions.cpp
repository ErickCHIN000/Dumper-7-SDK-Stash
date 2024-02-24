#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DroneProj_TED_Hydra.DroneProj_TED_Hydra_C
// (Actor)

class UClass* ADroneProj_TED_Hydra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DroneProj_TED_Hydra_C");

	return Clss;
}


// DroneProj_TED_Hydra_C DroneProj_TED_Hydra.Default__DroneProj_TED_Hydra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADroneProj_TED_Hydra_C* ADroneProj_TED_Hydra_C::GetDefaultObj()
{
	static class ADroneProj_TED_Hydra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADroneProj_TED_Hydra_C*>(ADroneProj_TED_Hydra_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.GetHydraDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// float                              Res                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProj_TED_Hydra_C::GetHydraDuration(float* Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "GetHydraDuration");

	Params::ADroneProj_TED_Hydra_C_GetHydraDuration_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Res != nullptr)
		*Res = Parms.Res;

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.CompanionDespawnActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::CompanionDespawnActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "CompanionDespawnActions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.CompanionSpawnActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::CompanionSpawnActions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "CompanionSpawnActions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.FireDroneBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::FireDroneBeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "FireDroneBeam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.OnTargetDied
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamageReceiver                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProj_TED_Hydra_C::OnTargetDied(class AActor* DamageReceiver, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "OnTargetDied");

	Params::ADroneProj_TED_Hydra_C_OnTargetDied_Params Parms{};

	Parms.DamageReceiver = DamageReceiver;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.KillBeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::KillBeam()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "KillBeam");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.SetBeamKillTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KillNow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ADroneProj_TED_Hydra_C::SetBeamKillTimer(bool KillNow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "SetBeamKillTimer");

	Params::ADroneProj_TED_Hydra_C_SetBeamKillTimer_Params Parms{};

	Parms.KillNow = KillNow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProj_TED_Hydra_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "ReceiveEndPlay");

	Params::ADroneProj_TED_Hydra_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.FireDroneWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::FireDroneWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "FireDroneWeapon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.CacheDamageValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::CacheDamageValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "CacheDamageValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.SetPixieHydraVisuals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ADroneProj_TED_Hydra_C::SetPixieHydraVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "SetPixieHydraVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DroneProj_TED_Hydra.DroneProj_TED_Hydra_C.ExecuteUbergraph_DroneProj_TED_Hydra
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_CheckClawElement_ReturnedElement                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckClawElement_bIsValidElement                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EOakElementalType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponFireProjectileComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGbxAttributeInteger_Value                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakGbxAttributeInteger_BaseValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Map_Find_Value                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetDroneHydraFireSocket_Res                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment                            (NoDestructor, ContainsInstancedReference)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_PlayerEnemyInteractions_C>K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCompanionTargetingSocket_Socket                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLightBeamAttachment        K2Node_MakeStruct_LightBeamAttachment1                           (NoDestructor, ContainsInstancedReference)
// enum class EOakElementalType       CallFunc_GetClassElementalType_ReturnValue1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 CallFunc_Map_Find_Value1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// class AActor*                      K2Node_Event_DamageReceiver                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue1                        (NoDestructor)
// float                              CallFunc_GetFireRateVariance_Res                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KillNow                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue2                        (NoDestructor)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasValidTarget_Res                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetFireRate_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeaponFireProjectileComponent*CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_CheckClawElement_ReturnedElement1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckClawElement_bIsValidElement1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_Select3_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select4_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostEventAtLocation_ReturnValue                         (None)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_Select5_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADroneProj_TED_Hydra_C::ExecuteUbergraph_DroneProj_TED_Hydra(int32 EntryPoint, class UClass* CallFunc_CheckClawElement_ReturnedElement, bool CallFunc_CheckClawElement_bIsValidElement, float Temp_float_Variable, float Temp_float_Variable1, bool Temp_bool_Variable, float Temp_float_Variable2, bool Temp_bool_Variable1, float Temp_float_Variable3, enum class EOakElementalType Temp_byte_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable1, class FName Temp_name_Variable2, class FName Temp_name_Variable3, class FName Temp_name_Variable4, class FName Temp_name_Variable5, bool Temp_bool_Variable2, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue, bool Temp_bool_Variable3, class FName K2Node_Select_Default, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_BreakGbxAttributeInteger_Value, int32 CallFunc_BreakGbxAttributeInteger_BaseValue, int32 CallFunc_Max_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_GetDroneHydraFireSocket_Res, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float K2Node_Select1_Default, TScriptInterface<class IBPI_PlayerEnemyInteractions_C> K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions, bool K2Node_DynamicCast_bSuccess, float CallFunc_Multiply_FloatFloat_ReturnValue, class FName CallFunc_GetCompanionTargetingSocket_Socket, const struct FLightBeamAttachment& K2Node_MakeStruct_LightBeamAttachment1, enum class EOakElementalType CallFunc_GetClassElementalType_ReturnValue1, bool CallFunc_Not_PreBool_ReturnValue, class UWwiseEvent* CallFunc_Map_Find_Value1, bool CallFunc_Map_Find_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* K2Node_Event_DamageReceiver, class AActor* K2Node_Event_DamageCauser, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, float CallFunc_GetFireRateVariance_Res, bool K2Node_CustomEvent_KillNow, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue2, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_HasValidTarget_Res, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetFireRate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue2, bool Temp_bool_Variable4, float K2Node_Select2_Default, class UWeaponFireProjectileComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class UClass* CallFunc_CheckClawElement_ReturnedElement1, bool CallFunc_CheckClawElement_bIsValidElement1, class UClass* K2Node_Select3_Default, bool CallFunc_Greater_IntInt_ReturnValue, float K2Node_Select4_Default, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostEventAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UClass* K2Node_Select5_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DroneProj_TED_Hydra_C", "ExecuteUbergraph_DroneProj_TED_Hydra");

	Params::ADroneProj_TED_Hydra_C_ExecuteUbergraph_DroneProj_TED_Hydra_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_CheckClawElement_ReturnedElement = CallFunc_CheckClawElement_ReturnedElement;
	Parms.CallFunc_CheckClawElement_bIsValidElement = CallFunc_CheckClawElement_bIsValidElement;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable1 = Temp_float_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable2 = Temp_float_Variable2;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_float_Variable3 = Temp_float_Variable3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable1 = Temp_name_Variable1;
	Parms.Temp_name_Variable2 = Temp_name_Variable2;
	Parms.Temp_name_Variable3 = Temp_name_Variable3;
	Parms.Temp_name_Variable4 = Temp_name_Variable4;
	Parms.Temp_name_Variable5 = Temp_name_Variable5;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.CallFunc_GetClassElementalType_ReturnValue = CallFunc_GetClassElementalType_ReturnValue;
	Parms.Temp_bool_Variable3 = Temp_bool_Variable3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_BreakGbxAttributeInteger_Value = CallFunc_BreakGbxAttributeInteger_Value;
	Parms.CallFunc_BreakGbxAttributeInteger_BaseValue = CallFunc_BreakGbxAttributeInteger_BaseValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDroneHydraFireSocket_Res = CallFunc_GetDroneHydraFireSocket_Res;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.K2Node_MakeStruct_LightBeamAttachment = K2Node_MakeStruct_LightBeamAttachment;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions = K2Node_DynamicCast_AsBPI_Player_Enemy_Interactions;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCompanionTargetingSocket_Socket = CallFunc_GetCompanionTargetingSocket_Socket;
	Parms.K2Node_MakeStruct_LightBeamAttachment1 = K2Node_MakeStruct_LightBeamAttachment1;
	Parms.CallFunc_GetClassElementalType_ReturnValue1 = CallFunc_GetClassElementalType_ReturnValue1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Map_Find_Value1 = CallFunc_Map_Find_Value1;
	Parms.CallFunc_Map_Find_ReturnValue1 = CallFunc_Map_Find_ReturnValue1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_DamageReceiver = K2Node_Event_DamageReceiver;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue1 = CallFunc_K2_SetTimerDelegate_ReturnValue1;
	Parms.CallFunc_GetFireRateVariance_Res = CallFunc_GetFireRateVariance_Res;
	Parms.K2Node_CustomEvent_KillNow = K2Node_CustomEvent_KillNow;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue2 = CallFunc_K2_SetTimerDelegate_ReturnValue2;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_HasValidTarget_Res = CallFunc_HasValidTarget_Res;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFireRate_ReturnValue = CallFunc_GetFireRate_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue2 = CallFunc_Multiply_FloatFloat_ReturnValue2;
	Parms.Temp_bool_Variable4 = Temp_bool_Variable4;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue1 = CallFunc_GetInstigator_ReturnValue1;
	Parms.CallFunc_CheckClawElement_ReturnedElement1 = CallFunc_CheckClawElement_ReturnedElement1;
	Parms.CallFunc_CheckClawElement_bIsValidElement1 = CallFunc_CheckClawElement_bIsValidElement1;
	Parms.K2Node_Select3_Default = K2Node_Select3_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select4_Default = K2Node_Select4_Default;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_PostEventAtLocation_ReturnValue = CallFunc_PostEventAtLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_Select5_Default = K2Node_Select5_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


