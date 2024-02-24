#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x301 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_MasteryList.WBP_MasteryList_C
class UWBP_MasteryList_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_UniformGridRadioSelect_C*         MasteryUniformRadioSelect;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MasteryProgressBar_C*             WBP_MasteryProgressBar;                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         MasteryItemIsHovered;                              // 0x300(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_MasteryList_C* GetDefaultObj();

	void Construct();
	void Destruct();
	void OnHovered();
	void OnUnhovered();
	void BndEvt__WBP_MasteryList_MasteryUniformRadioSelect_K2Node_ComponentBoundEvent_0_RadioSelectedSignature__DelegateSignature(const class FString& Value);
	void Rebuild_Mastery_List();
	void UpdateMasteryProgress();
	void UpdateLastSeenValues();
	void ExecuteUbergraph_WBP_MasteryList(int32 EntryPoint, TArray<class URadioButton*>& CallFunc_GetRadioButtonWidgets_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& K2Node_ComponentBoundEvent_Value, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, class URadioButton* CallFunc_Array_Get_Item, class UWBP_MasteryItem_C* K2Node_DynamicCast_AsWBP_Mastery_Item, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_MasteryItem_C* CallFunc_Create_ReturnValue, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UPlayerMastery*>& CallFunc_BPC_GetLocalMasteryLevels_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerMastery* CallFunc_Array_Get_Item_1, int32 CallFunc_Divide_IntInt_ReturnValue, const struct FSettingOption& K2Node_MakeStruct_SettingOption, int32 CallFunc_Percent_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddRadioButton_outPanelSlot, class UUniformGridSlot* K2Node_DynamicCast_AsUniform_Grid_Slot, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


