#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ability_All_Amulet_PracticalFocus.Ability_All_Amulet_PracticalFocus_C
// (None)

class UClass* UAbility_All_Amulet_PracticalFocus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ability_All_Amulet_PracticalFocus_C");

	return Clss;
}


// Ability_All_Amulet_PracticalFocus_C Ability_All_Amulet_PracticalFocus.Default__Ability_All_Amulet_PracticalFocus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAbility_All_Amulet_PracticalFocus_C* UAbility_All_Amulet_PracticalFocus_C::GetDefaultObj()
{
	static class UAbility_All_Amulet_PracticalFocus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAbility_All_Amulet_PracticalFocus_C*>(UAbility_All_Amulet_PracticalFocus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ability_All_Amulet_PracticalFocus.Ability_All_Amulet_PracticalFocus_C.ExecuteUbergraph_Ability_All_Amulet_PracticalFocus
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAbility_All_Amulet_PracticalFocus_C::ExecuteUbergraph_Ability_All_Amulet_PracticalFocus(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ability_All_Amulet_PracticalFocus_C", "ExecuteUbergraph_Ability_All_Amulet_PracticalFocus");

	Params::UAbility_All_Amulet_PracticalFocus_C_ExecuteUbergraph_Ability_All_Amulet_PracticalFocus_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


