#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C
// (Actor)

class UClass* ABPWeap_AR_VLA_ManualTrans_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWeap_AR_VLA_ManualTrans_C");

	return Clss;
}


// BPWeap_AR_VLA_ManualTrans_C BPWeap_AR_VLA_ManualTrans.Default__BPWeap_AR_VLA_ManualTrans_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABPWeap_AR_VLA_ManualTrans_C* ABPWeap_AR_VLA_ManualTrans_C::GetDefaultObj()
{
	static class ABPWeap_AR_VLA_ManualTrans_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABPWeap_AR_VLA_ManualTrans_C*>(ABPWeap_AR_VLA_ManualTrans_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.ReAddStatusCount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              StackCount                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_VLA_ManualTrans_C::ReAddStatusCount(int32 StackCount, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, int32 Temp_int_Variable, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "ReAddStatusCount");

	Params::ABPWeap_AR_VLA_ManualTrans_C_ReAddStatusCount_Params Parms{};

	Parms.StackCount = StackCount;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.GetStatusStackCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Number_Of_Instances                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectQuery          K2Node_MakeStruct_StatusEffectQuery                              (NoDestructor)
// struct FStatusEffectQueryResult    CallFunc_QueryStatusEffect_ReturnValue                           (NoDestructor)

void ABPWeap_AR_VLA_ManualTrans_C::GetStatusStackCount(int32* Number_Of_Instances, const struct FStatusEffectQuery& K2Node_MakeStruct_StatusEffectQuery, const struct FStatusEffectQueryResult& CallFunc_QueryStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "GetStatusStackCount");

	Params::ABPWeap_AR_VLA_ManualTrans_C_GetStatusStackCount_Params Parms{};

	Parms.K2Node_MakeStruct_StatusEffectQuery = K2Node_MakeStruct_StatusEffectQuery;
	Parms.CallFunc_QueryStatusEffect_ReturnValue = CallFunc_QueryStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Number_Of_Instances != nullptr)
		*Number_Of_Instances = Parms.Number_Of_Instances;

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.ClearStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStatusEffectRemoveSpec     K2Node_MakeStruct_StatusEffectRemoveSpec                         (NoDestructor)
// bool                               CallFunc_RemoveStatusEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_ManualTrans_C::ClearStatus(const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "ClearStatus");

	Params::ABPWeap_AR_VLA_ManualTrans_C_ClearStatus_Params Parms{};

	Parms.K2Node_MakeStruct_StatusEffectRemoveSpec = K2Node_MakeStruct_StatusEffectRemoveSpec;
	Parms.CallFunc_RemoveStatusEffect_ReturnValue = CallFunc_RemoveStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.Notify_ReloadStarted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAutoReload                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_ManualTrans_C::Notify_ReloadStarted(bool bAutoReload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "Notify_ReloadStarted");

	Params::ABPWeap_AR_VLA_ManualTrans_C_Notify_ReloadStarted_Params Parms{};

	Parms.bAutoReload = bAutoReload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.Notify_ReloadEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABPWeap_AR_VLA_ManualTrans_C::Notify_ReloadEnded(bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "Notify_ReloadEnded");

	Params::ABPWeap_AR_VLA_ManualTrans_C_Notify_ReloadEnded_Params Parms{};

	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.OnPutDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_VLA_ManualTrans_C::OnPutDown(class AWeapon* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "OnPutDown");

	Params::ABPWeap_AR_VLA_ManualTrans_C_OnPutDown_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.CheckInUse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::CheckInUse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "CheckInUse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.NotifySwitchedMode_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::NotifySwitchedMode_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "NotifySwitchedMode_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.WeaponAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::WeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "WeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.CloseGate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::CloseGate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "CloseGate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.Audio_ShiftUp
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::Audio_ShiftUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "Audio_ShiftUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.Audio_Downshift
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::Audio_Downshift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "Audio_Downshift");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.Audio_ShiftFail
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABPWeap_AR_VLA_ManualTrans_C::Audio_ShiftFail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "Audio_ShiftFail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWeap_AR_VLA_ManualTrans.BPWeap_AR_VLA_ManualTrans_C.ExecuteUbergraph_BPWeap_AR_VLA_ManualTrans
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                Temp_object_Variable7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAutoReload                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBPHeatComponent_CoV_ManualTrans_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UBPHeatComponent_CoV_C*      CallFunc_GetComponentByClass_ReturnValue1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)
// class AOakCharacter_Player*        K2Node_DynamicCast_AsOak_Character_Player                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveAttributeModifier_ReturnValue2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AWeapon*                     K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetStatusStackCount_Number_Of_Instances                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetStatusStackCount_Number_Of_Instances1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsing_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSwitchingModes_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue                   (None)
// enum class EGbxAttributeModifierActionExecOutputCallFunc_AddModifierToGbxAttribute_ModifierActionResult1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAttributeModifierHandle CallFunc_AddModifierToGbxAttribute_ReturnValue1                  (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum1_CmpSuccess                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec1                              (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue1                            (NoDestructor, ContainsInstancedReference)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseAudioComponent*        CallFunc_GetDefaultWwiseComponent_ReturnValue1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue1                             (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseSwitch*                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABPWeap_AR_VLA_ManualTrans_C::ExecuteUbergraph_BPWeap_AR_VLA_ManualTrans(int32 EntryPoint, class UWwiseSwitch* Temp_object_Variable, class UWwiseSwitch* Temp_object_Variable1, class UWwiseSwitch* Temp_object_Variable2, class UWwiseSwitch* Temp_object_Variable3, class UWwiseSwitch* Temp_object_Variable4, class UWwiseSwitch* Temp_object_Variable5, class UWwiseSwitch* Temp_object_Variable6, class UWwiseSwitch* Temp_object_Variable7, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bAutoReload, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, class UBPHeatComponent_CoV_ManualTrans_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_RemoveAttributeModifier_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBPHeatComponent_CoV_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class AActor* CallFunc_GetOwner_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveAttributeModifier_ReturnValue1, bool CallFunc_RemoveAttributeModifier_ReturnValue2, class AWeapon* K2Node_Event_Weapon, int32 CallFunc_GetStatusStackCount_Number_Of_Instances, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetStatusStackCount_Number_Of_Instances1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsUsing_ReturnValue, bool CallFunc_IsSwitchingModes_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, bool CallFunc_BooleanOR_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue, enum class EGbxAttributeModifierActionExecOutput CallFunc_AddModifierToGbxAttribute_ModifierActionResult1, const struct FGbxAttributeModifierHandle& CallFunc_AddModifierToGbxAttribute_ReturnValue1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue, class UWwiseAudioComponent* CallFunc_GetDefaultWwiseComponent_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue1, int32 Temp_int_Variable, class UWwiseSwitch* K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue1, int32 CallFunc_Conv_ByteToInt_ReturnValue2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWeap_AR_VLA_ManualTrans_C", "ExecuteUbergraph_BPWeap_AR_VLA_ManualTrans");

	Params::ABPWeap_AR_VLA_ManualTrans_C_ExecuteUbergraph_BPWeap_AR_VLA_ManualTrans_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable1 = Temp_object_Variable1;
	Parms.Temp_object_Variable2 = Temp_object_Variable2;
	Parms.Temp_object_Variable3 = Temp_object_Variable3;
	Parms.Temp_object_Variable4 = Temp_object_Variable4;
	Parms.Temp_object_Variable5 = Temp_object_Variable5;
	Parms.Temp_object_Variable6 = Temp_object_Variable6;
	Parms.Temp_object_Variable7 = Temp_object_Variable7;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bAutoReload = K2Node_Event_bAutoReload;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue = CallFunc_RemoveAttributeModifier_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue1 = CallFunc_GetComponentByClass_ReturnValue1;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Character_Player = K2Node_DynamicCast_AsOak_Character_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue1 = CallFunc_RemoveAttributeModifier_ReturnValue1;
	Parms.CallFunc_RemoveAttributeModifier_ReturnValue2 = CallFunc_RemoveAttributeModifier_ReturnValue2;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.CallFunc_GetStatusStackCount_Number_Of_Instances = CallFunc_GetStatusStackCount_Number_Of_Instances;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStatusStackCount_Number_Of_Instances1 = CallFunc_GetStatusStackCount_Number_Of_Instances1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsUsing_ReturnValue = CallFunc_IsUsing_ReturnValue;
	Parms.CallFunc_IsSwitchingModes_ReturnValue = CallFunc_IsSwitchingModes_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult = CallFunc_AddModifierToGbxAttribute_ModifierActionResult;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue = CallFunc_AddModifierToGbxAttribute_ReturnValue;
	Parms.CallFunc_AddModifierToGbxAttribute_ModifierActionResult1 = CallFunc_AddModifierToGbxAttribute_ModifierActionResult1;
	Parms.CallFunc_AddModifierToGbxAttribute_ReturnValue1 = CallFunc_AddModifierToGbxAttribute_ReturnValue1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum1_CmpSuccess = K2Node_SwitchEnum1_CmpSuccess;
	Parms.K2Node_MakeStruct_StatusEffectSpec1 = K2Node_MakeStruct_StatusEffectSpec1;
	Parms.CallFunc_AddStatusEffect_ReturnValue1 = CallFunc_AddStatusEffect_ReturnValue1;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue = CallFunc_GetDefaultWwiseComponent_ReturnValue;
	Parms.CallFunc_GetDefaultWwiseComponent_ReturnValue1 = CallFunc_GetDefaultWwiseComponent_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue1 = CallFunc_PostWwiseEvent_ReturnValue1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue1 = CallFunc_Conv_ByteToInt_ReturnValue1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue2 = CallFunc_Conv_ByteToInt_ReturnValue2;

	UObject::ProcessEvent(Func, &Parms);

}

}


