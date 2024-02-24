#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_SetPlayerTracker.CF_SetPlayerTracker_C
class UCF_SetPlayerTracker_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_2F5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_SetPlayerTracker_C* GetDefaultObj();

	void OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FPlayerTrackersEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FPlayerTrackersRowHandle& CallFunc_StructToRowHandle_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, class UPlayerTrackerComboRow_C* CallFunc_Create_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void Handle_On_Item_Set(class UUserWidget* Widget);
	void ExecuteUbergraph_CF_SetPlayerTracker(int32 EntryPoint, class UPlayerTrackerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UUserWidget* K2Node_Event_Widget_1, int32 K2Node_Event_Amount, class UUserWidget* K2Node_Event_Widget, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row, bool K2Node_DynamicCast_bSuccess, class UPlayerTrackerComboRow_C* K2Node_DynamicCast_AsPlayer_Tracker_Combo_Row_1, bool K2Node_DynamicCast_bSuccess_1, const struct FPlayerTrackersRowHandle& CallFunc_MakePlayerTrackers_ReturnValue, const struct FPlayerTrackersRowHandle& CallFunc_MakePlayerTrackers_ReturnValue_1, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, const struct FPlayerTrackersRowHandle& CallFunc_MakePlayerTrackers_ReturnValue_2, const struct FPlayerTrackersRowHandle& CallFunc_MakePlayerTrackers_ReturnValue_3, class UIcarusOrchestrationSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, class UPlayerTrackerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_2, bool CallFunc_CheckOrchestrationFlag_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, int32 CallFunc_GetPlayerTracker_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid_1, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}


