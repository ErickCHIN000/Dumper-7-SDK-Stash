#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC (0x2DC - 0x230)
// WidgetBlueprintGeneratedClass UI_Equipment_RunesTab.UI_Equipment_RunesTab_C
class UUI_Equipment_RunesTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_SkillTree_FadeIn;                             // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG_RuneCircle;                               // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_RunesTab;                              // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_BG;                                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_SkillTree;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Zoom_In;                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Zoom_Out;                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Runes_SkillTree_C*                 UI_Runes_SkillTree;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FVector2D                             NormalizedMousePos;                                // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DesiredParallaxPos;                                // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentParallaxPos;                                // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Zoom_Desired;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_21C9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_Equipment_Menu_C*                  UI_Equipment_Menu;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ZoomDown_Timer;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ZoomUp_Timer;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Zoom_Current;                                      // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21E2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsClosing;                                         // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_21EF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Zoom_Min;                                          // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Zoom_Max;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Equipment_RunesTab_C* GetDefaultObj();

	void ResetMousePosition(const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1);
	void RunesClose();
	void SetGameplayPC(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void HandleBGVisibility(enum class ESlateVisibility InVisibility);
	void GamepadKB_ZoomIn_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void GamepadKB_ZoomOut_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void MouseWheel_ZoomOut_Listen(FDelegateProperty_ Callback);
	void MouseWheel_ZoomIn_Listen(FDelegateProperty_ Callback);
	void Zoom_Out(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Zoom_In(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void Handle_Zoom(float DeltaTime, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1);
	void Handle_Parallax(float DeltaTime, float Local_DeltaTime, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void MouseWheel_Zoom_In();
	void MouseWheel_Zoom_Out();
	void OnOpenEvent();
	void OnCloseEvent_Instinct(bool DisableVirtualCursor);
	void Gamepad_KB_Zoom_Out();
	void Gamepad_KB_Zoom_In();
	void Gamepad_KB_Zoom_Out_Released();
	void Gamepad_KB_Zoom_In_Released();
	void Gamepad_KB_Zoom_Out_Hold();
	void Gamepad_KB_Zoom_In_Hold();
	void OnFadeInEnd();
	void MouseWheel_Zoom_In_Bind();
	void MouseWheel_Zoom_Out_Bind();
	void Gamepad_KB_Zoom_Out_Bind();
	void Gamepad_KB_Zoom_In_Bind();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void NavClose_Bind();
	void NavClose_Set();
	void Construct();
	void Destruct();
	void BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void ExecuteUbergraph_UI_Equipment_RunesTab(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool K2Node_CustomEvent_DisableVirtualCursor, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier_1);
};

}


