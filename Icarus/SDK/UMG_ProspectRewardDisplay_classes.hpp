#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x350 - 0x298)
// WidgetBlueprintGeneratedClass UMG_ProspectRewardDisplay.UMG_ProspectRewardDisplay_C
class UUMG_ProspectRewardDisplay_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              MetaPlaceholder;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        ResourceDisplay;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  RewardName;                                        // 0x2B0(0x18)(Edit, BlueprintVisible)
	struct FSlateBrush                           RewardIcon;                                        // 0x2C8(0x88)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UUMG_ProspectRewardDisplay_C* GetDefaultObj();

	void SetMissionReward(const struct FFactionMissionsRowHandle& Mission, const struct FFactionMission& CallFunc_GetFactionMissionsStruct_FactionMissions, enum class EValid CallFunc_GetFactionMissionsStruct_Paths, int32 Temp_int_Array_Index_Variable, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFeatureLevelsRowHandle& CallFunc_GetFeatureLevel_ReturnValue, bool CallFunc_IsFeatureLevelEnabled_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ProspectRewardItem_C* CallFunc_Create_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ProspectRewardDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


