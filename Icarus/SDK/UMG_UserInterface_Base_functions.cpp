#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_UserInterface_Base.UMG_UserInterface_Base_C
// (None)

class UClass* UUMG_UserInterface_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_UserInterface_Base_C");

	return Clss;
}


// UMG_UserInterface_Base_C UMG_UserInterface_Base.Default__UMG_UserInterface_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_UserInterface_Base_C* UUMG_UserInterface_Base_C::GetDefaultObj()
{
	static class UUMG_UserInterface_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_UserInterface_Base_C*>(UUMG_UserInterface_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetMap
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusMapScreenBase*        Radar                                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetMap(class UIcarusMapScreenBase** Radar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetMap");

	Params::UUMG_UserInterface_Base_C_GetMap_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Radar != nullptr)
		*Radar = Parms.Radar;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.CollapseIcarusLogVisibilty
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_ClientLogging_C*        CallFunc_GetIcarusLogWindow_LogWindow                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::CollapseIcarusLogVisibilty(class UUMG_ClientLogging_C* CallFunc_GetIcarusLogWindow_LogWindow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "CollapseIcarusLogVisibilty");

	Params::UUMG_UserInterface_Base_C_CollapseIcarusLogVisibilty_Params Parms{};

	Parms.CallFunc_GetIcarusLogWindow_LogWindow = CallFunc_GetIcarusLogWindow_LogWindow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetIcarusLogWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_ClientLogging_C*        LogWindow                                                        (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetIcarusLogWindow(class UUMG_ClientLogging_C** LogWindow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetIcarusLogWindow");

	Params::UUMG_UserInterface_Base_C_GetIcarusLogWindow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (LogWindow != nullptr)
		*LogWindow = Parms.LogWindow;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleIcarusLogVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ClientLogging_C*        CallFunc_GetIcarusLogWindow_LogWindow                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ToggleIcarusLogVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_ClientLogging_C* CallFunc_GetIcarusLogWindow_LogWindow, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ToggleIcarusLogVisibility");

	Params::UUMG_UserInterface_Base_C_ToggleIcarusLogVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetIcarusLogWindow_LogWindow = CallFunc_GetIcarusLogWindow_LogWindow;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.RemoveCustomPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 PopupWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::RemoveCustomPopup(class UUserWidget* PopupWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "RemoveCustomPopup");

	Params::UUMG_UserInterface_Base_C_RemoveCustomPopup_Params Parms{};

	Parms.PopupWidget = PopupWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowCustomPopup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 PopupWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ShowCustomPopup(class UUserWidget* PopupWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ShowCustomPopup");

	Params::UUMG_UserInterface_Base_C_ShowCustomPopup_Params Parms{};

	Parms.PopupWidget = PopupWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetHiddenByUser
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewHiddenByUser                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::SetHiddenByUser(bool NewHiddenByUser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "SetHiddenByUser");

	Params::UUMG_UserInterface_Base_C_SetHiddenByUser_Params Parms{};

	Parms.NewHiddenByUser = NewHiddenByUser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetForceShowCrosshair
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ForceShowCrosshair                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::SetForceShowCrosshair(bool ForceShowCrosshair)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "SetForceShowCrosshair");

	Params::UUMG_UserInterface_Base_C_SetForceShowCrosshair_Params Parms{};

	Parms.ForceShowCrosshair = ForceShowCrosshair;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetConfirmationOverlay(class UOverlay** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetConfirmationOverlay");

	Params::UUMG_UserInterface_Base_C_GetConfirmationOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleStatDebugger
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::ToggleStatDebugger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ToggleStatDebugger");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsShowingRadialMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ShowingRadialMenu                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::IsShowingRadialMenu(bool* ShowingRadialMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "IsShowingRadialMenu");

	Params::UUMG_UserInterface_Base_C_IsShowingRadialMenu_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ShowingRadialMenu != nullptr)
		*ShowingRadialMenu = Parms.ShowingRadialMenu;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.RemoveRadialMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RadialMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::RemoveRadialMenu(class UUserWidget* RadialMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "RemoveRadialMenu");

	Params::UUMG_UserInterface_Base_C_RemoveRadialMenu_Params Parms{};

	Parms.RadialMenu = RadialMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.AddRadialMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 RadialMenu                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::AddRadialMenu(class UUserWidget* RadialMenu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "AddRadialMenu");

	Params::UUMG_UserInterface_Base_C_AddRadialMenu_Params Parms{};

	Parms.RadialMenu = RadialMenu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Size                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetSize(struct FVector2D* Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetSize");

	Params::UUMG_UserInterface_Base_C_GetSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Size != nullptr)
		*Size = std::move(Parms.Size);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationPopup
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UConfirmationPopupBase*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UConfirmationPopupBase* UUMG_UserInterface_Base_C::GetConfirmationPopup(class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetConfirmationPopup");

	Params::UUMG_UserInterface_Base_C_GetConfirmationPopup_Params Parms{};

	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetMaxProjectionWidgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              MaxProjectionWidgetCount                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetMaxProjectionWidgets(int32* MaxProjectionWidgetCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetMaxProjectionWidgets");

	Params::UUMG_UserInterface_Base_C_GetMaxProjectionWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (MaxProjectionWidgetCount != nullptr)
		*MaxProjectionWidgetCount = Parms.MaxProjectionWidgetCount;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetMaxProjectionWidgets
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewMaxWidgetCount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::SetMaxProjectionWidgets(int32 NewMaxWidgetCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "SetMaxProjectionWidgets");

	Params::UUMG_UserInterface_Base_C_SetMaxProjectionWidgets_Params Parms{};

	Parms.NewMaxWidgetCount = NewMaxWidgetCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetDialogue
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_Dialogue_C*             Dialogue                                                         (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetDialogue(class UUMG_Dialogue_C** Dialogue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetDialogue");

	Params::UUMG_UserInterface_Base_C_GetDialogue_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Dialogue != nullptr)
		*Dialogue = Parms.Dialogue;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_CheatOverlay_C*         Overlay                                                          (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetCheatOverlay(class UUMG_CheatOverlay_C** Overlay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetCheatOverlay");

	Params::UUMG_UserInterface_Base_C_GetCheatOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Overlay != nullptr)
		*Overlay = Parms.Overlay;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Show Game Message
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Error                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Message                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// float                              LifeTimeOverride                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::Show_Game_Message(bool Error, class FText Message, float LifeTimeOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "Show Game Message");

	Params::UUMG_UserInterface_Base_C_Show_Game_Message_Params Parms{};

	Parms.Error = Error;
	Parms.Message = Message;
	Parms.LifeTimeOverride = LifeTimeOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusGained
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFocusWidget_bValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusWidget_Widget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFocusWidget_bThis                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::WidgetFocusGained(class UIcarusWidget* Widget, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "WidgetFocusGained");

	Params::UUMG_UserInterface_Base_C_WidgetFocusGained_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue = CallFunc_IsPlayerUsingControllerStatic_ReturnValue;
	Parms.CallFunc_GetFocusWidget_bValid = CallFunc_GetFocusWidget_bValid;
	Parms.CallFunc_GetFocusWidget_Widget = CallFunc_GetFocusWidget_Widget;
	Parms.CallFunc_GetFocusWidget_bThis = CallFunc_GetFocusWidget_bThis;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.WidgetFocusLost
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UIcarusWidget*               Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetFocusWidget_bValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusWidget_Widget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFocusWidget_bThis                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFocusEvent                 Temp_struct_Variable                                             (ConstParm, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMouseNavigation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::WidgetFocusLost(class UIcarusWidget* Widget, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& Temp_struct_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsMouseNavigation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "WidgetFocusLost");

	Params::UUMG_UserInterface_Base_C_WidgetFocusLost_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue = CallFunc_IsPlayerUsingControllerStatic_ReturnValue;
	Parms.CallFunc_GetFocusWidget_bValid = CallFunc_GetFocusWidget_bValid;
	Parms.CallFunc_GetFocusWidget_Widget = CallFunc_GetFocusWidget_Widget;
	Parms.CallFunc_GetFocusWidget_bThis = CallFunc_GetFocusWidget_bThis;
	Parms.CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1 = CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_IsMouseNavigation_ReturnValue = CallFunc_IsMouseNavigation_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::ToggleEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ToggleEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsSpace?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InSpace                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::IsSpace_(bool* InSpace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "IsSpace?");

	Params::UUMG_UserInterface_Base_C_IsSpace__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (InSpace != nullptr)
		*InSpace = Parms.InSpace;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HideLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::HideLoadingScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "HideLoadingScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowLoadingScreen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Optional_Message                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                     OptionalWidget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ShowLoadingScreen(class FText Optional_Message, class UWidget* OptionalWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ShowLoadingScreen");

	Params::UUMG_UserInterface_Base_C_ShowLoadingScreen_Params Parms{};

	Parms.Optional_Message = Optional_Message;
	Parms.OptionalWidget = OptionalWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HideErrorCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::HideErrorCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "HideErrorCode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ShowErrorCode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ShowErrorCode(const struct FErrorCodesEnum& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ShowErrorCode");

	Params::UUMG_UserInterface_Base_C_ShowErrorCode_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OpenEscapeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::OpenEscapeMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OpenEscapeMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsMenuVisible
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Visible                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::IsMenuVisible(bool* Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "IsMenuVisible");

	Params::UUMG_UserInterface_Base_C_IsMenuVisible_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Visible != nullptr)
		*Visible = Parms.Visible;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.EscapeKeyPressed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMenuVisible_Visible                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::EscapeKeyPressed(bool CallFunc_IsMenuVisible_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "EscapeKeyPressed");

	Params::UUMG_UserInterface_Base_C_EscapeKeyPressed_Params Parms{};

	Parms.CallFunc_IsMenuVisible_Visible = CallFunc_IsMenuVisible_Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCheatContext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECheatContext           Context                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetCheatContext(enum class ECheatContext* Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetCheatContext");

	Params::UUMG_UserInterface_Base_C_GetCheatContext_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Context != nullptr)
		*Context = Parms.Context;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ToggleCheatMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECheatsEnabled          CallFunc_IfCheatsEnabled_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatOverlay_C*         CallFunc_GetCheatOverlay_Overlay                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::ToggleCheatMenu(enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, class UUMG_CheatOverlay_C* CallFunc_GetCheatOverlay_Overlay, bool K2Node_SwitchEnum_CmpSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ToggleCheatMenu");

	Params::UUMG_UserInterface_Base_C_ToggleCheatMenu_Params Parms{};

	Parms.CallFunc_IfCheatsEnabled_Paths = CallFunc_IfCheatsEnabled_Paths;
	Parms.CallFunc_GetCheatOverlay_Overlay = CallFunc_GetCheatOverlay_Overlay;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetProjectionInterface
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UW_ProjectionInterface_C*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UW_ProjectionInterface_C* UUMG_UserInterface_Base_C::GetProjectionInterface()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetProjectionInterface");

	Params::UUMG_UserInterface_Base_C_GetProjectionInterface_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetConfirmationWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_ConfirmationPopup_C*    ConfirmationWidget                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetConfirmationWindow(class UUMG_ConfirmationPopup_C** ConfirmationWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetConfirmationWindow");

	Params::UUMG_UserInterface_Base_C_GetConfirmationWindow_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ConfirmationWidget != nullptr)
		*ConfirmationWidget = Parms.ConfirmationWidget;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FixFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetFocusWidget_bValid                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetFocusWidget_Widget                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFocusWidget_bThis                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::FixFocus(bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "FixFocus");

	Params::UUMG_UserInterface_Base_C_FixFocus_Params Parms{};

	Parms.CallFunc_GetFocusWidget_bValid = CallFunc_GetFocusWidget_bValid;
	Parms.CallFunc_GetFocusWidget_Widget = CallFunc_GetFocusWidget_Widget;
	Parms.CallFunc_GetFocusWidget_bThis = CallFunc_GetFocusWidget_bThis;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.SetFocusWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::SetFocusWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "SetFocusWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.GetCursorWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUMG_CursorWidget_C*         CursorWidget                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::GetCursorWidget(class UUMG_CursorWidget_C** CursorWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "GetCursorWidget");

	Params::UUMG_UserInterface_Base_C_GetCursorWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CursorWidget != nullptr)
		*CursorWidget = Parms.CursorWidget;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.FocusStaticWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EStaticUIWidgets        Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::FocusStaticWidget(enum class EStaticUIWidgets Panel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "FocusStaticWidget");

	Params::UUMG_UserInterface_Base_C_FocusStaticWidget_Params Parms{};

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Reset
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.HidePanelDisplay
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::HidePanelDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "HidePanelDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ClearModifierKeys
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModifierKeys           Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EModifierKeys           Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EModifierKeys           Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFModifierKeyValues         CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFModifierKeyValues         CallFunc_Map_Find_Value_1                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FKey                        CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFModifierKeyValues         CallFunc_Map_Find_Value_2                                        (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item_2                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ClearModifierKeys(enum class EModifierKeys Temp_byte_Variable, enum class EModifierKeys Temp_byte_Variable_1, enum class EModifierKeys Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable, const struct FFModifierKeyValues& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FKey& CallFunc_Array_Get_Item, const struct FKey& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool Temp_bool_Variable_1, const struct FKey& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ClearModifierKeys");

	Params::UUMG_UserInterface_Base_C_ClearModifierKeys_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.IsKeyDown
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EModifierKeys           Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               KeyHeld                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFModifierKeyValues         CallFunc_Map_Find_Value                                          (HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_UserInterface_Base_C::IsKeyDown(enum class EModifierKeys Key, bool* KeyHeld, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FKey& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "IsKeyDown");

	Params::UUMG_UserInterface_Base_C_IsKeyDown_Params Parms{};

	Parms.Key = Key;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyHeld != nullptr)
		*KeyHeld = Parms.KeyHeld;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FEventReply UUMG_UserInterface_Base_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool Temp_bool_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OnKeyDown");

	Params::UUMG_UserInterface_Base_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FKey                        Key                                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// struct FKey                        CallFunc_GetKey_ReturnValue_1                                    (HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// bool                               CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UUMG_UserInterface_Base_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, bool Temp_bool_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OnKeyUp");

	Params::UUMG_UserInterface_Base_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.Key = Key;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue_1 = CallFunc_GetKey_ReturnValue_1;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.InputTypeApplied
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInputTypeSetting       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::InputTypeApplied(enum class EInputTypeSetting Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "InputTypeApplied");

	Params::UUMG_UserInterface_Base_C_InputTypeApplied_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnWindowReceivedFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::OnWindowReceivedFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OnWindowReceivedFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ErrorRequested
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             ErrorCode                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ErrorRequested(const struct FErrorCodesEnum& ErrorCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ErrorRequested");

	Params::UUMG_UserInterface_Base_C_ErrorRequested_Params Parms{};

	Parms.ErrorCode = ErrorCode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.CreateCheatOverlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::CreateCheatOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "CreateCheatOverlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.DisplayIcarusError
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FErrorCodesEnum             OutgoingError                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::DisplayIcarusError(const struct FErrorCodesEnum& OutgoingError)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "DisplayIcarusError");

	Params::UUMG_UserInterface_Base_C_DisplayIcarusError_Params Parms{};

	Parms.OutgoingError = OutgoingError;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.ExecuteUbergraph_UMG_UserInterface_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FErrorCodesEnum             K2Node_Event_OutgoingError                                       (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UIcarusErrorSubsystem*       CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FKey>                K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<struct FKey>                K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFModifierKeyValues         K2Node_MakeStruct_FModifierKeyValues                             (HasGetValueTypeHash)
// struct FFModifierKeyValues         K2Node_MakeStruct_FModifierKeyValues_1                           (HasGetValueTypeHash)
// TArray<struct FKey>                K2Node_MakeArray_Array_2                                         (ReferenceParm)
// TMap<struct FKey, bool>            K2Node_MakeMap_Map                                               (None)
// struct FFModifierKeyValues         K2Node_MakeStruct_FModifierKeyValues_2                           (HasGetValueTypeHash)
// TMap<enum class EModifierKeys, struct FFModifierKeyValues>K2Node_MakeMap_Map_1                                             (None)
// TMap<struct FKey, struct FStaticWidget>K2Node_MakeMap_Map_2                                             (ContainsInstancedReference)
// enum class EInputTypeSetting       K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class ECheatsEnabled          CallFunc_IfCheatsEnabled_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECheatContext           CallFunc_GetCheatContext_Context                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_CheatOverlay_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIcarusGameInstance*         K2Node_DynamicCast_AsIcarus_Game_Instance                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FErrorCodesEnum             K2Node_CustomEvent_ErrorCode                                     (HasGetValueTypeHash)
// class UBP_IcarusGameInstance_C*    K2Node_DynamicCast_AsBP_Icarus_Game_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_IcarusGameUserSettings_C*CallFunc_Get_Icarus_Game_User_Settings_Settings                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInputTypeSetting       CallFunc_GetInputType_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_UserInterface_Base_C::ExecuteUbergraph_UMG_UserInterface_Base(int32 EntryPoint, const struct FErrorCodesEnum& K2Node_Event_OutgoingError, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FKey>& K2Node_MakeArray_Array, TArray<struct FKey>& K2Node_MakeArray_Array_1, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues_1, TArray<struct FKey>& K2Node_MakeArray_Array_2, TMap<struct FKey, bool> K2Node_MakeMap_Map, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues_2, TMap<enum class EModifierKeys, struct FFModifierKeyValues> K2Node_MakeMap_Map_1, TMap<struct FKey, struct FStaticWidget> K2Node_MakeMap_Map_2, enum class EInputTypeSetting K2Node_CustomEvent_Value, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class ECheatContext CallFunc_GetCheatContext_Context, class UUMG_CheatOverlay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const struct FErrorCodesEnum& K2Node_CustomEvent_ErrorCode, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EInputTypeSetting CallFunc_GetInputType_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "ExecuteUbergraph_UMG_UserInterface_Base");

	Params::UUMG_UserInterface_Base_C_ExecuteUbergraph_UMG_UserInterface_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OutgoingError = K2Node_Event_OutgoingError;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FModifierKeyValues = K2Node_MakeStruct_FModifierKeyValues;
	Parms.K2Node_MakeStruct_FModifierKeyValues_1 = K2Node_MakeStruct_FModifierKeyValues_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_MakeStruct_FModifierKeyValues_2 = K2Node_MakeStruct_FModifierKeyValues_2;
	Parms.K2Node_MakeMap_Map_1 = K2Node_MakeMap_Map_1;
	Parms.K2Node_MakeMap_Map_2 = K2Node_MakeMap_Map_2;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IfCheatsEnabled_Paths = CallFunc_IfCheatsEnabled_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCheatContext_Context = CallFunc_GetCheatContext_Context;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_Game_Instance = K2Node_DynamicCast_AsIcarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_ErrorCode = K2Node_CustomEvent_ErrorCode;
	Parms.K2Node_DynamicCast_AsBP_Icarus_Game_Instance = K2Node_DynamicCast_AsBP_Icarus_Game_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Get_Icarus_Game_User_Settings_Settings = CallFunc_Get_Icarus_Game_User_Settings_Settings;
	Parms.CallFunc_GetInputType_ReturnValue = CallFunc_GetInputType_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnMenuOpened__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::OnMenuOpened__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OnMenuOpened__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_UserInterface_Base.UMG_UserInterface_Base_C.OnHidePanelDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_UserInterface_Base_C::OnHidePanelDisplay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_UserInterface_Base_C", "OnHidePanelDisplay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


