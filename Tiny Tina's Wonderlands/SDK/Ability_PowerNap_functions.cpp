#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_PowerNap.Ability_PowerNap_C
// (None)

class UClass* UAbility_PowerNap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_PowerNap_C");

	return Clss;
}


// Ability_PowerNap_C Ability_PowerNap.Default__Ability_PowerNap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_PowerNap_C* UAbility_PowerNap_C::GetDefaultObj()
{
	static class UAbility_PowerNap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_PowerNap_C*>(UAbility_PowerNap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_PowerNap.Ability_PowerNap_C.SetAmpValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_PowerNap_C::SetAmpValues(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_PowerNap_C", "SetAmpValues");

	Params::UAbility_PowerNap_C_SetAmpValues_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ability_PowerNap.Ability_PowerNap_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_PowerNap_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_PowerNap_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_PowerNap.Ability_PowerNap_C.ExecuteUbergraph_Ability_PowerNap
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_PowerNap_C::ExecuteUbergraph_Ability_PowerNap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_PowerNap_C", "ExecuteUbergraph_Ability_PowerNap");

	Params::UAbility_PowerNap_C_ExecuteUbergraph_Ability_PowerNap_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


