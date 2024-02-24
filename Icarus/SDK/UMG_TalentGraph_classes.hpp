#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x368 - 0x2B8)
// WidgetBlueprintGeneratedClass UMG_TalentGraph.UMG_TalentGraph_C
class UUMG_TalentGraph_C : public UTalentGraphWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_0;                                          // 0x2C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanningPanel*                         Panner;                                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TalentTreeHorizontalBox;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TitleWidgets;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           BackgroundBrush;                                   // 0x2E0(0x88)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_TalentGraph_C* GetDefaultObj();

	void OnZoomChanged(int32 Level, float Scale, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Setup_Panner(const struct FTalentViewsRowHandle& CallFunc_GetViewData_ReturnValue, const struct FTalentView& CallFunc_GetTalentViewsStruct_TalentViews, enum class EValid CallFunc_GetTalentViewsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void OnTalentTreeAdded(class UTalentTreeWidget* TalentTree);
	void PostSetup();
	void ExecuteUbergraph_UMG_TalentGraph(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UTalentTreeWidget* K2Node_Event_TalentTree, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UUMG_TalentTree_C* K2Node_DynamicCast_AsUMG_Talent_Tree, bool K2Node_DynamicCast_bSuccess, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot_1, bool K2Node_DynamicCast_bSuccess_2, class UTalentTreeWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


