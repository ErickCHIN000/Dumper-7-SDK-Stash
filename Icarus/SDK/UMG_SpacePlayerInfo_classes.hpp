#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_SpacePlayerInfo.UMG_SpacePlayerInfo_C
class UUMG_SpacePlayerInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            CharacterLevelText;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerLevelText;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PlayerName;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              PlayerNameBox;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3B97[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusPlayerState*                    PlayerState;                                       // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_SpacePlayerInfo_C* GetDefaultObj();

	class FText GetCharacterLevelText(const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_GetLevel_ReturnValue, int32 CallFunc_Clamp_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_SpacePlayerInfo(int32 EntryPoint, const struct FOnlineProfileCharacter& CallFunc_GetActiveCharacter_ReturnValue, bool CallFunc_HasActiveCharacter_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess);
};

}


