#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C
// (None)

class UClass* UAbility_Ranger_Wards_Reload_Barrage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Ranger_Wards_Reload_Barrage_C");

	return Clss;
}


// Ability_Ranger_Wards_Reload_Barrage_C Ability_Ranger_Wards_Reload_Barrage.Default__Ability_Ranger_Wards_Reload_Barrage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Ranger_Wards_Reload_Barrage_C* UAbility_Ranger_Wards_Reload_Barrage_C::GetDefaultObj()
{
	static class UAbility_Ranger_Wards_Reload_Barrage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Ranger_Wards_Reload_Barrage_C*>(UAbility_Ranger_Wards_Reload_Barrage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Ranger_Wards_Reload_Barrage_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ranger_Wards_Reload_Barrage_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C.Enchantment_OnReload
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                     EventWeapon                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCompleted                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bAmmoGiven                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAbility_Ranger_Wards_Reload_Barrage_C::Enchantment_OnReload(class AWeapon* EventWeapon, bool bCompleted, bool bAmmoGiven)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ranger_Wards_Reload_Barrage_C", "Enchantment_OnReload");

	Params::UAbility_Ranger_Wards_Reload_Barrage_C_Enchantment_OnReload_Params Parms{};

	Parms.EventWeapon = EventWeapon;
	Parms.bCompleted = bCompleted;
	Parms.bAmmoGiven = bAmmoGiven;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C.CE_AbilitySlotChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakPlayerAbilitySlotData*   SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Ranger_Wards_Reload_Barrage_C::CE_AbilitySlotChanged(class UOakPlayerAbilitySlotData* SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ranger_Wards_Reload_Barrage_C", "CE_AbilitySlotChanged");

	Params::UAbility_Ranger_Wards_Reload_Barrage_C_CE_AbilitySlotChanged_Params Parms{};

	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_Ranger_Wards_Reload_Barrage.Ability_Ranger_Wards_Reload_Barrage_C.ExecuteUbergraph_Ability_Ranger_Wards_Reload_Barrage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakActionAbility*           CallFunc_GetPrimaryActionAbility_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWeapon*                     K2Node_Event_EventWeapon                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCompleted                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bAmmoGiven                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOakPlayerAbilitySlotData*   K2Node_CustomEvent_SlotData                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableValueHandle       K2Node_MakeStruct_DataTableValueHandle                           (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetDataTableValueFromHandle_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGbxAbilityResourceSpec_ScriptDelegateK2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate          (NoDestructor)

void UAbility_Ranger_Wards_Reload_Barrage_C::ExecuteUbergraph_Ability_Ranger_Wards_Reload_Barrage(int32 EntryPoint, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, class AWeapon* K2Node_Event_EventWeapon, bool K2Node_Event_bCompleted, bool K2Node_Event_bAmmoGiven, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class UOakPlayerAbilitySlotData* K2Node_CustomEvent_SlotData, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Ranger_Wards_Reload_Barrage_C", "ExecuteUbergraph_Ability_Ranger_Wards_Reload_Barrage");

	Params::UAbility_Ranger_Wards_Reload_Barrage_C_ExecuteUbergraph_Ability_Ranger_Wards_Reload_Barrage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPrimaryActionAbility_ReturnValue = CallFunc_GetPrimaryActionAbility_ReturnValue;
	Parms.K2Node_Event_EventWeapon = K2Node_Event_EventWeapon;
	Parms.K2Node_Event_bCompleted = K2Node_Event_bCompleted;
	Parms.K2Node_Event_bAmmoGiven = K2Node_Event_bAmmoGiven;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_CustomEvent_SlotData = K2Node_CustomEvent_SlotData;
	Parms.K2Node_MakeStruct_DataTableValueHandle = K2Node_MakeStruct_DataTableValueHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDataTableValueFromHandle_ReturnValue = CallFunc_GetDataTableValueFromHandle_ReturnValue;
	Parms.K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate = K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


