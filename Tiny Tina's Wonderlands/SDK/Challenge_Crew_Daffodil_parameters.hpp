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

// 0x490 (0x490 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.PlayActivationAudio
struct UChallenge_Crew_Daffodil_C_PlayActivationAudio_Params
{
public:
	class AActor*                                OwningActor;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        DialogContext;                                     // 0x8(0x218)(Edit, BlueprintVisible)
	class AOakPlayerController*                  K2Node_DynamicCast_AsOak_Player_Controller;        // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowTutorialPopup_NewParam;               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_GetStatValue_ReturnValue;                 // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeak_Conversation;                 // 0x244(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishSpeak_SequenceID;                   // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishSpeak_ReturnValue;                  // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_17FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeak_Conversation1;                // 0x258(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishSpeak_SequenceID1;                  // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishSpeak_ReturnValue1;                 // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1806[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDialogContext                        K2Node_MakeStruct_DialogContext;                   // 0x278(0x218)(None)
};

// 0x78 (0x78 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.ShowTutorialPopup
struct UChallenge_Crew_Daffodil_C_ShowTutorialPopup_Params
{
public:
	class UGameInstance*                         GameInstance;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakPlayerController*                  TargetPlayer;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NewParam;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1865[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpecialMessageDataAsset*              Temp_object_Variable;                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         CallFunc_GetAssociatedPrimaryCharacter_ReturnValue; // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetAssociatedVehicle_ReturnValue;         // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable1;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable2;                             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable3;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable4;                             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable5;                             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable6;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USpecialMessageDataAsset*              Temp_object_Variable7;                             // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_CrewChallengeType_Daffodil   Temp_byte_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_187F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USpecialMessageDataAsset*              K2Node_Select_Default;                             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x265 (0x265 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.PlayCompletionAudio
struct UChallenge_Crew_Daffodil_C_PlayCompletionAudio_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayedAudio;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18BB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UChallengesComponent*                  CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsChallengeComplete_ReturnValue;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogContext                        K2Node_MakeStruct_DialogContext;                   // 0x28(0x218)(None)
	struct FDialogConversation                   CallFunc_FinishSpeak_Conversation;                 // 0x240(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishSpeak_SequenceID;                   // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishSpeak_ReturnValue;                  // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_18C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDialogConversation                   CallFunc_FinishSpeak_Conversation1;                // 0x254(0xC)(NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FinishSpeak_SequenceID1;                  // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinishSpeak_ReturnValue1;                 // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.OnInitChallengeInstance
struct UChallenge_Crew_Daffodil_C_OnInitChallengeInstance_Params
{
public:
	class UChallengesComponent*                  OwningChallenges;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         AssociatedCharacter;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.CompletedChallenge
struct UChallenge_Crew_Daffodil_C_CompletedChallenge_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function Challenge_Crew_Daffodil.Challenge_Crew_Daffodil_C.ExecuteUbergraph_Challenge_Crew_Daffodil
struct UChallenge_Crew_Daffodil_C_ExecuteUbergraph_Challenge_Crew_Daffodil_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1930[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UChallengesComponent*                  K2Node_Event_OwningChallenges;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGbxCharacter*                         K2Node_Event_AssociatedCharacter;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1939[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AGbxPlayerController*                  K2Node_Event_CompletedPlayer;                      // 0x28(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_PlayCompletionAudio_PlayedAudio;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


