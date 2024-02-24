#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x550 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Voice.WBP_CC_DynamicSubPanel_Voice_C
class UWBP_CC_DynamicSubPanel_Voice_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Preview;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_0;                                     // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_sw_PickerButton_C*             WBP_CC_sw_PickerButton;                            // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Tooltip_Text;                                      // 0x4B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVoiceSetDataReference                CachedData;                                        // 0x4D0(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FTimerHandle                          PreviewTimer;                                      // 0x530(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewEnabled;                                    // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVoiceSetDataReference>        Out_References;                                    // 0x540(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Voice_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void GetVoicesSorted(TArray<struct FVoiceSetDataReference>* Output_Get, const TArray<struct FVoiceSetDataReference>& NewLocalVar_0, const TArray<class FString>& NewLocalVar, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Add_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData_1, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class FString>& CallFunc_IncreasingStringSort_ReturnValue, const class FString& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<struct FVoiceSetDataReference>& CallFunc_GetAllVoiceSetDataReferences_OutReferences, int32 CallFunc_Array_Add_ReturnValue_1);
	void TriggerAudio(int32 Temp_int_Variable, enum class EBodyType Temp_byte_Variable, enum class EBodyType Temp_byte_Variable_1, enum class EBodyType K2Node_Select_Default);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, const struct FGuid& CallFunc_GetUID_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, const class FString& CallFunc_Conv_GuidToString_ReturnValue, const struct FGuid& CallFunc_GetUID_ReturnValue_1, const class FString& CallFunc_Conv_GuidToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data);
	class UWidget* GetTooltipWidget(class UWBP_GenericTooltip_C* CallFunc_Create_ReturnValue);
	void RefreshSelectedOption(class FText L_Details_Extreme, class FText L_Details_Hard, class FText L_Details_Med, class FText L_Details_Easy, int32 Temp_int_Array_Index_Variable, TArray<struct FVoiceSetDataReference>& CallFunc_GetVoicesSorted_Output_Get, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVoiceSetDataReference& CallFunc_GetVoiceSetData_Data, int32 CallFunc_Array_Add_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData_1, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_CC_sw_PickerButton_K2Node_ComponentBoundEvent_6_PickerEntryUpdated__DelegateSignature(int32 Index);
	void ReenableButton();
	void BndEvt__WBP_CC_DynamicSubPanel_Voice_Button_Preview_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Voice_WBP_PanelConfigButtons_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ResetPanelContent();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Voice(int32 EntryPoint, bool K2Node_Event_IsDesignTime, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, int32 K2Node_ComponentBoundEvent_Index, TArray<struct FVoiceSetDataReference>& CallFunc_GetAllVoiceSetDataReferences_OutReferences, const struct FVoiceSetDataReference& CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, const struct FVoiceSetData& CallFunc_TryGetVoiceSetData_OutData, enum class EGetResult CallFunc_TryGetVoiceSetData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


