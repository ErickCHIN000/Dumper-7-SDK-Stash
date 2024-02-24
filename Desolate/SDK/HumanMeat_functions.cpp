#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HumanMeat.HumanMeat_C
// (Actor)

class UClass* AHumanMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HumanMeat_C");

	return Clss;
}


// HumanMeat_C HumanMeat.Default__HumanMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AHumanMeat_C* AHumanMeat_C::GetDefaultObj()
{
	static class AHumanMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AHumanMeat_C*>(AHumanMeat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HumanMeat.HumanMeat_C.GetHealthDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASHPlayerCharacter*          PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthDamage_Damage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKannibale_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AHumanMeat_C::GetHealthDamage(class ASHPlayerCharacter* PlayerCharacter, float* Damage, float CallFunc_GetHealthDamage_Damage, bool CallFunc_IsKannibale_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HumanMeat_C", "GetHealthDamage");

	Params::AHumanMeat_C_GetHealthDamage_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_GetHealthDamage_Damage = CallFunc_GetHealthDamage_Damage;
	Parms.CallFunc_IsKannibale_ReturnValue = CallFunc_IsKannibale_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}

}


