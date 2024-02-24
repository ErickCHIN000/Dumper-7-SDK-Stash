#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C
// (Actor)

class UClass* ABPWeap_AR_TOR_Vengeance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_TOR_Vengeance_C");

	return Clss;
}


// BPWeap_AR_TOR_Vengeance_C BPWeap_AR_TOR_Vengeance.Default__BPWeap_AR_TOR_Vengeance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_TOR_Vengeance_C* ABPWeap_AR_TOR_Vengeance_C::GetDefaultObj()
{
	static class ABPWeap_AR_TOR_Vengeance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_TOR_Vengeance_C*>(ABPWeap_AR_TOR_Vengeance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.RemoveHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      HomingTarget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGbxActionComponent*         CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_TOR_Vengeance_C::RemoveHomingTarget(class AActor* HomingTarget, class UGbxActionComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "RemoveHomingTarget");

	Params::ABPWeap_AR_TOR_Vengeance_C_RemoveHomingTarget_Params Parms{};

	Parms.HomingTarget = HomingTarget;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsPlayingClass_ReturnValue = CallFunc_IsPlayingClass_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.InitBaseGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponMaterialEffectData   K2Node_MakeStruct_WeaponMaterialEffectData                       (NoDestructor)
// int32                              CallFunc_PlayDynamicMaterialEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_TOR_Vengeance_C::InitBaseGlow(const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "InitBaseGlow");

	Params::ABPWeap_AR_TOR_Vengeance_C_InitBaseGlow_Params Parms{};

	Parms.K2Node_MakeStruct_WeaponMaterialEffectData = K2Node_MakeStruct_WeaponMaterialEffectData;
	Parms.CallFunc_PlayDynamicMaterialEffect_ReturnValue = CallFunc_PlayDynamicMaterialEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.InitMarkerGlow
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeaponMaterialEffectData   K2Node_MakeStruct_WeaponMaterialEffectData                       (NoDestructor)
// int32                              CallFunc_PlayDynamicMaterialEffect_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_TOR_Vengeance_C::InitMarkerGlow(const struct FWeaponMaterialEffectData& K2Node_MakeStruct_WeaponMaterialEffectData, int32 CallFunc_PlayDynamicMaterialEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "InitMarkerGlow");

	Params::ABPWeap_AR_TOR_Vengeance_C_InitMarkerGlow_Params Parms{};

	Parms.K2Node_MakeStruct_WeaponMaterialEffectData = K2Node_MakeStruct_WeaponMaterialEffectData;
	Parms.CallFunc_PlayDynamicMaterialEffect_ReturnValue = CallFunc_PlayDynamicMaterialEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.InitHoming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_TOR_Vengeance_C::InitHoming(int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "InitHoming");

	Params::ABPWeap_AR_TOR_Vengeance_C_InitHoming_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.AddHomingTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Homing_Target                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_TOR_Vengeance_C::AddHomingTarget(class AActor* Homing_Target, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "AddHomingTarget");

	Params::ABPWeap_AR_TOR_Vengeance_C_AddHomingTarget_Params Parms{};

	Parms.Homing_Target = Homing_Target;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.ReEvaluateEmissive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::ReEvaluateEmissive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "ReEvaluateEmissive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.NotifySwitchedMode_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::NotifySwitchedMode_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "NotifySwitchedMode_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.InitializeElementalEmissive
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::InitializeElementalEmissive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "InitializeElementalEmissive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.SetEmissiveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                BaseColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HighlightColor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarkerBaseColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                MarkerHighlightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                HomingOverrideBase                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                NewParamHomingOverrideHighlight                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_TOR_Vengeance_C::SetEmissiveData(const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, const struct FLinearColor& MarkerBaseColor, const struct FLinearColor& MarkerHighlightColor, const struct FLinearColor& HomingOverrideBase, const struct FLinearColor& NewParamHomingOverrideHighlight)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "SetEmissiveData");

	Params::ABPWeap_AR_TOR_Vengeance_C_SetEmissiveData_Params Parms{};

	Parms.BaseColor = BaseColor;
	Parms.HighlightColor = HighlightColor;
	Parms.MarkerBaseColor = MarkerBaseColor;
	Parms.MarkerHighlightColor = MarkerHighlightColor;
	Parms.HomingOverrideBase = HomingOverrideBase;
	Parms.NewParamHomingOverrideHighlight = NewParamHomingOverrideHighlight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.Weapon_NotifyPutDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_TOR_Vengeance_C::Weapon_NotifyPutDown(class AWeapon* EventWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "Weapon_NotifyPutDown");

	Params::ABPWeap_AR_TOR_Vengeance_C_Weapon_NotifyPutDown_Params Parms{};

	Parms.EventWeapon = EventWeapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_TOR_Vengeance_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "Notify_ReloadEnded");

	Params::ABPWeap_AR_TOR_Vengeance_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.ModeSwitched
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::ModeSwitched()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "ModeSwitched");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.DetonateActiveProjectiles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_TOR_Vengeance_C::DetonateActiveProjectiles()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "DetonateActiveProjectiles");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_TOR_Vengeance.BPWeap_AR_TOR_Vengeance_C.ExecuteUbergraph_BPWeap_AR_TOR_Vengeance
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFiringPattern*              Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTargetLocked_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Event_BaseColor                                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_HighlightColor                                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_MarkerBaseColor                                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_MarkerHighlightColor                                (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_HomingOverrideBase                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Event_NewParamHomingOverrideHighlight                     (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFiringPattern*              Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class AWeapon*                     K2Node_CustomEvent_EventWeapon                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AProj_Weapon_BaseProjectile_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWeaponFireProjectileComponent*CallFunc_GetUseModeComponentByClass_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFiringPattern*              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPWeaponFireProjectileComponent_Torgue_C*CallFunc_GetUseModeComponentByClass_ReturnValue1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLightProjectileQueryData   K2Node_MakeStruct_LightProjectileQueryData                       (NoDestructor)

void ABPWeap_AR_TOR_Vengeance_C::ExecuteUbergraph_BPWeap_AR_TOR_Vengeance(int32 EntryPoint, class UFiringPattern* Temp_object_Variable, uint8 Temp_byte_Variable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsTargetLocked_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& K2Node_Event_BaseColor, const struct FLinearColor& K2Node_Event_HighlightColor, const struct FLinearColor& K2Node_Event_MarkerBaseColor, const struct FLinearColor& K2Node_Event_MarkerHighlightColor, const struct FLinearColor& K2Node_Event_HomingOverrideBase, const struct FLinearColor& K2Node_Event_NewParamHomingOverrideHighlight, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UFiringPattern* Temp_object_Variable1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AWeapon* K2Node_CustomEvent_EventWeapon, class AProj_Weapon_BaseProjectile_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class UWeaponFireProjectileComponent* CallFunc_GetUseModeComponentByClass_ReturnValue, class UFiringPattern* K2Node_Select_Default, float CallFunc_GetValueOfAttribute_ReturnValue, class UBPWeaponFireProjectileComponent_Torgue_C* CallFunc_GetUseModeComponentByClass_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_TOR_Vengeance_C", "ExecuteUbergraph_BPWeap_AR_TOR_Vengeance");

	Params::ABPWeap_AR_TOR_Vengeance_C_ExecuteUbergraph_BPWeap_AR_TOR_Vengeance_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsTargetLocked_ReturnValue = CallFunc_IsTargetLocked_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_BaseColor = K2Node_Event_BaseColor;
	Parms.K2Node_Event_HighlightColor = K2Node_Event_HighlightColor;
	Parms.K2Node_Event_MarkerBaseColor = K2Node_Event_MarkerBaseColor;
	Parms.K2Node_Event_MarkerHighlightColor = K2Node_Event_MarkerHighlightColor;
	Parms.K2Node_Event_HomingOverrideBase = K2Node_Event_HomingOverrideBase;
	Parms.K2Node_Event_NewParamHomingOverrideHighlight = K2Node_Event_NewParamHomingOverrideHighlight;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CustomEvent_EventWeapon = K2Node_CustomEvent_EventWeapon;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.CallFunc_GetUseModeComponentByClass_ReturnValue = CallFunc_GetUseModeComponentByClass_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;
	Parms.CallFunc_GetUseModeComponentByClass_ReturnValue1 = CallFunc_GetUseModeComponentByClass_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_MakeStruct_LightProjectileQueryData = K2Node_MakeStruct_LightProjectileQueryData;

	UObject::ProcessEvent(Func, &Parms);

}

}


