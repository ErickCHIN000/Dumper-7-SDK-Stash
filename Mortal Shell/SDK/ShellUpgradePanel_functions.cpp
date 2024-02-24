#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShellUpgradePanel.ShellUpgradePanel_C
// (None)

class UClass* UShellUpgradePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShellUpgradePanel_C");

	return Clss;
}


// ShellUpgradePanel_C ShellUpgradePanel.Default__ShellUpgradePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShellUpgradePanel_C* UShellUpgradePanel_C::GetDefaultObj()
{
	static class UShellUpgradePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShellUpgradePanel_C*>(UShellUpgradePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShellUpgradePanel.ShellUpgradePanel_C.GetItemWidgetFromScrollBox
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              WidgetIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         AsShellUpgradeItem                                               (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         K2Node_DynamicCast_AsShell_Upgrade_Item                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradePanel_C::GetItemWidgetFromScrollBox(int32 WidgetIndex, class UShellUpgradeItem_C** AsShellUpgradeItem, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShellUpgradeItem_C* K2Node_DynamicCast_AsShell_Upgrade_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "GetItemWidgetFromScrollBox");

	Params::UShellUpgradePanel_C_GetItemWidgetFromScrollBox_Params Parms{};

	Parms.WidgetIndex = WidgetIndex;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsShell_Upgrade_Item = K2Node_DynamicCast_AsShell_Upgrade_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsShellUpgradeItem != nullptr)
		*AsShellUpgradeItem = Parms.AsShellUpgradeItem;

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.GetItemWidgetFromCache
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         UpgradeItem                                                      (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         ReturnWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradePanel_C::GetItemWidgetFromCache(class UShellUpgradeItem_C** UpgradeItem, class UShellUpgradeItem_C* ReturnWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UShellUpgradeItem_C* CallFunc_Create_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, class UShellUpgradeItem_C* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "GetItemWidgetFromCache");

	Params::UShellUpgradePanel_C_GetItemWidgetFromCache_Params Parms{};

	Parms.ReturnWidget = ReturnWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UpgradeItem != nullptr)
		*UpgradeItem = Parms.UpgradeItem;

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.Reinitialize
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::Reinitialize(int32 SelectedIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "Reinitialize");

	Params::UShellUpgradePanel_C_Reinitialize_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.ClearItems
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::ClearItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "ClearItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.OnSelectedIndexChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::OnSelectedIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "OnSelectedIndexChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWaifuNPC_C*                 Merchant                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::Open(class AWaifuNPC_C* Merchant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "Open");

	Params::UShellUpgradePanel_C_Open_Params Parms{};

	Parms.Merchant = Merchant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.MerchPrevCmd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::MerchPrevCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "MerchPrevCmd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.MerchNextCmd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::MerchNextCmd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "MerchNextCmd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.ChangeSelectedItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::ChangeSelectedItem(int32 Delta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "ChangeSelectedItem");

	Params::UShellUpgradePanel_C_ChangeSelectedItem_Params Parms{};

	Parms.Delta = Delta;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.Close
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.BuySelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::BuySelected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "BuySelected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.UpdatePlayerValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::UpdatePlayerValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "UpdatePlayerValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.AddUpgradeToList
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        UpgradeName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::AddUpgradeToList(class FName UpgradeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "AddUpgradeToList");

	Params::UShellUpgradePanel_C_AddUpgradeToList_Params Parms{};

	Parms.UpgradeName = UpgradeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.OpenBuyPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Title                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Subtitle                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Desc                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UShellUpgradePanel_C::OpenBuyPopup(class FText Title, class FText Subtitle, class FText Desc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "OpenBuyPopup");

	Params::UShellUpgradePanel_C_OpenBuyPopup_Params Parms{};

	Parms.Title = Title;
	Parms.Subtitle = Subtitle;
	Parms.Desc = Desc;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.CloseBuyPopup
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::CloseBuyPopup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "CloseBuyPopup");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.OnHoverStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::OnHoverStart(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "OnHoverStart");

	Params::UShellUpgradePanel_C_OnHoverStart_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.OnHoverEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::OnHoverEnd(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "OnHoverEnd");

	Params::UShellUpgradePanel_C_OnHoverEnd_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.HandleClickOnItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UShellUpgradeItem_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::HandleClickOnItem(class UShellUpgradeItem_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "HandleClickOnItem");

	Params::UShellUpgradePanel_C_HandleClickOnItem_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.ToggleShowMoreInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::ToggleShowMoreInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "ToggleShowMoreInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.UpdateMoreInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::UpdateMoreInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "UpdateMoreInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.HideMoreInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShellUpgradePanel_C::HideMoreInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "HideMoreInfo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.ConfirmPopupMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::ConfirmPopupMouse(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "ConfirmPopupMouse");

	Params::UShellUpgradePanel_C_ConfirmPopupMouse_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.CloseMouse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::CloseMouse(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "CloseMouse");

	Params::UShellUpgradePanel_C_CloseMouse_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.KeyboardModeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UShellUpgradePanel_C::KeyboardModeChanged(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "KeyboardModeChanged");

	Params::UShellUpgradePanel_C_KeyboardModeChanged_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ShellUpgradePanel.ShellUpgradePanel_C.ExecuteUbergraph_ShellUpgradePanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_CustomEvent_SelectedIndex                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWaifuNPC_C*                 K2Node_CustomEvent_Merchant                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Delta                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_1         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FShellUpgradeData           CallFunc_GetShellUpgradeRow_Out_Row                              (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetShellBondingPoints_Points                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetShellBondingPoints_Points_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsShellNameKnown_bKnown                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromCache_UpgradeItem                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_UpgradeName                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_2         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShellUpgradeData           CallFunc_GetShellUpgradeRow_Out_Row_1                            (HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Title                                         (None)
// class FText                        K2Node_CustomEvent_Subtitle                                      (None)
// class FText                        K2Node_CustomEvent_Desc                                          (None)
// int32                              CallFunc_GetChildrenCount_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_3         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_4         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         K2Node_CustomEvent_Widget_2                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_3                                   (None)
// class UShellUpgradeItem_C*         K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_5         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// class UShellUpgradeItem_C*         CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_6         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UShellUpgradeItem_C*         K2Node_DynamicCast_AsShell_Upgrade_Item                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetSize_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_CustomEvent_ControllerButton_1                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_CustomEvent_ControllerButton                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetShellUpgradeRowNames_OutRowNames                     (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_GetShell_CurrentArmor_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShellName_ShellName                                  (None)
// class FName                        CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_6                                          (None)
// class FText                        K2Node_Select_Default_7                                          (None)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_FancyNotification_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShellUpgradePanel_C::ExecuteUbergraph_ShellUpgradePanel(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const struct FLinearColor& Temp_struct_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_3, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_4, float Temp_float_Variable, float Temp_float_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, int32 K2Node_CustomEvent_SelectedIndex, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FLinearColor& Temp_struct_Variable_3, class AWaifuNPC_C* K2Node_CustomEvent_Merchant, int32 K2Node_CustomEvent_Delta, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_7, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, const struct FShellUpgradeData& CallFunc_GetShellUpgradeRow_Out_Row, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetShellBondingPoints_Points, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_GetShellBondingPoints_Points_1, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_2, bool CallFunc_IsShellNameKnown_bKnown, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromCache_UpgradeItem, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FName K2Node_CustomEvent_UpgradeName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_2, const struct FShellUpgradeData& CallFunc_GetShellUpgradeRow_Out_Row_1, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_3, class FText K2Node_CustomEvent_Title, class FText K2Node_CustomEvent_Subtitle, class FText K2Node_CustomEvent_Desc, int32 CallFunc_GetChildrenCount_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_3, int32 CallFunc_GetChildrenCount_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_4, class UShellUpgradeItem_C* K2Node_CustomEvent_Widget_2, int32 CallFunc_Array_Find_ReturnValue, class UShellUpgradeItem_C* K2Node_CustomEvent_Widget_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class UShellUpgradeItem_C* K2Node_CustomEvent_Widget, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default_3, enum class ESlateVisibility K2Node_Select_Default_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UShellUpgradeItem_C* CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_6, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UShellUpgradeItem_C* K2Node_DynamicCast_AsShell_Upgrade_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, float K2Node_Select_Default_5, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UUI_ControllerButton_C* K2Node_CustomEvent_ControllerButton_1, class UUI_ControllerButton_C* K2Node_CustomEvent_ControllerButton, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_4, TArray<class FName>& CallFunc_GetShellUpgradeRowNames_OutRowNames, class FName CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID, class FName CallFunc_Array_Get_Item, bool CallFunc_IsUpgradeUnlocked_bUnlocked, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EArmorTypes CallFunc_GetShell_CurrentArmor_5, class FText CallFunc_GetShellName_ShellName, class FName CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID_1, bool CallFunc_EqualEqual_NameName_ReturnValue, class FText K2Node_Select_Default_6, class FText K2Node_Select_Default_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool K2Node_CustomEvent_KeyboardMode, bool CallFunc_IsVisible_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_FancyNotification_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShellUpgradePanel_C", "ExecuteUbergraph_ShellUpgradePanel");

	Params::UShellUpgradePanel_C_ExecuteUbergraph_ShellUpgradePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_SelectedIndex = K2Node_CustomEvent_SelectedIndex;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_CustomEvent_Merchant = K2Node_CustomEvent_Merchant;
	Parms.K2Node_CustomEvent_Delta = K2Node_CustomEvent_Delta;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue_1 = CallFunc_GetChildrenCount_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_1 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetShellUpgradeRow_Out_Row = CallFunc_GetShellUpgradeRow_Out_Row;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_GetShell_CurrentArmor = CallFunc_GetShell_CurrentArmor;
	Parms.CallFunc_GetShellBondingPoints_Points = CallFunc_GetShellBondingPoints_Points;
	Parms.CallFunc_GetShell_CurrentArmor_1 = CallFunc_GetShell_CurrentArmor_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetShellBondingPoints_Points_1 = CallFunc_GetShellBondingPoints_Points_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetShell_CurrentArmor_2 = CallFunc_GetShell_CurrentArmor_2;
	Parms.CallFunc_IsShellNameKnown_bKnown = CallFunc_IsShellNameKnown_bKnown;
	Parms.CallFunc_GetItemWidgetFromCache_UpgradeItem = CallFunc_GetItemWidgetFromCache_UpgradeItem;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CustomEvent_UpgradeName = K2Node_CustomEvent_UpgradeName;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_2 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_2;
	Parms.CallFunc_GetShellUpgradeRow_Out_Row_1 = CallFunc_GetShellUpgradeRow_Out_Row_1;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_GetShell_CurrentArmor_3 = CallFunc_GetShell_CurrentArmor_3;
	Parms.K2Node_CustomEvent_Title = K2Node_CustomEvent_Title;
	Parms.K2Node_CustomEvent_Subtitle = K2Node_CustomEvent_Subtitle;
	Parms.K2Node_CustomEvent_Desc = K2Node_CustomEvent_Desc;
	Parms.CallFunc_GetChildrenCount_ReturnValue_2 = CallFunc_GetChildrenCount_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_3 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_3;
	Parms.CallFunc_GetChildrenCount_ReturnValue_3 = CallFunc_GetChildrenCount_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_4 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_4;
	Parms.K2Node_CustomEvent_Widget_2 = K2Node_CustomEvent_Widget_2;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;
	Parms.K2Node_MakeStruct_SlateColor_3 = K2Node_MakeStruct_SlateColor_3;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_5 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_6 = CallFunc_GetItemWidgetFromScrollBox_AsShellUpgradeItem_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsShell_Upgrade_Item = K2Node_DynamicCast_AsShell_Upgrade_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_2 = CallFunc_LessEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_GetSize_ReturnValue = CallFunc_GetSize_ReturnValue;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_CustomEvent_ControllerButton_1 = K2Node_CustomEvent_ControllerButton_1;
	Parms.K2Node_CustomEvent_ControllerButton = K2Node_CustomEvent_ControllerButton;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.CallFunc_GetShell_CurrentArmor_4 = CallFunc_GetShell_CurrentArmor_4;
	Parms.CallFunc_GetShellUpgradeRowNames_OutRowNames = CallFunc_GetShellUpgradeRowNames_OutRowNames;
	Parms.CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID = CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetShell_CurrentArmor_5 = CallFunc_GetShell_CurrentArmor_5;
	Parms.CallFunc_GetShellName_ShellName = CallFunc_GetShellName_ShellName;
	Parms.CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID_1 = CallFunc_GetShellNameUnlockIDFromShell_ShellNameUnlockID_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


