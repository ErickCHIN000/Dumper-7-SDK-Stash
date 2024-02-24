#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C
// (None)

class UClass* UUMG_PhysicalKeyPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_PhysicalKeyPrompt_C");

	return Clss;
}


// UMG_PhysicalKeyPrompt_C UMG_PhysicalKeyPrompt.Default__UMG_PhysicalKeyPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_PhysicalKeyPrompt_C* UUMG_PhysicalKeyPrompt_C::GetDefaultObj()
{
	static class UUMG_PhysicalKeyPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_PhysicalKeyPrompt_C*>(UUMG_PhysicalKeyPrompt_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.SwapText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     RHSWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     LHSWidget                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKeyPrompt_C::SwapText(class UWidget* RHSWidget, class UWidget* LHSWidget, class UPanelSlot* CallFunc_SetContent_ReturnValue, class UPanelSlot* CallFunc_SetContent_ReturnValue_1, class UWidget* CallFunc_GetContent_ReturnValue, class UWidget* CallFunc_GetContent_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKeyPrompt_C", "SwapText");

	Params::UUMG_PhysicalKeyPrompt_C_SwapText_Params Parms{};

	Parms.RHSWidget = RHSWidget;
	Parms.LHSWidget = LHSWidget;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.CallFunc_SetContent_ReturnValue_1 = CallFunc_SetContent_ReturnValue_1;
	Parms.CallFunc_GetContent_ReturnValue = CallFunc_GetContent_ReturnValue;
	Parms.CallFunc_GetContent_ReturnValue_1 = CallFunc_GetContent_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKeyPrompt_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKeyPrompt_C", "PreConstruct");

	Params::UUMG_PhysicalKeyPrompt_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_PhysicalKeyPrompt_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKeyPrompt_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.KeyChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSet                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_PhysicalKeyPrompt_C::KeyChanged(bool IsSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKeyPrompt_C", "KeyChanged");

	Params::UUMG_PhysicalKeyPrompt_C_KeyChanged_Params Parms{};

	Parms.IsSet = IsSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_PhysicalKeyPrompt.UMG_PhysicalKeyPrompt_C.ExecuteUbergraph_UMG_PhysicalKeyPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Set_Key_IsSet                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_IsSet                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_PhysicalKeyPrompt_C::ExecuteUbergraph_UMG_PhysicalKeyPrompt(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_Set_Key_IsSet, bool K2Node_CustomEvent_IsSet, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_PhysicalKeyPrompt_C", "ExecuteUbergraph_UMG_PhysicalKeyPrompt");

	Params::UUMG_PhysicalKeyPrompt_C_ExecuteUbergraph_UMG_PhysicalKeyPrompt_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Set_Key_IsSet = CallFunc_Set_Key_IsSet;
	Parms.K2Node_CustomEvent_IsSet = K2Node_CustomEvent_IsSet;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


