#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MainMenu.UI_MainMenu_C
// (None)

class UClass* UUI_MainMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MainMenu_C");

	return Clss;
}


// UI_MainMenu_C UI_MainMenu.Default__UI_MainMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MainMenu_C* UUI_MainMenu_C::GetDefaultObj()
{
	static class UUI_MainMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MainMenu_C*>(UUI_MainMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_MainMenu.UI_MainMenu_C.NavBack_Listen_Release
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavBack_Listen_Release(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavBack_Listen_Release");

	Params::UUI_MainMenu_C_NavBack_Listen_Release_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDropsButton_CheckState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchDropsButton_CheckState(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeContentIsEnabled_Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDropsButton_CheckState");

	Params::UUI_MainMenu_C_TwitchDropsButton_CheckState_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.HandlePreviewButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::HandlePreviewButtons(bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float K2Node_Select_Default, TArray<class UWidget*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "HandlePreviewButtons");

	Params::UUI_MainMenu_C_HandlePreviewButtons_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Twitch_ClaimedListLeave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Twitch_ClaimedListLeave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Twitch_ClaimedListLeave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Twitch_ClaimedListSwitchTo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_TwitchDropEntry_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Twitch_ClaimedListSwitchTo(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_TwitchDropEntry_C* CallFunc_Create_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Twitch_ClaimedListSwitchTo");

	Params::UUI_MainMenu_C_Twitch_ClaimedListSwitchTo_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchClaim_AddToSave
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerSaveGame_C*           Save                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchClaim_AddToSave(class UServerSaveGame_C* Save, int32 Local_Amount, const class FString& CallFunc_Conv_IntToString_ReturnValue, class FName Temp_name_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName Temp_name_Variable_1, class FName CallFunc_MakeLiteralName_ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchClaim_AddToSave");

	Params::UUI_MainMenu_C_TwitchClaim_AddToSave_Params Parms{};

	Parms.Save = Save;
	Parms.Local_Amount = Local_Amount;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchClaim_SlotSelectIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SlotName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchClaim_SlotSelectIndex(int32 Index, const class FString& Local_SlotName, int32 Local_Slot, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchClaim_SlotSelectIndex");

	Params::UUI_MainMenu_C_TwitchClaim_SlotSelectIndex_Params Parms{};

	Parms.Index = Index;
	Parms.Local_SlotName = Local_SlotName;
	Parms.Local_Slot = Local_Slot;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchClaim_SlotSelection_Leave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::TwitchClaim_SlotSelection_Leave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchClaim_SlotSelection_Leave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchClaim_SlotSelection_SwitchTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchClaim_SlotSelection_SwitchTo(bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetEnteredState_Slot_1, bool CallFunc_StormMode_GetEnteredState_Slot_2, bool CallFunc_StormMode_GetEnteredState_Slot_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchClaim_SlotSelection_SwitchTo");

	Params::UUI_MainMenu_C_TwitchClaim_SlotSelection_SwitchTo_Params Parms{};

	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_1 = CallFunc_EqualEqual_StrStr_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue_2 = CallFunc_EqualEqual_StrStr_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_1 = CallFunc_StormMode_GetEnteredState_Slot_1;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_2 = CallFunc_StormMode_GetEnteredState_Slot_2;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_3 = CallFunc_StormMode_GetEnteredState_Slot_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchRefresh_Leave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::TwitchRefresh_Leave()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchRefresh_Leave");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchRefresh_OnQueryResult
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDHTwitchDropQueryResponseResponse                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::TwitchRefresh_OnQueryResult(enum class EDHTwitchDropQueryResponse Response, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchRefresh_OnQueryResult");

	Params::UUI_MainMenu_C_TwitchRefresh_OnQueryResult_Params Parms{};

	Parms.Response = Response;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchRefresh_SwitchTo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::TwitchRefresh_SwitchTo(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchRefresh_SwitchTo");

	Params::UUI_MainMenu_C_TwitchRefresh_SwitchTo_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchMain_GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>Buttons                                                          (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_DynamicCast_AsUI_Main_Menu_Button                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchMain_GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, const TArray<class UUI_MainMenu_Button_C*>& Buttons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* K2Node_DynamicCast_AsUI_Main_Menu_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchMain_GetButtons");

	Params::UUI_MainMenu_C_TwitchMain_GetButtons_Params Parms{};

	Parms.Buttons = Buttons;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Main_Menu_Button = K2Node_DynamicCast_AsUI_Main_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_4 = CallFunc_Array_Add_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchMain_ClaimUnhovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_TwitchMain_GetButtons_Array                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchMain_ClaimUnhovered(int32 Index, class UUI_MainMenu_Button_C* Widget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_TwitchMain_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchMain_ClaimUnhovered");

	Params::UUI_MainMenu_C_TwitchMain_ClaimUnhovered_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TwitchMain_GetButtons_Array = CallFunc_TwitchMain_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchMain_ClaimHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchMain_ClaimHovered(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchMain_ClaimHovered");

	Params::UUI_MainMenu_C_TwitchMain_ClaimHovered_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchMain_ClaimClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchMain_ClaimClicked(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchMain_ClaimClicked");

	Params::UUI_MainMenu_C_TwitchMain_ClaimClicked_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchMain_RefreshUnclaimedList
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDHTwitchDrop>       TestEntitlements                                                 (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               bHasClaimed                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHasUnclaimed                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHTwitchDrop>       K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDHTwitchDrop               CallFunc_Array_Get_Item                                          (None)
// class UUI_MainMenu_Button_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TwitchDrop_DisplayName_Name                             (None)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHTwitchDrop>       CallFunc_GetUnitedTwitchDropList_OutDrops                        (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHTwitchDrop>       K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchMain_RefreshUnclaimedList(const TArray<struct FDHTwitchDrop>& TestEntitlements, bool bHasClaimed, bool bHasUnclaimed, bool Temp_bool_Variable, TArray<struct FDHTwitchDrop>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, const struct FDHTwitchDrop& CallFunc_Array_Get_Item, class UUI_MainMenu_Button_C* CallFunc_Create_ReturnValue, class FText CallFunc_TwitchDrop_DisplayName_Name, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UWidget* K2Node_Select_Default, TArray<struct FDHTwitchDrop>& CallFunc_GetUnitedTwitchDropList_OutDrops, TArray<struct FDHTwitchDrop>& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchMain_RefreshUnclaimedList");

	Params::UUI_MainMenu_C_TwitchMain_RefreshUnclaimedList_Params Parms{};

	Parms.TestEntitlements = TestEntitlements;
	Parms.bHasClaimed = bHasClaimed;
	Parms.bHasUnclaimed = bHasUnclaimed;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_TwitchDrop_DisplayName_Name = CallFunc_TwitchDrop_DisplayName_Name;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetUnitedTwitchDropList_OutDrops = CallFunc_GetUnitedTwitchDropList_OutDrops;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Navigation_Confirm
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchDrops_Navigation_Confirm(bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, int32 CallFunc_Array_Find_ReturnValue_1, bool CallFunc_TryToLaunchURL_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Navigation_Confirm");

	Params::UUI_MainMenu_C_TwitchDrops_Navigation_Confirm_Params Parms{};

	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_6 = CallFunc_EqualEqual_ObjectObject_ReturnValue_6;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_7 = CallFunc_EqualEqual_ObjectObject_ReturnValue_7;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Navigation_Back
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchDrops_Navigation_Back(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Navigation_Back");

	Params::UUI_MainMenu_C_TwitchDrops_Navigation_Back_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Navigation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TempIndex                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_MMButton                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CurrentButtonList                                                (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_TwitchMain_GetButtons_Array                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::TwitchDrops_Navigation(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_MainMenu_Button_C* Button, int32 Index, int32 TempIndex, class UUI_MainMenu_Button_C* Local_MMButton, const TArray<class UUI_MainMenu_Button_C*>& CurrentButtonList, int32 Local_IndexSelected, class UUI_MainMenu_Button_C* Local_SelectedButton, int32 Local_Delta, bool Local_CustomIndex, bool Local_UseWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_TwitchMain_GetButtons_Array, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, enum class EPlatform CallFunc_IfPlatform_OutResult, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Find_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Navigation");

	Params::UUI_MainMenu_C_TwitchDrops_Navigation_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.TempIndex = TempIndex;
	Parms.Local_MMButton = Local_MMButton;
	Parms.CurrentButtonList = CurrentButtonList;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_TwitchMain_GetButtons_Array = CallFunc_TwitchMain_GetButtons_Array;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Find_ReturnValue_1 = CallFunc_Array_Find_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::TwitchDrops_Confirm(bool Clicking, bool Local_Clicking, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Confirm");

	Params::UUI_MainMenu_C_TwitchDrops_Confirm_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::TwitchDrops_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.TwitchDrops_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::TwitchDrops_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "TwitchDrops_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_DeselectSMButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array                               (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_DeselectSMButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_DeselectSMButtons");

	Params::UUI_MainMenu_C_Navigation_DeselectSMButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetStormModeButtons_Array = CallFunc_GetStormModeButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.CloseStormModeMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CloseImmediately                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipPrompts                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::CloseStormModeMenu(bool SkipPrompts, bool CloseImmediately, bool Local_CloseImmediately, bool Local_SkipPrompts, int32 Local_SaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CloseStormModeMenu");

	Params::UUI_MainMenu_C_CloseStormModeMenu_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.CloseImmediately = CloseImmediately;
	Parms.Local_CloseImmediately = Local_CloseImmediately;
	Parms.Local_SkipPrompts = Local_SkipPrompts;
	Parms.Local_SaveSlot = Local_SaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OpenStormModeMenu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              IndexSaveSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               PlaySound_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipPrompts                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNotInWarningWindow_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::OpenStormModeMenu(int32 IndexSaveSlot, bool SkipPrompts, bool Clicking, bool* PlaySound_, bool Local_Clicking, bool Local_SkipPrompts, int32 Local_SaveSlot, bool CallFunc_IsNotInWarningWindow_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, class UUI_MainMenu_Button_C* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OpenStormModeMenu");

	Params::UUI_MainMenu_C_OpenStormModeMenu_Params Parms{};

	Parms.IndexSaveSlot = IndexSaveSlot;
	Parms.SkipPrompts = SkipPrompts;
	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.Local_SkipPrompts = Local_SkipPrompts;
	Parms.Local_SaveSlot = Local_SaveSlot;
	Parms.CallFunc_IsNotInWarningWindow_ReturnValue = CallFunc_IsNotInWarningWindow_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (PlaySound_ != nullptr)
		*PlaySound_ = Parms.PlaySound_;

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound__1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound__2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavConfirm_StormMode(bool Clicking, bool Local_Clicking, bool CallFunc_OpenStormModeMenu_PlaySound_, bool CallFunc_OpenStormModeMenu_PlaySound__1, bool CallFunc_OpenStormModeMenu_PlaySound__2, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm_StormMode");

	Params::UUI_MainMenu_C_NavConfirm_StormMode_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_OpenStormModeMenu_PlaySound_ = CallFunc_OpenStormModeMenu_PlaySound_;
	Parms.CallFunc_OpenStormModeMenu_PlaySound__1 = CallFunc_OpenStormModeMenu_PlaySound__1;
	Parms.CallFunc_OpenStormModeMenu_PlaySound__2 = CallFunc_OpenStormModeMenu_PlaySound__2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm_MainMenu_PC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_13                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_14                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_15                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_16                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_17                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_18                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_19                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_20                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_21                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_22                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_23                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_6                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_24                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_25                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_26                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_27                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_7                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_28                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_29                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_30                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_31                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_6                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_7                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavConfirm_MainMenu_PC(bool Clicking, bool Local_Clicking, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_IsVSyncDirty_ReturnValue_1, bool CallFunc_IsScreenResolutionDirty_ReturnValue_1, bool CallFunc_IsFullscreenModeDirty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsDirty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsFramerateDirty_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_IsVSyncDirty_ReturnValue_2, bool CallFunc_IsScreenResolutionDirty_ReturnValue_2, bool CallFunc_IsFullscreenModeDirty_ReturnValue_2, bool CallFunc_IsDirty_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_IsFramerateDirty_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_BooleanOR_ReturnValue_11, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, bool CallFunc_IsVSyncDirty_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_2, bool CallFunc_IsScreenResolutionDirty_ReturnValue_3, bool CallFunc_IsFullscreenModeDirty_ReturnValue_3, bool CallFunc_IsDirty_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_3, bool K2Node_SwitchInteger_CmpSuccess_3, bool CallFunc_IsFramerateDirty_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_4, bool CallFunc_BooleanOR_ReturnValue_15, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_4, bool CallFunc_IsVSyncDirty_ReturnValue_4, bool CallFunc_IsScreenResolutionDirty_ReturnValue_4, bool CallFunc_IsFullscreenModeDirty_ReturnValue_4, bool CallFunc_IsDirty_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_BooleanOR_ReturnValue_17, bool CallFunc_BooleanOR_ReturnValue_18, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_5, bool CallFunc_IsFramerateDirty_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_19, bool CallFunc_IsVSyncDirty_ReturnValue_5, bool CallFunc_IsScreenResolutionDirty_ReturnValue_5, bool CallFunc_IsFullscreenModeDirty_ReturnValue_5, bool CallFunc_IsDirty_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_20, bool CallFunc_BooleanOR_ReturnValue_21, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_22, bool K2Node_SwitchInteger_CmpSuccess_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_IsFramerateDirty_ReturnValue_5, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_23, bool K2Node_SwitchInteger_CmpSuccess_5, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_6, bool CallFunc_IsVSyncDirty_ReturnValue_6, bool CallFunc_IsScreenResolutionDirty_ReturnValue_6, bool CallFunc_IsFullscreenModeDirty_ReturnValue_6, bool CallFunc_IsDirty_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_24, bool CallFunc_BooleanOR_ReturnValue_25, bool CallFunc_BooleanOR_ReturnValue_26, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool K2Node_SwitchEnum_CmpSuccess_7, bool CallFunc_IsFramerateDirty_ReturnValue_6, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_27, bool CallFunc_IsVSyncDirty_ReturnValue_7, bool CallFunc_IsScreenResolutionDirty_ReturnValue_7, bool CallFunc_IsFullscreenModeDirty_ReturnValue_7, bool CallFunc_IsDirty_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_28, bool CallFunc_BooleanOR_ReturnValue_29, bool CallFunc_BooleanOR_ReturnValue_30, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_IsFramerateDirty_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_31, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_6, bool K2Node_SwitchInteger_CmpSuccess_6, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_7, bool K2Node_SwitchInteger_CmpSuccess_7, bool K2Node_SwitchInteger_CmpSuccess_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm_MainMenu_PC");

	Params::UUI_MainMenu_C_NavConfirm_MainMenu_PC_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_1 = CallFunc_IsVSyncDirty_ReturnValue_1;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_1 = CallFunc_IsScreenResolutionDirty_ReturnValue_1;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_1 = CallFunc_IsFullscreenModeDirty_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsDirty_ReturnValue_1 = CallFunc_IsDirty_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_1 = CallFunc_IsFramerateDirty_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_2 = CallFunc_IsVSyncDirty_ReturnValue_2;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_2 = CallFunc_IsScreenResolutionDirty_ReturnValue_2;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_2 = CallFunc_IsFullscreenModeDirty_ReturnValue_2;
	Parms.CallFunc_IsDirty_ReturnValue_2 = CallFunc_IsDirty_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_2 = CallFunc_IsFramerateDirty_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_3 = CallFunc_GetGameUserSettings_ReturnValue_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_2 = CallFunc_GetActiveWidgetIndex_ReturnValue_2;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_3 = CallFunc_IsVSyncDirty_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_3 = CallFunc_IsScreenResolutionDirty_ReturnValue_3;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_3 = CallFunc_IsFullscreenModeDirty_ReturnValue_3;
	Parms.CallFunc_IsDirty_ReturnValue_3 = CallFunc_IsDirty_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_BooleanOR_ReturnValue_13 = CallFunc_BooleanOR_ReturnValue_13;
	Parms.CallFunc_BooleanOR_ReturnValue_14 = CallFunc_BooleanOR_ReturnValue_14;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_3 = CallFunc_GetActiveWidgetIndex_ReturnValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_3 = CallFunc_IsFramerateDirty_ReturnValue_3;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.CallFunc_BooleanOR_ReturnValue_15 = CallFunc_BooleanOR_ReturnValue_15;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_4 = CallFunc_GetGameUserSettings_ReturnValue_4;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_4 = CallFunc_IsVSyncDirty_ReturnValue_4;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_4 = CallFunc_IsScreenResolutionDirty_ReturnValue_4;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_4 = CallFunc_IsFullscreenModeDirty_ReturnValue_4;
	Parms.CallFunc_IsDirty_ReturnValue_4 = CallFunc_IsDirty_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_16 = CallFunc_BooleanOR_ReturnValue_16;
	Parms.CallFunc_BooleanOR_ReturnValue_17 = CallFunc_BooleanOR_ReturnValue_17;
	Parms.CallFunc_BooleanOR_ReturnValue_18 = CallFunc_BooleanOR_ReturnValue_18;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_4 = CallFunc_IsFramerateDirty_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_5 = CallFunc_GetGameUserSettings_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_19 = CallFunc_BooleanOR_ReturnValue_19;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_5 = CallFunc_IsVSyncDirty_ReturnValue_5;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_5 = CallFunc_IsScreenResolutionDirty_ReturnValue_5;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_5 = CallFunc_IsFullscreenModeDirty_ReturnValue_5;
	Parms.CallFunc_IsDirty_ReturnValue_5 = CallFunc_IsDirty_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_20 = CallFunc_BooleanOR_ReturnValue_20;
	Parms.CallFunc_BooleanOR_ReturnValue_21 = CallFunc_BooleanOR_ReturnValue_21;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_4 = CallFunc_GetActiveWidgetIndex_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_22 = CallFunc_BooleanOR_ReturnValue_22;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_5 = CallFunc_IsFramerateDirty_ReturnValue_5;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_5 = CallFunc_GetActiveWidgetIndex_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_23 = CallFunc_BooleanOR_ReturnValue_23;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_6 = CallFunc_GetGameUserSettings_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_6 = K2Node_SwitchEnum_CmpSuccess_6;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_6 = CallFunc_IsVSyncDirty_ReturnValue_6;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_6 = CallFunc_IsScreenResolutionDirty_ReturnValue_6;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_6 = CallFunc_IsFullscreenModeDirty_ReturnValue_6;
	Parms.CallFunc_IsDirty_ReturnValue_6 = CallFunc_IsDirty_ReturnValue_6;
	Parms.CallFunc_BooleanOR_ReturnValue_24 = CallFunc_BooleanOR_ReturnValue_24;
	Parms.CallFunc_BooleanOR_ReturnValue_25 = CallFunc_BooleanOR_ReturnValue_25;
	Parms.CallFunc_BooleanOR_ReturnValue_26 = CallFunc_BooleanOR_ReturnValue_26;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_7 = K2Node_SwitchEnum_CmpSuccess_7;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_6 = CallFunc_IsFramerateDirty_ReturnValue_6;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_7 = CallFunc_GetGameUserSettings_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_27 = CallFunc_BooleanOR_ReturnValue_27;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_7 = CallFunc_IsVSyncDirty_ReturnValue_7;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_7 = CallFunc_IsScreenResolutionDirty_ReturnValue_7;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_7 = CallFunc_IsFullscreenModeDirty_ReturnValue_7;
	Parms.CallFunc_IsDirty_ReturnValue_7 = CallFunc_IsDirty_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_28 = CallFunc_BooleanOR_ReturnValue_28;
	Parms.CallFunc_BooleanOR_ReturnValue_29 = CallFunc_BooleanOR_ReturnValue_29;
	Parms.CallFunc_BooleanOR_ReturnValue_30 = CallFunc_BooleanOR_ReturnValue_30;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_7 = CallFunc_IsFramerateDirty_ReturnValue_7;
	Parms.CallFunc_BooleanOR_ReturnValue_31 = CallFunc_BooleanOR_ReturnValue_31;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_6 = CallFunc_GetActiveWidgetIndex_ReturnValue_6;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_7 = CallFunc_GetActiveWidgetIndex_ReturnValue_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.K2Node_SwitchInteger_CmpSuccess_8 = K2Node_SwitchInteger_CmpSuccess_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm_MainMenu_Console
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavConfirm_MainMenu_Console(bool Clicking, bool Local_Clicking, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm_MainMenu_Console");

	Params::UUI_MainMenu_C_NavConfirm_MainMenu_Console_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Close_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Close_StormMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Close_StormMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.GetWidgetFromIndex_SM
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array                               (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::GetWidgetFromIndex_SM(int32 Index, class UUI_MainMenu_Button_C** Output, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetWidgetFromIndex_SM");

	Params::UUI_MainMenu_C_GetWidgetFromIndex_SM_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetStormModeButtons_Array = CallFunc_GetStormModeButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_MainMenu.UI_MainMenu_C.DebugNavigation_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_GetWidgetFromIndex_SM_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::DebugNavigation_StormMode(const class FString& CallFunc_Conv_IntToString_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_GetWidgetFromIndex_SM_Output, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "DebugNavigation_StormMode");

	Params::UUI_MainMenu_C_DebugNavigation_StormMode_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetWidgetFromIndex_SM_Output = CallFunc_GetWidgetFromIndex_SM_Output;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetStormModeButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_MainMenu_C::GetStormModeButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetStormModeButtons");

	Params::UUI_MainMenu_C_GetStormModeButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_StormMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_MMButton                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array                               (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array_1                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array_2                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array_3                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array_4                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetStormModeButtons_Array_5                             (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_StormMode(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_MainMenu_Button_C* Button, int32 Index, class UUI_MainMenu_Button_C* Local_MMButton, int32 Local_IndexSelected, class UUI_MainMenu_Button_C* Local_SelectedButton, int32 Local_Delta, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array_2, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array_3, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array_4, int32 CallFunc_Array_LastIndex_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetStormModeButtons_Array_5, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, enum class EPlatform CallFunc_IfPlatform_OutResult, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Find_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_StormMode");

	Params::UUI_MainMenu_C_Navigation_StormMode_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.Local_MMButton = Local_MMButton;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetStormModeButtons_Array = CallFunc_GetStormModeButtons_Array;
	Parms.CallFunc_GetStormModeButtons_Array_1 = CallFunc_GetStormModeButtons_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetStormModeButtons_Array_2 = CallFunc_GetStormModeButtons_Array_2;
	Parms.CallFunc_GetStormModeButtons_Array_3 = CallFunc_GetStormModeButtons_Array_3;
	Parms.CallFunc_GetStormModeButtons_Array_4 = CallFunc_GetStormModeButtons_Array_4;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetStormModeButtons_Array_5 = CallFunc_GetStormModeButtons_Array_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StormMode_HandleSlotButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::StormMode_HandleSlotButton(bool Condition, class UUI_MainMenu_Button_C* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormMode_HandleSlotButton");

	Params::UUI_MainMenu_C_StormMode_HandleSlotButton_Params Parms{};

	Parms.Condition = Condition;
	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Open_StormMode
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetHasEnteredOnce_HasEnteredOnce              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_IsStormMode         CallFunc_StormMode_GetHasEnteredOnce_SlotsData                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StormModeMainMenuTransition_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetEnteredState_Slot_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Open_StormMode(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetHasEnteredOnce_HasEnteredOnce, const struct FStruct_IsStormMode& CallFunc_StormMode_GetHasEnteredOnce_SlotsData, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_StormModeMainMenuTransition_C* CallFunc_FinishSpawningActor_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormMode_GetEnteredState_Slot_1, bool CallFunc_StormMode_GetEnteredState_Slot_2, bool CallFunc_StormMode_GetEnteredState_Slot_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Open_StormMode");

	Params::UUI_MainMenu_C_Open_StormMode_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetHasEnteredOnce_HasEnteredOnce = CallFunc_StormMode_GetHasEnteredOnce_HasEnteredOnce;
	Parms.CallFunc_StormMode_GetHasEnteredOnce_SlotsData = CallFunc_StormMode_GetHasEnteredOnce_SlotsData;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_1 = CallFunc_StormMode_GetEnteredState_Slot_1;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_2 = CallFunc_StormMode_GetEnteredState_Slot_2;
	Parms.CallFunc_StormMode_GetEnteredState_Slot_3 = CallFunc_StormMode_GetEnteredState_Slot_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.AddVideoSettingsWarning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_VideoSettings_Warning_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::AddVideoSettingsWarning(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_VideoSettings_Warning_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "AddVideoSettingsWarning");

	Params::UUI_MainMenu_C_AddVideoSettingsWarning_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StormModeMapToLoad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CurrentMainLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_SlotName                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FName                        Local_MapName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::StormModeMapToLoad(class FName* CurrentMainLevel, const class FString& Local_SlotName, class FName Local_MapName, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormModeMapToLoad");

	Params::UUI_MainMenu_C_StormModeMapToLoad_Params Parms{};

	Parms.Local_SlotName = Local_SlotName;
	Parms.Local_MapName = Local_MapName;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMainLevel != nullptr)
		*CurrentMainLevel = Parms.CurrentMainLevel;

}


// Function UI_MainMenu.UI_MainMenu_C.StormMode_DisableTransition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::StormMode_DisableTransition(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormMode_DisableTransition");

	Params::UUI_MainMenu_C_StormMode_DisableTransition_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_StormMode_Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipPrompts                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_StormModeMainMenuTransition_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::MM_StormMode_Open(bool SkipPrompts, bool Clicking, bool Local_Clicking, bool Local_SkipPrompts, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_StormModeMainMenuTransition_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_StormMode_Open");

	Params::UUI_MainMenu_C_MM_StormMode_Open_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.Local_SkipPrompts = Local_SkipPrompts;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_StormMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_StormMode(bool Clicking, bool Local_Clicking, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_StormMode");

	Params::UUI_MainMenu_C_Confirm_StormMode_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StormModeButton_Show
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::StormModeButton_Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormModeButton_Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.StormModeButton_Hide
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::StormModeButton_Hide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormModeButton_Hide");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Rain_SetState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Disable                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Rain_StormMode_C*        Local_Actor                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Disable                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_StormMode_MenuLevelHelper_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class ABP_StormMode_MenuLevelHelper_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class ABP_StormMode_MenuLevelHelper_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ReferenceParm, HasGetValueTypeHash)
// class ABP_StormMode_MenuLevelHelper_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Rain_SetState(bool Disable, class ABP_Rain_StormMode_C* Local_Actor, bool Local_Disable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, TArray<class ABP_StormMode_MenuLevelHelper_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_StormMode_MenuLevelHelper_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, TArray<class ABP_StormMode_MenuLevelHelper_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABP_StormMode_MenuLevelHelper_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Rain_SetState");

	Params::UUI_MainMenu_C_Rain_SetState_Params Parms{};

	Parms.Disable = Disable;
	Parms.Local_Actor = Local_Actor;
	Parms.Local_Disable = Local_Disable;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue_1 = CallFunc_NotEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.PlayGameStartSound
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::PlayGameStartSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PlayGameStartSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.ContinueGameFromActivity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StormMode_GetLastSaveSlotIndex_Index                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::ContinueGameFromActivity(const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_StormMode_GetLastSaveSlotIndex_Index, bool CallFunc_Greater_IntInt_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue_1, enum class EPlatform CallFunc_IfPlatform_OutResult, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ContinueGameFromActivity");

	Params::UUI_MainMenu_C_ContinueGameFromActivity_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetLastSaveSlotIndex_Index = CallFunc_StormMode_GetLastSaveSlotIndex_Index;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.CheckForLostSave
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_LostSave_3                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_LostSave_2                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_LostSave_1                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_HasLostSave                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_AutoRecoverSave_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::CheckForLostSave(int32 Local_Index, bool Local_LostSave_3, bool Local_LostSave_2, bool Local_LostSave_1, bool Local_HasLostSave, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_AutoRecoverSave_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CheckForLostSave");

	Params::UUI_MainMenu_C_CheckForLostSave_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_LostSave_3 = Local_LostSave_3;
	Parms.Local_LostSave_2 = Local_LostSave_2;
	Parms.Local_LostSave_1 = Local_LostSave_1;
	Parms.Local_HasLostSave = Local_HasLostSave;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_EnableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::Navigation_EnableButton(class UUI_MainMenu_Button_C* Button, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_EnableButton");

	Params::UUI_MainMenu_C_Navigation_EnableButton_Params Parms{};

	Parms.Button = Button;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavRestore_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavRestore_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavRestore_Listen");

	Params::UUI_MainMenu_C_NavRestore_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BossSoundtrackConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMusicDLCAvailable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::BossSoundtrackConfirm(const class FString& InString, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsMusicDLCAvailable_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BossSoundtrackConfirm");

	Params::UUI_MainMenu_C_BossSoundtrackConfirm_Params Parms{};

	Parms.InString = InString;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsMusicDLCAvailable_ReturnValue = CallFunc_IsMusicDLCAvailable_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OpenStorePageForMusicDLC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OpenStorePageForMusicDLC(class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_TryToLaunchURL_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OpenStorePageForMusicDLC");

	Params::UUI_MainMenu_C_OpenStorePageForMusicDLC_Params Parms{};

	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetWidgetFromIndex_AC
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::GetWidgetFromIndex_AC(int32 Index, class UUI_MainMenu_Button_C** Output, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetWidgetFromIndex_AC");

	Params::UUI_MainMenu_C_GetWidgetFromIndex_AC_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetAdditionalContentButtons_Array = CallFunc_GetAdditionalContentButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_MainMenu.UI_MainMenu_C.DebugNavigation_AdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_GetWidgetFromIndex_AC_Output                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::DebugNavigation_AdditionalContent(const class FString& CallFunc_Conv_IntToString_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_GetWidgetFromIndex_AC_Output, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "DebugNavigation_AdditionalContent");

	Params::UUI_MainMenu_C_DebugNavigation_AdditionalContent_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetWidgetFromIndex_AC_Output = CallFunc_GetWidgetFromIndex_AC_Output;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.AdditionalContentButtonAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSeasonalContentButton_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetMusicDLCEnabled_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::AdditionalContentButtonAvailability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetSeasonalContentButton_ReturnValue, bool CallFunc_GetMusicDLCEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "AdditionalContentButtonAvailability");

	Params::UUI_MainMenu_C_AdditionalContentButtonAvailability_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSeasonalContentButton_ReturnValue = CallFunc_GetSeasonalContentButton_ReturnValue;
	Parms.CallFunc_GetMusicDLCEnabled_ReturnValue = CallFunc_GetMusicDLCEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.UpdateBossSoundtrack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::UpdateBossSoundtrack(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "UpdateBossSoundtrack");

	Params::UUI_MainMenu_C_UpdateBossSoundtrack_Params Parms{};

	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue_1 = CallFunc_SpawnSound2D_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SoundPrompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::SoundPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SoundPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.UpdateSeasonalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetSeasonalContent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::UpdateSeasonalContent(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetSeasonalContent_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "UpdateSeasonalContent");

	Params::UUI_MainMenu_C_UpdateSeasonalContent_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSeasonalContent_ReturnValue = CallFunc_GetSeasonalContent_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BossSoundtrack_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_BossSoundtrackType Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_BossSoundtrackType Local_MusicType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMusicDLCAvailable_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_MainMenu_C::BossSoundtrack_Text(enum class Enum_BossSoundtrackType Type, enum class Enum_BossSoundtrackType Local_MusicType, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool CallFunc_IsMusicDLCAvailable_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BossSoundtrack_Text");

	Params::UUI_MainMenu_C_BossSoundtrack_Text_Params Parms{};

	Parms.Type = Type;
	Parms.Local_MusicType = Local_MusicType;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_IsMusicDLCAvailable_ReturnValue = CallFunc_IsMusicDLCAvailable_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SeasonalContent_Text
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_MainMenu_C::SeasonalContent_Text(bool Enabled, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool Temp_bool_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SeasonalContent_Text");

	Params::UUI_MainMenu_C_SeasonalContent_Text_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm_AdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavConfirm_AdditionalContent(bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm_AdditionalContent");

	Params::UUI_MainMenu_C_NavConfirm_AdditionalContent_Params Parms{};

	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_DeselectACButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_DeselectACButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_DeselectACButtons");

	Params::UUI_MainMenu_C_Navigation_DeselectACButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAdditionalContentButtons_Array = CallFunc_GetAdditionalContentButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.CloseAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::CloseAdditionalContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CloseAdditionalContent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.GetAdditionalContentButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_MainMenu_C::GetAdditionalContentButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetAdditionalContentButtons");

	Params::UUI_MainMenu_C_GetAdditionalContentButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_AdditionalContent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_MMButton                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array                       (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array_1                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array_2                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array_3                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array_4                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetAdditionalContentButtons_Array_5                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_AdditionalContent(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_MainMenu_Button_C* Button, int32 Index, class UUI_MainMenu_Button_C* Local_MMButton, int32 Local_IndexSelected, class UUI_MainMenu_Button_C* Local_SelectedButton, int32 Local_Delta, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array_2, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array_3, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array_4, int32 CallFunc_Array_LastIndex_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetAdditionalContentButtons_Array_5, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, enum class EPlatform CallFunc_IfPlatform_OutResult, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Find_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_AdditionalContent");

	Params::UUI_MainMenu_C_Navigation_AdditionalContent_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.Local_MMButton = Local_MMButton;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetAdditionalContentButtons_Array = CallFunc_GetAdditionalContentButtons_Array;
	Parms.CallFunc_GetAdditionalContentButtons_Array_1 = CallFunc_GetAdditionalContentButtons_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetAdditionalContentButtons_Array_2 = CallFunc_GetAdditionalContentButtons_Array_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetAdditionalContentButtons_Array_3 = CallFunc_GetAdditionalContentButtons_Array_3;
	Parms.CallFunc_GetAdditionalContentButtons_Array_4 = CallFunc_GetAdditionalContentButtons_Array_4;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAdditionalContentButtons_Array_5 = CallFunc_GetAdditionalContentButtons_Array_5;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OpenAdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetSeasonalContent_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OpenAdditionalContent(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_BossSoundtrackType CallFunc_GetBossSoundtrackType_Soundtrack, bool CallFunc_GetSeasonalContent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OpenAdditionalContent");

	Params::UUI_MainMenu_C_OpenAdditionalContent_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetBossSoundtrackType_Soundtrack = CallFunc_GetBossSoundtrackType_Soundtrack;
	Parms.CallFunc_GetSeasonalContent_ReturnValue = CallFunc_GetSeasonalContent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_AdditionalContent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_AdditionalContent(bool Clicking, bool Local_Clicking, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_AdditionalContent");

	Params::UUI_MainMenu_C_Confirm_AdditionalContent_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SetPhotoModeButtonAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetPhotoModeEnabled_Enabled                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::SetPhotoModeButtonAvailability(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetPhotoModeEnabled_Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetPhotoModeButtonAvailability");

	Params::UUI_MainMenu_C_SetPhotoModeButtonAvailability_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPhotoModeEnabled_Enabled = CallFunc_GetPhotoModeEnabled_Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OpenPhotoMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanOpenPhotoModeFromPauseMenu_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OpenPhotoMode(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CanOpenPhotoModeFromPauseMenu_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OpenPhotoMode");

	Params::UUI_MainMenu_C_OpenPhotoMode_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CanOpenPhotoModeFromPauseMenu_ReturnValue = CallFunc_CanOpenPhotoModeFromPauseMenu_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.DebugNavigation_Menu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_GetWidgetFromIndex_Output                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::DebugNavigation_Menu(const class FString& CallFunc_Conv_IntToString_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_GetWidgetFromIndex_Output, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "DebugNavigation_Menu");

	Params::UUI_MainMenu_C_DebugNavigation_Menu_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetWidgetFromIndex_Output = CallFunc_GetWidgetFromIndex_Output;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetWidgetFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::GetWidgetFromIndex(int32 Index, class UUI_MainMenu_Button_C** Output, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetWidgetFromIndex");

	Params::UUI_MainMenu_C_GetWidgetFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_DisableButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::Navigation_DisableButton(class UUI_MainMenu_Button_C* Button, enum class ESlateVisibility InVisibility, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_DisableButton");

	Params::UUI_MainMenu_C_Navigation_DisableButton_Params Parms{};

	Parms.Button = Button;
	Parms.InVisibility = InVisibility;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_MainMenu_C::Navigation_GetIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_GetIndex");

	Params::UUI_MainMenu_C_Navigation_GetIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.MaxIndex = MaxIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MainMenu.UI_MainMenu_C.HideCurrentSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::HideCurrentSaveSlot(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "HideCurrentSaveSlot");

	Params::UUI_MainMenu_C_HideCurrentSaveSlot_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Get_Text_SaveSlot_ColorAndOpacity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateColor UUI_MainMenu_C::Get_Text_SaveSlot_ColorAndOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Get_Text_SaveSlot_ColorAndOpacity");

	Params::UUI_MainMenu_C_Get_Text_SaveSlot_ColorAndOpacity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MainMenu.UI_MainMenu_C.Get_Text_SaveSlot_Value_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_MainMenu_C::Get_Text_SaveSlot_Value_Text(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Get_Text_SaveSlot_Value_Text");

	Params::UUI_MainMenu_C_Get_Text_SaveSlot_Value_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_MainMenu.UI_MainMenu_C.ShowMM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::ShowMM(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ShowMM");

	Params::UUI_MainMenu_C_ShowMM_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.HideMM
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::HideMM(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "HideMM");

	Params::UUI_MainMenu_C_HideMM_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.PopUpMessage_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_PopUpMessage_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::PopUpMessage_Create(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_MainMenu_PopUpMessage_C* CallFunc_Create_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PopUpMessage_Create");

	Params::UUI_MainMenu_C_PopUpMessage_Create_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.VideoSettingsConfirm_Create
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_VideoSettings_Confirm_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::VideoSettingsConfirm_Create(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_VideoSettings_Confirm_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "VideoSettingsConfirm_Create");

	Params::UUI_MainMenu_C_VideoSettingsConfirm_Create_Params Parms{};

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StopListenForOptionsInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::StopListenForOptionsInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StopListenForOptionsInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.LaunchFextralifeWiki
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::LaunchFextralifeWiki(bool CallFunc_TryToLaunchURL_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "LaunchFextralifeWiki");

	Params::UUI_MainMenu_C_LaunchFextralifeWiki_Params Parms{};

	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnClickSetIndexWithWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::OnClickSetIndexWithWidget(class UUI_MainMenu_Button_C* Widget, int32* Index, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnClickSetIndexWithWidget");

	Params::UUI_MainMenu_C_OnClickSetIndexWithWidget_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_MainMenu.UI_MainMenu_C.SetCreditsButtonAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::SetCreditsButtonAvailability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetCreditsButtonAvailability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.SetDiscordAndFextralifeButtonVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::SetDiscordAndFextralifeButtonVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetDiscordAndFextralifeButtonVisibility");

	Params::UUI_MainMenu_C_SetDiscordAndFextralifeButtonVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetPlatformAndHideQuit
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::GetPlatformAndHideQuit(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetPlatformAndHideQuit");

	Params::UUI_MainMenu_C_GetPlatformAndHideQuit_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SetQuitVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::SetQuitVisibility(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetQuitVisibility");

	Params::UUI_MainMenu_C_SetQuitVisibility_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.ResetMousePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::ResetMousePosition(bool KeyboardMode, bool CallFunc_IsInViewport_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ResetMousePosition");

	Params::UUI_MainMenu_C_ResetMousePosition_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;
	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetCurrentKeyboardMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::GetCurrentKeyboardMode(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetCurrentKeyboardMode");

	Params::UUI_MainMenu_C_GetCurrentKeyboardMode_Params Parms{};

	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Is Press Preview
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetBuildVersionString_ReturnValue                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_MainMenu_C::Is_Press_Preview(const class FString& CallFunc_GetBuildVersionString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Is Press Preview");

	Params::UUI_MainMenu_C_Is_Press_Preview_Params Parms{};

	Parms.CallFunc_GetBuildVersionString_ReturnValue = CallFunc_GetBuildVersionString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.CallClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IMainMenuInterface_C>K2Node_DynamicCast_AsMain_Menu_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::CallClose(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CallClose");

	Params::UUI_MainMenu_C_CallClose_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_Interface = K2Node_DynamicCast_AsMain_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.CallOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IMainMenuInterface_C>K2Node_DynamicCast_AsMain_Menu_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::CallOpen(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IMainMenuInterface_C> K2Node_DynamicCast_AsMain_Menu_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CallOpen");

	Params::UUI_MainMenu_C_CallOpen_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsMain_Menu_Interface = K2Node_DynamicCast_AsMain_Menu_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.ShowLoadingScreenToMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::ShowLoadingScreenToMainMenu(TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ShowLoadingScreenToMainMenu");

	Params::UUI_MainMenu_C_ShowLoadingScreenToMainMenu_Params Parms{};

	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.LaunchDiscord
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_TryToLaunchURL_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::LaunchDiscord(bool CallFunc_TryToLaunchURL_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "LaunchDiscord");

	Params::UUI_MainMenu_C_LaunchDiscord_Params Parms{};

	Parms.CallFunc_TryToLaunchURL_ReturnValue = CallFunc_TryToLaunchURL_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_Credits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_Credits(bool Clicking, bool Local_Clicking, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_Credits");

	Params::UUI_MainMenu_C_Confirm_Credits_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_Credits_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::MM_Credits_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_Credits_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_Credits_Open
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<class FText>                CallFunc_GetCredits_Return_Value                                 (ReferenceParm, HasGetValueTypeHash)

void UUI_MainMenu_C::MM_Credits_Open(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class FText>& CallFunc_GetCredits_Return_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_Credits_Open");

	Params::UUI_MainMenu_C_MM_Credits_Open_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCredits_Return_Value = CallFunc_GetCredits_Return_Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.ResumeOnDamageTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInViewport_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::ResumeOnDamageTaken(bool CallFunc_IsInViewport_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ResumeOnDamageTaken");

	Params::UUI_MainMenu_C_ResumeOnDamageTaken_Params Parms{};

	Parms.CallFunc_IsInViewport_ReturnValue = CallFunc_IsInViewport_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SetCharacterRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::SetCharacterRef(class APawn* CallFunc_GetPlayerPawn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetCharacterRef");

	Params::UUI_MainMenu_C_SetCharacterRef_Params Parms{};

	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SaveGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::SaveGame(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SaveGame");

	Params::UUI_MainMenu_C_SaveGame_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Sound_UI_ConfirmOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Sound_UI_ConfirmOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Sound_UI_ConfirmOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Resume
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Resume(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Resume");

	Params::UUI_MainMenu_C_Resume_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Sound_UI_BackClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Sound_UI_BackClose(bool Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Sound_UI_BackClose");

	Params::UUI_MainMenu_C_Sound_UI_BackClose_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.PauseMenu_Set
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::PauseMenu_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PauseMenu_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OnClose(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnClose");

	Params::UUI_MainMenu_C_OnClose_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SaveGameCancel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrimaryUserIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Local_Checkpoints                                                (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_MapState                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Local_GPData                                                     (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DeleteGameInSlot_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::SaveGameCancel(int32 PrimaryUserIndex, const class FString& Local_Checkpoints, const class FString& Local_MapState, const class FString& Local_GPData, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue_1, bool CallFunc_DeleteGameInSlot_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SaveGameCancel");

	Params::UUI_MainMenu_C_SaveGameCancel_Params Parms{};

	Parms.PrimaryUserIndex = PrimaryUserIndex;
	Parms.Local_Checkpoints = Local_Checkpoints;
	Parms.Local_MapState = Local_MapState;
	Parms.Local_GPData = Local_GPData;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue = CallFunc_DeleteGameInSlot_ReturnValue;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_1 = CallFunc_DeleteGameInSlot_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_1 = CallFunc_DoesSaveGameExist_ReturnValue_1;
	Parms.CallFunc_DeleteGameInSlot_ReturnValue_2 = CallFunc_DeleteGameInSlot_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue_2 = CallFunc_DoesSaveGameExist_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_NewGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_NewGame(bool Clicking, bool Local_Clicking, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_NewGame");

	Params::UUI_MainMenu_C_Confirm_NewGame_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_NewGame_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipPrompts                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::MM_NewGame_Open(bool SkipPrompts, bool Clicking, bool Local_Clicking, bool Local_SkipPrompts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_NewGame_Open");

	Params::UUI_MainMenu_C_MM_NewGame_Open_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.Local_SkipPrompts = Local_SkipPrompts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_OptionsMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_OptionsMenu(bool Clicking, bool Local_Clicking, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_OptionsMenu");

	Params::UUI_MainMenu_C_Confirm_OptionsMenu_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Confirm_LoadMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Confirm_LoadMenu(bool Clicking, bool Local_Clicking, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Confirm_LoadMenu");

	Params::UUI_MainMenu_C_Confirm_LoadMenu_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::QuitGame(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "QuitGame");

	Params::UUI_MainMenu_C_QuitGame_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetMapToLoad
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        CurrentMainLevel                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CurrentSubLevel                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSaveGameExist_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USaveGame*                   CallFunc_DHLoadGameFromSlot_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_DynamicCast_AsServer_Save_Game                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::GetMapToLoad(class FName* CurrentMainLevel, class FName* CurrentSubLevel, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetMapToLoad");

	Params::UUI_MainMenu_C_GetMapToLoad_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue_1 = CallFunc_GetInstance_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue_1 = CallFunc_GetPrimaryUserIndex_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_DoesSaveGameExist_ReturnValue = CallFunc_DoesSaveGameExist_ReturnValue;
	Parms.CallFunc_DHLoadGameFromSlot_ReturnValue = CallFunc_DHLoadGameFromSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsServer_Save_Game = K2Node_DynamicCast_AsServer_Save_Game;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

	if (CurrentMainLevel != nullptr)
		*CurrentMainLevel = Parms.CurrentMainLevel;

	if (CurrentSubLevel != nullptr)
		*CurrentSubLevel = Parms.CurrentSubLevel;

}


// Function UI_MainMenu.UI_MainMenu_C.GetCurrentSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Update                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Update                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_You                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Local_SaveSlot                                                   (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_PlayerSettingsSave                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::GetCurrentSaveSlot(bool Update, bool Local_Update, bool Local_You, const class FString& Local_SaveSlot, bool Local_PlayerSettingsSave, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetCurrentSaveSlot");

	Params::UUI_MainMenu_C_GetCurrentSaveSlot_Params Parms{};

	Parms.Update = Update;
	Parms.Local_Update = Local_Update;
	Parms.Local_You = Local_You;
	Parms.Local_SaveSlot = Local_SaveSlot;
	Parms.Local_PlayerSettingsSave = Local_PlayerSettingsSave;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.UpdateMenuMainCurrentSaveSlot
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentSaveSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::UpdateMenuMainCurrentSaveSlot(int32 CurrentSaveSlot, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "UpdateMenuMainCurrentSaveSlot");

	Params::UUI_MainMenu_C_UpdateMenuMainCurrentSaveSlot_Params Parms{};

	Parms.CurrentSaveSlot = CurrentSaveSlot;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.SetGameInstance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::SetGameInstance(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "SetGameInstance");

	Params::UUI_MainMenu_C_SetGameInstance_Params Parms{};

	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavBack_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavBack_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavBack_Listen");

	Params::UUI_MainMenu_C_NavBack_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavBack(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, enum class EPlatform CallFunc_IfPlatform_OutResult, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, class UUI_MainMenu_Button_C* K2Node_Select_Default, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavBack");

	Params::UUI_MainMenu_C_NavBack_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance_1 = K2Node_DynamicCast_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavConfirm_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm_Listen");

	Params::UUI_MainMenu_C_NavConfirm_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_6                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_7                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVSyncDirty_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsScreenResolutionDirty_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFullscreenModeDirty_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDirty_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_8                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_9                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_10                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_11                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsFramerateDirty_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_12                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::NavConfirm(bool Clicking, bool Local_Clicking, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFramerateDirty_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsScreenResolutionDirty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsFullscreenModeDirty_ReturnValue_1, bool CallFunc_IsDirty_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsFramerateDirty_ReturnValue_1, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_IsVSyncDirty_ReturnValue_2, bool CallFunc_IsScreenResolutionDirty_ReturnValue_2, bool CallFunc_IsFullscreenModeDirty_ReturnValue_2, bool CallFunc_IsDirty_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFramerateDirty_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, enum class EPlatform CallFunc_IfPlatform_OutResult, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavConfirm");

	Params::UUI_MainMenu_C_NavConfirm_Params Parms{};

	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsFramerateDirty_ReturnValue = CallFunc_IsFramerateDirty_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsVSyncDirty_ReturnValue = CallFunc_IsVSyncDirty_ReturnValue;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue = CallFunc_IsScreenResolutionDirty_ReturnValue;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue = CallFunc_IsFullscreenModeDirty_ReturnValue;
	Parms.CallFunc_IsDirty_ReturnValue = CallFunc_IsDirty_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_1 = CallFunc_IsVSyncDirty_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_1 = CallFunc_IsScreenResolutionDirty_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_1 = CallFunc_IsFullscreenModeDirty_ReturnValue_1;
	Parms.CallFunc_IsDirty_ReturnValue_1 = CallFunc_IsDirty_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_5 = CallFunc_BooleanOR_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_6 = CallFunc_BooleanOR_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_1 = CallFunc_IsFramerateDirty_ReturnValue_1;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_2 = CallFunc_GetGameUserSettings_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_7 = CallFunc_BooleanOR_ReturnValue_7;
	Parms.CallFunc_IsVSyncDirty_ReturnValue_2 = CallFunc_IsVSyncDirty_ReturnValue_2;
	Parms.CallFunc_IsScreenResolutionDirty_ReturnValue_2 = CallFunc_IsScreenResolutionDirty_ReturnValue_2;
	Parms.CallFunc_IsFullscreenModeDirty_ReturnValue_2 = CallFunc_IsFullscreenModeDirty_ReturnValue_2;
	Parms.CallFunc_IsDirty_ReturnValue_2 = CallFunc_IsDirty_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_8 = CallFunc_BooleanOR_ReturnValue_8;
	Parms.CallFunc_BooleanOR_ReturnValue_9 = CallFunc_BooleanOR_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_10 = CallFunc_BooleanOR_ReturnValue_10;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_11 = CallFunc_BooleanOR_ReturnValue_11;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFramerateDirty_ReturnValue_2 = CallFunc_IsFramerateDirty_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_12 = CallFunc_BooleanOR_ReturnValue_12;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = CallFunc_EqualEqual_ByteByte_ReturnValue_8;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = CallFunc_EqualEqual_ByteByte_ReturnValue_9;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_1 = CallFunc_GetActiveWidgetIndex_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = CallFunc_EqualEqual_ByteByte_ReturnValue_10;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue_2 = CallFunc_GetActiveWidgetIndex_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_SaveMenu_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::MM_SaveMenu_Close(bool SkipPrompts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_SaveMenu_Close");

	Params::UUI_MainMenu_C_MM_SaveMenu_Close_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_LoadGame_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Clicking                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipPrompts                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::MM_LoadGame_Open(bool SkipPrompts, bool Clicking, bool Local_Clicking, bool Local_SkipPrompts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_LoadGame_Open");

	Params::UUI_MainMenu_C_MM_LoadGame_Open_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.Clicking = Clicking;
	Parms.Local_Clicking = Local_Clicking;
	Parms.Local_SkipPrompts = Local_SkipPrompts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_Options_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CloseImmediately                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::MM_Options_Close(bool SkipPrompts, bool CloseImmediately)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_Options_Close");

	Params::UUI_MainMenu_C_MM_Options_Close_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.CloseImmediately = CloseImmediately;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event_Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Event_Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavDown_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavDown_Listen");

	Params::UUI_MainMenu_C_NavDown_Listen_Params Parms{};

	Parms.Event_Pressed = Event_Pressed;
	Parms.Event_Released = Event_Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event_Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Event_Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_MainMenu_C::NavUp_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavUp_Listen");

	Params::UUI_MainMenu_C_NavUp_Listen_Params Parms{};

	Parms.Event_Pressed = Event_Pressed;
	Parms.Event_Released = Event_Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_ListenForInput
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Navigation_ListenForInput()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_ListenForInput");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.MM_Options_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipPrompts                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Clicking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::MM_Options_Open(bool SkipPrompts, bool Clicking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MM_Options_Open");

	Params::UUI_MainMenu_C_MM_Options_Open_Params Parms{};

	Parms.SkipPrompts = SkipPrompts;
	Parms.Clicking = Clicking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_Up
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_Up(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_Up");

	Params::UUI_MainMenu_C_Navigation_Up_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_DeselectAllButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_DeselectAllButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_DeselectAllButtons");

	Params::UUI_MainMenu_C_Navigation_DeselectAllButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_SelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SkipInputsCheck                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_MMButton                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array_1                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array_2                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array_3                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array_4                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetButtons_Array_5                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_SelectButton(bool SkipInputsCheck, bool SkipSound, bool UseWidget, bool CustomIndex, bool SkipIndexCheck, int32 Delta, class UUI_MainMenu_Button_C* Button, int32 Index, class UUI_MainMenu_Button_C* Local_MMButton, int32 Local_IndexSelected, class UUI_MainMenu_Button_C* Local_SelectedButton, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array_2, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array_3, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class EPlatform CallFunc_IfPlatform_OutResult, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array_4, int32 CallFunc_Array_Find_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array_5, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_SelectButton");

	Params::UUI_MainMenu_C_Navigation_SelectButton_Params Parms{};

	Parms.SkipInputsCheck = SkipInputsCheck;
	Parms.SkipSound = SkipSound;
	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.Delta = Delta;
	Parms.Button = Button;
	Parms.Index = Index;
	Parms.Local_MMButton = Local_MMButton;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_GetButtons_Array_1 = CallFunc_GetButtons_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetButtons_Array_2 = CallFunc_GetButtons_Array_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetButtons_Array_3 = CallFunc_GetButtons_Array_3;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetButtons_Array_4 = CallFunc_GetButtons_Array_4;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_GetButtons_Array_5 = CallFunc_GetButtons_Array_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Navigation_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Navigation_Down(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Navigation_Down");

	Params::UUI_MainMenu_C_Navigation_Down_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_Select_Default_1                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_Select_Default_2                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_MainMenu_C::GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array_1, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array_2, TArray<class UUI_MainMenu_Button_C*>& K2Node_Select_Default, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array_3, TArray<class UUI_MainMenu_Button_C*>& K2Node_Select_Default_1, TArray<class UUI_MainMenu_Button_C*>& K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "GetButtons");

	Params::UUI_MainMenu_C_GetButtons_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_MainMenu.UI_MainMenu_C.MainMenu_FadeInAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::MainMenu_FadeInAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MainMenu_FadeInAnim");

	Params::UUI_MainMenu_C_MainMenu_FadeInAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.MainMenu_OnBrightnessConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::MainMenu_OnBrightnessConfirmed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MainMenu_OnBrightnessConfirmed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.EscapeMenu_OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::EscapeMenu_OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "EscapeMenu_OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.EscapeMenu_OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::EscapeMenu_OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "EscapeMenu_OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::OnOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Confirm_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Confirm_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Confirm_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Back_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Back_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Back_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Back_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Back_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Back_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.ContinueGame_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::ContinueGame_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ContinueGame_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Game_Start_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               DeleteSaveGame                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::Game_Start_Set(int32 SaveSlot, bool DeleteSaveGame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Game_Start_Set");

	Params::UUI_MainMenu_C_Game_Start_Set_Params Parms{};

	Parms.SaveSlot = SaveSlot;
	Parms.DeleteSaveGame = DeleteSaveGame;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnCloseEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OnCloseEvent(bool Sound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnCloseEvent");

	Params::UUI_MainMenu_C_OnCloseEvent_Params Parms{};

	Parms.Sound = Sound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.PauseMenu_SetInputMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::PauseMenu_SetInputMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PauseMenu_SetInputMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.PauseMenu_SetFocus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::PauseMenu_SetFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PauseMenu_SetFocus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.ExitToMainMenuEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::ExitToMainMenuEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ExitToMainMenuEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.CloseCredits
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.MainMenu_CloseCredits
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::MainMenu_CloseCredits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MainMenu_CloseCredits");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.MainMenu_SetMenuState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_MainMenu_State     Menu_State                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "MainMenu_SetMenuState");

	Params::UUI_MainMenu_C_MainMenu_SetMenuState_Params Parms{};

	Parms.Menu_State = Menu_State;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnKeyboardModeChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               KeyboardMode                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OnKeyboardModeChanged_Set(bool KeyboardMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnKeyboardModeChanged_Set");

	Params::UUI_MainMenu_C_OnKeyboardModeChanged_Set_Params Parms{};

	Parms.KeyboardMode = KeyboardMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnKeyboardModeChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::OnKeyboardModeChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnKeyboardModeChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Fextralife_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.OnRefreshProfileDisplayName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ProfileName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_MainMenu_C::OnRefreshProfileDisplayName(const class FString& ProfileName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnRefreshProfileDisplayName");

	Params::UUI_MainMenu_C_OnRefreshProfileDisplayName_Params Parms{};

	Parms.ProfileName = ProfileName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_Quit_K2Node_ComponentBoundEvent_8_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_Quit_K2Node_ComponentBoundEvent_8_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_Quit_K2Node_ComponentBoundEvent_8_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_Quit_K2Node_ComponentBoundEvent_8_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_Credits_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_Credits_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_Credits_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_Credits_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_Options_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_Options_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_Options_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_Options_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_NewGame_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_NewGame_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_NewGame_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_NewGame_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_LoadGame_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_LoadGame_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_LoadGame_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_LoadGame_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Discord_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Continue_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Quit_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Credits_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_Options_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_LoadGame_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MainMenu_Button_NewGame_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Down_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Down_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Down_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Down_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Down_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Down_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Down_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Down_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Down_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Up_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Up_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Up_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Up_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Up_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Up_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Up_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Up_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Up_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_11_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_9_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_9_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_9_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_9_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_ExitToMain_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Options_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Quit_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_Resume_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_36_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_37_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_37_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_37_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_37_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_38_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_38_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_38_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_PM_Button_PhotoMode_K2Node_ComponentBoundEvent_38_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_39_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_39_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_39_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_39_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_40_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_40_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_40_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_40_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_AdditionalContent_K2Node_ComponentBoundEvent_41_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_42_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_42_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_42_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_42_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_43_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_43_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_43_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_43_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_44_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_44_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_44_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_44_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_45_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_45_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_45_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_45_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_46_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_46_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_46_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_46_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_47_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_47_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_47_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_47_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_Back_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_SeasonalContent_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_AC_Button_BossSoundtrack_K2Node_ComponentBoundEvent_50_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "PreConstruct");

	Params::UUI_MainMenu_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.NavRestore_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::NavRestore_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavRestore_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.NavRestore_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::NavRestore_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "NavRestore_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.StormModeButton_CheckState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::StormModeButton_CheckState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormModeButton_CheckState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_51_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_51_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_51_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_51_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_52_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_53_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_53_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_53_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_StormMode_K2Node_ComponentBoundEvent_53_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StormMode_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::StormMode_Start(int32 SaveSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormMode_Start");

	Params::UUI_MainMenu_C_StormMode_Start_Params Parms{};

	Parms.SaveSlot = SaveSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.StormModeMenu_NavBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::StormModeMenu_NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "StormModeMenu_NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_55_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_56_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_56_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_56_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_56_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_57_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_57_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_57_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_57_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_58_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_58_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_58_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_1_K2Node_ComponentBoundEvent_58_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_2_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_60_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_60_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_60_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_60_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_61_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_61_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_61_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_61_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_62_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_62_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_62_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Save_3_K2Node_ComponentBoundEvent_62_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_63_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_63_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_63_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_63_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_SM_Button_Back_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.RecheckStormMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::RecheckStormMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "RecheckStormMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_66_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_66_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_66_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_66_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_67_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_67_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_67_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_67_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_68_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_68_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_68_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_MM_Button_TwitchDrops_K2Node_ComponentBoundEvent_68_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_70_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_71_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_72_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_72_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_72_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_72_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_73_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_73_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_73_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Back_K2Node_ComponentBoundEvent_73_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_74_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_75_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_75_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_75_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_75_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_76_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_76_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_76_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Claimed_K2Node_ComponentBoundEvent_76_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_77_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_77_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_77_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_77_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_78_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_78_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_78_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Refresh_K2Node_ComponentBoundEvent_78_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_69_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_79_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_79_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_79_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_79_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_80_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_80_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_80_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_R_BTN_Back_K2Node_ComponentBoundEvent_80_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_81_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_81_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_81_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_81_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_82_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_82_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_82_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_82_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_83_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_83_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_83_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_M_BTN_Link_K2Node_ComponentBoundEvent_83_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_84_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_84_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_84_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_84_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_85_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_85_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_85_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_85_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_86_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_86_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_86_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_C_BTN_Back_1_K2Node_ComponentBoundEvent_86_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_87_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_87_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_87_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_87_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_88_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_88_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_88_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_88_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_89_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_89_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_89_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_1_K2Node_ComponentBoundEvent_89_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_90_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_91_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_91_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_91_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_91_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_92_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_92_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_92_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_2_K2Node_ComponentBoundEvent_92_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_93_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_94_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_94_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_94_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_94_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_95_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_95_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_95_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__UI_TW_C_Button_Save_3_K2Node_ComponentBoundEvent_95_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_96_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_97_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_97_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_97_Hovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_97_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_98_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_98_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_98_Unhovered__DelegateSignature");

	Params::UUI_MainMenu_C_BndEvt__TW_CL_BTN_Back_K2Node_ComponentBoundEvent_98_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.RefreshTwitchDropButton
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_MainMenu_C::RefreshTwitchDropButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "RefreshTwitchDropButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_MainMenu.UI_MainMenu_C.OnRefreshStormMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StormModeOwned                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_MainMenu_C::OnRefreshStormMode(bool StormModeOwned)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "OnRefreshStormMode");

	Params::UUI_MainMenu_C_OnRefreshStormMode_Params Parms{};

	Parms.StormModeOwned = StormModeOwned;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_MainMenu.UI_MainMenu_C.ExecuteUbergraph_UI_MainMenu
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FName                        CallFunc_GetMapToLoad_CurrentMainLevel                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMapToLoad_CurrentSubLevel                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_IfPlatform_OutResult                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_PopUpMessage_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryControllerIndex_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetMapToLoad_CurrentMainLevel_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMapToLoad_CurrentSubLevel_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>CallFunc_StormMode_Activate_self_CastInput                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_StormModeMapToLoad_CurrentMainLevel                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryControllerIndex_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_SaveSlot_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_DeleteSaveGame                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Sound                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_MainMenu_State     K2Node_Event_Menu_State                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_KeyboardMode                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_98                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_98                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_97                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_97                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_96                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_96                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_profileName                                   (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// int32                              K2Node_ComponentBoundEvent_Index_95                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_95                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_94                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_94                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_93                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_93                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_92                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_92                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_91                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_91                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_90                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_90                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_89                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_89                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_88                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_88                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_87                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_87                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_86                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_86                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_85                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_85                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_84                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_84                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_83                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_83                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_82                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_82                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_81                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_81                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_80                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_80                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_79                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_79                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_78                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_78                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_77                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_77                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_76                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_76                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_75                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_75                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_74                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_74                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_73                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_73                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_72                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_72                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_71                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_71                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_70                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_70                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_69                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_69                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_68                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_68                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_67                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_67                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_66                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_66                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_65                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_65                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_64                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_64                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_63                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_63                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_62                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_62                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_61                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_61                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_60                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_60                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_12                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_59                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_59                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_58                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_58                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_57                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_57                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_13                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_56                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_56                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_55                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_55                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_54                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_54                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_53                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_53                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_52                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_52                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_51                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_51                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_50                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_50                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_49                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_49                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_48                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_48                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_SaveRestoreWindow_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHGameInstance*             K2Node_DynamicCast_AsDHGame_Instance_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetPrimaryControllerIndex_ReturnValue_2                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              K2Node_ComponentBoundEvent_Index_47                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_47                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_46                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_46                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_45                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_45                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_14                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SaveSlot                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ILoadingScreenInterface_C>K2Node_DynamicCast_AsLoading_Screen_Interface_5                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_44                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_44                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_43                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_43                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_42                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_42                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_41                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_41                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_40                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_40                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_39                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_39                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_38                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_38                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_37                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_37                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_36                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_36                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound__1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenStormModeMenu_PlaySound__2                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_35                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_35                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_34                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_34                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_33                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_33                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNotInWarningWindow_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Index_32                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_32                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_31                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_31                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_30                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_30                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_29                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_29                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_OnClickSetIndexWithWidget_Index_15                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_28                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_28                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_27                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_27                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_26                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_26                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_25                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_25                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_24                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_24                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_23                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_22                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_21                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_20                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_19                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_18                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_17                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
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
// bool                               CallFunc_TwitchDrop_HasUnclaimed_bYes                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_StormModeOwned                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_1                              (NoDestructor, HasGetValueTypeHash)

void UUI_MainMenu_C::ExecuteUbergraph_UI_MainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName CallFunc_GetMapToLoad_CurrentMainLevel, class FName CallFunc_GetMapToLoad_CurrentSubLevel, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_1, enum class EPlatform CallFunc_IfPlatform_OutResult, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_MainMenu_PopUpMessage_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetPrimaryControllerIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_1, bool K2Node_DynamicCast_bSuccess_4, class FName CallFunc_GetMapToLoad_CurrentMainLevel_1, class FName CallFunc_GetMapToLoad_CurrentSubLevel_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_2, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_3, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IGameInstanceHUDInterface_C> CallFunc_StormMode_Activate_self_CastInput, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess_7, class FName CallFunc_StormModeMapToLoad_CurrentMainLevel, int32 CallFunc_GetPrimaryControllerIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool K2Node_SwitchEnum_CmpSuccess_2, int32 K2Node_CustomEvent_SaveSlot_1, bool K2Node_CustomEvent_DeleteSaveGame, bool K2Node_CustomEvent_Sound, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class Enum_MainMenu_State K2Node_Event_Menu_State, bool Temp_bool_Variable, bool K2Node_CustomEvent_KeyboardMode, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class APlayerController* CallFunc_GetPlayerController_ReturnValue_4, int32 K2Node_ComponentBoundEvent_Index_98, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_98, int32 K2Node_ComponentBoundEvent_Index_97, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_97, int32 K2Node_ComponentBoundEvent_Index_96, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_96, int32 CallFunc_OnClickSetIndexWithWidget_Index, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_8, const class FString& K2Node_CustomEvent_profileName, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_95, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_95, int32 K2Node_ComponentBoundEvent_Index_94, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_94, int32 K2Node_ComponentBoundEvent_Index_93, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_93, int32 K2Node_ComponentBoundEvent_Index_92, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_92, int32 K2Node_ComponentBoundEvent_Index_91, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_91, int32 K2Node_ComponentBoundEvent_Index_90, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_90, int32 K2Node_ComponentBoundEvent_Index_89, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_89, int32 K2Node_ComponentBoundEvent_Index_88, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_88, int32 K2Node_ComponentBoundEvent_Index_87, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_87, int32 K2Node_ComponentBoundEvent_Index_86, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_86, int32 K2Node_ComponentBoundEvent_Index_85, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_85, int32 K2Node_ComponentBoundEvent_Index_84, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_84, int32 CallFunc_OnClickSetIndexWithWidget_Index_1, int32 K2Node_ComponentBoundEvent_Index_83, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_83, int32 K2Node_ComponentBoundEvent_Index_82, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_82, int32 K2Node_ComponentBoundEvent_Index_81, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_81, int32 CallFunc_OnClickSetIndexWithWidget_Index_2, int32 CallFunc_OnClickSetIndexWithWidget_Index_3, int32 CallFunc_OnClickSetIndexWithWidget_Index_4, int32 CallFunc_OnClickSetIndexWithWidget_Index_5, int32 CallFunc_OnClickSetIndexWithWidget_Index_6, int32 CallFunc_OnClickSetIndexWithWidget_Index_7, int32 K2Node_ComponentBoundEvent_Index_80, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_80, int32 K2Node_ComponentBoundEvent_Index_79, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_79, int32 K2Node_ComponentBoundEvent_Index_78, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_78, int32 K2Node_ComponentBoundEvent_Index_77, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_77, int32 K2Node_ComponentBoundEvent_Index_76, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_76, int32 K2Node_ComponentBoundEvent_Index_75, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_75, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_74, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_74, int32 K2Node_ComponentBoundEvent_Index_73, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_73, int32 K2Node_ComponentBoundEvent_Index_72, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_72, int32 K2Node_ComponentBoundEvent_Index_71, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_71, int32 K2Node_ComponentBoundEvent_Index_70, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_70, int32 K2Node_ComponentBoundEvent_Index_69, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_69, int32 K2Node_ComponentBoundEvent_Index_68, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_68, int32 K2Node_ComponentBoundEvent_Index_67, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_67, int32 CallFunc_OnClickSetIndexWithWidget_Index_8, int32 CallFunc_OnClickSetIndexWithWidget_Index_9, int32 CallFunc_OnClickSetIndexWithWidget_Index_10, int32 CallFunc_OnClickSetIndexWithWidget_Index_11, int32 K2Node_ComponentBoundEvent_Index_66, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_66, int32 K2Node_ComponentBoundEvent_Index_65, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_65, int32 K2Node_ComponentBoundEvent_Index_64, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_64, int32 K2Node_ComponentBoundEvent_Index_63, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_63, int32 K2Node_ComponentBoundEvent_Index_62, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_62, int32 K2Node_ComponentBoundEvent_Index_61, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_61, int32 K2Node_ComponentBoundEvent_Index_60, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_60, int32 CallFunc_OnClickSetIndexWithWidget_Index_12, int32 K2Node_ComponentBoundEvent_Index_59, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_59, int32 K2Node_ComponentBoundEvent_Index_58, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_58, int32 K2Node_ComponentBoundEvent_Index_57, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_57, int32 CallFunc_OnClickSetIndexWithWidget_Index_13, int32 K2Node_ComponentBoundEvent_Index_56, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_56, int32 K2Node_ComponentBoundEvent_Index_55, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_55, int32 K2Node_ComponentBoundEvent_Index_54, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_54, int32 K2Node_ComponentBoundEvent_Index_53, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_53, int32 K2Node_ComponentBoundEvent_Index_52, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_52, int32 K2Node_ComponentBoundEvent_Index_51, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_51, int32 K2Node_ComponentBoundEvent_Index_50, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_50, int32 K2Node_ComponentBoundEvent_Index_49, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_49, int32 K2Node_ComponentBoundEvent_Index_48, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_48, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_SaveRestoreWindow_C* CallFunc_Create_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_3, bool K2Node_DynamicCast_bSuccess_9, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_10, int32 CallFunc_GetPrimaryControllerIndex_ReturnValue_2, bool CallFunc_StormModeContentIsEnabled_Enabled_, bool CallFunc_Greater_IntInt_ReturnValue_3, class FText CallFunc_Conv_BoolToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_47, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_47, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_46, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_46, class APlayerController* CallFunc_GetPlayerController_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_ComponentBoundEvent_Index_45, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_45, int32 CallFunc_OnClickSetIndexWithWidget_Index_14, int32 K2Node_CustomEvent_SaveSlot, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_4, bool K2Node_DynamicCast_bSuccess_11, TScriptInterface<class ILoadingScreenInterface_C> K2Node_DynamicCast_AsLoading_Screen_Interface_5, bool K2Node_DynamicCast_bSuccess_12, int32 K2Node_ComponentBoundEvent_Index_44, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_44, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 K2Node_ComponentBoundEvent_Index_43, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_43, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_42, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_42, int32 K2Node_ComponentBoundEvent_Index_41, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_41, int32 K2Node_ComponentBoundEvent_Index_40, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_40, int32 K2Node_ComponentBoundEvent_Index_39, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_39, int32 K2Node_ComponentBoundEvent_Index_38, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_38, int32 K2Node_ComponentBoundEvent_Index_37, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_37, int32 K2Node_ComponentBoundEvent_Index_36, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_36, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, bool CallFunc_OpenStormModeMenu_PlaySound_, bool CallFunc_OpenStormModeMenu_PlaySound__1, bool CallFunc_OpenStormModeMenu_PlaySound__2, int32 K2Node_ComponentBoundEvent_Index_35, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_35, int32 K2Node_ComponentBoundEvent_Index_34, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_34, int32 K2Node_ComponentBoundEvent_Index_33, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_33, bool CallFunc_IsNotInWarningWindow_ReturnValue, int32 K2Node_ComponentBoundEvent_Index_32, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_32, int32 K2Node_ComponentBoundEvent_Index_31, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_31, int32 K2Node_ComponentBoundEvent_Index_30, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_30, int32 K2Node_ComponentBoundEvent_Index_29, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_29, int32 CallFunc_OnClickSetIndexWithWidget_Index_15, int32 K2Node_ComponentBoundEvent_Index_28, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_28, int32 K2Node_ComponentBoundEvent_Index_27, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_27, int32 K2Node_ComponentBoundEvent_Index_26, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_26, int32 K2Node_ComponentBoundEvent_Index_25, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_25, int32 K2Node_ComponentBoundEvent_Index_24, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_24, int32 K2Node_ComponentBoundEvent_Index_23, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_23, int32 K2Node_ComponentBoundEvent_Index_22, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_22, int32 K2Node_ComponentBoundEvent_Index_21, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_21, int32 K2Node_ComponentBoundEvent_Index_20, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_20, int32 K2Node_ComponentBoundEvent_Index_19, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_19, int32 K2Node_ComponentBoundEvent_Index_18, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_18, int32 K2Node_ComponentBoundEvent_Index_17, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_17, int32 K2Node_ComponentBoundEvent_Index_16, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_16, int32 K2Node_ComponentBoundEvent_Index_15, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_15, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_TwitchDrop_HasUnclaimed_bYes, enum class ESlateVisibility K2Node_Select_Default, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, bool K2Node_CustomEvent_StormModeOwned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_MainMenu_C", "ExecuteUbergraph_UI_MainMenu");

	Params::UUI_MainMenu_C_ExecuteUbergraph_UI_MainMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetMapToLoad_CurrentMainLevel = CallFunc_GetMapToLoad_CurrentMainLevel;
	Parms.CallFunc_GetMapToLoad_CurrentSubLevel = CallFunc_GetMapToLoad_CurrentSubLevel;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsDHGame_Instance = K2Node_DynamicCast_AsDHGame_Instance;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IfPlatform_OutResult = CallFunc_IfPlatform_OutResult;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_1 = K2Node_DynamicCast_AsDHGame_Instance_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPrimaryControllerIndex_ReturnValue = CallFunc_GetPrimaryControllerIndex_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface = K2Node_DynamicCast_AsLoading_Screen_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_1 = K2Node_DynamicCast_AsLoading_Screen_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetMapToLoad_CurrentMainLevel_1 = CallFunc_GetMapToLoad_CurrentMainLevel_1;
	Parms.CallFunc_GetMapToLoad_CurrentSubLevel_1 = CallFunc_GetMapToLoad_CurrentSubLevel_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_2 = K2Node_DynamicCast_AsLoading_Screen_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_3 = K2Node_DynamicCast_AsLoading_Screen_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_StormMode_Activate_self_CastInput = CallFunc_StormMode_Activate_self_CastInput;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_StormModeMapToLoad_CurrentMainLevel = CallFunc_StormModeMapToLoad_CurrentMainLevel;
	Parms.CallFunc_GetPrimaryControllerIndex_ReturnValue_1 = CallFunc_GetPrimaryControllerIndex_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_CustomEvent_SaveSlot_1 = K2Node_CustomEvent_SaveSlot_1;
	Parms.K2Node_CustomEvent_DeleteSaveGame = K2Node_CustomEvent_DeleteSaveGame;
	Parms.K2Node_CustomEvent_Sound = K2Node_CustomEvent_Sound;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_Menu_State = K2Node_Event_Menu_State;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_KeyboardMode = K2Node_CustomEvent_KeyboardMode;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_GetPlayerController_ReturnValue_4 = CallFunc_GetPlayerController_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Index_98 = K2Node_ComponentBoundEvent_Index_98;
	Parms.K2Node_ComponentBoundEvent_Widget_98 = K2Node_ComponentBoundEvent_Widget_98;
	Parms.K2Node_ComponentBoundEvent_Index_97 = K2Node_ComponentBoundEvent_Index_97;
	Parms.K2Node_ComponentBoundEvent_Widget_97 = K2Node_ComponentBoundEvent_Widget_97;
	Parms.K2Node_ComponentBoundEvent_Index_96 = K2Node_ComponentBoundEvent_Index_96;
	Parms.K2Node_ComponentBoundEvent_Widget_96 = K2Node_ComponentBoundEvent_Widget_96;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index = CallFunc_OnClickSetIndexWithWidget_Index;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_2 = K2Node_DynamicCast_AsDHGame_Instance_2;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_CustomEvent_profileName = K2Node_CustomEvent_profileName;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Index_95 = K2Node_ComponentBoundEvent_Index_95;
	Parms.K2Node_ComponentBoundEvent_Widget_95 = K2Node_ComponentBoundEvent_Widget_95;
	Parms.K2Node_ComponentBoundEvent_Index_94 = K2Node_ComponentBoundEvent_Index_94;
	Parms.K2Node_ComponentBoundEvent_Widget_94 = K2Node_ComponentBoundEvent_Widget_94;
	Parms.K2Node_ComponentBoundEvent_Index_93 = K2Node_ComponentBoundEvent_Index_93;
	Parms.K2Node_ComponentBoundEvent_Widget_93 = K2Node_ComponentBoundEvent_Widget_93;
	Parms.K2Node_ComponentBoundEvent_Index_92 = K2Node_ComponentBoundEvent_Index_92;
	Parms.K2Node_ComponentBoundEvent_Widget_92 = K2Node_ComponentBoundEvent_Widget_92;
	Parms.K2Node_ComponentBoundEvent_Index_91 = K2Node_ComponentBoundEvent_Index_91;
	Parms.K2Node_ComponentBoundEvent_Widget_91 = K2Node_ComponentBoundEvent_Widget_91;
	Parms.K2Node_ComponentBoundEvent_Index_90 = K2Node_ComponentBoundEvent_Index_90;
	Parms.K2Node_ComponentBoundEvent_Widget_90 = K2Node_ComponentBoundEvent_Widget_90;
	Parms.K2Node_ComponentBoundEvent_Index_89 = K2Node_ComponentBoundEvent_Index_89;
	Parms.K2Node_ComponentBoundEvent_Widget_89 = K2Node_ComponentBoundEvent_Widget_89;
	Parms.K2Node_ComponentBoundEvent_Index_88 = K2Node_ComponentBoundEvent_Index_88;
	Parms.K2Node_ComponentBoundEvent_Widget_88 = K2Node_ComponentBoundEvent_Widget_88;
	Parms.K2Node_ComponentBoundEvent_Index_87 = K2Node_ComponentBoundEvent_Index_87;
	Parms.K2Node_ComponentBoundEvent_Widget_87 = K2Node_ComponentBoundEvent_Widget_87;
	Parms.K2Node_ComponentBoundEvent_Index_86 = K2Node_ComponentBoundEvent_Index_86;
	Parms.K2Node_ComponentBoundEvent_Widget_86 = K2Node_ComponentBoundEvent_Widget_86;
	Parms.K2Node_ComponentBoundEvent_Index_85 = K2Node_ComponentBoundEvent_Index_85;
	Parms.K2Node_ComponentBoundEvent_Widget_85 = K2Node_ComponentBoundEvent_Widget_85;
	Parms.K2Node_ComponentBoundEvent_Index_84 = K2Node_ComponentBoundEvent_Index_84;
	Parms.K2Node_ComponentBoundEvent_Widget_84 = K2Node_ComponentBoundEvent_Widget_84;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_1 = CallFunc_OnClickSetIndexWithWidget_Index_1;
	Parms.K2Node_ComponentBoundEvent_Index_83 = K2Node_ComponentBoundEvent_Index_83;
	Parms.K2Node_ComponentBoundEvent_Widget_83 = K2Node_ComponentBoundEvent_Widget_83;
	Parms.K2Node_ComponentBoundEvent_Index_82 = K2Node_ComponentBoundEvent_Index_82;
	Parms.K2Node_ComponentBoundEvent_Widget_82 = K2Node_ComponentBoundEvent_Widget_82;
	Parms.K2Node_ComponentBoundEvent_Index_81 = K2Node_ComponentBoundEvent_Index_81;
	Parms.K2Node_ComponentBoundEvent_Widget_81 = K2Node_ComponentBoundEvent_Widget_81;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_2 = CallFunc_OnClickSetIndexWithWidget_Index_2;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_3 = CallFunc_OnClickSetIndexWithWidget_Index_3;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_4 = CallFunc_OnClickSetIndexWithWidget_Index_4;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_5 = CallFunc_OnClickSetIndexWithWidget_Index_5;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_6 = CallFunc_OnClickSetIndexWithWidget_Index_6;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_7 = CallFunc_OnClickSetIndexWithWidget_Index_7;
	Parms.K2Node_ComponentBoundEvent_Index_80 = K2Node_ComponentBoundEvent_Index_80;
	Parms.K2Node_ComponentBoundEvent_Widget_80 = K2Node_ComponentBoundEvent_Widget_80;
	Parms.K2Node_ComponentBoundEvent_Index_79 = K2Node_ComponentBoundEvent_Index_79;
	Parms.K2Node_ComponentBoundEvent_Widget_79 = K2Node_ComponentBoundEvent_Widget_79;
	Parms.K2Node_ComponentBoundEvent_Index_78 = K2Node_ComponentBoundEvent_Index_78;
	Parms.K2Node_ComponentBoundEvent_Widget_78 = K2Node_ComponentBoundEvent_Widget_78;
	Parms.K2Node_ComponentBoundEvent_Index_77 = K2Node_ComponentBoundEvent_Index_77;
	Parms.K2Node_ComponentBoundEvent_Widget_77 = K2Node_ComponentBoundEvent_Widget_77;
	Parms.K2Node_ComponentBoundEvent_Index_76 = K2Node_ComponentBoundEvent_Index_76;
	Parms.K2Node_ComponentBoundEvent_Widget_76 = K2Node_ComponentBoundEvent_Widget_76;
	Parms.K2Node_ComponentBoundEvent_Index_75 = K2Node_ComponentBoundEvent_Index_75;
	Parms.K2Node_ComponentBoundEvent_Widget_75 = K2Node_ComponentBoundEvent_Widget_75;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_74 = K2Node_ComponentBoundEvent_Index_74;
	Parms.K2Node_ComponentBoundEvent_Widget_74 = K2Node_ComponentBoundEvent_Widget_74;
	Parms.K2Node_ComponentBoundEvent_Index_73 = K2Node_ComponentBoundEvent_Index_73;
	Parms.K2Node_ComponentBoundEvent_Widget_73 = K2Node_ComponentBoundEvent_Widget_73;
	Parms.K2Node_ComponentBoundEvent_Index_72 = K2Node_ComponentBoundEvent_Index_72;
	Parms.K2Node_ComponentBoundEvent_Widget_72 = K2Node_ComponentBoundEvent_Widget_72;
	Parms.K2Node_ComponentBoundEvent_Index_71 = K2Node_ComponentBoundEvent_Index_71;
	Parms.K2Node_ComponentBoundEvent_Widget_71 = K2Node_ComponentBoundEvent_Widget_71;
	Parms.K2Node_ComponentBoundEvent_Index_70 = K2Node_ComponentBoundEvent_Index_70;
	Parms.K2Node_ComponentBoundEvent_Widget_70 = K2Node_ComponentBoundEvent_Widget_70;
	Parms.K2Node_ComponentBoundEvent_Index_69 = K2Node_ComponentBoundEvent_Index_69;
	Parms.K2Node_ComponentBoundEvent_Widget_69 = K2Node_ComponentBoundEvent_Widget_69;
	Parms.K2Node_ComponentBoundEvent_Index_68 = K2Node_ComponentBoundEvent_Index_68;
	Parms.K2Node_ComponentBoundEvent_Widget_68 = K2Node_ComponentBoundEvent_Widget_68;
	Parms.K2Node_ComponentBoundEvent_Index_67 = K2Node_ComponentBoundEvent_Index_67;
	Parms.K2Node_ComponentBoundEvent_Widget_67 = K2Node_ComponentBoundEvent_Widget_67;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_8 = CallFunc_OnClickSetIndexWithWidget_Index_8;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_9 = CallFunc_OnClickSetIndexWithWidget_Index_9;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_10 = CallFunc_OnClickSetIndexWithWidget_Index_10;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_11 = CallFunc_OnClickSetIndexWithWidget_Index_11;
	Parms.K2Node_ComponentBoundEvent_Index_66 = K2Node_ComponentBoundEvent_Index_66;
	Parms.K2Node_ComponentBoundEvent_Widget_66 = K2Node_ComponentBoundEvent_Widget_66;
	Parms.K2Node_ComponentBoundEvent_Index_65 = K2Node_ComponentBoundEvent_Index_65;
	Parms.K2Node_ComponentBoundEvent_Widget_65 = K2Node_ComponentBoundEvent_Widget_65;
	Parms.K2Node_ComponentBoundEvent_Index_64 = K2Node_ComponentBoundEvent_Index_64;
	Parms.K2Node_ComponentBoundEvent_Widget_64 = K2Node_ComponentBoundEvent_Widget_64;
	Parms.K2Node_ComponentBoundEvent_Index_63 = K2Node_ComponentBoundEvent_Index_63;
	Parms.K2Node_ComponentBoundEvent_Widget_63 = K2Node_ComponentBoundEvent_Widget_63;
	Parms.K2Node_ComponentBoundEvent_Index_62 = K2Node_ComponentBoundEvent_Index_62;
	Parms.K2Node_ComponentBoundEvent_Widget_62 = K2Node_ComponentBoundEvent_Widget_62;
	Parms.K2Node_ComponentBoundEvent_Index_61 = K2Node_ComponentBoundEvent_Index_61;
	Parms.K2Node_ComponentBoundEvent_Widget_61 = K2Node_ComponentBoundEvent_Widget_61;
	Parms.K2Node_ComponentBoundEvent_Index_60 = K2Node_ComponentBoundEvent_Index_60;
	Parms.K2Node_ComponentBoundEvent_Widget_60 = K2Node_ComponentBoundEvent_Widget_60;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_12 = CallFunc_OnClickSetIndexWithWidget_Index_12;
	Parms.K2Node_ComponentBoundEvent_Index_59 = K2Node_ComponentBoundEvent_Index_59;
	Parms.K2Node_ComponentBoundEvent_Widget_59 = K2Node_ComponentBoundEvent_Widget_59;
	Parms.K2Node_ComponentBoundEvent_Index_58 = K2Node_ComponentBoundEvent_Index_58;
	Parms.K2Node_ComponentBoundEvent_Widget_58 = K2Node_ComponentBoundEvent_Widget_58;
	Parms.K2Node_ComponentBoundEvent_Index_57 = K2Node_ComponentBoundEvent_Index_57;
	Parms.K2Node_ComponentBoundEvent_Widget_57 = K2Node_ComponentBoundEvent_Widget_57;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_13 = CallFunc_OnClickSetIndexWithWidget_Index_13;
	Parms.K2Node_ComponentBoundEvent_Index_56 = K2Node_ComponentBoundEvent_Index_56;
	Parms.K2Node_ComponentBoundEvent_Widget_56 = K2Node_ComponentBoundEvent_Widget_56;
	Parms.K2Node_ComponentBoundEvent_Index_55 = K2Node_ComponentBoundEvent_Index_55;
	Parms.K2Node_ComponentBoundEvent_Widget_55 = K2Node_ComponentBoundEvent_Widget_55;
	Parms.K2Node_ComponentBoundEvent_Index_54 = K2Node_ComponentBoundEvent_Index_54;
	Parms.K2Node_ComponentBoundEvent_Widget_54 = K2Node_ComponentBoundEvent_Widget_54;
	Parms.K2Node_ComponentBoundEvent_Index_53 = K2Node_ComponentBoundEvent_Index_53;
	Parms.K2Node_ComponentBoundEvent_Widget_53 = K2Node_ComponentBoundEvent_Widget_53;
	Parms.K2Node_ComponentBoundEvent_Index_52 = K2Node_ComponentBoundEvent_Index_52;
	Parms.K2Node_ComponentBoundEvent_Widget_52 = K2Node_ComponentBoundEvent_Widget_52;
	Parms.K2Node_ComponentBoundEvent_Index_51 = K2Node_ComponentBoundEvent_Index_51;
	Parms.K2Node_ComponentBoundEvent_Widget_51 = K2Node_ComponentBoundEvent_Widget_51;
	Parms.K2Node_ComponentBoundEvent_Index_50 = K2Node_ComponentBoundEvent_Index_50;
	Parms.K2Node_ComponentBoundEvent_Widget_50 = K2Node_ComponentBoundEvent_Widget_50;
	Parms.K2Node_ComponentBoundEvent_Index_49 = K2Node_ComponentBoundEvent_Index_49;
	Parms.K2Node_ComponentBoundEvent_Widget_49 = K2Node_ComponentBoundEvent_Widget_49;
	Parms.K2Node_ComponentBoundEvent_Index_48 = K2Node_ComponentBoundEvent_Index_48;
	Parms.K2Node_ComponentBoundEvent_Widget_48 = K2Node_ComponentBoundEvent_Widget_48;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsDHGame_Instance_3 = K2Node_DynamicCast_AsDHGame_Instance_3;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetPrimaryControllerIndex_ReturnValue_2 = CallFunc_GetPrimaryControllerIndex_ReturnValue_2;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_Greater_IntInt_ReturnValue_3 = CallFunc_Greater_IntInt_ReturnValue_3;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_47 = K2Node_ComponentBoundEvent_Index_47;
	Parms.K2Node_ComponentBoundEvent_Widget_47 = K2Node_ComponentBoundEvent_Widget_47;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_46 = K2Node_ComponentBoundEvent_Index_46;
	Parms.K2Node_ComponentBoundEvent_Widget_46 = K2Node_ComponentBoundEvent_Widget_46;
	Parms.CallFunc_GetPlayerController_ReturnValue_5 = CallFunc_GetPlayerController_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_ComponentBoundEvent_Index_45 = K2Node_ComponentBoundEvent_Index_45;
	Parms.K2Node_ComponentBoundEvent_Widget_45 = K2Node_ComponentBoundEvent_Widget_45;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_14 = CallFunc_OnClickSetIndexWithWidget_Index_14;
	Parms.K2Node_CustomEvent_SaveSlot = K2Node_CustomEvent_SaveSlot;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2 = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_4 = K2Node_DynamicCast_AsLoading_Screen_Interface_4;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.K2Node_DynamicCast_AsLoading_Screen_Interface_5 = K2Node_DynamicCast_AsLoading_Screen_Interface_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_ComponentBoundEvent_Index_44 = K2Node_ComponentBoundEvent_Index_44;
	Parms.K2Node_ComponentBoundEvent_Widget_44 = K2Node_ComponentBoundEvent_Widget_44;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_ComponentBoundEvent_Index_43 = K2Node_ComponentBoundEvent_Index_43;
	Parms.K2Node_ComponentBoundEvent_Widget_43 = K2Node_ComponentBoundEvent_Widget_43;
	Parms.CallFunc_UI_HoldTimer_ReturnValue = CallFunc_UI_HoldTimer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_42 = K2Node_ComponentBoundEvent_Index_42;
	Parms.K2Node_ComponentBoundEvent_Widget_42 = K2Node_ComponentBoundEvent_Widget_42;
	Parms.K2Node_ComponentBoundEvent_Index_41 = K2Node_ComponentBoundEvent_Index_41;
	Parms.K2Node_ComponentBoundEvent_Widget_41 = K2Node_ComponentBoundEvent_Widget_41;
	Parms.K2Node_ComponentBoundEvent_Index_40 = K2Node_ComponentBoundEvent_Index_40;
	Parms.K2Node_ComponentBoundEvent_Widget_40 = K2Node_ComponentBoundEvent_Widget_40;
	Parms.K2Node_ComponentBoundEvent_Index_39 = K2Node_ComponentBoundEvent_Index_39;
	Parms.K2Node_ComponentBoundEvent_Widget_39 = K2Node_ComponentBoundEvent_Widget_39;
	Parms.K2Node_ComponentBoundEvent_Index_38 = K2Node_ComponentBoundEvent_Index_38;
	Parms.K2Node_ComponentBoundEvent_Widget_38 = K2Node_ComponentBoundEvent_Widget_38;
	Parms.K2Node_ComponentBoundEvent_Index_37 = K2Node_ComponentBoundEvent_Index_37;
	Parms.K2Node_ComponentBoundEvent_Widget_37 = K2Node_ComponentBoundEvent_Widget_37;
	Parms.K2Node_ComponentBoundEvent_Index_36 = K2Node_ComponentBoundEvent_Index_36;
	Parms.K2Node_ComponentBoundEvent_Widget_36 = K2Node_ComponentBoundEvent_Widget_36;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_OpenStormModeMenu_PlaySound_ = CallFunc_OpenStormModeMenu_PlaySound_;
	Parms.CallFunc_OpenStormModeMenu_PlaySound__1 = CallFunc_OpenStormModeMenu_PlaySound__1;
	Parms.CallFunc_OpenStormModeMenu_PlaySound__2 = CallFunc_OpenStormModeMenu_PlaySound__2;
	Parms.K2Node_ComponentBoundEvent_Index_35 = K2Node_ComponentBoundEvent_Index_35;
	Parms.K2Node_ComponentBoundEvent_Widget_35 = K2Node_ComponentBoundEvent_Widget_35;
	Parms.K2Node_ComponentBoundEvent_Index_34 = K2Node_ComponentBoundEvent_Index_34;
	Parms.K2Node_ComponentBoundEvent_Widget_34 = K2Node_ComponentBoundEvent_Widget_34;
	Parms.K2Node_ComponentBoundEvent_Index_33 = K2Node_ComponentBoundEvent_Index_33;
	Parms.K2Node_ComponentBoundEvent_Widget_33 = K2Node_ComponentBoundEvent_Widget_33;
	Parms.CallFunc_IsNotInWarningWindow_ReturnValue = CallFunc_IsNotInWarningWindow_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Index_32 = K2Node_ComponentBoundEvent_Index_32;
	Parms.K2Node_ComponentBoundEvent_Widget_32 = K2Node_ComponentBoundEvent_Widget_32;
	Parms.K2Node_ComponentBoundEvent_Index_31 = K2Node_ComponentBoundEvent_Index_31;
	Parms.K2Node_ComponentBoundEvent_Widget_31 = K2Node_ComponentBoundEvent_Widget_31;
	Parms.K2Node_ComponentBoundEvent_Index_30 = K2Node_ComponentBoundEvent_Index_30;
	Parms.K2Node_ComponentBoundEvent_Widget_30 = K2Node_ComponentBoundEvent_Widget_30;
	Parms.K2Node_ComponentBoundEvent_Index_29 = K2Node_ComponentBoundEvent_Index_29;
	Parms.K2Node_ComponentBoundEvent_Widget_29 = K2Node_ComponentBoundEvent_Widget_29;
	Parms.CallFunc_OnClickSetIndexWithWidget_Index_15 = CallFunc_OnClickSetIndexWithWidget_Index_15;
	Parms.K2Node_ComponentBoundEvent_Index_28 = K2Node_ComponentBoundEvent_Index_28;
	Parms.K2Node_ComponentBoundEvent_Widget_28 = K2Node_ComponentBoundEvent_Widget_28;
	Parms.K2Node_ComponentBoundEvent_Index_27 = K2Node_ComponentBoundEvent_Index_27;
	Parms.K2Node_ComponentBoundEvent_Widget_27 = K2Node_ComponentBoundEvent_Widget_27;
	Parms.K2Node_ComponentBoundEvent_Index_26 = K2Node_ComponentBoundEvent_Index_26;
	Parms.K2Node_ComponentBoundEvent_Widget_26 = K2Node_ComponentBoundEvent_Widget_26;
	Parms.K2Node_ComponentBoundEvent_Index_25 = K2Node_ComponentBoundEvent_Index_25;
	Parms.K2Node_ComponentBoundEvent_Widget_25 = K2Node_ComponentBoundEvent_Widget_25;
	Parms.K2Node_ComponentBoundEvent_Index_24 = K2Node_ComponentBoundEvent_Index_24;
	Parms.K2Node_ComponentBoundEvent_Widget_24 = K2Node_ComponentBoundEvent_Widget_24;
	Parms.K2Node_ComponentBoundEvent_Index_23 = K2Node_ComponentBoundEvent_Index_23;
	Parms.K2Node_ComponentBoundEvent_Widget_23 = K2Node_ComponentBoundEvent_Widget_23;
	Parms.K2Node_ComponentBoundEvent_Index_22 = K2Node_ComponentBoundEvent_Index_22;
	Parms.K2Node_ComponentBoundEvent_Widget_22 = K2Node_ComponentBoundEvent_Widget_22;
	Parms.K2Node_ComponentBoundEvent_Index_21 = K2Node_ComponentBoundEvent_Index_21;
	Parms.K2Node_ComponentBoundEvent_Widget_21 = K2Node_ComponentBoundEvent_Widget_21;
	Parms.K2Node_ComponentBoundEvent_Index_20 = K2Node_ComponentBoundEvent_Index_20;
	Parms.K2Node_ComponentBoundEvent_Widget_20 = K2Node_ComponentBoundEvent_Widget_20;
	Parms.K2Node_ComponentBoundEvent_Index_19 = K2Node_ComponentBoundEvent_Index_19;
	Parms.K2Node_ComponentBoundEvent_Widget_19 = K2Node_ComponentBoundEvent_Widget_19;
	Parms.K2Node_ComponentBoundEvent_Index_18 = K2Node_ComponentBoundEvent_Index_18;
	Parms.K2Node_ComponentBoundEvent_Widget_18 = K2Node_ComponentBoundEvent_Widget_18;
	Parms.K2Node_ComponentBoundEvent_Index_17 = K2Node_ComponentBoundEvent_Index_17;
	Parms.K2Node_ComponentBoundEvent_Widget_17 = K2Node_ComponentBoundEvent_Widget_17;
	Parms.K2Node_ComponentBoundEvent_Index_16 = K2Node_ComponentBoundEvent_Index_16;
	Parms.K2Node_ComponentBoundEvent_Widget_16 = K2Node_ComponentBoundEvent_Widget_16;
	Parms.K2Node_ComponentBoundEvent_Index_15 = K2Node_ComponentBoundEvent_Index_15;
	Parms.K2Node_ComponentBoundEvent_Widget_15 = K2Node_ComponentBoundEvent_Widget_15;
	Parms.K2Node_ComponentBoundEvent_Index_14 = K2Node_ComponentBoundEvent_Index_14;
	Parms.K2Node_ComponentBoundEvent_Widget_14 = K2Node_ComponentBoundEvent_Widget_14;
	Parms.K2Node_ComponentBoundEvent_Index_13 = K2Node_ComponentBoundEvent_Index_13;
	Parms.K2Node_ComponentBoundEvent_Widget_13 = K2Node_ComponentBoundEvent_Widget_13;
	Parms.K2Node_ComponentBoundEvent_Index_12 = K2Node_ComponentBoundEvent_Index_12;
	Parms.K2Node_ComponentBoundEvent_Widget_12 = K2Node_ComponentBoundEvent_Widget_12;
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
	Parms.CallFunc_TwitchDrop_HasUnclaimed_bYes = CallFunc_TwitchDrop_HasUnclaimed_bYes;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.K2Node_CustomEvent_StormModeOwned = K2Node_CustomEvent_StormModeOwned;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_1 = CallFunc_UI_HoldTimer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


