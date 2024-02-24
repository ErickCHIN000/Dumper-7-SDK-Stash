#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TalentTreesRow.TalentTreesRow_C
// (None)

class UClass* UTalentTreesRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TalentTreesRow_C");

	return Clss;
}


// TalentTreesRow_C TalentTreesRow.Default__TalentTreesRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTalentTreesRow_C* UTalentTreesRow_C::GetDefaultObj()
{
	static class UTalentTreesRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTalentTreesRow_C*>(UTalentTreesRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TalentTreesRow.TalentTreesRow_C.SetTalentTreeRow
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentTreesRowHandle       TalentTreesRowHandle                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UTalentTreesRow_C::SetTalentTreeRow(const struct FTalentTreesRowHandle& TalentTreesRowHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalentTreesRow_C", "SetTalentTreeRow");

	Params::UTalentTreesRow_C_SetTalentTreeRow_Params Parms{};

	Parms.TalentTreesRowHandle = TalentTreesRowHandle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TalentTreesRow.TalentTreesRow_C.ExecuteUbergraph_TalentTreesRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentTreesRowHandle       K2Node_CustomEvent_TalentTreesRowHandle                          (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UTalentTreesRow_C::ExecuteUbergraph_TalentTreesRow(int32 EntryPoint, const struct FTalentTreesRowHandle& K2Node_CustomEvent_TalentTreesRowHandle, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TalentTreesRow_C", "ExecuteUbergraph_TalentTreesRow");

	Params::UTalentTreesRow_C_ExecuteUbergraph_TalentTreesRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TalentTreesRowHandle = K2Node_CustomEvent_TalentTreesRowHandle;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


