#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RawMeat.RawMeat_C
// (Actor)

class UClass* ARawMeat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RawMeat_C");

	return Clss;
}


// RawMeat_C RawMeat.Default__RawMeat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARawMeat_C* ARawMeat_C::GetDefaultObj()
{
	static class ARawMeat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARawMeat_C*>(ARawMeat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RawMeat.RawMeat_C.GetHealthDamage
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ASHPlayerCharacter*          PlayerCharacter                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealthDamage_Damage                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsKannibale_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ARawMeat_C::GetHealthDamage(class ASHPlayerCharacter* PlayerCharacter, float* Damage, float CallFunc_GetHealthDamage_Damage, bool CallFunc_IsKannibale_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RawMeat_C", "GetHealthDamage");

	Params::ARawMeat_C_GetHealthDamage_Params Parms{};

	Parms.PlayerCharacter = PlayerCharacter;
	Parms.CallFunc_GetHealthDamage_Damage = CallFunc_GetHealthDamage_Damage;
	Parms.CallFunc_IsKannibale_ReturnValue = CallFunc_IsKannibale_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Damage != nullptr)
		*Damage = Parms.Damage;

}

}


