#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InstructionRow.InstructionRow_C
// (None)

class UClass* UInstructionRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InstructionRow_C");

	return Clss;
}


// InstructionRow_C InstructionRow.Default__InstructionRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInstructionRow_C* UInstructionRow_C::GetDefaultObj()
{
	static class UInstructionRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInstructionRow_C*>(UInstructionRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InstructionRow.InstructionRow_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UInstructionRow_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionRow_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InstructionRow.InstructionRow_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionRow_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionRow_C", "BP_OnItemExpansionChanged");

	Params::UInstructionRow_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionRow.InstructionRow_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionRow_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionRow_C", "BP_OnItemSelectionChanged");

	Params::UInstructionRow_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InstructionRow.InstructionRow_C.ExecuteUbergraph_InstructionRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInstructionRow_C::ExecuteUbergraph_InstructionRow(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool K2Node_Event_bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InstructionRow_C", "ExecuteUbergraph_InstructionRow");

	Params::UInstructionRow_C_ExecuteUbergraph_InstructionRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}

}


