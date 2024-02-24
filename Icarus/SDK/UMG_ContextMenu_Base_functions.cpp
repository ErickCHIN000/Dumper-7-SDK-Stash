#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ContextMenu_Base.UMG_ContextMenu_Base_C
// (None)

class UClass* UUMG_ContextMenu_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ContextMenu_Base_C");

	return Clss;
}


// UMG_ContextMenu_Base_C UMG_ContextMenu_Base.Default__UMG_ContextMenu_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ContextMenu_Base_C* UUMG_ContextMenu_Base_C::GetDefaultObj()
{
	static class UUMG_ContextMenu_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ContextMenu_Base_C*>(UUMG_ContextMenu_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.CreateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContextMenuItemData        ContextMenuItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_ContextMenu_Base_C::CreateItem(int32 Index, const struct FContextMenuItemData& ContextMenuItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "CreateItem");

	Params::UUMG_ContextMenu_Base_C_CreateItem_Params Parms{};

	Parms.Index = Index;
	Parms.ContextMenuItem = ContextMenuItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.ShowMenu
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   ScreenPosition                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        MenuName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TSoftObjectPtr<class UTexture2D>   MenuIcon                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)

void UUMG_ContextMenu_Base_C::ShowMenu(const struct FVector2D& ScreenPosition, class FText& MenuName, TSoftObjectPtr<class UTexture2D>& MenuIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "ShowMenu");

	Params::UUMG_ContextMenu_Base_C_ShowMenu_Params Parms{};

	Parms.ScreenPosition = ScreenPosition;
	Parms.MenuName = MenuName;
	Parms.MenuIcon = MenuIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.CloseMenu
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ContextMenu_Base_C::CloseMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "CloseMenu");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.AddItems
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FContextMenuItemData>ContextMenuItems                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)

void UUMG_ContextMenu_Base_C::AddItems(TArray<struct FContextMenuItemData>& ContextMenuItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "AddItems");

	Params::UUMG_ContextMenu_Base_C_AddItems_Params Parms{};

	Parms.ContextMenuItems = ContextMenuItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ContextMenu_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.HidePanelDisplay
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ContextMenu_Base_C::HidePanelDisplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "HidePanelDisplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ContextMenu_Base.UMG_ContextMenu_Base_C.ExecuteUbergraph_UMG_ContextMenu_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Event_ScreenPosition                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MenuName                                            (ConstParm)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_MenuIcon                                            (ConstParm, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FContextMenuItemData>K2Node_Event_ContextMenuItems                                    (ConstParm, ReferenceParm, ContainsInstancedReference)
// struct FContextMenuItemData        CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_ContextMenu_Base_C::ExecuteUbergraph_UMG_ContextMenu_Base(int32 EntryPoint, bool CallFunc_IsVisible_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FVector2D& K2Node_Event_ScreenPosition, class FText K2Node_Event_MenuName, TSoftObjectPtr<class UTexture2D> K2Node_Event_MenuIcon, TArray<struct FContextMenuItemData>& K2Node_Event_ContextMenuItems, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ContextMenu_Base_C", "ExecuteUbergraph_UMG_ContextMenu_Base");

	Params::UUMG_ContextMenu_Base_C_ExecuteUbergraph_UMG_ContextMenu_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_ScreenPosition = K2Node_Event_ScreenPosition;
	Parms.K2Node_Event_MenuName = K2Node_Event_MenuName;
	Parms.K2Node_Event_MenuIcon = K2Node_Event_MenuIcon;
	Parms.K2Node_Event_ContextMenuItems = K2Node_Event_ContextMenuItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


