#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquippableModifier_Saddle.BP_EquippableModifier_Saddle_C
// (None)

class UClass* UBP_EquippableModifier_Saddle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquippableModifier_Saddle_C");

	return Clss;
}


// BP_EquippableModifier_Saddle_C BP_EquippableModifier_Saddle.Default__BP_EquippableModifier_Saddle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EquippableModifier_Saddle_C* UBP_EquippableModifier_Saddle_C::GetDefaultObj()
{
	static class UBP_EquippableModifier_Saddle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EquippableModifier_Saddle_C*>(UBP_EquippableModifier_Saddle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EquippableModifier_Saddle.BP_EquippableModifier_Saddle_C.GetEquippableStatsToAdd
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<struct FStatsEnum, int32>     Stats                                                            (Parm, OutParm)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStatsEnum                  Temp_struct_Variable                                             (ConstParm, HasGetValueTypeHash)
// TMap<struct FStatsEnum, int32>     CallFunc_GetEquippableStatsToAdd_Stats                           (None)

void UBP_EquippableModifier_Saddle_C::GetEquippableStatsToAdd(TMap<struct FStatsEnum, int32>* Stats, int32 Temp_int_Variable, const struct FStatsEnum& Temp_struct_Variable, TMap<struct FStatsEnum, int32> CallFunc_GetEquippableStatsToAdd_Stats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EquippableModifier_Saddle_C", "GetEquippableStatsToAdd");

	Params::UBP_EquippableModifier_Saddle_C_GetEquippableStatsToAdd_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_GetEquippableStatsToAdd_Stats = CallFunc_GetEquippableStatsToAdd_Stats;

	UObject::ProcessEvent(Func, &Parms);

	if (Stats != nullptr)
		*Stats = Parms.Stats;

}

}


