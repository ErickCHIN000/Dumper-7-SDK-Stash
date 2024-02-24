#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_FastTravel.UI_FastTravel_C
// (None)

class UClass* UUI_FastTravel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FastTravel_C");

	return Clss;
}


// UI_FastTravel_C UI_FastTravel.Default__UI_FastTravel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FastTravel_C* UUI_FastTravel_C::GetDefaultObj()
{
	static class UUI_FastTravel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FastTravel_C*>(UUI_FastTravel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FastTravel.UI_FastTravel_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetUIScale_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "HandleScale");

	Params::UUI_FastTravel_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetUIScale_ReturnValue = CallFunc_GetUIScale_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.ApplyOrnateMaskEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::ApplyOrnateMaskEffect(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "ApplyOrnateMaskEffect");

	Params::UUI_FastTravel_C_ApplyOrnateMaskEffect_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue = CallFunc_IsPlayerAtMaxFamiliarity__ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.AddOrnateMaskFamiliarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)

void UUI_FastTravel_C::AddOrnateMaskFamiliarity(const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "AddOrnateMaskFamiliarity");

	Params::UUI_FastTravel_C_AddOrnateMaskFamiliarity_Params Parms{};

	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.IsCurrentWaifu
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WaifuID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_FastTravel_C::IsCurrentWaifu(class FName WaifuID, class FName Temp_name_Variable, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "IsCurrentWaifu");

	Params::UUI_FastTravel_C_IsCurrentWaifu_Params Parms{};

	Parms.WaifuID = WaifuID;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FastTravel.UI_FastTravel_C.SetAreaName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_3                           (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_3                               (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)

void UUI_FastTravel_C::SetAreaName(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, bool Temp_bool_Variable_3, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue_3, class FText CallFunc_TextToUpper_ReturnValue_3, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "SetAreaName");

	Params::UUI_FastTravel_C_SetAreaName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.CallFunc_MakeLiteralText_ReturnValue_3 = CallFunc_MakeLiteralText_ReturnValue_3;
	Parms.CallFunc_TextToUpper_ReturnValue_3 = CallFunc_TextToUpper_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.GetIsUnlocked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        WaifuID                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_FastTravel_C::GetIsUnlocked(class FName WaifuID, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "GetIsUnlocked");

	Params::UUI_FastTravel_C_GetIsUnlocked_Params Parms{};

	Parms.WaifuID = WaifuID;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FastTravel.UI_FastTravel_C.ConfirmFastTravel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_FastTravel_Entry_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::ConfirmFastTravel(class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "ConfirmFastTravel");

	Params::UUI_FastTravel_C_ConfirmFastTravel_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.UI_Sound_Hover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::UI_Sound_Hover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "UI_Sound_Hover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.SetGameState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGamePlayGameState_C*        CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::SetGameState(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "SetGameState");

	Params::UUI_FastTravel_C_SetGameState_Params Parms{};

	Parms.CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState = CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.GetMaxIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::GetMaxIndex(int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "GetMaxIndex");

	Params::UUI_FastTravel_C_GetMaxIndex_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.PopulateFastTravel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_WaifuID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_LevelID                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_LocationName                                               (Edit, BlueprintVisible)
// class UUI_FastTravel_Entry_C*      Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FastTravel_Entry_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCurrentWaifu_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsUnlocked_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FastTravel_Entry_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_FastTravelPoint     CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::PopulateFastTravel(int32 Local_Index, class FName Local_WaifuID, class FName Local_LevelID, class FText Local_LocationName, class UUI_FastTravel_Entry_C* Local_Widget, class UUI_FastTravel_Entry_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_IsCurrentWaifu_ReturnValue, bool CallFunc_GetIsUnlocked_ReturnValue, bool K2Node_SwitchName_CmpSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, int32 CallFunc_Array_Add_ReturnValue, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "PopulateFastTravel");

	Params::UUI_FastTravel_C_PopulateFastTravel_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_WaifuID = Local_WaifuID;
	Parms.Local_LevelID = Local_LevelID;
	Parms.Local_LocationName = Local_LocationName;
	Parms.Local_Widget = Local_Widget;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_IsCurrentWaifu_ReturnValue = CallFunc_IsCurrentWaifu_ReturnValue;
	Parms.CallFunc_GetIsUnlocked_ReturnValue = CallFunc_GetIsUnlocked_ReturnValue;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.GetFastTravelPoints
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_FastTravelPoint     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::GetFastTravelPoints(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FStruct_FastTravelPoint& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "GetFastTravelPoints");

	Params::UUI_FastTravel_C_GetFastTravelPoints_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.StartFastTravel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayGM_C*               CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_FastTravelPoint     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UUI_FastTravel_C::StartFastTravel(int32 Index, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "StartFastTravel");

	Params::UUI_FastTravel_C_StartFastTravel_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM = CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.UpdateFastTravelDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FastTravel_Entry_C*      Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Unlocked                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_FastTravelPoint     CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UUI_FastTravel_C::UpdateFastTravelDetails(int32 Index, class UUI_FastTravel_Entry_C* Entry, bool Local_Unlocked, int32 Local_Index, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, const struct FStruct_FastTravelPoint& CallFunc_Array_Get_Item, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "UpdateFastTravelDetails");

	Params::UUI_FastTravel_C_UpdateFastTravelDetails_Params Parms{};

	Parms.Index = Index;
	Parms.Entry = Entry;
	Parms.Local_Unlocked = Local_Unlocked;
	Parms.Local_Index = Local_Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.SetGameplayPC
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "SetGameplayPC");

	Params::UUI_FastTravel_C_SetGameplayPC_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.NavSoundHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavSoundHover()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavSoundHover");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.GetItemDescription
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Description                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              TimesUsedToUnlockEffectDescription                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        EffectDescription                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ExtendedDescription                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        EffectDescriptionWithFamiliarity                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Familiarity                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Familiarity                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_DescWithFami                                               (Edit, BlueprintVisible)
// class FText                        Local_ExtDesc                                                    (Edit, BlueprintVisible)
// class FText                        Local_EffectDesc                                                 (Edit, BlueprintVisible)
// int32                              Local_TimesUsed                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Local_Description                                                (Edit, BlueprintVisible)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateExtendedDescription_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_CreateExtendedDescription_OutputPin                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_CreateItemEffectDescription_ReturnValue                 (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_FastTravel_C::GetItemDescription(class FName ID, class FText Description, int32 TimesUsedToUnlockEffectDescription, class FText& EffectDescription, class FText& ExtendedDescription, class FText& EffectDescriptionWithFamiliarity, int32* Familiarity, int32 Local_Familiarity, class FText Local_DescWithFami, class FText Local_ExtDesc, class FText Local_EffectDesc, int32 Local_TimesUsed, class FText Local_Description, class FName Local_ID, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, const class FString& CallFunc_CreateExtendedDescription_ReturnValue, bool CallFunc_CreateExtendedDescription_OutputPin, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_GetItemFamiliarity_Value, const class FString& CallFunc_CreateItemEffectDescription_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "GetItemDescription");

	Params::UUI_FastTravel_C_GetItemDescription_Params Parms{};

	Parms.ID = ID;
	Parms.Description = Description;
	Parms.TimesUsedToUnlockEffectDescription = TimesUsedToUnlockEffectDescription;
	Parms.EffectDescription = EffectDescription;
	Parms.ExtendedDescription = ExtendedDescription;
	Parms.EffectDescriptionWithFamiliarity = EffectDescriptionWithFamiliarity;
	Parms.Local_Familiarity = Local_Familiarity;
	Parms.Local_DescWithFami = Local_DescWithFami;
	Parms.Local_ExtDesc = Local_ExtDesc;
	Parms.Local_EffectDesc = Local_EffectDesc;
	Parms.Local_TimesUsed = Local_TimesUsed;
	Parms.Local_Description = Local_Description;
	Parms.Local_ID = Local_ID;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_CreateExtendedDescription_ReturnValue = CallFunc_CreateExtendedDescription_ReturnValue;
	Parms.CallFunc_CreateExtendedDescription_OutputPin = CallFunc_CreateExtendedDescription_OutputPin;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.CallFunc_CreateItemEffectDescription_ReturnValue = CallFunc_CreateItemEffectDescription_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Familiarity != nullptr)
		*Familiarity = Parms.Familiarity;

	return Parms.ReturnValue;

}


// Function UI_FastTravel.UI_FastTravel_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::NavUp(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavUp");

	Params::UUI_FastTravel_C_NavUp_Params Parms{};

	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.NavSet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_Compendium_Entry_C*>Local_Entries                                                    (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsHovering                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FastTravel_Entry_C*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_FastTravel_Entry_C*      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::NavSet(bool CustomIndex, bool IsHovering, bool SkipSound, int32 Index, const TArray<class UUI_Compendium_Entry_C*>& Local_Entries, bool Local_SkipSound, bool Local_IsHovering, int32 Local_Index, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, class UUI_FastTravel_Entry_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavSet");

	Params::UUI_FastTravel_C_NavSet_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.IsHovering = IsHovering;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Local_Entries = Local_Entries;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_IsHovering = Local_IsHovering;
	Parms.Local_Index = Local_Index;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::NavDown(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavDown");

	Params::UUI_FastTravel_C_NavDown_Params Parms{};

	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.UI_Sound_TabSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::UI_Sound_TabSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "UI_Sound_TabSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::OnButtonHovered(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "OnButtonHovered");

	Params::UUI_FastTravel_C_OnButtonHovered_Params Parms{};

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.OnOpenEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::OnOpenEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "OnOpenEvent");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");

	Params::UUI_FastTravel_C_BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.OnConfirmTravel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::OnConfirmTravel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "OnConfirmTravel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavUp_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavUp_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavUp_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavUp_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavUp_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavUp_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavUp_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavUp_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavUp_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavDown_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavDown_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavDown_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavDown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavDown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavDown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.NavDown_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::NavDown_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "NavDown_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FastTravel_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "PreConstruct");

	Params::UUI_FastTravel_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FastTravel.UI_FastTravel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_FastTravel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_FastTravel.UI_FastTravel_C.ExecuteUbergraph_UI_FastTravel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Index                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue                                (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_UI_HoldTimer_ReturnValue_1                              (NoDestructor, HasGetValueTypeHash)

void UUI_FastTravel_C::ExecuteUbergraph_UI_FastTravel(int32 EntryPoint, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 K2Node_CustomEvent_Index, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FastTravel_C", "ExecuteUbergraph_UI_FastTravel");

	Params::UUI_FastTravel_C_ExecuteUbergraph_UI_FastTravel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_CustomEvent_Index = K2Node_CustomEvent_Index;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UI_HoldTimer_ReturnValue = CallFunc_UI_HoldTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_UI_HoldTimer_ReturnValue_1 = CallFunc_UI_HoldTimer_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


