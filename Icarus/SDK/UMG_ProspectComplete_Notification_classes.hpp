#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x140 (0x3A0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ProspectComplete_Notification.UMG_ProspectComplete_Notification_C
class UUMG_ProspectComplete_Notification_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      GlowPulse;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                ButtonImage;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               GlowBorder;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               MainButton;                                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PromptBorder;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PromptText;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ProspectCompleteText;                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateColor                           Orange;                                            // 0x2A0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           White;                                             // 0x2C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateColor                           Black;                                             // 0x2F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Found;                                             // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5308[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FNotification                         Notification;                                      // 0x320(0x78)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UFMODEvent*                            FMODEvent_Hovered;                                 // 0x398(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ProspectComplete_Notification_C* GetDefaultObj();

	void SetHoverStateVisuals(bool Hovered, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1);
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void Construct();
	void BndEvt__MainButton_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_ProspectComplete_Notification(int32 EntryPoint, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMG_UserInterfaceSpace_C* K2Node_DynamicCast_AsUMG_User_Interface_Space, bool K2Node_DynamicCast_bSuccess_1);
};

}


