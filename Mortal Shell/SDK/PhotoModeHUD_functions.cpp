#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PhotoModeHUD.PhotoModeHUD_C
// (None)

class UClass* UPhotoModeHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PhotoModeHUD_C");

	return Clss;
}


// PhotoModeHUD_C PhotoModeHUD.Default__PhotoModeHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPhotoModeHUD_C* UPhotoModeHUD_C::GetDefaultObj()
{
	static class UPhotoModeHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPhotoModeHUD_C*>(UPhotoModeHUD_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateConsoleCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_HandleScreenshotSize_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_HandleScreenshotSize_X                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HandleScreenshotSize_Y                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleScreenshotSize_RegionX                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_HandleScreenshotSize_RegionY                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateConsoleCommand(bool Temp_bool_Variable, const class FString& Temp_string_Variable, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_HandleScreenshotSize_ReturnValue, float CallFunc_HandleScreenshotSize_X, float CallFunc_HandleScreenshotSize_Y, int32 CallFunc_HandleScreenshotSize_RegionX, int32 CallFunc_HandleScreenshotSize_RegionY, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, int32 CallFunc_Round_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 CallFunc_Round_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_10)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateConsoleCommand");

	Params::UPhotoModeHUD_C_UpdateConsoleCommand_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_HandleScreenshotSize_ReturnValue = CallFunc_HandleScreenshotSize_ReturnValue;
	Parms.CallFunc_HandleScreenshotSize_X = CallFunc_HandleScreenshotSize_X;
	Parms.CallFunc_HandleScreenshotSize_Y = CallFunc_HandleScreenshotSize_Y;
	Parms.CallFunc_HandleScreenshotSize_RegionX = CallFunc_HandleScreenshotSize_RegionX;
	Parms.CallFunc_HandleScreenshotSize_RegionY = CallFunc_HandleScreenshotSize_RegionY;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleScreenshotSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RegionX                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RegionY                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_BorderAspectRatio                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_Y                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Local_X                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_3                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue_4                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetViewportSize_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UPhotoModeHUD_C::HandleScreenshotSize(float* X, float* Y, int32* RegionX, int32* RegionY, float Local_BorderAspectRatio, float Local_Y, float Local_X, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, float CallFunc_Subtract_FloatFloat_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_Subtract_FloatFloat_ReturnValue_4, int32 CallFunc_Round_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_4, float Temp_float_Variable_3, int32 CallFunc_Round_ReturnValue_4, float Temp_float_Variable_4, int32 Temp_int_Variable, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_5, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float K2Node_Select_Default, float CallFunc_Multiply_FloatFloat_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleScreenshotSize");

	Params::UPhotoModeHUD_C_HandleScreenshotSize_Params Parms{};

	Parms.Local_BorderAspectRatio = Local_BorderAspectRatio;
	Parms.Local_Y = Local_Y;
	Parms.Local_X = Local_X;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue_1 = CallFunc_Round_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Round_ReturnValue_2 = CallFunc_Round_ReturnValue_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_3 = CallFunc_Subtract_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_4 = CallFunc_Subtract_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Round_ReturnValue_3 = CallFunc_Round_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_Round_ReturnValue_4 = CallFunc_Round_ReturnValue_4;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_GetViewportSize_ReturnValue = CallFunc_GetViewportSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (RegionX != nullptr)
		*RegionX = Parms.RegionX;

	if (RegionY != nullptr)
		*RegionY = Parms.RegionY;

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleShadesAmount
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::HandleShadesAmount(TArray<class FText>& K2Node_MakeArray_Array, TArray<class FText>& K2Node_MakeArray_Array_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleShadesAmount");

	Params::UPhotoModeHUD_C_HandleShadesAmount_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.InitializeRadialBlur
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetRadialBlur_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::InitializeRadialBlur(int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool Temp_bool_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetRadialBlur_ReturnValue, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "InitializeRadialBlur");

	Params::UPhotoModeHUD_C_InitializeRadialBlur_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRadialBlur_ReturnValue = CallFunc_GetRadialBlur_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.InitializeHideSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideSacredGland_Hidden_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::InitializeHideSacredGlands(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_GetHideSacredGland_Hidden_, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "InitializeHideSacredGlands");

	Params::UPhotoModeHUD_C_InitializeHideSacredGlands_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetHideSacredGland_Hidden_ = CallFunc_GetHideSacredGland_Hidden_;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CheckSacredGlands
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAnyGland_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CheckSacredGlands(class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAnyGland_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CheckSacredGlands");

	Params::UPhotoModeHUD_C_CheckSacredGlands_Params Parms{};

	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_HasAnyGland_ReturnValue = CallFunc_HasAnyGland_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.InitializeHideTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHideTarnishedSeal_Hidden_                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::InitializeHideTarnishedSeal(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_GetHideTarnishedSeal_Hidden_, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "InitializeHideTarnishedSeal");

	Params::UPhotoModeHUD_C_InitializeHideTarnishedSeal_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_GetHideTarnishedSeal_Hidden_ = CallFunc_GetHideTarnishedSeal_Hidden_;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CheckTarnishedSeal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_GetUpgradeNameParry_UpgradeName                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CheckTarnishedSeal(class FName CallFunc_GetUpgradeNameParry_UpgradeName, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CheckTarnishedSeal");

	Params::UPhotoModeHUD_C_CheckTarnishedSeal_Params Parms{};

	Parms.CallFunc_GetUpgradeNameParry_UpgradeName = CallFunc_GetUpgradeNameParry_UpgradeName;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleWeaponTrails
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::HandleWeaponTrails(bool Hidden, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleWeaponTrails");

	Params::UPhotoModeHUD_C_HandleWeaponTrails_Params Parms{};

	Parms.Hidden = Hidden;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandlePostProcessEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::HandlePostProcessEffects(bool Enable_, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, float K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandlePostProcessEffects");

	Params::UPhotoModeHUD_C_HandlePostProcessEffects_Params Parms{};

	Parms.Enable_ = Enable_;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavTab_Unhover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::NavTab_Unhover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavTab_Unhover");

	Params::UPhotoModeHUD_C_NavTab_Unhover_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavTab_Hover
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::NavTab_Hover(int32 Index, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavTab_Hover");

	Params::UPhotoModeHUD_C_NavTab_Hover_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CameraFilter_Availability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SupportsHDRDisplayOutput_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsHDREnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CameraFilter_Availability(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SupportsHDRDisplayOutput_ReturnValue, bool CallFunc_IsHDREnabled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_2, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CameraFilter_Availability");

	Params::UPhotoModeHUD_C_CameraFilter_Availability_Params Parms{};

	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SupportsHDRDisplayOutput_ReturnValue = CallFunc_SupportsHDRDisplayOutput_ReturnValue;
	Parms.CallFunc_IsHDREnabled_ReturnValue = CallFunc_IsHDREnabled_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_2 = K2Node_DynamicCast_AsIPhoto_Mode_Option_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.StopPhysicalHits
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::StopPhysicalHits(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "StopPhysicalHits");

	Params::UPhotoModeHUD_C_StopPhysicalHits_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ReprisePhysics
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::ReprisePhysics(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ReprisePhysics");

	Params::UPhotoModeHUD_C_ReprisePhysics_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SuspendPhysics
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AEnemyCharacter_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AEnemyCharacter_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IEnemyCommonInterface_C>K2Node_DynamicCast_AsEnemy_Common_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BossCrucix_IsSimulatingLittleBro_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnySimulatingPhysics_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SuspendPhysics(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AEnemyCharacter_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_BossCrucix_IsSimulatingLittleBro_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsAnySimulatingPhysics_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SuspendPhysics");

	Params::UPhotoModeHUD_C_SuspendPhysics_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface = K2Node_DynamicCast_AsEnemy_Common_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsEnemy_Common_Interface_1 = K2Node_DynamicCast_AsEnemy_Common_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_BossCrucix_IsSimulatingLittleBro_ReturnValue = CallFunc_BossCrucix_IsSimulatingLittleBro_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_IsAnySimulatingPhysics_ReturnValue = CallFunc_IsAnySimulatingPhysics_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetGameSpeedOnRagdoll
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::ResetGameSpeedOnRagdoll(bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetGameSpeedOnRagdoll");

	Params::UPhotoModeHUD_C_ResetGameSpeedOnRagdoll_Params Parms{};

	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.IsCharInRagdoll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsRagdoll_                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::IsCharInRagdoll(bool* IsRagdoll_, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "IsCharInRagdoll");

	Params::UPhotoModeHUD_C_IsCharInRagdoll_Params Parms{};

	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;

	UObject::ProcessEvent(Func, &Parms);

	if (IsRagdoll_ != nullptr)
		*IsRagdoll_ = Parms.IsRagdoll_;

}


// Function PhotoModeHUD.PhotoModeHUD_C.SkipFrame_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::SkipFrame_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SkipFrame_Listen");

	Params::UPhotoModeHUD_C_SkipFrame_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoMode_InitializeValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::PhotoMode_InitializeValues(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllButtons_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoMode_InitializeValues");

	Params::UPhotoModeHUD_C_PhotoMode_InitializeValues_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllButtons_Array = CallFunc_GetAllButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetRecentCamera
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_CameraLoc           CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorTransform_SweepHitResult                     (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorTransform_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetRecentCamera(int32 Value, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FStruct_CameraLoc& CallFunc_Array_Get_Item, bool CallFunc_BooleanOR_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetRecentCamera");

	Params::UPhotoModeHUD_C_SetRecentCamera_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_SetActorTransform_SweepHitResult = CallFunc_K2_SetActorTransform_SweepHitResult;
	Parms.CallFunc_K2_SetActorTransform_ReturnValue = CallFunc_K2_SetActorTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Photo Mode Reset All
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Photo_Mode_Reset_All()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Photo Mode Reset All");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoMode_ResetSingleOption
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::PhotoMode_ResetSingleOption(class UWidget* CallFunc_GetActiveLine_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoMode_ResetSingleOption");

	Params::UPhotoModeHUD_C_PhotoMode_ResetSingleOption_Params Parms{};

	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoMode_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoMode_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoMode_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoMode_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier_PhotoMode_C* CallFunc_CameraModifier_Create_Output_Get                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::PhotoMode_Open(class UCameraModifier_PhotoMode_C* CallFunc_CameraModifier_Create_Output_Get)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoMode_Open");

	Params::UPhotoModeHUD_C_PhotoMode_Open_Params Parms{};

	Parms.CallFunc_CameraModifier_Create_Output_Get = CallFunc_CameraModifier_Create_Output_Get;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CloseWarningWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CloseWarningWindow(bool PlaySound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CloseWarningWindow");

	Params::UPhotoModeHUD_C_CloseWarningWindow_Params Parms{};

	Parms.PlaySound = PlaySound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OpenWarningWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OpenWarningWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OpenWarningWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetWarningTextHeader
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

class FText UPhotoModeHUD_C::GetWarningTextHeader(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetWarningTextHeader");

	Params::UPhotoModeHUD_C_GetWarningTextHeader_Params Parms{};

	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.ScreenshotSizeAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::ScreenshotSizeAvailability(enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ScreenshotSizeAvailability");

	Params::UPhotoModeHUD_C_ScreenshotSizeAvailability_Params Parms{};

	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateFilterIntensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LUT_Intensity                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateFilterIntensity(float LUT_Intensity, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateFilterIntensity");

	Params::UPhotoModeHUD_C_UpdateFilterIntensity_Params Parms{};

	Parms.LUT_Intensity = LUT_Intensity;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetShadesName
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Local_Armor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetShadeNames_ReturnValue                               (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_1                             (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_2                             (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_3                             (None)
// class FText                        CallFunc_GetShadeNames_ReturnValue_4                             (None)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::SetShadesName(enum class EArmorTypes Local_Armor, class FText CallFunc_GetShadeNames_ReturnValue, class FText CallFunc_GetShadeNames_ReturnValue_1, class FText CallFunc_GetShadeNames_ReturnValue_2, class FText CallFunc_GetShadeNames_ReturnValue_3, class FText CallFunc_GetShadeNames_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetShadesName");

	Params::UPhotoModeHUD_C_SetShadesName_Params Parms{};

	Parms.Local_Armor = Local_Armor;
	Parms.CallFunc_GetShadeNames_ReturnValue = CallFunc_GetShadeNames_ReturnValue;
	Parms.CallFunc_GetShadeNames_ReturnValue_1 = CallFunc_GetShadeNames_ReturnValue_1;
	Parms.CallFunc_GetShadeNames_ReturnValue_2 = CallFunc_GetShadeNames_ReturnValue_2;
	Parms.CallFunc_GetShadeNames_ReturnValue_3 = CallFunc_GetShadeNames_ReturnValue_3;
	Parms.CallFunc_GetShadeNames_ReturnValue_4 = CallFunc_GetShadeNames_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Reset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      Local_Mesh                                                       (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Local_Armor                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Local_Char                                                       (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Reset                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*               CallFunc_GetMeshForArmorType_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_1                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_0_Base_GetMesh_Mesh                                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface_2                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CharacterIsFrozen__ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateDye(int32 Value, bool Reset, class USkeletalMeshComponent* Local_Mesh, enum class EArmorTypes Local_Armor, class ACharacter* Local_Char, bool Local_Reset, int32 Local_Value, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue_1, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class USkeletalMeshComponent* CallFunc_0_Base_GetMesh_Mesh, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_CharacterIsFrozen__ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateDye");

	Params::UPhotoModeHUD_C_UpdateDye_Params Parms{};

	Parms.Value = Value;
	Parms.Reset = Reset;
	Parms.Local_Mesh = Local_Mesh;
	Parms.Local_Armor = Local_Armor;
	Parms.Local_Char = Local_Char;
	Parms.Local_Reset = Local_Reset;
	Parms.Local_Value = Local_Value;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue = CallFunc_GetMeshForArmorType_ReturnValue;
	Parms.CallFunc_GetMeshForArmorType_ReturnValue_1 = CallFunc_GetMeshForArmorType_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_1 = K2Node_DynamicCast_AsCharacter_Util_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_0_Base_GetMesh_Mesh = CallFunc_0_Base_GetMesh_Mesh;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface_2 = K2Node_DynamicCast_AsCharacter_Util_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CharacterIsFrozen__ReturnValue = CallFunc_CharacterIsFrozen__ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateCameraFilter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PhotoModeFilter     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateCameraFilter(int32 Value, int32 Local_Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_1, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1, class FName CallFunc_Array_Get_Item, const struct FStruct_PhotoModeFilter& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateCameraFilter");

	Params::UPhotoModeHUD_C_UpdateCameraFilter_Params Parms{};

	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_1 = CallFunc_GetCamModifierSafe_CamModifier_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCharacterDye
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICharacterUtilInterface_C>K2Node_DynamicCast_AsCharacter_Util_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EArmorTypes             CallFunc_0_Base_GetCurrentArmor_CurrentArmorType                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_ShellDyes           CallFunc_GetShellDyes_Dyes                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::HandleCharacterDye(enum class EArmorTypes Temp_byte_Variable, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class ICharacterUtilInterface_C> K2Node_DynamicCast_AsCharacter_Util_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_2, enum class EArmorTypes CallFunc_0_Base_GetCurrentArmor_CurrentArmorType, const struct FStruct_ShellDyes& CallFunc_GetShellDyes_Dyes, uint8 K2Node_Select_Default, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCharacterDye");

	Params::UPhotoModeHUD_C_HandleCharacterDye_Params Parms{};

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsCharacter_Util_Interface = K2Node_DynamicCast_AsCharacter_Util_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_0_Base_GetCurrentArmor_CurrentArmorType = CallFunc_0_Base_GetCurrentArmor_CurrentArmorType;
	Parms.CallFunc_GetShellDyes_Dyes = CallFunc_GetShellDyes_Dyes;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleBallistazookaOpacity_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::HandleBallistazookaOpacity_Close(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleBallistazookaOpacity_Close");

	Params::UPhotoModeHUD_C_HandleBallistazookaOpacity_Close_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleBallistazookaOpacity_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::HandleBallistazookaOpacity_Open(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleBallistazookaOpacity_Open");

	Params::UPhotoModeHUD_C_HandleBallistazookaOpacity_Open_Params Parms{};

	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetVisTabAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetVisTabAvailability(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetVisTabAvailability");

	Params::UPhotoModeHUD_C_SetVisTabAvailability_Params Parms{};

	Parms.Enabled = Enabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetFogTabAvailability
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::SetFogTabAvailability()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetFogTabAvailability");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleEnemiesVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Hidden                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::HandleEnemiesVisibility(bool Hidden, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleEnemiesVisibility");

	Params::UPhotoModeHUD_C_HandleEnemiesVisibility_Params Parms{};

	Parms.Hidden = Hidden;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCharacterVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewHidden                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::HandleCharacterVisibility(bool bNewHidden, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCharacterVisibility");

	Params::UPhotoModeHUD_C_HandleCharacterVisibility_Params Parms{};

	Parms.bNewHidden = bNewHidden;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleBallistazookaVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewHidden                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::HandleBallistazookaVisibility(bool bNewHidden, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleBallistazookaVisibility");

	Params::UPhotoModeHUD_C_HandleBallistazookaVisibility_Params Parms{};

	Parms.bNewHidden = bNewHidden;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetFilters
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_PhotoModeFilter     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetFilters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FName Temp_name_Variable, class FText Temp_text_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_Array_Get_Item, const struct FStruct_PhotoModeFilter& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetFilters");

	Params::UPhotoModeHUD_C_SetFilters_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetPhysicsSimSuspended
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuspended                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UPrimitiveComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnySimulatingPhysics_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetPhysicsSimSuspended(bool bSuspended, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UPrimitiveComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UPrimitiveComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UPrimitiveComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsAnySimulatingPhysics_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetPhysicsSimSuspended");

	Params::UPhotoModeHUD_C_SetPhysicsSimSuspended_Params Parms{};

	Parms.bSuspended = bSuspended;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsAnySimulatingPhysics_ReturnValue = CallFunc_IsAnySimulatingPhysics_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogoScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Scale                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateLogoScale(float Scale, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogoScale");

	Params::UPhotoModeHUD_C_UpdateLogoScale_Params Parms{};

	Parms.Scale = Scale;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetClothAndPhysicsSimSuspended
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuspended                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USkeletalMeshComponent*>CallFunc_K2_GetComponentsByClass_ReturnValue                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsClothingSimulationSuspended_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetClothAndPhysicsSimSuspended(bool bSuspended, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsOfClass_OutActors, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class USkeletalMeshComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsClothingSimulationSuspended_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetClothAndPhysicsSimSuspended");

	Params::UPhotoModeHUD_C_SetClothAndPhysicsSimSuspended_Params Parms{};

	Parms.bSuspended = bSuspended;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentsByClass_ReturnValue = CallFunc_K2_GetComponentsByClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsClothingSimulationSuspended_ReturnValue = CallFunc_IsClothingSimulationSuspended_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Get_UI_ControllerButton_SkipFrame_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeHUD_C::Get_UI_ControllerButton_SkipFrame_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Get_UI_ControllerButton_SkipFrame_Visibility");

	Params::UPhotoModeHUD_C_Get_UI_ControllerButton_SkipFrame_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.Get_UI_ControllerButton_RotateCamera_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UPhotoModeHUD_C::Get_UI_ControllerButton_RotateCamera_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Get_UI_ControllerButton_RotateCamera_Visibility");

	Params::UPhotoModeHUD_C_Get_UI_ControllerButton_RotateCamera_Visibility_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogoOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateLogoOptions(int32 Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_3, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_6, bool K2Node_DynamicCast_bSuccess_6, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_7, bool K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogoOptions");

	Params::UPhotoModeHUD_C_UpdateLogoOptions_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_2 = K2Node_DynamicCast_AsIPhoto_Mode_Option_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_3 = K2Node_DynamicCast_AsIPhoto_Mode_Option_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_4 = K2Node_DynamicCast_AsIPhoto_Mode_Option_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_5 = K2Node_DynamicCast_AsIPhoto_Mode_Option_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_6 = K2Node_DynamicCast_AsIPhoto_Mode_Option_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_7 = K2Node_DynamicCast_AsIPhoto_Mode_Option_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogoOffsetY
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateLogoOffsetY(float Offset, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogoOffsetY");

	Params::UPhotoModeHUD_C_UpdateLogoOffsetY_Params Parms{};

	Parms.Offset = Offset;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogoOffsetX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Offset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeUnclamped_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateLogoOffsetX(float Offset, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogoOffsetX");

	Params::UPhotoModeHUD_C_UpdateLogoOffsetX_Params Parms{};

	Parms.Offset = Offset;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_MapRangeUnclamped_ReturnValue = CallFunc_MapRangeUnclamped_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Get_UI_ControllerButton_ResetCurrent_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Local_Widget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

enum class ESlateVisibility UPhotoModeHUD_C::Get_UI_ControllerButton_ResetCurrent_Visibility(class UWidget* Local_Widget, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, class UWidget* CallFunc_GetActiveLine_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Get_UI_ControllerButton_ResetCurrent_Visibility");

	Params::UPhotoModeHUD_C_Get_UI_ControllerButton_ResetCurrent_Visibility_Params Parms{};

	Parms.Local_Widget = Local_Widget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option = K2Node_DynamicCast_AsUI_Photo_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue_1 = CallFunc_NotEqual_IntInt_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeResetLine_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::PhotoModeResetLine_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeResetLine_Listen");

	Params::UPhotoModeHUD_C_PhotoModeResetLine_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleGrid_Button
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleGrid_Button()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleGrid_Button");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CheckBallistazooka
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        CallFunc_MakeLiteralName_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUpgradeUnlocked_bUnlocked                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CheckBallistazooka(class FName CallFunc_MakeLiteralName_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsUpgradeUnlocked_bUnlocked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CheckBallistazooka");

	Params::UPhotoModeHUD_C_CheckBallistazooka_Params Parms{};

	Parms.CallFunc_MakeLiteralName_ReturnValue = CallFunc_MakeLiteralName_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsUpgradeUnlocked_bUnlocked = CallFunc_IsUpgradeUnlocked_bUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Fog_SetFogColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Fog_SetFogColor(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Fog_SetFogColor");

	Params::UPhotoModeHUD_C_Fog_SetFogColor_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateFogColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                CallFunc_Multiply_LinearColorFloat_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateFogColor(int32 Value, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateFogColor");

	Params::UPhotoModeHUD_C_UpdateFogColor_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Multiply_LinearColorFloat_ReturnValue = CallFunc_Multiply_LinearColorFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Fog_SetFogHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetValueAndOverrideDefault_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Fog_SetFogHeight(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetValueAndOverrideDefault_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Fog_SetFogHeight");

	Params::UPhotoModeHUD_C_Fog_SetFogHeight_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetValueAndOverrideDefault_self_CastInput = CallFunc_SetValueAndOverrideDefault_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateFogHeight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateFogHeight(int32 Value, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateFogHeight");

	Params::UPhotoModeHUD_C_UpdateFogHeight_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Fog_SetFogDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetValueAndOverrideDefault_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Fog_SetFogDensity(float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetValueAndOverrideDefault_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Fog_SetFogDensity");

	Params::UPhotoModeHUD_C_Fog_SetFogDensity_Params Parms{};

	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetValueAndOverrideDefault_self_CastInput = CallFunc_SetValueAndOverrideDefault_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetAllButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>             Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UWidget*>             Local_Array                                                      (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollBox*                  K2Node_DynamicCast_AsScroll_Box                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBox*                K2Node_DynamicCast_AsVertical_Box                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBox*                K2Node_DynamicCast_AsVertical_Box_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_1                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue_2                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider_1               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::GetAllButtons(TArray<class UWidget*>* Array, const TArray<class UWidget*>& Local_Array, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UScrollBox* K2Node_DynamicCast_AsScroll_Box, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue, class UVerticalBox* K2Node_DynamicCast_AsVertical_Box, bool K2Node_DynamicCast_bSuccess_1, class UVerticalBox* K2Node_DynamicCast_AsVertical_Box_1, bool K2Node_DynamicCast_bSuccess_2, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_2, class UWidget* CallFunc_Array_Get_Item_1, class UWidget* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess_3, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option, bool K2Node_DynamicCast_bSuccess_4, int32 CallFunc_Array_Add_ReturnValue_3, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider_1, bool K2Node_DynamicCast_bSuccess_5, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetAllButtons");

	Params::UPhotoModeHUD_C_GetAllButtons_Params Parms{};

	Parms.Local_Array = Local_Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsScroll_Box = K2Node_DynamicCast_AsScroll_Box;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsVertical_Box = K2Node_DynamicCast_AsVertical_Box;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsVertical_Box_1 = K2Node_DynamicCast_AsVertical_Box_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetAllChildren_ReturnValue_1 = CallFunc_GetAllChildren_ReturnValue_1;
	Parms.CallFunc_GetAllChildren_ReturnValue_2 = CallFunc_GetAllChildren_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option = K2Node_DynamicCast_AsUI_Photo_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Array_Add_ReturnValue_3 = CallFunc_Array_Add_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider_1 = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_1 = K2Node_DynamicCast_AsUI_Photo_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogoAngle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Angle                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateLogoAngle(float Angle, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogoAngle");

	Params::UPhotoModeHUD_C_UpdateLogoAngle_Params Parms{};

	Parms.Angle = Angle;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetUpRecentCameras
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_CameraLoc           CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_VectorToString_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Vector_Distance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::SetUpRecentCameras(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class FText Temp_text_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FStruct_CameraLoc& CallFunc_Array_Get_Item, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const class FString& CallFunc_Conv_VectorToString_ReturnValue_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, float CallFunc_Vector_Distance_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetUpRecentCameras");

	Params::UPhotoModeHUD_C_SetUpRecentCameras_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Conv_VectorToString_ReturnValue = CallFunc_Conv_VectorToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_Conv_VectorToString_ReturnValue_1 = CallFunc_Conv_VectorToString_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Vector_Distance_ReturnValue = CallFunc_Vector_Distance_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SaveCameraLoc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Local_ShouldSave                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FStruct_CameraLoc>   Local_RecentCameras                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_CameraLoc           CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_CameraLoc           K2Node_MakeStruct_Struct_CameraLoc                               (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_RotatorRotator_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_GetControlRotation_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStruct_CameraLoc           K2Node_MakeStruct_Struct_CameraLoc_1                             (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue_1                              (ConstParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_TransformTransform_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SaveCameraLoc(bool Local_ShouldSave, const TArray<struct FStruct_CameraLoc>& Local_RecentCameras, int32 Temp_int_Array_Index_Variable, const struct FStruct_CameraLoc& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const struct FStruct_CameraLoc& K2Node_MakeStruct_Struct_CameraLoc, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_EqualEqual_RotatorRotator_ReturnValue, const struct FRotator& CallFunc_GetControlRotation_ReturnValue_1, const struct FStruct_CameraLoc& K2Node_MakeStruct_Struct_CameraLoc_1, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_NearlyEqual_TransformTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SaveCameraLoc");

	Params::UPhotoModeHUD_C_SaveCameraLoc_Params Parms{};

	Parms.Local_ShouldSave = Local_ShouldSave;
	Parms.Local_RecentCameras = Local_RecentCameras;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_MakeStruct_Struct_CameraLoc = K2Node_MakeStruct_Struct_CameraLoc;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue = CallFunc_GetControlRotation_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.CallFunc_EqualEqual_RotatorRotator_ReturnValue = CallFunc_EqualEqual_RotatorRotator_ReturnValue;
	Parms.CallFunc_GetControlRotation_ReturnValue_1 = CallFunc_GetControlRotation_ReturnValue_1;
	Parms.K2Node_MakeStruct_Struct_CameraLoc_1 = K2Node_MakeStruct_Struct_CameraLoc_1;
	Parms.CallFunc_GetTransform_ReturnValue_1 = CallFunc_GetTransform_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_TransformTransform_ReturnValue = CallFunc_NearlyEqual_TransformTransform_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Navigation_SelectTab
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimateScroll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipIndexCheck                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_AnimateScroll                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipIndexCheck                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_SelectedIndex                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array_1                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_MainMenu_Button_C*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UUI_MainMenu_Button_C*>CallFunc_GetTabButtons_Array_2                                   (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Navigation_SelectTab(bool AnimateScroll, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Index, int32 Delta, bool Local_AnimateScroll, bool Local_SkipSound, bool Local_SkipIndexCheck, int32 Local_Delta, int32 Local_SelectedIndex, bool Local_CustomIndex, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array_2, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Navigation_SelectTab");

	Params::UPhotoModeHUD_C_Navigation_SelectTab_Params Parms{};

	Parms.AnimateScroll = AnimateScroll;
	Parms.CustomIndex = CustomIndex;
	Parms.SkipIndexCheck = SkipIndexCheck;
	Parms.SkipSound = SkipSound;
	Parms.Index = Index;
	Parms.Delta = Delta;
	Parms.Local_AnimateScroll = Local_AnimateScroll;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_SkipIndexCheck = Local_SkipIndexCheck;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_SelectedIndex = Local_SelectedIndex;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.CallFunc_GetTabButtons_Array = CallFunc_GetTabButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTabButtons_Array_1 = CallFunc_GetTabButtons_Array_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetTabButtons_Array_2 = CallFunc_GetTabButtons_Array_2;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetTabButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UUI_MainMenu_Button_C*>Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UUI_MainMenu_Button_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UPhotoModeHUD_C::GetTabButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetTabButtons");

	Params::UPhotoModeHUD_C_GetTabButtons_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BindingInputs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::BindingInputs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BindingInputs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TabPreviousListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::TabPreviousListen(FDelegateProperty_ Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TabPreviousListen");

	Params::UPhotoModeHUD_C_TabPreviousListen_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TabNextListen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::TabNextListen(FDelegateProperty_ Pressed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TabNextListen");

	Params::UPhotoModeHUD_C_TabNextListen_Params Parms{};

	Parms.Pressed = Pressed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeResetButKeepValues
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::PhotoModeResetButKeepValues(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllButtons_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeResetButKeepValues");

	Params::UPhotoModeHUD_C_PhotoModeResetButKeepValues_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllButtons_Array = CallFunc_GetAllButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetDelta
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ResetDelta()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetDelta");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateDelta
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMaxDelta_MaxDelta                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateDelta(class UWidget* CallFunc_GetActiveLine_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMaxDelta_MaxDelta, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateDelta");

	Params::UPhotoModeHUD_C_UpdateDelta_Params Parms{};

	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMaxDelta_MaxDelta = CallFunc_GetMaxDelta_MaxDelta;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleOptions_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::ToggleOptions_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleOptions_Listen");

	Params::UPhotoModeHUD_C_ToggleOptions_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleOptions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetNavSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ResetNavSpeed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetNavSpeed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateBorder
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings                         (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_1                       (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_2                       (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_3                       (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_4                       (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_5                       (NoDestructor)
// struct FCameraFilmbackSettings     K2Node_MakeStruct_CameraFilmbackSettings_6                       (NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateBorder(int32 Value, int32 Local_Value, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_1, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_2, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_3, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_4, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_5, const struct FCameraFilmbackSettings& K2Node_MakeStruct_CameraFilmbackSettings_6, bool K2Node_SwitchInteger_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateBorder");

	Params::UPhotoModeHUD_C_UpdateBorder_Params Parms{};

	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings = K2Node_MakeStruct_CameraFilmbackSettings;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_1 = K2Node_MakeStruct_CameraFilmbackSettings_1;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_2 = K2Node_MakeStruct_CameraFilmbackSettings_2;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_3 = K2Node_MakeStruct_CameraFilmbackSettings_3;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_4 = K2Node_MakeStruct_CameraFilmbackSettings_4;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_5 = K2Node_MakeStruct_CameraFilmbackSettings_5;
	Parms.K2Node_MakeStruct_CameraFilmbackSettings_6 = K2Node_MakeStruct_CameraFilmbackSettings_6;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateLogo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UImage*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateLogo(int32 Value, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UImage* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateLogo");

	Params::UPhotoModeHUD_C_UpdateLogo_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateScreenSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Value                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetOptionEnabled_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateScreenSize(int32 Value, int32 Local_Value, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetOptionEnabled_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateScreenSize");

	Params::UPhotoModeHUD_C_UpdateScreenSize_Params Parms{};

	Parms.Value = Value;
	Parms.Local_Value = Local_Value;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_SetOptionEnabled_self_CastInput = CallFunc_SetOptionEnabled_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateDOFAperture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_IsOptionEnabled_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOptionEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateDOFAperture(int32 Value, int32 Temp_int_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float K2Node_Select_Default, TScriptInterface<class IIPhotoModeOption_C> CallFunc_IsOptionEnabled_self_CastInput, bool CallFunc_IsOptionEnabled_bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateDOFAperture");

	Params::UPhotoModeHUD_C_UpdateDOFAperture_Params Parms{};

	Parms.Value = Value;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_float_Variable_6 = Temp_float_Variable_6;
	Parms.Temp_float_Variable_7 = Temp_float_Variable_7;
	Parms.Temp_float_Variable_8 = Temp_float_Variable_8;
	Parms.Temp_float_Variable_9 = Temp_float_Variable_9;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsOptionEnabled_self_CastInput = CallFunc_IsOptionEnabled_self_CastInput;
	Parms.CallFunc_IsOptionEnabled_bEnabled = CallFunc_IsOptionEnabled_bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateDOFDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCameraFocusSettings        K2Node_MakeStruct_CameraFocusSettings                            (None)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// struct FCameraFocusSettings        K2Node_SetFieldsInStruct_StructOut                               (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_IsOptionEnabled_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsOptionEnabled_bEnabled                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateDOFDistance(int32 Value, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FCameraFocusSettings& K2Node_MakeStruct_CameraFocusSettings, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const struct FCameraFocusSettings& K2Node_SetFieldsInStruct_StructOut, const class FString& CallFunc_Concat_StrStr_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_IsOptionEnabled_self_CastInput, bool CallFunc_IsOptionEnabled_bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateDOFDistance");

	Params::UPhotoModeHUD_C_UpdateDOFDistance_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_MakeStruct_CameraFocusSettings = K2Node_MakeStruct_CameraFocusSettings;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_IsOptionEnabled_self_CastInput = CallFunc_IsOptionEnabled_self_CastInput;
	Parms.CallFunc_IsOptionEnabled_bEnabled = CallFunc_IsOptionEnabled_bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateDOF
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCameraFocusSettings        K2Node_MakeStruct_CameraFocusSettings                            (None)
// struct FCameraFocusSettings        K2Node_SetFieldsInStruct_StructOut                               (None)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetOptionEnabled_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateDOF(int32 Value, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FCameraFocusSettings& K2Node_MakeStruct_CameraFocusSettings, const struct FCameraFocusSettings& K2Node_SetFieldsInStruct_StructOut, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetOptionEnabled_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateDOF");

	Params::UPhotoModeHUD_C_UpdateDOF_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_CameraFocusSettings = K2Node_MakeStruct_CameraFocusSettings;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_SetOptionEnabled_self_CastInput = CallFunc_SetOptionEnabled_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateContrast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateContrast(int32 Value, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateContrast");

	Params::UPhotoModeHUD_C_UpdateContrast_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateModifyContrast
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetOptionEnabled_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateModifyContrast(int32 Value, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1, float CallFunc_Multiply_IntFloat_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetOptionEnabled_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateModifyContrast");

	Params::UPhotoModeHUD_C_UpdateModifyContrast_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_1 = CallFunc_GetCamModifierSafe_CamModifier_1;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_SetOptionEnabled_self_CastInput = CallFunc_SetOptionEnabled_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateSaturation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateSaturation(int32 Value, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateSaturation");

	Params::UPhotoModeHUD_C_UpdateSaturation_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateFogDensity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateFogDensity(int32 Value, float CallFunc_Multiply_IntFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateFogDensity");

	Params::UPhotoModeHUD_C_UpdateFogDensity_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateFOV
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateFOV(int32 Value, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateFOV");

	Params::UPhotoModeHUD_C_UpdateFOV_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateCameraRoll
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Roll                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Pitch                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakRotator_Yaw                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UPhotoModeHUD_C::UpdateCameraRoll(int32 Value, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateCameraRoll");

	Params::UPhotoModeHUD_C_UpdateCameraRoll_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BreakRotator_Roll = CallFunc_BreakRotator_Roll;
	Parms.CallFunc_BreakRotator_Pitch = CallFunc_BreakRotator_Pitch;
	Parms.CallFunc_BreakRotator_Yaw = CallFunc_BreakRotator_Yaw;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Update Game Speed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               SimpleLogic                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              OptionIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_SimpleLogic                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Update_Game_Speed(bool SimpleLogic, int32 OptionIndex, int32 Local_Index, bool Local_SimpleLogic, bool CallFunc_IsCharInRagdoll_IsRagdoll_, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Update Game Speed");

	Params::UPhotoModeHUD_C_Update_Game_Speed_Params Parms{};

	Parms.SimpleLogic = SimpleLogic;
	Parms.OptionIndex = OptionIndex;
	Parms.Local_Index = Local_Index;
	Parms.Local_SimpleLogic = Local_SimpleLogic;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll_ = CallFunc_IsCharInRagdoll_IsRagdoll_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetButtons
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ResetButtons()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetButtons");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetWidgetReference
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetWidgetReference(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllButtons_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetWidgetReference");

	Params::UPhotoModeHUD_C_SetWidgetReference_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllButtons_Array = CallFunc_GetAllButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option = K2Node_DynamicCast_AsUI_Photo_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetNav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ResetNav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetNav");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Sound_Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Sound_Close()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Sound_Close");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Sound_Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Sound_Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Sound_Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Sound_Prompt
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Sound_Prompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Sound_Prompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateNavSpeed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::UpdateNavSpeed(const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UWidget* CallFunc_GetActiveLine_ReturnValue, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateNavSpeed");

	Params::UPhotoModeHUD_C_UpdateNavSpeed_Params Parms{};

	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::NavRight(class UWidget* CallFunc_GetActiveLine_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavRight");

	Params::UPhotoModeHUD_C_NavRight_Params Parms{};

	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::NavLeft(class UWidget* CallFunc_GetActiveLine_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavLeft");

	Params::UPhotoModeHUD_C_NavLeft_Params Parms{};

	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CameraModifier_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CameraModifier_Remove(class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_RemoveCameraModifier_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CameraModifier_Remove");

	Params::UPhotoModeHUD_C_CameraModifier_Remove_Params Parms{};

	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_RemoveCameraModifier_ReturnValue = CallFunc_RemoveCameraModifier_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Logo_CreateArray
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UImage*>              K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UPhotoModeHUD_C::Logo_CreateArray(TArray<class UImage*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Logo_CreateArray");

	Params::UPhotoModeHUD_C_Logo_CreateArray_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Fog_Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AExponentialHeightFog*>Local_Fogs                                                       (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// int32                              Local_FogIndex                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetOptionEnabled_self_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AExponentialHeightFog*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AExponentialHeightFog*       CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>CallFunc_SetOptionEnabled_self_CastInput_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AExponentialHeightFog*>CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::Fog_Initialize(const TArray<class AExponentialHeightFog*>& Local_Fogs, int32 Local_FogIndex, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetOptionEnabled_self_CastInput, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, class AExponentialHeightFog* CallFunc_Array_Get_Item, class AExponentialHeightFog* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> CallFunc_SetOptionEnabled_self_CastInput_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AExponentialHeightFog*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Fog_Initialize");

	Params::UPhotoModeHUD_C_Fog_Initialize_Params Parms{};

	Parms.Local_Fogs = Local_Fogs;
	Parms.Local_FogIndex = Local_FogIndex;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SetOptionEnabled_self_CastInput = CallFunc_SetOptionEnabled_self_CastInput;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_SetOptionEnabled_self_CastInput_1 = CallFunc_SetOptionEnabled_self_CastInput_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.CameraModifier_Create
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCameraModifier_PhotoMode_C* Output_Get                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier*             CallFunc_AddNewCameraModifier_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* K2Node_DynamicCast_AsCamera_Modifier_Photo_Mode                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::CameraModifier_Create(class UCameraModifier_PhotoMode_C** Output_Get, bool CallFunc_IsValid_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UCameraModifier* CallFunc_AddNewCameraModifier_ReturnValue, class UCameraModifier_PhotoMode_C* K2Node_DynamicCast_AsCamera_Modifier_Photo_Mode, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "CameraModifier_Create");

	Params::UPhotoModeHUD_C_CameraModifier_Create_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_AddNewCameraModifier_ReturnValue = CallFunc_AddNewCameraModifier_ReturnValue;
	Parms.K2Node_DynamicCast_AsCamera_Modifier_Photo_Mode = K2Node_DynamicCast_AsCamera_Modifier_Photo_Mode;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Output_Get != nullptr)
		*Output_Get = Parms.Output_Get;

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleHUD_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::ToggleHUD_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleHUD_Listen");

	Params::UPhotoModeHUD_C_ToggleHUD_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleHUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleGrid_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::ToggleGrid_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleGrid_Listen");

	Params::UPhotoModeHUD_C_ToggleGrid_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeReset_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::PhotoModeReset_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeReset_Listen");

	Params::UPhotoModeHUD_C_PhotoModeReset_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeReset
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlaySound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllButtons_Array                                     (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::PhotoModeReset(bool PlaySound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllButtons_Array, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeReset");

	Params::UPhotoModeHUD_C_PhotoModeReset_Params Parms{};

	Parms.PlaySound = PlaySound;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllButtons_Array = CallFunc_GetAllButtons_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::TakePicture_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_Listen");

	Params::UPhotoModeHUD_C_TakePicture_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetTextColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetTextColor(class UWidget* Button, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option, bool K2Node_DynamicCast_bSuccess, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetTextColor");

	Params::UPhotoModeHUD_C_SetTextColor_Params Parms{};

	Parms.Button = Button;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option = K2Node_DynamicCast_AsUI_Photo_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetSpinBoxStyle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpinBoxStyle               WidgetStyle                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetSpinBoxStyle(class UWidget* Widget, const struct FSpinBoxStyle& WidgetStyle, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetSpinBoxStyle");

	Params::UPhotoModeHUD_C_SetSpinBoxStyle_Params Parms{};

	Parms.Widget = Widget;
	Parms.WidgetStyle = WidgetStyle;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetButtonStyle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FButtonStyle                InStyle                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_PhotoModeOption_C*       K2Node_DynamicCast_AsUI_Photo_Mode_Option                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetButtonStyle(class UWidget* Widget, struct FButtonStyle& InStyle, class UUI_PhotoModeOptionSlider_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider, bool K2Node_DynamicCast_bSuccess, class UUI_PhotoModeOption_C* K2Node_DynamicCast_AsUI_Photo_Mode_Option, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetButtonStyle");

	Params::UPhotoModeHUD_C_SetButtonStyle_Params Parms{};

	Parms.Widget = Widget;
	Parms.InStyle = InStyle;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider = K2Node_DynamicCast_AsUI_Photo_Mode_Option_Slider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsUI_Photo_Mode_Option = K2Node_DynamicCast_AsUI_Photo_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Sound_Navigate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Sound_Navigate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Sound_Navigate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SelectedIndex                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UPhotoModeHUD_C::GetIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetIndex");

	Params::UPhotoModeHUD_C_GetIndex_Params Parms{};

	Parms.SelectedIndex = SelectedIndex;
	Parms.Delta = Delta;
	Parms.MaxIndex = MaxIndex;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleGrid_Option
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::ToggleGrid_Option(int32 Index, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleGrid_Option");

	Params::UPhotoModeHUD_C_ToggleGrid_Option_Params Parms{};

	Parms.Index = Index;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetActiveButtons
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWidget*>             ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelWidget*                K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

TArray<class UWidget*> UPhotoModeHUD_C::GetActiveButtons(int32 Temp_int_Variable, class UPanelWidget* K2Node_Select_Default, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetActiveButtons");

	Params::UPhotoModeHUD_C_GetActiveButtons_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.Navigation_SelectButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AnimateScroll                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               SkipSound                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseWidget                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Hovering                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CustomIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Delta                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ButtonWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_AnimateScroll                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_SkipSound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Local_Button                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Index_Selected                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Local_SelectedButton                                             (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Delta                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_Hovering                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_CustomIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseWidget                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_1                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_2                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_3                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_4                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_5                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_6                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_7                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_8                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetIndex_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_10                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_11                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_12                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue_9                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// int32                              CallFunc_Array_Find_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_6                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::Navigation_SelectButton(bool AnimateScroll, bool SkipSound, bool UseWidget, bool Hovering, int32 Index, bool CustomIndex, int32 Delta, class UWidget* ButtonWidget, bool Local_AnimateScroll, bool Local_SkipSound, int32 Local_Index, class UWidget* Local_Button, int32 Local_Index_Selected, class UWidget* Local_SelectedButton, int32 Local_Delta, bool Local_Hovering, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item_1, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_GetIndex_ReturnValue, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_3, class UWidget* CallFunc_Array_Get_Item_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_4, class UWidget* CallFunc_Array_Get_Item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_5, int32 Temp_int_Array_Index_Variable, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_6, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, class UWidget* CallFunc_Array_Get_Item_4, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_7, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_1, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_8, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, class UWidget* CallFunc_Array_Get_Item_5, int32 CallFunc_Array_Length_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetIndex_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_9, bool CallFunc_EqualEqual_IntInt_ReturnValue_10, bool CallFunc_EqualEqual_IntInt_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_3, TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue_9, int32 CallFunc_Array_Find_ReturnValue, class UWidget* CallFunc_Array_Get_Item_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Navigation_SelectButton");

	Params::UPhotoModeHUD_C_Navigation_SelectButton_Params Parms{};

	Parms.AnimateScroll = AnimateScroll;
	Parms.SkipSound = SkipSound;
	Parms.UseWidget = UseWidget;
	Parms.Hovering = Hovering;
	Parms.Index = Index;
	Parms.CustomIndex = CustomIndex;
	Parms.Delta = Delta;
	Parms.ButtonWidget = ButtonWidget;
	Parms.Local_AnimateScroll = Local_AnimateScroll;
	Parms.Local_SkipSound = Local_SkipSound;
	Parms.Local_Index = Local_Index;
	Parms.Local_Button = Local_Button;
	Parms.Local_Index_Selected = Local_Index_Selected;
	Parms.Local_SelectedButton = Local_SelectedButton;
	Parms.Local_Delta = Local_Delta;
	Parms.Local_Hovering = Local_Hovering;
	Parms.Local_CustomIndex = Local_CustomIndex;
	Parms.Local_UseWidget = Local_UseWidget;
	Parms.CallFunc_GetActiveButtons_ReturnValue = CallFunc_GetActiveButtons_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetActiveButtons_ReturnValue_1 = CallFunc_GetActiveButtons_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetActiveButtons_ReturnValue_2 = CallFunc_GetActiveButtons_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetIndex_ReturnValue = CallFunc_GetIndex_ReturnValue;
	Parms.CallFunc_GetActiveButtons_ReturnValue_3 = CallFunc_GetActiveButtons_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_4 = CallFunc_EqualEqual_IntInt_ReturnValue_4;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_5 = CallFunc_EqualEqual_IntInt_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetActiveButtons_ReturnValue_4 = CallFunc_GetActiveButtons_ReturnValue_4;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_6 = CallFunc_EqualEqual_IntInt_ReturnValue_6;
	Parms.CallFunc_GetActiveButtons_ReturnValue_5 = CallFunc_GetActiveButtons_ReturnValue_5;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetActiveButtons_ReturnValue_6 = CallFunc_GetActiveButtons_ReturnValue_6;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_7 = CallFunc_EqualEqual_IntInt_ReturnValue_7;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GetActiveButtons_ReturnValue_7 = CallFunc_GetActiveButtons_ReturnValue_7;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActiveButtons_ReturnValue_8 = CallFunc_GetActiveButtons_ReturnValue_8;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_8 = CallFunc_EqualEqual_IntInt_ReturnValue_8;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetIndex_ReturnValue_1 = CallFunc_GetIndex_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_9 = CallFunc_EqualEqual_IntInt_ReturnValue_9;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_10 = CallFunc_EqualEqual_IntInt_ReturnValue_10;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_11 = CallFunc_EqualEqual_IntInt_ReturnValue_11;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_12 = CallFunc_EqualEqual_IntInt_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetActiveButtons_ReturnValue_9 = CallFunc_GetActiveButtons_ReturnValue_9;
	Parms.CallFunc_Array_Find_ReturnValue = CallFunc_Array_Find_ReturnValue;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavUp_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event_Pressed                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Event_Released                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::NavUp_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavUp_Listen");

	Params::UPhotoModeHUD_C_NavUp_Listen_Params Parms{};

	Parms.Event_Pressed = Event_Pressed;
	Parms.Event_Released = Event_Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavDown_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 EventPressed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 EventReleased                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::NavDown_Listen(FDelegateProperty_ EventPressed, FDelegateProperty_ EventReleased)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavDown_Listen");

	Params::UPhotoModeHUD_C_NavDown_Listen_Params Parms{};

	Parms.EventPressed = EventPressed;
	Parms.EventReleased = EventReleased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavRight_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::NavRight_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavRight_Listen");

	Params::UPhotoModeHUD_C_NavRight_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavLeft_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Pressed                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Released                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::NavLeft_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavLeft_Listen");

	Params::UPhotoModeHUD_C_NavLeft_Listen_Params Parms{};

	Parms.Pressed = Pressed;
	Parms.Released = Released;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.NavClose_Listen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Callback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)

void UPhotoModeHUD_C::NavClose_Listen(FDelegateProperty_ Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "NavClose_Listen");

	Params::UPhotoModeHUD_C_NavClose_Listen_Params Parms{};

	Parms.Callback = Callback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UPhotoModeHUD_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnMouseButtonUp");

	Params::UPhotoModeHUD_C_OnMouseButtonUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)
// bool                               CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue_1                                   (None)

struct FEventReply UPhotoModeHUD_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnMouseButtonDown");

	Params::UPhotoModeHUD_C_OnMouseButtonDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;
	Parms.CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue = CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue_1 = CallFunc_Handled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetCamModifierSafe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UCameraModifier_PhotoMode_C* CamModifier                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_CameraModifier_Create_Output_Get                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::GetCamModifierSafe(class UCameraModifier_PhotoMode_C** CamModifier, class UCameraModifier_PhotoMode_C* CallFunc_CameraModifier_Create_Output_Get, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetCamModifierSafe");

	Params::UPhotoModeHUD_C_GetCamModifierSafe_Params Parms{};

	Parms.CallFunc_CameraModifier_Create_Output_Get = CallFunc_CameraModifier_Create_Output_Get;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CamModifier != nullptr)
		*CamModifier = Parms.CamModifier;

}


// Function PhotoModeHUD.PhotoModeHUD_C.GetActiveLine
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetActiveButtons_ReturnValue                            (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UPhotoModeHUD_C::GetActiveLine(TArray<class UWidget*>& CallFunc_GetActiveButtons_ReturnValue, class UWidget* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "GetActiveLine");

	Params::UPhotoModeHUD_C_GetActiveLine_Params Parms{};

	Parms.CallFunc_GetActiveButtons_ReturnValue = CallFunc_GetActiveButtons_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleHUD_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleHUD_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleHUD_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeUI_OnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeUI_OnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeUI_OnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetTimeDilation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentTimeDilation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Paused                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetTimeDilation(float CurrentTimeDilation, bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetTimeDilation");

	Params::UPhotoModeHUD_C_SetTimeDilation_Params Parms{};

	Parms.CurrentTimeDilation = CurrentTimeDilation;
	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Left_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Left_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Left_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Right_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Right_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Right_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleGrid_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleGrid_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleGrid_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Down_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Down_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Down_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Up_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Up_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Up_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Left_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Left_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Left_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Right_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Right_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Right_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_FieldOfView_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_FieldOfView_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_FieldOfView_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_FieldOfView_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_GameSpeed_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_GameSpeed_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_GameSpeed_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_GameSpeed_K2Node_ComponentBoundEvent_3_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_CamRoll_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_CamRoll_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_CamRoll_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_CamRoll_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeReset_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeReset_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeReset_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Fog_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Fog_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Fog_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Fog_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Brightness_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Brightness_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Brightness_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Brightness_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeUI_OnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeUI_OnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeUI_OnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_ModifyContrast_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_ModifyContrast_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_ModifyContrast_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_ModifyContrast_K2Node_ComponentBoundEvent_5_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Contrast_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Contrast_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Contrast_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Contrast_K2Node_ComponentBoundEvent_6_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_EnableDOF_K2Node_ComponentBoundEvent_7_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_EnableDOF_K2Node_ComponentBoundEvent_7_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_EnableDOF_K2Node_ComponentBoundEvent_7_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_EnableDOF_K2Node_ComponentBoundEvent_7_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_DOFDistance_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_DOFDistance_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_DOFDistance_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_DOFDistance_K2Node_ComponentBoundEvent_8_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_DOFAperture_K2Node_ComponentBoundEvent_9_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_DOFAperture_K2Node_ComponentBoundEvent_9_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_DOFAperture_K2Node_ComponentBoundEvent_9_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_DOFAperture_K2Node_ComponentBoundEvent_9_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Saturation_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Saturation_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Saturation_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Saturation_K2Node_ComponentBoundEvent_10_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PreConstruct");

	Params::UPhotoModeHUD_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Logo_K2Node_ComponentBoundEvent_11_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Logo_K2Node_ComponentBoundEvent_11_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Logo_K2Node_ComponentBoundEvent_11_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Logo_K2Node_ComponentBoundEvent_11_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Border_K2Node_ComponentBoundEvent_12_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Border_K2Node_ComponentBoundEvent_12_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Border_K2Node_ComponentBoundEvent_12_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Border_K2Node_ComponentBoundEvent_12_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::TakePicture_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HideHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HideHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HideHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ShowHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ShowHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ShowHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleHUD_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleHUD_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleHUD_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ToggleGrid_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ToggleGrid_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ToggleGrid_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Left_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Left_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Left_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Right_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Right_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Right_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Down_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Down_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Down_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Up_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Up_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Up_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Down_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Down_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Down_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Down_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Down_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Down_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Up_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Up_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Up_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Up_Released
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Up_Released()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Up_Released");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::TakePicture_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeReset_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeReset_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeReset_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Left_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Left_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Left_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Right_Hold
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Right_Hold()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Right_Hold");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnButtonHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::OnButtonHovered(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnButtonHovered");

	Params::UPhotoModeHUD_C_OnButtonHovered_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnButtonUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnButtonUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnButtonUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_ExecuteCommand
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::TakePicture_ExecuteCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_ExecuteCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_HideHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::TakePicture_HideHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_HideHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.TakePicture_ShowHUD
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::TakePicture_ShowHUD()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "TakePicture_ShowHUD");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_13_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_TakeShot_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_TakeShot_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_TakeShot_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_TakeShot_K2Node_ComponentBoundEvent_14_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_HideHUD_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_HideHUD_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_HideHUD_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_HideHUD_K2Node_ComponentBoundEvent_15_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_ToggleGrid_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_ToggleGrid_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_ToggleGrid_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_ToggleGrid_K2Node_ComponentBoundEvent_16_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_ResetCamera_K2Node_ComponentBoundEvent_18_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_ResetCamera_K2Node_ComponentBoundEvent_18_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_ResetCamera_K2Node_ComponentBoundEvent_18_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_ResetCamera_K2Node_ComponentBoundEvent_18_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Size_K2Node_ComponentBoundEvent_19_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Size_K2Node_ComponentBoundEvent_19_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Size_K2Node_ComponentBoundEvent_19_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Size_K2Node_ComponentBoundEvent_19_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BindInputEvents
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::BindInputEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BindInputEvents");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.InitializeValues
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::InitializeValues()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "InitializeValues");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Tab_Next_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Tab_Next_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Tab_Next_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Tab_Next_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Tab_Next_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Tab_Next_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Tab_Previous_Listen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Tab_Previous_Listen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Tab_Previous_Listen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Nav_Tab_Previous_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Nav_Tab_Previous_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Nav_Tab_Previous_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_RecentCameras_K2Node_ComponentBoundEvent_21_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_RecentCameras_K2Node_ComponentBoundEvent_21_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_RecentCameras_K2Node_ComponentBoundEvent_21_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_RecentCameras_K2Node_ComponentBoundEvent_21_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_Tint_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_Tint_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_Tint_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_Tint_K2Node_ComponentBoundEvent_22_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_RedOffset_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_RedOffset_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_RedOffset_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_RedOffset_K2Node_ComponentBoundEvent_23_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_GreenOffset_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_GreenOffset_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_GreenOffset_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_GreenOffset_K2Node_ComponentBoundEvent_24_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_BlueOffset_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_BlueOffset_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_BlueOffset_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_BlueOffset_K2Node_ComponentBoundEvent_25_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_FilmGrain_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_FilmGrain_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_FilmGrain_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_FilmGrain_K2Node_ComponentBoundEvent_26_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_MotionBlur_K2Node_ComponentBoundEvent_27_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_ChromaticAberration_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_ChromaticAberration_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_ChromaticAberration_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_ChromaticAberration_K2Node_ComponentBoundEvent_28_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_VignetteIntensity_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_VignetteIntensity_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_VignetteIntensity_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_VignetteIntensity_K2Node_ComponentBoundEvent_29_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_FogHeightFallOff_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_FogHeightFallOff_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_FogHeightFallOff_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_FogHeightFallOff_K2Node_ComponentBoundEvent_30_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_FogColorIntensity_K2Node_ComponentBoundEvent_31_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_FogColorIntensity_K2Node_ComponentBoundEvent_31_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_FogColorIntensity_K2Node_ComponentBoundEvent_31_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_FogColorIntensity_K2Node_ComponentBoundEvent_31_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideCharacter_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideCharacter_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideCharacter_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideCharacter_K2Node_ComponentBoundEvent_32_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideBallistazooka_K2Node_ComponentBoundEvent_33_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideBallistazooka_K2Node_ComponentBoundEvent_33_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideBallistazooka_K2Node_ComponentBoundEvent_33_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideBallistazooka_K2Node_ComponentBoundEvent_33_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeResetLine_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeResetLine_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeResetLine_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeResetLine_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeResetLine_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeResetLine_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_ControllerButton_ResetCurrent_K2Node_ComponentBoundEvent_20_OnButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUI_ControllerButton_C*      ControllerButton                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_ControllerButton_ResetCurrent_K2Node_ComponentBoundEvent_20_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_ControllerButton_ResetCurrent_K2Node_ComponentBoundEvent_20_OnButtonClicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_ControllerButton_ResetCurrent_K2Node_ComponentBoundEvent_20_OnButtonClicked__DelegateSignature_Params Parms{};

	Parms.ControllerButton = ControllerButton;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_LogoAngle_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_LogoAngle_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_LogoAngle_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_LogoAngle_K2Node_ComponentBoundEvent_33_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_LogoOffsetX_K2Node_ComponentBoundEvent_35_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_LogoOffsetX_K2Node_ComponentBoundEvent_35_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_LogoOffsetX_K2Node_ComponentBoundEvent_35_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_LogoOffsetX_K2Node_ComponentBoundEvent_35_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_LogoOffsetY_K2Node_ComponentBoundEvent_36_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_LogoOffsetY_K2Node_ComponentBoundEvent_36_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_LogoOffsetY_K2Node_ComponentBoundEvent_36_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_LogoOffsetY_K2Node_ComponentBoundEvent_36_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SkipFrame_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::SkipFrame_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SkipFrame_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SkipFrame_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::SkipFrame_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SkipFrame_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateTimeDilationIfNeeded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::UpdateTimeDilationIfNeeded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateTimeDilationIfNeeded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_LogoScale_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_LogoScale_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_LogoScale_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_LogoScale_K2Node_ComponentBoundEvent_37_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideEnemies_K2Node_ComponentBoundEvent_38_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideEnemies_K2Node_ComponentBoundEvent_38_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideEnemies_K2Node_ComponentBoundEvent_38_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideEnemies_K2Node_ComponentBoundEvent_38_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ResetSomeOptions
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::ResetSomeOptions()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ResetSomeOptions");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCutsceneOnOpen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HandleCutsceneOnOpen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCutsceneOnOpen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCutsceneOnClose
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HandleCutsceneOnClose()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCutsceneOnClose");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnPreSequenceActorCleared
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnPreSequenceActorCleared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnPreSequenceActorCleared");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.SetCameraCutsDisabled
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInDisableCameraCuts                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::SetCameraCutsDisabled(bool bInDisableCameraCuts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "SetCameraCutsDisabled");

	Params::UPhotoModeHUD_C_SetCameraCutsDisabled_Params Parms{};

	Parms.bInDisableCameraCuts = bInDisableCameraCuts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCutsceneOnOpen_Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HandleCutsceneOnOpen_Camera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCutsceneOnOpen_Camera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandleCutscneOnClose_Camera
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HandleCutscneOnClose_Camera()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandleCutscneOnClose_Camera");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateInputCutsceneState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::UpdateInputCutsceneState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateInputCutsceneState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Tick");

	Params::UPhotoModeHUD_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_CameraFilter_K2Node_ComponentBoundEvent_39_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_CameraFilter_K2Node_ComponentBoundEvent_39_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_CameraFilter_K2Node_ComponentBoundEvent_39_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_CameraFilter_K2Node_ComponentBoundEvent_39_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnCutsceneEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnCutsceneEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnCutsceneEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnCutsceneStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnCutsceneStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnCutsceneStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Cutscene_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Cutscene_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Cutscene_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Cutscene_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Cutscene_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Cutscene_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_CharacterDye_K2Node_ComponentBoundEvent_40_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_CharacterDye_K2Node_ComponentBoundEvent_40_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_CharacterDye_K2Node_ComponentBoundEvent_40_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_CharacterDye_K2Node_ComponentBoundEvent_40_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_FilterIntensity_K2Node_ComponentBoundEvent_41_OnValueChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_FilterIntensity_K2Node_ComponentBoundEvent_41_OnValueChanged__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_FilterIntensity_K2Node_ComponentBoundEvent_41_OnValueChanged__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_FilterIntensity_K2Node_ComponentBoundEvent_41_OnValueChanged__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.UpdateGameSpeed_Simple
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              TimeDilation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Paused                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPhotoModeHUD_C::UpdateGameSpeed_Simple(float TimeDilation, bool Paused)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "UpdateGameSpeed_Simple");

	Params::UPhotoModeHUD_C_UpdateGameSpeed_Simple_Params Parms{};

	Parms.TimeDilation = TimeDilation;
	Parms.Paused = Paused;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__Button_Ok_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::BndEvt__Button_Ok_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__Button_Ok_K2Node_ComponentBoundEvent_42_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeDismiss_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeDismiss_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeDismiss_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.PhotoModeDismiss_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::PhotoModeDismiss_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "PhotoModeDismiss_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.RagdollBind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::RagdollBind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "RagdollBind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.RagdollUnbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::RagdollUnbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "RagdollUnbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnRagdoll_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnRagdoll_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnRagdoll_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.OnRagdoll_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::OnRagdoll_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "OnRagdoll_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.HandlePhysics
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::HandlePhysics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "HandlePhysics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_17_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_43_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_44_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_45_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_46_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_46_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_46_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_46_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_47_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_47_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_47_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_47_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_48_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_49_Clicked__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_50_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_50_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_50_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_50_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_51_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_51_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_51_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_51_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_52_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_52_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_52_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_52_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_53_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_53_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_53_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Camera_K2Node_ComponentBoundEvent_53_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_54_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_55_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_55_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_55_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_DOF_K2Node_ComponentBoundEvent_55_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_56_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_56_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_56_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_56_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_57_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_57_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_57_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Contrast_K2Node_ComponentBoundEvent_57_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_58_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_58_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_58_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_58_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_RGB_K2Node_ComponentBoundEvent_59_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_60_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_60_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_60_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_60_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_61_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_61_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_61_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Effects_K2Node_ComponentBoundEvent_61_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_62_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_62_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_62_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_62_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_63_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_63_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_63_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Visibility_K2Node_ComponentBoundEvent_63_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_64_Hovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Button_Fog_K2Node_ComponentBoundEvent_65_Unhovered__DelegateSignature_Params Parms{};

	Parms.Index = Index;
	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.FrozenState_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::FrozenState_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "FrozenState_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.FrozenState_Unbind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::FrozenState_Unbind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "FrozenState_Unbind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Freeze_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Freeze_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Freeze_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.Freeze_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPhotoModeHUD_C::Freeze_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "Freeze_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HidePostProcessEffects_K2Node_ComponentBoundEvent_66_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HidePostProcessEffects_K2Node_ComponentBoundEvent_66_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HidePostProcessEffects_K2Node_ComponentBoundEvent_66_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HidePostProcessEffects_K2Node_ComponentBoundEvent_66_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideWeaponTrail_K2Node_ComponentBoundEvent_67_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideWeaponTrail_K2Node_ComponentBoundEvent_67_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideWeaponTrail_K2Node_ComponentBoundEvent_67_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideWeaponTrail_K2Node_ComponentBoundEvent_67_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideTarnishedSeal_K2Node_ComponentBoundEvent_68_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideTarnishedSeal_K2Node_ComponentBoundEvent_68_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideTarnishedSeal_K2Node_ComponentBoundEvent_68_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideTarnishedSeal_K2Node_ComponentBoundEvent_68_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_HideSacredGlands_K2Node_ComponentBoundEvent_69_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_HideSacredGlands_K2Node_ComponentBoundEvent_69_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_HideSacredGlands_K2Node_ComponentBoundEvent_69_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_HideSacredGlands_K2Node_ComponentBoundEvent_69_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.BndEvt__UI_Option_RadialBlur_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::BndEvt__UI_Option_RadialBlur_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature(int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "BndEvt__UI_Option_RadialBlur_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature");

	Params::UPhotoModeHUD_C_BndEvt__UI_Option_RadialBlur_K2Node_ComponentBoundEvent_70_OnValueChange__DelegateSignature_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PhotoModeHUD.PhotoModeHUD_C.ExecuteUbergraph_PhotoModeHUD
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll_                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGlobalTimeDilation_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CurrentTimeDilation                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Paused_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_39                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_38                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_37                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_36                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_35                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_34                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_33                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_32                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_31                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_30                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_29                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_28                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_27                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_5                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_4                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_3                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_26                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_25                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetGamePaused_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_24                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_23                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_22                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_21                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_20                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_4                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_19                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_5                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_18                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_6                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_17                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_7                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_16                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_15                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_14                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_13                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_ControllerButton_C*      K2Node_ComponentBoundEvent_ControllerButton                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_12                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_11                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_10                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_BoolBool_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_9                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_8                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bInDisableCameraCuts                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULevelSequencePlayer*        CallFunc_GetSequencePlayer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDisableCameraCuts_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInputEnabled_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_6                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_7                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_6                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_5                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_TimeDilation                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Paused                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__5                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVisible_ReturnValue_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_7                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsCharInRagdoll_IsRagdoll__6                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_4                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_5                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetGamePaused_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_23                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_23                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_22                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_22                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_21                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_21                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_20                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_20                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_19                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_19                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_18                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_18                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_17                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_17                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_16                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_16                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_15                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_15                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_14                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_14                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_13                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_13                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_12                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_12                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_11                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_11                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_10                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_9                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_9                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Index                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUI_MainMenu_Button_C*       K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_8                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_6                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_7                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIPhotoModeOption_C>K2Node_DynamicCast_AsIPhoto_Mode_Option_8                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetActiveLine_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_8                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                CallFunc_GetCharacterAs0_Base_As0_Base_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_NewValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_NewValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPhotoModeHUD_C::ExecuteUbergraph_PhotoModeHUD(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetGamePaused_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsCharInRagdoll_IsRagdoll_, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_SetGamePaused_ReturnValue_2, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsCharInRagdoll_IsRagdoll__1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_SetGamePaused_ReturnValue_3, bool CallFunc_IsVisible_ReturnValue_2, bool CallFunc_IsCharInRagdoll_IsRagdoll__2, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_SetGamePaused_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsVisible_ReturnValue_3, bool CallFunc_IsCharInRagdoll_IsRagdoll__3, bool CallFunc_Not_PreBool_ReturnValue_3, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_IsValid_ReturnValue_6, float CallFunc_GetGlobalTimeDilation_ReturnValue, float K2Node_CustomEvent_CurrentTimeDilation, bool K2Node_CustomEvent_Paused_1, float CallFunc_Divide_FloatFloat_ReturnValue, int32 K2Node_ComponentBoundEvent_NewValue_39, int32 K2Node_ComponentBoundEvent_NewValue_38, int32 K2Node_ComponentBoundEvent_NewValue_37, int32 K2Node_ComponentBoundEvent_NewValue_36, int32 K2Node_ComponentBoundEvent_NewValue_35, float CallFunc_Multiply_IntFloat_ReturnValue, int32 K2Node_ComponentBoundEvent_NewValue_34, int32 K2Node_ComponentBoundEvent_NewValue_33, int32 K2Node_ComponentBoundEvent_NewValue_32, int32 K2Node_ComponentBoundEvent_NewValue_31, int32 K2Node_ComponentBoundEvent_NewValue_30, int32 K2Node_ComponentBoundEvent_NewValue_29, bool K2Node_Event_IsDesignTime, int32 K2Node_ComponentBoundEvent_NewValue_28, int32 K2Node_ComponentBoundEvent_NewValue_27, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* K2Node_CustomEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_5, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_4, bool CallFunc_IsCharInRagdoll_IsRagdoll__4, bool CallFunc_IsVisible_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_SetGamePaused_ReturnValue_5, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_3, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_2, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, int32 K2Node_ComponentBoundEvent_NewValue_26, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 K2Node_ComponentBoundEvent_NewValue_25, bool CallFunc_SetGamePaused_ReturnValue_6, bool CallFunc_SetGamePaused_ReturnValue_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option, bool K2Node_DynamicCast_bSuccess, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1, bool K2Node_DynamicCast_bSuccess_2, int32 K2Node_ComponentBoundEvent_NewValue_24, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, float CallFunc_Conv_IntToFloat_ReturnValue, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier, int32 K2Node_ComponentBoundEvent_NewValue_23, float CallFunc_Multiply_IntFloat_ReturnValue_1, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_1, int32 K2Node_ComponentBoundEvent_NewValue_22, float CallFunc_Multiply_IntFloat_ReturnValue_2, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_2, int32 K2Node_ComponentBoundEvent_NewValue_21, float CallFunc_Multiply_IntFloat_ReturnValue_3, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_3, int32 K2Node_ComponentBoundEvent_NewValue_20, float CallFunc_Multiply_IntFloat_ReturnValue_4, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_4, int32 K2Node_ComponentBoundEvent_NewValue_19, float CallFunc_Multiply_IntFloat_ReturnValue_5, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_5, int32 K2Node_ComponentBoundEvent_NewValue_18, float CallFunc_Multiply_IntFloat_ReturnValue_6, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_6, int32 K2Node_ComponentBoundEvent_NewValue_17, float CallFunc_Multiply_IntFloat_ReturnValue_7, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_7, int32 K2Node_ComponentBoundEvent_NewValue_16, int32 K2Node_ComponentBoundEvent_NewValue_15, int32 K2Node_ComponentBoundEvent_NewValue_14, bool K2Node_SwitchInteger_CmpSuccess, int32 K2Node_ComponentBoundEvent_NewValue_13, bool K2Node_SwitchInteger_CmpSuccess_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, int32 K2Node_ComponentBoundEvent_NewValue_12, int32 K2Node_ComponentBoundEvent_NewValue_11, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, int32 K2Node_ComponentBoundEvent_NewValue_10, float CallFunc_Conv_IntToFloat_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 K2Node_ComponentBoundEvent_NewValue_9, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_8, int32 K2Node_ComponentBoundEvent_NewValue_8, bool K2Node_SwitchInteger_CmpSuccess_2, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_1, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool K2Node_CustomEvent_bInDisableCameraCuts, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, bool CallFunc_GetDisableCameraCuts_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_IsValid_ReturnValue_9, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8, bool CallFunc_IsInputEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 K2Node_ComponentBoundEvent_NewValue_7, bool CallFunc_IsValid_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, int32 K2Node_ComponentBoundEvent_NewValue_6, int32 K2Node_ComponentBoundEvent_NewValue_5, float CallFunc_Multiply_IntFloat_ReturnValue_9, float K2Node_CustomEvent_TimeDilation, bool K2Node_CustomEvent_Paused, bool CallFunc_SetGamePaused_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_IsCharInRagdoll_IsRagdoll__5, bool CallFunc_IsVisible_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, bool CallFunc_IsCharInRagdoll_IsRagdoll__6, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_12, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_3, bool K2Node_DynamicCast_bSuccess_5, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_4, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_13, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_5, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_SetGamePaused_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_14, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, int32 K2Node_ComponentBoundEvent_Index_23, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_23, int32 K2Node_ComponentBoundEvent_Index_22, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_22, int32 K2Node_ComponentBoundEvent_Index_21, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_21, int32 K2Node_ComponentBoundEvent_Index_20, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_20, int32 K2Node_ComponentBoundEvent_Index_19, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_19, int32 K2Node_ComponentBoundEvent_Index_18, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_18, int32 K2Node_ComponentBoundEvent_Index_17, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_17, int32 K2Node_ComponentBoundEvent_Index_16, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_16, int32 K2Node_ComponentBoundEvent_Index_15, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_15, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, bool CallFunc_Not_PreBool_ReturnValue_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_6, bool K2Node_DynamicCast_bSuccess_8, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_7, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_15, TScriptInterface<class IIPhotoModeOption_C> K2Node_DynamicCast_AsIPhoto_Mode_Option_8, bool K2Node_DynamicCast_bSuccess_10, class UWidget* CallFunc_GetActiveLine_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 K2Node_ComponentBoundEvent_NewValue_4, bool K2Node_SwitchInteger_CmpSuccess_3, bool CallFunc_IsValid_ReturnValue_16, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EPlatform CallFunc_GetPlatform_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_Conv_IntToFloat_ReturnValue_4, float CallFunc_Conv_IntToFloat_ReturnValue_5, class UCameraModifier_PhotoMode_C* CallFunc_GetCamModifierSafe_CamModifier_8, int32 K2Node_ComponentBoundEvent_NewValue_3, bool K2Node_SwitchInteger_CmpSuccess_4, int32 K2Node_ComponentBoundEvent_NewValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, bool K2Node_SwitchInteger_CmpSuccess_5, int32 K2Node_ComponentBoundEvent_NewValue_1, bool K2Node_SwitchInteger_CmpSuccess_6, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 K2Node_ComponentBoundEvent_NewValue, bool K2Node_SwitchInteger_CmpSuccess_7, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PhotoModeHUD_C", "ExecuteUbergraph_PhotoModeHUD");

	Params::UPhotoModeHUD_C_ExecuteUbergraph_PhotoModeHUD_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue = CallFunc_SetGamePaused_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SetGamePaused_ReturnValue_1 = CallFunc_SetGamePaused_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll_ = CallFunc_IsCharInRagdoll_IsRagdoll_;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SetGamePaused_ReturnValue_2 = CallFunc_SetGamePaused_ReturnValue_2;
	Parms.CallFunc_IsVisible_ReturnValue_1 = CallFunc_IsVisible_ReturnValue_1;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__1 = CallFunc_IsCharInRagdoll_IsRagdoll__1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_SetGamePaused_ReturnValue_3 = CallFunc_SetGamePaused_ReturnValue_3;
	Parms.CallFunc_IsVisible_ReturnValue_2 = CallFunc_IsVisible_ReturnValue_2;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__2 = CallFunc_IsCharInRagdoll_IsRagdoll__2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_SetGamePaused_ReturnValue_4 = CallFunc_SetGamePaused_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsVisible_ReturnValue_3 = CallFunc_IsVisible_ReturnValue_3;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__3 = CallFunc_IsCharInRagdoll_IsRagdoll__3;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetGlobalTimeDilation_ReturnValue = CallFunc_GetGlobalTimeDilation_ReturnValue;
	Parms.K2Node_CustomEvent_CurrentTimeDilation = K2Node_CustomEvent_CurrentTimeDilation;
	Parms.K2Node_CustomEvent_Paused_1 = K2Node_CustomEvent_Paused_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_39 = K2Node_ComponentBoundEvent_NewValue_39;
	Parms.K2Node_ComponentBoundEvent_NewValue_38 = K2Node_ComponentBoundEvent_NewValue_38;
	Parms.K2Node_ComponentBoundEvent_NewValue_37 = K2Node_ComponentBoundEvent_NewValue_37;
	Parms.K2Node_ComponentBoundEvent_NewValue_36 = K2Node_ComponentBoundEvent_NewValue_36;
	Parms.K2Node_ComponentBoundEvent_NewValue_35 = K2Node_ComponentBoundEvent_NewValue_35;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_34 = K2Node_ComponentBoundEvent_NewValue_34;
	Parms.K2Node_ComponentBoundEvent_NewValue_33 = K2Node_ComponentBoundEvent_NewValue_33;
	Parms.K2Node_ComponentBoundEvent_NewValue_32 = K2Node_ComponentBoundEvent_NewValue_32;
	Parms.K2Node_ComponentBoundEvent_NewValue_31 = K2Node_ComponentBoundEvent_NewValue_31;
	Parms.K2Node_ComponentBoundEvent_NewValue_30 = K2Node_ComponentBoundEvent_NewValue_30;
	Parms.K2Node_ComponentBoundEvent_NewValue_29 = K2Node_ComponentBoundEvent_NewValue_29;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_NewValue_28 = K2Node_ComponentBoundEvent_NewValue_28;
	Parms.K2Node_ComponentBoundEvent_NewValue_27 = K2Node_ComponentBoundEvent_NewValue_27;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_5 = K2Node_ComponentBoundEvent_ControllerButton_5;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_4 = K2Node_ComponentBoundEvent_ControllerButton_4;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__4 = CallFunc_IsCharInRagdoll_IsRagdoll__4;
	Parms.CallFunc_IsVisible_ReturnValue_4 = CallFunc_IsVisible_ReturnValue_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_SetGamePaused_ReturnValue_5 = CallFunc_SetGamePaused_ReturnValue_5;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_3 = K2Node_ComponentBoundEvent_ControllerButton_3;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_2 = K2Node_ComponentBoundEvent_ControllerButton_2;
	Parms.K2Node_ComponentBoundEvent_ControllerButton_1 = K2Node_ComponentBoundEvent_ControllerButton_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_26 = K2Node_ComponentBoundEvent_NewValue_26;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_ComponentBoundEvent_NewValue_25 = K2Node_ComponentBoundEvent_NewValue_25;
	Parms.CallFunc_SetGamePaused_ReturnValue_6 = CallFunc_SetGamePaused_ReturnValue_6;
	Parms.CallFunc_SetGamePaused_ReturnValue_7 = CallFunc_SetGamePaused_ReturnValue_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option = K2Node_DynamicCast_AsIPhoto_Mode_Option;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1 = K2Node_DynamicCast_AsGame_Play_Game_State_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_24 = K2Node_ComponentBoundEvent_NewValue_24;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetCamModifierSafe_CamModifier = CallFunc_GetCamModifierSafe_CamModifier;
	Parms.K2Node_ComponentBoundEvent_NewValue_23 = K2Node_ComponentBoundEvent_NewValue_23;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_1 = CallFunc_GetCamModifierSafe_CamModifier_1;
	Parms.K2Node_ComponentBoundEvent_NewValue_22 = K2Node_ComponentBoundEvent_NewValue_22;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_2 = CallFunc_Multiply_IntFloat_ReturnValue_2;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_2 = CallFunc_GetCamModifierSafe_CamModifier_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_21 = K2Node_ComponentBoundEvent_NewValue_21;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_3 = CallFunc_Multiply_IntFloat_ReturnValue_3;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_3 = CallFunc_GetCamModifierSafe_CamModifier_3;
	Parms.K2Node_ComponentBoundEvent_NewValue_20 = K2Node_ComponentBoundEvent_NewValue_20;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_4 = CallFunc_Multiply_IntFloat_ReturnValue_4;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_4 = CallFunc_GetCamModifierSafe_CamModifier_4;
	Parms.K2Node_ComponentBoundEvent_NewValue_19 = K2Node_ComponentBoundEvent_NewValue_19;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_5 = CallFunc_Multiply_IntFloat_ReturnValue_5;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_5 = CallFunc_GetCamModifierSafe_CamModifier_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_18 = K2Node_ComponentBoundEvent_NewValue_18;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_6 = CallFunc_Multiply_IntFloat_ReturnValue_6;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_6 = CallFunc_GetCamModifierSafe_CamModifier_6;
	Parms.K2Node_ComponentBoundEvent_NewValue_17 = K2Node_ComponentBoundEvent_NewValue_17;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_7 = CallFunc_Multiply_IntFloat_ReturnValue_7;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_7 = CallFunc_GetCamModifierSafe_CamModifier_7;
	Parms.K2Node_ComponentBoundEvent_NewValue_16 = K2Node_ComponentBoundEvent_NewValue_16;
	Parms.K2Node_ComponentBoundEvent_NewValue_15 = K2Node_ComponentBoundEvent_NewValue_15;
	Parms.K2Node_ComponentBoundEvent_NewValue_14 = K2Node_ComponentBoundEvent_NewValue_14;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_NewValue_13 = K2Node_ComponentBoundEvent_NewValue_13;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2;
	Parms.K2Node_ComponentBoundEvent_ControllerButton = K2Node_ComponentBoundEvent_ControllerButton;
	Parms.K2Node_ComponentBoundEvent_NewValue_12 = K2Node_ComponentBoundEvent_NewValue_12;
	Parms.K2Node_ComponentBoundEvent_NewValue_11 = K2Node_ComponentBoundEvent_NewValue_11;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewValue_10 = K2Node_ComponentBoundEvent_NewValue_10;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_3 = CallFunc_Conv_IntToFloat_ReturnValue_3;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_NotEqual_BoolBool_ReturnValue = CallFunc_NotEqual_BoolBool_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_9 = K2Node_ComponentBoundEvent_NewValue_9;
	Parms.CallFunc_Not_PreBool_ReturnValue_5 = CallFunc_Not_PreBool_ReturnValue_5;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_8 = CallFunc_Multiply_IntFloat_ReturnValue_8;
	Parms.K2Node_ComponentBoundEvent_NewValue_8 = K2Node_ComponentBoundEvent_NewValue_8;
	Parms.K2Node_SwitchInteger_CmpSuccess_2 = K2Node_SwitchInteger_CmpSuccess_2;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_1 = K2Node_DynamicCast_AsIPhoto_Mode_Option_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_GetSequencePlayer_ReturnValue = CallFunc_GetSequencePlayer_ReturnValue;
	Parms.K2Node_CustomEvent_bInDisableCameraCuts = K2Node_CustomEvent_bInDisableCameraCuts;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6;
	Parms.CallFunc_GetSequencePlayer_ReturnValue_1 = CallFunc_GetSequencePlayer_ReturnValue_1;
	Parms.CallFunc_GetDisableCameraCuts_ReturnValue = CallFunc_GetDisableCameraCuts_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8;
	Parms.CallFunc_IsInputEnabled_ReturnValue = CallFunc_IsInputEnabled_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_6 = CallFunc_Not_PreBool_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_9;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_ComponentBoundEvent_NewValue_7 = K2Node_ComponentBoundEvent_NewValue_7;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_11;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12 = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.K2Node_ComponentBoundEvent_NewValue_6 = K2Node_ComponentBoundEvent_NewValue_6;
	Parms.K2Node_ComponentBoundEvent_NewValue_5 = K2Node_ComponentBoundEvent_NewValue_5;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_9 = CallFunc_Multiply_IntFloat_ReturnValue_9;
	Parms.K2Node_CustomEvent_TimeDilation = K2Node_CustomEvent_TimeDilation;
	Parms.K2Node_CustomEvent_Paused = K2Node_CustomEvent_Paused;
	Parms.CallFunc_SetGamePaused_ReturnValue_8 = CallFunc_SetGamePaused_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__5 = CallFunc_IsCharInRagdoll_IsRagdoll__5;
	Parms.CallFunc_IsVisible_ReturnValue_5 = CallFunc_IsVisible_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue_7 = CallFunc_Not_PreBool_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.CallFunc_IsCharInRagdoll_IsRagdoll__6 = CallFunc_IsCharInRagdoll_IsRagdoll__6;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_2 = K2Node_DynamicCast_AsIPhoto_Mode_Option_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_3 = K2Node_DynamicCast_AsIPhoto_Mode_Option_3;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base = CallFunc_GetCharacterAs0_Base_As0_Base;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_1 = CallFunc_GetCharacterAs0_Base_As0_Base_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_4 = K2Node_DynamicCast_AsIPhoto_Mode_Option_4;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_5 = K2Node_DynamicCast_AsIPhoto_Mode_Option_5;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_SetGamePaused_ReturnValue_9 = CallFunc_SetGamePaused_ReturnValue_9;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_2 = CallFunc_GetCharacterAs0_Base_As0_Base_2;
	Parms.K2Node_ComponentBoundEvent_Index_23 = K2Node_ComponentBoundEvent_Index_23;
	Parms.K2Node_ComponentBoundEvent_Widget_23 = K2Node_ComponentBoundEvent_Widget_23;
	Parms.K2Node_ComponentBoundEvent_Index_22 = K2Node_ComponentBoundEvent_Index_22;
	Parms.K2Node_ComponentBoundEvent_Widget_22 = K2Node_ComponentBoundEvent_Widget_22;
	Parms.K2Node_ComponentBoundEvent_Index_21 = K2Node_ComponentBoundEvent_Index_21;
	Parms.K2Node_ComponentBoundEvent_Widget_21 = K2Node_ComponentBoundEvent_Widget_21;
	Parms.K2Node_ComponentBoundEvent_Index_20 = K2Node_ComponentBoundEvent_Index_20;
	Parms.K2Node_ComponentBoundEvent_Widget_20 = K2Node_ComponentBoundEvent_Widget_20;
	Parms.K2Node_ComponentBoundEvent_Index_19 = K2Node_ComponentBoundEvent_Index_19;
	Parms.K2Node_ComponentBoundEvent_Widget_19 = K2Node_ComponentBoundEvent_Widget_19;
	Parms.K2Node_ComponentBoundEvent_Index_18 = K2Node_ComponentBoundEvent_Index_18;
	Parms.K2Node_ComponentBoundEvent_Widget_18 = K2Node_ComponentBoundEvent_Widget_18;
	Parms.K2Node_ComponentBoundEvent_Index_17 = K2Node_ComponentBoundEvent_Index_17;
	Parms.K2Node_ComponentBoundEvent_Widget_17 = K2Node_ComponentBoundEvent_Widget_17;
	Parms.K2Node_ComponentBoundEvent_Index_16 = K2Node_ComponentBoundEvent_Index_16;
	Parms.K2Node_ComponentBoundEvent_Widget_16 = K2Node_ComponentBoundEvent_Widget_16;
	Parms.K2Node_ComponentBoundEvent_Index_15 = K2Node_ComponentBoundEvent_Index_15;
	Parms.K2Node_ComponentBoundEvent_Widget_15 = K2Node_ComponentBoundEvent_Widget_15;
	Parms.K2Node_ComponentBoundEvent_Index_14 = K2Node_ComponentBoundEvent_Index_14;
	Parms.K2Node_ComponentBoundEvent_Widget_14 = K2Node_ComponentBoundEvent_Widget_14;
	Parms.K2Node_ComponentBoundEvent_Index_13 = K2Node_ComponentBoundEvent_Index_13;
	Parms.K2Node_ComponentBoundEvent_Widget_13 = K2Node_ComponentBoundEvent_Widget_13;
	Parms.K2Node_ComponentBoundEvent_Index_12 = K2Node_ComponentBoundEvent_Index_12;
	Parms.K2Node_ComponentBoundEvent_Widget_12 = K2Node_ComponentBoundEvent_Widget_12;
	Parms.K2Node_ComponentBoundEvent_Index_11 = K2Node_ComponentBoundEvent_Index_11;
	Parms.K2Node_ComponentBoundEvent_Widget_11 = K2Node_ComponentBoundEvent_Widget_11;
	Parms.K2Node_ComponentBoundEvent_Index_10 = K2Node_ComponentBoundEvent_Index_10;
	Parms.K2Node_ComponentBoundEvent_Widget_10 = K2Node_ComponentBoundEvent_Widget_10;
	Parms.K2Node_ComponentBoundEvent_Index_9 = K2Node_ComponentBoundEvent_Index_9;
	Parms.K2Node_ComponentBoundEvent_Widget_9 = K2Node_ComponentBoundEvent_Widget_9;
	Parms.K2Node_ComponentBoundEvent_Index_8 = K2Node_ComponentBoundEvent_Index_8;
	Parms.K2Node_ComponentBoundEvent_Widget_8 = K2Node_ComponentBoundEvent_Widget_8;
	Parms.K2Node_ComponentBoundEvent_Index_7 = K2Node_ComponentBoundEvent_Index_7;
	Parms.K2Node_ComponentBoundEvent_Widget_7 = K2Node_ComponentBoundEvent_Widget_7;
	Parms.K2Node_ComponentBoundEvent_Index_6 = K2Node_ComponentBoundEvent_Index_6;
	Parms.K2Node_ComponentBoundEvent_Widget_6 = K2Node_ComponentBoundEvent_Widget_6;
	Parms.K2Node_ComponentBoundEvent_Index_5 = K2Node_ComponentBoundEvent_Index_5;
	Parms.K2Node_ComponentBoundEvent_Widget_5 = K2Node_ComponentBoundEvent_Widget_5;
	Parms.K2Node_ComponentBoundEvent_Index_4 = K2Node_ComponentBoundEvent_Index_4;
	Parms.K2Node_ComponentBoundEvent_Widget_4 = K2Node_ComponentBoundEvent_Widget_4;
	Parms.K2Node_ComponentBoundEvent_Index_3 = K2Node_ComponentBoundEvent_Index_3;
	Parms.K2Node_ComponentBoundEvent_Widget_3 = K2Node_ComponentBoundEvent_Widget_3;
	Parms.K2Node_ComponentBoundEvent_Index_2 = K2Node_ComponentBoundEvent_Index_2;
	Parms.K2Node_ComponentBoundEvent_Widget_2 = K2Node_ComponentBoundEvent_Widget_2;
	Parms.K2Node_ComponentBoundEvent_Index_1 = K2Node_ComponentBoundEvent_Index_1;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_ComponentBoundEvent_Index = K2Node_ComponentBoundEvent_Index;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_3 = CallFunc_GetCharacterAs0_Base_As0_Base_3;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_4 = CallFunc_GetCharacterAs0_Base_As0_Base_4;
	Parms.CallFunc_Not_PreBool_ReturnValue_8 = CallFunc_Not_PreBool_ReturnValue_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_6 = K2Node_DynamicCast_AsIPhoto_Mode_Option_6;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_7 = K2Node_DynamicCast_AsIPhoto_Mode_Option_7;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.K2Node_DynamicCast_AsIPhoto_Mode_Option_8 = K2Node_DynamicCast_AsIPhoto_Mode_Option_8;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_GetActiveLine_ReturnValue = CallFunc_GetActiveLine_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_NewValue_4 = K2Node_ComponentBoundEvent_NewValue_4;
	Parms.K2Node_SwitchInteger_CmpSuccess_3 = K2Node_SwitchInteger_CmpSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetPlatform_ReturnValue_1 = CallFunc_GetPlatform_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_4 = CallFunc_Conv_IntToFloat_ReturnValue_4;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_5 = CallFunc_Conv_IntToFloat_ReturnValue_5;
	Parms.CallFunc_GetCamModifierSafe_CamModifier_8 = CallFunc_GetCamModifierSafe_CamModifier_8;
	Parms.K2Node_ComponentBoundEvent_NewValue_3 = K2Node_ComponentBoundEvent_NewValue_3;
	Parms.K2Node_SwitchInteger_CmpSuccess_4 = K2Node_SwitchInteger_CmpSuccess_4;
	Parms.K2Node_ComponentBoundEvent_NewValue_2 = K2Node_ComponentBoundEvent_NewValue_2;
	Parms.CallFunc_GetCharacterAs0_Base_As0_Base_5 = CallFunc_GetCharacterAs0_Base_As0_Base_5;
	Parms.K2Node_SwitchInteger_CmpSuccess_5 = K2Node_SwitchInteger_CmpSuccess_5;
	Parms.K2Node_ComponentBoundEvent_NewValue_1 = K2Node_ComponentBoundEvent_NewValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_6 = K2Node_SwitchInteger_CmpSuccess_6;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.K2Node_ComponentBoundEvent_NewValue = K2Node_ComponentBoundEvent_NewValue;
	Parms.K2Node_SwitchInteger_CmpSuccess_7 = K2Node_SwitchInteger_CmpSuccess_7;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;

	UObject::ProcessEvent(Func, &Parms);

}

}


