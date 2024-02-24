#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x2A8 - 0x238)
// BlueprintGeneratedClass QuestRewardActor.QuestRewardActor_C
class AQuestRewardActor_C : public AGenericInteractiveActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Audio;                                             // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHMapInterestZoneComponent*           SHMapInterestZone;                                 // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class USHQuest*>                      QuestsCopy;                                        // 0x258(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class USoundCue*                             OpenSound;                                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   DataTableButtonCaptionName;                        // 0x270(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FDataTableRowHandle                   DataTableNavpanelButtonCaption;                    // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FText                                  Name;                                              // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AQuestRewardActor_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	void UserConstructionScript(class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue);
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void QuestOutline(bool IsHighlighted);
	void UnlockActor(class FText Password);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void Outline(bool IsHighlighted);
	void ExecuteUbergraph_QuestRewardActor(int32 EntryPoint, bool K2Node_Event_isHighlighted_1, bool K2Node_Event_isHighlighted, class ASHPlayerCharacter* K2Node_Event_Character, class FText K2Node_Event_Password, bool CallFunc_HasAuthority_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character_1);
};

}


