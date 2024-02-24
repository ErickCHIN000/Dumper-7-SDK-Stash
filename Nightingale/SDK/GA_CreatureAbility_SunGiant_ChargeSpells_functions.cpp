#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_SunGiant_ChargeSpells.GA_CreatureAbility_SunGiant_ChargeSpells_C
// (None)

class UClass* UGA_CreatureAbility_SunGiant_ChargeSpells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_SunGiant_ChargeSpells_C");

	return Clss;
}


// GA_CreatureAbility_SunGiant_ChargeSpells_C GA_CreatureAbility_SunGiant_ChargeSpells.Default__GA_CreatureAbility_SunGiant_ChargeSpells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_SunGiant_ChargeSpells_C* UGA_CreatureAbility_SunGiant_ChargeSpells_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_SunGiant_ChargeSpells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_SunGiant_ChargeSpells_C*>(UGA_CreatureAbility_SunGiant_ChargeSpells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_SunGiant_ChargeSpells.GA_CreatureAbility_SunGiant_ChargeSpells_C.HandleEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                EventTags                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          EventData                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Creature_Wildlife_SunGiant_C*K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_SunGiant_ChargeSpells_C::HandleEvent(const struct FGameplayTag& EventTags, const struct FGameplayEventData& EventData, bool CallFunc_IsValid_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, class ABP_Creature_Wildlife_SunGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SunGiant_ChargeSpells_C", "HandleEvent");

	Params::UGA_CreatureAbility_SunGiant_ChargeSpells_C_HandleEvent_Params Parms{};

	Parms.EventTags = EventTags;
	Parms.EventData = EventData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant = K2Node_DynamicCast_AsBP_Creature_Wildlife_Sun_Giant;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_SunGiant_ChargeSpells.GA_CreatureAbility_SunGiant_ChargeSpells_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_SunGiant_ChargeSpells_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SunGiant_ChargeSpells_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_SunGiant_ChargeSpells.GA_CreatureAbility_SunGiant_ChargeSpells_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_SunGiant_ChargeSpells_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SunGiant_ChargeSpells_C", "K2_OnEndAbility");

	Params::UGA_CreatureAbility_SunGiant_ChargeSpells_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_CreatureAbility_SunGiant_ChargeSpells.GA_CreatureAbility_SunGiant_ChargeSpells_C.ExecuteUbergraph_GA_CreatureAbility_SunGiant_ChargeSpells
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_SunGiant_ChargeSpells_C::ExecuteUbergraph_GA_CreatureAbility_SunGiant_ChargeSpells(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_SunGiant_ChargeSpells_C", "ExecuteUbergraph_GA_CreatureAbility_SunGiant_ChargeSpells");

	Params::UGA_CreatureAbility_SunGiant_ChargeSpells_C_ExecuteUbergraph_GA_CreatureAbility_SunGiant_ChargeSpells_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


