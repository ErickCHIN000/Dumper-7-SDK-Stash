#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Ranger_07.Passive_Ranger_07_C
// (None)

class UClass* UPassive_Ranger_07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Ranger_07_C");

	return Clss;
}


// Passive_Ranger_07_C Passive_Ranger_07.Default__Passive_Ranger_07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Ranger_07_C* UPassive_Ranger_07_C::GetDefaultObj()
{
	static class UPassive_Ranger_07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Ranger_07_C*>(UPassive_Ranger_07_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Ranger_07.Passive_Ranger_07_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_07_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_07_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_07.Passive_Ranger_07_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Ranger_07_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_07_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Ranger_07.Passive_Ranger_07_C.ReviveSuccess
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Revived_By                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Ranger_07_C::ReviveSuccess(class AActor* Revived_By)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_07_C", "ReviveSuccess");

	Params::UPassive_Ranger_07_C_ReviveSuccess_Params Parms{};

	Parms.Revived_By = Revived_By;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Passive_Ranger_07.Passive_Ranger_07_C.ExecuteUbergraph_Passive_Ranger_07
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_Player_C>K2Node_DynamicCast_AsIBPChar_Player                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGbxAbility*                 CallFunc_GetClassFeat_Res                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIFeat_Ranger_C>K2Node_DynamicCast_AsIFeat_Ranger                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMushroomCompanion_Ref                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMushroomCompanion_Res                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIBPChar_MushroomCompanion_C>K2Node_DynamicCast_AsIBPChar_Mushroom_Companion                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess2                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_07_Set_Enabled_Res                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIFeat_Ranger_C>K2Node_DynamicCast_AsIFeat_Ranger1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess3                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetMushroomCompanion_Ref1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetMushroomCompanion_Res1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_Revived_By                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIBPChar_MushroomCompanion_C>K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess4                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Passive_Ranger_07_Set_Enabled_Res1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)
// class UOakPlayerAbilityManagerComponent*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBPEventHub_PlayerCharacter_C*K2Node_DynamicCast_AsBPEvent_Hub_Player_Character                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess5                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStatusEffectSpec           K2Node_MakeStruct_StatusEffectSpec                               (NoDestructor)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1         (NoDestructor)
// struct FStatusEffectInstanceReferenceCallFunc_AddStatusEffect_ReturnValue                             (NoDestructor, ContainsInstancedReference)

void UPassive_Ranger_07_C::ExecuteUbergraph_Passive_Ranger_07(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxAbility* CallFunc_GetClassFeat_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger, bool K2Node_DynamicCast_bSuccess1, class AActor* CallFunc_GetMushroomCompanion_Ref, bool CallFunc_GetMushroomCompanion_Res, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion, bool K2Node_DynamicCast_bSuccess2, bool CallFunc_Passive_Ranger_07_Set_Enabled_Res, TScriptInterface<class IIFeat_Ranger_C> K2Node_DynamicCast_AsIFeat_Ranger1, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_GetMushroomCompanion_Ref1, bool CallFunc_GetMushroomCompanion_Res1, class AActor* K2Node_CustomEvent_Revived_By, TScriptInterface<class IIBPChar_MushroomCompanion_C> K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_Passive_Ranger_07_Set_Enabled_Res1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess5, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_07_C", "ExecuteUbergraph_Passive_Ranger_07");

	Params::UPassive_Ranger_07_C_ExecuteUbergraph_Passive_Ranger_07_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsIBPChar_Player = K2Node_DynamicCast_AsIBPChar_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetClassFeat_Res = CallFunc_GetClassFeat_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Ranger = K2Node_DynamicCast_AsIFeat_Ranger;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_GetMushroomCompanion_Ref = CallFunc_GetMushroomCompanion_Ref;
	Parms.CallFunc_GetMushroomCompanion_Res = CallFunc_GetMushroomCompanion_Res;
	Parms.K2Node_DynamicCast_AsIBPChar_Mushroom_Companion = K2Node_DynamicCast_AsIBPChar_Mushroom_Companion;
	Parms.K2Node_DynamicCast_bSuccess2 = K2Node_DynamicCast_bSuccess2;
	Parms.CallFunc_Passive_Ranger_07_Set_Enabled_Res = CallFunc_Passive_Ranger_07_Set_Enabled_Res;
	Parms.K2Node_DynamicCast_AsIFeat_Ranger1 = K2Node_DynamicCast_AsIFeat_Ranger1;
	Parms.K2Node_DynamicCast_bSuccess3 = K2Node_DynamicCast_bSuccess3;
	Parms.CallFunc_GetMushroomCompanion_Ref1 = CallFunc_GetMushroomCompanion_Ref1;
	Parms.CallFunc_GetMushroomCompanion_Res1 = CallFunc_GetMushroomCompanion_Res1;
	Parms.K2Node_CustomEvent_Revived_By = K2Node_CustomEvent_Revived_By;
	Parms.K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1 = K2Node_DynamicCast_AsIBPChar_Mushroom_Companion1;
	Parms.K2Node_DynamicCast_bSuccess4 = K2Node_DynamicCast_bSuccess4;
	Parms.CallFunc_Passive_Ranger_07_Set_Enabled_Res1 = CallFunc_Passive_Ranger_07_Set_Enabled_Res1;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPEvent_Hub_Player_Character = K2Node_DynamicCast_AsBPEvent_Hub_Player_Character;
	Parms.K2Node_DynamicCast_bSuccess5 = K2Node_DynamicCast_bSuccess5;
	Parms.K2Node_MakeStruct_StatusEffectSpec = K2Node_MakeStruct_StatusEffectSpec;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1 = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate1;
	Parms.CallFunc_AddStatusEffect_ReturnValue = CallFunc_AddStatusEffect_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


