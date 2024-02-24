#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu.UI_StormMode_Menu_C
// (None)

class UClass* UUI_StormMode_Menu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_C");

	return Clss;
}


// UI_StormMode_Menu_C UI_StormMode_Menu.Default__UI_StormMode_Menu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_C* UUI_StormMode_Menu_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_C*>(UUI_StormMode_Menu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnMenuOpen_Actor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::OnMenuOpen_Actor(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnMenuOpen_Actor");

	Params::UUI_StormMode_Menu_C_OnMenuOpen_Actor_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetSaveSlotName_MapState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_StormMode_Menu_C::GetSaveSlotName_MapState(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetSaveSlotName_MapState");

	Params::UUI_StormMode_Menu_C_GetSaveSlotName_MapState_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.IsNotInWarningWindow
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_C::IsNotInWarningWindow(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "IsNotInWarningWindow");

	Params::UUI_StormMode_Menu_C_IsNotInWarningWindow_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavTopClick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::NavTopClick(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavTopClick");

	Params::UUI_StormMode_Menu_C_NavTopClick_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Navigation_Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_NavBack_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::Navigation_Back(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavBack_self_CastInput, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Navigation_Back");

	Params::UUI_StormMode_Menu_C_Navigation_Back_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_NavBack_self_CastInput = CallFunc_NavBack_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Sound_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Sound_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Sound_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavTopUnHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_Button_C*       Local_Tab                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::NavTopUnHover(class UUI_MainMenu_Button_C* Local_Tab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavTopUnHover");

	Params::UUI_StormMode_Menu_C_NavTopUnHover_Params Parms{};

	Parms.Local_Tab = Local_Tab;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavTopHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Blink                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index_Selected                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_Tab                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::NavTopHover(int32 Index, bool Local_Blink, int32 Local_Index_Selected, class UUI_MainMenu_Button_C* Local_Tab, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavTopHover");

	Params::UUI_StormMode_Menu_C_NavTopHover_Params Parms{};

	Parms.Index = Index;
	Parms.Local_Blink = Local_Blink;
	Parms.Local_Index_Selected = Local_Index_Selected;
	Parms.Local_Tab = Local_Tab;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetSeedManager
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class ABP_SeedManager_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABP_SeedManager_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::GetSeedManager(TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SeedManager_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetSeedManager");

	Params::UUI_StormMode_Menu_C_GetSeedManager_Params Parms{};

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnMenuOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::OnMenuOpen(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnMenuOpen");

	Params::UUI_StormMode_Menu_C_OnMenuOpen_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_Statistics_PreviousNextPage_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_Statistics_PreviousNextPage_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_Statistics_PreviousNextPage_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_Statistics_PreviousNextPage_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_Statistics_ChangePage_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_Statistics_ChangePage_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_Statistics_ChangePage_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_Statistics_ChangePage_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_Settings_RemoveSeed_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_Settings_RemoveSeed_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_Settings_RemoveSeed_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_Settings_RemoveSeed_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_Settings_ConfirmSeed_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_Settings_ConfirmSeed_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_Settings_ConfirmSeed_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_Settings_ConfirmSeed_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_Settings_SetSeed_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_Settings_SetSeed_Visibility(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_Settings_SetSeed_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_Settings_SetSeed_Visibility_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_NewRun_Select_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_NewRun_Select_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_NewRun_Select_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_NewRun_Select_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.PreviewTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::PreviewTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "PreviewTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.SetParentWidget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetTabWidgets_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::SetParentWidget(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "SetParentWidget");

	Params::UUI_StormMode_Menu_C_SetParentWidget_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabWidgets_Array = CallFunc_GetTabWidgets_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_NewRun_ConfirmChoice_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_NewRun_ConfirmChoice_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_NewRun_ConfirmChoice_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_NewRun_ConfirmChoice_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_NewRun_StartRun_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_NewRun_StartRun_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_NewRun_StartRun_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_NewRun_StartRun_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_NewRun_Close_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_NewRun_Close_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_NewRun_Close_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_NewRun_Close_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompt_NewRun_Back_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompt_NewRun_Back_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompt_NewRun_Back_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompt_NewRun_Back_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompts_Statistics_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompts_Statistics_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompts_Statistics_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompts_Statistics_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompts_Settings_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompts_Settings_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompts_Settings_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompts_Settings_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Get_Prompts_NewRun_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_StormMode_Menu_C::Get_Prompts_NewRun_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Get_Prompts_NewRun_Visibility");

	Params::UUI_StormMode_Menu_C_Get_Prompts_NewRun_Visibility_Params Parms{};

	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.HidePrompts
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::HidePrompts(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "HidePrompts");

	Params::UUI_StormMode_Menu_C_HidePrompts_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnFadeOutEnd
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::OnFadeOutEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnFadeOutEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetTabWidgets
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUserWidget*>         Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::GetTabWidgets(TArray<class UUserWidget*>* Array, TArray<class UUserWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetTabWidgets");

	Params::UUI_StormMode_Menu_C_GetTabWidgets_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavBack_CloseStormModeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::NavBack_CloseStormModeMenu(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavBack_CloseStormModeMenu");

	Params::UUI_StormMode_Menu_C_NavBack_CloseStormModeMenu_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavBackListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavBackListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavBackListen");

	Params::UUI_StormMode_Menu_C_NavBackListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetTabWidgetFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::GetTabWidgetFromIndex(int32 Index, class UWidget** Output, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetTabWidgetFromIndex");

	Params::UUI_StormMode_Menu_C_GetTabWidgetFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavConfirmListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavConfirmListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavConfirmListen");

	Params::UUI_StormMode_Menu_C_NavConfirmListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavUpListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpListen");

	Params::UUI_StormMode_Menu_C_NavUpListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavDownListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavDownListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavDownListen");

	Params::UUI_StormMode_Menu_C_NavDownListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavRightListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavRightListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavRightListen");

	Params::UUI_StormMode_Menu_C_NavRightListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavLeftListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavLeftListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavLeftListen");

	Params::UUI_StormMode_Menu_C_NavLeftListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpperLeftListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavUpperLeftListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpperLeftListen");

	Params::UUI_StormMode_Menu_C_NavUpperLeftListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpperRightListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_StormMode_Menu_C::NavUpperRightListen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpperRightListen");

	Params::UUI_StormMode_Menu_C_NavUpperRightListen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.ListenForInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::ListenForInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "ListenForInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetButtonWidgetFromIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::GetButtonWidgetFromIndex(int32 Index, class UUI_MainMenu_Button_C** Output, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetButtonWidgetFromIndex");

	Params::UUI_StormMode_Menu_C_GetButtonWidgetFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetTabButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::GetTabButtons(int32 CallFunc_Array_LastIndex_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetTabButtons");

	Params::UUI_StormMode_Menu_C_GetTabButtons_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavigateTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_WidgetIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Temp                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_GetButtonWidgetFromIndex_Output                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::NavigateTab(bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Index, int32 Delta, int32 Local_Delta, bool Local_SkipSound, int32 Local_WidgetIndex, class UUI_MainMenu_Button_C* Local_Button, int32 Local_Index_Temp, int32 Local_SelectedIndex, bool Local_SkipIndexCheck, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetTabWidgetFromIndex_Output, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_1, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_MainMenu_Button_C* CallFunc_GetButtonWidgetFromIndex_Output, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavigateTab");

	Params::UUI_StormMode_Menu_C_NavigateTab_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_WidgetIndex = Local_WidgetIndex;
	Parms.Local_Button = Local_Button;
	Parms.Local_Index_Temp = Local_Index_Temp;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTabWidgetFromIndex_Output = CallFunc_GetTabWidgetFromIndex_Output;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_1 = CallFunc_GetTabWidgetFromIndex_Output_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetButtonWidgetFromIndex_Output = CallFunc_GetButtonWidgetFromIndex_Output;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.GetSaveSlotName_GPData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_StormMode_Menu_C::GetSaveSlotName_GPData(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "GetSaveSlotName_GPData");

	Params::UUI_StormMode_Menu_C_GetSaveSlotName_GPData_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.LoadDataForSlot
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlotName_MapState_ReturnValue                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlotName_MapState_ReturnValue_1                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlotName_MapState_ReturnValue_2                  (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_DynamicCast_AsMap_State                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSaveSlotName_GPData_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetTabWidgets_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class FString                      CallFunc_GetSaveSlotName_GPData_ReturnValue_1                    (ZeroConstructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetSaveSlotName_GPData_ReturnValue_2                    (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::LoadDataForSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue_1, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UMapState_C* K2Node_DynamicCast_AsMap_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_3, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "LoadDataForSlot");

	Params::UUI_StormMode_Menu_C_LoadDataForSlot_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSaveSlotName_MapState_ReturnValue = CallFunc_GetSaveSlotName_MapState_ReturnValue;
	Parms.CallFunc_GetSaveSlotName_MapState_ReturnValue_1 = CallFunc_GetSaveSlotName_MapState_ReturnValue_1;
	Parms.CallFunc_GetSaveSlotName_MapState_ReturnValue_2 = CallFunc_GetSaveSlotName_MapState_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsMap_State = K2Node_DynamicCast_AsMap_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSaveSlotName_GPData_ReturnValue = CallFunc_GetSaveSlotName_GPData_ReturnValue;
	Parms.CallFunc_GetTabWidgets_Array = CallFunc_GetTabWidgets_Array;
	Parms.CallFunc_GetSaveSlotName_GPData_ReturnValue_1 = CallFunc_GetSaveSlotName_GPData_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetSaveSlotName_GPData_ReturnValue_2 = CallFunc_GetSaveSlotName_GPData_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue_2 = CallFunc_GetInstance_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue_3 = CallFunc_GetInstance_ReturnValue_3;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_2 = CallFunc_GetPrimaryUserIndex_ReturnValue_2;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_3 = CallFunc_GetPrimaryUserIndex_ReturnValue_3;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue_1 = CallFunc_DHLoadGameFromSlot_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.ImmediateFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::ImmediateFadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "ImmediateFadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.ImmediateFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::ImmediateFadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "ImmediateFadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RemoveFromParent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_RemoveFromParent                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CloseImmediately                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::OnClose(bool CloseImmediately, bool RemoveFromParent, bool Local_RemoveFromParent, bool Local_CloseImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnClose");

	Params::UUI_StormMode_Menu_C_OnClose_Params Parms{};

	Parms.CloseImmediately = CloseImmediately;
	Parms.RemoveFromParent = RemoveFromParent;
	Parms.Local_RemoveFromParent = Local_RemoveFromParent;
	Parms.Local_CloseImmediately = Local_CloseImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.FadeOutAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::FadeOutAnim(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "FadeOutAnim");

	Params::UUI_StormMode_Menu_C_FadeOutAnim_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.FadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::FadeInAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "FadeInAnim");

	Params::UUI_StormMode_Menu_C_FadeInAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.DisableEnterTab
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::DisableEnterTab()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "DisableEnterTab");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "PreConstruct");

	Params::UUI_StormMode_Menu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnOpen_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_C*              UI_MainMenu                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              IndexSaveSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::OnOpen_Event(class UUI_MainMenu_C* UI_MainMenu, bool Clicking, int32 IndexSaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnOpen_Event");

	Params::UUI_StormMode_Menu_C_OnOpen_Event_Params Parms{};

	Parms.UI_MainMenu = UI_MainMenu;
	Parms.Clicking = Clicking;
	Parms.IndexSaveSlot = IndexSaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnClose_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CloseImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               RemoveFromParent                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::OnClose_Event(bool CloseImmediately, bool RemoveFromParent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnClose_Event");

	Params::UUI_StormMode_Menu_C_OnClose_Event_Params Parms{};

	Parms.CloseImmediately = CloseImmediately;
	Parms.RemoveFromParent = RemoveFromParent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpper_Left_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavUpper_Left_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpper_Left_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpper_Left_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavUpper_Left_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpper_Left_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpper_Right_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavUpper_Right_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpper_Right_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavUpper_Right_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavUpper_Right_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavUpper_Right_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Confirm_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Confirm_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Confirm_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Down_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Down_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Down_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Down_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Down_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Down_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Up_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Up_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Up_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Up_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Up_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Up_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Left_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Left_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Left_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Right_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Right_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Right_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Left_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Left_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Left_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Right_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Right_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Right_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Back_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Back_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Back_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.Nav_Back_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::Nav_Back_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "Nav_Back_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.OnOpenEvent_Actor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_StormMode_Starter_C*     Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::OnOpenEvent_Actor(class ABP_StormMode_Starter_C* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "OnOpenEvent_Actor");

	Params::UUI_StormMode_Menu_C_OnOpenEvent_Actor_Params Parms{};

	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_C::BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature");

	Params::UUI_StormMode_Menu_C_BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavSpecialButton_1_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavSpecialButton_1_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavSpecialButton_1_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.NavSpecialButton_1_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_C::NavSpecialButton_1_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "NavSpecialButton_1_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu.UI_StormMode_Menu_C.ExecuteUbergraph_UI_StormMode_Menu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_C*              K2Node_CustomEvent_UI_MainMenu                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Clicking                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_IndexSaveSlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_CloseImmediately                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_RemoveFromParent                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_3                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_4                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetTabWidgets_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// class ABP_StormMode_Starter_C*     K2Node_CustomEvent_Actor                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrentSaveSlot_Slot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetTabWidgetFromIndex_Output_5                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenu_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_C::ExecuteUbergraph_UI_StormMode_Menu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, class UUI_MainMenu_C* K2Node_CustomEvent_UI_MainMenu, bool K2Node_CustomEvent_Clicking, int32 K2Node_CustomEvent_IndexSaveSlot, bool K2Node_CustomEvent_CloseImmediately, bool K2Node_CustomEvent_RemoveFromParent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetTabWidgetFromIndex_Output, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_2, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_3, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_4, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4, bool K2Node_DynamicCast_bSuccess_4, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ABP_StormMode_Starter_C* K2Node_CustomEvent_Actor, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_GetCurrentSaveSlot_Slot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_5, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_6, bool K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_C", "ExecuteUbergraph_UI_StormMode_Menu");

	Params::UUI_StormMode_Menu_C_ExecuteUbergraph_UI_StormMode_Menu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_UI_MainMenu = K2Node_CustomEvent_UI_MainMenu;
	Parms.K2Node_CustomEvent_Clicking = K2Node_CustomEvent_Clicking;
	Parms.K2Node_CustomEvent_IndexSaveSlot = K2Node_CustomEvent_IndexSaveSlot;
	Parms.K2Node_CustomEvent_CloseImmediately = K2Node_CustomEvent_CloseImmediately;
	Parms.K2Node_CustomEvent_RemoveFromParent = K2Node_CustomEvent_RemoveFromParent;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabWidgetFromIndex_Output = CallFunc_GetTabWidgetFromIndex_Output;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_1 = CallFunc_GetTabWidgetFromIndex_Output_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_2 = CallFunc_GetTabWidgetFromIndex_Output_2;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_3 = CallFunc_GetTabWidgetFromIndex_Output_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_4 = CallFunc_GetTabWidgetFromIndex_Output_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetTabWidgets_Array = CallFunc_GetTabWidgets_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CustomEvent_Actor = K2Node_CustomEvent_Actor;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetCurrentSaveSlot_Slot = CallFunc_GetCurrentSaveSlot_Slot;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.K2Node_ComponentBoundEvent_Widget_11 = K2Node_ComponentBoundEvent_Widget_11;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Widget_10 = K2Node_ComponentBoundEvent_Widget_10;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Widget_9 = K2Node_ComponentBoundEvent_Widget_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Widget_8 = K2Node_ComponentBoundEvent_Widget_8;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetTabWidgetFromIndex_Output_5 = CallFunc_GetTabWidgetFromIndex_Output_5;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_6 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_6;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


