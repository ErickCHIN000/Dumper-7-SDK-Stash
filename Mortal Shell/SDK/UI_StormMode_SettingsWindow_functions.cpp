#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C
// (None)

class UClass* UUI_StormMode_SettingsWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_SettingsWindow_C");

	return Clss;
}


// UI_StormMode_SettingsWindow_C UI_StormMode_SettingsWindow.Default__UI_StormMode_SettingsWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_SettingsWindow_C* UUI_StormMode_SettingsWindow_C::GetDefaultObj()
{
	static class UUI_StormMode_SettingsWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_SettingsWindow_C*>(UUI_StormMode_SettingsWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetSelectedCharacter");

	Params::UUI_StormMode_SettingsWindow_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetVerticalIndex");

	Params::UUI_StormMode_SettingsWindow_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSettings
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_DurationCallFunc_StormMode_Notify_RunicFam_GetDuration_Duration          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_VisibilityCallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_OverrideCurrentValue_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_OverrideCurrentValue_self_CastInput_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_VisibilityCallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_DurationCallFunc_StormMode_Notify_Instinct_GetDuration_Duration          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_OverrideCurrentValue_self_CastInput_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_OverrideCurrentValue_self_CastInput_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_StormMode_GetDifficulty_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_OverrideCurrentValue_self_CastInput_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::GetSettings(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_Notify_StormMode_Duration CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration, enum class Enum_Notify_StormMode_Visibility CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, enum class Enum_Notify_StormMode_Visibility CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_Notify_StormMode_Duration CallFunc_StormMode_Notify_Instinct_GetDuration_Duration, int32 CallFunc_Conv_ByteToInt_ReturnValue_2, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_2, int32 CallFunc_Conv_ByteToInt_ReturnValue_3, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_StormMode_GetDifficulty_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_OverrideCurrentValue_self_CastInput_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetSettings");

	Params::UUI_StormMode_SettingsWindow_C_GetSettings_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration = CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration;
	Parms.CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility = CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_OverrideCurrentValue_self_CastInput = CallFunc_OverrideCurrentValue_self_CastInput;
	Parms.CallFunc_OverrideCurrentValue_self_CastInput_1 = CallFunc_OverrideCurrentValue_self_CastInput_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility = CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormMode_Notify_Instinct_GetDuration_Duration = CallFunc_StormMode_Notify_Instinct_GetDuration_Duration;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_2 = CallFunc_Conv_ByteToInt_ReturnValue_2;
	Parms.CallFunc_OverrideCurrentValue_self_CastInput_2 = CallFunc_OverrideCurrentValue_self_CastInput_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_3 = CallFunc_Conv_ByteToInt_ReturnValue_3;
	Parms.CallFunc_OverrideCurrentValue_self_CastInput_3 = CallFunc_OverrideCurrentValue_self_CastInput_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_StormMode_GetDifficulty_ReturnValue = CallFunc_StormMode_GetDifficulty_ReturnValue;
	Parms.CallFunc_OverrideCurrentValue_self_CastInput_4 = CallFunc_OverrideCurrentValue_self_CastInput_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ResetSeedButton(bool PlaySound, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ResetSeedButton");

	Params::UUI_StormMode_SettingsWindow_C_ResetSeedButton_Params Parms{};

	Parms.PlaySound = PlaySound;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSeedButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_StormMode_SeedButton_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::GetSeedButtons(TArray<class UUI_StormMode_SeedButton_C*>* Array, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetSeedButtons");

	Params::UUI_StormMode_SettingsWindow_C_GetSeedButtons_Params Parms{};

	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetIsAscended
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Local_Ascended                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsAscendedFromSaveGame_Value                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAscensionName_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_StormMode_SettingsWindow_C::GetIsAscended(int32 Local_Ascended, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_IsAscendedFromSaveGame_Value, class FName CallFunc_GetAscensionName_ID, int32 CallFunc_GetNamedPCInt_Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetIsAscended");

	Params::UUI_StormMode_SettingsWindow_C_GetIsAscended_Params Parms{};

	Parms.Local_Ascended = Local_Ascended;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput = CallFunc_EnableOrDisableButton_self_CastInput;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput_1 = CallFunc_EnableOrDisableButton_self_CastInput_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_IsAscendedFromSaveGame_Value = CallFunc_IsAscendedFromSaveGame_Value;
	Parms.CallFunc_GetAscensionName_ID = CallFunc_GetAscensionName_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.IsAscendedFromSaveGame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetAscensionName_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::IsAscendedFromSaveGame(int32* Value, class FName CallFunc_GetAscensionName_ID, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "IsAscendedFromSaveGame");

	Params::UUI_StormMode_SettingsWindow_C_IsAscendedFromSaveGame_Params Parms{};

	Parms.CallFunc_GetAscensionName_ID = CallFunc_GetAscensionName_ID;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SaveSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGameReference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::GetSaveData(int32 SaveSlot, class UServerSaveGame_C* SaveGameReference, const class FString& SlotName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetSaveData");

	Params::UUI_StormMode_SettingsWindow_C_GetSaveData_Params Parms{};

	Parms.SaveSlot = SaveSlot;
	Parms.SaveGameReference = SaveGameReference;
	Parms.SlotName = SlotName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetParent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_Menu_C*        K2Node_DynamicCast_AsUI_Storm_Mode_Menu                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::GetParentWidget(class UWidget* WidgetParent, class UUI_StormMode_Menu_C* K2Node_DynamicCast_AsUI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetParentWidget");

	Params::UUI_StormMode_SettingsWindow_C_GetParentWidget_Params Parms{};

	Parms.WidgetParent = WidgetParent;
	Parms.K2Node_DynamicCast_AsUI_Storm_Mode_Menu = K2Node_DynamicCast_AsUI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButtons_Value
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ResetSeedButtons_Value(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ResetSeedButtons_Value");

	Params::UUI_StormMode_SettingsWindow_C_ResetSeedButtons_Value_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetCurrentSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Seed_ApplyInitial_Seed                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ResetCurrentSeed(bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Seed_ApplyInitial_Seed, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ResetCurrentSeed");

	Params::UUI_StormMode_SettingsWindow_C_ResetCurrentSeed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Seed_ApplyInitial_Seed = CallFunc_Seed_ApplyInitial_Seed;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ConfirmCustomSeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_DeactivateButton_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ConfirmCustomSeed(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ConfirmCustomSeed");

	Params::UUI_StormMode_SettingsWindow_C_ConfirmCustomSeed_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_DeactivateButton_self_CastInput = CallFunc_DeactivateButton_self_CastInput;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedButtons_Highlight
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ResetSeedButtons_Highlight(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ResetSeedButtons_Highlight");

	Params::UUI_StormMode_SettingsWindow_C_ResetSeedButtons_Highlight_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.Sound_Confirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Min                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Max                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::Sound_Confirm(float Min, float Max, float VolumeMultiplier, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "Sound_Confirm");

	Params::UUI_StormMode_SettingsWindow_C_Sound_Confirm_Params Parms{};

	Parms.Min = Min;
	Parms.Max = Max;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetCurrentSeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::GetCurrentSeed(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetCurrentSeed");

	Params::UUI_StormMode_SettingsWindow_C_GetCurrentSeed_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ResetSeedString
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::ResetSeedString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ResetSeedString");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ApplyCustomSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ApplyCustomSeed(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ApplyCustomSeed");

	Params::UUI_StormMode_SettingsWindow_C_ApplyCustomSeed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavUpDown
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array_1                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array_2                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array_3                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsButtonEnabled_Enabled_                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::NavUpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUserWidget* Widget, int32 Index, bool Local_UseWidget, bool Local_CustomIndex, bool Local_SkipIndexCheck, bool Local_SkipSound, class UUserWidget* Local_Button, class UUserWidget* Local_Widget, int32 Local_Delta, int32 Local_IndexSelected, int32 Temp_int_Array_Index_Variable, TArray<class UUserWidget*>& CallFunc_GetButtons_Array, TArray<class UUserWidget*>& CallFunc_GetButtons_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Clamp_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetButtons_Array_2, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetButtons_Array_3, int32 CallFunc_Array_Find_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_Array_Get_Item_1, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsButtonEnabled_Enabled_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavUpDown");

	Params::UUI_StormMode_SettingsWindow_C_NavUpDown_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Button = Local_Button;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_GetButtons_Array_1 = CallFunc_GetButtons_Array_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_GetButtons_Array_2 = CallFunc_GetButtons_Array_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetButtons_Array_3 = CallFunc_GetButtons_Array_3;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsButtonEnabled_Enabled_ = CallFunc_IsButtonEnabled_Enabled_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.GetButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUserWidget*>         Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::GetButtons(TArray<class UUserWidget*>* Array, TArray<class UUserWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "GetButtons");

	Params::UUI_StormMode_SettingsWindow_C_GetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSeedString
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_StormMode_SeedButton_C*>CallFunc_GetSeedButtons_Array                                    (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_StormMode_SeedButton_C*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTextAsIntString_Number                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::SetSeedString(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Conv_StringToInt_ReturnValue, const class FString& CallFunc_GetTextAsIntString_Number, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "SetSeedString");

	Params::UUI_StormMode_SettingsWindow_C_SetSeedString_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSeedButtons_Array = CallFunc_GetSeedButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_GetTextAsIntString_Number = CallFunc_GetTextAsIntString_Number;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_SettingsWindow_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_SettingsWindow_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnCharacterSelected");

	Params::UUI_StormMode_SettingsWindow_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnSettingConfirmed");

	Params::UUI_StormMode_SettingsWindow_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnWeaponSelected");

	Params::UUI_StormMode_SettingsWindow_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_SettingsWindow_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnRiposteSelected");

	Params::UUI_StormMode_SettingsWindow_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "SetSaveGameRef");

	Params::UUI_StormMode_SettingsWindow_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "SetSeedManager");

	Params::UUI_StormMode_SettingsWindow_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "SetParentWidget");

	Params::UUI_StormMode_SettingsWindow_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_SettingsWindow_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature");

	Params::UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Difficulty_K2Node_ComponentBoundEvent_0_OnSettingChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature");

	Params::UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_Instinct_Duration_K2Node_ComponentBoundEvent_1_OnSettingChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature");

	Params::UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_Instinct_Visibility_K2Node_ComponentBoundEvent_2_OnSettingChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature");

	Params::UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_RunFam_Duration_K2Node_ComponentBoundEvent_3_OnSettingChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature");

	Params::UUI_StormMode_SettingsWindow_C_BndEvt__UI_Button_Notify_RunFam_Visibility_K2Node_ComponentBoundEvent_4_OnSettingChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_SettingsWindow_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "OnButtonHovered");

	Params::UUI_StormMode_SettingsWindow_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_SettingsWindow.UI_StormMode_SettingsWindow_C.ExecuteUbergraph_UI_StormMode_SettingsWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName                                            (ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_Event_MapStateSaveGame                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName_MapState                                   (ZeroConstructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           K2Node_Event_SeedManager                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsAscended_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_NavHorizontal_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array                                        (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array_1                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_NavHorizontal_self_CastInput_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_NavVertical_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_NavVertical_self_CastInput_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_8                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_9                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         CallFunc_GetButtons_Array_2                                      (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_SettingsWindow_C::ExecuteUbergraph_UI_StormMode_SettingsWindow(int32 EntryPoint, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, bool K2Node_SwitchEnum_CmpSuccess_1, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, class ABP_SeedManager_C* K2Node_Event_SeedManager, class UWidget* K2Node_Event_Widget_1, bool CallFunc_GetIsAscended_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavHorizontal_self_CastInput, TArray<class UUserWidget*>& CallFunc_GetButtons_Array, TArray<class UUserWidget*>& CallFunc_GetButtons_Array_1, class UUserWidget* CallFunc_Array_Get_Item, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess, class UUserWidget* CallFunc_Array_Get_Item_1, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_ComponentBoundEvent_NewValue_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavHorizontal_self_CastInput_1, int32 K2Node_ComponentBoundEvent_NewValue_3, int32 K2Node_ComponentBoundEvent_NewValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 K2Node_ComponentBoundEvent_NewValue_1, int32 K2Node_ComponentBoundEvent_NewValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_2, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavVertical_self_CastInput, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_3, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_4, bool K2Node_DynamicCast_bSuccess_6, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_4, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_5, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_NavVertical_self_CastInput_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_5, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_6, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_6, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_7, bool K2Node_DynamicCast_bSuccess_9, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_7, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_8, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_8, bool K2Node_DynamicCast_bSuccess_10, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_9, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_IsValid_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_4, class UUserWidget* K2Node_Event_Widget, bool K2Node_SwitchEnum_CmpSuccess_5, TArray<class UUserWidget*>& CallFunc_GetButtons_Array_2, class UUserWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2, bool K2Node_DynamicCast_bSuccess_12, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_SettingsWindow_C", "ExecuteUbergraph_UI_StormMode_SettingsWindow");

	Params::UUI_StormMode_SettingsWindow_C_ExecuteUbergraph_UI_StormMode_SettingsWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;
	Parms.K2Node_Event_Weapon_1 = K2Node_Event_Weapon_1;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Riposte_1 = K2Node_Event_Riposte_1;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_SlotName = K2Node_Event_SlotName;
	Parms.K2Node_Event_MapStateSaveGame = K2Node_Event_MapStateSaveGame;
	Parms.K2Node_Event_SlotName_MapState = K2Node_Event_SlotName_MapState;
	Parms.K2Node_Event_SeedManager = K2Node_Event_SeedManager;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.CallFunc_GetIsAscended_ReturnValue = CallFunc_GetIsAscended_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_3 = K2Node_SwitchEnum_CmpSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NavHorizontal_self_CastInput = CallFunc_NavHorizontal_self_CastInput;
	Parms.CallFunc_GetButtons_Array = CallFunc_GetButtons_Array;
	Parms.CallFunc_GetButtons_Array_1 = CallFunc_GetButtons_Array_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_4 = K2Node_ComponentBoundEvent_NewValue_4;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_NavHorizontal_self_CastInput_1 = CallFunc_NavHorizontal_self_CastInput_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_3 = K2Node_ComponentBoundEvent_NewValue_3;
	Parms.K2Node_ComponentBoundEvent_NewValue_2 = K2Node_ComponentBoundEvent_NewValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_1 = K2Node_ComponentBoundEvent_NewValue_1;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_2 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_NavVertical_self_CastInput = CallFunc_NavVertical_self_CastInput;
	Parms.CallFunc_GetGameInstance_ReturnValue_2 = CallFunc_GetGameInstance_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue_3 = CallFunc_GetGameInstance_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_3 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_4 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_GetGameInstance_ReturnValue_4 = CallFunc_GetGameInstance_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_5 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_NavVertical_self_CastInput_1 = CallFunc_NavVertical_self_CastInput_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_5 = CallFunc_GetGameInstance_ReturnValue_5;
	Parms.CallFunc_GetGameInstance_ReturnValue_6 = CallFunc_GetGameInstance_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_6 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_7 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_7;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_GetGameInstance_ReturnValue_7 = CallFunc_GetGameInstance_ReturnValue_7;
	Parms.CallFunc_GetGameInstance_ReturnValue_8 = CallFunc_GetGameInstance_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_8 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_8;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_9 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_9;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_SwitchEnum_CmpSuccess_4 = K2Node_SwitchEnum_CmpSuccess_4;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_SwitchEnum_CmpSuccess_5 = K2Node_SwitchEnum_CmpSuccess_5;
	Parms.CallFunc_GetButtons_Array_2 = CallFunc_GetButtons_Array_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


