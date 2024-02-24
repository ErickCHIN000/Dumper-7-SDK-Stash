#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlime.MegaSlime_C
// (Actor, Pawn)

class UClass* AMegaSlime_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlime_C");

	return Clss;
}


// MegaSlime_C MegaSlime.Default__MegaSlime_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMegaSlime_C* AMegaSlime_C::GetDefaultObj()
{
	static class AMegaSlime_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMegaSlime_C*>(AMegaSlime_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MegaSlime.MegaSlime_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AMegaSlime_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime.MegaSlime_C.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void AMegaSlime_C::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_C", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MegaSlime.MegaSlime_C.ExecuteUbergraph_MegaSlime
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConditions                 K2Node_MakeStruct_Conditions                                     (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConditions                 K2Node_MakeStruct_Conditions_1                                   (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void AMegaSlime_C::ExecuteUbergraph_MegaSlime(int32 EntryPoint, const struct FConditions& K2Node_MakeStruct_Conditions, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_CheckGameFlags_ReturnValue, bool Temp_bool_IsClosed_Variable, const struct FConditions& K2Node_MakeStruct_Conditions_1, bool CallFunc_CheckGameFlags_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MegaSlime_C", "ExecuteUbergraph_MegaSlime");

	Params::AMegaSlime_C_ExecuteUbergraph_MegaSlime_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Conditions = K2Node_MakeStruct_Conditions;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_Conditions_1 = K2Node_MakeStruct_Conditions_1;
	Parms.CallFunc_CheckGameFlags_ReturnValue_1 = CallFunc_CheckGameFlags_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


