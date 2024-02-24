#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x1208 - 0x112C)
// BlueprintGeneratedClass NPC_Character.NPC_Character_C
class ANPC_Character_C : public ABasePeacefulAICharacter_C
{
public:
	uint8                                        Pad_1A8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1130(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USHTradeComponent*                     SHTrade;                                           // 0x1138(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcStuff3;                                         // 0x1140(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         LookAtVolume;                                      // 0x1148(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcStuff2;                                         // 0x1150(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcShoulders;                                      // 0x1158(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcStuff;                                          // 0x1160(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcMustache;                                       // 0x1168(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHair;                                           // 0x1170(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHands;                                          // 0x1178(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcPants;                                          // 0x1180(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcBody;                                           // 0x1188(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                NpcHead;                                           // 0x1190(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GuitarAudioComponent;                              // 0x1198(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                GuitarSkeletalMesh;                                // 0x11A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class ENPC_Type                         Type;                                              // 0x11A8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayingGuitar;                                   // 0x11A9(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_1ABF[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GuitarDuration;                                    // 0x11AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GuitarRestartTimeMin;                              // 0x11B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GuitarRestartTimeMax;                              // 0x11B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GuitarStartChance;                                 // 0x11B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1AC6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ASHPlayerCharacter*                    TargetCharacter;                                   // 0x11C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFollowTarget;                                     // 0x11C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1ACD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USoundCue*>                     GuitarTracks;                                      // 0x11D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         bGuitarPlaying;                                    // 0x11E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInteractive;                                     // 0x11E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AD9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          TH_StartGuitar;                                    // 0x11E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHaveSpeakTask;                                    // 0x11F0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1AE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class USHQuest*>                      SpeakQuestList;                                    // 0x11F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ANPC_Character_C* GetDefaultObj();

	void GetSelectionInfo(class AActor* TargetActor, struct FS_Selection* Result, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FS_Selection& K2Node_MakeStruct_S_Selection, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FS_Selection& K2Node_MakeStruct_S_Selection_1);
	void IsCodeLocked(bool* Result);
	void HoldUseSupports(bool* Result);
	void CheckQuestHaveSpeakTask(class USHQuest* Quest, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, class USHQuestTask* CallFunc_Array_Get_Item, bool CallFunc_Array_RemoveItem_ReturnValue, class UGiveTrademan_C* K2Node_DynamicCast_AsGive_Trademan, bool K2Node_DynamicCast_bSuccess, class UTalkToNPC_C* K2Node_DynamicCast_AsTalk_to_NPC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsComplete_ReturnValue, bool CallFunc_IsComplete_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_1, bool CallFunc_EqualEqual_ClassClass_ReturnValue_1);
	void SetType(enum class ENPC_Type NewType, bool K2Node_SwitchEnum_CmpSuccess);
	void StartGuitarSound();
	void StopGuitarSound();
	void OnRep_IsPlayingGuitar();
	void RestartGuitar(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void StopGuitar();
	void StartGuitar(int32 TempTrackId, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class USoundCue* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, bool CallFunc_ShouldHappen_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void HideGuitar();
	void ShowGuitar();
	void SetPlayingGuitar(bool NewValue);
	void UserConstructionScript();
	void UnlockActor(class FText Password);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__LookAtVolume_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__LookAtVolume_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void OnUseActor(class ASHPlayerCharacter* Character);
	void StartGuitarTrack(int32 TrackID);
	void CheckQuestUpdates(class USHQuest* Quest);
	void RemoveFromQuestList(class USHQuest* Target);
	void OnCreateNewQuest(class USHQuest* Target);
	void OnHoldUseActor(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_NPC_Character(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText K2Node_Event_Password, float K2Node_Event_DeltaSeconds, bool CallFunc_HasAuthority_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character_1, TScriptInterface<class IBPI_CharInventory_C> K2Node_DynamicCast_AsBPI_Char_Inventory, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_TrackID, class USoundCue* CallFunc_Array_Get_Item, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, class USHQuest* K2Node_CustomEvent_quest, bool CallFunc_IsValid_ReturnValue, TArray<class USHQuest*>& CallFunc_GetAllQuests_ReturnValue, class USHQuest* K2Node_CustomEvent_Target_1, class USHQuest* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class USHQuest* K2Node_CustomEvent_Target, bool CallFunc_Greater_IntInt_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character);
};

}


