#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSkillTree.wid_RoomSkillTree_C
class UWid_RoomSkillTree_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	TArray<class UWid_RoomSkillTreeOption_C*>    AllSkills;                                         // 0x268(0x10)(Edit, BlueprintVisible, SaveGame, ContainsInstancedReference, ExposeOnSpawn)
	class Aba_RoomUpgrades_C*                    UpgradesActor;                                     // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeOption_C*            SelectedNode;                                      // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          Canvas;                                            // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_SkillDescription_C*               SkillDescriptionBox;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_SkillCost_C*                      SkillCostBox;                                      // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_RoomSkillTreeButton_C*            SelectedButton;                                    // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_SkillCost_C*                      Wid_ReclaimValue;                                  // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_PlayerResources_C*                Wid_PlayerResourcesWidget;                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_RoomSkillTree_C* GetDefaultObj();

	void InitUpdates(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item_2, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SelectNextNode(bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void GetUpgrades(class UVerticalBox** NewParam);
	void SetLevelUnlocked(int32 Level, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SelectNode(class UWid_RoomSkillTreeButton_C* SelectedButtonNew, class UWid_RoomSkillTreeOption_C* SelectedNodeNew, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void Init_GatherGraphData(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Init_GetAllSkills(TArray<class UWid_RoomSkillTreeOption_C*>* All_Skils, class UWidget* CallFunc_GetChildAt_ReturnValue, class UOverlay* K2Node_DynamicCast_AsOverlay, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UVerticalBox* K2Node_DynamicCast_AsVertical_Box, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_2, int32 Temp_int_Variable, class UOverlay* K2Node_DynamicCast_AsOverlay_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_NotEqual_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_3, class UVerticalBox* K2Node_DynamicCast_AsVertical_Box_1, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetChildAt_ReturnValue_4, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWid_SkillCost_C* K2Node_DynamicCast_AsWid_Skill_Cost, bool K2Node_DynamicCast_bSuccess_4, class UWid_SkillDescription_C* K2Node_DynamicCast_AsWid_Skill_Description, bool K2Node_DynamicCast_bSuccess_5, class UWid_RoomSkillTreeOption_C* K2Node_DynamicCast_AsWid_Room_Skill_Tree_Option, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void NextNode(const struct FVector2D& Direction);
	void LoadUnlockedNodes(TArray<int32>& IndicesOfUnlocked);
	void Init(class UCanvasPanel* NodesParent);
	void UpdateNodes();
	void ExecuteUbergraph_wid_RoomSkillTree(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWid_RoomSkillTreeOption_C*>& CallFunc_Init_GetAllSkills_All_Skils, const struct FVector2D& K2Node_CustomEvent_Direction, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Abs_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue_2, TArray<int32>& K2Node_CustomEvent_IndicesOfUnlocked, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, class UCanvasPanel* K2Node_CustomEvent_NodesParent, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
};

}


