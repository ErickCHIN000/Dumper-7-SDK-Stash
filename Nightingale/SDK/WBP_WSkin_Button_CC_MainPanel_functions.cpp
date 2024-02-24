#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_WSkin_Button_CC_MainPanel.WBP_WSkin_Button_CC_MainPanel_C
// (None)

class UClass* UWBP_WSkin_Button_CC_MainPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_WSkin_Button_CC_MainPanel_C");

	return Clss;
}


// WBP_WSkin_Button_CC_MainPanel_C WBP_WSkin_Button_CC_MainPanel.Default__WBP_WSkin_Button_CC_MainPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_WSkin_Button_CC_MainPanel_C* UWBP_WSkin_Button_CC_MainPanel_C::GetDefaultObj()
{
	static class UWBP_WSkin_Button_CC_MainPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_WSkin_Button_CC_MainPanel_C*>(UWBP_WSkin_Button_CC_MainPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_WSkin_Button_CC_MainPanel.WBP_WSkin_Button_CC_MainPanel_C.RetrieveButtonStyle
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_WidgetStyle_Button       ButtonStyleStruct                                                (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// struct FTextBlockStyle             K2Node_MakeStruct_TextBlockStyle                                 (None)
// struct FS_WidgetStyle_Button       K2Node_MakeStruct_S_WidgetStyle_Button                           (ContainsInstancedReference, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ShadowOffset_ImplicitCast                      (NoDestructor, HasGetValueTypeHash)

void UWBP_WSkin_Button_CC_MainPanel_C::RetrieveButtonStyle(struct FS_WidgetStyle_Button* ButtonStyleStruct, const struct FTextBlockStyle& K2Node_MakeStruct_TextBlockStyle, const struct FS_WidgetStyle_Button& K2Node_MakeStruct_S_WidgetStyle_Button, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ShadowOffset_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WSkin_Button_CC_MainPanel_C", "RetrieveButtonStyle");

	Params::UWBP_WSkin_Button_CC_MainPanel_C_RetrieveButtonStyle_Params Parms{};

	Parms.K2Node_MakeStruct_TextBlockStyle = K2Node_MakeStruct_TextBlockStyle;
	Parms.K2Node_MakeStruct_S_WidgetStyle_Button = K2Node_MakeStruct_S_WidgetStyle_Button;
	Parms.K2Node_MakeStruct_ShadowOffset_ImplicitCast = K2Node_MakeStruct_ShadowOffset_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (ButtonStyleStruct != nullptr)
		*ButtonStyleStruct = std::move(Parms.ButtonStyleStruct);

}


// Function WBP_WSkin_Button_CC_MainPanel.WBP_WSkin_Button_CC_MainPanel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WSkin_Button_CC_MainPanel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WSkin_Button_CC_MainPanel_C", "PreConstruct");

	Params::UWBP_WSkin_Button_CC_MainPanel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_WSkin_Button_CC_MainPanel.WBP_WSkin_Button_CC_MainPanel_C.ExecuteUbergraph_WBP_WSkin_Button_CC_MainPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_WSkin_Button_CC_MainPanel_C::ExecuteUbergraph_WBP_WSkin_Button_CC_MainPanel(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_WSkin_Button_CC_MainPanel_C", "ExecuteUbergraph_WBP_WSkin_Button_CC_MainPanel");

	Params::UWBP_WSkin_Button_CC_MainPanel_C_ExecuteUbergraph_WBP_WSkin_Button_CC_MainPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


