#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_Rune_ToolTip.UI_Rune_ToolTip_C
// (None)

class UClass* UUI_Rune_ToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_Rune_ToolTip_C");

	return Clss;
}


// UI_Rune_ToolTip_C UI_Rune_ToolTip.Default__UI_Rune_ToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_Rune_ToolTip_C* UUI_Rune_ToolTip_C::GetDefaultObj()
{
	static class UUI_Rune_ToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_Rune_ToolTip_C*>(UUI_Rune_ToolTip_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.HandleBackground
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

void UUI_Rune_ToolTip_C::HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "HandleBackground");

	Params::UUI_Rune_ToolTip_C_HandleBackground_Params Parms{};

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


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetHeaderText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_ToolTip_C::SetHeaderText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetHeaderText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetIsMisc
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_Rune_ToolTip_C::GetIsMisc(bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetIsMisc");

	Params::UUI_Rune_ToolTip_C_GetIsMisc_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetTierColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_ToolTip_C::SetTierColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetTierColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneTierVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_Rune_ToolTip_C::GetRuneTierVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetRuneTierVisibility");

	Params::UUI_Rune_ToolTip_C_GetRuneTierVisibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneTierText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUI_Rune_ToolTip_C::GetRuneTierText(class FText* Text, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetRuneTierText");

	Params::UUI_Rune_ToolTip_C_GetRuneTierText_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTier
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRuneTierText_Text                                    (None)

void UUI_Rune_ToolTip_C::SetRuneTier(class FText CallFunc_GetRuneTierText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetRuneTier");

	Params::UUI_Rune_ToolTip_C_SetRuneTier_Params Parms{};

	Parms.CallFunc_GetRuneTierText_Text = CallFunc_GetRuneTierText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTextureIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_ToolTip_C::SetRuneTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetRuneTextureIcon");

	Params::UUI_Rune_ToolTip_C_SetRuneTextureIcon_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneEffect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRuneEffectText_Text                                  (None)

void UUI_Rune_ToolTip_C::SetRuneEffect(class FText CallFunc_GetRuneEffectText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetRuneEffect");

	Params::UUI_Rune_ToolTip_C_SetRuneEffect_Params Parms{};

	Parms.CallFunc_GetRuneEffectText_Text = CallFunc_GetRuneEffectText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneEffectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue                       (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue_1                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_LegendaryEffectText_Text_Out                       (None)
// class FText                        CallFunc_Rune_BuildText_X__ReturnValue                           (None)
// class FText                        CallFunc_Rune_BuildText_X_ReturnValue                            (None)
// class FText                        CallFunc_Rune_BuildText__X_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

void UUI_Rune_ToolTip_C::GetRuneEffectText(class FText* Text, bool Temp_bool_Variable, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetRuneEffectText");

	Params::UUI_Rune_ToolTip_C_GetRuneEffectText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue = CallFunc_Rune_BuildMiscText__X_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue_1 = CallFunc_Rune_BuildMiscText__X_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Rune_LegendaryEffectText_Text_Out = CallFunc_Rune_LegendaryEffectText_Text_Out;
	Parms.CallFunc_Rune_BuildText_X__ReturnValue = CallFunc_Rune_BuildText_X__ReturnValue;
	Parms.CallFunc_Rune_BuildText_X_ReturnValue = CallFunc_Rune_BuildText_X_ReturnValue;
	Parms.CallFunc_Rune_BuildText__X_ReturnValue = CallFunc_Rune_BuildText__X_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetRuneNameText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        Text                                                             (Parm, OutParm)
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
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUI_Rune_ToolTip_C::GetRuneNameText(class FText* Text, int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetRuneNameText");

	Params::UUI_Rune_ToolTip_C_GetRuneNameText_Params Parms{};

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
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRuneNameText_Text                                    (None)

void UUI_Rune_ToolTip_C::SetRuneName(class FText CallFunc_GetRuneNameText_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetRuneName");

	Params::UUI_Rune_ToolTip_C_SetRuneName_Params Parms{};

	Parms.CallFunc_GetRuneNameText_Text = CallFunc_GetRuneNameText_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetRuneTierColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetTierColors_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_Rune_ToolTip_C::SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetRuneTierColor");

	Params::UUI_Rune_ToolTip_C_SetRuneTierColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTierColors_ReturnValue = CallFunc_GetTierColors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.GetAllRuneDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_Rune_ToolTip_C::GetAllRuneDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "GetAllRuneDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.SetCurrentRune
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_Rune_Type          RuneType                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category      RuneCategory                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                CurrentRune                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               HasRune_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_Rune_ToolTip_C::SetCurrentRune(enum class Enum_Rune_Type RuneType, enum class Enum_Rune_Category RuneCategory, const struct FStruct_Rune& CurrentRune, bool HasRune_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "SetCurrentRune");

	Params::UUI_Rune_ToolTip_C_SetCurrentRune_Params Parms{};

	Parms.RuneType = RuneType;
	Parms.RuneCategory = RuneCategory;
	Parms.CurrentRune = CurrentRune;
	Parms.HasRune_ = HasRune_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_Rune_ToolTip.UI_Rune_ToolTip_C.ExecuteUbergraph_UI_Rune_ToolTip
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Type          K2Node_CustomEvent_RuneType                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Rune_Category      K2Node_CustomEvent_RuneCategory                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_Rune                K2Node_CustomEvent_CurrentRune                                   (HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_HasRune_                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// enum class ESlateVisibility        CallFunc_GetRuneTierVisibility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsMisc_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)

void UUI_Rune_ToolTip_C::ExecuteUbergraph_UI_Rune_ToolTip(int32 EntryPoint, enum class Enum_Rune_Type K2Node_CustomEvent_RuneType, enum class Enum_Rune_Category K2Node_CustomEvent_RuneCategory, const struct FStruct_Rune& K2Node_CustomEvent_CurrentRune, bool K2Node_CustomEvent_HasRune_, class FText Temp_text_Variable, class FText Temp_text_Variable_1, enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue, bool Temp_bool_Variable, bool CallFunc_GetIsMisc_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_Rune_ToolTip_C", "ExecuteUbergraph_UI_Rune_ToolTip");

	Params::UUI_Rune_ToolTip_C_ExecuteUbergraph_UI_Rune_ToolTip_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_RuneType = K2Node_CustomEvent_RuneType;
	Parms.K2Node_CustomEvent_RuneCategory = K2Node_CustomEvent_RuneCategory;
	Parms.K2Node_CustomEvent_CurrentRune = K2Node_CustomEvent_CurrentRune;
	Parms.K2Node_CustomEvent_HasRune_ = K2Node_CustomEvent_HasRune_;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_GetRuneTierVisibility_ReturnValue = CallFunc_GetRuneTierVisibility_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsMisc_ReturnValue = CallFunc_GetIsMisc_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


