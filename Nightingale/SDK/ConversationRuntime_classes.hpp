#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD8 (0x178 - 0xA0)
// Class ConversationRuntime.ConversationHostComponent
class UConversationHostComponent : public UActorComponent
{
public:
	uint8                                        Pad_EB1[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnConversationStarted;                             // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConversationEnded;                               // 0xC8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConversationUpdated;                             // 0xD8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnConversationWaitFinished;                        // 0xE8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnNodeIdsChecked;                                  // 0xF8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FConversationState                    CurrentConversation;                               // 0x108(0x40)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_EC0[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UConversationHostComponent* GetDefaultObj();

	void StartConversation(class UDialogue* Dialog, class AActor* NpcActor);
	void Server_StartConversation(class UDialogue* Dialog, class AActor* NpcActor);
	void Server_LeaveConversation();
	void Server_EndConversation();
	void Server_CheckNodeIdMatch(int32 ClientNodeId);
	void Server_AdvanceConversation(struct FConversationAdvanceRequest& Request);
	bool GoToNextNode(bool bDoRefresh, struct FConversationView& OutConversationView);
	void ForceServerAdvanceRequest(int32 RequestBranchIndex);
	void EndConversation();
	void Client_UpdateConversation(struct FConversationPosition& Transition, bool bIsCorrection, TArray<uint8>& UpdatedValidityMask);
	void Client_LeaveConversation();
	void Client_JoinConversation(const struct FConversationState& Conversation);
	void Client_EventWaitFinished(TArray<uint8>& UpdatedValidityMask);
	void Client_CheckNodeIdMatch(bool bDoNodeIdsMatch);
	void CheckClientServerNodeIdMatch();
	bool AdvanceConversation(int32 RequestBranchIndex, bool* bIsWaiting);
};

// 0x0 (0x28 - 0x28)
// Class ConversationRuntime.ConversationHostInterface
class IConversationHostInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IConversationHostInterface* GetDefaultObj();

	void StartConversation(class UDialogue* Dialog, class AActor* NpcActor);
	void EndConversation();
	bool AdvanceConversation(int32 RequestBranchIndex, bool* bIsWaiting);
};

// 0x28 (0xC8 - 0xA0)
// Class ConversationRuntime.ConversationParticipantComponent
class UConversationParticipantComponent : public UActorComponent
{
public:
	uint8                                        Pad_F5D[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnConversationStarted;                             // 0xA8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)
	FMulticastInlineDelegateProperty_            OnConversationEnded;                               // 0xB8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UConversationParticipantComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class ConversationRuntime.ConversationParticipantInterface
class IConversationParticipantInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IConversationParticipantInterface* GetDefaultObj();

};

}


