#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Runes_SelectWindow.UI_Runes_SelectWindow_C
// (None)

class UClass* UUI_Runes_SelectWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Runes_SelectWindow_C");

	return Clss;
}


// UI_Runes_SelectWindow_C UI_Runes_SelectWindow.Default__UI_Runes_SelectWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Runes_SelectWindow_C* UUI_Runes_SelectWindow_C::GetDefaultObj()
{
	static class UUI_Runes_SelectWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Runes_SelectWindow_C*>(UUI_Runes_SelectWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetSisterDialogue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDHDialogueLine>     ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDHDialogueLine             CallFunc_GetDialogueToTrigger_Output                             (None)
// TArray<struct FDHDialogueLine>     K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)

TArray<struct FDHDialogueLine> UUI_Runes_SelectWindow_C::GetSisterDialogue(bool Temp_bool_Variable, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array, bool CallFunc_BooleanOR_ReturnValue, const struct FDHDialogueLine& CallFunc_GetDialogueToTrigger_Output, TArray<struct FDHDialogueLine>& K2Node_MakeArray_Array_1, TArray<struct FDHDialogueLine>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GetSisterDialogue");

	Params::UUI_Runes_SelectWindow_C_GetSisterDialogue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetDialogueToTrigger_Output = CallFunc_GetDialogueToTrigger_Output;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HasDarkShellsDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BossDial_DarkShells_PCIntName                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_DarkShells_PCIntName_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_DarkShells_PCIntName_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Runes_SelectWindow_C::HasDarkShellsDialogue_(class FName CallFunc_BossDial_DarkShells_PCIntName, class FName CallFunc_BossDial_DarkShells_PCIntName_1, class FName CallFunc_BossDial_DarkShells_PCIntName_2, int32 CallFunc_GetNamedPCInt_Value, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "HasDarkShellsDialogue?");

	Params::UUI_Runes_SelectWindow_C_HasDarkShellsDialogue__Params Parms{};

	Parms.CallFunc_BossDial_DarkShells_PCIntName = CallFunc_BossDial_DarkShells_PCIntName;
	Parms.CallFunc_BossDial_DarkShells_PCIntName_1 = CallFunc_BossDial_DarkShells_PCIntName_1;
	Parms.CallFunc_BossDial_DarkShells_PCIntName_2 = CallFunc_BossDial_DarkShells_PCIntName_2;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.IncrementSeedProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_SeedProgressID_ID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::IncrementSeedProgress(class FName CallFunc_SeedProgressID_ID, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "IncrementSeedProgress");

	Params::UUI_Runes_SelectWindow_C_IncrementSeedProgress_Params Parms{};

	Parms.CallFunc_SeedProgressID_ID = CallFunc_SeedProgressID_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HandleSeed
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_SeedProgressID_ID                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::HandleSeed(class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, class FName Temp_name_Variable_4, class FName Temp_name_Variable_5, class FName Temp_name_Variable_6, int32 Temp_int_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_SeedProgressID_ID, int32 CallFunc_GetNamedPCInt_Value, class FName K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "HandleSeed");

	Params::UUI_Runes_SelectWindow_C_HandleSeed_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_name_Variable_4 = Temp_name_Variable_4;
	Parms.Temp_name_Variable_5 = Temp_name_Variable_5;
	Parms.Temp_name_Variable_6 = Temp_name_Variable_6;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_SeedProgressID_ID = CallFunc_SeedProgressID_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HasBossDialogue?
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BossDial_Cathedral_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_Cathedral_PCIntName_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_Cathedral_PCIntName_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BossDial_Crypt_PCIntName                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_Crypt_PCIntName_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_Crypt_PCIntName_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BossDial_Fire_PCIntName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_BossDial_Fire_PCIntName_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BossDial_Fire_PCIntName_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Runes_SelectWindow_C::HasBossDialogue_(class FName CallFunc_BossDial_Cathedral_PCIntName, class FName CallFunc_BossDial_Cathedral_PCIntName_1, class FName CallFunc_BossDial_Cathedral_PCIntName_2, float CallFunc_RandomFloat_ReturnValue, int32 CallFunc_GetNamedPCInt_Value, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class FName CallFunc_BossDial_Crypt_PCIntName, class FName CallFunc_BossDial_Crypt_PCIntName_1, class FName CallFunc_BossDial_Crypt_PCIntName_2, int32 CallFunc_GetNamedPCInt_Value_1, bool K2Node_SwitchInteger_CmpSuccess_1, class FName CallFunc_BossDial_Fire_PCIntName, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName CallFunc_BossDial_Fire_PCIntName_1, class FName CallFunc_BossDial_Fire_PCIntName_2, int32 CallFunc_GetNamedPCInt_Value_2, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "HasBossDialogue?");

	Params::UUI_Runes_SelectWindow_C_HasBossDialogue__Params Parms{};

	Parms.CallFunc_BossDial_Cathedral_PCIntName = CallFunc_BossDial_Cathedral_PCIntName;
	Parms.CallFunc_BossDial_Cathedral_PCIntName_1 = CallFunc_BossDial_Cathedral_PCIntName_1;
	Parms.CallFunc_BossDial_Cathedral_PCIntName_2 = CallFunc_BossDial_Cathedral_PCIntName_2;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_BossDial_Crypt_PCIntName = CallFunc_BossDial_Crypt_PCIntName;
	Parms.CallFunc_BossDial_Crypt_PCIntName_1 = CallFunc_BossDial_Crypt_PCIntName_1;
	Parms.CallFunc_BossDial_Crypt_PCIntName_2 = CallFunc_BossDial_Crypt_PCIntName_2;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_BossDial_Fire_PCIntName = CallFunc_BossDial_Fire_PCIntName;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon = CallFunc_0_Base_GetCurrentWeapon_CurrentWeapon;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BossDial_Fire_PCIntName_1 = CallFunc_BossDial_Fire_PCIntName_1;
	Parms.CallFunc_BossDial_Fire_PCIntName_2 = CallFunc_BossDial_Fire_PCIntName_2;
	Parms.CallFunc_GetNamedPCInt_Value_2 = CallFunc_GetNamedPCInt_Value_2;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetBossDialogueToTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDHDialogueLine             Output                                                           (Parm, OutParm)

void UUI_Runes_SelectWindow_C::GetBossDialogueToTrigger(struct FDHDialogueLine* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GetBossDialogueToTrigger");

	Params::UUI_Runes_SelectWindow_C_GetBossDialogueToTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.IncrementGoldenPathDialogueIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::IncrementGoldenPathDialogueIndex(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FName CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_GoldenPathDialogueCounterName_PCIntName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "IncrementGoldenPathDialogueIndex");

	Params::UUI_Runes_SelectWindow_C_IncrementGoldenPathDialogueIndex_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName = CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName_1 = CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueChance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_Runes_SelectWindow_C::GetDialogueChance(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GetDialogueChance");

	Params::UUI_Runes_SelectWindow_C_GetDialogueChance_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueCurrentIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::GetDialogueCurrentIndex(class FName CallFunc_GoldenPathDialogueCounterName_PCIntName, class FName CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetNamedPCInt_Value_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GetDialogueCurrentIndex");

	Params::UUI_Runes_SelectWindow_C_GetDialogueCurrentIndex_Params Parms{};

	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;
	Parms.CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName = CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_GetNamedPCInt_Value_1 = CallFunc_GetNamedPCInt_Value_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GetDialogueToTrigger
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDHDialogueLine             Output                                                           (Parm, OutParm)

void UUI_Runes_SelectWindow_C::GetDialogueToTrigger(struct FDHDialogueLine* Output)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GetDialogueToTrigger");

	Params::UUI_Runes_SelectWindow_C_GetDialogueToTrigger_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = std::move(Parms.Output);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.ShowUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::ShowUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "ShowUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HideUpgrades
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::HideUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "HideUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.PopulateWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_StormMode_C*     CallFunc_GetControllerAsStormModePC_StormModePC                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::PopulateWindow(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_StormMode_C* CallFunc_GetControllerAsStormModePC_StormModePC, bool CallFunc_IsInputEnabled_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "PopulateWindow");

	Params::UUI_Runes_SelectWindow_C_PopulateWindow_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetControllerAsStormModePC_StormModePC = CallFunc_GetControllerAsStormModePC_StormModePC;
	Parms.CallFunc_IsInputEnabled_ReturnValue = CallFunc_IsInputEnabled_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Sound_NewInstinct
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Sound_NewInstinct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Sound_NewInstinct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Sound_BackgroundMusic_FadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Sound_BackgroundMusic_FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Sound_BackgroundMusic_FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Sound_BackgroundMusic_FadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::Sound_BackgroundMusic_FadeIn(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Sound_BackgroundMusic_FadeIn");

	Params::UUI_Runes_SelectWindow_C_Sound_BackgroundMusic_FadeIn_Params Parms{};

	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Get_Text_BonusHeader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// TArray<class FName>                CallFunc_GetSpecialRunesIDs_IDs                                  (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_Runes_SelectWindow_C::Get_Text_BonusHeader(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, TArray<class FName>& CallFunc_GetSpecialRunesIDs_IDs, bool CallFunc_Array_Contains_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Get_Text_BonusHeader");

	Params::UUI_Runes_SelectWindow_C_Get_Text_BonusHeader_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetSpecialRunesIDs_IDs = CallFunc_GetSpecialRunesIDs_IDs;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Get_Text_TopHeader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// TArray<class FName>                CallFunc_GetOpenAreasRuneIDs_IDs                                 (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UUI_Runes_SelectWindow_C::Get_Text_TopHeader(bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, TArray<class FName>& CallFunc_GetOpenAreasRuneIDs_IDs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Get_Text_TopHeader");

	Params::UUI_Runes_SelectWindow_C_Get_Text_TopHeader_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_GetOpenAreasRuneIDs_IDs = CallFunc_GetOpenAreasRuneIDs_IDs;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue_1 = CallFunc_Array_Contains_ReturnValue_1;
	Parms.CallFunc_Array_Contains_ReturnValue_2 = CallFunc_Array_Contains_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.CallOnRuneSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerTemp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Rune_Category_RandomizerK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::CallOnRuneSelected(enum class Enum_Rune_Category Temp_byte_Variable, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_1, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_2, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_3, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_4, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_5, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_6, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_7, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_8, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_9, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_10, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_11, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_12, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_13, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_14, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_15, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_16, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_17, enum class Enum_Rune_Category_Randomizer Temp_byte_Variable_18, bool CallFunc_Not_PreBool_ReturnValue, enum class Enum_Rune_Category_Randomizer K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "CallOnRuneSelected");

	Params::UUI_Runes_SelectWindow_C_CallOnRuneSelected_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.GiveBonusRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_Character_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Character                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Runes_SelectWindow_C::GiveBonusRune(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IBPI_StormMode_Character_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Character, bool K2Node_DynamicCast_bSuccess_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "GiveBonusRune");

	Params::UUI_Runes_SelectWindow_C_GiveBonusRune_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Character = K2Node_DynamicCast_AsBPI_Storm_Mode_Character;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.HandleBonusRune
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::HandleBonusRune()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "HandleBonusRune");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Navigation_GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_Runes_SelectWindow_C::Navigation_GetIndex(int32 SelectedIndex, int32 Delta, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Navigation_GetIndex");

	Params::UUI_Runes_SelectWindow_C_Navigation_GetIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Navigation_UpDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Rune_Selected_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Rune_Selected_C*         Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_IndexSelected                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Navigation_GetIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Rune_Selected_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Rune_Selected_C*         CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Runes_SelectWindow_C::Navigation_UpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUI_Rune_Selected_C* Widget, int32 Index, class UUI_Rune_Selected_C* Local_Widget, bool Local_UseWidget, bool Local_CustomIndex, bool Local_SkipIndexCheck, bool Local_SkipSound, int32 Local_Delta, int32 Local_IndexSelected, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, class UUI_Rune_Selected_C* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, class UUI_Rune_Selected_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Navigation_UpDown");

	Params::UUI_Runes_SelectWindow_C_Navigation_UpDown_Params Parms{};

	Parms.UseWidget = UseWidget;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Delta = Delta;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.Local_Widget = Local_Widget;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_IndexSelected = Local_IndexSelected;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Navigation_GetIndex_ReturnValue = CallFunc_Navigation_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.SetRuneButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Rune_Selected_C*         K2Node_DynamicCast_AsUI_Rune_Selected                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::SetRuneButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_Rune_Selected_C* K2Node_DynamicCast_AsUI_Rune_Selected, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "SetRuneButtons");

	Params::UUI_Runes_SelectWindow_C_SetRuneButtons_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Rune_Selected = K2Node_DynamicCast_AsUI_Rune_Selected;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavConfirm_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Runes_SelectWindow_C::NavConfirm_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "NavConfirm_Listen");

	Params::UUI_Runes_SelectWindow_C_NavConfirm_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Runes_SelectWindow_C::NavUp_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "NavUp_Listen");

	Params::UUI_Runes_SelectWindow_C_NavUp_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UUI_Runes_SelectWindow_C::NavDown_Listen(FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "NavDown_Listen");

	Params::UUI_Runes_SelectWindow_C_NavDown_Listen_Params Parms{};

	Parms.Event = Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Down_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Down_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Down_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Up_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Up_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Up_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Confirm_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Confirm_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Confirm_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.Nav_Confirm_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::Nav_Confirm_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "Nav_Confirm_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Rune_Selected_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::OnButtonHovered(class UUI_Rune_Selected_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnButtonHovered");

	Params::UUI_Runes_SelectWindow_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnButtonClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUI_Rune_Selected_C*         Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::OnButtonClicked(class UUI_Rune_Selected_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnButtonClicked");

	Params::UUI_Runes_SelectWindow_C_OnButtonClicked_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnFadeOutEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::OnFadeOutEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnFadeOutEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.On_Rune_Selected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::On_Rune_Selected(const struct FStruct_Rune& Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "On_Rune_Selected");

	Params::UUI_Runes_SelectWindow_C_On_Rune_Selected_Params Parms{};

	Parms.Rune = Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnShowUpgradesCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::OnShowUpgradesCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnShowUpgradesCompleted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.CreateDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::CreateDialogue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "CreateDialogue");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.ShowUpgradesAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::ShowUpgradesAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "ShowUpgradesAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.NavBack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_0_OnDialogueCompleted__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_0_OnDialogueCompleted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_0_OnDialogueCompleted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.CloseWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::CloseWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "CloseWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature");

	Params::UUI_Runes_SelectWindow_C_BndEvt__UI_ControllerButton_Continue_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_2_OnWantsToSkip__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Runes_SelectWindow_C::BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_2_OnWantsToSkip__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "BndEvt__UI_Dialogue_VoiceOver_K2Node_ComponentBoundEvent_2_OnWantsToSkip__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.ExecuteUbergraph_UI_Runes_SelectWindow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormMode_DebugDialogues_Debug_                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDialogueChance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetDialogueChance_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasBossDialogue__ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_2             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasDarkShellsDialogue__ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_Rune_Selected_C*         K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_Rune_Selected_C*         K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_3             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     CallFunc_GetControllerAsStormModePC_StormModePC                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_CustomEvent_Rune                                          (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UUI_Rune_Selected_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_4             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_5             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDHDialogueLine>     CallFunc_GetSisterDialogue_ReturnValue                           (ReferenceParm, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::ExecuteUbergraph_UI_Runes_SelectWindow(int32 EntryPoint, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_DebugDialogues_Debug_, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value, float CallFunc_GetDialogueChance_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetDialogueChance_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NotEqual_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_1, bool CallFunc_HasBossDialogue__ReturnValue, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_2, bool CallFunc_HasDarkShellsDialogue__ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UUI_Rune_Selected_C* K2Node_CustomEvent_Widget_1, class UUI_Rune_Selected_C* K2Node_CustomEvent_Widget, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_3, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AGameplayPC_StormMode_C* CallFunc_GetControllerAsStormModePC_StormModePC, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_SetGamePaused_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FStruct_Rune& K2Node_CustomEvent_Rune, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUI_Rune_Selected_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_4, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_5, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, TArray<struct FDHDialogueLine>& CallFunc_GetSisterDialogue_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "ExecuteUbergraph_UI_Runes_SelectWindow");

	Params::UUI_Runes_SelectWindow_C_ExecuteUbergraph_UI_Runes_SelectWindow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_DebugDialogues_Debug_ = CallFunc_StormMode_DebugDialogues_Debug_;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value;
	Parms.CallFunc_GetDialogueChance_ReturnValue = CallFunc_GetDialogueChance_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDialogueChance_ReturnValue_1 = CallFunc_GetDialogueChance_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_1 = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_1;
	Parms.CallFunc_HasBossDialogue__ReturnValue = CallFunc_HasBossDialogue__ReturnValue;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_2 = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_2;
	Parms.CallFunc_HasDarkShellsDialogue__ReturnValue = CallFunc_HasDarkShellsDialogue__ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_3 = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_3;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetControllerAsStormModePC_StormModePC = CallFunc_GetControllerAsStormModePC_StormModePC;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_Rune = K2Node_CustomEvent_Rune;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_4 = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_4;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_5 = CallFunc_GetCurrentValue_IsVoiceOverDialogue_Value_5;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_GetSisterDialogue_ReturnValue = CallFunc_GetSisterDialogue_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnSeedFound__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SeedID                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::OnSeedFound__DelegateSignature(class FName SeedID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnSeedFound__DelegateSignature");

	Params::UUI_Runes_SelectWindow_C_OnSeedFound__DelegateSignature_Params Parms{};

	Parms.SeedID = SeedID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Runes_SelectWindow.UI_Runes_SelectWindow_C.OnRuneSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Category_RandomizerCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Runes_SelectWindow_C::OnRuneSelected__DelegateSignature(enum class Enum_Rune_Category_Randomizer Category, class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Runes_SelectWindow_C", "OnRuneSelected__DelegateSignature");

	Params::UUI_Runes_SelectWindow_C_OnRuneSelected__DelegateSignature_Params Parms{};

	Parms.Category = Category;
	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


