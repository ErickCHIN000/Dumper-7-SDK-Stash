#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TabButtonWidget.TabButtonWidget_C
// (None)

class UClass* UTabButtonWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TabButtonWidget_C");

	return Clss;
}


// TabButtonWidget_C TabButtonWidget.Default__TabButtonWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTabButtonWidget_C* UTabButtonWidget_C::GetDefaultObj()
{
	static class UTabButtonWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTabButtonWidget_C*>(UTabButtonWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TabButtonWidget.TabButtonWidget_C.Get_ButtonText_ColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class ECheckBoxState          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 Temp_struct_Variable                                             (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// enum class ECheckBoxState          CallFunc_GetCheckedState_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_Select_Default                                            (None)

struct FSlateColor UTabButtonWidget_C::Get_ButtonText_ColorAndOpacity_0(enum class ECheckBoxState Temp_byte_Variable, const struct FSlateColor& Temp_struct_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, enum class ECheckBoxState CallFunc_GetCheckedState_ReturnValue, const struct FSlateColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabButtonWidget_C", "Get_ButtonText_ColorAndOpacity_0");

	Params::UTabButtonWidget_C_Get_ButtonText_ColorAndOpacity_0_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_GetCheckedState_ReturnValue = CallFunc_GetCheckedState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabButtonWidget.TabButtonWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabButtonWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabButtonWidget_C", "PreConstruct");

	Params::UTabButtonWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabButtonWidget.TabButtonWidget_C.OnClicked_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabButtonWidget_C::OnClicked_Event_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabButtonWidget_C", "OnClicked_Event_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TabButtonWidget.TabButtonWidget_C.ExecuteUbergraph_TabButtonWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabButtonWidget_C::ExecuteUbergraph_TabButtonWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabButtonWidget_C", "ExecuteUbergraph_TabButtonWidget");

	Params::UTabButtonWidget_C_ExecuteUbergraph_TabButtonWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabButtonWidget.TabButtonWidget_C.OnTabClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TabIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabButtonWidget_C::OnTabClicked__DelegateSignature(int32 TabIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TabButtonWidget_C", "OnTabClicked__DelegateSignature");

	Params::UTabButtonWidget_C_OnTabClicked__DelegateSignature_Params Parms{};

	Parms.TabIndex = TabIndex;

	UObject::ProcessEvent(Func, &Parms);

}

}


