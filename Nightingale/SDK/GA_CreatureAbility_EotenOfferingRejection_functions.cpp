#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_CreatureAbility_EotenOfferingRejection.GA_CreatureAbility_EotenOfferingRejection_C
// (None)

class UClass* UGA_CreatureAbility_EotenOfferingRejection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_CreatureAbility_EotenOfferingRejection_C");

	return Clss;
}


// GA_CreatureAbility_EotenOfferingRejection_C GA_CreatureAbility_EotenOfferingRejection.Default__GA_CreatureAbility_EotenOfferingRejection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_CreatureAbility_EotenOfferingRejection_C* UGA_CreatureAbility_EotenOfferingRejection_C::GetDefaultObj()
{
	static class UGA_CreatureAbility_EotenOfferingRejection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_CreatureAbility_EotenOfferingRejection_C*>(UGA_CreatureAbility_EotenOfferingRejection_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_CreatureAbility_EotenOfferingRejection.GA_CreatureAbility_EotenOfferingRejection_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_CreatureAbility_EotenOfferingRejection_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_EotenOfferingRejection_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_CreatureAbility_EotenOfferingRejection.GA_CreatureAbility_EotenOfferingRejection_C.ExecuteUbergraph_GA_CreatureAbility_EotenOfferingRejection
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (ConstParm, NoDestructor, HasGetValueTypeHash)

void UGA_CreatureAbility_EotenOfferingRejection_C::ExecuteUbergraph_GA_CreatureAbility_EotenOfferingRejection(int32 EntryPoint, const struct FGameplayTag& Temp_struct_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_CreatureAbility_EotenOfferingRejection_C", "ExecuteUbergraph_GA_CreatureAbility_EotenOfferingRejection");

	Params::UGA_CreatureAbility_EotenOfferingRejection_C_ExecuteUbergraph_GA_CreatureAbility_EotenOfferingRejection_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}


