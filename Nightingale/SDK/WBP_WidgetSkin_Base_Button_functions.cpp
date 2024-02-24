#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WidgetSkin_Base_Button.WBP_WidgetSkin_Base_Button_C
// (None)

class UClass* UWBP_WidgetSkin_Base_Button_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WidgetSkin_Base_Button_C");

	return Clss;
}


// WBP_WidgetSkin_Base_Button_C WBP_WidgetSkin_Base_Button.Default__WBP_WidgetSkin_Base_Button_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WidgetSkin_Base_Button_C* UWBP_WidgetSkin_Base_Button_C::GetDefaultObj()
{
	static class UWBP_WidgetSkin_Base_Button_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WidgetSkin_Base_Button_C*>(UWBP_WidgetSkin_Base_Button_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WidgetSkin_Base_Button.WBP_WidgetSkin_Base_Button_C.RetrieveButtonStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WidgetStyle_Button       ButtonStyleStruct                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)

void UWBP_WidgetSkin_Base_Button_C::RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WidgetSkin_Base_Button_C", "RetrieveButtonStyle");

	Params::UWBP_WidgetSkin_Base_Button_C_RetrieveButtonStyle_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStyleStruct != nullptr)
		*ButtonStyleStruct = std::move(Parms.ButtonStyleStruct);

}

}


