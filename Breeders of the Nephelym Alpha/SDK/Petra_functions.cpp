#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Petra.Petra_C
// (Actor, Pawn)

class UClass* APetra_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Petra_C");

	return Clss;
}


// Petra_C Petra.Default__Petra_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APetra_C* APetra_C::GetDefaultObj()
{
	static class APetra_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APetra_C*>(APetra_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Petra.Petra_C.OnBecameDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void APetra_C::OnBecameDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Petra_C", "OnBecameDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Petra.Petra_C.OnNoLongerDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void APetra_C::OnNoLongerDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Petra_C", "OnNoLongerDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Petra.Petra_C.ExecuteUbergraph_Petra
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void APetra_C::ExecuteUbergraph_Petra(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Petra_C", "ExecuteUbergraph_Petra");

	Params::APetra_C_ExecuteUbergraph_Petra_Params Parms{};

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


