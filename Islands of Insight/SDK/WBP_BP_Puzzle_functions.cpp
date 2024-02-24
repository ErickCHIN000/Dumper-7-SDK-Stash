#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BP_Puzzle.WBP_BP_Puzzle_C
// (None)

class UClass* UWBP_BP_Puzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BP_Puzzle_C");

	return Clss;
}


// WBP_BP_Puzzle_C WBP_BP_Puzzle.Default__WBP_BP_Puzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BP_Puzzle_C* UWBP_BP_Puzzle_C::GetDefaultObj()
{
	static class UWBP_BP_Puzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BP_Puzzle_C*>(UWBP_BP_Puzzle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BP_Puzzle.WBP_BP_Puzzle_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_BP_Puzzle_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BP_Puzzle_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BP_Puzzle.WBP_BP_Puzzle_C.BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_BP_Puzzle_C::BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BP_Puzzle_C", "BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BP_Puzzle.WBP_BP_Puzzle_C.BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_BP_Puzzle_C::BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BP_Puzzle_C", "BndEvt__WBP_BP_Puzzle_Button_25_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_BP_Puzzle.WBP_BP_Puzzle_C.ExecuteUbergraph_WBP_BP_Puzzle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FButtonStyle                K2Node_MakeStruct_ButtonStyle                                    (None)

void UWBP_BP_Puzzle_C::ExecuteUbergraph_WBP_BP_Puzzle(int32 EntryPoint, int32 Temp_int_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BP_Puzzle_C", "ExecuteUbergraph_WBP_BP_Puzzle");

	Params::UWBP_BP_Puzzle_C_ExecuteUbergraph_WBP_BP_Puzzle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_ButtonStyle = K2Node_MakeStruct_ButtonStyle;

	UObject::ProcessEvent(Func, &Parms);

}

}


