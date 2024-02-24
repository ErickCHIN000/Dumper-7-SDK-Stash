#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Passive_Barbarian_13.Passive_Barbarian_13_C
// (None)

class UClass* UPassive_Barbarian_13_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Passive_Barbarian_13_C");

	return Clss;
}


// Passive_Barbarian_13_C Passive_Barbarian_13.Default__Passive_Barbarian_13_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPassive_Barbarian_13_C* UPassive_Barbarian_13_C::GetDefaultObj()
{
	static class UPassive_Barbarian_13_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPassive_Barbarian_13_C*>(UPassive_Barbarian_13_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Passive_Barbarian_13.Passive_Barbarian_13_C.GetManualHUDIconValues
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              OutStackCount                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutDuration                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OutTimeRemaining                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakResourcePoolReference_bValid1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakResourcePoolReference_CurrentValue1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MinValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakResourcePoolReference_MaxValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetManualHUDIconValues_outStackCount                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetManualHUDIconValues_outDuration                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetManualHUDIconValues_outTimeRemaining                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPassive_Barbarian_13_C::GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetManualHUDIconValues_outStackCount, float CallFunc_GetManualHUDIconValues_outDuration, float CallFunc_GetManualHUDIconValues_outTimeRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_13_C", "GetManualHUDIconValues");

	Params::UPassive_Barbarian_13_C_GetManualHUDIconValues_Params Parms{};

	Parms.CallFunc_BreakResourcePoolReference_bValid = CallFunc_BreakResourcePoolReference_bValid;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue = CallFunc_BreakResourcePoolReference_CurrentValue;
	Parms.CallFunc_BreakResourcePoolReference_MinValue = CallFunc_BreakResourcePoolReference_MinValue;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue = CallFunc_BreakResourcePoolReference_MaxValue;
	Parms.CallFunc_BreakResourcePoolReference_bValid1 = CallFunc_BreakResourcePoolReference_bValid1;
	Parms.CallFunc_BreakResourcePoolReference_CurrentValue1 = CallFunc_BreakResourcePoolReference_CurrentValue1;
	Parms.CallFunc_BreakResourcePoolReference_MinValue1 = CallFunc_BreakResourcePoolReference_MinValue1;
	Parms.CallFunc_BreakResourcePoolReference_MaxValue1 = CallFunc_BreakResourcePoolReference_MaxValue1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetManualHUDIconValues_outStackCount = CallFunc_GetManualHUDIconValues_outStackCount;
	Parms.CallFunc_GetManualHUDIconValues_outDuration = CallFunc_GetManualHUDIconValues_outDuration;
	Parms.CallFunc_GetManualHUDIconValues_outTimeRemaining = CallFunc_GetManualHUDIconValues_outTimeRemaining;

	UObject::ProcessEvent(Func, &Parms);

	if (OutStackCount != nullptr)
		*OutStackCount = Parms.OutStackCount;

	if (OutDuration != nullptr)
		*OutDuration = Parms.OutDuration;

	if (OutTimeRemaining != nullptr)
		*OutTimeRemaining = Parms.OutTimeRemaining;

}


// Function Passive_Barbarian_13.Passive_Barbarian_13_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPassive_Barbarian_13_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_13_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Passive_Barbarian_13.Passive_Barbarian_13_C.ExecuteUbergraph_Passive_Barbarian_13
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameResourcePoolReference  CallFunc_GetResourcePoolByResource_ReturnValue                   (NoDestructor, ContainsInstancedReference)

void UPassive_Barbarian_13_C::ExecuteUbergraph_Passive_Barbarian_13(int32 EntryPoint, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Passive_Barbarian_13_C", "ExecuteUbergraph_Passive_Barbarian_13");

	Params::UPassive_Barbarian_13_C_ExecuteUbergraph_Passive_Barbarian_13_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetResourcePoolByResource_ReturnValue = CallFunc_GetResourcePoolByResource_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


