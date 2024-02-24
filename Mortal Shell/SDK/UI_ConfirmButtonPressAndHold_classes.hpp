#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC3 (0x2F3 - 0x230)
// WidgetBlueprintGeneratedClass UI_ConfirmButtonPressAndHold.UI_ConfirmButtonPressAndHold_C
class UUI_ConfirmButtonPressAndHold_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      PressAnim;                                         // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Progress_Controller;                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Progress_LMB;                                // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Progress_Spacebar;                           // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Prompt_Controller;                           // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Prompt_LMB;                                  // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Prompt_Spacebar;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Overlay_Controller;                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Progress_LMB;                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Progress_Spacebar;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Action;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EControllerButton                 ButtonType;                                        // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_F61[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText;                                       // 0x298(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            OnPressed;                                         // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          PressedTimer;                                      // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bFunctionIfPaused;                                 // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bPressedWIP;                                       // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bActive;                                           // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PC_UseLMBIconInsteadOfSpace;                       // 0x2CB(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnReleased;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPressStart;                                      // 0x2E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bPressed;                                          // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bUnhandledPressedEvent;                            // 0x2F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DoNotPlayProgress;                                 // 0x2F2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_ConfirmButtonPressAndHold_C* GetDefaultObj();

	void ResetPromptProgress_All();
	void SetColorOpacity(bool Pressed, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void OnButtonReleased(float CallFunc_PauseAnimation_ReturnValue);
	void ResetPromptProgress(class UImage* Target, class FName ParameterName, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void GetIcon(class UTexture2D** Texture, class UTexture2D* CallFunc_GetButtonIcon_Texture);
	void PressStart();
	void OnReleased_Set();
	void Pressed();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void UpdateKeyboardMode();
	void Destruct();
	void OnKeyboardModeChanged(bool KeyboardMode);
	void RefreshInputType();
	void UpdateButtonTexture();
	void Deactivate();
	void OnReleased_Bind();
	void Activate();
	void RemovePressedAnimBinding();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UI_ConfirmButtonPressAndHold(int32 EntryPoint, const struct FKey& CallFunc_GetVirtualAcceptKey_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsInputKeyDown_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_2, bool K2Node_CustomEvent_KeyboardMode, class UTexture2D* CallFunc_GetIcon_Texture, bool CallFunc_Not_PreBool_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UTexture2D* CallFunc_GetIcon_Texture_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_2, bool CallFunc_BooleanAND_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue_3, const struct FKey& CallFunc_GetVirtualAcceptKey_ReturnValue_1, bool CallFunc_IsInputKeyDown_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue);
	void OnPressStart__DelegateSignature();
	void OnReleased__DelegateSignature();
	void OnPressed__DelegateSignature();
};

}


