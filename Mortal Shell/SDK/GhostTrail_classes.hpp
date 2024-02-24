#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x258 - 0x230)
// WidgetBlueprintGeneratedClass GhostTrail.GhostTrail_C
class UGhostTrail_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Bam;                                               // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UProgressBar*                          GhostTrail;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bShouldFade;                                       // 0x248(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          FadeAfterDelayTimerHandle;                         // 0x250(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGhostTrail_C* GetDefaultObj();

	void FadeTrailToZero(float DeltaTime, class UCanvasPanelSlot* LocCanvasSlot, const struct FVector2D& CallFunc_GetSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetSize_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* K2Node_DynamicCast_AsCanvas_Panel_Slot, bool K2Node_DynamicCast_bSuccess, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetTrailAndStartFadeAfterDelay(float FadeDelay);
	void StartFade();
	void OnPlayerDead_Event_0();
	void ExecuteUbergraph_GhostTrail(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float K2Node_CustomEvent_FadeDelay, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess);
};

}


