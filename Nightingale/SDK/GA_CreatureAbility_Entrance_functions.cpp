#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_Entrance.GA_CreatureAbility_Entrance_C
// (None)

class UClass* UGA_CreatureAbility_Entrance_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_Entrance_C");

	return Clss;
}


// GA_CreatureAbility_Entrance_C GA_CreatureAbility_Entrance.Default__GA_CreatureAbility_Entrance_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_Entrance_C* UGA_CreatureAbility_Entrance_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_Entrance_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_Entrance_C*>(UGA_CreatureAbility_Entrance_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_Entrance.GA_CreatureAbility_Entrance_C.CreatureAbilityActivate
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CreatureAbilityActivate_bSuccess                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_Entrance_C::CreatureAbilityActivate(bool* bSuccess, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, bool CallFunc_CreatureAbilityActivate_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_Entrance_C", "CreatureAbilityActivate");

	Params::UGA_CreatureAbility_Entrance_C_CreatureAbilityActivate_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_CreatureAbilityActivate_bSuccess = CallFunc_CreatureAbilityActivate_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}

}


