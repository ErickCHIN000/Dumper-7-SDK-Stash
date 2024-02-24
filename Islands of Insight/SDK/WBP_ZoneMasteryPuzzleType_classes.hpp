#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x59 (0x2F1 - 0x298)
// WidgetBlueprintGeneratedClass WBP_ZoneMasteryPuzzleType.WBP_ZoneMasteryPuzzleType_C
class UWBP_ZoneMasteryPuzzleType_C : public USophiaUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       DiscoveredWidgetSwitcher;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       HoveredUnhoveredImageSelector;                     // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon_Image;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PuzzleNameText;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SolveCount_Text;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SolveCount_Text_1;                                 // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EMainMapZoneName                  ZONE;                                              // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_135C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PuzzleType;                                        // 0x2D8(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTooltipWidget*                        MyTooltip;                                         // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUndiscovered;                                     // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWBP_ZoneMasteryPuzzleType_C* GetDefaultObj();

	void Construct();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_WBP_ZoneMasteryPuzzleType(int32 EntryPoint, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FPuzzleTypeData& CallFunc_GetPuzzleDefaultTypeInfo_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_ZoneMasteryPuzzleTypeTooltip_C* CallFunc_Create_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, TArray<class UPuzzleData*>& CallFunc_GetAllSolvedDataOfTypeInZone_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class UPlayerMastery* CallFunc_BPC_GetLocalMasteryLevel_ReturnValue, float CallFunc_GetProgressToNextRank_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, int32 CallFunc_GetRankIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
};

}


