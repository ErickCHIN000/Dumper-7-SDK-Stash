#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x30 - 0x0)
// Function WBP_ExitSurvey.WBP_ExitSurvey_C.GetSurveyAnswers
struct UWBP_ExitSurvey_C_GetSurveyAnswers_Params
{
public:
	TArray<int32>                                SurveyResponses;                                   // 0x0(0x10)(Parm, OutParm)
	TArray<int32>                                LResponses;                                        // 0x10(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_GetSurveyResponse_SurveyResponse;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSurveyResponse_SurveyResponse_1;       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


