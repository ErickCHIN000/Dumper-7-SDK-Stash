#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C
// (None)

class UClass* UWBP_Horizontal_AutoScrollingText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Horizontal_AutoScrollingText_C");

	return Clss;
}


// WBP_Horizontal_AutoScrollingText_C WBP_Horizontal_AutoScrollingText.Default__WBP_Horizontal_AutoScrollingText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Horizontal_AutoScrollingText_C* UWBP_Horizontal_AutoScrollingText_C::GetDefaultObj()
{
	static class UWBP_Horizontal_AutoScrollingText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Horizontal_AutoScrollingText_C*>(UWBP_Horizontal_AutoScrollingText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C.SetText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Horizontal_AutoScrollingText_C::SetText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Horizontal_AutoScrollingText_C", "SetText");

	Params::UWBP_Horizontal_AutoScrollingText_C_SetText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C.InitializeMaxWIdthOverride
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Horizontal_AutoScrollingText_C::InitializeMaxWIdthOverride(bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Horizontal_AutoScrollingText_C", "InitializeMaxWIdthOverride");

	Params::UWBP_Horizontal_AutoScrollingText_C_InitializeMaxWIdthOverride_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast = CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C.InitializeWidthOverride
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Horizontal_AutoScrollingText_C::InitializeWidthOverride(bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Horizontal_AutoScrollingText_C", "InitializeWidthOverride");

	Params::UWBP_Horizontal_AutoScrollingText_C_InitializeWidthOverride_Params Parms{};

	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast = CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Horizontal_AutoScrollingText_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Horizontal_AutoScrollingText_C", "PreConstruct");

	Params::UWBP_Horizontal_AutoScrollingText_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Horizontal_AutoScrollingText.WBP_Horizontal_AutoScrollingText_C.ExecuteUbergraph_WBP_Horizontal_AutoScrollingText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Horizontal_AutoScrollingText_C::ExecuteUbergraph_WBP_Horizontal_AutoScrollingText(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Horizontal_AutoScrollingText_C", "ExecuteUbergraph_WBP_Horizontal_AutoScrollingText");

	Params::UWBP_Horizontal_AutoScrollingText_C_ExecuteUbergraph_WBP_Horizontal_AutoScrollingText_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


