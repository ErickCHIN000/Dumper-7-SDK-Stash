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

// 0x18 (0x18 - 0x0)
// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ShowError
struct UWBP_SurveyPrompt_C_ShowError_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x20 (0x20 - 0x0)
// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.Display
struct UWBP_SurveyPrompt_C_Display_Params
{
public:
	class FText                                  PromptText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UParameterizedUrl*                     URL;                                               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.DisplayPrompt
struct UWBP_SurveyPrompt_C_DisplayPrompt_Params
{
public:
	class FText                                  PromptText;                                        // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UParameterizedUrl*                     URL;                                               // 0x18(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function WBP_SurveyPrompt.WBP_SurveyPrompt_C.ExecuteUbergraph_WBP_SurveyPrompt
struct UWBP_SurveyPrompt_C_ExecuteUbergraph_WBP_SurveyPrompt_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1548[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_ToString_ReturnValue;                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanLaunchURL_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsEmpty_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_154D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_PromptText;                           // 0x20(0x18)(ConstParm)
	class UParameterizedUrl*                     K2Node_Event_Url;                                  // 0x38(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGISFeedback*                          CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


