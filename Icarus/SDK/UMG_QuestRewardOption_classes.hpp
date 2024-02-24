#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x74 (0x2D4 - 0x260)
// WidgetBlueprintGeneratedClass UMG_QuestRewardOption.UMG_QuestRewardOption_C
class UUMG_QuestRewardOption_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Backglow;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  ClaimButtoin;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Description;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            RewardName;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        Rewards;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                WeatherFrame;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDynamicQuestRewardsRowHandle         DynamicQuestReward;                                // 0x298(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        Multiplier;                                        // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_44F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            QuestRewardSelected;                               // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ABP_Reward_Transport_Pod_Selection_C*  LinkedActor;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Seed;                                              // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_QuestRewardOption_C* GetDefaultObj();

	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ExecuteUbergraph_UMG_QuestRewardOption(int32 EntryPoint, enum class EDynamicQuestDifficulty CallFunc_GetDynamicQuestDifficulty_ReturnValue, class UUMG_QuestRewardItem_C* CallFunc_Create_ReturnValue, enum class EDynamicQuestDifficulty Temp_byte_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, int32 Temp_int_Array_Index_Variable, float K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, class UUMG_QuestRewardItem_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, const struct FDynamicQuestReward& CallFunc_GetDynamicQuestRewardsStruct_DynamicQuestRewards, enum class EValid CallFunc_GetDynamicQuestRewardsStruct_Paths, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FRewardItemEntry>& CallFunc_GetItemsFromSeed_RewardItems, TArray<bool>& CallFunc_GetItemsFromSeed_Scale, bool CallFunc_Array_Get_Item, const struct FRewardItemEntry& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void QuestRewardSelected__DelegateSignature(const struct FDynamicQuestRewardsRowHandle& QuestReward);
};

}


