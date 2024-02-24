#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xFC (0x31C - 0x220)
// BlueprintGeneratedClass ba_InvestigationBoard_Parent.ba_InvestigationBoard_Parent_C
class Aba_InvestigationBoard_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       Notecontainer;                                     // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneCaptureComponent2D*              CaptureComponent;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene1;                                            // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ShadowWorld;                                       // 0x258(0x10)(Edit, BlueprintVisible, NoDestructor)
	class FName                                  WormholeCompletedBoolName;                         // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCompleted;                                       // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1733[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> AllUnlockedNoteActors;                             // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class FName>                          AlreadyKnownNotes;                                 // 0x288(0x10)(Edit, BlueprintVisible, SaveGame)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> NewNotes;                                          // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> NewCrucialNotes;                                   // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*> SpawnArray;                                        // 0x2B8(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         AllSpawned;                                        // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1740[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BoardEnded;                                        // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class Aba_InvestigationBoard_Controller_C*   BoardController;                                   // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                WormholeStatus;                                    // 0x2E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         WormholeEnabled;                                   // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1750[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   DescDataTableRow;                                  // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                        WormHoleStatusID;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1758[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  PreviousBoard;                                     // 0x314(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_InvestigationBoard_Parent_C* GetDefaultObj();

	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void BlendToCamera();
	void GetDescKey(class FName* Row_Name);
	void SetWormhole(bool WormholeEnabled, const class FString& WormholeStatus, uint8 WormHoleStatusID);
	void BeginUpdate(bool ShouldSpawn, int32 Temp_int_Array_Index_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Spawn_IsCrucial, bool CallFunc_Spawn_WasSpawned, int32 Temp_int_Loop_Counter_Variable, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllUnlockedNoteActors_Return, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& CallFunc_GetAllUnlockedNoteActors_NewCrucialNotes, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void FilterOutAlreadyKnownActors(TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& Array, TArray<class FName>& Input_already_known_notes, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* AlreadyKnownNotes, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* NewNotes, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalNewNotes, class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalAlreadyKnownNotes, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue);
	void GetAllUnlockedNoteActors(TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* Return, TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>* NewCrucialNotes, class Aba_NoteSpawnerComponentForInvestigationBoard_C* IteratedNote, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& LocalCrucialNotes, const TArray<class Aba_NoteSpawnerComponentForInvestigationBoard_C*>& Local_All_unlocked_notes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FNoteExperienceHandle& CallFunc_DiscoverEvidence_ExperienceHandle, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class AActor*>& CallFunc_GetAllChildActors_ChildActors, int32 CallFunc_Array_Add_ReturnValue_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class Aba_NoteSpawnerComponentForInvestigationBoard_C* K2Node_DynamicCast_AsBa_Note_Spawner_Component_for_Investigation_Board, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CheckIfRequirementsAreMet_ReturnValue);
	void SpawnNoteOnDefinedSlot(class FName& Key, int32 Slot, int32 FoundSlot);
	void InternalIntroduceNoteFromArray();
	void Introduced();
	void Begin_Spawn();
	void StartBoard();
	void EndBoard();
	void PrepareDataForSave();
	void LoadingFinished();
	void ExecuteUbergraph_ba_InvestigationBoard_Parent(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue_1, class Aba_NoteSpawnerComponentForInvestigationBoard_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Array_RemoveItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, int32 CallFunc_Array_AddUnique_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3);
	void BoardEnded__DelegateSignature();
};

}


