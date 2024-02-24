#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D0 (0x400 - 0x230)
// WidgetBlueprintGeneratedClass ShellUpgradeItem.ShellUpgradeItem_C
class UShellUpgradeItem_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Background;                                        // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BondingAmountText;                                 // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CostText;                                          // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Description;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            UpgradeName;                                       // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           NormalStyle;                                       // 0x268(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           HoveredStyle;                                      // 0x2F0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnBGHoverStart;                                    // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBGHoverEnd;                                      // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnBGClicked;                                       // 0x398(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FName                                  UpgradeID;                                         // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           TextColorCanBuy;                                   // 0x3B0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           TextColorCanNotBuy;                                // 0x3D8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UShellUpgradeItem_C* GetDefaultObj();

	void Initialize(class FName UpgradeID);
	void SetHighlighted(bool Highlighted);
	void Construct();
	void BndEvt__Background_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Background_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_ShellUpgradeItem(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, class FName K2Node_CustomEvent_UpgradeID, const struct FShellUpgradeData& CallFunc_GetShellUpgradeRow_Out_Row, bool K2Node_CustomEvent_Highlighted, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FSlateBrush& K2Node_Select_Default, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetNamedPCInt_Value, int32 CallFunc_GetShellBondingPoints_Points, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2);
	void OnBGClicked__DelegateSignature(class UShellUpgradeItem_C* Widget);
	void OnBGHoverEnd__DelegateSignature(class UShellUpgradeItem_C* Widget);
	void OnBGHoverStart__DelegateSignature(class UShellUpgradeItem_C* Widget);
};

}


