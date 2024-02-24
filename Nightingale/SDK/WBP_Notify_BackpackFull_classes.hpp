#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x358 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Notify_BackpackFull.WBP_Notify_BackpackFull_C
class UWBP_Notify_BackpackFull_C : public UNWXCommonUserWidget
{
public:
	class UWidgetAnimation*                      Anim_Fade;                                         // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_0;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Notify_BackpackFull_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void OnInventoryOverflowed(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnPawnUnpossessed(class APawn* OldPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent);
	void OnPawnPossessedAndReady(class APawn* NewPawn, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void SetVisibleWithAnimation(bool IsVisible, bool Temp_bool_Variable, double Temp_real_Variable, double Temp_real_Variable_1, double K2Node_Select_Default, float CallFunc_SetRenderOpacity_InOpacity_ImplicitCast);
};

}


