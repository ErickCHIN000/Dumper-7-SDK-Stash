#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RuneNotifyContainer.UI_RuneNotifyContainer_C
// (None)

class UClass* UUI_RuneNotifyContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RuneNotifyContainer_C");

	return Clss;
}


// UI_RuneNotifyContainer_C UI_RuneNotifyContainer.Default__UI_RuneNotifyContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RuneNotifyContainer_C* UUI_RuneNotifyContainer_C::GetDefaultObj()
{
	static class UUI_RuneNotifyContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RuneNotifyContainer_C*>(UUI_RuneNotifyContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RuneNotifyContainer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.OnRuneNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_RuneFancyNotification_C* Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneNotifyContainer_C::OnRuneNotify(class UUI_RuneFancyNotification_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "OnRuneNotify");

	Params::UUI_RuneNotifyContainer_C_OnRuneNotify_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.OnEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneNotifyContainer_C::OnEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "OnEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.AddNewNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneNotifyContainer_C::AddNewNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "AddNewNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.OnSelectWindowChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RuneNotifyContainer_C::OnSelectWindowChanged(bool ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "OnSelectWindowChanged");

	Params::UUI_RuneNotifyContainer_C_OnSelectWindowChanged_Params Parms{};

	Parms.ReturnValue = ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.OnEquipmentMenu
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Close                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  Menu                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneNotifyContainer_C::OnEquipmentMenu(bool Close, enum class Enum_EquipmentMenuType Menu)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "OnEquipmentMenu");

	Params::UUI_RuneNotifyContainer_C_OnEquipmentMenu_Params Parms{};

	Parms.Close = Close;
	Parms.Menu = Menu;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneNotifyContainer.UI_RuneNotifyContainer_C.ExecuteUbergraph_UI_RuneNotifyContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_RuneFancyNotification_C* K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     K2Node_DynamicCast_AsGameplay_PC_Storm_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyChildren_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_RuneFancyNotification_C* CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Close                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EquipmentMenuType  K2Node_CustomEvent_Menu                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UUI_RuneNotifyContainer_C::ExecuteUbergraph_UI_RuneNotifyContainer(int32 EntryPoint, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class UUI_RuneFancyNotification_C* K2Node_CustomEvent_Widget, class AGameplayPC_StormMode_C* K2Node_DynamicCast_AsGameplay_PC_Storm_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyChildren_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, bool K2Node_CustomEvent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1, class UUI_RuneFancyNotification_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_CustomEvent_Close, enum class Enum_EquipmentMenuType K2Node_CustomEvent_Menu, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneNotifyContainer_C", "ExecuteUbergraph_UI_RuneNotifyContainer");

	Params::UUI_RuneNotifyContainer_C_ExecuteUbergraph_UI_RuneNotifyContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_DynamicCast_AsGameplay_PC_Storm_Mode = K2Node_DynamicCast_AsGameplay_PC_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyChildren_ReturnValue = CallFunc_HasAnyChildren_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_CustomEvent_ReturnValue = K2Node_CustomEvent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CustomEvent_Close = K2Node_CustomEvent_Close;
	Parms.K2Node_CustomEvent_Menu = K2Node_CustomEvent_Menu;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


