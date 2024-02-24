#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Ranger_10.Passive_Ranger_10_C
// (None)

class UClass* UPassive_Ranger_10_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Ranger_10_C");

	return Clss;
}


// Passive_Ranger_10_C Passive_Ranger_10.Default__Passive_Ranger_10_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Ranger_10_C* UPassive_Ranger_10_C::GetDefaultObj()
{
	static class UPassive_Ranger_10_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Ranger_10_C*>(UPassive_Ranger_10_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Ranger_10.Passive_Ranger_10_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Ranger_10_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Ranger_10_C", "GetManualHUDIconValues");

	Params::UPassive_Ranger_10_C_GetManualHUDIconValues_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}

}


