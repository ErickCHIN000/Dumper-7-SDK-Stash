#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass WBP_SegmentedSandboxCombined.WBP_SegmentedSandboxCombined_C
class UWBP_SegmentedSandboxCombined_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        SegmentList;                                       // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSandboxProgressionPuzzleCategoryData SandboxProgressionData;                            // 0x270(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EMainMapZoneName                  ZONE;                                              // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPuzzleCategory                   Category;                                          // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_141D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            RewardClaimed;                                     // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_SegmentedSandboxCombined_C* GetDefaultObj();

	void Init_Event(enum class EMainMapZoneName ZONE, enum class EPuzzleCategory Category);
	void OnClick();
	void ExecuteUbergraph_WBP_SegmentedSandboxCombined(int32 EntryPoint, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FPlayerProgressionData& CallFunc_GetProgressionData_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, enum class EMainMapZoneName K2Node_CustomEvent_Zone, enum class EPuzzleCategory K2Node_CustomEvent_Category, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, class UWBP_SegmentedSandboxMeter_C* CallFunc_Create_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetCheatSandboxSolves_ReturnValue, TArray<float>& CallFunc_Map_Keys_Keys, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Array_Get_Item, int32 CallFunc_SelectInt_ReturnValue_1, const struct FSandboxProgressionRewardData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, TArray<class UPuzzleData*>& CallFunc_GetAllSolvedPuzzleDataOfCategoryInZone_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, TArray<class UPuzzleData*>& CallFunc_GetAllPuzzleDataOfCategoryInZone_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, const struct FPlayerProgressionData& CallFunc_GetProgressionData_ReturnValue_1, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, const struct FSandboxProgressionPuzzleCategoryData& CallFunc_GetPuzzleCategoryData_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSandboxProgressionPuzzleCategoryData& CallFunc_GetPuzzleCategoryData_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UWBP_SegmentedSandboxMeter_C* K2Node_DynamicCast_AsWBP_Segmented_Sandbox_Meter, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue_4);
	void RewardClaimed__DelegateSignature();
};

}


