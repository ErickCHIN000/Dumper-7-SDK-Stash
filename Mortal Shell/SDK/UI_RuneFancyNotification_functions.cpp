#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RuneFancyNotification.UI_RuneFancyNotification_C
// (None)

class UClass* UUI_RuneFancyNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RuneFancyNotification_C");

	return Clss;
}


// UI_RuneFancyNotification_C UI_RuneFancyNotification.Default__UI_RuneFancyNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RuneFancyNotification_C* UUI_RuneFancyNotification_C::GetDefaultObj()
{
	static class UUI_RuneFancyNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RuneFancyNotification_C*>(UUI_RuneFancyNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetPlaybackSpeed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_Notify_StormMode_DurationTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_RuneFancyNotification_C::GetPlaybackSpeed(enum class Enum_Notify_StormMode_Duration Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetPlaybackSpeed");

	Params::UUI_RuneFancyNotification_C_GetPlaybackSpeed_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.HandleBackground
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

void UUI_RuneFancyNotification_C::HandleBackground(class UTexture2D* Local_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, enum class Enum_Rune_Tier Temp_byte_Variable, class UTexture2D* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UTexture2D* CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "HandleBackground");

	Params::UUI_RuneFancyNotification_C_HandleBackground_Params Parms{};

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


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.TryLaunchLightning
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_Rain_C>K2Node_DynamicCast_AsBPI_Rain                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RuneFancyNotification_C::TryLaunchLightning(TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Rain_C> K2Node_DynamicCast_AsBPI_Rain, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "TryLaunchLightning");

	Params::UUI_RuneFancyNotification_C_TryLaunchLightning_Params Parms{};

	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Rain = K2Node_DynamicCast_AsBPI_Rain;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetMiscXValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasThisMiscRune__ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_Rune                CallFunc_HasThisMiscRune__Rune                                   (HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_RuneFancyNotification_C::GetMiscXValue(bool Temp_bool_Variable, bool CallFunc_HasThisMiscRune__ReturnValue, const struct FStruct_Rune& CallFunc_HasThisMiscRune__Rune, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetMiscXValue");

	Params::UUI_RuneFancyNotification_C_GetMiscXValue_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HasThisMiscRune__ReturnValue = CallFunc_HasThisMiscRune__ReturnValue;
	Parms.CallFunc_HasThisMiscRune__Rune = CallFunc_HasThisMiscRune__Rune;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.ShouldPlayHealEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Play_                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_GetSelectedShell_HasSelected                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_StormMode_GetSelectedShell_Shell                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RuneFancyNotification_C::ShouldPlayHealEffect(bool* Play_, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_StormMode_GetSelectedShell_HasSelected, enum class EArmorTypes CallFunc_StormMode_GetSelectedShell_Shell, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "ShouldPlayHealEffect");

	Params::UUI_RuneFancyNotification_C_ShouldPlayHealEffect_Params Parms{};

	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_StormMode_GetSelectedShell_HasSelected = CallFunc_StormMode_GetSelectedShell_HasSelected;
	Parms.CallFunc_StormMode_GetSelectedShell_Shell = CallFunc_StormMode_GetSelectedShell_Shell;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Play_ != nullptr)
		*Play_ = Parms.Play_;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.ShowHealEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneFancyNotification_C::ShowHealEffect(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "ShowHealEffect");

	Params::UUI_RuneFancyNotification_C_ShowHealEffect_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.BuildRune
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        CallFunc_GetRuneTierVisibility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue                       (None)
// class FText                        CallFunc_GetRuneEffectText_ReturnValue                           (None)
// class FText                        CallFunc_GetRuneTitleText_ReturnValue                            (None)

void UUI_RuneFancyNotification_C::BuildRune(enum class ESlateVisibility CallFunc_GetRuneTierVisibility_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, class FText CallFunc_GetRuneEffectText_ReturnValue, class FText CallFunc_GetRuneTitleText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "BuildRune");

	Params::UUI_RuneFancyNotification_C_BuildRune_Params Parms{};

	Parms.CallFunc_GetRuneTierVisibility_ReturnValue = CallFunc_GetRuneTierVisibility_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue = CallFunc_Rune_BuildMiscText__X_ReturnValue;
	Parms.CallFunc_GetRuneEffectText_ReturnValue = CallFunc_GetRuneEffectText_ReturnValue;
	Parms.CallFunc_GetRuneTitleText_ReturnValue = CallFunc_GetRuneTitleText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.SetTierColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::SetTierColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "SetTierColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetRuneTierVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_RuneFancyNotification_C::GetRuneTierVisibility(enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetRuneTierVisibility");

	Params::UUI_RuneFancyNotification_C_GetRuneTierVisibility_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetRuneTierText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_RuneFancyNotification_C::GetRuneTierText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetRuneTierText");

	Params::UUI_RuneFancyNotification_C_GetRuneTierText_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.SetRuneTextureIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneFancyNotification_C::SetRuneTextureIcon(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "SetRuneTextureIcon");

	Params::UUI_RuneFancyNotification_C_SetRuneTextureIcon_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetRuneEffectText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue                       (None)
// float                              CallFunc_GetMiscXValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Rune_BuildMiscText__X_ReturnValue_1                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Rune_LegendaryEffectText_Text_Out                       (None)
// class FText                        CallFunc_Rune_BuildText_X__ReturnValue                           (None)
// class FText                        CallFunc_Rune_BuildText_X_ReturnValue                            (None)
// class FText                        CallFunc_Rune_BuildText__X_ReturnValue                           (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)

class FText UUI_RuneFancyNotification_C::GetRuneEffectText(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue, float CallFunc_GetMiscXValue_ReturnValue, class FText CallFunc_Rune_BuildMiscText__X_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class FText CallFunc_Rune_LegendaryEffectText_Text_Out, class FText CallFunc_Rune_BuildText_X__ReturnValue, class FText CallFunc_Rune_BuildText_X_ReturnValue, class FText CallFunc_Rune_BuildText__X_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetRuneEffectText");

	Params::UUI_RuneFancyNotification_C_GetRuneEffectText_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue = CallFunc_Rune_BuildMiscText__X_ReturnValue;
	Parms.CallFunc_GetMiscXValue_ReturnValue = CallFunc_GetMiscXValue_ReturnValue;
	Parms.CallFunc_Rune_BuildMiscText__X_ReturnValue_1 = CallFunc_Rune_BuildMiscText__X_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Rune_LegendaryEffectText_Text_Out = CallFunc_Rune_LegendaryEffectText_Text_Out;
	Parms.CallFunc_Rune_BuildText_X__ReturnValue = CallFunc_Rune_BuildText_X__ReturnValue;
	Parms.CallFunc_Rune_BuildText_X_ReturnValue = CallFunc_Rune_BuildText_X_ReturnValue;
	Parms.CallFunc_Rune_BuildText__X_ReturnValue = CallFunc_Rune_BuildText__X_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetRuneTitleText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
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

class FText UUI_RuneFancyNotification_C::GetRuneTitleText(int32 Temp_int_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, const class FString& Temp_string_Variable_6, const class FString& Temp_string_Variable_7, const class FString& Temp_string_Variable_8, const class FString& Temp_string_Variable_9, const class FString& Temp_string_Variable_10, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default_1, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetRuneTitleText");

	Params::UUI_RuneFancyNotification_C_GetRuneTitleText_Params Parms{};

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

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.SetRuneTierColor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_GetTierColors_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneFancyNotification_C::SetRuneTierColor(const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FLinearColor& CallFunc_GetTierColors_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "SetRuneTierColor");

	Params::UUI_RuneFancyNotification_C_SetRuneTierColor_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTierColors_ReturnValue = CallFunc_GetTierColors_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetRuneDetails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::GetRuneDetails()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetRuneDetails");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.GetNotification_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_RuneFancyNotification_C::GetNotification_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "GetNotification_Visibility");

	Params::UUI_RuneFancyNotification_C_GetNotification_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.Get_DoNotTouchCanvas_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_RuneFancyNotification_C::Get_DoNotTouchCanvas_Visibility(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "Get_DoNotTouchCanvas_Visibility");

	Params::UUI_RuneFancyNotification_C_Get_DoNotTouchCanvas_Visibility_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.Get_PutEverythingHereCanvas_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_IsInTutorial                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UUI_RuneFancyNotification_C::Get_PutEverythingHereCanvas_Visibility(bool Local_IsInTutorial, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "Get_PutEverythingHereCanvas_Visibility");

	Params::UUI_RuneFancyNotification_C_Get_PutEverythingHereCanvas_Visibility_Params Parms{};

	Parms.Local_IsInTutorial = Local_IsInTutorial;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnRuneHealEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::OnRuneHealEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnRuneHealEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnRuneRevivalEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::OnRuneRevivalEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnRuneRevivalEffect");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.ShowNotify
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::ShowNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "ShowNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnFadeInEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::OnFadeInEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnFadeInEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.SetRetainerEffectAlpha
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              EffectAlpha                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneFancyNotification_C::SetRetainerEffectAlpha(float EffectAlpha, float Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "SetRetainerEffectAlpha");

	Params::UUI_RuneFancyNotification_C_SetRetainerEffectAlpha_Params Parms{};

	Parms.EffectAlpha = EffectAlpha;
	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.Pause
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "Pause");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.Resume
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::Resume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "Resume");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnSisterDialogue
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Start_                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RuneFancyNotification_C::OnSisterDialogue(bool Start_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnSisterDialogue");

	Params::UUI_RuneFancyNotification_C_OnSisterDialogue_Params Parms{};

	Parms.Start_ = Start_;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.ExecuteUbergraph_UI_RuneFancyNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackSpeed_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_EffectAlpha                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Opacity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayHealEffect_Play_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_StormMode_C*      K2Node_DynamicCast_AsBarbarous_Storm_Mode                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStormModeNotifier_Component_C*CallFunc_GetNotifierComponent_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_StormMode_IsSisterDialogue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_Start_                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// enum class Enum_Notify_StormMode_VisibilityCallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPlaybackSpeed_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_DurationCallFunc_StormMode_Notify_Instinct_GetDuration_Duration          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RuneFancyNotification_C::ExecuteUbergraph_UI_RuneFancyNotification(int32 EntryPoint, float CallFunc_GetPlaybackSpeed_ReturnValue, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, float Temp_float_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float K2Node_CustomEvent_EffectAlpha, float K2Node_CustomEvent_Opacity, bool CallFunc_ShouldPlayHealEffect_Play_, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, class ABarbarous_StormMode_C* K2Node_DynamicCast_AsBarbarous_Storm_Mode, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess_1, class UStormModeNotifier_Component_C* CallFunc_GetNotifierComponent_ReturnValue, bool CallFunc_StormMode_IsSisterDialogue_ReturnValue, bool K2Node_CustomEvent_Start_, float K2Node_Select_Default, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, enum class Enum_Notify_StormMode_Visibility CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility, float CallFunc_GetPlaybackSpeed_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_3, enum class Enum_Notify_StormMode_Duration CallFunc_StormMode_Notify_Instinct_GetDuration_Duration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "ExecuteUbergraph_UI_RuneFancyNotification");

	Params::UUI_RuneFancyNotification_C_ExecuteUbergraph_UI_RuneFancyNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlaybackSpeed_ReturnValue = CallFunc_GetPlaybackSpeed_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CustomEvent_EffectAlpha = K2Node_CustomEvent_EffectAlpha;
	Parms.K2Node_CustomEvent_Opacity = K2Node_CustomEvent_Opacity;
	Parms.CallFunc_ShouldPlayHealEffect_Play_ = CallFunc_ShouldPlayHealEffect_Play_;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_DynamicCast_AsBarbarous_Storm_Mode = K2Node_DynamicCast_AsBarbarous_Storm_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetNotifierComponent_ReturnValue = CallFunc_GetNotifierComponent_ReturnValue;
	Parms.CallFunc_StormMode_IsSisterDialogue_ReturnValue = CallFunc_StormMode_IsSisterDialogue_ReturnValue;
	Parms.K2Node_CustomEvent_Start_ = K2Node_CustomEvent_Start_;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility = CallFunc_StormMode_Notify_Instinct_GetVisibility_Visibility;
	Parms.CallFunc_GetPlaybackSpeed_ReturnValue_1 = CallFunc_GetPlaybackSpeed_ReturnValue_1;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_StormMode_Notify_Instinct_GetDuration_Duration = CallFunc_StormMode_Notify_Instinct_GetDuration_Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnAnimStart__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::OnAnimStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnAnimStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RuneFancyNotification.UI_RuneFancyNotification_C.OnAnimEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RuneFancyNotification_C::OnAnimEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RuneFancyNotification_C", "OnAnimEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


