#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartyDisplay.WBP_PartyDisplay_C
// (None)

class UClass* UWBP_PartyDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyDisplay_C");

	return Clss;
}


// WBP_PartyDisplay_C WBP_PartyDisplay.Default__WBP_PartyDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyDisplay_C* UWBP_PartyDisplay_C::GetDefaultObj()
{
	static class UWBP_PartyDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyDisplay_C*>(UWBP_PartyDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PartyDisplay.WBP_PartyDisplay_C.BP_GetHelpState
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               Val                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Name                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PuzzleName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_PartyDisplay_C::BP_GetHelpState(bool Val, const class FString& Name, const class FString& PuzzleName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyDisplay_C", "BP_GetHelpState");

	Params::UWBP_PartyDisplay_C_BP_GetHelpState_Params Parms{};

	Parms.Val = Val;
	Parms.Name = Name;
	Parms.PuzzleName = PuzzleName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PartyDisplay.WBP_PartyDisplay_C.ExecuteUbergraph_WBP_PartyDisplay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Val                                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_Name                                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PuzzleName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PartyDisplay_C::ExecuteUbergraph_WBP_PartyDisplay(int32 EntryPoint, bool K2Node_Event_Val, const class FString& K2Node_Event_Name, const class FString& K2Node_Event_PuzzleName, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PartyDisplay_C", "ExecuteUbergraph_WBP_PartyDisplay");

	Params::UWBP_PartyDisplay_C_ExecuteUbergraph_WBP_PartyDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Val = K2Node_Event_Val;
	Parms.K2Node_Event_Name = K2Node_Event_Name;
	Parms.K2Node_Event_PuzzleName = K2Node_Event_PuzzleName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


