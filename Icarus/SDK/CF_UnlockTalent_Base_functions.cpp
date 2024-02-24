#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_UnlockTalent_Base.CF_UnlockTalent_Base_C
// (None)

class UClass* UCF_UnlockTalent_Base_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_UnlockTalent_Base_C");

	return Clss;
}


// CF_UnlockTalent_Base_C CF_UnlockTalent_Base.Default__CF_UnlockTalent_Base_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_UnlockTalent_Base_C* UCF_UnlockTalent_Base_C::GetDefaultObj()
{
	static class UCF_UnlockTalent_Base_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_UnlockTalent_Base_C*>(UCF_UnlockTalent_Base_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.OnTalentsSynced
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_FindTalentModelData_Found                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentModelData            CallFunc_FindTalentModelData_TalentModelData                     (NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_2                           (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_11                          (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_UnlockTalent_Base_C::OnTalentsSynced(bool CallFunc_FindTalentModelData_Found, const struct FTalentModelData& CallFunc_FindTalentModelData_TalentModelData, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, class FText CallFunc_Conv_StringToText_ReturnValue_3, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, class FText CallFunc_Conv_NameToText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_11, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "OnTalentsSynced");

	Params::UCF_UnlockTalent_Base_C_OnTalentsSynced_Params Parms{};

	Parms.CallFunc_FindTalentModelData_Found = CallFunc_FindTalentModelData_Found;
	Parms.CallFunc_FindTalentModelData_TalentModelData = CallFunc_FindTalentModelData_TalentModelData;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Conv_NameToText_ReturnValue_2 = CallFunc_Conv_NameToText_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_11 = K2Node_MakeStruct_FormatArgumentData_11;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.TryUnlockTalent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTalentsRowHandle           Talent                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentControllerComponent*  CallFunc_GetTalentControllerForTalent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_UnlockNextTalentRank_self_CastInput                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UnlockNextTalentRank_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_self_CastInput                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface*       CallFunc_GetModel_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_1                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_2                           (None)
// class FText                        CallFunc_Conv_NameToText_ReturnValue_3                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_4                           (HasGetValueTypeHash)
// bool                               CallFunc_IsTalentUnlocked_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_5                           (HasGetValueTypeHash)
// struct FTalentModelData            CallFunc_GetTalentState_OutData                                  (NoDestructor)
// bool                               CallFunc_GetTalentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_6                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_7                           (HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_8                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_9                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_10                          (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_3                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_3                                    (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_3                         (ZeroConstructor, HasGetValueTypeHash)

void UCF_UnlockTalent_Base_C::TryUnlockTalent(const struct FTalentsRowHandle& Talent, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller_1, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class UTalentControllerComponent* CallFunc_GetTalentControllerForTalent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_UnlockNextTalentRank_self_CastInput, bool CallFunc_UnlockNextTalentRank_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_self_CastInput, class UTalentModelInterface* CallFunc_GetModel_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_NameToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_NameToText_ReturnValue_2, class FText CallFunc_Conv_NameToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, bool CallFunc_IsTalentUnlocked_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_6, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_7, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_8, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_9, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Conv_StringToText_ReturnValue_4, class FText CallFunc_Format_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_10, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_3, class FText CallFunc_Format_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "TryUnlockTalent");

	Params::UCF_UnlockTalent_Base_C_TryUnlockTalent_Params Parms{};

	Parms.Talent = Talent;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetIcarusPlayerController_Controller_1 = CallFunc_GetIcarusPlayerController_Controller_1;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_GetTalentControllerForTalent_ReturnValue = CallFunc_GetTalentControllerForTalent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_UnlockNextTalentRank_self_CastInput = CallFunc_UnlockNextTalentRank_self_CastInput;
	Parms.CallFunc_UnlockNextTalentRank_ReturnValue = CallFunc_UnlockNextTalentRank_ReturnValue;
	Parms.CallFunc_GetModel_self_CastInput = CallFunc_GetModel_self_CastInput;
	Parms.CallFunc_GetModel_ReturnValue = CallFunc_GetModel_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_NameToText_ReturnValue_1 = CallFunc_Conv_NameToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_NameToText_ReturnValue_2 = CallFunc_Conv_NameToText_ReturnValue_2;
	Parms.CallFunc_Conv_NameToText_ReturnValue_3 = CallFunc_Conv_NameToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_4 = K2Node_MakeStruct_FormatArgumentData_4;
	Parms.CallFunc_IsTalentUnlocked_ReturnValue = CallFunc_IsTalentUnlocked_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_5 = K2Node_MakeStruct_FormatArgumentData_5;
	Parms.CallFunc_GetTalentState_OutData = CallFunc_GetTalentState_OutData;
	Parms.CallFunc_GetTalentState_ReturnValue = CallFunc_GetTalentState_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_6 = K2Node_MakeStruct_FormatArgumentData_6;
	Parms.K2Node_MakeStruct_FormatArgumentData_7 = K2Node_MakeStruct_FormatArgumentData_7;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_8 = K2Node_MakeStruct_FormatArgumentData_8;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.K2Node_MakeStruct_FormatArgumentData_9 = K2Node_MakeStruct_FormatArgumentData_9;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_10 = K2Node_MakeStruct_FormatArgumentData_10;
	Parms.CallFunc_Conv_TextToString_ReturnValue_2 = CallFunc_Conv_TextToString_ReturnValue_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Format_ReturnValue_3 = CallFunc_Format_ReturnValue_3;
	Parms.CallFunc_Conv_TextToString_ReturnValue_3 = CallFunc_Conv_TextToString_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.CanModifyNumber
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCF_UnlockTalent_Base_C::CanModifyNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "CanModifyNumber");

	Params::UCF_UnlockTalent_Base_C_CanModifyNumber_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.GetAllTalentRowHandles
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FTalentsRowHandle>   Rows                                                             (Parm, OutParm)
// TArray<struct FTalentsRowHandle>   AllRows                                                          (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTalentControllerComponent*>CallFunc_GetTalentControllers_ReturnValue                        (ReferenceParm, ContainsInstancedReference)
// class UTalentControllerComponent*  CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClassIsChildOf_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_Const_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FTalentsRowHandle>   CallFunc_GetTalents_ReturnValue                                  (ConstParm, ReferenceParm)

void UCF_UnlockTalent_Base_C::GetAllTalentRowHandles(TArray<struct FTalentsRowHandle>* Rows, const TArray<struct FTalentsRowHandle>& AllRows, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UTalentControllerComponent*>& CallFunc_GetTalentControllers_ReturnValue, class UTalentControllerComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ClassIsChildOf_ReturnValue, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_Const_self_CastInput, class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TArray<struct FTalentsRowHandle>& CallFunc_GetTalents_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "GetAllTalentRowHandles");

	Params::UCF_UnlockTalent_Base_C_GetAllTalentRowHandles_Params Parms{};

	Parms.AllRows = AllRows;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTalentControllers_ReturnValue = CallFunc_GetTalentControllers_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_ClassIsChildOf_ReturnValue = CallFunc_ClassIsChildOf_ReturnValue;
	Parms.CallFunc_GetModel_Const_self_CastInput = CallFunc_GetModel_Const_self_CastInput;
	Parms.CallFunc_GetModel_Const_ReturnValue = CallFunc_GetModel_Const_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetTalents_ReturnValue = CallFunc_GetTalents_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Rows != nullptr)
		*Rows = std::move(Parms.Rows);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.FindTalentModelData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTalentsRowHandle           TalentRow                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentModelData            TalentModelData                                                  (Parm, OutParm, NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentControllerComponent*  CallFunc_GetTalentControllerForTalent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class ITalentControllerInterface>CallFunc_GetModel_Const_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTalentModelData            CallFunc_GetTalentState_OutData                                  (NoDestructor)
// bool                               CallFunc_GetTalentState_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_UnlockTalent_Base_C::FindTalentModelData(const struct FTalentsRowHandle& TalentRow, bool* Found, struct FTalentModelData* TalentModelData, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UTalentControllerComponent* CallFunc_GetTalentControllerForTalent_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class ITalentControllerInterface> CallFunc_GetModel_Const_self_CastInput, class UTalentModelInterface_Const* CallFunc_GetModel_Const_ReturnValue, const struct FTalentModelData& CallFunc_GetTalentState_OutData, bool CallFunc_GetTalentState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "FindTalentModelData");

	Params::UCF_UnlockTalent_Base_C_FindTalentModelData_Params Parms{};

	Parms.TalentRow = TalentRow;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTalentControllerForTalent_ReturnValue = CallFunc_GetTalentControllerForTalent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetModel_Const_self_CastInput = CallFunc_GetModel_Const_self_CastInput;
	Parms.CallFunc_GetModel_Const_ReturnValue = CallFunc_GetModel_Const_ReturnValue;
	Parms.CallFunc_GetTalentState_OutData = CallFunc_GetTalentState_OutData;
	Parms.CallFunc_GetTalentState_ReturnValue = CallFunc_GetTalentState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Found != nullptr)
		*Found = Parms.Found;

	if (TalentModelData != nullptr)
		*TalentModelData = std::move(Parms.TalentModelData);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_UnlockTalent_Base_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Handle Execute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_UnlockTalent_Base_C::Handle_Execute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "Handle Execute");

	Params::UCF_UnlockTalent_Base_C_Handle_Execute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.Handle On Item Set
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_UnlockTalent_Base_C::Handle_On_Item_Set(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "Handle On Item Set");

	Params::UCF_UnlockTalent_Base_C_Handle_On_Item_Set_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_UnlockTalent_Base.CF_UnlockTalent_Base_C.ExecuteUbergraph_CF_UnlockTalent_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentRow_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FTalentsRowHandle>   CallFunc_GetAllTalentRowHandles_Rows                             (ReferenceParm)
// struct FTalentsRowHandle           CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTalentRow_C*                K2Node_DynamicCast_AsTalent_Row                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTalentRow_C*                K2Node_DynamicCast_AsTalent_Row_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FindTalentModelData_Found                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTalentModelData            CallFunc_FindTalentModelData_TalentModelData                     (NoDestructor)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_Rank                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTalentModelData_MaxRank                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETalentState            CallFunc_BreakTalentModelData_State                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerState*          CallFunc_GetIcarusPlayerState_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasActiveUserProfile_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_UnlockTalent_Base_C::ExecuteUbergraph_CF_UnlockTalent_Base(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UTalentRow_C* CallFunc_Create_ReturnValue, TArray<struct FTalentsRowHandle>& CallFunc_GetAllTalentRowHandles_Rows, const struct FTalentsRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, class UUserWidget* K2Node_Event_Widget, class UTalentRow_C* K2Node_DynamicCast_AsTalent_Row, bool K2Node_DynamicCast_bSuccess, class UTalentRow_C* K2Node_DynamicCast_AsTalent_Row_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_FindTalentModelData_Found, const struct FTalentModelData& CallFunc_FindTalentModelData_TalentModelData, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, int32 CallFunc_BreakTalentModelData_Rank, int32 CallFunc_BreakTalentModelData_MaxRank, enum class ETalentState CallFunc_BreakTalentModelData_State, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasActiveUserProfile_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_UnlockTalent_Base_C", "ExecuteUbergraph_CF_UnlockTalent_Base");

	Params::UCF_UnlockTalent_Base_C_ExecuteUbergraph_CF_UnlockTalent_Base_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllTalentRowHandles_Rows = CallFunc_GetAllTalentRowHandles_Rows;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_DynamicCast_AsTalent_Row = K2Node_DynamicCast_AsTalent_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsTalent_Row_1 = K2Node_DynamicCast_AsTalent_Row_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_FindTalentModelData_Found = CallFunc_FindTalentModelData_Found;
	Parms.CallFunc_FindTalentModelData_TalentModelData = CallFunc_FindTalentModelData_TalentModelData;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_BreakTalentModelData_Rank = CallFunc_BreakTalentModelData_Rank;
	Parms.CallFunc_BreakTalentModelData_MaxRank = CallFunc_BreakTalentModelData_MaxRank;
	Parms.CallFunc_BreakTalentModelData_State = CallFunc_BreakTalentModelData_State;
	Parms.CallFunc_GetIcarusPlayerState_ReturnValue = CallFunc_GetIcarusPlayerState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasActiveUserProfile_ReturnValue = CallFunc_HasActiveUserProfile_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


