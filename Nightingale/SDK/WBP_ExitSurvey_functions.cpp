#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ExitSurvey.WBP_ExitSurvey_C
// (None)

class UClass* UWBP_ExitSurvey_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ExitSurvey_C");

	return Clss;
}


// WBP_ExitSurvey_C WBP_ExitSurvey.Default__WBP_ExitSurvey_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ExitSurvey_C* UWBP_ExitSurvey_C::GetDefaultObj()
{
	static class UWBP_ExitSurvey_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ExitSurvey_C*>(UWBP_ExitSurvey_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ExitSurvey.WBP_ExitSurvey_C.GetSurveyAnswers
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      SurveyResponses                                                  (Parm, OutParm)
// TArray<int32>                      LResponses                                                       (Edit, BlueprintVisible)
// int32                              CallFunc_GetSurveyResponse_SurveyResponse                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetSurveyResponse_SurveyResponse_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ExitSurvey_C::GetSurveyAnswers(TArray<int32>* SurveyResponses, const TArray<int32>& LResponses, int32 CallFunc_GetSurveyResponse_SurveyResponse, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetSurveyResponse_SurveyResponse_1, int32 CallFunc_Array_Add_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ExitSurvey_C", "GetSurveyAnswers");

	Params::UWBP_ExitSurvey_C_GetSurveyAnswers_Params Parms{};

	Parms.LResponses = LResponses;
	Parms.CallFunc_GetSurveyResponse_SurveyResponse = CallFunc_GetSurveyResponse_SurveyResponse;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetSurveyResponse_SurveyResponse_1 = CallFunc_GetSurveyResponse_SurveyResponse_1;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (SurveyResponses != nullptr)
		*SurveyResponses = std::move(Parms.SurveyResponses);

}

}


