#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C
// (None)

class UClass* UUI_RunicFamiliarity_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_RunicFamiliarity_Entry_C");

	return Clss;
}


// UI_RunicFamiliarity_Entry_C UI_RunicFamiliarity_Entry.Default__UI_RunicFamiliarity_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_RunicFamiliarity_Entry_C* UUI_RunicFamiliarity_Entry_C::GetDefaultObj()
{
	static class UUI_RunicFamiliarity_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_RunicFamiliarity_Entry_C*>(UUI_RunicFamiliarity_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ShouldPlayFailedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RunicFamiliarity_Entry_C::ShouldPlayFailedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ShouldPlayFailedAnim");

	Params::UUI_RunicFamiliarity_Entry_C_ShouldPlayFailedAnim_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.DebugLastDiamongMaxed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::DebugLastDiamongMaxed(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "DebugLastDiamongMaxed");

	Params::UUI_RunicFamiliarity_Entry_C_DebugLastDiamongMaxed_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.DebugLastDiamongFilled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::DebugLastDiamongFilled(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "DebugLastDiamongFilled");

	Params::UUI_RunicFamiliarity_Entry_C_DebugLastDiamongFilled_Params Parms{};

	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.StartScrolling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScrollOffsetOfEnd_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::StartScrolling(float CallFunc_GetScrollOffsetOfEnd_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "StartScrolling");

	Params::UUI_RunicFamiliarity_Entry_C_StartScrolling_Params Parms{};

	Parms.CallFunc_GetScrollOffsetOfEnd_ReturnValue = CallFunc_GetScrollOffsetOfEnd_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.SetBarPercent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_RunicFamiliarity_Entry_C::SetBarPercent(float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "SetBarPercent");

	Params::UUI_RunicFamiliarity_Entry_C_SetBarPercent_Params Parms{};

	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.SetScrolling
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetScrollOffset_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::SetScrolling(float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "SetScrolling");

	Params::UUI_RunicFamiliarity_Entry_C_SetScrolling_Params Parms{};

	Parms.CallFunc_GetScrollOffset_ReturnValue = CallFunc_GetScrollOffset_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.GetCurrentProgressIfHasXValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::GetCurrentProgressIfHasXValue(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "GetCurrentProgressIfHasXValue");

	Params::UUI_RunicFamiliarity_Entry_C_GetCurrentProgressIfHasXValue_Params Parms{};

	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.GetRequirementTextWithXValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_RunicFamiliarity_Entry_C::GetRequirementTextWithXValue(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "GetRequirementTextWithXValue");

	Params::UUI_RunicFamiliarity_Entry_C_GetRequirementTextWithXValue_Params Parms{};

	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ShowRequirement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::ShowRequirement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ShowRequirement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.HandleRevealEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetScalarParameterValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_RunicFamiliarity_Entry_C::HandleRevealEffect(bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_FInterpTo_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "HandleRevealEffect");

	Params::UUI_RunicFamiliarity_Entry_C_HandleRevealEffect_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetScalarParameterValue_ReturnValue = CallFunc_K2_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_FInterpTo_ReturnValue = CallFunc_FInterpTo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ShowMaxed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::ShowMaxed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ShowMaxed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.GetRewardTextWithTier
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               InDesign                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToLower_ReturnValue_3                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_TextToLower_ReturnValue                                 (None)

class FText UUI_RunicFamiliarity_Entry_C::GetRewardTextWithTier(bool InDesign, int32 Temp_int_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_ToLower_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, const class FString& CallFunc_ToLower_ReturnValue_2, const class FString& CallFunc_ToLower_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, int32 K2Node_Select_Default_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default_2, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToLower_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "GetRewardTextWithTier");

	Params::UUI_RunicFamiliarity_Entry_C_GetRewardTextWithTier_Params Parms{};

	Parms.InDesign = InDesign;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_ToLower_ReturnValue = CallFunc_ToLower_ReturnValue;
	Parms.CallFunc_ToLower_ReturnValue_1 = CallFunc_ToLower_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3;
	Parms.CallFunc_ToLower_ReturnValue_2 = CallFunc_ToLower_ReturnValue_2;
	Parms.CallFunc_ToLower_ReturnValue_3 = CallFunc_ToLower_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_TextToLower_ReturnValue = CallFunc_TextToLower_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.SetRewardText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRewardTextWithTier_ReturnValue                       (None)
// class FText                        CallFunc_TextToLower_ReturnValue                                 (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::SetRewardText(class FText CallFunc_GetRewardTextWithTier_ReturnValue, class FText CallFunc_TextToLower_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "SetRewardText");

	Params::UUI_RunicFamiliarity_Entry_C_SetRewardText_Params Parms{};

	Parms.CallFunc_GetRewardTextWithTier_ReturnValue = CallFunc_GetRewardTextWithTier_ReturnValue;
	Parms.CallFunc_TextToLower_ReturnValue = CallFunc_TextToLower_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.SetRequirementText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        CallFunc_GetRequirementTextWithXValue_ReturnValue                (None)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RunicFamiliarity_Entry_C::SetRequirementText(class FText CallFunc_GetRequirementTextWithXValue_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "SetRequirementText");

	Params::UUI_RunicFamiliarity_Entry_C_SetRequirementText_Params Parms{};

	Parms.CallFunc_GetRequirementTextWithXValue_ReturnValue = CallFunc_GetRequirementTextWithXValue_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.PopulateEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_MilestoneUnlock     Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FText                        Local_RequirementText                                            (Edit, BlueprintVisible)
// class FText                        Local_RewardText                                                 (Edit, BlueprintVisible)
// struct FStruct_MilestoneUnlock     K2Node_MakeStruct_Struct_MilestoneUnlock                         (HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_StormMode_GetEndingProgress_Progress                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_StormMode_PC_C>K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMilestoneUnlocked_bUnlocked                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_IsMilestoneUnlocked_Current                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_IsMilestoneUnlocked_Percent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_IsMilestoneUnlocked_Tier                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_IsMilestoneUnlocked_TiersX                              (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_IsMilestoneUnlocked_HasTier                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::PopulateEntry(const struct FStruct_MilestoneUnlock& Entry, class FText Local_RequirementText, class FText Local_RewardText, const struct FStruct_MilestoneUnlock& K2Node_MakeStruct_Struct_MilestoneUnlock, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_StormMode_GetEndingProgress_Progress, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "PopulateEntry");

	Params::UUI_RunicFamiliarity_Entry_C_PopulateEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.Local_RequirementText = Local_RequirementText;
	Parms.Local_RewardText = Local_RewardText;
	Parms.K2Node_MakeStruct_Struct_MilestoneUnlock = K2Node_MakeStruct_Struct_MilestoneUnlock;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC = K2Node_DynamicCast_AsBPI_Storm_Mode_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StormMode_GetEndingProgress_Progress = CallFunc_StormMode_GetEndingProgress_Progress;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1 = K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsMilestoneUnlocked_bUnlocked = CallFunc_IsMilestoneUnlocked_bUnlocked;
	Parms.CallFunc_IsMilestoneUnlocked_Current = CallFunc_IsMilestoneUnlocked_Current;
	Parms.CallFunc_IsMilestoneUnlocked_Percent = CallFunc_IsMilestoneUnlocked_Percent;
	Parms.CallFunc_IsMilestoneUnlocked_Tier = CallFunc_IsMilestoneUnlocked_Tier;
	Parms.CallFunc_IsMilestoneUnlocked_TiersX = CallFunc_IsMilestoneUnlocked_TiersX;
	Parms.CallFunc_IsMilestoneUnlocked_HasTier = CallFunc_IsMilestoneUnlocked_HasTier;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "Tick");

	Params::UUI_RunicFamiliarity_Entry_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.StartRevealEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::StartRevealEffect(float Delay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "StartRevealEffect");

	Params::UUI_RunicFamiliarity_Entry_C_StartRevealEffect_Params Parms{};

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ScrollBox_Bind
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::ScrollBox_Bind()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ScrollBox_Bind");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ScrollBox_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::ScrollBox_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ScrollBox_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.Reset_Offset_Start
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::Reset_Offset_Start()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "Reset_Offset_Start");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.Reset_Offset_End
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::Reset_Offset_End()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "Reset_Offset_End");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RunicFamiliarity_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "PreConstruct");

	Params::UUI_RunicFamiliarity_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.SetFamiliarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::SetFamiliarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "SetFamiliarity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.BndEvt__UI_Familiarity_K2Node_ComponentBoundEvent_0_LastDiamondFilled__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::BndEvt__UI_Familiarity_K2Node_ComponentBoundEvent_0_LastDiamondFilled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "BndEvt__UI_Familiarity_K2Node_ComponentBoundEvent_0_LastDiamondFilled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.OnUpdateAnimEnd_FW
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::OnUpdateAnimEnd_FW()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "OnUpdateAnimEnd_FW");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.OnUpdateAnimEnd_BW
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::OnUpdateAnimEnd_BW()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "OnUpdateAnimEnd_BW");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.BndEvt__UI_StormModeFamiliarity_K2Node_ComponentBoundEvent_1_LastDiamondMaxed__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::BndEvt__UI_StormModeFamiliarity_K2Node_ComponentBoundEvent_1_LastDiamondMaxed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "BndEvt__UI_StormModeFamiliarity_K2Node_ComponentBoundEvent_1_LastDiamondMaxed__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.EntryShown_Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::EntryShown_Set()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "EntryShown_Set");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ResetFamiliarity
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUI_RunicFamiliarity_Entry_C::ResetFamiliarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ResetFamiliarity");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.ExecuteUbergraph_UI_RunicFamiliarity_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_HandleRevealEffect_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetRewardTextWithTier_ReturnValue                       (None)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_RunicFamiliarity_Entry_C::ExecuteUbergraph_UI_RunicFamiliarity_Entry(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_Delay, float CallFunc_HandleRevealEffect_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetRewardTextWithTier_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool Temp_bool_IsClosed_Variable_3, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "ExecuteUbergraph_UI_RunicFamiliarity_Entry");

	Params::UUI_RunicFamiliarity_Entry_C_ExecuteUbergraph_UI_RunicFamiliarity_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue_1 = CallFunc_EqualEqual_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.CallFunc_HandleRevealEffect_ReturnValue = CallFunc_HandleRevealEffect_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetRewardTextWithTier_ReturnValue = CallFunc_GetRewardTextWithTier_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C.EntryShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_RunicFamiliarity_Entry_C::EntryShown__DelegateSignature(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_RunicFamiliarity_Entry_C", "EntryShown__DelegateSignature");

	Params::UUI_RunicFamiliarity_Entry_C_EntryShown__DelegateSignature_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}

}


