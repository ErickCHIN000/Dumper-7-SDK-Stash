#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Amber.Amber_C
// (Actor, Pawn)

class UClass* AAmber_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Amber_C");

	return Clss;
}


// Amber_C Amber.Default__Amber_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAmber_C* AAmber_C::GetDefaultObj()
{
	static class AAmber_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmber_C*>(AAmber_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Amber.Amber_C.OnBecameDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void AAmber_C::OnBecameDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_C", "OnBecameDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber.Amber_C.OnNoLongerDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void AAmber_C::OnNoLongerDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_C", "OnNoLongerDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Amber.Amber_C.ExecuteUbergraph_Amber
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AAmber_C::ExecuteUbergraph_Amber(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Amber_C", "ExecuteUbergraph_Amber");

	Params::AAmber_C_ExecuteUbergraph_Amber_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


