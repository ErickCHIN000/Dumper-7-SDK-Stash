#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x358 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ExitSurvey.WBP_ExitSurvey_C
class UWBP_ExitSurvey_C : public UNWXUserWidget
{
public:
	class UWBP_Common_Button_Base_C*             BU_Submit;                                         // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SurveyQuestion_LikertScale_C*     SurveyResponseButtons_1;                           // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SurveyQuestion_LikertScale_C*     SurveyResponseButtons_2;                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ExitSurvey_C* GetDefaultObj();

	void GetSurveyAnswers(TArray<int32>* SurveyResponses, const TArray<int32>& LResponses, int32 CallFunc_GetSurveyResponse_SurveyResponse, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_GetSurveyResponse_SurveyResponse_1, int32 CallFunc_Array_Add_ReturnValue_1);
};

}


