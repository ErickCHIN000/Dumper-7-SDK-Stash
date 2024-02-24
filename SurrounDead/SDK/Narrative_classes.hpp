#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2D8 (0x300 - 0x28)
// Class Narrative.Dialogue
class UDialogue : public UObject
{
public:
	TArray<struct FSpeakerInfo>                  Speakers;                                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC7[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPlayerSpeakerInfo                    PlayerSpeakerInfo;                                 // 0x40(0xA0)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FPlayerSpeakerInfo>            PartySpeakerInfo;                                  // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bFreeMovement;                                     // 0xF0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanBeExited;                                      // 0xF1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoRotateSpeakers;                               // 0xF2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoStopMovement;                                 // 0xF3(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DefaultHeadBoneName;                               // 0xF4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueBlendOutTime;                              // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UCameraShakeBase>          DialogueCameraShake;                               // 0x100(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeDialogueSequence*            DefaultDialogueShot;                               // 0x108(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeComponent*                   OwningComp;                                        // 0x110(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OwningPawn;                                        // 0x118(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningController;                                  // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDialogueNode_NPC*                     RootDialogue;                                      // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_NPC*>             NPCReplies;                                        // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_Player*>          PlayerReplies;                                     // 0x140(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_NPC*>             NPCReplyChain;                                     // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_Player*>          AvailableResponses;                                // 0x160(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogueNode*                         CurrentNode;                                       // 0x170(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DDA[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSpeakerInfo                          CurrentSpeaker;                                    // 0x180(0x90)(BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class AActor*                                CurrentSpeakerAvatar;                              // 0x210(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class AActor*                                CurrentListenerAvatar;                             // 0x218(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerState*                          CurrentPartySpeakerAvatar;                         // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDialogueLine                         CurrentLine;                                       // 0x228(0x40)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   DialogueSequencePlayer;                            // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNarrativeDialogueSequence*            CurrentDialogueSequence;                           // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAnimMontage*                          DialogueSpeakerMontage;                            // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UAudioComponent*                       DialogueAudio;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TMap<class FName, class AActor*>             SpeakerAvatars;                                    // 0x288(0x50)(Protected, NativeAccessSpecifierProtected)
	class AActor*                                OldViewTarget;                                     // 0x2D8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          TimerHandle_NPCReplyFinished;                      // 0x2E0(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FTimerHandle                          TimerHandle_PlayerReplyFinished;                   // 0x2E8(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_DE9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogue* GetDefaultObj();

	void TickDialogue(float DeltaTime);
	void StopDialogueSequence();
	void StopDialogueAnimation();
	bool SkipCurrentLine();
	void PlayPlayerDialogue(class UDialogueNode_Player* PlayerReply, struct FDialogueLine& Line);
	void PlayNPCDialogue(class UDialogueNode_NPC* NPCReply, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker);
	void PlayNextNPCReply();
	void PlayDialogueSound(struct FDialogueLine& Line, class AActor* Speaker, class AActor* Listener);
	void PlayDialogueSequence(class UNarrativeDialogueSequence* Sequence, class AActor* Speaker, class AActor* Listener);
	void PlayDialogueNode(class UDialogueNode* Node, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker, class AActor* SpeakerActor, class AActor* ListenerActor);
	void PlayDialogueAnimation(class UDialogueNode* Node, struct FDialogueLine& Line, class AActor* Speaker, class AActor* Listener);
	void OnPlayerDialogueLineStarted(class UDialogueNode_Player* Node, struct FDialogueLine& DialogueLine);
	void OnPlayerDialogueLineFinished(class UDialogueNode_Player* Node, struct FDialogueLine& DialogueLine);
	void OnNPCDialogueLineStarted(class UDialogueNode_NPC* Node, struct FDialogueLine& DialogueLine, struct FSpeakerInfo& Speaker);
	void OnNPCDialogueLineFinished(class UDialogueNode_NPC* Node, struct FDialogueLine& DialogueLine, struct FSpeakerInfo& Speaker);
	class AActor* LinkSpeakerAvatar(struct FSpeakerInfo& Info);
	void K2_OnEndDialogue();
	void K2_OnBeginDialogue();
	bool IsPartyDialogue();
	class FString GetStringVariable(class UDialogueNode* Node, struct FDialogueLine& Line, const class FString& VariableName);
	struct FVector GetSpeakerHeadLocation(class AActor* Actor);
	class AActor* GetPlayerAvatar();
	TArray<class UDialogueNode*> GetNodes();
	float GetLineDuration(class UDialogueNode* Node, struct FDialogueLine& Line);
	struct FVector GetConversationCenterPoint();
	class AActor* GetAvatar(class FName& SpeakerID);
	void FinishPlayerDialogue();
	void FinishNPCDialogue();
	void FinishDialogueNode(class UDialogueNode* Node, struct FDialogueLine& Line, struct FSpeakerInfo& Speaker, class AActor* SpeakerActor, class AActor* ListenerActor);
	void EndCurrentLine();
	void DestroySpeakerAvatar(struct FSpeakerInfo& Info, class AActor* SpeakerAvatar);
	bool CanSkipCurrentLine();
	void BlendingOutFinished();
};

// 0x8 (0x38 - 0x30)
// Class Narrative.DialogueAsset
class UDialogueAsset : public UDataAsset
{
public:
	class UDialogue*                             Dialogue;                                          // 0x30(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogueAsset* GetDefaultObj();

};

// 0x8 (0x370 - 0x368)
// Class Narrative.DialogueBlueprintGeneratedClass
class UDialogueBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UDialogue*                             DialogueTemplate;                                  // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDialogueBlueprintGeneratedClass* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Narrative.NarrativeNodeBase
class UNarrativeNodeBase : public UObject
{
public:
	struct FVector2D                             NodePos;                                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNarrativeCondition*>           Conditions;                                        // 0x38(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UNarrativeEvent*>               Events;                                            // 0x48(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x58(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNarrativeNodeBase* GetDefaultObj();

	void ProcessEvents(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent, enum class EEventRuntime Runtime);
	bool AreConditionsMet(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent);
};

// 0xE8 (0x148 - 0x60)
// Class Narrative.DialogueNode
class UDialogueNode : public UNarrativeNodeBase
{
public:
	struct FDialogueLine                         Line;                                              // 0x60(0x40)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FDialogueLine>                 AlternativeLines;                                  // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueFinished;                                // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FDialogueLine                         PlayedLine;                                        // 0xC0(0x40)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_NPC*>             NPCReplies;                                        // 0x100(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UDialogueNode_Player*>          PlayerReplies;                                     // 0x110(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UDialogue*                             OwningDialogue;                                    // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeComponent*                   OwningComponent;                                   // 0x128(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnPlayNodeFuncName;                                // 0x130(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DirectedAtSpeakerID;                               // 0x138(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSkippable;                                      // 0x140(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E65[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNode* GetDefaultObj();

};

// 0x10 (0x158 - 0x148)
// Class Narrative.DialogueNode_NPC
class UDialogueNode_NPC : public UDialogueNode
{
public:
	class FName                                  SpeakerID;                                         // 0x148(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNarrativeDialogueSequence*            SelectingReplyShot;                                // 0x150(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UDialogueNode_NPC* GetDefaultObj();

};

// 0x20 (0x168 - 0x148)
// Class Narrative.DialogueNode_Player
class UDialogueNode_Player : public UDialogueNode
{
public:
	class FText                                  OptionText;                                        // 0x148(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoSelect;                                       // 0x160(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_E7C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDialogueNode_Player* GetDefaultObj();

	class FText GetOptionText(class UDialogue* InDialogue);
};

// 0x210 (0x2B0 - 0xA0)
// Class Narrative.NarrativeComponent
class UNarrativeComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnNarrativeDataTaskCompleted;                      // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestBranchCompleted;                            // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestNewState;                                   // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestTaskProgressChanged;                        // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestTaskCompleted;                              // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestSucceeded;                                  // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestFailed;                                     // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestStarted;                                    // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestForgotten;                                  // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnQuestRestarted;                                  // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeginSave;                                       // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnSaveComplete;                                    // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeginLoad;                                       // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLoadComplete;                                    // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnJoinedParty;                                     // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnLeaveParty;                                      // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueBegan;                                   // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueFinished;                                // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueOptionSelected;                          // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnDialogueRepliesAvailable;                        // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNPCDialogueLineStarted;                          // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNPCDialogueLineFinished;                         // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerDialogueLineStarted;                       // 0x200(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnPlayerDialogueLineFinished;                      // 0x210(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<struct FNarrativeUpdate>              PendingUpdateList;                                 // 0x220(0x10)(Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic)
	TArray<class UQuest*>                        QuestList;                                         // 0x230(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	class UDialogue*                             CurrentDialogue;                                   // 0x240(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   MasterTaskList;                                    // 0x248(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_11A2[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNarrativePartyComponent*              PartyComponent;                                    // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerController*                     OwnerPC;                                           // 0x2A8(0x8)(ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNarrativeComponent* GetDefaultObj();

	bool TrySkipCurrentDialogueLine();
	void TrySelectDialogueOption(class UDialogueNode_Player* Option);
	void TryExitDialogue();
	void ServerTrySkipCurrentDialogueLine();
	void ServerTryExitDialogue();
	void ServerSelectDialogueOption(class FName& OptionID);
	void SaveComplete(const class FString& SaveName);
	bool Save(const class FString& SaveName, int32 Slot);
	bool RestartQuest(TSubclassOf<class UQuest> QuestClass, class FName StartFromID);
	void QuestTaskProgressMade(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Branch, int32 OldProgress, int32 NewProgress);
	void QuestTaskCompleted(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Branch);
	void QuestSucceeded(class UQuest* Quest, class FText& QuestSucceededMessage);
	void QuestStarted(class UQuest* Quest);
	void QuestNewState(class UQuest* Quest, class UQuestState* NewState);
	void QuestForgotten(class UQuest* Quest);
	void QuestFailed(class UQuest* Quest, class FText& QuestFailedMessage);
	void QuestBranchCompleted(class UQuest* Quest, class UQuestBranch* Branch);
	void OnRep_PendingUpdateList();
	void OnRep_PartyComponent(class UNarrativePartyComponent* OldPartyComponent);
	void NarrativeDataTaskCompleted(class UNarrativeDataTask* NarrativeTask, const class FString& Name);
	void LoadComplete(const class FString& SaveName);
	bool Load(const class FString& SaveName, int32 Slot);
	bool IsQuestSucceeded(TSubclassOf<class UQuest> QuestClass);
	bool IsQuestStartedOrFinished(TSubclassOf<class UQuest> QuestClass);
	bool IsQuestInProgress(TSubclassOf<class UQuest> QuestClass);
	bool IsQuestFinished(TSubclassOf<class UQuest> QuestClass);
	bool IsQuestFailed(TSubclassOf<class UQuest> QuestClass);
	bool IsInDialogue();
	bool HasDialogueAvailable(TSubclassOf<class UDialogue> Dialogue, class FName StartFromID);
	bool HasCompletedTaskInQuest(TSubclassOf<class UQuest> QuestClass, class UNarrativeDataTask* Task, const class FString& Name);
	bool HasCompletedTask(class UNarrativeDataTask* Task, const class FString& Name, int32 Quantity);
	TArray<class UQuest*> GetSucceededQuests();
	class UQuest* GetQuestInstance(TSubclassOf<class UQuest> QuestClass);
	class UNarrativePartyComponent* GetParty();
	class APawn* GetOwningPawn();
	class APlayerController* GetOwningController();
	int32 GetNumberOfTimesTaskWasCompleted(class UNarrativeDataTask* Task, const class FString& Name);
	TArray<class UQuest*> GetInProgressQuests();
	TArray<class UQuest*> GetFailedQuests();
	class UDialogue* GetCurrentDialogue();
	TArray<class UQuest*> GetAllQuests();
	bool ForgetQuest(TSubclassOf<class UQuest> QuestClass);
	void DialogueRepliesAvailable(class UDialogue* Dialogue, TArray<class UDialogueNode_Player*>& PlayerReplies);
	void DialogueLineStarted(class UDialogue* Dialogue, class UDialogueNode* Node, struct FDialogueLine& DialogueLine);
	void DialogueLineFinished(class UDialogue* Dialogue, class UDialogueNode* Node, struct FDialogueLine& DialogueLine);
	void DialogueFinished(class UDialogue* Dialogue);
	void DialogueBegan(class UDialogue* Dialogue);
	bool DeleteSave(const class FString& SaveName, int32 Slot);
	void ClientSelectDialogueOption(class FName& OptionID, class APlayerState* Selector);
	void ClientRecieveDialogueChunk(TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs);
	void ClientReceiveSave(TArray<struct FNarrativeSavedQuest>& SavedQuests, TArray<class FString>& Tasks, TArray<int32>& Quantities);
	void ClientExitPartyDialogue();
	void ClientExitDialogue();
	void ClientBeginPartyDialogue(TSubclassOf<class UDialogue> Dialogue, TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs);
	void ClientBeginDialogue(TSubclassOf<class UDialogue> Dialogue, TArray<class FName>& NPCReplyChainIDs, TArray<class FName>& AvailableResponseIDs);
	void BeginSave(const class FString& SaveName);
	class UQuest* BeginQuest(TSubclassOf<class UQuest> QuestClass, class FName StartFromID);
	void BeginLoad(const class FString& SaveName);
	bool BeginDialogue(TSubclassOf<class UDialogue> Dialogue, class FName StartFromID);
};

// 0x8 (0x30 - 0x28)
// Class Narrative.NarrativeCondition
class UNarrativeCondition : public UObject
{
public:
	bool                                         bNOT;                                              // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPartyConditionPolicy             PartyConditionPolicy;                              // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNarrativeCondition* GetDefaultObj();

	class FString GetGraphDisplayText();
	bool CheckCondition(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent);
};

// 0x58 (0x88 - 0x30)
// Class Narrative.NarrativeDataTask
class UNarrativeDataTask : public UDataAsset
{
public:
	class FString                                TaskName;                                          // 0x30(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  TaskDescription;                                   // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	class FString                                ArgumentName;                                      // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TaskCategory;                                      // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DefaultArgument;                                   // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNarrativeDataTask* GetDefaultObj();

};

// 0x0 (0xA20 - 0xA20)
// Class Narrative.NarrativeDefaultCinecam
class ANarrativeDefaultCinecam : public ACineCameraActor
{
public:

	static class UClass* StaticClass();
	static class ANarrativeDefaultCinecam* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class Narrative.NarrativeDialogueSequence
class UNarrativeDialogueSequence : public UObject
{
public:
	class FText                                  FriendlyShotName;                                  // 0x28(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	TArray<class ULevelSequence*>                SequenceAssets;                                    // 0x40(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x50(0x20)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FPlateCropSettings                    CropSettings;                                      // 0x70(0x4)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        bShouldRestart : 1;                                // Mask: 0x1, PropSize: 0x10x74(0x1)(Edit, BlueprintVisible, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_64 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1305[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EAnchorOriginRule                 AnchorOriginRule;                                  // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1307[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               AnchorOriginNudge;                                 // 0x80(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAnchorRotationRule               AnchorRotationRule;                                // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1315[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  AnchorAvatarCustomID;                              // 0x9C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUse180DegreeRule;                                 // 0xA4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_131B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        UnitsY180DegreeRule;                               // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DegreesYaw180DegreeRule;                           // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FShotTrackingSettings                 LookatTrackingSettings;                            // 0xB0(0x30)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FShotTrackingSettings                 FocusTrackingSettings;                             // 0xE0(0x30)(Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bDrawDebugFocusPoint;                              // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1334[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class AActor>                 Speaker;                                           // 0x114(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 Listener;                                          // 0x11C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 AnchorActor;                                       // 0x124(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 LookAtActor;                                       // 0x12C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class AActor>                 FocusActor;                                        // 0x134(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ALevelSequenceActor>    SequenceActor;                                     // 0x13C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class ACineCameraActor>       Cinecam;                                           // 0x144(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UDialogue>              Dialogue;                                          // 0x14C(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1352[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNarrativeDialogueSequence* GetDefaultObj();

	void PlaySequence();
	struct FTransform GetShotAnchorTransform();
	class FText GetGraphDisplayText();
};

// 0x20 (0x48 - 0x28)
// Class Narrative.NarrativeDialogueSettings
class UNarrativeDialogueSettings : public UObject
{
public:
	float                                        DialogueLineAudioSilence;                          // 0x28(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinDialogueTextDisplayTime;                        // 0x2C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LettersPerSecondLineDuration;                      // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoSelectSingleResponse;                         // 0x34(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVerticalWiring;                             // 0x35(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_138B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FLinearColor>                  SpeakerColors;                                     // 0x38(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNarrativeDialogueSettings* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Narrative.NarrativeEvent
class UNarrativeEvent : public UObject
{
public:
	enum class EEventRuntime                     EventRuntime;                                      // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13F1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EPartyEventPolicy                 PartyEventPolicy;                                  // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNarrativeEvent* GetDefaultObj();

	class FString GetGraphDisplayText();
	bool ExecuteEvent(class APawn* Pawn, class APlayerController* Controller, class UNarrativeComponent* NarrativeComponent);
};

// 0x0 (0x28 - 0x28)
// Class Narrative.NarrativeFunctionLibrary
class UNarrativeFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNarrativeFunctionLibrary* GetDefaultObj();

	class FString MakeDisplayString(const class FString& String);
	class UNarrativeDataTask* GetTaskByName(class UObject* WorldContextObject, const class FString& EventName);
	class UNarrativeComponent* GetNarrativeComponentFromTarget(class AActor* Target);
	class UNarrativeComponent* GetNarrativeComponent(class UObject* WorldContextObject);
	bool CompleteNarrativeDataTask(class UNarrativeComponent* Target, class UNarrativeDataTask* Task, const class FString& Argument, int32 Quantity);
	bool CompleteLooseNarrativeDataTask(class UNarrativeComponent* Target, const class FString& Argument, int32 Quantity);
};

// 0x28 (0x2D8 - 0x2B0)
// Class Narrative.NarrativePartyComponent
class UNarrativePartyComponent : public UNarrativeComponent
{
public:
	enum class EPartyDialogueControlPolicy       PartyDialogueControlPolicy;                        // 0x2B0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1635[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UNarrativeComponent*>           PartyMembers;                                      // 0x2B8(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	TArray<class APlayerState*>                  PartyMemberStates;                                 // 0x2C8(0x10)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNarrativePartyComponent* GetDefaultObj();

	bool RemovePartyMember(class UNarrativeComponent* Member);
	bool IsPartyLeader(class APlayerState* Member);
	TArray<class APlayerState*> GetPartyMemberStates();
	TArray<class UNarrativeComponent*> GetPartyMembers();
	class UNarrativeComponent* GetPartyLeader();
	bool AddPartyMember(class UNarrativeComponent* Member);
};

// 0x8 (0x30 - 0x28)
// Class Narrative.NarrativeQuestSettings
class UNarrativeQuestSettings : public UObject
{
public:
	bool                                         bResetTasksWhenCompleted;                          // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNarrativeQuestSettings* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Narrative.NarrativeSaveGame
class UNarrativeSaveGame : public USaveGame
{
public:
	TArray<struct FNarrativeSavedQuest>          SavedQuests;                                       // 0x28(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   MasterTaskList;                                    // 0x38(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNarrativeSaveGame* GetDefaultObj();

};

// 0x50 (0x80 - 0x30)
// Class Narrative.NarrativeTaskManager
class UNarrativeTaskManager : public UGameInstanceSubsystem
{
public:
	TMap<class FString, class UNarrativeDataTask*> NarrativeTaskMap;                                  // 0x30(0x50)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNarrativeTaskManager* GetDefaultObj();

};

// 0x150 (0x178 - 0x28)
// Class Narrative.Quest
class UQuest : public UObject
{
public:
	class UQuestState*                           CurrentState;                                      // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FText                                  QuestName;                                         // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  QuestDescription;                                  // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bSaveQuest;                                        // 0x60(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18CD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestState*                           QuestStartState;                                   // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UQuestState*>                   InheritableStates;                                 // 0x70(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UQuestState*>                   States;                                            // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UQuestBranch*>                  Branches;                                          // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class UQuestBranch*                          PreviousBranch;                                    // 0xA0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EQuestCompletion                  QuestCompletion;                                   // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_18DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        QuestActivities;                                   // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UQuestState*>                   ReachedStates;                                     // 0xC0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class UNarrativeComponent*                   OwningComp;                                        // 0xD0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OwningPawn;                                        // 0xD8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     OwningController;                                  // 0xE0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            QuestBranchCompleted;                              // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestNewState;                                     // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestTaskProgressChanged;                          // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestTaskCompleted;                                // 0x118(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestSucceeded;                                    // 0x128(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestFailed;                                       // 0x138(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestStarted;                                      // 0x148(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestForgotten;                                    // 0x158(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            QuestRestarted;                                    // 0x168(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UQuest* GetDefaultObj();

	void TakeBranch(class UQuestBranch* Branch);
	void SucceedQuest(class FText QuestSucceededMessage);
	void OnQuestTaskProgressChanged(class UNarrativeTask* Task, class UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress);
	void OnQuestTaskCompleted(class UNarrativeTask* Task, class UQuestBranch* Branch);
	void OnQuestBranchCompleted(class UQuestBranch* Branch);
	class UQuestState* GetState(class FName ID);
	class FText GetQuestName();
	class FText GetQuestDescription();
	enum class EQuestCompletion GetQuestCompletion();
	class APawn* GetPawnOwner();
	class UNarrativeComponent* GetOwningNarrativeComponent();
	TArray<class UQuestNode*> GetNodes();
	TArray<class APlayerController*> GetGroupMembers();
	class UQuestBranch* GetBranch(class FName ID);
	void FailQuest(class FText QuestFailedMessage);
	void EnterState(class UQuestState* NewState);
	void BPOnQuestTaskProgressChanged(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Step, int32 CurrentProgress, int32 RequiredProgress);
	void BPOnQuestTaskCompleted(class UQuest* Quest, class UNarrativeTask* Task, class UQuestBranch* Step);
	void BPOnQuestSucceeded(class UQuest* Quest, class FText& QuestSucceededMessage);
	void BPOnQuestStarted(class UQuest* Quest);
	void BPOnQuestNewState(class UQuest* Quest, class UQuestState* NewState);
	void BPOnQuestFailed(class UQuest* Quest, class FText& QuestFailedMessage);
	void BPOnQuestBranchCompleted(class UQuest* Quest, class UQuestBranch* Branch);
};

// 0x8 (0x370 - 0x368)
// Class Narrative.QuestBlueprintGeneratedClass
class UQuestBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	class UQuest*                                QuestTemplate;                                     // 0x368(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UQuestBlueprintGeneratedClass* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class Narrative.QuestNode
class UQuestNode : public UNarrativeNodeBase
{
public:
	class FText                                  Description;                                       // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FDateTime                             LastExecTime;                                      // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OnEnteredFuncName;                                 // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuest*                                OwningQuest;                                       // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestNode* GetDefaultObj();

};

// 0x18 (0xA8 - 0x90)
// Class Narrative.QuestState
class UQuestState : public UQuestNode
{
public:
	TArray<class UQuestBranch*>                  Branches;                                          // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EStateNodeType                    StateNodeType;                                     // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1965[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UQuestState* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class Narrative.QuestBranch
class UQuestBranch : public UQuestNode
{
public:
	TArray<class UNarrativeTask*>                QuestTasks;                                        // 0x90(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0xA0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1971[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestState*                           DestinationState;                                  // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UQuestBranch* GetDefaultObj();

};

// 0x60 (0x88 - 0x28)
// Class Narrative.NarrativeTask
class UNarrativeTask : public UObject
{
public:
	int32                                        RequiredQuantity;                                  // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A2D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DescriptionOverride;                               // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bOptional;                                         // 0x48(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x49(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A33[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        TickInterval;                                      // 0x4C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CurrentProgress;                                   // 0x50(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A3B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNarrativeComponent*                   OwningComp;                                        // 0x58(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APawn*                                 OwningPawn;                                        // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class APlayerController*                     OwningController;                                  // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UQuest*                                OwningQuest;                                       // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1A42[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UNarrativeTask* GetDefaultObj();

	void TickTask();
	void SetProgress(int32 NewProgress);
	void K2_OnTaskCompleted();
	void K2_EndTask();
	void K2_BeginTask();
	bool IsComplete();
	class FText GetTaskProgressText();
	class FText GetTaskNodeDescription();
	class FText GetTaskDescription();
	class UQuestBranch* GetOwningBranch();
	void CompleteTask();
	void AddProgress(int32 ProgressToAdd);
};

}


