#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormModeDebug.UI_StormModeDebug_C
// (None)

class UClass* UUI_StormModeDebug_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormModeDebug_C");

	return Clss;
}


// UI_StormModeDebug_C UI_StormModeDebug.Default__UI_StormModeDebug_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormModeDebug_C* UUI_StormModeDebug_C::GetDefaultObj()
{
	static class UUI_StormModeDebug_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormModeDebug_C*>(UUI_StormModeDebug_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_25
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               CallFunc_IsInputEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_25(bool CallFunc_IsInputEnabled_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_25");

	Params::UUI_StormModeDebug_C_GetText_25_Params Parms{};

	Parms.CallFunc_IsInputEnabled_ReturnValue = CallFunc_IsInputEnabled_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_24
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_StormMode_GetEquippedLute_Lute                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_24(TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_StormMode_GetEquippedLute_Lute, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_24");

	Params::UUI_StormModeDebug_C_GetText_24_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetEquippedLute_Lute = CallFunc_StormMode_GetEquippedLute_Lute;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_23
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_23(int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_23");

	Params::UUI_StormModeDebug_C_GetText_23_Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_22
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_22(class FName CallFunc_GoldenPathDialogueCounterName_PCIntName, int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_22");

	Params::UUI_StormModeDebug_C_GetText_22_Params Parms{};

	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_21
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_21(class FName CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName, int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_21");

	Params::UUI_StormModeDebug_C_GetText_21_Params Parms{};

	Parms.CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName = CallFunc_Next_Golden_Path_Dialogue_Index_Name_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_20
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FName                        CallFunc_GetAscensionName_ID                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_StormModeDebug_C::GetText_20(int32 Temp_int_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FName CallFunc_GetAscensionName_ID, int32 CallFunc_GetNamedPCInt_Value, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_20");

	Params::UUI_StormModeDebug_C_GetText_20_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetAscensionName_ID = CallFunc_GetAscensionName_ID;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_19
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FName                        CallFunc_SeedDial_NextIndex_PCIntName                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_19(class FName CallFunc_SeedDial_NextIndex_PCIntName, int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_19");

	Params::UUI_StormModeDebug_C_GetText_19_Params Parms{};

	Parms.CallFunc_SeedDial_NextIndex_PCIntName = CallFunc_SeedDial_NextIndex_PCIntName;
	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_18
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeContentIsEnabled_Enabled_                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_18(TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeContentIsEnabled_Enabled_, class FText CallFunc_Conv_BoolToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_18");

	Params::UUI_StormModeDebug_C_GetText_18_Params Parms{};

	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormModeContentIsEnabled_Enabled_ = CallFunc_StormModeContentIsEnabled_Enabled_;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_17
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TScriptInterface<class IGameInstanceHUDInterface_C>CallFunc_StormModeIsActive_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_StormModeIsActive_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_BoolToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_17(TScriptInterface<class IGameInstanceHUDInterface_C> CallFunc_StormModeIsActive_self_CastInput, bool CallFunc_StormModeIsActive_ReturnValue, class FText CallFunc_Conv_BoolToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_17");

	Params::UUI_StormModeDebug_C_GetText_17_Params Parms{};

	Parms.CallFunc_StormModeIsActive_self_CastInput = CallFunc_StormModeIsActive_self_CastInput;
	Parms.CallFunc_StormModeIsActive_ReturnValue = CallFunc_StormModeIsActive_ReturnValue;
	Parms.CallFunc_Conv_BoolToText_ReturnValue = CallFunc_Conv_BoolToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetUpgradesProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_Rune_Category_RandomizerSelectCategory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Local_MiscLenght                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_2                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_3                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasImprovementRune__ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_4                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_5                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// bool                               CallFunc_HasSpecialEffectRune__ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_6                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_7                            (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_8                            (None)
// bool                               CallFunc_HasImprovementRune__ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UUI_StormModeDebug_C::GetUpgradesProgress(enum class Enum_Rune_Category_Randomizer SelectCategory, int32 Local_MiscLenght, enum class Enum_Rune_Category_Randomizer Local_Category, int32 Local_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_HasSpecialEffectRune__ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, bool CallFunc_HasImprovementRune__ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, class FText CallFunc_Conv_IntToText_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, bool CallFunc_HasSpecialEffectRune__ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_IntToText_ReturnValue_8, bool CallFunc_HasImprovementRune__ReturnValue_1, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetUpgradesProgress");

	Params::UUI_StormModeDebug_C_GetUpgradesProgress_Params Parms{};

	Parms.SelectCategory = SelectCategory;
	Parms.Local_MiscLenght = Local_MiscLenght;
	Parms.Local_Category = Local_Category;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_2 = CallFunc_Conv_IntToText_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_HasSpecialEffectRune__ReturnValue = CallFunc_HasSpecialEffectRune__ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_3 = CallFunc_Conv_IntToText_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_HasImprovementRune__ReturnValue = CallFunc_HasImprovementRune__ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_IntToText_ReturnValue_4 = CallFunc_Conv_IntToText_ReturnValue_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.CallFunc_Conv_IntToText_ReturnValue_5 = CallFunc_Conv_IntToText_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_HasSpecialEffectRune__ReturnValue_1 = CallFunc_HasSpecialEffectRune__ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue_6 = CallFunc_Conv_IntToText_ReturnValue_6;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_7 = CallFunc_Conv_IntToText_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue_8 = CallFunc_Conv_IntToText_ReturnValue_8;
	Parms.CallFunc_HasImprovementRune__ReturnValue_1 = CallFunc_HasImprovementRune__ReturnValue_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_12
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_12(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_12");

	Params::UUI_StormModeDebug_C_UpgradeProgress_12_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_11
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_11(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_11");

	Params::UUI_StormModeDebug_C_UpgradeProgress_11_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_10
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_10(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_10");

	Params::UUI_StormModeDebug_C_UpgradeProgress_10_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_9
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_9(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_9");

	Params::UUI_StormModeDebug_C_UpgradeProgress_9_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_8
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_8(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_8");

	Params::UUI_StormModeDebug_C_UpgradeProgress_8_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_7
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_7(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_7");

	Params::UUI_StormModeDebug_C_UpgradeProgress_7_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_6
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_6(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_6");

	Params::UUI_StormModeDebug_C_UpgradeProgress_6_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_5
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_5(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_5");

	Params::UUI_StormModeDebug_C_UpgradeProgress_5_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_4
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_4(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_4");

	Params::UUI_StormModeDebug_C_UpgradeProgress_4_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_3
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_Rune_Category_RandomizerLocal_Category                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_3(enum class Enum_Rune_Category_Randomizer Local_Category, int32 Local_Value, class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_3");

	Params::UUI_StormModeDebug_C_UpgradeProgress_3_Params Parms{};

	Parms.Local_Category = Local_Category;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_2(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_2");

	Params::UUI_StormModeDebug_C_UpgradeProgress_2_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_1(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_1");

	Params::UUI_StormModeDebug_C_UpgradeProgress_1_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.UpgradeProgress_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetUpgradesProgress_ReturnValue                         (None)

class FText UUI_StormModeDebug_C::UpgradeProgress_0(class FText CallFunc_GetUpgradesProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "UpgradeProgress_0");

	Params::UUI_StormModeDebug_C_UpgradeProgress_0_Params Parms{};

	Parms.CallFunc_GetUpgradesProgress_ReturnValue = CallFunc_GetUpgradesProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_16
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetText_16(const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_16");

	Params::UUI_StormModeDebug_C_GetText_16_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_15
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)

class FText UUI_StormModeDebug_C::GetText_15(class FText Temp_text_Variable, bool Temp_bool_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_15");

	Params::UUI_StormModeDebug_C_GetText_15_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_14
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UUI_StormModeDebug_C::GetText_14(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_14");

	Params::UUI_StormModeDebug_C_GetText_14_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_13
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UUI_StormModeDebug_C::GetText_13(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_13");

	Params::UUI_StormModeDebug_C_GetText_13_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_12
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UUI_StormModeDebug_C::GetText_12(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_12");

	Params::UUI_StormModeDebug_C_GetText_12_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_11
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UUI_StormModeDebug_C::GetText_11(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_11");

	Params::UUI_StormModeDebug_C_GetText_11_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_10
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

class FText UUI_StormModeDebug_C::GetText_10(class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_10");

	Params::UUI_StormModeDebug_C_GetText_10_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_9
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_9(int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_9");

	Params::UUI_StormModeDebug_C_GetText_9_Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_8
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_GetNamedPCInt_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetText_8(int32 CallFunc_GetNamedPCInt_Value, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_8");

	Params::UUI_StormModeDebug_C_GetText_8_Params Parms{};

	Parms.CallFunc_GetNamedPCInt_Value = CallFunc_GetNamedPCInt_Value;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_7
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_TransformToText_ReturnValue                        (None)

class FText UUI_StormModeDebug_C::GetText_7(class FText CallFunc_Conv_TransformToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_7");

	Params::UUI_StormModeDebug_C_GetText_7_Params Parms{};

	Parms.CallFunc_Conv_TransformToText_ReturnValue = CallFunc_Conv_TransformToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_6
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_6(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_6");

	Params::UUI_StormModeDebug_C_GetText_6_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_5
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_5(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_5");

	Params::UUI_StormModeDebug_C_GetText_5_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_4
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_4(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_4");

	Params::UUI_StormModeDebug_C_GetText_4_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_3
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_TransformToText_ReturnValue                        (None)

class FText UUI_StormModeDebug_C::GetText_3(class FText CallFunc_Conv_TransformToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_3");

	Params::UUI_StormModeDebug_C_GetText_3_Params Parms{};

	Parms.CallFunc_Conv_TransformToText_ReturnValue = CallFunc_Conv_TransformToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_2(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_2");

	Params::UUI_StormModeDebug_C_GetText_2_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_1(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_1");

	Params::UUI_StormModeDebug_C_GetText_1_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

class FText UUI_StormModeDebug_C::GetText_0(class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetText_0");

	Params::UUI_StormModeDebug_C_GetText_0_Params Parms{};

	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_3
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeAreaProgress_3(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeAreaProgress_3");

	Params::UUI_StormModeDebug_C_GetStormModeAreaProgress_3_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeAreaProgress_2(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeAreaProgress_2");

	Params::UUI_StormModeDebug_C_GetStormModeAreaProgress_2_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeAreaProgress_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeAreaProgress_1(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeAreaProgress_1");

	Params::UUI_StormModeDebug_C_GetStormModeAreaProgress_1_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_3
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeFallgrimProgress_3(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeFallgrimProgress_3");

	Params::UUI_StormModeDebug_C_GetStormModeFallgrimProgress_3_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_2
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeFallgrimProgress_2(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeFallgrimProgress_2");

	Params::UUI_StormModeDebug_C_GetStormModeFallgrimProgress_2_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFallgrimProgress_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeProgress  Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UUI_StormModeDebug_C::GetStormModeFallgrimProgress_1(enum class Enum_StormModeProgress Temp_byte_Variable, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeFallgrimProgress_1");

	Params::UUI_StormModeDebug_C_GetStormModeFallgrimProgress_1_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCathtEntrance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeCathtEntrance(enum class Enum_StormModeArea Temp_byte_Variable, enum class Enum_StormModeAreaState CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeCathtEntrance");

	Params::UUI_StormModeDebug_C_GetStormModeCathtEntrance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCryptEntrance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeCryptEntrance(enum class Enum_StormModeArea Temp_byte_Variable, enum class Enum_StormModeAreaState CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeCryptEntrance");

	Params::UUI_StormModeDebug_C_GetStormModeCryptEntrance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeFireEntrance
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_StormModeArea      Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_StormModeAreaState CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeFireEntrance(enum class Enum_StormModeArea Temp_byte_Variable, enum class Enum_StormModeAreaState CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeFireEntrance");

	Params::UUI_StormModeDebug_C_GetStormModeFireEntrance_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentWeapon
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeCurrentWeapon(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeCurrentWeapon");

	Params::UUI_StormModeDebug_C_GetStormModeCurrentWeapon_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentShell
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeCurrentShell(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeCurrentShell");

	Params::UUI_StormModeDebug_C_GetStormModeCurrentShell_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.GetStormModeCurrentProgress
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_StormModeDebug_C::GetStormModeCurrentProgress(TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "GetStormModeCurrentProgress");

	Params::UUI_StormModeDebug_C_GetStormModeCurrentProgress_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormModeDebug_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormModeDebug.UI_StormModeDebug_C.ExecuteUbergraph_UI_StormModeDebug
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class URuneInventoryComponent_C*   CallFunc_GetRuneInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_StormMode_C*     K2Node_DynamicCast_AsGameplay_PC_Storm_Mode                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormModeDebug_C::ExecuteUbergraph_UI_StormModeDebug(int32 EntryPoint, class URuneInventoryComponent_C* CallFunc_GetRuneInventory_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, class AGameplayPC_StormMode_C* K2Node_DynamicCast_AsGameplay_PC_Storm_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormModeDebug_C", "ExecuteUbergraph_UI_StormModeDebug");

	Params::UUI_StormModeDebug_C_ExecuteUbergraph_UI_StormModeDebug_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRuneInventory_ReturnValue = CallFunc_GetRuneInventory_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_AsGameplay_PC_Storm_Mode = K2Node_DynamicCast_AsGameplay_PC_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


