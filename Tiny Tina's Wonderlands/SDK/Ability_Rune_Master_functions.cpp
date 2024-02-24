#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rune_Master.Ability_Rune_Master_C
// (None)

class UClass* UAbility_Rune_Master_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rune_Master_C");

	return Clss;
}


// Ability_Rune_Master_C Ability_Rune_Master.Default__Ability_Rune_Master_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Rune_Master_C* UAbility_Rune_Master_C::GetDefaultObj()
{
	static class UAbility_Rune_Master_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Rune_Master_C*>(UAbility_Rune_Master_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Rune_Master.Ability_Rune_Master_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Rune_Master_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Master_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rune_Master.Ability_Rune_Master_C.ExecuteUbergraph_Ability_Rune_Master
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Rune_Master_C::ExecuteUbergraph_Ability_Rune_Master(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Master_C", "ExecuteUbergraph_Ability_Rune_Master");

	Params::UAbility_Rune_Master_C_ExecuteUbergraph_Ability_Rune_Master_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


