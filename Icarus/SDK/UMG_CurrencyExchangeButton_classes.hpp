#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x310 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CurrencyExchangeButton.UMG_CurrencyExchangeButton_C
class UUMG_CurrencyExchangeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Glow;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CurrencyExchnageImage;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PointsText;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RetrainingPointsButton;                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              ConfirmationPopup;                                 // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Text_Colour;                                       // 0x290(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Black;                                             // 0x2B8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           ExoticPurple;                                      // 0x2E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UUMG_Exotic_Exchange_C*                ExchangeWindow;                                    // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CurrencyExchangeButton_C* GetDefaultObj();

	void Construct();
	void OnPurchaseComplete();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_UMG_CurrencyExchangeButton(int32 EntryPoint, class UUMG_Exotic_Exchange_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, class UOverlay* CallFunc_GetConfirmationOverlay_Overlay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class FText Temp_text_Variable);
};

}


