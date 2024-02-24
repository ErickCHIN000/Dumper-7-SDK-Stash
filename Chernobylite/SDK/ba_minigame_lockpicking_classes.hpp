#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x278 - 0x248)
// BlueprintGeneratedClass ba_minigame_lockpicking.ba_minigame_lockpicking_C
class Aba_minigame_lockpicking_C : public Aba_minigame_base_Unlock_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FVector                               Shake_NewTrack_0_71E25F01485BEB74B85D7FA5FCCE529C; // 0x250(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class ETimelineDirection                Shake__Direction_71E25F01485BEB74B85D7FA5FCCE529C; // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_1BE3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Shake;                                             // 0x260(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWid_Lockpicking_Main_C*               Widget;                                            // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             ShakenWidgetBasePosition;                          // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_minigame_lockpicking_C* GetDefaultObj();

	void Shake__FinishedFunc();
	void Shake__UpdateFunc();
	void InpActEvt_UI_Up_K2Node_InputActionEvent_5(const struct FKey& Key);
	void InpActEvt_UI_Down_K2Node_InputActionEvent_4(const struct FKey& Key);
	void InpActEvt_UI_Right_K2Node_InputActionEvent_3(const struct FKey& Key);
	void InpActEvt_UI_Left_K2Node_InputActionEvent_2(const struct FKey& Key);
	void InpActEvt_UI_Cancel_K2Node_InputActionEvent_1(const struct FKey& Key);
	void InpActEvt_UI_Accept_K2Node_InputActionEvent_0(const struct FKey& Key);
	void WidgetShake(class UWidget* Widget);
	void StartPuzzle();
	void Won();
	void Left();
	void ExecuteUbergraph_ba_minigame_lockpicking(int32 EntryPoint, const struct FKey& K2Node_InputActionEvent_Key_2, const struct FKey& K2Node_InputActionEvent_Key_1, const struct FKey& K2Node_InputActionEvent_Key, class UWid_Lockpicking_Main_C* CallFunc_Create_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FKey& K2Node_InputActionEvent_Key_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FKey& K2Node_InputActionEvent_Key_4, const struct FKey& K2Node_InputActionEvent_Key_5, bool CallFunc_IsInViewport_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsInViewport_ReturnValue_2, bool CallFunc_IsInViewport_ReturnValue_3, bool CallFunc_IsInViewport_ReturnValue_4, class UWidget* K2Node_CustomEvent_Widget, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue);
};

}


