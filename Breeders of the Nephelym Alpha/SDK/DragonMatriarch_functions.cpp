#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DragonMatriarch.DragonMatriarch_C
// (Actor, Pawn)

class UClass* ADragonMatriarch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DragonMatriarch_C");

	return Clss;
}


// DragonMatriarch_C DragonMatriarch.Default__DragonMatriarch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADragonMatriarch_C* ADragonMatriarch_C::GetDefaultObj()
{
	static class ADragonMatriarch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADragonMatriarch_C*>(ADragonMatriarch_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DragonMatriarch.DragonMatriarch_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void ADragonMatriarch_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarch_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarch.DragonMatriarch_C.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void ADragonMatriarch_C::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarch_C", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function DragonMatriarch.DragonMatriarch_C.ExecuteUbergraph_DragonMatriarch
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConditions                 K2Node_MakeStruct_Conditions                                     (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult_2                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ADragonMatriarch_C::ExecuteUbergraph_DragonMatriarch(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool Temp_bool_IsClosed_Variable, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DragonMatriarch_C", "ExecuteUbergraph_DragonMatriarch");

	Params::ADragonMatriarch_C_ExecuteUbergraph_DragonMatriarch_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_Conditions = K2Node_MakeStruct_Conditions;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = CallFunc_K2_SetRelativeLocation_SweepHitResult_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


