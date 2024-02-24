#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C
// (Actor)

class UClass* AConfigurable_Glowing_Pickup_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Configurable_Glowing_Pickup_StormMode_C");

	return Clss;
}


// Configurable_Glowing_Pickup_StormMode_C Configurable_Glowing_Pickup_StormMode.Default__Configurable_Glowing_Pickup_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AConfigurable_Glowing_Pickup_StormMode_C* AConfigurable_Glowing_Pickup_StormMode_C::GetDefaultObj()
{
	static class AConfigurable_Glowing_Pickup_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AConfigurable_Glowing_Pickup_StormMode_C*>(AConfigurable_Glowing_Pickup_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomDarkFormUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (Parm, OutParm, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::AskRandomDarkFormUpgrade(struct FStruct_Rune* Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "AskRandomDarkFormUpgrade");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_AskRandomDarkFormUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Rune != nullptr)
		*Rune = std::move(Parms.Rune);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomWeaponUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Tier          Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::AskRandomWeaponUpgrade(enum class Enum_Rune_Tier Tier, struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "AskRandomWeaponUpgrade");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_AskRandomWeaponUpgrade_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AskRandomUpgrade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Upgrade                                                          (Parm, OutParm, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::AskRandomUpgrade(struct FStruct_Rune* Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "AskRandomUpgrade");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_AskRandomUpgrade_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Upgrade != nullptr)
		*Upgrade = std::move(Parms.Upgrade);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.CheckForPermanentUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Local_SelectedShell                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_HasSelectedShell                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_MakeLiteralName_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPermanentUpgradeRankLevel_Level                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::CheckForPermanentUpgrades(enum class EArmorTypes Local_SelectedShell, bool Local_HasSelectedShell, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float Temp_float_Variable_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_Not_PreBool_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool Temp_bool_Variable_2, class FName K2Node_Select_Default, int32 CallFunc_GetPermanentUpgradeRankLevel_Level, float K2Node_Select_Default_1, float CallFunc_Multiply_IntFloat_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "CheckForPermanentUpgrades");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_CheckForPermanentUpgrades_Params Parms{};

	Parms.Local_SelectedShell = Local_SelectedShell;
	Parms.Local_HasSelectedShell = Local_HasSelectedShell;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.CallFunc_MakeLiteralName_ReturnValue_1 = CallFunc_MakeLiteralName_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetPermanentUpgradeRankLevel_Level = CallFunc_GetPermanentUpgradeRankLevel_Level;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetUnidentifiedText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        UnidentifiedText                                                 (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AConfigurable_Glowing_Pickup_StormMode_C::GetUnidentifiedText(class FText* UnidentifiedText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "GetUnidentifiedText");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_GetUnidentifiedText_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (UnidentifiedText != nullptr)
		*UnidentifiedText = Parms.UnidentifiedText;

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetUseActionText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionText                                                       (Parm, OutParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void AConfigurable_Glowing_Pickup_StormMode_C::GetUseActionText(class FText* ActionText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "GetUseActionText");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_GetUseActionText_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ActionText != nullptr)
		*ActionText = Parms.ActionText;

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.AddRandomItemToInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           PC                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Local_Success                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               Local_GameplayPC                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Local_Controller                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::AddRandomItemToInventory(class APlayerController* PC, bool* Success, int32 Local_Slot, const struct FInventoryItem& Local_Item, bool Local_Success, class AGameplayPC_C* Local_GameplayPC, class APlayerController* Local_Controller, bool CallFunc_HasAuthority_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "AddRandomItemToInventory");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_AddRandomItemToInventory_Params Parms{};

	Parms.PC = PC;
	Parms.Local_Slot = Local_Slot;
	Parms.Local_Item = Local_Item;
	Parms.Local_Success = Local_Success;
	Parms.Local_GameplayPC = Local_GameplayPC;
	Parms.Local_Controller = Local_Controller;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.OnActorUsed
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_ItemIndex                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           Local_Controller                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetInventoryItemSimple_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AddRandomItemToInventory_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<enum class Enum_StormModeItemList>CallFunc_Map_Keys_Keys                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<float>                      CallFunc_Map_Values_Values                                       (ReferenceParm, HasGetValueTypeHash)
// enum class Enum_StormModeItemList  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// TArray<float>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Randomizer_FloatToInt_Result_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConfigurable_Glowing_Pickup_StormMode_C::OnActorUsed(class APlayerController* Controller, bool* Success, int32 Local_ItemIndex, class APlayerController* Local_Controller, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_GetInventoryItemSimple_Success, bool CallFunc_AddRandomItemToInventory_Success, TArray<enum class Enum_StormModeItemList>& CallFunc_Map_Keys_Keys, TArray<float>& CallFunc_Map_Values_Values, enum class Enum_StormModeItemList CallFunc_Array_Get_Item, int32 CallFunc_Randomizer_FloatToInt_Result, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, TArray<float>& K2Node_MakeArray_Array, int32 CallFunc_Randomizer_FloatToInt_Result_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "OnActorUsed");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_OnActorUsed_Params Parms{};

	Parms.Controller = Controller;
	Parms.Local_ItemIndex = Local_ItemIndex;
	Parms.Local_Controller = Local_Controller;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetInventoryItemSimple_Success = CallFunc_GetInventoryItemSimple_Success;
	Parms.CallFunc_AddRandomItemToInventory_Success = CallFunc_AddRandomItemToInventory_Success;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Randomizer_FloatToInt_Result = CallFunc_Randomizer_FloatToInt_Result;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Randomizer_FloatToInt_Result_1 = CallFunc_Randomizer_FloatToInt_Result_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.GetInventoryItemSimple
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConfigurable_Glowing_Pickup_StormMode_C::GetInventoryItemSimple(bool* Success, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "GetInventoryItemSimple");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_GetInventoryItemSimple_Params Parms{};

	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.RemoveObject
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::RemoveObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "RemoveObject");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.SetPillarType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_PillarType         Type                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::SetPillarType(enum class Enum_PillarType Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "SetPillarType");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_SetPillarType_Params Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.ReRandomizeEnemy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewSeed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::ReRandomizeEnemy(int32 NewSeed, float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "ReRandomizeEnemy");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_ReRandomizeEnemy_Params Parms{};

	Parms.NewSeed = NewSeed;
	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.PickupItem_Respawn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::PickupItem_Respawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "PickupItem_Respawn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.InitiliazeSeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialSeed                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::InitiliazeSeed(int32 SeedID, int32 InitialSeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "InitiliazeSeed");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_InitiliazeSeed_Params Parms{};

	Parms.SeedID = SeedID;
	Parms.InitialSeed = InitialSeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.OnItemPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::OnItemPickedUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "OnItemPickedUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_0_OnUpgradesSelected__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.SetObjectMainChance%
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Rune_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Item_Chance                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AConfigurable_Glowing_Pickup_StormMode_C::SetObjectMainChance_(float Rune_Chance, float Item_Chance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "SetObjectMainChance%");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_SetObjectMainChance__Params Parms{};

	Parms.Rune_Chance = Rune_Chance;
	Parms.Item_Chance = Item_Chance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_1_OnSeedInitialized__DelegateSignature
// (BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_1_OnSeedInitialized__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "BndEvt__RuneRandomizerComponent_K2Node_ComponentBoundEvent_1_OnSeedInitialized__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.SetObjectAsTaken
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AConfigurable_Glowing_Pickup_StormMode_C::SetObjectAsTaken()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "SetObjectAsTaken");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Configurable_Glowing_Pickup_StormMode.Configurable_Glowing_Pickup_StormMode_C.ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_PillarType         K2Node_Event_Type                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewSeed                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_SeedID                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_InitialSeed                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMyNameInChangedSet_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Category_RandomizerK2Node_ComponentBoundEvent_Category                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ID                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Rune_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Item_Chance                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AConfigurable_Glowing_Pickup_StormMode_C::ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_PillarType K2Node_Event_Type, int32 K2Node_Event_NewSeed, float K2Node_Event_Delay, int32 K2Node_Event_SeedID, int32 K2Node_Event_InitialSeed, bool CallFunc_IsMyNameInChangedSet_ReturnValue, enum class Enum_Rune_Category_Randomizer K2Node_ComponentBoundEvent_Category, class FName K2Node_ComponentBoundEvent_ID, float K2Node_Event_Rune_Chance, float K2Node_Event_Item_Chance, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Configurable_Glowing_Pickup_StormMode_C", "ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode");

	Params::AConfigurable_Glowing_Pickup_StormMode_C_ExecuteUbergraph_Configurable_Glowing_Pickup_StormMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Type = K2Node_Event_Type;
	Parms.K2Node_Event_NewSeed = K2Node_Event_NewSeed;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.K2Node_Event_SeedID = K2Node_Event_SeedID;
	Parms.K2Node_Event_InitialSeed = K2Node_Event_InitialSeed;
	Parms.CallFunc_IsMyNameInChangedSet_ReturnValue = CallFunc_IsMyNameInChangedSet_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Category = K2Node_ComponentBoundEvent_Category;
	Parms.K2Node_ComponentBoundEvent_ID = K2Node_ComponentBoundEvent_ID;
	Parms.K2Node_Event_Rune_Chance = K2Node_Event_Rune_Chance;
	Parms.K2Node_Event_Item_Chance = K2Node_Event_Item_Chance;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


