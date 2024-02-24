#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CreditsTitleText.WBP_CreditsTitleText_C
// (None)

class UClass* UWBP_CreditsTitleText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CreditsTitleText_C");

	return Clss;
}


// WBP_CreditsTitleText_C WBP_CreditsTitleText.Default__WBP_CreditsTitleText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CreditsTitleText_C* UWBP_CreditsTitleText_C::GetDefaultObj()
{
	static class UWBP_CreditsTitleText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CreditsTitleText_C*>(UWBP_CreditsTitleText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CreditsTitleText.WBP_CreditsTitleText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CreditsTitleText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsTitleText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsTitleText.WBP_CreditsTitleText_C.InitializeDesignerPreview
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CreditsTitleText_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsTitleText_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsTitleText.WBP_CreditsTitleText_C.ExecuteUbergraph_WBP_CreditsTitleText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_CreditsTitleText_C::ExecuteUbergraph_WBP_CreditsTitleText(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsTitleText_C", "ExecuteUbergraph_WBP_CreditsTitleText");

	Params::UWBP_CreditsTitleText_C_ExecuteUbergraph_WBP_CreditsTitleText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


