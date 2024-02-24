#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C
// (None)

class UClass* UWBP_HelperBondPuzzleSolved_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HelperBondPuzzleSolved_C");

	return Clss;
}


// WBP_HelperBondPuzzleSolved_C WBP_HelperBondPuzzleSolved.Default__WBP_HelperBondPuzzleSolved_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HelperBondPuzzleSolved_C* UWBP_HelperBondPuzzleSolved_C::GetDefaultObj()
{
	static class UWBP_HelperBondPuzzleSolved_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HelperBondPuzzleSolved_C*>(UWBP_HelperBondPuzzleSolved_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C.BndEvt__WBP_HelperBondPuzzleSolved_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HelperBondPuzzleSolved_C::BndEvt__WBP_HelperBondPuzzleSolved_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HelperBondPuzzleSolved_C", "BndEvt__WBP_HelperBondPuzzleSolved_WBP_StyledButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_HelperBondPuzzleSolved_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HelperBondPuzzleSolved_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C.BndEvt__WBP_HelperBondPuzzleSolved_Thank_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_HelperBondPuzzleSolved_C::BndEvt__WBP_HelperBondPuzzleSolved_Thank_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HelperBondPuzzleSolved_C", "BndEvt__WBP_HelperBondPuzzleSolved_Thank_K2Node_ComponentBoundEvent_2_Pressed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C.DisbandHelperBond
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_HelperBondPuzzleSolved_C::DisbandHelperBond()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HelperBondPuzzleSolved_C", "DisbandHelperBond");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_HelperBondPuzzleSolved.WBP_HelperBondPuzzleSolved_C.ExecuteUbergraph_WBP_HelperBondPuzzleSolved
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_HelperBondPuzzleSolved_C::ExecuteUbergraph_WBP_HelperBondPuzzleSolved(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_HelperBondPuzzleSolved_C", "ExecuteUbergraph_WBP_HelperBondPuzzleSolved");

	Params::UWBP_HelperBondPuzzleSolved_C_ExecuteUbergraph_WBP_HelperBondPuzzleSolved_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


