#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C
// (None)

class UClass* UUI_StormMode_Menu_NewRun_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_Menu_NewRun_C");

	return Clss;
}


// UI_StormMode_Menu_NewRun_C UI_StormMode_Menu_NewRun.Default__UI_StormMode_Menu_NewRun_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_Menu_NewRun_C* UUI_StormMode_Menu_NewRun_C::GetDefaultObj()
{
	static class UUI_StormMode_Menu_NewRun_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_Menu_NewRun_C*>(UUI_StormMode_Menu_NewRun_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetSelectedCharacter
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::GetSelectedCharacter(enum class EArmorTypes* Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetSelectedCharacter");

	Params::UUI_StormMode_Menu_NewRun_C_GetSelectedCharacter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Character != nullptr)
		*Character = Parms.Character;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetVerticalIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::GetVerticalIndex(int32* Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetVerticalIndex");

	Params::UUI_StormMode_Menu_NewRun_C_GetVerticalIndex_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Index != nullptr)
		*Index = Parms.Index;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ShouldRemove10KTar
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           NamedInts                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// TMap<class FName, int32>           ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TMap<class FName, int32>           Local_NamedInts                                                  (Edit, BlueprintVisible)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

TMap<class FName, int32> UUI_StormMode_Menu_NewRun_C::ShouldRemove10KTar(TMap<class FName, int32> NamedInts, TMap<class FName, int32> Local_NamedInts, class FName Temp_name_Variable, int32 Temp_int_Variable, class FName Temp_name_Variable_1, class FName Temp_name_Variable_2, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FName Temp_name_Variable_3, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ShouldRemove10KTar");

	Params::UUI_StormMode_Menu_NewRun_C_ShouldRemove10KTar_Params Parms{};

	Parms.NamedInts = NamedInts;
	Parms.Local_NamedInts = Local_NamedInts;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateShadeButtonState
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::UpdateShadeButtonState(bool Condition, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput, TArray<class FText>& K2Node_MakeArray_Array_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateShadeButtonState");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateShadeButtonState_Params Parms{};

	Parms.Condition = Condition;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_UpdateSettingValues_self_CastInput_1 = CallFunc_UpdateSettingValues_self_CastInput_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAs1
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<class FName, int32>           TargetMap                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_NewRun_C::HasAs1(TMap<class FName, int32>& TargetMap, class FName Key, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HasAs1");

	Params::UUI_StormMode_Menu_NewRun_C_HasAs1_Params Parms{};

	Parms.TargetMap = TargetMap;
	Parms.Key = Key;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetShadeUnlockIDBase
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_StormMode_Menu_NewRun_C::GetShadeUnlockIDBase(enum class EArmorTypes Index, enum class EArmorTypes Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetShadeUnlockIDBase");

	Params::UUI_StormMode_Menu_NewRun_C_GetShadeUnlockIDBase_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetUnlockedShadeDataForShell
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Indices                                                          (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FText>                Texts                                                            (Parm, OutParm, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           Local_Dyes                                                       (Edit, BlueprintVisible)
// enum class EArmorTypes             Local_Shell                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      IndexList                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FText>                TextList                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShadeNames_ReturnValue                               (None)
// class FString                      CallFunc_GetShadeUnlockIDBase_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUnlockedShadeForShell_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAs1_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_Get_Player_Ints_NamedInts                               (None)

void UUI_StormMode_Menu_NewRun_C::GetUnlockedShadeDataForShell(enum class EArmorTypes& Shell, TArray<int32>* Indices, TArray<class FText>* Texts, int32 Local_Index, TMap<class FName, int32> Local_Dyes, enum class EArmorTypes Local_Shell, const TArray<int32>& IndexList, const TArray<class FText>& TextList, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class FText CallFunc_GetShadeNames_ReturnValue, const class FString& CallFunc_GetShadeUnlockIDBase_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAnyUnlockedShadeForShell_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_HasAs1_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, int32 CallFunc_Array_Add_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_1, int32 CallFunc_Array_Add_ReturnValue_1, TMap<class FName, int32> CallFunc_Get_Player_Ints_NamedInts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetUnlockedShadeDataForShell");

	Params::UUI_StormMode_Menu_NewRun_C_GetUnlockedShadeDataForShell_Params Parms{};

	Parms.Shell = Shell;
	Parms.Local_Index = Local_Index;
	Parms.Local_Dyes = Local_Dyes;
	Parms.Local_Shell = Local_Shell;
	Parms.IndexList = IndexList;
	Parms.TextList = TextList;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetShadeNames_ReturnValue = CallFunc_GetShadeNames_ReturnValue;
	Parms.CallFunc_GetShadeUnlockIDBase_ReturnValue = CallFunc_GetShadeUnlockIDBase_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_HasAnyUnlockedShadeForShell_ReturnValue = CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_HasAs1_ReturnValue = CallFunc_HasAs1_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Get_Player_Ints_NamedInts = CallFunc_Get_Player_Ints_NamedInts;

	UObject::ProcessEvent(Func, &Parms);

	if (Indices != nullptr)
		*Indices = std::move(Parms.Indices);

	if (Texts != nullptr)
		*Texts = std::move(Parms.Texts);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAnyUnlockedShadeForShell
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<class FName, int32>           CallFunc_Get_Player_Ints_NamedInts                               (None)
// class FString                      CallFunc_GetShadeUnlockIDBase_ReturnValue                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUnlockedShade_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_NewRun_C::HasAnyUnlockedShadeForShell(enum class EArmorTypes Shell, TMap<class FName, int32> CallFunc_Get_Player_Ints_NamedInts, const class FString& CallFunc_GetShadeUnlockIDBase_ReturnValue, bool CallFunc_HasAnyUnlockedShade_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HasAnyUnlockedShadeForShell");

	Params::UUI_StormMode_Menu_NewRun_C_HasAnyUnlockedShadeForShell_Params Parms{};

	Parms.Shell = Shell;
	Parms.CallFunc_Get_Player_Ints_NamedInts = CallFunc_Get_Player_Ints_NamedInts;
	Parms.CallFunc_GetShadeUnlockIDBase_ReturnValue = CallFunc_GetShadeUnlockIDBase_ReturnValue;
	Parms.CallFunc_HasAnyUnlockedShade_ReturnValue = CallFunc_HasAnyUnlockedShade_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HasAnyUnlockedShade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ShadeNameBase                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// TMap<class FName, int32>           NamedInts                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAs1_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UUI_StormMode_Menu_NewRun_C::HasAnyUnlockedShade(const class FString& ShadeNameBase, TMap<class FName, int32> NamedInts, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_HasAs1_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HasAnyUnlockedShade");

	Params::UUI_StormMode_Menu_NewRun_C_HasAnyUnlockedShade_Params Parms{};

	Parms.ShadeNameBase = ShadeNameBase;
	Parms.NamedInts = NamedInts;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_HasAs1_ReturnValue = CallFunc_HasAs1_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Get Player Ints
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           NamedInts                                                        (Parm, OutParm)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, int32>           CallFunc_StormMode_GetNamedInts_NamedInts                        (None)

void UUI_StormMode_Menu_NewRun_C::Get_Player_Ints(TMap<class FName, int32>* NamedInts, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, TMap<class FName, int32> CallFunc_StormMode_GetNamedInts_NamedInts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Get Player Ints");

	Params::UUI_StormMode_Menu_NewRun_C_Get_Player_Ints_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetNamedInts_NamedInts = CallFunc_StormMode_GetNamedInts_NamedInts;

	UObject::ProcessEvent(Func, &Parms);

	if (NamedInts != nullptr)
		*NamedInts = Parms.NamedInts;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateShadeEnabledState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             HighlightedArmor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUnlockedShadeForShell_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::UpdateShadeEnabledState(enum class EArmorTypes HighlightedArmor, bool CallFunc_HasAnyUnlockedShadeForShell_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateShadeEnabledState");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateShadeEnabledState_Params Parms{};

	Parms.HighlightedArmor = HighlightedArmor;
	Parms.CallFunc_HasAnyUnlockedShadeForShell_ReturnValue = CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput = CallFunc_EnableOrDisableButton_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SaveStormModeToDisk_MapState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::SaveStormModeToDisk_MapState(const class FString& InString, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SaveStormModeToDisk_MapState");

	Params::UUI_StormMode_Menu_NewRun_C_SaveStormModeToDisk_MapState_Params Parms{};

	Parms.InString = InString;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetIndexFromButton
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetCurrentButtons_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUI_StormMode_Menu_NewRun_C::GetIndexFromButton(class UUserWidget* Widget, TArray<class UUserWidget*>& CallFunc_GetCurrentButtons_ReturnValue, int32 CallFunc_Array_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetIndexFromButton");

	Params::UUI_StormMode_Menu_NewRun_C_GetIndexFromButton_Params Parms{};

	Parms.Widget = Widget;
	Parms.CallFunc_GetCurrentButtons_ReturnValue = CallFunc_GetCurrentButtons_ReturnValue;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SelectHealRiposte
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_ForceSelectButton_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::SelectHealRiposte(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ForceSelectButton_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SelectHealRiposte");

	Params::UUI_StormMode_Menu_NewRun_C_SelectHealRiposte_Params Parms{};

	Parms.CallFunc_ForceSelectButton_self_CastInput = CallFunc_ForceSelectButton_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetRiposteSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetRiposteSelection(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetRiposteSelection");

	Params::UUI_StormMode_Menu_NewRun_C_ResetRiposteSelection_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HandleStartingRiposte
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                UnlockedItems                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetRiposteUpgradeIDs_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class FName UUI_StormMode_Menu_NewRun_C::HandleStartingRiposte(TArray<class FName>& UnlockedItems, class FName CallFunc_GetRiposteUpgradeIDs_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HandleStartingRiposte");

	Params::UUI_StormMode_Menu_NewRun_C_HandleStartingRiposte_Params Parms{};

	Parms.UnlockedItems = UnlockedItems;
	Parms.CallFunc_GetRiposteUpgradeIDs_ReturnValue = CallFunc_GetRiposteUpgradeIDs_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateSeedButtonName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingName_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::UpdateSeedButtonName(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsValid_ReturnValue, class FText K2Node_Select_Default, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingName_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateSeedButtonName");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateSeedButtonName_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_UpdateSettingName_self_CastInput = CallFunc_UpdateSettingName_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateSeedCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        K2Node_Select_Default                                            (None)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::UpdateSeedCurrent(bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default, TArray<class FText>& K2Node_MakeArray_Array, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateSeedCurrent");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateSeedCurrent_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.StartNewRun_FromActor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_ShellDyes           CallFunc_GetShellShadesState_Struct_ShellDyes                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::StartNewRun_FromActor(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, const struct FStruct_ShellDyes& CallFunc_GetShellShadesState_Struct_ShellDyes, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "StartNewRun_FromActor");

	Params::UUI_StormMode_Menu_NewRun_C_StartNewRun_FromActor_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetShellShadesState_Struct_ShellDyes = CallFunc_GetShellShadesState_Struct_ShellDyes;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.StartNewRun_FromMainMenu
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_PrepareMapStateForNewRun_Success                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_PrepareGPDataForNewRun_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::StartNewRun_FromMainMenu(bool CallFunc_PrepareMapStateForNewRun_Success, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_PrepareGPDataForNewRun_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "StartNewRun_FromMainMenu");

	Params::UUI_StormMode_Menu_NewRun_C_StartNewRun_FromMainMenu_Params Parms{};

	Parms.CallFunc_PrepareMapStateForNewRun_Success = CallFunc_PrepareMapStateForNewRun_Success;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_PrepareGPDataForNewRun_Success = CallFunc_PrepareGPDataForNewRun_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.CheckUnlocks
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                LocalUnlockedItems                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<class FName, int32>           Local_NamedInts                                                  (Edit, BlueprintVisible)
// enum class ERiposteTypes           Local_Riposte                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Counter                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_Get_Player_Ints_NamedInts                               (None)
// bool                               CallFunc_HasAs1_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAs1_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAs1_ReturnValue_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAs1_ReturnValue_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAs1_ReturnValue_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput_3                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_EnableOrDisableButton_self_CastInput_4                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::CheckUnlocks(const TArray<class FName>& LocalUnlockedItems, TMap<class FName, int32> Local_NamedInts, enum class ERiposteTypes Local_Riposte, int32 Local_Counter, TMap<class FName, int32> CallFunc_Get_Player_Ints_NamedInts, bool CallFunc_HasAs1_ReturnValue, bool CallFunc_HasAs1_ReturnValue_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput, bool CallFunc_HasAs1_ReturnValue_2, bool CallFunc_HasAs1_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_HasAs1_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_2, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_3, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_EnableOrDisableButton_self_CastInput_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "CheckUnlocks");

	Params::UUI_StormMode_Menu_NewRun_C_CheckUnlocks_Params Parms{};

	Parms.LocalUnlockedItems = LocalUnlockedItems;
	Parms.Local_NamedInts = Local_NamedInts;
	Parms.Local_Riposte = Local_Riposte;
	Parms.Local_Counter = Local_Counter;
	Parms.CallFunc_Get_Player_Ints_NamedInts = CallFunc_Get_Player_Ints_NamedInts;
	Parms.CallFunc_HasAs1_ReturnValue = CallFunc_HasAs1_ReturnValue;
	Parms.CallFunc_HasAs1_ReturnValue_1 = CallFunc_HasAs1_ReturnValue_1;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput = CallFunc_EnableOrDisableButton_self_CastInput;
	Parms.CallFunc_HasAs1_ReturnValue_2 = CallFunc_HasAs1_ReturnValue_2;
	Parms.CallFunc_HasAs1_ReturnValue_3 = CallFunc_HasAs1_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_HasAs1_ReturnValue_4 = CallFunc_HasAs1_ReturnValue_4;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput_1 = CallFunc_EnableOrDisableButton_self_CastInput_1;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput_2 = CallFunc_EnableOrDisableButton_self_CastInput_2;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput_3 = CallFunc_EnableOrDisableButton_self_CastInput_3;
	Parms.CallFunc_EnableOrDisableButton_self_CastInput_4 = CallFunc_EnableOrDisableButton_self_CastInput_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     WidgetParent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_StormMode_Menu_C*        K2Node_DynamicCast_AsUI_Storm_Mode_Menu                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::GetParentWidget(class UWidget* WidgetParent, class UUI_StormMode_Menu_C* K2Node_DynamicCast_AsUI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetParentWidget");

	Params::UUI_StormMode_Menu_NewRun_C_GetParentWidget_Params Parms{};

	Parms.WidgetParent = WidgetParent;
	Parms.K2Node_DynamicCast_AsUI_Storm_Mode_Menu = K2Node_DynamicCast_AsUI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HideWarningWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::HideWarningWindow(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HideWarningWindow");

	Params::UUI_StormMode_Menu_NewRun_C_HideWarningWindow_Params Parms{};

	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ShowWarningWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_OnOpen_self_CastInput                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ShowWarningWindow(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_OnOpen_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ShowWarningWindow");

	Params::UUI_StormMode_Menu_NewRun_C_ShowWarningWindow_Params Parms{};

	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;
	Parms.CallFunc_OnOpen_self_CastInput = CallFunc_OnOpen_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetHasRunStartedFromPC
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_StormModeProgress  CallFunc_GetStormModeProgress_Progress                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_NewRun_C::GetHasRunStartedFromPC(class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, enum class Enum_StormModeProgress CallFunc_GetStormModeProgress_Progress, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetHasRunStartedFromPC");

	Params::UUI_StormMode_Menu_NewRun_C_GetHasRunStartedFromPC_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetStormModeProgress_Progress = CallFunc_GetStormModeProgress_Progress;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetHasRunStartedFromSave
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FDateTime                   Local_DefaultTime                                                (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Time                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Started                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_DateTimeDateTime_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_StormMode_Menu_NewRun_C::GetHasRunStartedFromSave(const struct FDateTime& Local_DefaultTime, bool Local_Time, bool Local_Started, bool CallFunc_BooleanAND_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_DateTimeDateTime_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetHasRunStartedFromSave");

	Params::UUI_StormMode_Menu_NewRun_C_GetHasRunStartedFromSave_Params Parms{};

	Parms.Local_DefaultTime = Local_DefaultTime;
	Parms.Local_Time = Local_Time;
	Parms.Local_Started = Local_Started;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_NotEqual_DateTimeDateTime_ReturnValue = CallFunc_NotEqual_DateTimeDateTime_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetSaveData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGameReference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateReference                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::GetSaveData(int32 SlotIndex, class UServerSaveGame_C* SaveGameReference, const class FString& SlotName, class UMapState_C* MapStateReference, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetSaveData");

	Params::UUI_StormMode_Menu_NewRun_C_GetSaveData_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.SaveGameReference = SaveGameReference;
	Parms.SlotName = SlotName;
	Parms.MapStateReference = MapStateReference;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetShellShadesState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FStruct_ShellDyes           Struct_ShellDyes                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_4                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_5                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           K2Node_MakeStruct_Struct_ShellDyes                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::GetShellShadesState(struct FStruct_ShellDyes* Struct_ShellDyes, enum class EArmorTypes Temp_byte_Variable, enum class EArmorTypes Temp_byte_Variable_1, enum class EArmorTypes Temp_byte_Variable_2, enum class EArmorTypes Temp_byte_Variable_3, enum class EArmorTypes Temp_byte_Variable_4, enum class EArmorTypes Temp_byte_Variable_5, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue_1, int32 CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, int32 CallFunc_Map_Find_Value_3, bool CallFunc_Map_Find_ReturnValue_3, uint8 CallFunc_Conv_IntToByte_ReturnValue_2, uint8 CallFunc_Conv_IntToByte_ReturnValue_3, uint8 CallFunc_GetValidValue_ReturnValue_2, uint8 CallFunc_GetValidValue_ReturnValue_3, int32 CallFunc_Map_Find_Value_4, bool CallFunc_Map_Find_ReturnValue_4, int32 CallFunc_Map_Find_Value_5, bool CallFunc_Map_Find_ReturnValue_5, uint8 CallFunc_Conv_IntToByte_ReturnValue_4, uint8 CallFunc_Conv_IntToByte_ReturnValue_5, uint8 CallFunc_GetValidValue_ReturnValue_4, uint8 CallFunc_GetValidValue_ReturnValue_5, const struct FStruct_ShellDyes& K2Node_MakeStruct_Struct_ShellDyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetShellShadesState");

	Params::UUI_StormMode_Menu_NewRun_C_GetShellShadesState_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_1 = CallFunc_Conv_IntToByte_ReturnValue_1;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue_1 = CallFunc_GetValidValue_ReturnValue_1;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value_3 = CallFunc_Map_Find_Value_3;
	Parms.CallFunc_Map_Find_ReturnValue_3 = CallFunc_Map_Find_ReturnValue_3;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_2 = CallFunc_Conv_IntToByte_ReturnValue_2;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_3 = CallFunc_Conv_IntToByte_ReturnValue_3;
	Parms.CallFunc_GetValidValue_ReturnValue_2 = CallFunc_GetValidValue_ReturnValue_2;
	Parms.CallFunc_GetValidValue_ReturnValue_3 = CallFunc_GetValidValue_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_4 = CallFunc_Map_Find_Value_4;
	Parms.CallFunc_Map_Find_ReturnValue_4 = CallFunc_Map_Find_ReturnValue_4;
	Parms.CallFunc_Map_Find_Value_5 = CallFunc_Map_Find_Value_5;
	Parms.CallFunc_Map_Find_ReturnValue_5 = CallFunc_Map_Find_ReturnValue_5;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_4 = CallFunc_Conv_IntToByte_ReturnValue_4;
	Parms.CallFunc_Conv_IntToByte_ReturnValue_5 = CallFunc_Conv_IntToByte_ReturnValue_5;
	Parms.CallFunc_GetValidValue_ReturnValue_4 = CallFunc_GetValidValue_ReturnValue_4;
	Parms.CallFunc_GetValidValue_ReturnValue_5 = CallFunc_GetValidValue_ReturnValue_5;
	Parms.K2Node_MakeStruct_Struct_ShellDyes = K2Node_MakeStruct_Struct_ShellDyes;

	UObject::ProcessEvent(Func, &Parms);

	if (Struct_ShellDyes != nullptr)
		*Struct_ShellDyes = std::move(Parms.Struct_ShellDyes);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.HandleShellShade
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_ShellDyes           ShadeState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellShadesState_Struct_ShellDyes                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::HandleShellShade(struct FStruct_ShellDyes& ShadeState, const struct FStruct_ShellDyes& CallFunc_GetShellShadesState_Struct_ShellDyes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "HandleShellShade");

	Params::UUI_StormMode_Menu_NewRun_C_HandleShellShade_Params Parms{};

	Parms.ShadeState = ShadeState;
	Parms.CallFunc_GetShellShadesState_Struct_ShellDyes = CallFunc_GetShellShadesState_Struct_ShellDyes;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Riposte_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::Header_Riposte_Visibility(enum class ESlateVisibility Value, enum class ESlateVisibility Selection, enum class ESlateVisibility Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Header_Riposte_Visibility");

	Params::UUI_StormMode_Menu_NewRun_C_Header_Riposte_Visibility_Params Parms{};

	Parms.Value = Value;
	Parms.Selection = Selection;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Weapon_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::Header_Weapon_Visibility(enum class ESlateVisibility Value, enum class ESlateVisibility Selection, enum class ESlateVisibility Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Header_Weapon_Visibility");

	Params::UUI_StormMode_Menu_NewRun_C_Header_Weapon_Visibility_Params Parms{};

	Parms.Value = Value;
	Parms.Selection = Selection;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Header_Shell_Visibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::Header_Shell_Visibility(enum class ESlateVisibility InVisibility, enum class ESlateVisibility Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Header_Shell_Visibility");

	Params::UUI_StormMode_Menu_NewRun_C_Header_Shell_Visibility_Params Parms{};

	Parms.InVisibility = InVisibility;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateDyes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      Local_Indexes                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateIndexes_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<int32>                      CallFunc_GetUnlockedShadeDataForShell_Indices                    (ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetUnlockedShadeDataForShell_Texts                      (ReferenceParm, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::UpdateDyes(const TArray<int32>& Local_Indexes, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateIndexes_self_CastInput, TArray<int32>& CallFunc_GetUnlockedShadeDataForShell_Indices, TArray<class FText>& CallFunc_GetUnlockedShadeDataForShell_Texts, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateDyes");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateDyes_Params Parms{};

	Parms.Local_Indexes = Local_Indexes;
	Parms.CallFunc_UpdateIndexes_self_CastInput = CallFunc_UpdateIndexes_self_CastInput;
	Parms.CallFunc_GetUnlockedShadeDataForShell_Indices = CallFunc_GetUnlockedShadeDataForShell_Indices;
	Parms.CallFunc_GetUnlockedShadeDataForShell_Texts = CallFunc_GetUnlockedShadeDataForShell_Texts;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetDyes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_Value_Reset_self_CastInput                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_DeactivateButton_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetDyes(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Reset_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetDyes");

	Params::UUI_StormMode_Menu_NewRun_C_ResetDyes_Params Parms{};

	Parms.CallFunc_Value_Reset_self_CastInput = CallFunc_Value_Reset_self_CastInput;
	Parms.CallFunc_DeactivateButton_self_CastInput = CallFunc_DeactivateButton_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateInfusionName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Infusion                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInfusionNames_Name                                   (None)

void UUI_StormMode_Menu_NewRun_C::UpdateInfusionName(enum class ERiposteTypes Infusion, class FText CallFunc_GetInfusionNames_Name)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateInfusionName");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateInfusionName_Params Parms{};

	Parms.Infusion = Infusion;
	Parms.CallFunc_GetInfusionNames_Name = CallFunc_GetInfusionNames_Name;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Sound_Confirming
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              PitchMin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMax                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::Sound_Confirming(float PitchMin, float PitchMax, float VolumeMultiplier, float CallFunc_RandomFloatInRange_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Sound_Confirming");

	Params::UUI_StormMode_Menu_NewRun_C_Sound_Confirming_Params Parms{};

	Parms.PitchMin = PitchMin;
	Parms.PitchMax = PitchMax;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SaveStormModeToDisk_GPData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InString                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPrimaryUserIndex_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DHSaveGameToSlot_Asynch_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::SaveStormModeToDisk_GPData(const class FString& InString, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DHSaveGameToSlot_Asynch_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SaveStormModeToDisk_GPData");

	Params::UUI_StormMode_Menu_NewRun_C_SaveStormModeToDisk_GPData_Params Parms{};

	Parms.InString = InString;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetPrimaryUserIndex_ReturnValue = CallFunc_GetPrimaryUserIndex_ReturnValue;
	Parms.CallFunc_DHSaveGameToSlot_Asynch_ReturnValue = CallFunc_DHSaveGameToSlot_Asynch_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.PrepareMapStateForNewRun
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, struct FMapSaveState>Temp_name_Variable                                               (None)

void UUI_StormMode_Menu_NewRun_C::PrepareMapStateForNewRun(bool* Success, bool CallFunc_IsValid_ReturnValue, TMap<class FName, struct FMapSaveState> Temp_name_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "PrepareMapStateForNewRun");

	Params::UUI_StormMode_Menu_NewRun_C_PrepareMapStateForNewRun_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.PrepareGPDataForNewRun
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                Local_UnlockedItems                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FTransform                  Local_Transform                                                  (Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
// class FName                        Local_StartPoint                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_StormModeSeeds      Local_Seeds                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      Local_LoadedQuickSlots                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<class FName, int32>           Local_LoadedNamedInts                                            (Edit, BlueprintVisible)
// TArray<struct FInventoryItem>      Local_Inventory                                                  (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<class FName, class FName>     Local_DefaultNamedNames                                          (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// TMap<class FName, int32>           CallFunc_ShouldRemove10KTar_ReturnValue                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GoldenPathDialogueCounterName_PCIntName                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        Temp_name_Variable_1                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_StormMode_ResetInventory_Return                         (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_AddWeaponToInventory_Success                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FInventoryItem>      CallFunc_StormMode_AddWeaponToInventory_ReturnValue              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_ID                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_Transform         (IsPlainOldData, NoDestructor)
// struct FStruct_StormModeSeeds      CallFunc_Seed_GenerateAll_Seed_All                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_2                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_HandleStartingRiposte_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable_3                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::PrepareGPDataForNewRun(bool* Success, const TArray<class FName>& Local_UnlockedItems, const struct FTransform& Local_Transform, class FName Local_StartPoint, const struct FStruct_StormModeSeeds& Local_Seeds, const TArray<int32>& Local_LoadedQuickSlots, TMap<class FName, int32> Local_LoadedNamedInts, const TArray<struct FInventoryItem>& Local_Inventory, TMap<class FName, class FName> Local_DefaultNamedNames, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, TMap<class FName, int32> CallFunc_ShouldRemove10KTar_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class FName Temp_name_Variable, class FName CallFunc_GoldenPathDialogueCounterName_PCIntName, int32 Temp_int_Array_Index_Variable, class FName CallFunc_Array_Get_Item, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class FName Temp_name_Variable_1, TArray<struct FInventoryItem>& CallFunc_StormMode_ResetInventory_Return, bool CallFunc_StormMode_AddWeaponToInventory_Success, TArray<struct FInventoryItem>& CallFunc_StormMode_AddWeaponToInventory_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_ID, const struct FTransform& CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_Transform, const struct FStruct_StormModeSeeds& CallFunc_Seed_GenerateAll_Seed_All, class FName Temp_name_Variable_2, class FName CallFunc_HandleStartingRiposte_ReturnValue, class FName Temp_name_Variable_3, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Variable_2, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "PrepareGPDataForNewRun");

	Params::UUI_StormMode_Menu_NewRun_C_PrepareGPDataForNewRun_Params Parms{};

	Parms.Local_UnlockedItems = Local_UnlockedItems;
	Parms.Local_Transform = Local_Transform;
	Parms.Local_StartPoint = Local_StartPoint;
	Parms.Local_Seeds = Local_Seeds;
	Parms.Local_LoadedQuickSlots = Local_LoadedQuickSlots;
	Parms.Local_LoadedNamedInts = Local_LoadedNamedInts;
	Parms.Local_Inventory = Local_Inventory;
	Parms.Local_DefaultNamedNames = Local_DefaultNamedNames;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_ShouldRemove10KTar_ReturnValue = CallFunc_ShouldRemove10KTar_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GoldenPathDialogueCounterName_PCIntName = CallFunc_GoldenPathDialogueCounterName_PCIntName;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_name_Variable_1 = Temp_name_Variable_1;
	Parms.CallFunc_StormMode_ResetInventory_Return = CallFunc_StormMode_ResetInventory_Return;
	Parms.CallFunc_StormMode_AddWeaponToInventory_Success = CallFunc_StormMode_AddWeaponToInventory_Success;
	Parms.CallFunc_StormMode_AddWeaponToInventory_ReturnValue = CallFunc_StormMode_AddWeaponToInventory_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_ID = CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_ID;
	Parms.CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_Transform = CallFunc_RandomizeStartPoint_Fallgrim_MainMenu_Transform;
	Parms.CallFunc_Seed_GenerateAll_Seed_All = CallFunc_Seed_GenerateAll_Seed_All;
	Parms.Temp_name_Variable_2 = Temp_name_Variable_2;
	Parms.CallFunc_HandleStartingRiposte_ReturnValue = CallFunc_HandleStartingRiposte_ReturnValue;
	Parms.Temp_name_Variable_3 = Temp_name_Variable_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetSeedCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetSeedCurrent(TArray<class FText>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetSeedCurrent");

	Params::UUI_StormMode_Menu_NewRun_C_ResetSeedCurrent_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.CreateSeedCurrent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Seed                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Seed_ApplyInitial_Seed                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Seed_GenerateInitial_Seed                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_UpdateSettingValues_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::CreateSeedCurrent(int32 Local_Seed, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, int32 CallFunc_Seed_ApplyInitial_Seed, int32 CallFunc_Seed_GenerateInitial_Seed, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_UpdateSettingValues_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "CreateSeedCurrent");

	Params::UUI_StormMode_Menu_NewRun_C_CreateSeedCurrent_Params Parms{};

	Parms.Local_Seed = Local_Seed;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Seed_ApplyInitial_Seed = CallFunc_Seed_ApplyInitial_Seed;
	Parms.CallFunc_Seed_GenerateInitial_Seed = CallFunc_Seed_GenerateInitial_Seed;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UpdateSettingValues_self_CastInput = CallFunc_UpdateSettingValues_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetWeaponSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetWeaponSelection(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetWeaponSelection");

	Params::UUI_StormMode_Menu_NewRun_C_ResetWeaponSelection_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateWeaponName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_Menu_NewRun_C::UpdateWeaponName(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateWeaponName");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateWeaponName_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetCharacterSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetCharacterSelection(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetCharacterSelection");

	Params::UUI_StormMode_Menu_NewRun_C_ResetCharacterSelection_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ResetButtonsHighlight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::ResetButtonsHighlight(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ResetButtonsHighlight");

	Params::UUI_StormMode_Menu_NewRun_C_ResetButtonsHighlight_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateCharName
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)

void UUI_StormMode_Menu_NewRun_C::UpdateCharName(class FText InText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateCharName");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateCharName_Params Parms{};

	Parms.InText = InText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetParentRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::SetParentRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUserWidget*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SetParentRef");

	Params::UUI_StormMode_Menu_NewRun_C_SetParentRef_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Navigate_Up_Down
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetButtonWidgetFromIndex_Output                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::Navigate_Up_Down(bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Index, int32 Delta, class UUserWidget* Local_Button, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, class UUserWidget* CallFunc_GetButtonWidgetFromIndex_Output, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Navigate_Up_Down");

	Params::UUI_StormMode_Menu_NewRun_C_Navigate_Up_Down_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_Button = Local_Button;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.CallFunc_GetButtonWidgetFromIndex_Output = CallFunc_GetButtonWidgetFromIndex_Output;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.Navigate_Left_Right
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetCurrentButtons_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetIndexFromButton_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetButtonWidgetFromIndex_Output                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsButtonEnabled_Enabled_                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::Navigate_Left_Right(bool CustomIndex, bool SkipIndexCheck, bool SkipSound, class UUserWidget* Widget, int32 Index, int32 Delta, class UUserWidget* Local_SelectedButton, class UUserWidget* Local_Button, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetCurrentButtons_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_GetIndexFromButton_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUserWidget* CallFunc_GetButtonWidgetFromIndex_Output, int32 CallFunc_Clamp_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsButtonEnabled_Enabled_, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "Navigate_Left_Right");

	Params::UUI_StormMode_Menu_NewRun_C_Navigate_Left_Right_Params Parms{};

	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Widget = Widget;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Button = Local_Button;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentButtons_ReturnValue = CallFunc_GetCurrentButtons_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIndexFromButton_ReturnValue = CallFunc_GetIndexFromButton_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetButtonWidgetFromIndex_Output = CallFunc_GetButtonWidgetFromIndex_Output;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsButtonEnabled_Enabled_ = CallFunc_IsButtonEnabled_Enabled_;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_Value_Next_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::NavigationRight(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Next_self_CastInput, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavigationRight");

	Params::UUI_StormMode_Menu_NewRun_C_NavigationRight_Params Parms{};

	Parms.CallFunc_Value_Next_self_CastInput = CallFunc_Value_Next_self_CastInput;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_Value_Previous_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::NavigationLeft(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_Value_Previous_self_CastInput, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavigationLeft");

	Params::UUI_StormMode_Menu_NewRun_C_NavigationLeft_Params Parms{};

	Parms.CallFunc_Value_Previous_self_CastInput = CallFunc_Value_Previous_self_CastInput;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavigationBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_DeactivateButton_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_DeactivateButton_self_CastInput_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyUnlockedShadeForShell_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_ActivateButton_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_StormMode_Menu_C*        K2Node_DynamicCast_AsUI_Storm_Mode_Menu                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_StormMode_Menu_NewRun_C::NavigationBack(TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1, bool CallFunc_HasAnyUnlockedShadeForShell_ReturnValue, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUI_StormMode_Menu_C* K2Node_DynamicCast_AsUI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavigationBack");

	Params::UUI_StormMode_Menu_NewRun_C_NavigationBack_Params Parms{};

	Parms.CallFunc_DeactivateButton_self_CastInput = CallFunc_DeactivateButton_self_CastInput;
	Parms.CallFunc_DeactivateButton_self_CastInput_1 = CallFunc_DeactivateButton_self_CastInput_1;
	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;
	Parms.CallFunc_HighlightButton_self_CastInput_1 = CallFunc_HighlightButton_self_CastInput_1;
	Parms.CallFunc_HasAnyUnlockedShadeForShell_ReturnValue = CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;
	Parms.CallFunc_ActivateButton_self_CastInput = CallFunc_ActivateButton_self_CastInput;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsUI_Storm_Mode_Menu = K2Node_DynamicCast_AsUI_Storm_Mode_Menu;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.UpdateLastIndex
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>         CallFunc_GetCurrentButtons_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::UpdateLastIndex(TArray<class UUserWidget*>& CallFunc_GetCurrentButtons_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "UpdateLastIndex");

	Params::UUI_StormMode_Menu_NewRun_C_UpdateLastIndex_Params Parms{};

	Parms.CallFunc_GetCurrentButtons_ReturnValue = CallFunc_GetCurrentButtons_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UUserWidget*>         K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array_2                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array_3                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_MakeArray_Array_4                                         (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::SetButtons(TArray<class UUserWidget*>& K2Node_MakeArray_Array, TArray<class UUserWidget*>& K2Node_MakeArray_Array_1, TArray<class UUserWidget*>& K2Node_MakeArray_Array_2, TArray<class UUserWidget*>& K2Node_MakeArray_Array_3, TArray<class UUserWidget*>& K2Node_MakeArray_Array_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SetButtons");

	Params::UUI_StormMode_Menu_NewRun_C_SetButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetButtonWidgetFromIndex
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Output                                                           (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         CallFunc_GetCurrentButtons_ReturnValue                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::GetButtonWidgetFromIndex(int32 Index, class UUserWidget** Output, TArray<class UUserWidget*>& CallFunc_GetCurrentButtons_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetButtonWidgetFromIndex");

	Params::UUI_StormMode_Menu_NewRun_C_GetButtonWidgetFromIndex_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_GetCurrentButtons_ReturnValue = CallFunc_GetCurrentButtons_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (Output != nullptr)
		*Output = Parms.Output;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.GetCurrentButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUserWidget*>         ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUserWidget*>         K2Node_Select_Default                                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

TArray<class UUserWidget*> UUI_StormMode_Menu_NewRun_C::GetCurrentButtons(int32 Temp_int_Variable, TArray<class UUserWidget*>& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "GetCurrentButtons");

	Params::UUI_StormMode_Menu_NewRun_C_GetCurrentButtons_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavDown
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnSettingConfirmed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnSettingConfirmed(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnSettingConfirmed");

	Params::UUI_StormMode_Menu_NewRun_C_OnSettingConfirmed_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavSpecialButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavSpecialButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavSpecialButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnClose
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnWeaponSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnWeaponSelected(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnWeaponSelected");

	Params::UUI_StormMode_Menu_NewRun_C_OnWeaponSelected_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnCharacterSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnCharacterSelected(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnCharacterSelected");

	Params::UUI_StormMode_Menu_NewRun_C_OnCharacterSelected_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnWeaponHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EComboTypes             Weapon                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnWeaponHighlighted(enum class EComboTypes Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnWeaponHighlighted");

	Params::UUI_StormMode_Menu_NewRun_C_OnWeaponHighlighted_Params Parms{};

	Parms.Weapon = Weapon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnCharacterHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnCharacterHighlighted(enum class EArmorTypes Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnCharacterHighlighted");

	Params::UUI_StormMode_Menu_NewRun_C_OnCharacterHighlighted_Params Parms{};

	Parms.Character = Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavConfirm()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavConfirm");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_ApplyButton_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::BndEvt__UI_StormMode_Menu_ApplyButton_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "BndEvt__UI_StormMode_Menu_ApplyButton_K2Node_ComponentBoundEvent_1_OnConfirmed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.NavBack
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::NavBack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "NavBack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetParentWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::SetParentWidget(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SetParentWidget");

	Params::UUI_StormMode_Menu_NewRun_C_SetParentWidget_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetSeedManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_SeedManager_C*           SeedManager                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::SetSeedManager(class ABP_SeedManager_C* SeedManager)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SetSeedManager");

	Params::UUI_StormMode_Menu_NewRun_C_SetSeedManager_Params Parms{};

	Parms.SeedManager = SeedManager;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.SetSaveGameRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           SaveGame                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 MapStateSaveGame                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      SlotName_MapState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::SetSaveGameRef(int32 Slot, class UServerSaveGame_C* SaveGame, const class FString& SlotName, class UMapState_C* MapStateSaveGame, const class FString& SlotName_MapState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "SetSaveGameRef");

	Params::UUI_StormMode_Menu_NewRun_C_SetSaveGameRef_Params Parms{};

	Parms.Slot = Slot;
	Parms.SaveGame = SaveGame;
	Parms.SlotName = SlotName;
	Parms.MapStateSaveGame = MapStateSaveGame;
	Parms.SlotName_MapState = SlotName_MapState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_2_OnConfirmSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_2_OnConfirmSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_2_OnConfirmSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_4_OnCancelSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_4_OnCancelSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "BndEvt__UI_StormMode_Menu_Warning_K2Node_ComponentBoundEvent_4_OnCancelSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnRiposteHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnRiposteHighlighted(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnRiposteHighlighted");

	Params::UUI_StormMode_Menu_NewRun_C_OnRiposteHighlighted_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnRiposteSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ERiposteTypes           Riposte                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnRiposteSelected(enum class ERiposteTypes Riposte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnRiposteSelected");

	Params::UUI_StormMode_Menu_NewRun_C_OnRiposteSelected_Params Parms{};

	Parms.Riposte = Riposte;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.OnButtonHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::OnButtonHovered(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "OnButtonHovered");

	Params::UUI_StormMode_Menu_NewRun_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_StartRun_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_StormMode_Menu_NewRun_C::BndEvt__UI_StormMode_Menu_StartRun_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "BndEvt__UI_StormMode_Menu_StartRun_K2Node_ComponentBoundEvent_3_OnButtonClicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature");

	Params::UUI_StormMode_Menu_NewRun_C_BndEvt__UI_StormMode_Menu_ShadeButton_K2Node_ComponentBoundEvent_5_OnSettingConfirmed__DelegateSignature_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_StormMode_Menu_NewRun.UI_StormMode_Menu_NewRun_C.ExecuteUbergraph_UI_StormMode_Menu_NewRun
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             K2Node_Event_Weapon_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUnlockedShadeForShell_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EComboTypes             K2Node_Event_Weapon                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             K2Node_Event_Character                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetWeaponNames_ReturnValue                              (None)
// TArray<int32>                      CallFunc_GetUnlockedShadeDataForShell_Indices                    (ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_GetUnlockedShadeDataForShell_Texts                      (ReferenceParm, HasGetValueTypeHash)
// int32                              K2Node_Event_Value                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetButtonWidgetFromIndex_Output                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_SeedManager_C*           K2Node_Event_SeedManager                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Slot                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UServerSaveGame_C*           K2Node_Event_SaveGame                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName                                            (ZeroConstructor, HasGetValueTypeHash)
// class UMapState_C*                 K2Node_Event_MapStateSaveGame                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_SlotName_MapState                                   (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasRunStartedFromSave_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasRunStartedFromPC_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_NavBack_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_NavConfirm_self_CastInput                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_NavLeft_self_CastInput                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenu_C>CallFunc_NavRight_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ERiposteTypes           K2Node_Event_Riposte_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ERiposteTypes           K2Node_Event_Riposte                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyUnlockedShadeForShell_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetShellNameSimple_ShellName                            (None)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_HighlightButton_self_CastInput_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_ActivateButton_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_ActivateButton_self_CastInput_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_ActivateButton_self_CastInput_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormModeMenuButton_C>CallFunc_DeactivateButton_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Value                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_StormMode_Menu_NewRun_C::ExecuteUbergraph_UI_StormMode_Menu_NewRun(int32 EntryPoint, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button, bool K2Node_DynamicCast_bSuccess, enum class EComboTypes K2Node_Event_Weapon_1, enum class EArmorTypes K2Node_Event_Character_1, bool CallFunc_HasAnyUnlockedShadeForShell_ReturnValue, enum class EComboTypes K2Node_Event_Weapon, enum class EArmorTypes K2Node_Event_Character, class FText CallFunc_GetWeaponNames_ReturnValue, TArray<int32>& CallFunc_GetUnlockedShadeDataForShell_Indices, TArray<class FText>& CallFunc_GetUnlockedShadeDataForShell_Texts, int32 K2Node_Event_Value, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUserWidget* CallFunc_GetButtonWidgetFromIndex_Output, TScriptInterface<class IBPI_StormModeMenuButton_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* K2Node_Event_Widget_1, class ABP_SeedManager_C* K2Node_Event_SeedManager, int32 K2Node_Event_Slot, class UServerSaveGame_C* K2Node_Event_SaveGame, const class FString& K2Node_Event_SlotName, class UMapState_C* K2Node_Event_MapStateSaveGame, const class FString& K2Node_Event_SlotName_MapState, bool CallFunc_GetHasRunStartedFromSave_ReturnValue, bool CallFunc_GetHasRunStartedFromPC_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavBack_self_CastInput, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavConfirm_self_CastInput, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavLeft_self_CastInput, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavRight_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, enum class ERiposteTypes K2Node_Event_Riposte_1, enum class ERiposteTypes K2Node_Event_Riposte, bool CallFunc_HasAnyUnlockedShadeForShell_ReturnValue_1, class FText CallFunc_GetShellNameSimple_ShellName, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_HighlightButton_self_CastInput_2, class UUserWidget* K2Node_Event_Widget, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput_1, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_ActivateButton_self_CastInput_2, TScriptInterface<class IBPI_StormModeMenuButton_C> CallFunc_DeactivateButton_self_CastInput, int32 K2Node_ComponentBoundEvent_Value, int32 CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_StormMode_Menu_NewRun_C", "ExecuteUbergraph_UI_StormMode_Menu_NewRun");

	Params::UUI_StormMode_Menu_NewRun_C_ExecuteUbergraph_UI_StormMode_Menu_NewRun_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Weapon_1 = K2Node_Event_Weapon_1;
	Parms.K2Node_Event_Character_1 = K2Node_Event_Character_1;
	Parms.CallFunc_HasAnyUnlockedShadeForShell_ReturnValue = CallFunc_HasAnyUnlockedShadeForShell_ReturnValue;
	Parms.K2Node_Event_Weapon = K2Node_Event_Weapon;
	Parms.K2Node_Event_Character = K2Node_Event_Character;
	Parms.CallFunc_GetWeaponNames_ReturnValue = CallFunc_GetWeaponNames_ReturnValue;
	Parms.CallFunc_GetUnlockedShadeDataForShell_Indices = CallFunc_GetUnlockedShadeDataForShell_Indices;
	Parms.CallFunc_GetUnlockedShadeDataForShell_Texts = CallFunc_GetUnlockedShadeDataForShell_Texts;
	Parms.K2Node_Event_Value = K2Node_Event_Value;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetButtonWidgetFromIndex_Output = CallFunc_GetButtonWidgetFromIndex_Output;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_SeedManager = K2Node_Event_SeedManager;
	Parms.K2Node_Event_Slot = K2Node_Event_Slot;
	Parms.K2Node_Event_SaveGame = K2Node_Event_SaveGame;
	Parms.K2Node_Event_SlotName = K2Node_Event_SlotName;
	Parms.K2Node_Event_MapStateSaveGame = K2Node_Event_MapStateSaveGame;
	Parms.K2Node_Event_SlotName_MapState = K2Node_Event_SlotName_MapState;
	Parms.CallFunc_GetHasRunStartedFromSave_ReturnValue = CallFunc_GetHasRunStartedFromSave_ReturnValue;
	Parms.CallFunc_GetHasRunStartedFromPC_ReturnValue = CallFunc_GetHasRunStartedFromPC_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_NavBack_self_CastInput = CallFunc_NavBack_self_CastInput;
	Parms.CallFunc_NavConfirm_self_CastInput = CallFunc_NavConfirm_self_CastInput;
	Parms.CallFunc_NavLeft_self_CastInput = CallFunc_NavLeft_self_CastInput;
	Parms.CallFunc_NavRight_self_CastInput = CallFunc_NavRight_self_CastInput;
	Parms.CallFunc_HighlightButton_self_CastInput = CallFunc_HighlightButton_self_CastInput;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.K2Node_Event_Riposte_1 = K2Node_Event_Riposte_1;
	Parms.K2Node_Event_Riposte = K2Node_Event_Riposte;
	Parms.CallFunc_HasAnyUnlockedShadeForShell_ReturnValue_1 = CallFunc_HasAnyUnlockedShadeForShell_ReturnValue_1;
	Parms.CallFunc_GetShellNameSimple_ShellName = CallFunc_GetShellNameSimple_ShellName;
	Parms.CallFunc_HighlightButton_self_CastInput_1 = CallFunc_HighlightButton_self_CastInput_1;
	Parms.CallFunc_HighlightButton_self_CastInput_2 = CallFunc_HighlightButton_self_CastInput_2;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_ActivateButton_self_CastInput = CallFunc_ActivateButton_self_CastInput;
	Parms.CallFunc_ActivateButton_self_CastInput_1 = CallFunc_ActivateButton_self_CastInput_1;
	Parms.CallFunc_ActivateButton_self_CastInput_2 = CallFunc_ActivateButton_self_CastInput_2;
	Parms.CallFunc_DeactivateButton_self_CastInput = CallFunc_DeactivateButton_self_CastInput;
	Parms.K2Node_ComponentBoundEvent_Value = K2Node_ComponentBoundEvent_Value;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


