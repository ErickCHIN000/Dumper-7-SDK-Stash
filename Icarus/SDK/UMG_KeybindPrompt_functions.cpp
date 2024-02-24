#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_KeybindPrompt.UMG_KeybindPrompt_C
// (None)

class UClass* UUMG_KeybindPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_KeybindPrompt_C");

	return Clss;
}


// UMG_KeybindPrompt_C UMG_KeybindPrompt.Default__UMG_KeybindPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_KeybindPrompt_C* UUMG_KeybindPrompt_C::GetDefaultObj()
{
	static class UUMG_KeybindPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_KeybindPrompt_C*>(UUMG_KeybindPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.SwapText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     RHSWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LHSWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_KeybindPrompt_C::SwapText(class UWidget* RHSWidget, class UWidget* LHSWidget, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue, class UWidget* CallFunc_GetContent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeybindPrompt_C", "SwapText");

	Params::UUMG_KeybindPrompt_C_SwapText_Params Parms{};

	Parms.RHSWidget = RHSWidget;
	Parms.LHSWidget = LHSWidget;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue_1 = CallFunc_SetContent_ReturnValue_1;
	Parms.CallFunc_GetContent_ReturnValue = CallFunc_GetContent_ReturnValue;
	Parms.CallFunc_GetContent_ReturnValue_1 = CallFunc_GetContent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_KeybindPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeybindPrompt_C", "PreConstruct");

	Params::UUMG_KeybindPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_KeybindPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeybindPrompt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.KeyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_KeybindPrompt_C::KeyChanged(bool IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeybindPrompt_C", "KeyChanged");

	Params::UUMG_KeybindPrompt_C_KeyChanged_Params Parms{};

	Parms.IsSet = IsSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_KeybindPrompt.UMG_KeybindPrompt_C.ExecuteUbergraph_UMG_KeybindPrompt
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKeybindData                CallFunc_GetKeybindingsStruct_Keybindings                        (None)
// enum class EValid                  CallFunc_GetKeybindingsStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsSet                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUMG_KeybindPrompt_C::ExecuteUbergraph_UMG_KeybindPrompt(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool K2Node_Event_IsDesignTime, const struct FKeybindData& CallFunc_GetKeybindingsStruct_Keybindings, enum class EValid CallFunc_GetKeybindingsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_CustomEvent_IsSet, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_KeybindPrompt_C", "ExecuteUbergraph_UMG_KeybindPrompt");

	Params::UUMG_KeybindPrompt_C_ExecuteUbergraph_UMG_KeybindPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetKeybindingsStruct_Keybindings = CallFunc_GetKeybindingsStruct_Keybindings;
	Parms.CallFunc_GetKeybindingsStruct_Paths = CallFunc_GetKeybindingsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_IsSet = K2Node_CustomEvent_IsSet;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


