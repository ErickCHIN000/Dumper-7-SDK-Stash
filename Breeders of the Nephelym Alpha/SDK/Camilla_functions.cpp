#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Camilla.Camilla_C
// (Actor, Pawn)

class UClass* ACamilla_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Camilla_C");

	return Clss;
}


// Camilla_C Camilla.Default__Camilla_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACamilla_C* ACamilla_C::GetDefaultObj()
{
	static class ACamilla_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACamilla_C*>(ACamilla_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Camilla.Camilla_C.OnBecameDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void ACamilla_C::OnBecameDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_C", "OnBecameDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla.Camilla_C.OnNoLongerDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void ACamilla_C::OnNoLongerDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_C", "OnNoLongerDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Camilla.Camilla_C.ExecuteUbergraph_Camilla
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void ACamilla_C::ExecuteUbergraph_Camilla(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Camilla_C", "ExecuteUbergraph_Camilla");

	Params::ACamilla_C_ExecuteUbergraph_Camilla_Params Parms{};

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


