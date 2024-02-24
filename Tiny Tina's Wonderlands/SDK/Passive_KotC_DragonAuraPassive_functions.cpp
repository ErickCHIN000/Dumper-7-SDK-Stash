#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C
// (None)

class UClass* UPassive_KotC_DragonAuraPassive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_KotC_DragonAuraPassive_C");

	return Clss;
}


// Passive_KotC_DragonAuraPassive_C Passive_KotC_DragonAuraPassive.Default__Passive_KotC_DragonAuraPassive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_KotC_DragonAuraPassive_C* UPassive_KotC_DragonAuraPassive_C::GetDefaultObj()
{
	static class UPassive_KotC_DragonAuraPassive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_KotC_DragonAuraPassive_C*>(UPassive_KotC_DragonAuraPassive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_KotC_DragonAuraPassive_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_DragonAuraPassive_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_KotC_DragonAuraPassive_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_DragonAuraPassive_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C.OnPaused
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_KotC_DragonAuraPassive_C::OnPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_DragonAuraPassive_C", "OnPaused");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_KotC_DragonAuraPassive.Passive_KotC_DragonAuraPassive_C.ExecuteUbergraph_Passive_KotC_DragonAuraPassive
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAbilityOwner_ReturnValue1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAbility_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAbility_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPassive_KotC_DragonAuraPassive_C::ExecuteUbergraph_Passive_KotC_DragonAuraPassive(int32 EntryPoint, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, bool CallFunc_HasAbility_ReturnValue, bool CallFunc_HasAbility_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_KotC_DragonAuraPassive_C", "ExecuteUbergraph_Passive_KotC_DragonAuraPassive");

	Params::UPassive_KotC_DragonAuraPassive_C_ExecuteUbergraph_Passive_KotC_DragonAuraPassive_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAbilityOwner_ReturnValue = CallFunc_GetAbilityOwner_ReturnValue;
	Parms.CallFunc_GetAbilityOwner_ReturnValue1 = CallFunc_GetAbilityOwner_ReturnValue1;
	Parms.CallFunc_HasAbility_ReturnValue = CallFunc_HasAbility_ReturnValue;
	Parms.CallFunc_HasAbility_ReturnValue1 = CallFunc_HasAbility_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


