#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x310 - 0x270)
// WidgetBlueprintGeneratedClass UMG_TalentView_Blueprint.UMG_TalentView_Blueprint_C
class UUMG_TalentView_Blueprint_C : public UTalentViewInterface
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ArchetypeBox;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       GraphWidgetSwitcher;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_2;                                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_113;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Noise;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Pattern;                                           // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  RefreshBlueprintsButton;                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ButtonIcon_C*                     RefreshButton;                                     // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_92;                                      // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TalentFilter_C*                   UMG_TalentFilter;                                  // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_TreePoints_C*                     UMG_TreePoints;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UUMG_TalentArchetype_Player_C*> Buttons;                                           // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  AvailableTalents;                                  // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_TalentView_Blueprint_C* GetDefaultObj();

	class UTalentGraphWidget* GetGraphWidget(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess);
	class UTalentGraphWidget* GetGraphWidget_0(class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UTalentGraphWidget* K2Node_DynamicCast_AsTalent_Graph_Widget, bool K2Node_DynamicCast_bSuccess);
	TArray<class UTalentTreeWidget*> GetTalentTreeWidgets(TSet<class UTalentTreeWidget*> TalentTrees, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UTalentTreeWidget*>& CallFunc_Set_ToArray_Result, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_TalentGraph_C* K2Node_DynamicCast_AsUMG_Talent_Graph, bool K2Node_DynamicCast_bSuccess);
	void Setup(const struct FTalentArchetypesRowHandle& CurrentArchetype, int32 Temp_int_Array_Index_Variable, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item, const struct FTalentArchetypesRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_TalentGraph_C* CallFunc_Create_ReturnValue, class UUMG_TalentArchetype_Blueprint_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Add_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void OnClick(const struct FTalentArchetypesRowHandle& Archetype);
	void OnModelViewChanged(class UTalentModelInterface* InModel, class UTalentViewInterface* InView);
	void BndEvt__UMG_TalentView_Blueprint_RefreshButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_TalentView_Blueprint(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTalentArchetypesRowHandle& K2Node_CustomEvent_Archetype, class UUMG_TalentArchetype_Player_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UTalentModelInterface_Const* CallFunc_GetModel_ReturnValue, TArray<struct FTalentArchetypesRowHandle>& CallFunc_GetArchetypes_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UTalentModelInterface* K2Node_Event_InModel, class UTalentViewInterface* K2Node_Event_InView, TScriptInterface<class ITalentControllerInterface> CallFunc_GetController_ReturnValue);
};

}


