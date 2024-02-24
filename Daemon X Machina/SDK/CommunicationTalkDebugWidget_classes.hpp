#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x230 - 0x208)
// WidgetBlueprintGeneratedClass CommunicationTalkDebugWidget.CommunicationTalkDebugWidget_C
class UCommunicationTalkDebugWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UScrollBox*                            MessageDataCoolTimeBox;                            // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            MessageSetCoolTimeBox;                             // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            RequestLogBox;                                     // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ATTLCommunicationTalkControlActor*     CommunicationTalkControlActor;                     // 0x228(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommunicationTalkDebugWidget_C* GetDefaultObj();

	void GetControlActorFromLevel(TArray<class ATTLCommunicationTalkControlActor*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_IsValid_ReturnValue, class ATTLCommunicationTalkControlActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void Initialize();
	void UpdateList();
	void ExecuteUbergraph_CommunicationTalkDebugWidget(int32 EntryPoint, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, int32 Temp_int_Variable, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 Temp_int_Variable2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo2, int32 CallFunc_GetChildrenCount_ReturnValue1, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue2, int32 CallFunc_Subtract_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue1, class UWidget* CallFunc_GetChildAt_ReturnValue1, int32 CallFunc_GetChildrenCount_ReturnValue3, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_GreaterEqual_IntInt_ReturnValue1, class UAIDebugTextWidget_C* CallFunc_Create_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo3, class UPanelSlot* CallFunc_AddChild_ReturnValue2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo4, int32 Temp_int_Variable3, bool CallFunc_GreaterEqual_IntInt_ReturnValue2, class UWidget* CallFunc_GetChildAt_ReturnValue2, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget2, bool K2Node_DynamicCast_bSuccess2, int32 CallFunc_Add_IntInt_ReturnValue3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo5, bool CallFunc_IsValid_ReturnValue, TArray<struct FTTLCommunicationTalkRequest>& CallFunc_GetMessageDataCoolTimeList_ReturnValue, TArray<struct FTTLCommunicationTalkCoolTimeInfo>& CallFunc_GetMessageSetCoolTimeList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_BuildString_Float_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue2, bool CallFunc_LessEqual_IntInt_ReturnValue1, TArray<struct FTTLCommunicationTalkRequestHistory>& CallFunc_GetRequestHistoryList_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue1, const class FString& CallFunc_BuildString_Int_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue2, const class FString& CallFunc_BuildString_Float_ReturnValue1, const class FString& CallFunc_BuildString_Float_ReturnValue2, class FText CallFunc_Conv_StringToText_ReturnValue1, class FText CallFunc_Conv_StringToText_ReturnValue2, int32 CallFunc_Array_Length_ReturnValue2, int32 Temp_int_Variable4, int32 CallFunc_Subtract_IntInt_ReturnValue3, class UWidget* CallFunc_GetChildAt_ReturnValue3, bool CallFunc_LessEqual_IntInt_ReturnValue2, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget3, bool K2Node_DynamicCast_bSuccess3, bool CallFunc_LessEqual_IntInt_ReturnValue3, int32 CallFunc_Add_IntInt_ReturnValue4, int32 CallFunc_GetChildrenCount_ReturnValue4, class UWidget* CallFunc_GetChildAt_ReturnValue4, int32 CallFunc_Subtract_IntInt_ReturnValue4, class UAIDebugTextWidget_C* K2Node_DynamicCast_AsAIDebug_Text_Widget4, bool K2Node_DynamicCast_bSuccess4, bool CallFunc_LessEqual_IntInt_ReturnValue4);
};

}


