#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0x304 - 0x2B0)
// WidgetBlueprintGeneratedClass WBP_ScoringPuzzle.WBP_ScoringPuzzle_C
class UWBP_ScoringPuzzle_C : public URacingRingsScoreWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_MilestoneProgress_C*              MilestoneProgress;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GeneralPopup_C*                   ProgressPanel;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                PuzzleIconImage;                                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Root;                                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ScoreValue;                                        // 0x2D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonPrompt_C*                   WBP_ButtonPrompt;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_RacingRingsResultPopup_C*         ActivePopup;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BronzeThreshold;                                   // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SilverThreshold;                                   // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GoldThreshold;                                     // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentProgress;                                   // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BestProgress;                                      // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ScoringPuzzle_C* GetDefaultObj();

	void ShowWithIcon(class UTexture2D* PuzzleIcon);
	void RemoveResultsPopup(bool CallFunc_IsValid_ReturnValue);
	void BP_SetCurrentProgress(float Percentage);
	void BP_SetBestProgress(float Percentage);
	void BP_SetMilestoneThresholds(float Bronze, float Silver, float Gold);
	void BP_ShowResultsPopup(class UTexture2D* PuzzleIcon, class FText& TITLE, bool ShowPreviousScore, bool ShowRestartButton);
	void BP_Hide();
	void BP_DisplayInstructions(class FText& Instructions);
	void BP_AddScore(class FText& Label, class FText& Value);
	void BP_ShowProgressPanel(class UTexture2D* PuzzleIcon);
	void ExecuteUbergraph_WBP_ScoringPuzzle(int32 EntryPoint, float K2Node_Event_Percentage_1, float K2Node_Event_Percentage, float K2Node_Event_Bronze, float K2Node_Event_Silver, float K2Node_Event_Gold, class UTexture2D* K2Node_Event_PuzzleIcon_1, class FText K2Node_Event_Title, bool K2Node_Event_ShowPreviousScore, bool K2Node_Event_ShowRestartButton, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_RacingRingsResultPopup_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class FText K2Node_Event_Instructions, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Event_Label, class FText K2Node_Event_Value, bool CallFunc_IsValid_ReturnValue_5, class UTexture2D* K2Node_Event_PuzzleIcon);
};

}


