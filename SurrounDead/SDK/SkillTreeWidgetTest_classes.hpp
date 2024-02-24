#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2F0 - 0x2C8)
// WidgetBlueprintGeneratedClass SkillTreeWidgetTest.SkillTreeWidgetTest_C
class USkillTreeWidgetTest_C : public UTechNodeWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                SlotImage;                                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               UnlockButton;                                      // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UJournal_SkillTreeTooltip_C*           Tooltip;                                           // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_SkillTreeAsset_C*                  SkillTreeAsset;                                    // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USkillTreeWidgetTest_C* GetDefaultObj();

	class UWidget* SkillTreeTooltip(enum class Enum_SkillType Temp_byte_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FSlateColor& K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateUnlocked(bool Unlocked);
	void OnTechNodeInitialized();
	void OnTechnologyUnlockStateChanged(class UTTTechNode* TechNode, bool IsUnlocked);
	void BndEvt__SkillTreeWidget_UnlockButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SkillTreeWidgetTest(int32 EntryPoint, enum class Enum_SkillType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, class UJournal_SkillTreeTooltip_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UTTTechNode* K2Node_CustomEvent_TechNode, bool K2Node_CustomEvent_IsUnlocked, class UBP_SkillTreeAsset_C* K2Node_DynamicCast_AsBP_Skill_Tree_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree_1, class UTechnologyTree* CallFunc_GetAssignedTechTree_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
};

}


