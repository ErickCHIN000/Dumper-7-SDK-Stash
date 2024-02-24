#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x420 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C
class UWBP_Redemption_DetailPanel_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Common_Button_Base_C*             CBU_Claim;                                         // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              CONT_DetailPanel;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               CONT_Icon;                                         // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_Icon;                                          // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TXT_ClaimResponse;                                 // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Txt_description;                                   // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TXT_Title;                                         // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Component_Small_Flourish_Left_C*  WBP_Component_Small_Flourish_Left;                 // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URedemptionComponent*                  RedemptionComponent;                               // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CC8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRedemptionEntry                      CurrentRedemptionEntry;                            // 0x3A0(0x80)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UWBP_Redemption_DetailPanel_C* GetDefaultObj();

	void GetCurrentRedemptionEntry(struct FRedemptionEntry* CurrentRedemptionEntry);
	void ClearCurrentRedemptionEntry();
	void InitializeDesignerPreview();
	void TryClaimReward(const class FString& CallFunc_GetRedemptionId_ReturnValue);
	void OnClaimRedemptionResponseHandler(bool bSuccess, const class FString& RewardName, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void UpdateDisplay(bool LSoftObjectReference, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FRedeemableRewardUIData& CallFunc_TryGetRedemptionUIData_OutData, enum class EGetResult CallFunc_TryGetRedemptionUIData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRedemptionValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void UpdateCurrentRedemptionEntry(const struct FRedemptionEntry& RedemptionEntry, const class FString& CallFunc_GetRedemptionId_ReturnValue, const class FString& CallFunc_GetRedemptionId_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue);
	void Construct();
	void Destruct();
	void BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_Redemption_DetailPanel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


