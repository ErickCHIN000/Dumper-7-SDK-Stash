#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Equipment_Menu.UI_Equipment_Menu_C
// (None)

class UClass* UUI_Equipment_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Equipment_Menu_C");

	return Clss;
}


// UI_Equipment_Menu_C UI_Equipment_Menu.Default__UI_Equipment_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Equipment_Menu_C* UUI_Equipment_Menu_C::GetDefaultObj()
{
	static class UUI_Equipment_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Equipment_Menu_C*>(UUI_Equipment_Menu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenRunicFamiliarityTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OpenRunicFamiliarityTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OpenRunicFamiliarityTab");

	Params::UUI_Equipment_Menu_C_OpenRunicFamiliarityTab_Params Parms{};

	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenCompendiumTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OpenCompendiumTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OpenCompendiumTab");

	Params::UUI_Equipment_Menu_C_OpenCompendiumTab_Params Parms{};

	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenInstinctsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OpenInstinctsTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OpenInstinctsTab");

	Params::UUI_Equipment_Menu_C_OpenInstinctsTab_Params Parms{};

	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenShellsTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OpenShellsTab(bool IsSwitchingTab, bool Local_IsSwitchingTab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OpenShellsTab");

	Params::UUI_Equipment_Menu_C_OpenShellsTab_Params Parms{};

	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OpenInventoryTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OpenInventoryTab(bool IsSwitchingTab, bool Local_IsSwitchingTab, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OpenInventoryTab");

	Params::UUI_Equipment_Menu_C_OpenInventoryTab_Params Parms{};

	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.HandleStormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_RemoveChild_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveChild_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::HandleStormMode(bool CallFunc_RemoveChild_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_RemoveChild_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "HandleStormMode");

	Params::UUI_Equipment_Menu_C_HandleStormMode_Params Parms{};

	Parms.CallFunc_RemoveChild_ReturnValue = CallFunc_RemoveChild_ReturnValue;
	Parms.CallFunc_RemoveChild_ReturnValue_1 = CallFunc_RemoveChild_ReturnValue_1;
	Parms.CallFunc_RemoveChild_ReturnValue_2 = CallFunc_RemoveChild_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.GetCurrentKeyboardMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::GetCurrentKeyboardMode(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "GetCurrentKeyboardMode");

	Params::UUI_Equipment_Menu_C_GetCurrentKeyboardMode_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.ResetMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::ResetMousePosition(bool KeyboardMode, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsInViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "ResetMousePosition");

	Params::UUI_Equipment_Menu_C_ResetMousePosition_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperLeftListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_Menu_C::NavUpperLeftListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpperLeftListen");

	Params::UUI_Equipment_Menu_C_NavUpperLeftListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperRightListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Equipment_Menu_C::NavUpperRightListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpperRightListen");

	Params::UUI_Equipment_Menu_C_NavUpperRightListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.UI_Sound_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::UI_Sound_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "UI_Sound_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.Nav Top Click
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::Nav_Top_Click(int32 Index, class UUI_MainMenu_Button_C* Widget, int32 Local_IndexSelected, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "Nav Top Click");

	Params::UUI_Equipment_Menu_C_Nav_Top_Click_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavTopUnHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::NavTopUnHover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavTopUnHover");

	Params::UUI_Equipment_Menu_C_NavTopUnHover_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavTopHover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_WidgetSelected                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::NavTopHover(int32 Index, class UUI_MainMenu_Button_C* Widget, class UUI_MainMenu_Button_C* Local_Widget, class UUI_MainMenu_Button_C* Local_WidgetSelected, int32 Local_IndexSelected, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavTopHover");

	Params::UUI_Equipment_Menu_C_NavTopHover_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_WidgetSelected = Local_WidgetSelected;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpper_Left
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::NavUpper_Left(int32 Local_Index_Temp, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpper_Left");

	Params::UUI_Equipment_Menu_C_NavUpper_Left_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpper_Right
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::NavUpper_Right(int32 Local_Index_Temp, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool Temp_bool_Variable_1, int32 K2Node_Select_Default, int32 K2Node_Select_Default_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpper_Right");

	Params::UUI_Equipment_Menu_C_NavUpper_Right_Params Parms{};

	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.UI_Sound_ChangeTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::UI_Sound_ChangeTab(bool PlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "UI_Sound_ChangeTab");

	Params::UUI_Equipment_Menu_C_UI_Sound_ChangeTab_Params Parms{};

	Parms.PlaySound = PlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.EquipmentMenu_UpdateTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSwitchingTab                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsSwitchingTab                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::EquipmentMenu_UpdateTab(int32 Index, bool IsSwitchingTab, bool Local_IsSwitchingTab, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "EquipmentMenu_UpdateTab");

	Params::UUI_Equipment_Menu_C_EquipmentMenu_UpdateTab_Params Parms{};

	Parms.Index = Index;
	Parms.IsSwitchingTab = IsSwitchingTab;
	Parms.Local_IsSwitchingTab = Local_IsSwitchingTab;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::OnOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OnOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::NavUpperLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpperLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.NavUpperRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::NavUpperRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "NavUpperRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature");

	Params::UUI_Equipment_Menu_C_BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_0_OnTopNavButtonHovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonUnhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonUnhovered__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_1_OnTopNavButtonUnhovered__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature");

	Params::UUI_Equipment_Menu_C_BndEvt__UI_Equipment_TopNav_K2Node_ComponentBoundEvent_2_OnTopNavButtonPressed__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Equipment_Menu_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OnKeyboardModeChanged_Set");

	Params::UUI_Equipment_Menu_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Equipment_Menu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Equipment_Menu.UI_Equipment_Menu_C.ExecuteUbergraph_UI_Equipment_Menu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Equipment_Menu_C::ExecuteUbergraph_UI_Equipment_Menu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Equipment_Menu_C", "ExecuteUbergraph_UI_Equipment_Menu");

	Params::UUI_Equipment_Menu_C_ExecuteUbergraph_UI_Equipment_Menu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}

}


