#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_EnemyIndicator.UI_EnemyIndicator_C
// (None)

class UClass* UUI_EnemyIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_EnemyIndicator_C");

	return Clss;
}


// UI_EnemyIndicator_C UI_EnemyIndicator.Default__UI_EnemyIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_EnemyIndicator_C* UUI_EnemyIndicator_C::GetDefaultObj()
{
	static class UUI_EnemyIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_EnemyIndicator_C*>(UUI_EnemyIndicator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.Get_Indicator_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsInPhotoMode_PhotoMode_                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetHideUI_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UUI_EnemyIndicator_C::Get_Indicator_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsInPhotoMode_PhotoMode_, bool CallFunc_GetHideUI_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "Get_Indicator_Visibility");

	Params::UUI_EnemyIndicator_C_Get_Indicator_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface_1 = K2Node_DynamicCast_AsGame_Play_PCInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsInPhotoMode_PhotoMode_ = CallFunc_GetIsInPhotoMode_PhotoMode_;
	Parms.CallFunc_GetHideUI_ReturnValue = CallFunc_GetHideUI_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.PlayTargetAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::PlayTargetAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "PlayTargetAnim");

	Params::UUI_EnemyIndicator_C_PlayTargetAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetTargetIndicatorTint
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_LinearColorLerp_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UUI_EnemyIndicator_C::SetTargetIndicatorTint(float CurrentHealth, float MaxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetTargetIndicatorTint");

	Params::UUI_EnemyIndicator_C_SetTargetIndicatorTint_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_LinearColorLerp_ReturnValue = CallFunc_LinearColorLerp_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetTextDamageOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::SetTextDamageOpacity(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetTextDamageOpacity");

	Params::UUI_EnemyIndicator_C_SetTextDamageOpacity_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentHealth                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::SetHealthBar(float CurrentHealth, float MaxHealth, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetHealthBar");

	Params::UUI_EnemyIndicator_C_SetHealthBar_Params Parms{};

	Parms.CurrentHealth = CurrentHealth;
	Parms.MaxHealth = MaxHealth;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetHealth
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_EnemyCommon_GetHealth_Health                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_EnemyCommon_GetHealth_MaxHealth                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::SetHealth(TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_EnemyCommon_GetHealth_Health, float CallFunc_EnemyCommon_GetHealth_MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetHealth");

	Params::UUI_EnemyIndicator_C_SetHealth_Params Parms{};

	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EnemyCommon_GetHealth_Health = CallFunc_EnemyCommon_GetHealth_Health;
	Parms.CallFunc_EnemyCommon_GetHealth_MaxHealth = CallFunc_EnemyCommon_GetHealth_MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OpacityLevels
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class Enum_EnemyHPOpacity     Enum                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OpacityLevels(enum class Enum_EnemyHPOpacity Enum, float* Value, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OpacityLevels");

	Params::UUI_EnemyIndicator_C_OpacityLevels_Params Parms{};

	Parms.Enum = Enum;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OpacityBasedOnDistance
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Distance                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Opacity                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OpacityLevels_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OpacityBasedOnDistance(float Distance, float* Opacity, enum class Enum_EnemyHPOpacity Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class Enum_EnemyHPOpacity Temp_byte_Variable_1, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float CallFunc_OpacityLevels_Value, float K2Node_Select_Default, float K2Node_Select_Default_1, float CallFunc_MapRangeClamped_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OpacityBasedOnDistance");

	Params::UUI_EnemyIndicator_C_OpacityBasedOnDistance_Params Parms{};

	Parms.Distance = Distance;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.CallFunc_OpacityLevels_Value = CallFunc_OpacityLevels_Value;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Opacity != nullptr)
		*Opacity = Parms.Opacity;

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetHealthMaterialsOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OpacityBasedOnDistance_Opacity                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_OpacityLevels_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnemyIndicator_C::SetHealthMaterialsOpacity(bool CallFunc_IsValid_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, float CallFunc_OpacityBasedOnDistance_Opacity, float CallFunc_OpacityLevels_Value, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetHealthMaterialsOpacity");

	Params::UUI_EnemyIndicator_C_SetHealthMaterialsOpacity_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_OpacityBasedOnDistance_Opacity = CallFunc_OpacityBasedOnDistance_Opacity;
	Parms.CallFunc_OpacityLevels_Value = CallFunc_OpacityLevels_Value;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.IsBossEnemy
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUI_EnemyIndicator_C::IsBossEnemy(bool CallFunc_ActorHasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "IsBossEnemy");

	Params::UUI_EnemyIndicator_C_IsBossEnemy_Params Parms{};

	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetTargetOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::SetTargetOpacity(float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetTargetOpacity");

	Params::UUI_EnemyIndicator_C_SetTargetOpacity_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.SetHealthBarRenderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::SetHealthBarRenderOpacity(int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float CallFunc_Conv_IntToFloat_ReturnValue, float K2Node_Select_Default, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "SetHealthBarRenderOpacity");

	Params::UUI_EnemyIndicator_C_SetHealthBarRenderOpacity_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.ResetHealthOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::ResetHealthOpacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "ResetHealthOpacity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.HPBarVisibilityChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBossEnemy_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnemyIndicator_C::HPBarVisibilityChanged(bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "HPBarVisibilityChanged");

	Params::UUI_EnemyIndicator_C_HPBarVisibilityChanged_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsBossEnemy_ReturnValue = CallFunc_IsBossEnemy_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.ResetTextDamage
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::ResetTextDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "ResetTextDamage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.UpdateDamangeNumbersState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnemyIndicator_C::UpdateDamangeNumbersState(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "UpdateDamangeNumbersState");

	Params::UUI_EnemyIndicator_C_UpdateDamangeNumbersState_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.GetDamageNumbers
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnemyIndicator_C::GetDamageNumbers(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetDamageNumbers_Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "GetDamageNumbers");

	Params::UUI_EnemyIndicator_C_GetDamageNumbers_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.GetHPState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPOpacity     CallFunc_GetEnemyHPOpa_Opacity                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPVisibility  CallFunc_GetEnemyHPVis_Visibility                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::GetHPState(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class Enum_EnemyHPOpacity CallFunc_GetEnemyHPOpa_Opacity, enum class Enum_EnemyHPVisibility CallFunc_GetEnemyHPVis_Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "GetHPState");

	Params::UUI_EnemyIndicator_C_GetHPState_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_GetGameInstance_ReturnValue_1 = CallFunc_GetGameInstance_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetEnemyHPOpa_Opacity = CallFunc_GetEnemyHPOpa_Opacity;
	Parms.CallFunc_GetEnemyHPVis_Visibility = CallFunc_GetEnemyHPVis_Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.HP_CreateMIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::HP_CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "HP_CreateMIDs");

	Params::UUI_EnemyIndicator_C_HP_CreateMIDs_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.IndicatorPosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_ProjectWorldToScreen_ScreenPosition                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ProjectWorldToScreen_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::IndicatorPosition(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector2D& CallFunc_ProjectWorldToScreen_ScreenPosition, bool CallFunc_ProjectWorldToScreen_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "IndicatorPosition");

	Params::UUI_EnemyIndicator_C_IndicatorPosition_Params Parms{};

	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_ProjectWorldToScreen_ScreenPosition = CallFunc_ProjectWorldToScreen_ScreenPosition;
	Parms.CallFunc_ProjectWorldToScreen_ReturnValue = CallFunc_ProjectWorldToScreen_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue_1 = CallFunc_FClamp_ReturnValue_1;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "Tick");

	Params::UUI_EnemyIndicator_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyHPVisibilityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPVisibility  Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OnEnemyHPVisibilityChanged(enum class Enum_EnemyHPVisibility Visibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyHPVisibilityChanged");

	Params::UUI_EnemyIndicator_C_OnEnemyHPVisibilityChanged_Params Parms{};

	Parms.Visibility = Visibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyHPOpacityChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_EnemyHPOpacity     Opacity                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OnEnemyHPOpacityChanged(enum class Enum_EnemyHPOpacity Opacity)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyHPOpacityChanged");

	Params::UUI_EnemyIndicator_C_OnEnemyHPOpacityChanged_Params Parms{};

	Parms.Opacity = Opacity;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnDamageNumbersChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_EnemyIndicator_C::OnDamageNumbersChanged(bool Show)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnDamageNumbersChanged");

	Params::UUI_EnemyIndicator_C_OnDamageNumbersChanged_Params Parms{};

	Parms.Show = Show;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.UpdateIndicator_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::UpdateIndicator_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "UpdateIndicator_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnTakenDamage_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnTakenDamage_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnTakenDamage_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnTakenDamage_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DamagedActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 DamageType                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OnTakenDamage_Set(class AActor* DamagedActor, float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnTakenDamage_Set");

	Params::UUI_EnemyIndicator_C_OnTakenDamage_Set_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.DamageType = DamageType;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.DamageText_Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::DamageText_Update(float Damage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "DamageText_Update");

	Params::UUI_EnemyIndicator_C_DamageText_Update_Params Parms{};

	Parms.Damage = Damage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.DamageText_Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::DamageText_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "DamageText_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.Show_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::Show_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "Show_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnTakenDamage_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnTakenDamage_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnTakenDamage_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.Hide_Reset
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::Hide_Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "Hide_Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyDeath_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnEnemyDeath_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyDeath_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyDeath_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnEnemyDeath_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyDeath_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.RemoveWidget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::RemoveWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "RemoveWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyHPVisibilityChanged_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnEnemyHPVisibilityChanged_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyHPVisibilityChanged_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.UpdateIndicator_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::UpdateIndicator_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "UpdateIndicator_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.HealthTimer_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::HealthTimer_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "HealthTimer_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.HealthTimer_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::HealthTimer_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "HealthTimer_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyHPOpacityChanged_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnEnemyHPOpacityChanged_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyHPOpacityChanged_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnDamageNumbersChanged_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_EnemyIndicator_C::OnDamageNumbersChanged_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnDamageNumbersChanged_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.OnEnemyTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABaseCharacter_C*            TargetedEnemy                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::OnEnemyTarget(class ABaseCharacter_C* TargetedEnemy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "OnEnemyTarget");

	Params::UUI_EnemyIndicator_C_OnEnemyTarget_Params Parms{};

	Parms.TargetedEnemy = TargetedEnemy;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_EnemyIndicator.UI_EnemyIndicator_C.ExecuteUbergraph_UI_EnemyIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDamageNumbers_Show                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_EnemyHPVisibility  K2Node_CustomEvent_Visibility                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_EnemyHPOpacity     K2Node_CustomEvent_Opacity                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Show                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         K2Node_DynamicCast_AsGame_Info_Instance                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      K2Node_CustomEvent_DamagedActor                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDamageType*                 K2Node_CustomEvent_DamageType                                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_CustomEvent_InstigatedBy                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Damage                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBossEnemy_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_3                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBossEnemy_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_CustomEvent_TargetedEnemy                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_EnemyIndicator_C::ExecuteUbergraph_UI_EnemyIndicator(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Has_Been_Initd_Variable_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_GetDamageNumbers_Show, enum class Enum_EnemyHPVisibility K2Node_CustomEvent_Visibility, enum class Enum_EnemyHPOpacity K2Node_CustomEvent_Opacity, bool K2Node_CustomEvent_Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage_1, class UDamageType* K2Node_CustomEvent_DamageType, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, float K2Node_CustomEvent_Damage, float CallFunc_Add_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsBossEnemy_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsBossEnemy_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class ABaseCharacter_C* K2Node_CustomEvent_TargetedEnemy, class FText CallFunc_Conv_FloatToText_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_EnemyIndicator_C", "ExecuteUbergraph_UI_EnemyIndicator");

	Params::UUI_EnemyIndicator_C_ExecuteUbergraph_UI_EnemyIndicator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetDamageNumbers_Show = CallFunc_GetDamageNumbers_Show;
	Parms.K2Node_CustomEvent_Visibility = K2Node_CustomEvent_Visibility;
	Parms.K2Node_CustomEvent_Opacity = K2Node_CustomEvent_Opacity;
	Parms.K2Node_CustomEvent_Show = K2Node_CustomEvent_Show;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Info_Instance = K2Node_DynamicCast_AsGame_Info_Instance;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_DamagedActor = K2Node_CustomEvent_DamagedActor;
	Parms.K2Node_CustomEvent_Damage_1 = K2Node_CustomEvent_Damage_1;
	Parms.K2Node_CustomEvent_DamageType = K2Node_CustomEvent_DamageType;
	Parms.K2Node_CustomEvent_InstigatedBy = K2Node_CustomEvent_InstigatedBy;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CustomEvent_Damage = K2Node_CustomEvent_Damage;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_IsBossEnemy_ReturnValue = CallFunc_IsBossEnemy_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_3 = CallFunc_K2_SetTimerDelegate_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsBossEnemy_ReturnValue_1 = CallFunc_IsBossEnemy_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_CustomEvent_TargetedEnemy = K2Node_CustomEvent_TargetedEnemy;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


