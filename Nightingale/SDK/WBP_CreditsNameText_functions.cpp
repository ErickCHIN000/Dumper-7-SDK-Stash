#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CreditsNameText.WBP_CreditsNameText_C
// (None)

class UClass* UWBP_CreditsNameText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CreditsNameText_C");

	return Clss;
}


// WBP_CreditsNameText_C WBP_CreditsNameText.Default__WBP_CreditsNameText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CreditsNameText_C* UWBP_CreditsNameText_C::GetDefaultObj()
{
	static class UWBP_CreditsNameText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CreditsNameText_C*>(UWBP_CreditsNameText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_CreditsNameText.WBP_CreditsNameText_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_CreditsNameText_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsNameText_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsNameText.WBP_CreditsNameText_C.InitializeDesignerPreview
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_CreditsNameText_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsNameText_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_CreditsNameText.WBP_CreditsNameText_C.ExecuteUbergraph_WBP_CreditsNameText
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_CreditsNameText_C::ExecuteUbergraph_WBP_CreditsNameText(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_CreditsNameText_C", "ExecuteUbergraph_WBP_CreditsNameText");

	Params::UWBP_CreditsNameText_C_ExecuteUbergraph_WBP_CreditsNameText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


