#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TooltipsBar.TooltipsBar_C
// (None)

class UClass* UTooltipsBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TooltipsBar_C");

	return Clss;
}


// TooltipsBar_C TooltipsBar.Default__TooltipsBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTooltipsBar_C* UTooltipsBar_C::GetDefaultObj()
{
	static class UTooltipsBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTooltipsBar_C*>(UTooltipsBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TooltipsBar.TooltipsBar_C.Get_Background_BrushColor_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FLinearColor UTooltipsBar_C::Get_Background_BrushColor_0(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "Get_Background_BrushColor_0");

	Params::UTooltipsBar_C_Get_Background_BrushColor_0_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TooltipsBar.TooltipsBar_C.Clear
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)

void UTooltipsBar_C::Clear(class FText CallFunc_GetEmptyText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "Clear");

	Params::UTooltipsBar_C_Clear_Params Parms{};

	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipsBar.TooltipsBar_C.UpdateButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTooltipButtonInfo          ButtonInfo                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTooltipButton_C*            K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipButton_C*            K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltipButton_C*            K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelWidget*                CallFunc_GetParent_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipsBar_C::UpdateButton(const struct FTooltipButtonInfo& ButtonInfo, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, class UTooltipButton_C* K2Node_Select_Default, class UTooltipButton_C* K2Node_Select_Default_1, class UTooltipButton_C* K2Node_Select_Default_2, bool CallFunc_IsValid_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "UpdateButton");

	Params::UTooltipsBar_C_UpdateButton_Params Parms{};

	Parms.ButtonInfo = ButtonInfo;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetParent_ReturnValue = CallFunc_GetParent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipsBar.TooltipsBar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTooltipsBar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipsBar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "Tick");

	Params::UTooltipsBar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipsBar.TooltipsBar_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltipsBar_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "BndEvt__Button_0_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.BndEvt__Button5_K2Node_ComponentBoundEvent_124_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltipsBar_C::BndEvt__Button5_K2Node_ComponentBoundEvent_124_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "BndEvt__Button5_K2Node_ComponentBoundEvent_124_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.BndEvt__Button4_K2Node_ComponentBoundEvent_143_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltipsBar_C::BndEvt__Button4_K2Node_ComponentBoundEvent_143_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "BndEvt__Button4_K2Node_ComponentBoundEvent_143_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.BndEvt__Button3_K2Node_ComponentBoundEvent_163_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltipsBar_C::BndEvt__Button3_K2Node_ComponentBoundEvent_163_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "BndEvt__Button3_K2Node_ComponentBoundEvent_163_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.BndEvt__Button2_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UTooltipsBar_C::BndEvt__Button2_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "BndEvt__Button2_K2Node_ComponentBoundEvent_184_OnButtonPressedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void UTooltipsBar_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TooltipsBar.TooltipsBar_C.ExecuteUbergraph_TooltipsBar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTooltipButtonInfo>  CallFunc_GetTooltipButtons_ReturnValue                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_GetTooltipsCounter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTooltipButtonInfo          CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Get_Background_BrushColor_0_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipsBar_C::ExecuteUbergraph_TooltipsBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TArray<struct FTooltipButtonInfo>& CallFunc_GetTooltipButtons_ReturnValue, int32 CallFunc_GetTooltipsCounter_ReturnValue, const struct FTooltipButtonInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FLinearColor& CallFunc_Get_Background_BrushColor_0_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "ExecuteUbergraph_TooltipsBar");

	Params::UTooltipsBar_C_ExecuteUbergraph_TooltipsBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetTooltipButtons_ReturnValue = CallFunc_GetTooltipButtons_ReturnValue;
	Parms.CallFunc_GetTooltipsCounter_ReturnValue = CallFunc_GetTooltipsCounter_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Get_Background_BrushColor_0_ReturnValue = CallFunc_Get_Background_BrushColor_0_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TooltipsBar.TooltipsBar_C.OnTooltipButtonClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETooltipButtonType      ButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTooltipsBar_C::OnTooltipButtonClicked__DelegateSignature(enum class ETooltipButtonType ButtonType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TooltipsBar_C", "OnTooltipButtonClicked__DelegateSignature");

	Params::UTooltipsBar_C_OnTooltipButtonClicked__DelegateSignature_Params Parms{};

	Parms.ButtonType = ButtonType;

	UObject::ProcessEvent(Func, &Parms);

}

}


