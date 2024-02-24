#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x2E4 - 0x260)
// WidgetBlueprintGeneratedClass UMG_RefundPoints.UMG_RefundPoints_C
class UUMG_RefundPoints_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ColourBorder;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PointsText;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RetrainingIcon;                                    // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RetrainingIcon_1;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RetrainingPointsButton;                            // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FCurrencyConversionsRowHandle         ConverstionRow;                                    // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UUMG_ConfirmationPopup_C*              ConfirmationPopup;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B32[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TextAndIconColour;                                 // 0x2B4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          White;                                             // 0x2C4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Orange;                                            // 0x2D4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_RefundPoints_C* GetDefaultObj();

	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void Initialise();
	void MetaResourcesUpdate();
	void Construct();
	void OnPurchaseComplete();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UMG_RefundPoints_RetrainingPointsButton_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_RefundPoints(int32 EntryPoint, class FText Temp_text_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_Respec_Purchase_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_2, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool K2Node_SwitchEnum_CmpSuccess, class UOverlay* CallFunc_GetConfirmationOverlay_Overlay, bool CallFunc_IsValid_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, bool CallFunc_IsOnProspect_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, int32 CallFunc_GetAvailableMetaResource_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText Temp_text_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1);
};

}


