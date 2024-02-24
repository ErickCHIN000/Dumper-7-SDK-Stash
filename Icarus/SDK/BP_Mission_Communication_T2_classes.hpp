#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x55 (0x7C9 - 0x774)
// BlueprintGeneratedClass BP_Mission_Communication_T2.BP_Mission_Communication_T2_C
class ABP_Mission_Communication_T2_C : public ABP_DeployableBase_C
{
public:
	uint8                                        Pad_51FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x778(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_UIProjectionLocation_C*            BP_UIProjectionLocation;                           // 0x780(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UHighlightableComponent*               Highlightable;                                     // 0x788(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOverlapAudioComponent*                OverlapAudio;                                      // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCameraComponent*                      Camera;                                            // 0x798(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Seed;                                              // 0x7A0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5239[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FDynamicQuestsRowHandle>       AvailableQuests;                                   // 0x7A8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	TArray<enum class EDynamicQuestDifficulty>   Difficulty;                                        // 0x7B8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance)
	bool                                         Initialised;                                       // 0x7C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABP_Mission_Communication_T2_C* GetDefaultObj();

	void UpdateDynamicQuests();
	void UpdateSeed(int32 CallFunc_GenerateNewDynamicQuestSeed_ReturnValue, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void RollQuest(int32 Seed, struct FDynamicQuestsRowHandle* Quest, const struct FRandomStream& Stream, const struct FDynamicQuestsRowHandle& SelectedQuest, int32 ListID, int32 CallFunc_NumRows_ReturnValue, int32 CallFunc_CreateNewList_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FDynamicQuestsEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FDynamicQuest& CallFunc_GetDynamicQuestsStruct_DynamicQuests, enum class EValid CallFunc_GetDynamicQuestsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FWeightedListElement& K2Node_MakeStruct_WeightedListElement, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_AddElement_ReturnValue, const struct FWeightedListElement& CallFunc_GetSelectedElement_ReturnValue, bool CallFunc_RemoveList_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FDynamicQuestsRowHandle& CallFunc_MakeDynamicQuests_ReturnValue);
	void PopulateQuests(int32 Seed, const struct FRandomStream& RandomStream, int32 LocalSeed, int32 CallFunc_SeededRoll_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FDynamicQuestsRowHandle& CallFunc_RollQuest_Quest, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Deployable_Interact(class AActor* Interactor, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_1);
	void SelectQuest(const struct FDynamicQuestsRowHandle& Quest);
	void IcarusBeginPlay();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void GenericAction();
	void ExecuteUbergraph_BP_Mission_Communication_T2(int32 EntryPoint, const struct FDynamicQuestsRowHandle& K2Node_CustomEvent_Quest, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, enum class EDynamicQuestDifficulty CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, const struct FItemData& K2Node_MakeStruct_ItemData, bool CallFunc_IsServer_ReturnValue_1, class AIcarusPlayerCharacter* K2Node_Event_Character, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FIcarusItemSpawnParametersAdvanced& K2Node_MakeStruct_IcarusItemSpawnParametersAdvanced, TArray<struct FIcarusStatReplicated>& K2Node_MakeArray_Array, const struct FIcarusItemSpawnParameters& K2Node_MakeStruct_IcarusItemSpawnParameters, TArray<struct FAlterationsEnum>& K2Node_MakeArray_Array_1, const struct FItemData& CallFunc_CreateCustomItem_ReturnValue, class AIcarusItem* CallFunc_SpawnItemActor_ReturnValue);
};

}


