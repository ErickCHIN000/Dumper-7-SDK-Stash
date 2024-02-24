#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Notification_StormMode.Notification_StormMode_C
// (None)

class UClass* UNotification_StormMode_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Notification_StormMode_C");

	return Clss;
}


// Notification_StormMode_C Notification_StormMode.Default__Notification_StormMode_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotification_StormMode_C* UNotification_StormMode_C::GetDefaultObj()
{
	static class UNotification_StormMode_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotification_StormMode_C*>(UNotification_StormMode_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Notification_StormMode.Notification_StormMode_C.IsMaxed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::IsMaxed(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "IsMaxed");

	Params::UNotification_StormMode_C_IsMaxed_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.GetRewardText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UNotification_StormMode_C::GetRewardText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, int32 Temp_int_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_ToUpper_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "GetRewardText");

	Params::UNotification_StormMode_C_GetRewardText_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Notification_StormMode.Notification_StormMode_C.GetDataFromTable
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetRewardText_ReturnValue                               (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStruct_MilestoneUnlock     CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::GetDataFromTable(const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, class FText CallFunc_GetRewardText_ReturnValue, bool Temp_bool_Variable, uint8 CallFunc_Conv_IntToByte_ReturnValue, const struct FVector2D& K2Node_Select_Default, uint8 CallFunc_GetValidValue_ReturnValue, const struct FStruct_MilestoneUnlock& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "GetDataFromTable");

	Params::UNotification_StormMode_C_GetDataFromTable_Params Parms{};

	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_GetRewardText_ReturnValue = CallFunc_GetRewardText_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.HandleScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_HUD_Size           CallFunc_GetHUDScale_Size                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetHUDScale_Size, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "HandleScale");

	Params::UNotification_StormMode_C_HandleScale_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHUDScale_Size = CallFunc_GetHUDScale_Size;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.Notify_Remove
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Notify_Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Notify_Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.Notify_Visibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Show                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_VisibilityCallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::Notify_Visibility(bool* Show, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_Notify_StormMode_Visibility CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Notify_Visibility");

	Params::UNotification_StormMode_C_Notify_Visibility_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility = CallFunc_StormMode_Notify_RunicFam_GetVisibility_Visibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Show != nullptr)
		*Show = Parms.Show;

}


// Function Notification_StormMode.Notification_StormMode_C.GetDuration
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_Notify_StormMode_DurationCallFunc_StormMode_Notify_RunicFam_GetDuration_Duration          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::GetDuration(float* Duration, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_Notify_StormMode_Duration CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "GetDuration");

	Params::UNotification_StormMode_C_GetDuration_Params Parms{};

	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration = CallFunc_StormMode_Notify_RunicFam_GetDuration_Duration;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Duration != nullptr)
		*Duration = Parms.Duration;

}


// Function Notification_StormMode.Notification_StormMode_C.SetDurationBasedOnText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Lenght                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              CallFunc_GetCharacterArrayFromString_ReturnValue                 (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::SetDurationBasedOnText(int32 Local_Lenght, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "SetDurationBasedOnText");

	Params::UNotification_StormMode_C_SetDurationBasedOnText_Params Parms{};

	Parms.Local_Lenght = Local_Lenght;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetCharacterArrayFromString_ReturnValue = CallFunc_GetCharacterArrayFromString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.GetScrollBoxMax
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetLocalSize_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UNotification_StormMode_C::GetScrollBoxMax(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "GetScrollBoxMax");

	Params::UNotification_StormMode_C_GetScrollBoxMax_Params Parms{};

	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetLocalSize_ReturnValue = CallFunc_GetLocalSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Notification_StormMode.Notification_StormMode_C.Unbind
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Delegate                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor)
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::Unbind(FDelegateProperty_& Delegate, int32 ID, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Unbind");

	Params::UNotification_StormMode_C_Unbind_Params Parms{};

	Parms.Delegate = Delegate;
	Parms.ID = ID;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.Get_Text_DebugIDPosition_Text
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UNotification_StormMode_C::Get_Text_DebugIDPosition_Text(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Get_Text_DebugIDPosition_Text");

	Params::UNotification_StormMode_C_Get_Text_DebugIDPosition_Text_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Notification_StormMode.Notification_StormMode_C.RemoveNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::RemoveNotify(bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "RemoveNotify");

	Params::UNotification_StormMode_C_RemoveNotify_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.RepriseFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::RepriseFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "RepriseFadeOut");

	Params::UNotification_StormMode_C_RepriseFadeOut_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.RepriseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::RepriseTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "RepriseTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.RepriseFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::RepriseFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "RepriseFadeIn");

	Params::UNotification_StormMode_C_RepriseFadeIn_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.PauseFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::PauseFadeOut(float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "PauseFadeOut");

	Params::UNotification_StormMode_C_PauseFadeOut_Params Parms{};

	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.PauseTimer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::PauseTimer(bool CallFunc_K2_IsTimerActiveHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "PauseTimer");

	Params::UNotification_StormMode_C_PauseTimer_Params Parms{};

	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.PauseFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::PauseFadeIn(float CallFunc_PauseAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "PauseFadeIn");

	Params::UNotification_StormMode_C_PauseFadeIn_Params Parms{};

	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.Get_HUD
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AYourHUD_C*                  K2Node_DynamicCast_AsYour_HUD                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::Get_HUD(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AYourHUD_C* K2Node_DynamicCast_AsYour_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Get_HUD");

	Params::UNotification_StormMode_C_Get_HUD_Params Parms{};

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsYour_HUD = K2Node_DynamicCast_AsYour_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.SetSmokeBlend
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetWorldDeltaSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::SetSmokeBlend(float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "SetSmokeBlend");

	Params::UNotification_StormMode_C_SetSmokeBlend_Params Parms{};

	Parms.CallFunc_GetWorldDeltaSeconds_ReturnValue = CallFunc_GetWorldDeltaSeconds_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.FadeOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::FadeOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "FadeOut");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.RemoveFromScreen
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::RemoveFromScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "RemoveFromScreen");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.ShowFamiliarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::ShowFamiliarity(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "ShowFamiliarity");

	Params::UNotification_StormMode_C_ShowFamiliarity_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Update");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnHudVisibilityChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bHudVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::OnHudVisibilityChanged_Set(bool bHudVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnHudVisibilityChanged_Set");

	Params::UNotification_StormMode_C_OnHudVisibilityChanged_Set_Params Parms{};

	Parms.bHudVisible = bHudVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.OnHudVisibilityChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::OnHudVisibilityChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnHudVisibilityChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnHudVisibility_BeginPlay
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HUD_Visible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UNotification_StormMode_C::OnHudVisibility_BeginPlay(bool HUD_Visible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnHudVisibility_BeginPlay");

	Params::UNotification_StormMode_C_OnHudVisibility_BeginPlay_Params Parms{};

	Parms.HUD_Visible = HUD_Visible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.FadeIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::FadeIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "FadeIn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnCountDecreased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::OnCountDecreased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnCountDecreased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.ScrollBox_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::ScrollBox_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "ScrollBox_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.ScrollBox_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::ScrollBox_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "ScrollBox_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Tick");

	Params::UNotification_StormMode_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.StartScrollBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::StartScrollBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "StartScrollBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.Reset_Offset_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Reset_Offset_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Reset_Offset_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.Reset_Offset_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Reset_Offset_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Reset_Offset_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.Notify_Hidden
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::Notify_Hidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "Notify_Hidden");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnHUDScaleChanged_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::OnHUDScaleChanged_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnHUDScaleChanged_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnHUDScaleChanged_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_HUD_Size           Size                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::OnHUDScaleChanged_Set(enum class Enum_HUD_Size Size)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnHUDScaleChanged_Set");

	Params::UNotification_StormMode_C_OnHUDScaleChanged_Set_Params Parms{};

	Parms.Size = Size;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.ExecuteUbergraph_Notification_StormMode
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Condition                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_bHudVisible                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_HUD_Visible                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDuration_Duration                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Notify_Visibility_Show                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_2                       (NoDestructor, HasGetValueTypeHash)
// class UGameInfoInstance_C*         CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_HUD_Size           K2Node_CustomEvent_Size                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNotification_StormMode_C::ExecuteUbergraph_Notification_StormMode(int32 EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Condition, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool K2Node_CustomEvent_bHudVisible, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool K2Node_CustomEvent_HUD_Visible, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, float CallFunc_Add_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetDuration_Duration, bool CallFunc_Notify_Visibility_Show, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, enum class Enum_HUD_Size K2Node_CustomEvent_Size, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "ExecuteUbergraph_Notification_StormMode");

	Params::UNotification_StormMode_C_ExecuteUbergraph_Notification_StormMode_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Condition = K2Node_CustomEvent_Condition;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.K2Node_CustomEvent_bHudVisible = K2Node_CustomEvent_bHudVisible;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CustomEvent_HUD_Visible = K2Node_CustomEvent_HUD_Visible;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;
	Parms.CallFunc_GetDuration_Duration = CallFunc_GetDuration_Duration;
	Parms.CallFunc_Notify_Visibility_Show = CallFunc_Notify_Visibility_Show;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_2 = CallFunc_K2_SetTimerDelegate_ReturnValue_2;
	Parms.CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance = CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance;
	Parms.K2Node_CustomEvent_Size = K2Node_CustomEvent_Size;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Notification_StormMode.Notification_StormMode_C.OnMovedUpASlot__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::OnMovedUpASlot__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnMovedUpASlot__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Notification_StormMode.Notification_StormMode_C.OnRemovedFromScreen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNotification_StormMode_C::OnRemovedFromScreen__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Notification_StormMode_C", "OnRemovedFromScreen__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


