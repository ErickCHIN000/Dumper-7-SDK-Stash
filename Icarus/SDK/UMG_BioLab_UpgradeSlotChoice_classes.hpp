#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x2C8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotChoice.UMG_BioLab_UpgradeSlotChoice_C
class UUMG_BioLab_UpgradeSlotChoice_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                HoverIndicator;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SlotButton;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                UpgradeIcon;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            UpgradeChoiceClicked;                              // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLivingItemUpgradesRowHandle          Upgrade;                                           // 0x290(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ChoiceHovered;                                     // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ChoiceUnhovered;                                   // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUMG_BioLab_UpgradeSlotChoice_C* GetDefaultObj();

	void BndEvt__UMG_BioLab_UpgradeSlot_SlotButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void SetUpgrade(const struct FLivingItemUpgradesRowHandle& Upgrade, bool IsCurrentChoice);
	void Construct();
	void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_BioLab_UpgradeSlotChoice_SlotButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_BioLab_UpgradeSlotChoice(int32 EntryPoint, class UUMG_BioLab_Upgrade_Tooltip_C* CallFunc_Create_ReturnValue, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, bool K2Node_CustomEvent_IsCurrentChoice, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
	void ChoiceUnhovered__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade);
	void ChoiceHovered__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade);
	void UpgradeChoiceClicked__DelegateSignature(const struct FLivingItemUpgradesRowHandle& Upgrade);
};

}


