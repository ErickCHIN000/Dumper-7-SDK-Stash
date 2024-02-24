#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActionHintBarWidget.ActionHintBarWidget_C
// (None)

class UClass* UActionHintBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionHintBarWidget_C");

	return Clss;
}


// ActionHintBarWidget_C ActionHintBarWidget.Default__ActionHintBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionHintBarWidget_C* UActionHintBarWidget_C::GetDefaultObj()
{
	static class UActionHintBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionHintBarWidget_C*>(UActionHintBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionHintBarWidget.ActionHintBarWidget_C.CreateHintEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FActionHintStruct           ActionHint                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class UMenuNavigationFaceButton_C* OutButton                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interactable                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EActionHintPosition     HintSlot                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                TargetHBox                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionHintPosition     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMenuNavigationFaceButton_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EActionHintPosition     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActionHintEntry_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionHintPosition     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EActionHintPosition     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionHintBarWidget_C::CreateHintEntry(const struct FActionHintStruct& ActionHint, class UMenuNavigationFaceButton_C** OutButton, bool* Interactable, enum class EActionHintPosition HintSlot, class UPanelWidget* TargetHBox, enum class EActionHintPosition Temp_byte_Variable, class UMenuNavigationFaceButton_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable, enum class EActionHintPosition Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UActionHintEntry_C* CallFunc_Create_ReturnValue_1, enum class EActionHintPosition K2Node_Select_Default, enum class EActionHintPosition K2Node_Select_Default_1, class UPanelWidget* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "CreateHintEntry");

	Params::UActionHintBarWidget_C_CreateHintEntry_Params Parms{};

	Parms.ActionHint = ActionHint;
	Parms.HintSlot = HintSlot;
	Parms.TargetHBox = TargetHBox;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutButton != nullptr)
		*OutButton = Parms.OutButton;

	if (Interactable != nullptr)
		*Interactable = Parms.Interactable;

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.DetermineSplitscreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGSplitScreenSubsystem*     CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInMainMenu_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsSplitScreenActive_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayerScreenDPIScale_OutAspectRatio                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlayerScreenDPIScale_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionHintBarWidget_C::DetermineSplitscreen(class UGGSplitScreenSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsInMainMenu_ReturnValue, bool CallFunc_IsSplitScreenActive_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, float CallFunc_GetPlayerScreenDPIScale_OutAspectRatio, float CallFunc_GetPlayerScreenDPIScale_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "DetermineSplitscreen");

	Params::UActionHintBarWidget_C_DetermineSplitscreen_Params Parms{};

	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_IsInMainMenu_ReturnValue = CallFunc_IsInMainMenu_ReturnValue;
	Parms.CallFunc_IsSplitScreenActive_ReturnValue = CallFunc_IsSplitScreenActive_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetPlayerScreenDPIScale_OutAspectRatio = CallFunc_GetPlayerScreenDPIScale_OutAspectRatio;
	Parms.CallFunc_GetPlayerScreenDPIScale_ReturnValue = CallFunc_GetPlayerScreenDPIScale_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGGUserWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               PointerEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FKeyEvent                   KeyEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UActionHintBarWidget_C::OnButtonClicked(class UGGUserWidget* Widget, const struct FPointerEvent& PointerEvent, const struct FKeyEvent& KeyEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "OnButtonClicked");

	Params::UActionHintBarWidget_C_OnButtonClicked_Params Parms{};

	Parms.Widget = Widget;
	Parms.PointerEvent = PointerEvent;
	Parms.KeyEvent = KeyEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.RebuildHints
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UActionHintBarWidget_C::RebuildHints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "RebuildHints");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.ShowBackground
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowLeft                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowRight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ShowCenter                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionHintBarWidget_C::ShowBackground(bool ShowLeft, bool ShowRight, bool ShowCenter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "ShowBackground");

	Params::UActionHintBarWidget_C_ShowBackground_Params Parms{};

	Parms.ShowLeft = ShowLeft;
	Parms.ShowRight = ShowRight;
	Parms.ShowCenter = ShowCenter;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UActionHintBarWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.OnActionHintEntryCreated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UGGActionHintBarEntry*       EntryWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionHintBarWidget_C::OnActionHintEntryCreated(class UGGActionHintBarEntry* EntryWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "OnActionHintEntryCreated");

	Params::UActionHintBarWidget_C_OnActionHintEntryCreated_Params Parms{};

	Parms.EntryWidget = EntryWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionHintBarWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "PreConstruct");

	Params::UActionHintBarWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionHintBarWidget.ActionHintBarWidget_C.ExecuteUbergraph_ActionHintBarWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGGUserWidget*               K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_CustomEvent_PointerEvent                                  (None)
// struct FKeyEvent                   K2Node_CustomEvent_KeyEvent                                      (None)
// class UMenuNavigationFaceButton_C* K2Node_DynamicCast_AsMenu_Navigation_Face_Button                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowLeft                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowRight                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ShowCenter                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGGActionHintBarEntry*       K2Node_Event_EntryWidget                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UActionHintEntry_C*          K2Node_DynamicCast_AsAction_Hint_Entry                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobilePlatform_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionHintBarWidget_C::ExecuteUbergraph_ActionHintBarWidget(int32 EntryPoint, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UGGUserWidget* K2Node_CustomEvent_Widget, const struct FPointerEvent& K2Node_CustomEvent_PointerEvent, const struct FKeyEvent& K2Node_CustomEvent_KeyEvent, class UMenuNavigationFaceButton_C* K2Node_DynamicCast_AsMenu_Navigation_Face_Button, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_ShowLeft, bool K2Node_CustomEvent_ShowRight, bool K2Node_CustomEvent_ShowCenter, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_GetChildrenCount_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2, class UGGActionHintBarEntry* K2Node_Event_EntryWidget, bool CallFunc_BooleanAND_ReturnValue_2, class UActionHintEntry_C* K2Node_DynamicCast_AsAction_Hint_Entry, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobilePlatform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionHintBarWidget_C", "ExecuteUbergraph_ActionHintBarWidget");

	Params::UActionHintBarWidget_C_ExecuteUbergraph_ActionHintBarWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_PointerEvent = K2Node_CustomEvent_PointerEvent;
	Parms.K2Node_CustomEvent_KeyEvent = K2Node_CustomEvent_KeyEvent;
	Parms.K2Node_DynamicCast_AsMenu_Navigation_Face_Button = K2Node_DynamicCast_AsMenu_Navigation_Face_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_ShowLeft = K2Node_CustomEvent_ShowLeft;
	Parms.K2Node_CustomEvent_ShowRight = K2Node_CustomEvent_ShowRight;
	Parms.K2Node_CustomEvent_ShowCenter = K2Node_CustomEvent_ShowCenter;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue_2 = CallFunc_GetChildrenCount_ReturnValue_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.K2Node_Event_EntryWidget = K2Node_Event_EntryWidget;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsAction_Hint_Entry = K2Node_DynamicCast_AsAction_Hint_Entry;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsMobilePlatform_ReturnValue = CallFunc_IsMobilePlatform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


