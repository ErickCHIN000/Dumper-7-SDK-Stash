#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x438 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Redemption_Entry.WBP_Redemption_Entry_C
class UWBP_Redemption_Entry_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_FocusTarget;                                   // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IMG_CanClaim;                                      // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TXT_Title;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEntryHovered;                                    // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	uint8                                        Pad_4C46[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRedemptionEntry                      RedemptionEntry;                                   // 0x380(0x80)(Edit, BlueprintVisible, ExposeOnSpawn)
	FMulticastInlineDelegateProperty_            OnEntryUnhovered;                                  // 0x400(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnEntrySelected;                                   // 0x410(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class URedemptionComponent*                  RedemptionComponent;                               // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnEntryDoubleClicked;                              // 0x428(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Redemption_Entry_C* GetDefaultObj();

	void Construct();
	void BndEvt__WBP_Redemption_Entry_CBU_FocusTarget_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Redemption_Entry_CBU_FocusTarget_K2Node_ComponentBoundEvent_9_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Redemption_Entry_CBU_FocusTarget_K2Node_ComponentBoundEvent_10_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Redemption_Entry_CBU_FocusTarget_K2Node_ComponentBoundEvent_11_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Redemption_Entry(int32 EntryPoint, const struct FRedeemableRewardUIData& CallFunc_TryGetRedemptionUIData_OutData, enum class EGetResult CallFunc_TryGetRedemptionUIData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_3, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button);
	void OnEntryDoubleClicked__DelegateSignature(const struct FRedemptionEntry& RedemptionEntry);
	void OnEntrySelected__DelegateSignature(const struct FRedemptionEntry& RedemptionEntry);
	void OnEntryUnhovered__DelegateSignature();
	void OnEntryHovered__DelegateSignature(const struct FRedemptionEntry& RedemptionEntry);
};

}


