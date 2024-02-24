#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ChallengeExperienceNotification.UMG_ChallengeExperienceNotification_C
// (None)

class UClass* UUMG_ChallengeExperienceNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ChallengeExperienceNotification_C");

	return Clss;
}


// UMG_ChallengeExperienceNotification_C UMG_ChallengeExperienceNotification.Default__UMG_ChallengeExperienceNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ChallengeExperienceNotification_C* UUMG_ChallengeExperienceNotification_C::GetDefaultObj()
{
	static class UUMG_ChallengeExperienceNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ChallengeExperienceNotification_C*>(UUMG_ChallengeExperienceNotification_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ChallengeExperienceNotification.UMG_ChallengeExperienceNotification_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ChallengeExperienceNotification_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ChallengeExperienceNotification_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ChallengeExperienceNotification.UMG_ChallengeExperienceNotification_C.Remove
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_ChallengeExperienceNotification_C::Remove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ChallengeExperienceNotification_C", "Remove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ChallengeExperienceNotification.UMG_ChallengeExperienceNotification_C.ExecuteUbergraph_UMG_ChallengeExperienceNotification
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FChallenge                  CallFunc_GetChallengesStruct_Challenges                          (None)
// enum class EValid                  CallFunc_GetChallengesStruct_Paths                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_ChallengeExperienceNotification_C::ExecuteUbergraph_UMG_ChallengeExperienceNotification(int32 EntryPoint, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ChallengeExperienceNotification_C", "ExecuteUbergraph_UMG_ChallengeExperienceNotification");

	Params::UUMG_ChallengeExperienceNotification_C_ExecuteUbergraph_UMG_ChallengeExperienceNotification_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_GetChallengesStruct_Challenges = CallFunc_GetChallengesStruct_Challenges;
	Parms.CallFunc_GetChallengesStruct_Paths = CallFunc_GetChallengesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


