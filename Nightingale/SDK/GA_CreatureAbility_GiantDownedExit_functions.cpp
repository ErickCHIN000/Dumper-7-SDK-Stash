#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_GiantDownedExit.GA_CreatureAbility_GiantDownedExit_C
// (None)

class UClass* UGA_CreatureAbility_GiantDownedExit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_GiantDownedExit_C");

	return Clss;
}


// GA_CreatureAbility_GiantDownedExit_C GA_CreatureAbility_GiantDownedExit.Default__GA_CreatureAbility_GiantDownedExit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_GiantDownedExit_C* UGA_CreatureAbility_GiantDownedExit_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_GiantDownedExit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_GiantDownedExit_C*>(UGA_CreatureAbility_GiantDownedExit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_GiantDownedExit.GA_CreatureAbility_GiantDownedExit_C.CreatureAbilityEnd
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_GiantDownedExit_C::CreatureAbilityEnd(const struct FGameplayTag& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_GiantDownedExit_C", "CreatureAbilityEnd");

	Params::UGA_CreatureAbility_GiantDownedExit_C_CreatureAbilityEnd_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


