#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Fesssi.Fesssi_C
// (Actor, Pawn)

class UClass* AFesssi_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Fesssi_C");

	return Clss;
}


// Fesssi_C Fesssi.Default__Fesssi_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFesssi_C* AFesssi_C::GetDefaultObj()
{
	static class AFesssi_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFesssi_C*>(AFesssi_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Fesssi.Fesssi_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AFesssi_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fesssi_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fesssi.Fesssi_C.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void AFesssi_C::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fesssi_C", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fesssi.Fesssi_C.OnBecameDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void AFesssi_C::OnBecameDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fesssi_C", "OnBecameDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fesssi.Fesssi_C.OnNoLongerDailyToy
// (Event, Public, BlueprintEvent)
// Parameters:

void AFesssi_C::OnNoLongerDailyToy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fesssi_C", "OnNoLongerDailyToy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Fesssi.Fesssi_C.ExecuteUbergraph_Fesssi
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConditions                 K2Node_MakeStruct_Conditions                                     (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AFesssi_C::ExecuteUbergraph_Fesssi(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2, const struct FHitResult& CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3, bool Temp_bool_IsClosed_Variable_2, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Fesssi_C", "ExecuteUbergraph_Fesssi");

	Params::AFesssi_C_ExecuteUbergraph_Fesssi_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_1;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_2;
	Parms.CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3 = CallFunc_K2_SetRelativeLocationAndRotation_SweepHitResult_3;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_MakeStruct_Conditions = K2Node_MakeStruct_Conditions;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


