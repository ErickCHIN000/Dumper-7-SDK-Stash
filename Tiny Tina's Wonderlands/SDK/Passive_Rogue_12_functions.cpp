#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Rogue_12.Passive_Rogue_12_C
// (None)

class UClass* UPassive_Rogue_12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Rogue_12_C");

	return Clss;
}


// Passive_Rogue_12_C Passive_Rogue_12.Default__Passive_Rogue_12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Rogue_12_C* UPassive_Rogue_12_C::GetDefaultObj()
{
	static class UPassive_Rogue_12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Rogue_12_C*>(UPassive_Rogue_12_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Rogue_12.Passive_Rogue_12_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Rogue_12_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_12_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Rogue_12.Passive_Rogue_12_C.OakPassiveOnCausedElementalEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           Spec                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UPassive_Rogue_12_C::OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_12_C", "OakPassiveOnCausedElementalEffect");

	Params::UPassive_Rogue_12_C_OakPassiveOnCausedElementalEffect_Params Parms{};

	Parms.Target = Target;
	Parms.Spec = Spec;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Rogue_12.Passive_Rogue_12_C.ExecuteUbergraph_Passive_Rogue_12
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Target                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectSpec           K2Node_Event_Spec                                                (NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetAssociatedPlayerController_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakElementalEffectData*     K2Node_DynamicCast_AsOak_Elemental_Effect_Data                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTeamComponent*              CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsHostile_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_RunEnvQueryForBestActor_ResultActor                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RunEnvQueryForBestActor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_TriggerElementalEffect_ReturnValue                      (NoDestructor, ContainsInstancedReference)
// TArray<class UClass*>              K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// struct FOakAbilityTimerSpec        K2Node_MakeStruct_OakAbilityTimerSpec                            (NoDestructor)
// bool                               CallFunc_IsAbilityTimerActive_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatusEffectInstanceReferenceCallFunc_TriggerElementalEffect_ReturnValue1                     (NoDestructor, ContainsInstancedReference)

void UPassive_Rogue_12_C::ExecuteUbergraph_Passive_Rogue_12(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class UOakElementalEffectData* K2Node_DynamicCast_AsOak_Elemental_Effect_Data, bool K2Node_DynamicCast_bSuccess, class UTeamComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsHostile_ReturnValue, class UClass* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue1, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue, TArray<class UClass*>& K2Node_MakeArray_Array, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, bool CallFunc_IsAbilityTimerActive_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class UClass* CallFunc_Array_Get_Item, const struct FStatusEffectInstanceReference& CallFunc_TriggerElementalEffect_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Rogue_12_C", "ExecuteUbergraph_Passive_Rogue_12");

	Params::UPassive_Rogue_12_C_ExecuteUbergraph_Passive_Rogue_12_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Target = K2Node_Event_Target;
	Parms.K2Node_Event_Spec = K2Node_Event_Spec;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetAssociatedPlayerController_ReturnValue = CallFunc_GetAssociatedPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsOak_Elemental_Effect_Data = K2Node_DynamicCast_AsOak_Elemental_Effect_Data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsHostile_ReturnValue = CallFunc_IsHostile_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue1 = CallFunc_Multiply_FloatFloat_ReturnValue1;
	Parms.CallFunc_RunEnvQueryForBestActor_ResultActor = CallFunc_RunEnvQueryForBestActor_ResultActor;
	Parms.CallFunc_RunEnvQueryForBestActor_ReturnValue = CallFunc_RunEnvQueryForBestActor_ReturnValue;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue1 = CallFunc_GetDataTableValueFromHandle_ReturnValue1;
	Parms.CallFunc_TriggerElementalEffect_ReturnValue = CallFunc_TriggerElementalEffect_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_OakAbilityTimerSpec = K2Node_MakeStruct_OakAbilityTimerSpec;
	Parms.CallFunc_IsAbilityTimerActive_ReturnValue = CallFunc_IsAbilityTimerActive_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TriggerElementalEffect_ReturnValue1 = CallFunc_TriggerElementalEffect_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


