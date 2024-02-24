#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0x374 - 0x340)
// WidgetBlueprintGeneratedClass WBP_SurveyQuestion_LikertScale.WBP_SurveyQuestion_LikertScale_C
class UWBP_SurveyQuestion_LikertScale_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_Question_Buttons;                               // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            SurveyEntryScoreChanged;                           // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class FText>                          Ratings;                                           // 0x360(0x10)(Edit, BlueprintVisible)
	int32                                        SurveyResponse;                                    // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_SurveyQuestion_LikertScale_C* GetDefaultObj();

	void OnRadioButtonClicked(bool IsToggled, class UWBP_RadioButton_C* ButtonClicked, const TArray<class UWBP_RadioButton_C*>& LButtons, int32 Temp_int_Array_Index_Variable, class UWBP_RadioButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class UWBP_RadioButton_C*>& CallFunc_GetButtons_Buttons, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void GetButtons(TArray<class UWBP_RadioButton_C*>* Buttons, const TArray<class UWBP_RadioButton_C*>& LButtons, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_RadioButton_Label_C* K2Node_DynamicCast_AsWBP_Radio_Button_Label, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Add_ReturnValue);
	void GetSurveyResponse(int32* SurveyResponse);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_WBP_SurveyQuestion_LikertScale(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FMargin& K2Node_MakeStruct_Margin, class UWBP_RadioButton_Label_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText CallFunc_Array_Get_Item, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SurveyEntryScoreChanged__DelegateSignature(int32 Rating);
};

}


