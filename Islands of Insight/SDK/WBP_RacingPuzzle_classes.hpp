#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x308 - 0x2D8)
// WidgetBlueprintGeneratedClass WBP_RacingPuzzle.WBP_RacingPuzzle_C
class UWBP_RacingPuzzle_C : public URacingPuzzleWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                PuzzleIconImage;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Root;                                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GeneralPopup_C*                   Timer;                                             // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ButtonPrompt_C*                   WBP_ButtonPrompt;                                  // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_MilestoneResultPopup_C*           ActivePopup;                                       // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_RacingPuzzle_C* GetDefaultObj();

	void BP_SetTeamColor(const struct FLinearColor& ControllerTeamColor, const struct FLinearColor& PlayerTeamColor);
	void BP_ShowResultsPopup(class FText& TITLE);
	void BP_RemoveResultsPopup();
	void Construct();
	void BP_AddMilestone(struct FMilestoneResultData& Data);
	void BP_Show(class UTexture2D* PuzzleIcon);
	void BP_Hide();
	void BP_DisplayInstructions(class FText& Instructions);
	void BP_AddScore(class FText& Label, class FText& Value, class FText& Delta, float DeltaSign);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_WBP_RacingPuzzle(int32 EntryPoint, const struct FLinearColor& K2Node_Event_controllerTeamColor, const struct FLinearColor& K2Node_Event_playerTeamColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText K2Node_Event_Title, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWBP_MilestoneResultPopup_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FMilestoneResultData& K2Node_Event_Data, class UTexture2D* K2Node_Event_PuzzleIcon, class FText K2Node_Event_Instructions, bool CallFunc_IsValid_ReturnValue_4, class FText K2Node_Event_Label, class FText K2Node_Event_Value, class FText K2Node_Event_Delta, float K2Node_Event_DeltaSign, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3);
};

}


