#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CreditsHeadingText.WBP_CreditsHeadingText_C
// (None)

class UClass* UWBP_CreditsHeadingText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CreditsHeadingText_C");

	return Clss;
}


// WBP_CreditsHeadingText_C WBP_CreditsHeadingText.Default__WBP_CreditsHeadingText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CreditsHeadingText_C* UWBP_CreditsHeadingText_C::GetDefaultObj()
{
	static class UWBP_CreditsHeadingText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CreditsHeadingText_C*>(UWBP_CreditsHeadingText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CreditsHeadingText.WBP_CreditsHeadingText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CreditsHeadingText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsHeadingText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsHeadingText.WBP_CreditsHeadingText_C.InitializeDesignerPreview
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CreditsHeadingText_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsHeadingText_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsHeadingText.WBP_CreditsHeadingText_C.ExecuteUbergraph_WBP_CreditsHeadingText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_CreditsHeadingText_C::ExecuteUbergraph_WBP_CreditsHeadingText(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsHeadingText_C", "ExecuteUbergraph_WBP_CreditsHeadingText");

	Params::UWBP_CreditsHeadingText_C_ExecuteUbergraph_WBP_CreditsHeadingText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


