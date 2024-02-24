#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_DarkTitlebar.UMG_DarkTitlebar_C
// (None)

class UClass* UUMG_DarkTitlebar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_DarkTitlebar_C");

	return Clss;
}


// UMG_DarkTitlebar_C UMG_DarkTitlebar.Default__UMG_DarkTitlebar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_DarkTitlebar_C* UUMG_DarkTitlebar_C::GetDefaultObj()
{
	static class UUMG_DarkTitlebar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_DarkTitlebar_C*>(UUMG_DarkTitlebar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_DarkTitlebar.UMG_DarkTitlebar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_DarkTitlebar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebar_C", "PreConstruct");

	Params::UUMG_DarkTitlebar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DarkTitlebar.UMG_DarkTitlebar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_DarkTitlebar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_DarkTitlebar.UMG_DarkTitlebar_C.UpdateText
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_DarkTitlebar_C::UpdateText(class FText Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebar_C", "UpdateText");

	Params::UUMG_DarkTitlebar_C_UpdateText_Params Parms{};

	Parms.Text = Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_DarkTitlebar.UMG_DarkTitlebar_C.ExecuteUbergraph_UMG_DarkTitlebar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Text                                          (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_DarkTitlebar_C::ExecuteUbergraph_UMG_DarkTitlebar(int32 EntryPoint, class FText K2Node_CustomEvent_Text, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_DarkTitlebar_C", "ExecuteUbergraph_UMG_DarkTitlebar");

	Params::UUMG_DarkTitlebar_C_ExecuteUbergraph_UMG_DarkTitlebar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Text = K2Node_CustomEvent_Text;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


