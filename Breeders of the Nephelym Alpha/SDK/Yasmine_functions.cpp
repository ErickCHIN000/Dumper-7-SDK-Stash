#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Yasmine.Yasmine_C
// (Actor, Pawn)

class UClass* AYasmine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Yasmine_C");

	return Clss;
}


// Yasmine_C Yasmine.Default__Yasmine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AYasmine_C* AYasmine_C::GetDefaultObj()
{
	static class AYasmine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AYasmine_C*>(AYasmine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Yasmine.Yasmine_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AYasmine_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Yasmine_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Yasmine.Yasmine_C.OnSetWorldState
// (Event, Public, BlueprintEvent)
// Parameters:

void AYasmine_C::OnSetWorldState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Yasmine_C", "OnSetWorldState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Yasmine.Yasmine_C.ExecuteUbergraph_Yasmine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FConditions                 K2Node_MakeStruct_Conditions                                     (None)
// bool                               CallFunc_CheckGameFlags_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void AYasmine_C::ExecuteUbergraph_Yasmine(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FConditions& K2Node_MakeStruct_Conditions, bool CallFunc_CheckGameFlags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Yasmine_C", "ExecuteUbergraph_Yasmine");

	Params::AYasmine_C_ExecuteUbergraph_Yasmine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_MakeStruct_Conditions = K2Node_MakeStruct_Conditions;
	Parms.CallFunc_CheckGameFlags_ReturnValue = CallFunc_CheckGameFlags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


