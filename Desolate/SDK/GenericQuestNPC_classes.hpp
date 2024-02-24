#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xEC (0x1218 - 0x112C)
// BlueprintGeneratedClass GenericQuestNPC.GenericQuestNPC_C
class AGenericQuestNPC_C : public ABasePeacefulAICharacter_C
{
public:
	uint8                                        Pad_1C85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                NpcStuff2;                                         // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcMustaches;                                      // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USHQuestSpawnerComponent*              SHQuestSpawner;                                    // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         LookAtVolume;                                      // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcStuff;                                          // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcShoulders;                                      // 0x1160(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHair;                                           // 0x1168(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHands;                                          // 0x1170(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcPants;                                          // 0x1178(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcBody;                                           // 0x1180(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHead;                                           // 0x1188(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<struct FQuestGraphDescription>        Graphs;                                            // 0x1190(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class ASHPlayerCharacter*                    TargetCharacter;                                   // 0x11A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFollowTarget;                                     // 0x11A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CB1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MinimumTotalQuestsCount;                           // 0x11AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumTotalQuestsCount;                           // 0x11B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinimumHardQuestsCount;                            // 0x11B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumHardQuestsCount;                            // 0x11B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinimumNormalQuestsCount;                          // 0x11BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumNormalQuestsCount;                          // 0x11C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MinimumEasyQuestsCount;                            // 0x11C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaximumEasyQuestsCount;                            // 0x11C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHidden;                                          // 0x11CC(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1CC8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnQuestGraphsUpdated;                              // 0x11D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FQuestGraphDescription>        RolledGraphs;                                      // 0x11E0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<struct FQuestGraphDescription>        ValidatedRolledGraphs;                             // 0x11F0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify, HasGetValueTypeHash)
	bool                                         bHaveSpeakTask;                                    // 0x1200(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHQuest*>                      SpeakQuestList;                                    // 0x1208(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AGenericQuestNPC_C* GetDefaultObj();

	bool ShouldNotBeSaved();
	class FName GetActorState(bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class FName K2Node_Select_Default);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection);
	void CheckQuestHaveSpeakTask(class USHQuest* Quest, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class USHQuestTask* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, class UGiveTrademan_C* K2Node_DynamicCast_AsGive_Trademan, bool K2Node_DynamicCast_bSuccess, class UTalkToNPC_C* K2Node_DynamicCast_AsTalk_to_NPC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsComplete_ReturnValue, bool CallFunc_IsComplete_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void UpdateUI();
	void OnRep_ValidatedRolledGraphs();
	void ValidateQuestGraphs(const TArray<struct FQuestGraphDescription>& Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FQuestGraphDescription& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_CanRunQuestGraph_ReturnValue);
	void GetRolledQuestGraphs(TArray<struct FQuestGraphDescription>* Graphs, const TArray<struct FQuestGraphDescription>& Temp);
	void OnRep_IsHidden();
	void SetVisibility(bool CallFunc_Not_PreBool_ReturnValue);
	void RollQuestsByDifficulty(TArray<class USHQuestGraph*>& InputRollArray, enum class EQuestGraphDifficulty Difficulty, int32 Count, int32 TotalLimit, TArray<class USHQuestGraph*>* OutputRollArray, class USHQuestGraph* TempGraph, const TArray<class USHQuestGraph*>& TempDifficulty, const TArray<class USHQuestGraph*>& TempResult, int32 TempCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Not_PreBool_ReturnValue, class USHQuestGraph* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQuestGraphDescription& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CanRunQuestGraph_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue_2);
	void RollQuestGraphs(TArray<struct FQuestGraphDescription>* Graphs, const TArray<struct FQuestGraphDescription>& TempGraphs, const TArray<class USHQuestGraph*>& TempResult, int32 TempCount, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestGraphDescription& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, TArray<class USHQuestGraph*>& CallFunc_RollQuestsByDifficulty_OutputRollArray, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, TArray<class USHQuestGraph*>& CallFunc_RollQuestsByDifficulty_OutputRollArray_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, TArray<class USHQuestGraph*>& CallFunc_RollQuestsByDifficulty_OutputRollArray_2, int32 CallFunc_RandomIntegerInRange_ReturnValue_3);
	void UserConstructionScript();
	void UnlockActor(class FText Password);
	void ReceiveBeginPlay();
	void OnUseActor(class ASHPlayerCharacter* Character);
	void BndEvt__LookAtVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__LookAtVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void SetActorState(class FName StateName);
	void OnStateRestored();
	void ReceiveTick(float DeltaSeconds);
	void Server_ValidateQuestGraphs();
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void CheckQuestUpdates(class USHQuest* Quest);
	void RemoveFromQuestList(class USHQuest* Target);
	void OnCreateNewQuest(class USHQuest* Target);
	void ExecuteUbergraph_GenericQuestNPC(int32 EntryPoint, class USHQuest* K2Node_CustomEvent_Target, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FText K2Node_Event_Password, class ASHPlayerCharacter* K2Node_Event_Character_1, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FName K2Node_Event_StateName, bool K2Node_SwitchName_CmpSuccess, TArray<struct FQuestGraphDescription>& CallFunc_RollQuestGraphs_Graphs, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_Event_DeltaSeconds, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_HasAuthority_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, class USHQuest* K2Node_CustomEvent_quest, bool CallFunc_IsValid_ReturnValue, TArray<class USHQuest*>& CallFunc_GetAllQuests_ReturnValue, class USHQuest* K2Node_CustomEvent_Target_1, class USHQuest* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue);
	void OnQuestGraphsUpdated__DelegateSignature();
};

}


