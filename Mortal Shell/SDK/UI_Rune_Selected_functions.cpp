#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Rune_Selected.UI_Rune_Selected_C
// (None)

class UClass* UUI_Rune_Selected_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Rune_Selected_C");

	return Clss;
}


// UI_Rune_Selected_C UI_Rune_Selected.Default__UI_Rune_Selected_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Rune_Selected_C* UUI_Rune_Selected_C::GetDefaultObj()
{
	static class UUI_Rune_Selected_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Rune_Selected_C*>(UUI_Rune_Selected_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Rune_Selected.UI_Rune_Selected_C.AppendPreviousMiscX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Rune_Misc_X                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsUpgradeMisc                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Local_Append                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetRuneMiscX_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_GetRuneMiscX_Rune_Misc_X                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_Rune_Selected_C::AppendPreviousMiscX(float* Rune_Misc_X, bool* IsUpgradeMisc, bool Local_Append, const class FString& Temp_string_Variable, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneMiscX_ReturnValue, float CallFunc_GetRuneMiscX_Rune_Misc_X, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "AppendPreviousMiscX");

	Params::UUI_Rune_Selected_C_AppendPreviousMiscX_Params Parms{};

	Parms.Local_Append = Local_Append;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRuneMiscX_ReturnValue = CallFunc_GetRuneMiscX_ReturnValue;
	Parms.CallFunc_GetRuneMiscX_Rune_Misc_X = CallFunc_GetRuneMiscX_Rune_Misc_X;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Rune_Misc_X != nullptr)
		*Rune_Misc_X = Parms.Rune_Misc_X;

	if (IsUpgradeMisc != nullptr)
		*IsUpgradeMisc = Parms.IsUpgradeMisc;

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.AppendPreviousX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetRuneX_ReturnValue                                    (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_Rune_Selected_C::AppendPreviousX(bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneX_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "AppendPreviousX");

	Params::UUI_Rune_Selected_C_AppendPreviousX_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRuneX_ReturnValue = CallFunc_GetRuneX_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.AppendPreviousX%
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetRuneX__ReturnValue                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

class FString UUI_Rune_Selected_C::AppendPreviousX_(bool Temp_bool_Variable, const class FString& Temp_string_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_GetRuneX__ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "AppendPreviousX%");

	Params::UUI_Rune_Selected_C_AppendPreviousX__Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetRuneX__ReturnValue = CallFunc_GetRuneX__ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleLevelUpType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_LevelToNumber_ReturnValue                               (None)
// class FText                        CallFunc_LevelToNumber_ReturnValue_1                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::HandleLevelUpType(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_LevelToNumber_ReturnValue, class FText CallFunc_LevelToNumber_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleLevelUpType");

	Params::UUI_Rune_Selected_C_HandleLevelUpType_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_LevelToNumber_ReturnValue = CallFunc_LevelToNumber_ReturnValue;
	Parms.CallFunc_LevelToNumber_ReturnValue_1 = CallFunc_LevelToNumber_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.LevelToNumber
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_5                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_6                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_7                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_8                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_9                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_10                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_Rune_Selected_C::LevelToNumber(int32 Index, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "LevelToNumber");

	Params::UUI_Rune_Selected_C_LevelToNumber_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.Temp_string_Variable_5 = Temp_string_Variable_5;
	Parms.Temp_string_Variable_6 = Temp_string_Variable_6;
	Parms.Temp_string_Variable_7 = Temp_string_Variable_7;
	Parms.Temp_string_Variable_8 = Temp_string_Variable_8;
	Parms.Temp_string_Variable_9 = Temp_string_Variable_9;
	Parms.Temp_string_Variable_10 = Temp_string_Variable_10;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleRuneCurrentLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_LevelToNumber_ReturnValue                               (None)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::HandleRuneCurrentLevel(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_LevelToNumber_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleRuneCurrentLevel");

	Params::UUI_Rune_Selected_C_HandleRuneCurrentLevel_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_LevelToNumber_ReturnValue = CallFunc_LevelToNumber_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleUpgradeTypeImage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_UpgradeType        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::HandleUpgradeTypeImage(enum class Enum_UpgradeType Temp_byte_Variable, class UTexture* Temp_object_Variable, class UTexture* Temp_object_Variable_1, class UTexture* Temp_object_Variable_2, class UTexture* Temp_object_Variable_3, class UTexture* Temp_object_Variable_4, class UTexture* Temp_object_Variable_5, class UTexture* Temp_object_Variable_6, class UTexture* K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleUpgradeTypeImage");

	Params::UUI_Rune_Selected_C_HandleUpgradeTypeImage_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  Local_Texture                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Tier          Temp_byte_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Selected_C::HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleBackground");

	Params::UUI_Rune_Selected_C_HandleBackground_Params Parms{};

	Parms.Local_Texture = Local_Texture;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleTierVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetRuneTierVisibility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::HandleTierVisibility(enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleTierVisibility");

	Params::UUI_Rune_Selected_C_HandleTierVisibility_Params Parms{};

	Parms.CallFunc_GetRuneTierVisibility_ReturnValue = CallFunc_GetRuneTierVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.PreviewTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::PreviewTooltip(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "PreviewTooltip");

	Params::UUI_Rune_Selected_C_PreviewTooltip_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.PreviewRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDataTable*                  CallFunc_GetRunesFromTable_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                K2Node_MakeStruct_Struct_Rune                                    (HasGetValueTypeHash)

void UUI_Rune_Selected_C::PreviewRune(class UDataTable* CallFunc_GetRunesFromTable_ReturnValue, const struct FStruct_Rune& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FStruct_Rune& K2Node_MakeStruct_Struct_Rune)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "PreviewRune");

	Params::UUI_Rune_Selected_C_PreviewRune_Params Parms{};

	Parms.CallFunc_GetRunesFromTable_ReturnValue = CallFunc_GetRunesFromTable_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.K2Node_MakeStruct_Struct_Rune = K2Node_MakeStruct_Struct_Rune;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleRuneDescription
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRuneEffectText_Text                                  (None)

void UUI_Rune_Selected_C::HandleRuneDescription(class FText CallFunc_GetRuneEffectText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleRuneDescription");

	Params::UUI_Rune_Selected_C_HandleRuneDescription_Params Parms{};

	Parms.CallFunc_GetRuneEffectText_Text = CallFunc_GetRuneEffectText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.HandleRuneName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRuneTitleText_Text                                   (None)

void UUI_Rune_Selected_C::HandleRuneName(class FText CallFunc_GetRuneTitleText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "HandleRuneName");

	Params::UUI_Rune_Selected_C_HandleRuneName_Params Parms{};

	Parms.CallFunc_GetRuneTitleText_Text = CallFunc_GetRuneTitleText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.CheckIfAlreadyHasOpenRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FName>                CallFunc_GetOpenAreasRuneIDs_IDs                                 (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHasRuneFromID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Selected_C::CheckIfAlreadyHasOpenRune(TArray<class FName>& CallFunc_GetOpenAreasRuneIDs_IDs, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_GetHasRuneFromID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "CheckIfAlreadyHasOpenRune");

	Params::UUI_Rune_Selected_C_CheckIfAlreadyHasOpenRune_Params Parms{};

	Parms.CallFunc_GetOpenAreasRuneIDs_IDs = CallFunc_GetOpenAreasRuneIDs_IDs;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetHasRuneFromID_ReturnValue = CallFunc_GetHasRuneFromID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.GetRuneTierVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Rune_Selected_C::GetRuneTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "GetRuneTierVisibility");

	Params::UUI_Rune_Selected_C_GetRuneTierVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.SetTierColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::SetTierColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "SetTierColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.SetRuneTextureIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::SetRuneTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "SetRuneTextureIcon");

	Params::UUI_Rune_Selected_C_SetRuneTextureIcon_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.GetRuneEffectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_AppendPreviousMiscX_Rune_Misc_X                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AppendPreviousMiscX_IsUpgradeMisc                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_AppendPreviousMiscX_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue                       (None)
// class FString                      CallFunc_AppendPreviousX_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendPreviousX_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_AppendPreviousX__ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue_1                     (None)
// class FText                        CallFunc_Rune_LegendaryEffectText_Text_Out                       (None)
// class FText                        CallFunc_Rune_BuildText_X__ReturnValue                           (None)
// class FText                        CallFunc_Rune_BuildText_X_ReturnValue                            (None)
// class FText                        CallFunc_Rune_BuildText__X_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UUI_Rune_Selected_C::GetRuneEffectText(class FText* Text, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, float CallFunc_AppendPreviousMiscX_Rune_Misc_X, bool CallFunc_AppendPreviousMiscX_IsUpgradeMisc, const class FString& CallFunc_AppendPreviousMiscX_ReturnValue, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, const class FString& CallFunc_AppendPreviousX_ReturnValue, const class FString& CallFunc_AppendPreviousX_ReturnValue_1, const class FString& CallFunc_AppendPreviousX__ReturnValue, float K2Node_Select_Default, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "GetRuneEffectText");

	Params::UUI_Rune_Selected_C_GetRuneEffectText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_AppendPreviousMiscX_Rune_Misc_X = CallFunc_AppendPreviousMiscX_Rune_Misc_X;
	Parms.CallFunc_AppendPreviousMiscX_IsUpgradeMisc = CallFunc_AppendPreviousMiscX_IsUpgradeMisc;
	Parms.CallFunc_AppendPreviousMiscX_ReturnValue = CallFunc_AppendPreviousMiscX_ReturnValue;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue = CallFunc_Rune_BuildMiscText__X_ReturnValue;
	Parms.CallFunc_AppendPreviousX_ReturnValue = CallFunc_AppendPreviousX_ReturnValue;
	Parms.CallFunc_AppendPreviousX_ReturnValue_1 = CallFunc_AppendPreviousX_ReturnValue_1;
	Parms.CallFunc_AppendPreviousX__ReturnValue = CallFunc_AppendPreviousX__ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue_1 = CallFunc_Rune_BuildMiscText__X_ReturnValue_1;
	Parms.CallFunc_Rune_LegendaryEffectText_Text_Out = CallFunc_Rune_LegendaryEffectText_Text_Out;
	Parms.CallFunc_Rune_BuildText_X__ReturnValue = CallFunc_Rune_BuildText_X__ReturnValue;
	Parms.CallFunc_Rune_BuildText_X_ReturnValue = CallFunc_Rune_BuildText_X_ReturnValue;
	Parms.CallFunc_Rune_BuildText__X_ReturnValue = CallFunc_Rune_BuildText__X_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.GetAllRuneDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSlotCurrentRune_CurrentRune                          (HasGetValueTypeHash)
// bool                               CallFunc_GetSlotCurrentRune_HasRune_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_GetSlotMiscRune_Current_Rune_Misc                       (HasGetValueTypeHash)
// bool                               CallFunc_GetSlotMiscRune_HasRune_                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Selected_C::GetAllRuneDetails(bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStruct_Rune& CallFunc_GetSlotCurrentRune_CurrentRune, bool CallFunc_GetSlotCurrentRune_HasRune_, const struct FStruct_Rune& CallFunc_GetSlotMiscRune_Current_Rune_Misc, bool CallFunc_GetSlotMiscRune_HasRune_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "GetAllRuneDetails");

	Params::UUI_Rune_Selected_C_GetAllRuneDetails_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSlotCurrentRune_CurrentRune = CallFunc_GetSlotCurrentRune_CurrentRune;
	Parms.CallFunc_GetSlotCurrentRune_HasRune_ = CallFunc_GetSlotCurrentRune_HasRune_;
	Parms.CallFunc_GetSlotMiscRune_Current_Rune_Misc = CallFunc_GetSlotMiscRune_Current_Rune_Misc;
	Parms.CallFunc_GetSlotMiscRune_HasRune_ = CallFunc_GetSlotMiscRune_HasRune_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.GetRuneTierText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        Temp_text_Variable                                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable_2                                             (None)
// bool                               CallFunc_IsSpecialRune__ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

class FText UUI_Rune_Selected_C::GetRuneTierText(class FText Temp_text_Variable, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool CallFunc_IsSpecialRune__ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "GetRuneTierText");

	Params::UUI_Rune_Selected_C_GetRuneTierText_Params Parms{};

	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_IsSpecialRune__ReturnValue = CallFunc_IsSpecialRune__ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.GetRuneTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUI_Rune_Selected_C::GetRuneTitleText(class FText* Text, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "GetRuneTitleText");

	Params::UUI_Rune_Selected_C_GetRuneTitleText_Params Parms{};

	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.SetRuneTierColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetTierColors_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "SetRuneTierColor");

	Params::UUI_Rune_Selected_C_SetRuneTierColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTierColors_ReturnValue = CallFunc_GetTierColors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.SetHighlighted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_Highlighted                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::SetHighlighted(bool Condition, bool Local_Highlighted, bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "SetHighlighted");

	Params::UUI_Rune_Selected_C_SetHighlighted_Params Parms{};

	Parms.Condition = Condition;
	Parms.Local_Highlighted = Local_Highlighted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.SetRune
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Rune                Rune                                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               HideToolTip                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_UpgradeType        UpgradeType                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::SetRune(const struct FStruct_Rune& Rune, bool HideToolTip, enum class Enum_UpgradeType UpgradeType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "SetRune");

	Params::UUI_Rune_Selected_C_SetRune_Params Parms{};

	Parms.Rune = Rune;
	Parms.HideToolTip = HideToolTip;
	Parms.UpgradeType = UpgradeType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "BndEvt__Button_Rune_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "BndEvt__Button_Rune_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Selected_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "PreConstruct");

	Params::UUI_Rune_Selected_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_Selected_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "Tick");

	Params::UUI_Rune_Selected_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.ScrollBox_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::ScrollBox_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "ScrollBox_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.Reset_Offset_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::Reset_Offset_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "Reset_Offset_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.Reset_Offset_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_Selected_C::Reset_Offset_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "Reset_Offset_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_Selected.UI_Rune_Selected_C.ExecuteUbergraph_UI_Rune_Selected
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_CustomEvent_Rune                                          (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HideToolTip                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_UpgradeType        K2Node_CustomEvent_UpgradeType                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetRuneTierText_ReturnValue                             (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_Selected_C::ExecuteUbergraph_UI_Rune_Selected(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, const struct FStruct_Rune& K2Node_CustomEvent_Rune, bool K2Node_CustomEvent_HideToolTip, enum class Enum_UpgradeType K2Node_CustomEvent_UpgradeType, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_GetRuneTierText_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_2, float CallFunc_FClamp_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_Selected_C", "ExecuteUbergraph_UI_Rune_Selected");

	Params::UUI_Rune_Selected_C_ExecuteUbergraph_UI_Rune_Selected_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.K2Node_CustomEvent_Rune = K2Node_CustomEvent_Rune;
	Parms.K2Node_CustomEvent_HideToolTip = K2Node_CustomEvent_HideToolTip;
	Parms.K2Node_CustomEvent_UpgradeType = K2Node_CustomEvent_UpgradeType;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetRuneTierText_ReturnValue = CallFunc_GetRuneTierText_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue_1 = CallFunc_GetScrollOffsetOfEnd_ReturnValue_1;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue_2 = CallFunc_GetScrollOffsetOfEnd_ReturnValue_2;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


