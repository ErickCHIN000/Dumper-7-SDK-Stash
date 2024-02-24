#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TalentRow.TalentRow_C
// (None)

class UClass* UTalentRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalentRow_C");

	return Clss;
}


// TalentRow_C TalentRow.Default__TalentRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalentRow_C* UTalentRow_C::GetDefaultObj()
{
	static class UTalentRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalentRow_C*>(UTalentRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalentRow.TalentRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTalentRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalentRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TalentRow.TalentRow_C.ExecuteUbergraph_TalentRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UTalentRow_C::ExecuteUbergraph_TalentRow(int32 EntryPoint, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalentRow_C", "ExecuteUbergraph_TalentRow");

	Params::UTalentRow_C_ExecuteUbergraph_TalentRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


