#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x258 (0x4B8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ItemTooltip_LivingItem.UMG_ItemTooltip_LivingItem_C
class UUMG_ItemTooltip_LivingItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ChallengeDescription;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ChallengeDetailsVBox;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeProgress;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ChallengeProgressBar;                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ChallengeTitle;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         Slot1;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         Slot2;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         Slot3;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         Slot4;                                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BioLab_UpgradeSlotMain_C*         Slot5;                                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FItemData                             ItemData;                                          // 0x2B8(0x1F0)(Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn)
	TArray<class UUMG_BioLab_UpgradeSlotMain_C*> Slots;                                             // 0x4A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UUMG_ItemTooltip_LivingItem_C* GetDefaultObj();

	void Construct();
	void TrySetupChallengeInfo(struct FLivingItemSlotState& LivingItemSlotState);
	void ExecuteUbergraph_UMG_ItemTooltip_LivingItem(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FLivingItemSlotState>& CallFunc_GetLivingItemSlotStates_Slots, bool CallFunc_GetLivingItemSlotStates_ReturnValue, const struct FLivingItemSlotState& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, TArray<class UUMG_BioLab_UpgradeSlotMain_C*>& K2Node_MakeArray_Array, class UUMG_BioLab_UpgradeSlotMain_C* CallFunc_Array_Get_Item_1, class UPanelWidget* CallFunc_GetParent_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FLivingItemSlotState& K2Node_CustomEvent_LivingItemSlotState, const struct FChallenge& CallFunc_GetChallengesStruct_Challenges, enum class EValid CallFunc_GetChallengesStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, float CallFunc_Divide_FloatFloat_ReturnValue, class FText CallFunc_Format_ReturnValue);
};

}


