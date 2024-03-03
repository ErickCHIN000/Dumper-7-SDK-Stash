#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x134 (0x394 - 0x260)
// WidgetBlueprintGeneratedClass WB_Inventory_Overall.WB_Inventory_Overall_C
class UWB_Inventory_Overall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeOverall;                                       // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NotifyZOrder;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NotifyPopup;                                       // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCanvasPanel*                          CanvasPanel_99;                                    // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               KeyboardFocus_Button;                              // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Notify_Text1;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               PopupBox;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_DropBar_C*                         WB_DropBar;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Equipment_C*                       WB_Equipment;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_InventoryBase_C*                   WB_InventoryBase;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_KeybindingsSwitcher_C*             WB_KeybindingsSwitcher;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_RotatePlayerBox_C*                 WB_RotatePlayerBox;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_Stats_C*                           WB_Stats;                                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWB_UpperUIBar_C*                      WB_UpperUIBar;                                     // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSet<struct FKey>                            Inventory_Keybindings;                             // 0x2E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<struct FKey>                            Exit_Keybindings;                                  // 0x330(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class ABP_PlayerCapture_C*                   PlayerCaptureRef;                                  // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ALevelSequenceActor*                   InventorySEQ;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PlayTo;                                            // 0x390(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Inventory_Overall_C* GetDefaultObj();

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, float L_AnalogValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FVector2D& CallFunc_PointerEvent_GetCursorDelta_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue_1, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, enum class E_WidgetType Temp_byte_Variable, class UWidget* Temp_object_Variable, class UWidget* Temp_object_Variable_1, class UWidget* Temp_object_Variable_2, class UWidget* Temp_object_Variable_3, class UWidget* Temp_object_Variable_4, class UWidget* Temp_object_Variable_5, class UWidget* Temp_object_Variable_6, class UWidget* Temp_object_Variable_7, class UWidget* Temp_object_Variable_8, class UWidget* Temp_object_Variable_9, class UWidget* Temp_object_Variable_10, class UWidget* Temp_object_Variable_11, const struct FEventReply& CallFunc_Handled_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, enum class E_WidgetType CallFunc_Get_Focused_Widget_WidgetType, class UWidget* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key_Input, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_EqualEqual_KeyKey_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FEventReply& CallFunc_Handled_ReturnValue_2, bool CallFunc_EqualEqual_KeyKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_3, bool CallFunc_Set_Contains_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void NotifyEvent();
	void Destruct();
	void StartCapture();
	void StopCapture();
	void Custo();
	void PlaySEQ();
	void KillSEQ();
	void SEQ_Camera_Head();
	void SEQ_Camera_Chest();
	void SEQ_Camera_Legs();
	void SEQ_Camera_Weapons();
	void Close_Inventory();
	void Construct();
	void SEQ_Camera_Full();
	void Send_back();
	void SEQ_Camera_Full2();
	void ExecuteUbergraph_WB_Inventory_Overall(int32 EntryPoint, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber, const struct FFrameTime& K2Node_MakeStruct_FrameTime, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_1, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams, const struct FFrameTime& K2Node_MakeStruct_FrameTime_1, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_2, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_1, const struct FFrameTime& K2Node_MakeStruct_FrameTime_2, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_3, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_2, const struct FFrameTime& K2Node_MakeStruct_FrameTime_3, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_4, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_3, const struct FFrameTime& K2Node_MakeStruct_FrameTime_4, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_5, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_4, const struct FFrameTime& K2Node_MakeStruct_FrameTime_5, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_6, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_5, const struct FFrameTime& K2Node_MakeStruct_FrameTime_6, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_6, class ABP_PlayerCapture_C* CallFunc_GetActorOfClass_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class ASEQ_Master_CharacterCustomization_C* CallFunc_GetActorOfClass_ReturnValue_1, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool CallFunc_IsValid_ReturnValue, class ALevelSequenceActor* CallFunc_CreateLevelSequencePlayer_OutActor, class ULevelSequencePlayer* CallFunc_CreateLevelSequencePlayer_ReturnValue, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_7, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, const struct FFrameTime& K2Node_MakeStruct_FrameTime_7, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_7, bool CallFunc_IsValid_ReturnValue_1, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_8, const struct FFrameTime& K2Node_MakeStruct_FrameTime_8, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_8, bool CallFunc_IsValid_ReturnValue_2, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_2, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_9, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_3, const struct FFrameTime& K2Node_MakeStruct_FrameTime_9, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_9, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_4, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_5, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_10, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_6, const struct FFrameTime& K2Node_MakeStruct_FrameTime_10, const struct FQualifiedFrameTime& CallFunc_GetCurrentTime_ReturnValue, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_10, const struct FFrameNumber& CallFunc_BreakQualifiedFrameTime_Frame, const struct FFrameRate& CallFunc_BreakQualifiedFrameTime_FrameRate, float CallFunc_BreakQualifiedFrameTime_SubFrame, bool CallFunc_InRange_IntInt_ReturnValue, bool CallFunc_InRange_IntInt_ReturnValue_1, bool CallFunc_InRange_IntInt_ReturnValue_2, bool CallFunc_InRange_IntInt_ReturnValue_3, bool CallFunc_InRange_IntInt_ReturnValue_4, const struct FFrameNumber& K2Node_MakeStruct_FrameNumber_11, const struct FFrameTime& K2Node_MakeStruct_FrameTime_11, const struct FMovieSceneSequencePlaybackParams& K2Node_MakeStruct_MovieSceneSequencePlaybackParams_11, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_7, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_8, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_9, bool CallFunc_IsValid_ReturnValue_3);
};

}


