#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C
// (None)

class UClass* UUI_StormMode_Menu_Enter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_Enter_C");

	return Clss;
}


// UI_StormMode_Menu_Enter_C UI_StormMode_Menu_Enter.Default__UI_StormMode_Menu_Enter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_Enter_C* UUI_StormMode_Menu_Enter_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_Enter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_Enter_C*>(UUI_StormMode_Menu_Enter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "GetSelectedCharacter");

	Params::UUI_StormMode_Menu_Enter_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "GetVerticalIndex");

	Params::UUI_StormMode_Menu_Enter_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetShade
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class Enum_ShellDye           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShadeNames_ReturnValue                               (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_1                             (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_2                             (None)
// enum class Enum_ShellDye           K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UUI_StormMode_Menu_Enter_C::GetShade(enum class Enum_ShellDye Temp_byte_Variable, class FText Temp_text_Variable, enum class EArmorTypes Temp_byte_Variable_1, class FText CallFunc_GetShadeNames_ReturnValue, class FText CallFunc_GetShadeNames_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_2, enum class Enum_ShellDye K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "GetShade");

	Params::UUI_StormMode_Menu_Enter_C_GetShade_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetShadeNames_ReturnValue = CallFunc_GetShadeNames_ReturnValue;
	Parms.CallFunc_GetShadeNames_ReturnValue_1 = CallFunc_GetShadeNames_ReturnValue_1;
	Parms.CallFunc_GetShadeNames_ReturnValue_2 = CallFunc_GetShadeNames_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.GetSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UServerSaveGame_C*           SaveGameRef                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              SlotNumber                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::GetSaveData(class UServerSaveGame_C* SaveGameRef, const class FString& SlotName, int32 SlotNumber)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "GetSaveData");

	Params::UUI_StormMode_Menu_Enter_C_GetSaveData_Params Parms{};

	Parms.SaveGameRef = SaveGameRef;
	Parms.SlotName = SlotName;
	Parms.SlotNumber = SlotNumber;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSelectedWeapon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_HasRunStarted_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetWeaponNames_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Enter_C::SetSelectedWeapon(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, class FText CallFunc_GetWeaponNames_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetSelectedWeapon");

	Params::UUI_StormMode_Menu_Enter_C_SetSelectedWeapon_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_HasRunStarted_ReturnValue = CallFunc_HasRunStarted_ReturnValue;
	Parms.CallFunc_GetWeaponNames_ReturnValue = CallFunc_GetWeaponNames_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSelectedShell
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        CallFunc_GetShade_ReturnValue                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_GetShellNameSimple_ShellName                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FName                        CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// enum class EArmorTypes             CallFunc_GetShellFromNameID_Shell                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               CallFunc_HasRunStarted_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Enter_C::SetSelectedShell(class FName Temp_name_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText CallFunc_GetShade_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_GetShellNameSimple_ShellName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FName CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class EArmorTypes CallFunc_GetShellFromNameID_Shell, class FText CallFunc_Format_ReturnValue, bool CallFunc_HasRunStarted_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetSelectedShell");

	Params::UUI_StormMode_Menu_Enter_C_SetSelectedShell_Params Parms{};

	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_GetShade_ReturnValue = CallFunc_GetShade_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetShellNameSimple_ShellName = CallFunc_GetShellNameSimple_ShellName;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetShellFromNameID_Shell = CallFunc_GetShellFromNameID_Shell;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_HasRunStarted_ReturnValue = CallFunc_HasRunStarted_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetRunPlaytime
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_HasRunStarted_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Enter_C::SetRunPlaytime(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetRunPlaytime");

	Params::UUI_StormMode_Menu_Enter_C_SetRunPlaytime_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_HasRunStarted_ReturnValue = CallFunc_HasRunStarted_ReturnValue;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_FixDateTime_TimeOut = CallFunc_FixDateTime_TimeOut;
	Parms.CallFunc_FixDateTime_TimeOut_1 = CallFunc_FixDateTime_TimeOut_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_FixDateTime_TimeOut_2 = CallFunc_FixDateTime_TimeOut_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSeedButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_HasRunStarted_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Enter_C::SetSeedButton(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_HasRunStarted_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetSeedButton");

	Params::UUI_StormMode_Menu_Enter_C_SetSeedButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_HasRunStarted_ReturnValue = CallFunc_HasRunStarted_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.HasRunStarted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_Enter_C::HasRunStarted(bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "HasRunStarted");

	Params::UUI_StormMode_Menu_Enter_C_HasRunStarted_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_Menu_Enter_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_Menu_Enter_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetSeedManager");

	Params::UUI_StormMode_Menu_Enter_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnCharacterSelected");

	Params::UUI_StormMode_Menu_Enter_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnSettingConfirmed");

	Params::UUI_StormMode_Menu_Enter_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnWeaponSelected");

	Params::UUI_StormMode_Menu_Enter_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_Menu_Enter_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnRiposteSelected");

	Params::UUI_StormMode_Menu_Enter_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnButtonHovered");

	Params::UUI_StormMode_Menu_Enter_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetParentWidget");

	Params::UUI_StormMode_Menu_Enter_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_Enter_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "SetSaveGameRef");

	Params::UUI_StormMode_Menu_Enter_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.BndEvt__UI_StormMode_Menu_Enter_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_Enter_C::BndEvt__UI_StormMode_Menu_Enter_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "BndEvt__UI_StormMode_Menu_Enter_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_Enter.UI_StormMode_Menu_Enter_C.ExecuteUbergraph_UI_StormMode_Menu_Enter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_Menu_C*        K2Node_DynamicCast_AsUI_Storm_Mode_Menu                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           K2Node_Event_SeedManager                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName                                            (ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_Event_MapStateSaveGame                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName_MapState                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_Enter_C::ExecuteUbergraph_UI_StormMode_Menu_Enter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUI_StormMode_Menu_C* K2Node_DynamicCast_AsUI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, enum class EArmorTypes K2Node_Event_Character_1, enum class EComboTypes K2Node_Event_Weapon_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, enum class EArmorTypes K2Node_Event_Character, int32 K2Node_Event_Value, enum class EComboTypes K2Node_Event_Weapon, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, class UUserWidget* K2Node_Event_Widget_1, class UWidget* K2Node_Event_Widget, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_Enter_C", "ExecuteUbergraph_UI_StormMode_Menu_Enter");

	Params::UUI_StormMode_Menu_Enter_C_ExecuteUbergraph_UI_StormMode_Menu_Enter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Storm_Mode_Menu = K2Node_DynamicCast_AsUI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;
	Parms.K2Node_Event_Weapon_1 = K2Node_Event_Weapon_1;
	Parms.K2Node_Event_SeedManager = K2Node_Event_SeedManager;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Riposte_1 = K2Node_Event_Riposte_1;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_SlotName = K2Node_Event_SlotName;
	Parms.K2Node_Event_MapStateSaveGame = K2Node_Event_MapStateSaveGame;
	Parms.K2Node_Event_SlotName_MapState = K2Node_Event_SlotName_MapState;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


