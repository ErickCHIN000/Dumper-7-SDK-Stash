#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Wskin_Button_Wood.WBP_Wskin_Button_Wood_C
// (None)

class UClass* UWBP_Wskin_Button_Wood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Wskin_Button_Wood_C");

	return Clss;
}


// WBP_Wskin_Button_Wood_C WBP_Wskin_Button_Wood.Default__WBP_Wskin_Button_Wood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Wskin_Button_Wood_C* UWBP_Wskin_Button_Wood_C::GetDefaultObj()
{
	static class UWBP_Wskin_Button_Wood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Wskin_Button_Wood_C*>(UWBP_Wskin_Button_Wood_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Wskin_Button_Wood.WBP_Wskin_Button_Wood_C.RetrieveButtonStyle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WidgetStyle_Button       ButtonStyleStruct                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTextBlockStyle             K2Node_MakeStruct_TextBlockStyle                                 (None)
// struct FS_WidgetStyle_Button       K2Node_MakeStruct_S_WidgetStyle_Button                           (ContainsInstancedReference, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ShadowOffset_ImplicitCast                      (NoDestructor, HasGetValueTypeHash)

void UWBP_Wskin_Button_Wood_C::RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct, const struct FTextBlockStyle& K2Node_MakeStruct_TextBlockStyle, const struct FS_WidgetStyle_Button& K2Node_MakeStruct_S_WidgetStyle_Button, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ShadowOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Wskin_Button_Wood_C", "RetrieveButtonStyle");

	Params::UWBP_Wskin_Button_Wood_C_RetrieveButtonStyle_Params Parms{};

	Parms.K2Node_MakeStruct_TextBlockStyle = K2Node_MakeStruct_TextBlockStyle;
	Parms.K2Node_MakeStruct_S_WidgetStyle_Button = K2Node_MakeStruct_S_WidgetStyle_Button;
	Parms.K2Node_MakeStruct_ShadowOffset_ImplicitCast = K2Node_MakeStruct_ShadowOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStyleStruct != nullptr)
		*ButtonStyleStruct = std::move(Parms.ButtonStyleStruct);

}

}


