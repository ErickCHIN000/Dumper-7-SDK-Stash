#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.StartConversation
struct UConversationHostComponent_StartConversation_Params
{
public:
	class UDialogue*                             Dialog;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NpcActor;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Server_StartConversation
struct UConversationHostComponent_Server_StartConversation_Params
{
public:
	class UDialogue*                             Dialog;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NpcActor;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Server_CheckNodeIdMatch
struct UConversationHostComponent_Server_CheckNodeIdMatch_Params
{
public:
	int32                                        ClientNodeId;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Server_AdvanceConversation
struct UConversationHostComponent_Server_AdvanceConversation_Params
{
public:
	struct FConversationAdvanceRequest           Request;                                           // 0x0(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.GoToNextNode
struct UConversationHostComponent_GoToNextNode_Params
{
public:
	bool                                         bDoRefresh;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConversationView                     OutConversationView;                               // 0x8(0x38)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x40(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF1[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.ForceServerAdvanceRequest
struct UConversationHostComponent_ForceServerAdvanceRequest_Params
{
public:
	int32                                        RequestBranchIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Client_UpdateConversation
struct UConversationHostComponent_Client_UpdateConversation_Params
{
public:
	struct FConversationPosition                 Transition;                                        // 0x0(0x8)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bIsCorrection;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E48[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                UpdatedValidityMask;                               // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Client_JoinConversation
struct UConversationHostComponent_Client_JoinConversation_Params
{
public:
	struct FConversationState                    Conversation;                                      // 0x0(0x40)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Client_EventWaitFinished
struct UConversationHostComponent_Client_EventWaitFinished_Params
{
public:
	TArray<uint8>                                UpdatedValidityMask;                               // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.Client_CheckNodeIdMatch
struct UConversationHostComponent_Client_CheckNodeIdMatch_Params
{
public:
	bool                                         bDoNodeIdsMatch;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConversationRuntime.ConversationHostComponent.AdvanceConversation
struct UConversationHostComponent_AdvanceConversation_Params
{
public:
	int32                                        RequestBranchIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWaiting;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA6[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function ConversationRuntime.ConversationHostInterface.StartConversation
struct IConversationHostInterface_StartConversation_Params
{
public:
	class UDialogue*                             Dialog;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                NpcActor;                                          // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ConversationRuntime.ConversationHostInterface.AdvanceConversation
struct IConversationHostInterface_AdvanceConversation_Params
{
public:
	int32                                        RequestBranchIndex;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsWaiting;                                        // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F30[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

}
}


