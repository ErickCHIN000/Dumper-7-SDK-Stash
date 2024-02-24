#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_Rune_Master_All.Ability_Rune_Master_All_C
// (None)

class UClass* UAbility_Rune_Master_All_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_Rune_Master_All_C");

	return Clss;
}


// Ability_Rune_Master_All_C Ability_Rune_Master_All.Default__Ability_Rune_Master_All_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_Rune_Master_All_C* UAbility_Rune_Master_All_C::GetDefaultObj()
{
	static class UAbility_Rune_Master_All_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_Rune_Master_All_C*>(UAbility_Rune_Master_All_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_Rune_Master_All.Ability_Rune_Master_All_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAbility_Rune_Master_All_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Master_All_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Ability_Rune_Master_All.Ability_Rune_Master_All_C.ExecuteUbergraph_Ability_Rune_Master_All
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_Rune_Master_All_C::ExecuteUbergraph_Ability_Rune_Master_All(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_Rune_Master_All_C", "ExecuteUbergraph_Ability_Rune_Master_All");

	Params::UAbility_Rune_Master_All_C_ExecuteUbergraph_Ability_Rune_Master_All_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


