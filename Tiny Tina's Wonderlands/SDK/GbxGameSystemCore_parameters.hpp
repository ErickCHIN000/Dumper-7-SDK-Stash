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
// Function GbxGameSystemCore.GbxAction.OnServerEnd
struct UGbxAction_OnServerEnd_Params
{
public:
	enum class EGbxActionEndState                ActionEndState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_535[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction.OnServerBegin
struct UGbxAction_OnServerBegin_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAction.OnEnd
struct UGbxAction_OnEnd_Params
{
public:
	enum class EGbxActionEndState                ActionEndState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction.OnBegin
struct UGbxAction_OnBegin_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetVectorRegisterValue
struct UGbxAction_K2_GetVectorRegisterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutVector;                                         // 0x8(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_561[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetTimeRemaining
struct UGbxAction_K2_GetTimeRemaining_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetObjectRegisterValue
struct UGbxAction_K2_GetObjectRegisterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OutObject;                                         // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57B[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetNameRegisterValue
struct UGbxAction_K2_GetNameRegisterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OutName;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetMaxCurrentTime
struct UGbxAction_K2_GetMaxCurrentTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetIntRegisterValue
struct UGbxAction_K2_GetIntRegisterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutInt;                                            // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58D[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetFloatRegisterValue
struct UGbxAction_K2_GetFloatRegisterValue_Params
{
public:
	class FName                                  InName;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutFloat;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_598[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetCurrentTime
struct UGbxAction_K2_GetCurrentTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetCurrentNormalizedTime
struct UGbxAction_K2_GetCurrentNormalizedTime_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction.K2_GetActor
struct UGbxAction_K2_GetActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.OnAnimEnd
struct UGbxAction_SimpleAnim_OnAnimEnd_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetTickAndRefreshBones
struct UGbxAction_SimpleAnim_K2_SetTickAndRefreshBones_Params
{
public:
	bool                                         bLockResource;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetPhysNoneWithRootMotion
struct UGbxAction_SimpleAnim_K2_SetPhysNoneWithRootMotion_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetMovement
struct UGbxAction_SimpleAnim_K2_SetMovement_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetLook
struct UGbxAction_SimpleAnim_K2_SetLook_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHitReactions
struct UGbxAction_SimpleAnim_K2_SetHitReactions_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLookLocked
struct UGbxAction_SimpleAnim_K2_SetHeadLookLocked_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetHeadLook
struct UGbxAction_SimpleAnim_K2_SetHeadLook_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetCollision
struct UGbxAction_SimpleAnim_K2_SetCollision_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAvoidance
struct UGbxAction_SimpleAnim_K2_SetAvoidance_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAIThinking
struct UGbxAction_SimpleAnim_K2_SetAIThinking_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_SimpleAnim.K2_SetAimRotation
struct UGbxAction_SimpleAnim_K2_SetAimRotation_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.PreviewComponent.OnBlueprintCompiled
struct UPreviewComponent_OnBlueprintCompiled_Params
{
public:
	class Ublueprint*                            BP;                                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetMantlingBlocked
struct UGbxAction_Anim_K2_SetMantlingBlocked_Params
{
public:
	bool                                         bBlocked;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetLaddersBlocked
struct UGbxAction_Anim_K2_SetLaddersBlocked_Params
{
public:
	bool                                         bBlocked;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetGodMode
struct UGbxAction_Anim_K2_SetGodMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetFootIK
struct UGbxAction_Anim_K2_SetFootIK_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetDemigodMode
struct UGbxAction_Anim_K2_SetDemigodMode_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAction_Anim.K2_SetCrouchBlocked
struct UGbxAction_Anim_K2_SetCrouchBlocked_Params
{
public:
	bool                                         bBlocked;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TeamComponent.SetTeamCollision
struct UTeamComponent_SetTeamCollision_Params
{
public:
	bool                                         bOn;                                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TeamComponent.SetTeam
struct UTeamComponent_SetTeam_Params
{
public:
	class UTeam*                                 NewTeam;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TeamComponent.SetSourceTeamComponent
struct UTeamComponent_SetSourceTeamComponent_Params
{
public:
	class UTeamComponent*                        NewSourceTeamComponent;                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TeamComponent.SetCollidesWithTeam
struct UTeamComponent_SetCollidesWithTeam_Params
{
public:
	bool                                         bCollidesWithTeam;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TeamComponent.OnRep_Team
struct UTeamComponent_OnRep_Team_Params
{
public:
	class UTeam*                                 OldTeam;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TeamComponent.IsNeutral
struct UTeamComponent_IsNeutral_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_721[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TeamComponent.IsHostile
struct UTeamComponent_IsHostile_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_729[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TeamComponent.IsFriendly
struct UTeamComponent_IsFriendly_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_736[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TeamComponent.InitializeTeam
struct UTeamComponent_InitializeTeam_Params
{
public:
	class UTeam*                                 NewTeam;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TeamComponent.GetTeamCollisionChannel
struct UTeamComponent_GetTeamCollisionChannel_Params
{
public:
	enum class ETeamCollisionChannel             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsTeam
struct UTeamComponent_GetTeamAttitudeTowardsTeam_Params
{
public:
	class UTeam*                                 OtherTeam;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_755[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TeamComponent.GetTeamAttitudeTowardsActor
struct UTeamComponent_GetTeamAttitudeTowardsActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_764[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.SetTeam
struct AGbxCharacter_SetTeam_Params
{
public:
	class UTeam*                                 Team;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.SetPlayerMaster
struct AGbxCharacter_SetPlayerMaster_Params
{
public:
	class AGbxCharacter*                         NewPlayerMaster;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.SetCharacterUIName
struct AGbxCharacter_SetCharacterUIName_Params
{
public:
	class UGbxUIName*                            NewCharacterUIName;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.SetCharacterNameFromString
struct AGbxCharacter_SetCharacterNameFromString_Params
{
public:
	class FString                                NewCharacterName;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.SetCharacterName
struct AGbxCharacter_SetCharacterName_Params
{
public:
	class FText                                  NewCharacterName;                                  // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.RotateCharacterTo
struct AGbxCharacter_RotateCharacterTo_Params
{
public:
	struct FRotator                              TargetRotation;                                    // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7C2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.ReceiveOwnerPlayerControllerChanged
struct AGbxCharacter_ReceiveOwnerPlayerControllerChanged_Params
{
public:
	class AGbxPlayerController*                  NewPlayerControllerOwner;                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.OnLandingDataTriggered
struct AGbxCharacter_OnLandingDataTriggered_Params
{
public:
	struct FLandingInfo                          LandingInfo;                                       // 0x0(0x28)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.NetMulticast_TriggerHitReactionSound
struct AGbxCharacter_NetMulticast_TriggerHitReactionSound_Params
{
public:
	class UCharacterSoundTag*                    Tag;                                               // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.NetMulticast_PlayLanded
struct AGbxCharacter_NetMulticast_PlayLanded_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0x90)(ConstParm, Parm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ImpactSpeed;                                       // 0x90(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLandFromJump;                                     // 0x94(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_802[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ULandingData*                          LandingDataOverride;                               // 0x98(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.IsZoomed
struct AGbxCharacter_IsZoomed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetTeamComponent
struct AGbxCharacter_GetTeamComponent_Params
{
public:
	class UTeamComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetTeam
struct AGbxCharacter_GetTeam_Params
{
public:
	class UTeam*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetTargetingComponent
struct AGbxCharacter_GetTargetingComponent_Params
{
public:
	class UTargetingComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetTargetableComponent
struct AGbxCharacter_GetTargetableComponent_Params
{
public:
	class UTargetableComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetPerceptionComponent
struct AGbxCharacter_GetPerceptionComponent_Params
{
public:
	class UGbxPerceptionComponent*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachStatus
struct AGbxCharacter_GetPawnAttachStatus_Params
{
public:
	enum class EPawnAttachStatus                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachComponent
struct AGbxCharacter_GetPawnAttachComponent_Params
{
public:
	class UPawnAttachSlotComponent*              ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetPawnAttachActor
struct AGbxCharacter_GetPawnAttachActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetLookAtLocation
struct AGbxCharacter_GetLookAtLocation_Params
{
public:
	float                                        OutWeight;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetLookAt
struct AGbxCharacter_GetLookAt_Params
{
public:
	struct FVector                               HeadLocation;                                      // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EyeLocation;                                       // 0xC(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeadWeight;                                        // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonMesh
struct AGbxCharacter_GetFirstPersonMesh_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetFirstPersonComponent
struct AGbxCharacter_GetFirstPersonComponent_Params
{
public:
	class UFirstPersonComponent*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetBlackboardComponent
struct AGbxCharacter_GetBlackboardComponent_Params
{
public:
	class UBlackboardComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetBlackboardAsset
struct AGbxCharacter_GetBlackboardAsset_Params
{
public:
	class UBlackboardData*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetAvailableSocketNames
struct AGbxCharacter_GetAvailableSocketNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetAimVectorStartLocation
struct AGbxCharacter_GetAimVectorStartLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.GbxCharacter.GetAimOffset
struct AGbxCharacter_GetAimOffset_Params
{
public:
	struct FRotator                              ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.FindFirstPersonComponent
struct AGbxCharacter_FindFirstPersonComponent_Params
{
public:
	class UFirstPersonComponent*                 ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.DetachCharacter
struct AGbxCharacter_DetachCharacter_Params
{
public:
	enum class EDetachmentRule                   LocationRule;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.ClientRotateCharacterTo
struct AGbxCharacter_ClientRotateCharacterTo_Params
{
public:
	struct FRotator                              TargetRotation;                                    // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFunc                       Easing;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_893[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToComponent
struct AGbxCharacter_AttachCharacterToComponent_Params
{
public:
	class USceneComponent*                       Parent;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   LocationRule;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   RotationRule;                                      // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   ScaleRule;                                         // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldSimulatedBodies;                              // 0x13(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8A3[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCharacter.AttachCharacterToActor
struct AGbxCharacter_AttachCharacterToActor_Params
{
public:
	class AActor*                                ParentActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   LocationRule;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   RotationRule;                                      // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   ScaleRule;                                         // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bWeldSimulatedBodies;                              // 0x13(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8B8[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.SetGameStage
struct UBalanceStateComponent_SetGameStage_Params
{
public:
	int32                                        NewGameStage;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.SetExperienceLevel
struct UBalanceStateComponent_SetExperienceLevel_Params
{
public:
	int32                                        NewExperienceLevel;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.OnRep_ExperienceLevel
struct UBalanceStateComponent_OnRep_ExperienceLevel_Params
{
public:
	int32                                        OldExperienceLevel;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.OnInheritedBalanceSourceLevelChanged
struct UBalanceStateComponent_OnInheritedBalanceSourceLevelChanged_Params
{
public:
	class UBalanceStateComponent*                InheritedBalanceStateSource;                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OldExperienceLevel;                                // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewExperienceLevel;                                // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.GetGameStage
struct UBalanceStateComponent_GetGameStage_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.GetExperienceLevel
struct UBalanceStateComponent_GetExperienceLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.BalanceStateComponent.GetBalanceTableRow
struct UBalanceStateComponent_GetBalanceTableRow_Params
{
public:
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAnimInstance.GetAnimTableSequence
struct UGbxAnimInstance_GetAnimTableSequence_Params
{
public:
	class UGbxAnimTable*                         AnimTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequence*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAnimInstance.CanUseAnimTable
struct UGbxAnimInstance_CanUseAnimTable_Params
{
public:
	class UGbxAnimTable*                         AnimTable;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.StaticGetWwiseEvent
struct UEffectCollectionData_StaticGetWwiseEvent_Params
{
public:
	TSubclassOf<class UEffectCollectionData>     Collection;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextObject;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffectAndWwiseEvent
struct UEffectCollectionData_StaticGetParticleEffectAndWwiseEvent_Params
{
public:
	TSubclassOf<class UEffectCollectionData>     Collection;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextObject;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleEffect;                                    // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEvent;                                        // 0x18(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.StaticGetParticleEffect
struct UEffectCollectionData_StaticGetParticleEffect_Params
{
public:
	TSubclassOf<class UEffectCollectionData>     Collection;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextObject;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.GetWwiseEvent
struct UEffectCollectionData_GetWwiseEvent_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffectAndWwiseEvent
struct UEffectCollectionData_GetParticleEffectAndWwiseEvent_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ParticleEffect;                                    // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEvent;                                        // 0x10(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.EffectCollectionData.GetParticleEffect
struct UEffectCollectionData_GetParticleEffect_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.AttributeValueResolver.SetValueForAttribute
struct UAttributeValueResolver_SetValueForAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E4[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.AttributeValueResolver.GetValueForAttribute
struct UAttributeValueResolver_GetValueForAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9E9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UsableComponent.SetUsableLocked
struct UUsableComponent_SetUsableLocked_Params
{
public:
	bool                                         bLocked;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A0A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.UsableComponent.SetPrimaryUseDefinition
struct UUsableComponent_SetPrimaryUseDefinition_Params
{
public:
	class UUsableTypeDefinition*                 Def;                                               // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.UsableComponent.SetInteractionHeader
struct UUsableComponent_SetInteractionHeader_Params
{
public:
	class FText                                  NewHeaderName;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.UsableComponent.K2_GetOptionalErrorText
struct UUsableComponent_K2_GetOptionalErrorText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.UsableComponent.K2_CanBeUsed
struct UUsableComponent_K2_CanBeUsed_Params
{
public:
	struct FUsabilityQuery                       Query;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A1C[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UsableComponent.GetValidPrimitiveComponentNames
struct UUsableComponent_GetValidPrimitiveComponentNames_Params
{
public:
	TArray<class FName>                          ComponentNames;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.UsableComponent.GetInteractionHeader
struct UUsableComponent_GetInteractionHeader_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacterAnimInstance.SetDesiredFacialEmoteWeight
struct UGbxCharacterAnimInstance_SetDesiredFacialEmoteWeight_Params
{
public:
	float                                        Weight;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageData.OnKilledEnemy
struct UDamageData_OnKilledEnemy_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDataEventDetails               Details;                                           // 0x18(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageData.OnHitFriendly
struct UDamageData_OnHitFriendly_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDataEventDetails               Details;                                           // 0x18(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageData.OnHitEnemy
struct UDamageData_OnHitEnemy_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDataEventDetails               Details;                                           // 0x18(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageData.OnHitAnyAttitude
struct UDamageData_OnHitAnyAttitude_Params
{
public:
	class AActor*                                DamageInstigator;                                  // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDamageDataEventDetails               Details;                                           // 0x18(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ProjectileHomingComponent.SetHomeIn
struct UProjectileHomingComponent_SetHomeIn_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ProjectileHomingComponent.SetAssociatedProjectileMovement
struct UProjectileHomingComponent_SetAssociatedProjectileMovement_Params
{
public:
	class UProjectileMovementComponent*          ProjectileMovementComponent;                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.ProjectileHomingComponent.GetHomingLocation
struct UProjectileHomingComponent_GetHomingLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UIStatData.K2_ShouldDisplayStat
struct UUIStatData_K2_ShouldDisplayStat_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BFC[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x5B0 (0x5B0 - 0x0)
// Function GbxGameSystemCore.UIStatData.K2_GetValueText
struct UUIStatData_K2_GetValueText_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIStatCollector                      Collector;                                         // 0x8(0x590)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x598(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x5A0 (0x5A0 - 0x0)
// Function GbxGameSystemCore.UIStatData.K2_GetComparisonValue
struct UUIStatData_K2_GetComparisonValue_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUIStatCollector                      Collector;                                         // 0x8(0x590)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x598(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C1D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UIStatData.EnumerateSectionNames
struct UUIStatData_EnumerateSectionNames_Params
{
public:
	TArray<class FName>                          OutSectionNameList;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x5A8 (0x5A8 - 0x0)
// Function GbxGameSystemCore.UIStatData.ComputeAttributeModification
struct UUIStatData_ComputeAttributeModification_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScale;                                            // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyScale;                                        // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C3F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FUIStatCollector                      Collector;                                         // 0x10(0x590)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x5A0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C43[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.AttributeContextResolver.GetContextForAttribute
struct UAttributeContextResolver_GetContextForAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function GbxGameSystemCore.SpawnPatternData.CalculateSpawnPoint
struct USpawnPatternData_CalculateSpawnPoint_Params
{
public:
	struct FSpawnPatternInputs                   Inputs;                                            // 0x0(0x38)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FSpawnPatternResult                   Result;                                            // 0x38(0x2C)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_CE6[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAction_CoordinatedEffect.SetConstantMaterialVectorParamValue
struct UGbxAction_CoordinatedEffect_SetConstantMaterialVectorParamValue_Params
{
public:
	class FName                                  ParamName;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_Loop.OnStop
struct UGbxAction_Loop_OnStop_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_Loop.OnLoop
struct UGbxAction_Loop_OnLoop_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_GetDynamicBodyState
struct UGbxAction_PhysicalAnim_K2_GetDynamicBodyState_Params
{
public:
	float                                        AngularThreshold;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxPhysicalActionDynamicBodyState ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E78[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxAction_PhysicalAnim.K2_FixupDynamicToKinematicIssues
struct UGbxAction_PhysicalAnim_K2_FixupDynamicToKinematicIssues_Params
{
public:
	float                                        AngularThreshold;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.SetTeam
struct AGbxPlayerController_SetTeam_Params
{
public:
	class UTeam*                                 Team;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ServerRequestPawnSlotDetach
struct AGbxPlayerController_ServerRequestPawnSlotDetach_Params
{
public:
	class APawn*                                 Occupant;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ServerCanSplitscreenJoin
struct AGbxPlayerController_ServerCanSplitscreenJoin_Params
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.PushCinematicMode
struct AGbxPlayerController_PushCinematicMode_Params
{
public:
	class UCinematicModeData*                    InCinematicMode;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.PopCinematicMode
struct AGbxPlayerController_PopCinematicMode_Params
{
public:
	class UCinematicModeData*                    InCinematicMode;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPrimaryCharacterChanged__DelegateSignature
struct AGbxPlayerController_OnPrimaryCharacterChanged__DelegateSignature_Params
{
public:
	class AGbxCharacter*                         NewCharacter;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// DelegateFunction GbxGameSystemCore.GbxPlayerController.OnPausedChangedDelegate__DelegateSignature
struct AGbxPlayerController_OnPausedChangedDelegate__DelegateSignature_Params
{
public:
	bool                                         bPaused;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.IsUsingGamepad
struct AGbxPlayerController_IsUsingGamepad_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetTeamComponent
struct AGbxPlayerController_GetTeamComponent_Params
{
public:
	class UTeamComponent*                        ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetTeam
struct AGbxPlayerController_GetTeam_Params
{
public:
	class UTeam*                                 ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetTargetingComponent
struct AGbxPlayerController_GetTargetingComponent_Params
{
public:
	class UTargetingComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetTargetableComponent
struct AGbxPlayerController_GetTargetableComponent_Params
{
public:
	class UTargetableComponent*                  ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetPrimaryCharacter
struct AGbxPlayerController_GetPrimaryCharacter_Params
{
public:
	class AGbxCharacter*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportSize
struct AGbxPlayerController_GetPlayerViewportSize_Params
{
public:
	int32                                        SizeX;                                             // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SizeY;                                             // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetPlayerViewportOffset
struct AGbxPlayerController_GetPlayerViewportOffset_Params
{
public:
	int32                                        OffsetX;                                           // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OffsetY;                                           // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetPlayerProfile
struct AGbxPlayerController_GetPlayerProfile_Params
{
public:
	class UGbxProfile*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetGbxPerceptionComponent
struct AGbxPlayerController_GetGbxPerceptionComponent_Params
{
public:
	class UGbxPerceptionComponent*               ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.GetCurrencyAmount
struct AGbxPlayerController_GetCurrencyAmount_Params
{
public:
	class UGbxInventoryCategoryData*             CurrencyType;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD4[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.DeprojectViewportPositionToWorld
struct AGbxPlayerController_DeprojectViewportPositionToWorld_Params
{
public:
	float                                        ViewportX;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ViewportY;                                         // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x8(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldDirection;                                    // 0x14(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseForegroundProjection;                          // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x21(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1004[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.DebugCategory
struct AGbxPlayerController_DebugCategory_Params
{
public:
	class FName                                  CategoryName;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientStopFeedback
struct AGbxPlayerController_ClientStopFeedback_Params
{
public:
	class UFeedbackData*                         Data;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientPlayWwiseEvent
struct AGbxPlayerController_ClientPlayWwiseEvent_Params
{
public:
	class UWwiseEvent*                           Event;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientPlayFeedback
struct AGbxPlayerController_ClientPlayFeedback_Params
{
public:
	class UFeedbackData*                         Data;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1056[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedbackAtLocation
struct AGbxPlayerController_ClientPerformFeedbackAtLocation_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_106F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedOverrides;                                   // 0x20(0xC)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1072[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientPerformFeedback
struct AGbxPlayerController_ClientPerformFeedback_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientCanSplitscreenJoin
struct AGbxPlayerController_ClientCanSplitscreenJoin_Params
{
public:
	int32                                        ControllerId;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanJoin;                                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_109A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClientApplyDamageDataPresentation
struct AGbxPlayerController_ClientApplyDamageDataPresentation_Params
{
public:
	class UDamageData*                           DamageData;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPlayerDamageDataPresentation         PlayerPresentation;                                // 0x8(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.Client_StopGbxFeedback
struct AGbxPlayerController_Client_StopGbxFeedback_Params
{
public:
	class UGbxFeedbackData*                      Data;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.Client_PlayGbxFeedback
struct AGbxPlayerController_Client_PlayGbxFeedback_Params
{
public:
	class UGbxFeedbackData*                      Data;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIs3D;                                             // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10DC[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloffMinDistance;                          // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloffMaxDistance;                          // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_10E3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.ClearAndSetCinematicMode
struct AGbxPlayerController_ClearAndSetCinematicMode_Params
{
public:
	class UCinematicModeData*                    InCinematicMode;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxPlayerController.AddCurrencyAmount
struct AGbxPlayerController_AddCurrencyAmount_Params
{
public:
	int32                                        Amount;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_110D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxInventoryCategoryData*             CurrencyType;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.challenge.TestForCompleted
struct UChallenge_TestForCompleted_Params
{
public:
	class AGbxPlayerController*                  PlayerToTest;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OtherObject;                                       // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        EnumTag;                                           // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_11C6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.challenge.SetChallengeProgress
struct UChallenge_SetChallengeProgress_Params
{
public:
	int32                                        NewProgress;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.challenge.PlayerExitChallengeArea
struct UChallenge_PlayerExitChallengeArea_Params
{
public:
	class UChallengeLevelActorComponent*         LevelActorComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.challenge.PlayerEnterChallengeArea
struct UChallenge_PlayerEnterChallengeArea_Params
{
public:
	class UChallengeLevelActorComponent*         LevelActorComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.challenge.OnLevelActorRegistered
struct UChallenge_OnLevelActorRegistered_Params
{
public:
	class UChallengeLevelActorComponent*         RegisteredLevelActor;                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.challenge.OnInitChallengeInstance
struct UChallenge_OnInitChallengeInstance_Params
{
public:
	class UChallengesComponent*                  OwningChallenges;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxCharacter*                         AssociatedCharacter;                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.challenge.IsChallengeComplete
struct UChallenge_IsChallengeComplete_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.challenge.IsChallengeActive
struct UChallenge_IsChallengeActive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.challenge.IncrementChallengeProgressByValue
struct UChallenge_IncrementChallengeProgressByValue_Params
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.challenge.GetLevelActorComponents
struct UChallenge_GetLevelActorComponents_Params
{
public:
	TArray<class UChallengeLevelActorComponent*> LevelActorList;                                    // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.challenge.GetChallengeProgressGoalValue
struct UChallenge_GetChallengeProgressGoalValue_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.challenge.GetChallengeProgress
struct UChallenge_GetChallengeProgress_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.challenge.GetChallengeCompleteInfo
struct UChallenge_GetChallengeCompleteInfo_Params
{
public:
	int32                                        NumCompleted;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChallenges;                                     // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckReplicatedChallenges;                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_126D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.challenge.CompletedConditional
struct UChallenge_CompletedConditional_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.challenge.CompletedChallenge
struct UChallenge_CompletedChallenge_Params
{
public:
	class AGbxPlayerController*                  CompletedPlayer;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ChallengeManager.OnStatUpdate
struct AChallengeManager_OnStatUpdate_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12D6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ChallengeManager.OnStatIncrement
struct AChallengeManager_OnStatIncrement_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_12E5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.SetChallengeProgress
struct UChallengesComponent_SetChallengeProgress_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewProgress;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_130A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.SetChallengeActive
struct UChallengesComponent_SetChallengeActive_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInIsActive;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1314[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.IsChallengeComplete
struct UChallengesComponent_IsChallengeComplete_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckReplicatedChallenges;                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1321[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.IsChallengeActive
struct UChallengesComponent_IsChallengeActive_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1330[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.IncrementChallengeProgress
struct UChallengesComponent_IncrementChallengeProgress_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetMaxChallengeTiers
struct UChallengesComponent_GetMaxChallengeTiers_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1346[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetLocalChallenges
struct UChallengesComponent_GetLocalChallenges_Params
{
public:
	TArray<struct FChallengeInstanceData>        ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetCompletedChallengeTiers
struct UChallengesComponent_GetCompletedChallengeTiers_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1363[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatValue
struct UChallengesComponent_GetChallengeStatValue_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1376[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeStatGoalValue
struct UChallengesComponent_GetChallengeStatGoalValue_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatId;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1383[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgressGoalValue
struct UChallengesComponent_GetChallengeProgressGoalValue_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1390[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeProgress
struct UChallengesComponent_GetChallengeProgress_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13A1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfoForLevels
struct UChallengesComponent_GetChallengeCompleteInfoForLevels_Params
{
public:
	TArray<class FName>                          LevelsForChallenges;                               // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UChallengeCategoryData*                Category;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCompleted;                                      // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumActive;                                         // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreHidden;                                     // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13B5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.GetChallengeCompleteInfo
struct UChallengesComponent_GetChallengeCompleteInfo_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCompleted;                                      // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumChallenges;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCheckReplicatedChallenges;                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_13C5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.CompleteChallengeIfConditionsMet
struct UChallengesComponent_CompleteChallengeIfConditionsMet_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.CompleteChallenge
struct UChallengesComponent_CompleteChallenge_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceActive;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreRewards;                                    // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141A[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeUpdateProgress
struct UChallengesComponent_ClientChallengeUpdateProgress_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewProgress;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1420[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.ClientChallengeCompleted
struct UChallengesComponent_ClientChallengeCompleted_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTiersComplete;                                  // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceActive;                                      // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreRewards;                                    // 0xD(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1436[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.ClientActivateChallenge
struct UChallengesComponent_ClientActivateChallenge_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.AreGlobalChallengesRegistered
struct UChallengesComponent_AreGlobalChallengesRegistered_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengesComponent.ActivateChallenge
struct UChallengesComponent_ActivateChallenge_Params
{
public:
	class UClass*                                ChalClass;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopMoveTo
struct UGbxCharacterMovementComponent_StopMoveTo_Params
{
public:
	bool                                         bForce;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicateStop;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.StopControlledMove
struct UGbxCharacterMovementComponent_StopControlledMove_Params
{
public:
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZeroVelocity;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14A7[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartRotateTo
struct UGbxCharacterMovementComponent_StartRotateTo_Params
{
public:
	struct FCharacterRotateToCommand             RotateToCommand;                                   // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartMoveTo
struct UGbxCharacterMovementComponent_StartMoveTo_Params
{
public:
	struct FCharacterMoveToCommand               MoveToCommand;                                     // 0x0(0x1C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.StartControlledMove
struct UGbxCharacterMovementComponent_StartControlledMove_Params
{
public:
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedOverride;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationOverride;                                  // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchAngleOverride;                               // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x28(0xC)(Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14E5[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_SetNoneWithRootMotionMode_Params
{
public:
	bool                                         bAnimationWalking;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Reason;                                            // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetFacingTarget
struct UGbxCharacterMovementComponent_SetFacingTarget_Params
{
public:
	struct FFacingInfo                           FacingTarget;                                      // 0x0(0x3C)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFacingChannel                    Channel;                                           // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14F9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.SetAnimationBasedTurning
struct UGbxCharacterMovementComponent_SetAnimationBasedTurning_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerStartMoveTo
struct UGbxCharacterMovementComponent_ServerStartMoveTo_Params
{
public:
	struct FCharacterMoveToCommand               MoveToCommand;                                     // 0x0(0x1C)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ServerAttemptMantle
struct UGbxCharacterMovementComponent_ServerAttemptMantle_Params
{
public:
	struct FMantleAttemptInfo                    ClientData;                                        // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_151D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnStanceChanged
struct UGbxCharacterMovementComponent_OnStanceChanged_Params
{
public:
	struct FStanceChangedEventArgs               Args;                                              // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleEndOverlap
struct UGbxCharacterMovementComponent_OnCapsuleEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.OnCapsuleBeginOverlap
struct UGbxCharacterMovementComponent_OnCapsuleBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1557[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            SweepResult;                                       // 0x20(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoRotation
struct UGbxCharacterMovementComponent_MakeFacingInfoRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0xC(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoNone
struct UGbxCharacterMovementComponent_MakeFacingInfoNone_Params
{
public:
	struct FFacingInfo                           ReturnValue;                                       // 0x0(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoLocation
struct UGbxCharacterMovementComponent_MakeFacingInfoLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0xC(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoDirection
struct UGbxCharacterMovementComponent_MakeFacingInfoDirection_Params
{
public:
	struct FVector                               Direction;                                         // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0xC(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoComponent
struct UGbxCharacterMovementComponent_MakeFacingInfoComponent_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0x8(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActorEyes
struct UGbxCharacterMovementComponent_MakeFacingInfoActorEyes_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0x8(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.MakeFacingInfoActor
struct UGbxCharacterMovementComponent_MakeFacingInfoActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFacingInfo                           ReturnValue;                                       // 0x8(0x3C)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15D1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.LeaveNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_LeaveNoneWithRootMotionMode_Params
{
public:
	bool                                         bApplyDefault;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingSpecificControlledMove
struct UGbxCharacterMovementComponent_IsPerformingSpecificControlledMove_Params
{
public:
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15EE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsPerformingControlledMove
struct UGbxCharacterMovementComponent_IsPerformingControlledMove_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMovingOnLadder
struct UGbxCharacterMovementComponent_IsMovingOnLadder_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantlingAllowed
struct UGbxCharacterMovementComponent_IsMantlingAllowed_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsMantling
struct UGbxCharacterMovementComponent_IsMantling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsInNoneWithRootMotionMode
struct UGbxCharacterMovementComponent_IsInNoneWithRootMotionMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsHandIkEnabled
struct UGbxCharacterMovementComponent_IsHandIkEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkTracingEnabled
struct UGbxCharacterMovementComponent_IsFootIkTracingEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFootIkEnabled
struct UGbxCharacterMovementComponent_IsFootIkEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.IsFacingTargetBP
struct UGbxCharacterMovementComponent_IsFacingTargetBP_Params
{
public:
	float                                        ThresholdDegrees;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFacingChannel                    Channel;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1659[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMaxAllowedAimOffset
struct UGbxCharacterMovementComponent_GetMaxAllowedAimOffset_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetMantleData
struct UGbxCharacterMovementComponent_GetMantleData_Params
{
public:
	class UMantleData*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingRotation
struct UGbxCharacterMovementComponent_GetDesiredFacingRotation_Params
{
public:
	enum class EFacingChannel                    Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1682[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetDesiredFacingLocation
struct UGbxCharacterMovementComponent_GetDesiredFacingLocation_Params
{
public:
	enum class EFacingChannel                    Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingRotation
struct UGbxCharacterMovementComponent_GetCurrentFacingRotation_Params
{
public:
	enum class EFacingChannel                    Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FRotator                              ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingOrigin
struct UGbxCharacterMovementComponent_GetCurrentFacingOrigin_Params
{
public:
	enum class EFacingChannel                    Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetCurrentFacingLocation
struct UGbxCharacterMovementComponent_GetCurrentFacingLocation_Params
{
public:
	enum class EFacingChannel                    Channel;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1705[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GetControlledMove
struct UGbxCharacterMovementComponent_GetControlledMove_Params
{
public:
	class UControlledMove*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.GbxSetAnimInstanceClass
struct UGbxCharacterMovementComponent_GbxSetAnimInstanceClass_Params
{
public:
	class USkeletalMeshComponent*                SkelMeshComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                NewClass;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveOld
struct UGbxCharacterMovementComponent_ControlledServerMoveOld_Params
{
public:
	float                                        OldTimeStamp;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 OldAccel;                                          // 0x4(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        OldMoveFlags;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1749[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       CMDir;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMoveDual
struct UGbxCharacterMovementComponent_ControlledServerMoveDual_Params
{
public:
	float                                        TimeStamp0;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 InAccel0;                                          // 0x4(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PendingFlags;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1787[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       View0;                                             // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CMDir0;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Timestamp;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 InAccel;                                           // 0x20(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                ClientLoc;                                         // 0x2C(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NewFlags;                                          // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClientRoll;                                        // 0x39(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1797[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       View;                                              // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   ClientMovementBase;                                // 0x40(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClientBaseBoneName;                                // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClientMovementMode;                                // 0x50(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       CMDir;                                             // 0x54(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClientBodyYaw;                                     // 0x58(0x2)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ControlledServerMove
struct UGbxCharacterMovementComponent_ControlledServerMove_Params
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize10                 InAccel;                                           // 0x4(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                ClientLoc;                                         // 0x10(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        CompressedMoveFlags;                               // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClientRoll;                                        // 0x1D(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E2[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       View;                                              // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17E6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UPrimitiveComponent*                   ClientMovementBase;                                // 0x28(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ClientBaseBoneName;                                // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ClientMovementMode;                                // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17ED[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       CMDir;                                             // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       ClientBodyYaw;                                     // 0x40(0x2)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17EF[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.ClientAdjustControlledMovePosition
struct UGbxCharacterMovementComponent_ClientAdjustControlledMovePosition_Params
{
public:
	float                                        Timestamp;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1823[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FControlledMoveNetCorrection          ServerCMData;                                      // 0x8(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               NewLoc;                                            // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewVel;                                            // 0x24(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   NewBase;                                           // 0x30(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewBaseBoneName;                                   // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasBase;                                          // 0x40(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBaseRelativePosition;                             // 0x41(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ServerMovementMode;                                // 0x42(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1832[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartPassiveMantle
struct UGbxCharacterMovementComponent_CanStartPassiveMantle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.CanStartMantle
struct UGbxCharacterMovementComponent_CanStartMantle_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.GbxCharacterMovementComponent.AddPendingRawInputVector
struct UGbxCharacterMovementComponent_AddPendingRawInputVector_Params
{
public:
	struct FVector                               NewInputVector;                                    // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.TestGameStage
struct UGbxCheatManager_TestGameStage_Params
{
public:
	int32                                        GameStageOverride;                                 // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.ShowProjectileImpacts
struct UGbxCheatManager_ShowProjectileImpacts_Params
{
public:
	float                                        Size;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifeTime;                                          // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.SetDebugActorByName
struct UGbxCheatManager_SetDebugActorByName_Params
{
public:
	class FString                                ActorName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.SetDebugActor
struct UGbxCheatManager_SetDebugActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ControllerIndex;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AE7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.Server_DamageTarget
struct UGbxCheatManager_Server_DamageTarget_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackRangedFromThere
struct UGbxCheatManager_PlayFeedbackRangedFromThere_Params
{
public:
	class FString                                FeedbackData;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.PlayFeedbackDirectional
struct UGbxCheatManager_PlayFeedbackDirectional_Params
{
public:
	class FString                                FeedbackData;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DirectionAngle;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B20[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCheatManager.PlayFeedback
struct UGbxCheatManager_PlayFeedback_Params
{
public:
	class FString                                FeedbackData;                                      // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B31[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnTeleported
struct UControlledMove_OnTeleported_Params
{
public:
	float                                        MoveDuration;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreTeleportLocation;                               // 0x4(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnTargetLocationChanged
struct UControlledMove_OnTargetLocationChanged_Params
{
public:
	struct FVector                               NewTargetLocation;                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnStop
struct UControlledMove_OnStop_Params
{
public:
	bool                                         bInterrupted;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnStart
struct UControlledMove_OnStart_Params
{
public:
	float                                        MoveDuration;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BA2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnServerStop
struct UControlledMove_OnServerStop_Params
{
public:
	bool                                         bInterrupted;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnServerStart
struct UControlledMove_OnServerStart_Params
{
public:
	float                                        MoveDuration;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BC7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnHitWorld
struct UControlledMove_OnHitWorld_Params
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1BE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ControlledMove.OnHitTargetable
struct UControlledMove_OnHitTargetable_Params
{
public:
	class AActor*                                HitActor;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitNormal;                                         // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C09[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.ServerSetCustomFloat
struct UGbxCustomizationComponent_ServerSetCustomFloat_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.ServerSetAllowCustomizationSuppression
struct UGbxCustomizationComponent_ServerSetAllowCustomizationSuppression_Params
{
public:
	bool                                         bNewAllowCustomizationSuppression;                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomizationData
struct UGbxCustomizationComponent_ServerApplyCustomizationData_Params
{
public:
	class UGbxCustomizationData*                 CustomizationToApply;                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OptionalCustomizationId;                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D7F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomizationCollection
struct UGbxCustomizationComponent_ServerApplyCustomizationCollection_Params
{
public:
	class UGbxCustomizationCollectionData*       CollectionToApply;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.ServerApplyCustomColor
struct UGbxCustomizationComponent_ServerApplyCustomColor_Params
{
public:
	int32                                        CustomColorIndex;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InAppliedColor;                                    // 0x4(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InSplitColor;                                      // 0x14(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InUseDefaultColor;                                 // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InUseDefaultSplitColor;                            // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DB6[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.RemoveCustomization
struct UGbxCustomizationComponent_RemoveCustomization_Params
{
public:
	class UGbxCustomizationData*                 Customization;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DCB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.LinkToCustomization
struct UGbxCustomizationComponent_LinkToCustomization_Params
{
public:
	class UGbxCustomizationComponent*            SourceComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationRemoved
struct UGbxCustomizationComponent_LinkedCustomizationRemoved_Params
{
public:
	class UGbxCustomizationData*                 Customization;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.LinkedCustomizationApplied
struct UGbxCustomizationComponent_LinkedCustomizationApplied_Params
{
public:
	class UGbxCustomizationData*                 Customization;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.IsCustomizationApplied
struct UGbxCustomizationComponent_IsCustomizationApplied_Params
{
public:
	class UGbxCustomizationData*                 Customization;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E57[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomSplitColor
struct UGbxCustomizationComponent_GetDefaultCustomSplitColor_Params
{
public:
	int32                                        SelectionIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultSplitColor;                                 // 0x4(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E80[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.GetDefaultCustomColor
struct UGbxCustomizationComponent_GetDefaultCustomColor_Params
{
public:
	int32                                        SelectionIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultColor;                                      // 0x4(0x10)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EA6[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.GetAppliedCustomizations
struct UGbxCustomizationComponent_GetAppliedCustomizations_Params
{
public:
	TArray<class UGbxCustomizationData*>         ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationComponent.CopyFromCustomization
struct UGbxCustomizationComponent_CopyFromCustomization_Params
{
public:
	class UGbxCustomizationComponent*            SourceComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.RemoveCustomizationFromActor
struct UGbxCustomizationData_RemoveCustomizationFromActor_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F52[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.K2_PlayAction
struct UGbxCustomizationData_K2_PlayAction_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionState_Base                     ActionData;                                        // 0x8(0xC8)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UGbxAction*                            ReturnValue;                                       // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.IsLoading
struct UGbxCustomizationData_IsLoading_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.IsLoaded
struct UGbxCustomizationData_IsLoaded_Params
{
public:
	int32                                        OptionalCustomizationId;                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F92[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.AsyncLoadCustomizationAssets
struct UGbxCustomizationData_AsyncLoadCustomizationAssets_Params
{
public:
	UDelegateProperty_                           LoadedDelegate;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxCustomizationData.ApplyCustomizationToActor
struct UGbxCustomizationData_ApplyCustomizationToActor_Params
{
public:
	class AActor*                                TargetActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OptionalCustomizationId;                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDB[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageCauserComponent.UnregisterConditionalDamageModifier
struct UDamageCauserComponent_UnregisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageCauserComponent.RegisterConditionalDamageModifier
struct UDamageCauserComponent_RegisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.DamageCauserComponent.GetCritModifierTotals
struct UDamageCauserComponent_GetCritModifierTotals_Params
{
public:
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECritType                         CritType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20E7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierTotal;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCritSourceModifiers                  ReturnValue;                                       // 0x10(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.DamageCauserComponent.GetCritModifiersForSource
struct UDamageCauserComponent_GetCritModifiersForSource_Params
{
public:
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECritType                         CritType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2113[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierTotal;                                     // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCritSourceModifiers                  ReturnValue;                                       // 0x10(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.DamageCauserComponent.FindCritModifier
struct UDamageCauserComponent_FindCritModifier_Params
{
public:
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECritType                         CritType;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2135[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCritSourceModifiers                  ReturnValue;                                       // 0x10(0x38)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageComponent.UnregisterConditionalDamageModifier
struct UDamageComponent_UnregisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageComponent.SetSelfReflectedDamageType
struct UDamageComponent_SetSelfReflectedDamageType_Params
{
public:
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DamageComponent.SetGodMode
struct UDamageComponent_SetGodMode_Params
{
public:
	bool                                         bInGodMode;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DamageComponent.SetDemiGodMode
struct UDamageComponent_SetDemiGodMode_Params
{
public:
	bool                                         bInDemiGodMode;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.SetCurrentShield
struct UDamageComponent_SetCurrentShield_Params
{
public:
	float                                        NewCurrentShield;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.SetCurrentHealth
struct UDamageComponent_SetCurrentHealth_Params
{
public:
	float                                        NewCurrentHealth;                                  // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageComponent.RegisterConditionalDamageModifier
struct UDamageComponent_RegisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageComponent.ReceiveHealthDepleted
struct UDamageComponent_ReceiveHealthDepleted_Params
{
public:
	class UDamageCauserComponent*                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.DamageComponent.ReceiveAnyHealing
struct UDamageComponent_ReceiveAnyHealing_Params
{
public:
	float                                        Healing;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_224B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HealInstigator;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageType*                           DamageType;                                        // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// Function GbxGameSystemCore.DamageComponent.ReceiveAnyDamage
struct UDamageComponent_ReceiveAnyDamage_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_226F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           InstigatedBy;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageCauserComponent*                DamageCauser;                                      // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReceivedDamageDetails                Details;                                           // 0x28(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageComponent.OnOwnerExperienceLevelChanged
struct UDamageComponent_OnOwnerExperienceLevelChanged_Params
{
public:
	int32                                        OldExperienceLevel;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewExperienceLevel;                                // 0x4(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowNotDepleted
struct UDamageComponent_OnHealthResourceNowNotDepleted_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.DamageComponent.OnHealthResourceNowDepleted
struct UDamageComponent_OnHealthResourceNowDepleted_Params
{
public:
	struct FGameResourcePoolReference            ResourcePool;                                      // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DamageComponent.IsInGodMode
struct UDamageComponent_IsInGodMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DamageComponent.IsInDemiGodMode
struct UDamageComponent_IsInDemiGodMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.DamageComponent.IsDamageOverkill
struct UDamageComponent_IsDamageOverkill_Params
{
public:
	float                                        DamageAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OverkillThreshold;                                 // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2351[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetValidDamageEventFunctionNames
struct UDamageComponent_GetValidDamageEventFunctionNames_Params
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetTotalMaxHealth
struct UDamageComponent_GetTotalMaxHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetMaxShield
struct UDamageComponent_GetMaxShield_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetMaxHealth
struct UDamageComponent_GetMaxHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetCurrentShield
struct UDamageComponent_GetCurrentShield_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetCurrentHealthPercent
struct UDamageComponent_GetCurrentHealthPercent_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DamageComponent.GetCurrentHealth
struct UDamageComponent_GetCurrentHealth_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.DamageComponent.BroadcastPlayImpactSplatterEffect
struct UDamageComponent_BroadcastPlayImpactSplatterEffect_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize100                HitLocation;                                       // 0x8(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             HitDirection;                                      // 0x14(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageSeverity;                                    // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24DB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageModifierComponent.UnregisterConditionalDamageModifier
struct UDamageModifierComponent_UnregisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageModifierComponent.RegisterConditionalDamageModifier
struct UDamageModifierComponent_RegisterConditionalDamageModifier_Params
{
public:
	class UConditionalDamageModifier*            Modifier;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageOverTimeManager.OnParticleSystemStopped
struct UDamageOverTimeManager_OnParticleSystemStopped_Params
{
public:
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxDamageType.IsElementalType
struct UGbxDamageType_IsElementalType_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.FirstPersonComponent.SetBaseEyeToWeaponTransform
struct UFirstPersonComponent_SetBaseEyeToWeaponTransform_Params
{
public:
	struct FTransform                            NewWeaponTransform;                                // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FirstPersonComponent.GetFirstPersonComponentByName
struct UFirstPersonComponent_GetFirstPersonComponentByName_Params
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticastImpl
struct AGbxGameState_SpawnEmitterAtLocationMulticastImpl_Params
{
public:
	class UParticleSystem*                       EmitterTemplate;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x14(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x20(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDestroy;                                      // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2842[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ParameterEvaluationContext;                        // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtLocationMulticast
struct AGbxGameState_SpawnEmitterAtLocationMulticast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       EmitterTemplate;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x1C(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x28(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDestroy;                                      // 0x34(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2870[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ParameterEvaluationContext;                        // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtComponentSocketMulticast
struct AGbxGameState_SpawnEmitterAtComponentSocketMulticast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       EmitterTemplate;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       Component;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDestroy;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ParameterEvaluationContext;                        // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxGameState.SpawnEmitterAtActorSocketMulticast
struct AGbxGameState_SpawnEmitterAtActorSocketMulticast_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       EmitterTemplate;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Socket;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDestroy;                                      // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_28CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               ParameterEvaluationContext;                        // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GbxGameSystemCore.GbxGameState.PlayImpactMulticast
struct AGbxGameState_PlayImpactMulticast_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ImpactInstigator;                                  // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedImpactHitResult            HitResult;                                         // 0x10(0x40)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FImpactResponseParams                 ResponseParams;                                    // 0x50(0xB0)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.GbxGameState.PlayHitRegionImpactMulticast
struct AGbxGameState_PlayHitRegionImpactMulticast_Params
{
public:
	class UHitRegionData*                        HitRegion;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           AudioImpactData;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ImpactInstigator;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FReplicatedImpactHitResult            HitResult;                                         // 0x18(0x40)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.TriggerClientEvent
struct UHitRegionComponent_TriggerClientEvent_Params
{
public:
	struct FDamageReactionEventSummary           EventSummary;                                      // 0x0(0x60)(ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.GetValidDamageEventFunctionNames
struct UHitRegionComponent_GetValidDamageEventFunctionNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.GetValidAssociatedComponentNames
struct UHitRegionComponent_GetValidAssociatedComponentNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionPercentHealth
struct UHitRegionComponent_GetHitRegionPercentHealth_Params
{
public:
	class UHitRegionData*                        HitRegion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29F4[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionMaxHealth
struct UHitRegionComponent_GetHitRegionMaxHealth_Params
{
public:
	class UHitRegionData*                        HitRegion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A0F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitRegionComponent.GetHitRegionCurrentHealth
struct UHitRegionComponent_GetHitRegionCurrentHealth_Params
{
public:
	class UHitRegionData*                        HitRegion;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleExcluders
struct UActorPartData_EnumeratePossibleExcluders_Params
{
public:
	TArray<class UActorPartData*>                OutPartList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ActorPartData.EnumeratePossibleDependencies
struct UActorPartData_EnumeratePossibleDependencies_Params
{
public:
	TArray<class UActorPartData*>                OutPartList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ActorPartData.EnumerateOtherParts
struct UActorPartData_EnumerateOtherParts_Params
{
public:
	TArray<class UActorPartData*>                OutPartList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ActorPartData.EnumerateGestaltMeshPartNames
struct UActorPartData_EnumerateGestaltMeshPartNames_Params
{
public:
	TArray<class FName>                          OutPartNameList;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DataTableAttributeValueResolver.GetDataTableColumnNames
struct UDataTableAttributeValueResolver_GetDataTableColumnNames_Params
{
public:
	TArray<class FString>                        ValueNames;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.DataTableFunctionAttributeValueResolver.GetDataTableRow
struct UDataTableFunctionAttributeValueResolver_GetDataTableRow_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshParts
struct UGbxSkeletalMeshComponent_ShowGestaltMeshParts_Params
{
public:
	TArray<class UGestaltPartData_Mesh*>         Parts;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bLocalOnly;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2B93[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.ShowGestaltMeshPart
struct UGbxSkeletalMeshComponent_ShowGestaltMeshPart_Params
{
public:
	class UGestaltPartData_Mesh*                 GestaltMeshPart;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalOnly;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BAE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetUpdateOverrideValues
struct UGbxSkeletalMeshComponent_SetUpdateOverrideValues_Params
{
public:
	TArray<float>                                UpdateRateOverrides;                               // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bEnableOverrideProperties;                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BC6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetParentAnimationComponent
struct UGbxSkeletalMeshComponent_SetParentAnimationComponent_Params
{
public:
	class USkeletalMeshComponent*                ParentComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.SetGestaltPartList
struct UGbxSkeletalMeshComponent_SetGestaltPartList_Params
{
public:
	class UGestaltPartListData*                  NewGestaltPartList;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstances
struct UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstances_Params
{
public:
	TArray<class USkeletalMeshComponent*>        InLinkedSkelMeshComponents;                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.LinkSkelMeshAnimInstance
struct UGbxSkeletalMeshComponent_LinkSkelMeshAnimInstance_Params
{
public:
	class USkeletalMeshComponent*                InLinkedSkelMeshComponent;                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsGestaltMeshPartVisible
struct UGbxSkeletalMeshComponent_IsGestaltMeshPartVisible_Params
{
public:
	class UGestaltPartData_Mesh*                 GestaltMeshPart;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C42[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.IsCustomizationTargetFor
struct UGbxSkeletalMeshComponent_IsCustomizationTargetFor_Params
{
public:
	class UGbxCustomizationTargetData*           TargetToTest;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C4D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshParts
struct UGbxSkeletalMeshComponent_HideGestaltMeshParts_Params
{
public:
	TArray<class UGestaltPartData_Mesh*>         Parts;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bLocalOnly;                                        // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C67[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.HideGestaltMeshPart
struct UGbxSkeletalMeshComponent_HideGestaltMeshPart_Params
{
public:
	class UGestaltPartData_Mesh*                 GestaltMeshPart;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalOnly;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2C79[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetUpdateOverrideValues
struct UGbxSkeletalMeshComponent_GetUpdateOverrideValues_Params
{
public:
	TArray<float>                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.GetAvailableBoneNames
struct UGbxSkeletalMeshComponent_GetAvailableBoneNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxSkeletalMeshComponent.CopyGestaltPartList
struct UGbxSkeletalMeshComponent_CopyGestaltPartList_Params
{
public:
	class AActor*                                GestaltPartListSource;                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.SetPersistentAttachSocketName
struct UPawnAttachSlotComponent_SetPersistentAttachSocketName_Params
{
public:
	class FName                                  SocketName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.SetDetachabilityLocked
struct UPawnAttachSlotComponent_SetDetachabilityLocked_Params
{
public:
	bool                                         bLock;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2CE0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.IsOccupied
struct UPawnAttachSlotComponent_IsOccupied_Params
{
public:
	bool                                         bIncludeDetaching;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.HandleActorDestroyed
struct UPawnAttachSlotComponent_HandleActorDestroyed_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.GetPersistentAttachSocketTransform
struct UPawnAttachSlotComponent_GetPersistentAttachSocketTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.GetOccupant
struct UPawnAttachSlotComponent_GetOccupant_Params
{
public:
	bool                                         bIncludeDetaching;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D41[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.GetAttachStatus
struct UPawnAttachSlotComponent_GetAttachStatus_Params
{
public:
	enum class EPawnAttachStatus                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.DetachPawn
struct UPawnAttachSlotComponent_DetachPawn_Params
{
public:
	bool                                         bInstant;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipPlacement;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachSlotComponent.AttachPawn
struct UPawnAttachSlotComponent_AttachPawn_Params
{
public:
	class APawn*                                 AttachingPawn;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstant;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_StopRadiusEffect
struct ARadiusDamageReplicationManager_Multicast_StopRadiusEffect_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopAllForContext;                                // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bContextIsSourceActor;                             // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2EC1[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function GbxGameSystemCore.RadiusDamageReplicationManager.Multicast_ProcessRadiusRequest
struct ARadiusDamageReplicationManager_Multicast_ProcessRadiusRequest_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Location;                                          // 0x1C(0xC)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UExplosionData*                        ExplosionData;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       DefaultParticles;                                  // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           DefaultAudioEvent;                                 // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UImpactData*                           DefaultImpactData;                                 // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxSignificanceEvent                 SignificanceEvent;                                 // 0x50(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2F16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SourceActor;                                       // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffectInstance
struct UStatusEffectManagerComponent_RemoveStatusEffectInstance_Params
{
public:
	struct FStatusEffectInstanceReference        Reference;                                         // 0x0(0x18)(Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3039[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.StatusEffectManagerComponent.RemoveStatusEffect
struct UStatusEffectManagerComponent_RemoveStatusEffect_Params
{
public:
	struct FStatusEffectRemoveSpec               Spec;                                              // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_304F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.StatusEffectManagerComponent.QueryStatusEffect
struct UStatusEffectManagerComponent_QueryStatusEffect_Params
{
public:
	struct FStatusEffectQuery                    Query;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatusEffectQueryResult              ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.StatusEffectManagerComponent.AddStatusEffect
struct UStatusEffectManagerComponent_AddStatusEffect_Params
{
public:
	struct FStatusEffectSpec                     Spec;                                              // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatusEffectInstanceReference        ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffectInstance
struct UStatusEffectsStatics_RemoveStatusEffectInstance_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectInstanceReference        Reference;                                         // 0x8(0x18)(Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_308A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.StatusEffectsStatics.RemoveStatusEffect
struct UStatusEffectsStatics_RemoveStatusEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectRemoveSpec               RemoveSpec;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_30A6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.StatusEffectsStatics.QueryStatusEffect
struct UStatusEffectsStatics_QueryStatusEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectQuery                    Query;                                             // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatusEffectQueryResult              ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.StatusEffectsStatics.AddStatusEffect
struct UStatusEffectsStatics_AddStatusEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FStatusEffectSpec                     Spec;                                              // 0x8(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FStatusEffectInstanceReference        ReturnValue;                                       // 0x40(0x18)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.UseComponent.StopUsingCurrentObject
struct UUseComponent_StopUsingCurrentObject_Params
{
public:
	enum class EUsabilityType                    UseType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.UseComponent.StartUsingCurrentObject
struct UUseComponent_StartUsingCurrentObject_Params
{
public:
	enum class EUsabilityType                    UseType;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ServerUseObject
struct UUseComponent_ServerUseObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHeld;                                             // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_314E[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ServerUnfilteredStopUsingObject
struct UUseComponent_ServerUnfilteredStopUsingObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3164[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ServerUnfilteredStartUsingObject
struct UUseComponent_ServerUnfilteredStartUsingObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3175[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ServerStopUsingObject
struct UUseComponent_ServerStopUsingObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_318C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ServerStartUsingObject
struct UUseComponent_ServerStartUsingObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_319E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// DelegateFunction GbxGameSystemCore.UseComponent.OnUsableChanged__DelegateSignature
struct UUseComponent_OnUsableChanged__DelegateSignature_Params
{
public:
	class UUsableComponent*                      NewUsableComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUsabilityInfo                        InUsabilityInfo;                                   // 0x8(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               NewUsableComponentImpactPoint;                     // 0x48(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewUsableComponentDistanceAway;                    // 0x54(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// DelegateFunction GbxGameSystemCore.UseComponent.OnUsabilityChanged__DelegateSignature
struct UUseComponent_OnUsabilityChanged__DelegateSignature_Params
{
public:
	class UUsableComponent*                      NewUsableComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FUsabilityInfo                        InUsabilityInfo;                                   // 0x8(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction GbxGameSystemCore.UseComponent.OnUnableToAffordUsableObject__DelegateSignature
struct UUseComponent_OnUnableToAffordUsableObject__DelegateSignature_Params
{
public:
	class UUsableComponent*                      Usable;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHeld;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31E2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// DelegateFunction GbxGameSystemCore.UseComponent.OnImpactDataChanged__DelegateSignature
struct UUseComponent_OnImpactDataChanged__DelegateSignature_Params
{
public:
	class UUsableComponent*                      NewUsableComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewUsableComponentImpactPoint;                     // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewUsableComponentDistanceAway;                    // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.UseComponent.GetCurrentUsable
struct UUseComponent_GetCurrentUsable_Params
{
public:
	class UUsableComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.UseComponent.ForceUsingObject
struct UUseComponent_ForceUsingObject_Params
{
public:
	class UUsableComponent*                      UsableObject;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseComponent.ClientNotifyAttemptedUseCouldNotAfford
struct UUseComponent_ClientNotifyAttemptedUseCouldNotAfford_Params
{
public:
	class UUsableComponent*                      Usable;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUsabilityType                    UseType;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseHeld;                                          // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3223[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.UseComponent.CanUseCurrentUsable
struct UUseComponent_CanUseCurrentUsable_Params
{
public:
	enum class EUsabilityType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.UseComponent.CanInteractWithCurrentUsable
struct UUseComponent_CanInteractWithCurrentUsable_Params
{
public:
	enum class EUsabilityType                    Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ActorPartSetData.EnumeratePartListForPartType
struct UActorPartSetData_EnumeratePartListForPartType_Params
{
public:
	uint8                                        PartType;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3273[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UActorPartData*>                OutPartList;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.AIDodgeComponent.TriggerZoneDodge
struct UAIDodgeComponent_TriggerZoneDodge_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ZoneLoc;                                           // 0x10(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ZoneVel;                                           // 0x1C(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ActorRef;                                          // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.AIDodgeComponent.TriggerGrenadeDodge
struct UAIDodgeComponent_TriggerGrenadeDodge_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GrenadeLoc;                                        // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Instigator;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraDelay;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32F1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.AIDodgeComponent.TriggerDodge
struct UAIDodgeComponent_TriggerDodge_Params
{
public:
	enum class EAIDodgeType                      Type;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               SourceLoc;                                         // 0x4(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExtraDelay;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForced;                                           // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_32FC[0x2];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.AIDodgeComponent.TriggerBulletDodge
struct UAIDodgeComponent_TriggerBulletDodge_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MuzzleLoc;                                         // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BulletVel;                                         // 0x14(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.AISense_Bullet.ReportBulletEvent
struct UAISense_Bullet_ReportBulletEvent_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartLoc;                                          // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLoc;                                            // 0x14(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFirstEvent;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3329[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Instigator;                                        // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Strength;                                          // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.AISense_GbxSight.ForceSightEvent
struct UAISense_GbxSight_ForceSightEvent_Params
{
public:
	class UObject*                               WorldContext;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                SeenActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                LookingActor;                                      // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.AttributeInitializer.EvaluateBalanceFormula
struct UAttributeInitializer_EvaluateBalanceFormula_Params
{
public:
	float                                        Multiplier;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Level;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Power;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.AttributeInitializer.CalculateAttributeInitialValue
struct UAttributeInitializer_CalculateAttributeInitialValue_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34C9[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneTranslation
struct UBoneModBlueprintLibrary_SetBoneTranslation_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3529[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendTime;                                       // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 InBlendOption;                                     // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_352C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           InCustomBlendCurve;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale3D
struct UBoneModBlueprintLibrary_SetBoneScale3D_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale3D;                                           // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3541[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendTime;                                       // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 InBlendOption;                                     // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3547[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           InCustomBlendCurve;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneScale
struct UBoneModBlueprintLibrary_SetBoneScale_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_355B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendTime;                                       // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 InBlendOption;                                     // 0x1C(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3560[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           InCustomBlendCurve;                                // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneRotation
struct UBoneModBlueprintLibrary_SetBoneRotation_Params
{
public:
	class FName                                  BoneName;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_356F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendTime;                                       // 0x20(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 InBlendOption;                                     // 0x24(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3573[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           InCustomBlendCurve;                                // 0x28(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseTranslation
struct UBoneModBlueprintLibrary_SetBoneModUseTranslation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseTranslation;                                   // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3583[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseScale
struct UBoneModBlueprintLibrary_SetBoneModUseScale_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseScale;                                         // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModUseRotation
struct UBoneModBlueprintLibrary_SetBoneModUseRotation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseRotation;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35AE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslationSpace
struct UBoneModBlueprintLibrary_SetBoneModTranslationSpace_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35CB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTranslation
struct UBoneModBlueprintLibrary_SetBoneModTranslation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35E7[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModTransform
struct UBoneModBlueprintLibrary_SetBoneModTransform_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3605[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Transform;                                         // 0x10(0x30)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3606[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale3D
struct UBoneModBlueprintLibrary_SetBoneModScale3D_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3620[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModScale
struct UBoneModBlueprintLibrary_SetBoneModScale_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_362E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotationSpace
struct UBoneModBlueprintLibrary_SetBoneModRotationSpace_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3638[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModRotation
struct UBoneModBlueprintLibrary_SetBoneModRotation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x8(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_363C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceTranslation
struct UBoneModBlueprintLibrary_SetBoneModReplaceTranslation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceTranslation;                               // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3641[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceScale
struct UBoneModBlueprintLibrary_SetBoneModReplaceScale_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceScale;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3645[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModReplaceRotation
struct UBoneModBlueprintLibrary_SetBoneModReplaceRotation_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplaceRotation;                                  // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_364C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModName
struct UBoneModBlueprintLibrary_SetBoneModName_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewBoneModName;                                    // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfileState
struct UBoneModBlueprintLibrary_SetBoneModifyProfileState_Params
{
public:
	class FName                                  StateName;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3654[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3655[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModifyProfile
struct UBoneModBlueprintLibrary_SetBoneModifyProfile_Params
{
public:
	class UGbxBoneModifyProfile*                 BoneModifyProfile;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBoneName
struct UBoneModBlueprintLibrary_SetBoneModBoneName_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneModBoneName;                                   // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModBlendTime
struct UBoneModBlueprintLibrary_SetBoneModBlendTime_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BlendTime;                                         // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3663[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModAlphaBlend
struct UBoneModBlueprintLibrary_SetBoneModAlphaBlend_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAlphaBlend                           Blend;                                             // 0x8(0x38)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneModActive
struct UBoneModBlueprintLibrary_SetBoneModActive_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActive;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_366D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Target;                                            // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.SetBoneMod
struct UBoneModBlueprintLibrary_SetBoneMod_Params
{
public:
	struct FBoneModInstance                      InBoneMod;                                         // 0x0(0xE8)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  BoneModToSet;                                      // 0xE8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendIn;                                          // 0xF8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3674[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.RemoveBoneMod
struct UBoneModBlueprintLibrary_RemoveBoneMod_Params
{
public:
	class FName                                  BoneModToRemove;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendOut;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3677[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x100 (0x100 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.GetBoneMod
struct UBoneModBlueprintLibrary_GetBoneMod_Params
{
public:
	class FName                                  BoneModName;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneModInstance                      BoneMod;                                           // 0x8(0xE8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0xF0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xF8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_367C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.BoneModBlueprintLibrary.CreateBoneMod
struct UBoneModBlueprintLibrary_CreateBoneMod_Params
{
public:
	class FName                                  InBoneModName;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InBoneName;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InTranslation;                                     // 0x10(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              InRotation;                                        // 0x1C(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               InScale;                                           // 0x28(0xC)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InBlendTime;                                       // 0x34(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Target;                                            // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 InBlendOption;                                     // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3687[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           InCustomBlendCurve;                                // 0x48(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInUseTranslation;                                 // 0x50(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInUseRotation;                                    // 0x51(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInUseScale;                                       // 0x52(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReplaceTranslation;                             // 0x53(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReplaceRotation;                                // 0x54(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInReplaceScale;                                   // 0x55(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 InTranslationSpace;                                // 0x56(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 InRotationSpace;                                   // 0x57(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendIn;                                          // 0x58(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_368D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetIsStationary
struct UChallengeLevelActorComponent_SetIsStationary_Params
{
public:
	bool                                         bInIsStationary;                                   // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelActorComponent.SetInWorldIconEnabled
struct UChallengeLevelActorComponent_SetInWorldIconEnabled_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_IsStationary
struct UChallengeLevelActorComponent_OnRep_IsStationary_Params
{
public:
	bool                                         bOldIsStationary;                                  // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelActorComponent.OnRep_InWorldIconEnabled
struct UChallengeLevelActorComponent_OnRep_InWorldIconEnabled_Params
{
public:
	bool                                         bOldEnabled;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelActorComponent.GetAssociatedActor
struct UChallengeLevelActorComponent_GetAssociatedActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActorComponent
struct UChallengeLevelParentComponent_RemoveAssociatedActorComponent_Params
{
public:
	class UChallengeLevelActorComponent*         AssociatedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelParentComponent.RemoveAssociatedActor
struct UChallengeLevelParentComponent_RemoveAssociatedActor_Params
{
public:
	class AActor*                                AssociatedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.ChallengeLevelParentComponent.AddAssociatedActor
struct UChallengeLevelParentComponent_AddAssociatedActor_Params
{
public:
	class AActor*                                AssociatedActor;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UChallengeLevelActorComponent> ComponentClass;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RelativeOffset;                                    // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PushCinematicMode
struct UCinematicModeBlueprintLibrary_PushCinematicMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCinematicModeData*                    InCinematicMode;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.PopCinematicMode
struct UCinematicModeBlueprintLibrary_PopCinematicMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCinematicModeData*                    InCinematicMode;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearCinematicMode
struct UCinematicModeBlueprintLibrary_ClearCinematicMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.CinematicModeBlueprintLibrary.ClearAndSetCinematicMode
struct UCinematicModeBlueprintLibrary_ClearAndSetCinematicMode_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCinematicModeData*                    InCinematicMode;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.Beacon.OnBeaconSourceEndPlay
struct ABeacon_OnBeaconSourceEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36F4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StopControlledMove
struct UControlledMoveFunctionLibrary_StopControlledMove_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bZeroVelocity;                                     // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInterrupted;                                      // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_377C[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.StartControlledMove
struct UControlledMoveFunctionLibrary_StartControlledMove_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpeedOverride;                                     // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationOverride;                                  // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LaunchAngleOverride;                               // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3795[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                TargetActor;                                       // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x30(0xC)(Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_379A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingSpecificControlledMove
struct UControlledMoveFunctionLibrary_IsPerformingSpecificControlledMove_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UControlledMove>           ControlledMove;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37AE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ControlledMoveFunctionLibrary.IsPerformingControlledMove
struct UControlledMoveFunctionLibrary_IsPerformingControlledMove_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.CoordinatedEffectBlueprintLibrary.GetOriginalOverrideMaterialAtIndex
struct UCoordinatedEffectBlueprintLibrary_GetOriginalOverrideMaterialAtIndex_Params
{
public:
	class UMeshComponent*                        MeshComponent;                                     // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Index;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutActualIndex;                                    // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.DamageStatics.StopCausingDamageToTarget
struct UDamageStatics_StopCausingDamageToTarget_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageTarget;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageStatics.StopCausingDamageBySource
struct UDamageStatics_StopCausingDamageBySource_Params
{
public:
	class AActor*                                SourceActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DamageStatics.StopCausingDamage
struct UDamageStatics_StopCausingDamage_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageData>               DamageData;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DamageStatics.StopCausingAllDamage
struct UDamageStatics_StopCausingAllDamage_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C0 (0x2C0 - 0x0)
// Function GbxGameSystemCore.DamageStatics.MakePipelineDamageInput
struct UDamageStatics_MakePipelineDamageInput_Params
{
public:
	class AActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageReceiver;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x20(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0xB0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitDirection;                                      // 0xBC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitForceDirection;                                 // 0xC8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       HitForceMagnitude;                                 // 0xD8(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_38B9[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPipelineDamageInput                  ReturnValue;                                       // 0x100(0x1C0)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.DamageStatics.GetSummary_ForceSelection
struct UDamageStatics_GetSummary_ForceSelection_Params
{
public:
	struct FForceSelection                       ForceSelection;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DamageStatics.GetDamageTypeFromClass
struct UDamageStatics_GetDamageTypeFromClass_Params
{
public:
	TSubclassOf<class UGbxDamageType>            DamageTypeClass;                                   // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxDamageType*                        ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DamageStatics.GetDamageSourceFromClass
struct UDamageStatics_GetDamageSourceFromClass_Params
{
public:
	TSubclassOf<class UDamageSource>             DamageSourceClass;                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.DamageStatics.Conv_ForceSelectionToFloat
struct UDamageStatics_Conv_ForceSelectionToFloat_Params
{
public:
	struct FForceSelection                       ForceSelection;                                    // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_391C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.DamageStatics.Conv_FloatToForceSelection
struct UDamageStatics_Conv_FloatToForceSelection_Params
{
public:
	float                                        ForceSelection;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3934[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FForceSelection                       ReturnValue;                                       // 0x8(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.DamageStatics.ApplyDamageInRadius
struct UDamageStatics_ApplyDamageInRadius_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Origin;                                            // 0xC(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3963[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        IgnoreActors;                                      // 0x30(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           EventInstigator;                                   // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForceSelection                       BaseImpactForce;                                   // 0x50(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 DamagePreventionChannel;                           // 0x70(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDamageFalloff;                                    // 0x71(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_396D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UDamageModifierComponent*              DamageModifierComponent;                           // 0x78(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         InstigatorFeedback;                                // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseInstigatorRadiusDamageScale;                   // 0x88(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3972[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1D0 (0x1D0 - 0x0)
// Function GbxGameSystemCore.DamageStatics.ApplyDamageEx
struct UDamageStatics_ApplyDamageEx_Params
{
public:
	struct FPipelineDamageInput                  PipelineInput;                                     // 0x0(0x1C0)(Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x1C0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3981[0xC];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.DamageStatics.ApplyDamage
struct UDamageStatics_ApplyDamage_Params
{
public:
	class AActor*                                DamageReceiver;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseDamage;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39A9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UGbxDamageType>            DamageType;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             DamageSource;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           EventInstigator;                                   // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetStrengthMultiplier
struct UDynamicPhysicalAnimationComponent_SetStrengthMultiplier_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetSkeletalMeshComponent
struct UDynamicPhysicalAnimationComponent_SetSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                NewSkeletalMeshComponent;                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetRootMotionControl
struct UDynamicPhysicalAnimationComponent_SetRootMotionControl_Params
{
public:
	enum class EPhysicalAnimationRootMotionControl MotionControl;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetHasAnimationPlaying
struct UDynamicPhysicalAnimationComponent_SetHasAnimationPlaying_Params
{
public:
	bool                                         bPlaying;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnableRagdoll
struct UDynamicPhysicalAnimationComponent_SetEnableRagdoll_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetEnablePhysicalAnimation
struct UDynamicPhysicalAnimationComponent_SetEnablePhysicalAnimation_Params
{
public:
	bool                                         bEnable;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BodyName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.SetActiveProfile
struct UDynamicPhysicalAnimationComponent_SetActiveProfile_Params
{
public:
	class UPhysicalAnimationProfileAsset*        Profile;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xB8 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.OnRigidBodyOverlap
struct UDynamicPhysicalAnimationComponent_OnRigidBodyOverlap_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3ABB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x28(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetStrengthMultiplier
struct UDynamicPhysicalAnimationComponent_GetStrengthMultiplier_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.GetRootMotionControl
struct UDynamicPhysicalAnimationComponent_GetRootMotionControl_Params
{
public:
	enum class EPhysicalAnimationRootMotionControl ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.DetachBodyFromAllExternalRigidBodies
struct UDynamicPhysicalAnimationComponent_DetachBodyFromAllExternalRigidBodies_Params
{
public:
	class FName                                  BodyName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.DynamicPhysicalAnimationComponent.AttachBodyTo
struct UDynamicPhysicalAnimationComponent_AttachBodyTo_Params
{
public:
	class FName                                  BodyName;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AttachToComponent;                                 // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AttachToBodyName;                                  // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VelocitySpaceBlend;                                // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BreakForce;                                        // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestLocation
struct UEnvQueryParamsExt_RunEnvQueryForBestLocation_Params
{
public:
	class UObject*                               QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               ResultLocation;                                    // 0xC0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xCC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CC9[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD0 (0xD0 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForBestActor
struct UEnvQueryParamsExt_RunEnvQueryForBestActor_Params
{
public:
	class UObject*                               QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ResultActor;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D04[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllLocations
struct UEnvQueryParamsExt_RunEnvQueryForAllLocations_Params
{
public:
	class UObject*                               QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ResultLocations;                                   // 0xC0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xD8 (0xD8 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.RunEnvQueryForAllActors
struct UEnvQueryParamsExt_RunEnvQueryForAllActors_Params
{
public:
	class UObject*                               QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ResultActors;                                      // 0xC0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xD0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC0 (0xC0 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.HasQuery
struct UEnvQueryParamsExt_HasQuery_Params
{
public:
	struct FEnvQueryParams                       QueryParams;                                       // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xB8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DA9[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0xC8 - 0x0)
// Function GbxGameSystemCore.EnvQueryParamsExt.GetDescription
struct UEnvQueryParamsExt_GetDescription_Params
{
public:
	struct FEnvQueryParams                       QueryParams;                                       // 0x0(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0xB8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.ExplosionBlueprintLibrary.PlayExplosion
struct UExplosionBlueprintLibrary_PlayExplosion_Params
{
public:
	class UExplosionData*                        ExplosionData;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExplosionLocation;                                 // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystemComponent*              ReturnValue;                                       // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetImpactForce
struct UDamageInfoFunctionLibrary_SetImpactForce_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InImpactForce;                                     // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E8C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageType
struct UDamageInfoFunctionLibrary_SetDamageType_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            InDamageType;                                      // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageSource
struct UDamageInfoFunctionLibrary_SetDamageSource_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             InDamageSource;                                    // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageRadius
struct UDamageInfoFunctionLibrary_SetDamageRadius_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InDamageRadius;                                    // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3EE5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageModifierComponent
struct UDamageInfoFunctionLibrary_SetDamageModifierComponent_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UDamageModifierComponent*              InModifierComponent;                               // 0x58(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamageCauser
struct UDamageInfoFunctionLibrary_SetDamageCauser_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                InDamageCauser;                                    // 0x58(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetDamage
struct UDamageInfoFunctionLibrary_SetDamage_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InDamage;                                          // 0x58(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F3E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetCriticalHitDamageOverrides
struct UDamageInfoFunctionLibrary_SetCriticalHitDamageOverrides_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FCriticalHitDamageOverrides           Overrides;                                         // 0x58(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.SetApplyCriticalHitModsToAoEDamage
struct UDamageInfoFunctionLibrary_SetApplyCriticalHitModsToAoEDamage_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bApplyCriticalHitModsToAoEDamage;                  // 0x58(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F90[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetImpactForce
struct UDamageInfoFunctionLibrary_GetImpactForce_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x58(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FBD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageType
struct UDamageInfoFunctionLibrary_GetDamageType_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxDamageType>            ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageSource
struct UDamageInfoFunctionLibrary_GetDamageSource_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UDamageSource>             ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageRadius
struct UDamageInfoFunctionLibrary_GetDamageRadius_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x58(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageModifierComponent
struct UDamageInfoFunctionLibrary_GetDamageModifierComponent_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UDamageModifierComponent*              ReturnValue;                                       // 0x58(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamageCauser
struct UDamageInfoFunctionLibrary_GetDamageCauser_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetDamage
struct UDamageInfoFunctionLibrary_GetDamage_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x58(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4091[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetCriticalHitDamageOverrides
struct UDamageInfoFunctionLibrary_GetCriticalHitDamageOverrides_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FCriticalHitDamageOverrides           ReturnValue;                                       // 0x58(0x8)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.DamageInfoFunctionLibrary.GetApplyCriticalHitModsToAoEDamage
struct UDamageInfoFunctionLibrary_GetApplyCriticalHitModsToAoEDamage_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.ExplosionComponent.SetExplosionLocation
struct UExplosionComponent_SetExplosionLocation_Params
{
public:
	struct FVector                               NewLocation;                                       // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.ExplosionComponent.Explode
struct UExplosionComponent_Explode_Params
{
public:
	struct FDamageInfo                           DamageInfo;                                        // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function GbxGameSystemCore.ExplosionData.SelectExplosion
struct UExplosionData_SelectExplosion_Params
{
public:
	float                                        Size;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41A6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UDamageType>               DamageType;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FExplosionSizeProperties              ReturnValue;                                       // 0x10(0x50)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.ExplosionSizeSelectionData.GetExplosionPropertiesBySize
struct UExplosionSizeSelectionData_GetExplosionPropertiesBySize_Params
{
public:
	float                                        Size;                                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FExplosionSizeProperties              ReturnValue;                                       // 0x8(0x50)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FeedbackData.StopFeedbackForAll
struct UFeedbackData_StopFeedbackForAll_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FeedbackData.StopFeedback
struct UFeedbackData_StopFeedback_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedbackForAll
struct UFeedbackData_StopDefaultFeedbackForAll_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.FeedbackData.StopDefaultFeedback
struct UFeedbackData_StopDefaultFeedback_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAllAtLocation
struct UFeedbackData_PerformFeedbackForAllAtLocation_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedDistanceOverrides;                           // 0x14(0xC)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4275[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformFeedbackForAll
struct UFeedbackData_PerformFeedbackForAll_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42AB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformFeedbackAtLocation
struct UFeedbackData_PerformFeedbackAtLocation_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedDistanceOverrides;                           // 0x1C(0xC)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformFeedback
struct UFeedbackData_PerformFeedback_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4322[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAllAtLocation
struct UFeedbackData_PerformDefaultFeedbackForAllAtLocation_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedDistanceOverrides;                           // 0x1C(0xC)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4374[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackForAll
struct UFeedbackData_PerformDefaultFeedbackForAll_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4406[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               WorldContextObject;                                // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedbackAtLocation
struct UFeedbackData_PerformDefaultFeedbackAtLocation_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRangedDistanceOverrides              RangedDistanceOverrides;                           // 0x24(0xC)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ControllerToIgnore;                                // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFeedbackData*                         OverrideControllerFeedback;                        // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.FeedbackData.PerformDefaultFeedback
struct UFeedbackData_PerformDefaultFeedback_Params
{
public:
	struct FFeedbackTableRowHandle               Feedback;                                          // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class APlayerController*                     Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Scale;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44FA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FeedbackData.GetFeedbackDuration
struct UFeedbackData_GetFeedbackDuration_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_453B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FeedbackData.GetFeedbackDataRange
struct UFeedbackData_GetFeedbackDataRange_Params
{
public:
	class UFeedbackData*                         FeedbackData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRange;                                          // 0x8(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxRange;                                          // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.FXVolumeManager.OnVolumeDestroyed
struct UFXVolumeManager_OnVolumeDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.FXVolumeManager.OnPlayerDestroyed
struct UFXVolumeManager_OnPlayerDestroyed_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.FXVolume.SetVolumesActiveWithTag
struct AFXVolume_SetVolumesActiveWithTag_Params
{
public:
	bool                                         bWantsActive;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  SearchTag;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.FXVolume.SetActive
struct AFXVolume_SetActive_Params
{
public:
	bool                                         bNewActive;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.FXVolume.OnActorLeftVolume
struct AFXVolume_OnActorLeftVolume_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4712[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GbxGameSystemCore.FXVolume.OnActorEnteredVolume
struct AFXVolume_OnActorEnteredVolume_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFromSweep;                                        // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4749[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            OverlapInfo;                                       // 0x20(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameplayTagContainerComponent.GetGameplayTagContainerFromActor
struct UGameplayTagContainerComponent_GetGameplayTagContainerFromActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EContainsTagComponent             Branches;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTagContainerComponent*        ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xD8 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnLocation
struct UGameplayTask_RunEnvQuery_RunEnvQueryOnLocation_Params
{
public:
	class AActor*                                QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0xC0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTask_RunEnvQuery*             ReturnValue;                                       // 0xD0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQueryOnActor
struct UGameplayTask_RunEnvQuery_RunEnvQueryOnActor_Params
{
public:
	class AActor*                                QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0xC0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayTask_RunEnvQuery*             ReturnValue;                                       // 0xC8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.RunEnvQuery
struct UGameplayTask_RunEnvQuery_RunEnvQuery_Params
{
public:
	class AActor*                                QueryOwner;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEnvQueryParams                       QueryParams;                                       // 0x8(0xB8)(ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGameplayTask_RunEnvQuery*             ReturnValue;                                       // 0xC0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocations
struct UGameplayTask_RunEnvQuery_GetResultLocations_Params
{
public:
	struct FEnvQueryResult                       QueryResult;                                       // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       ResultLocations;                                   // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_47FC[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultLocation
struct UGameplayTask_RunEnvQuery_GetResultLocation_Params
{
public:
	struct FEnvQueryResult                       QueryResult;                                       // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FVector                               ResultLocation;                                    // 0x40(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_480A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActors
struct UGameplayTask_RunEnvQuery_GetResultActors_Params
{
public:
	struct FEnvQueryResult                       QueryResult;                                       // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        ResultActors;                                      // 0x40(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4817[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.GameplayTask_RunEnvQuery.GetResultActor
struct UGameplayTask_RunEnvQuery_GetResultActor_Params
{
public:
	struct FEnvQueryResult                       QueryResult;                                       // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                ResultActor;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x48(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_482A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.RemoveResourcePoolDelegate
struct UGameResourcePoolManagerComponent_RemoveResourcePoolDelegate_Params
{
public:
	class UGameResourceData*                     InResourceData;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegatePropertyName;                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ScriptDelegate;                                    // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.OnOwnerExperienceLevelChanged
struct UGameResourcePoolManagerComponent_OnOwnerExperienceLevelChanged_Params
{
public:
	int32                                        OldExperienceLevel;                                // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.GetResourcePoolByResource
struct UGameResourcePoolManagerComponent_GetResourcePoolByResource_Params
{
public:
	class UGameResourceData*                     Resource;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameResourcePoolReference            ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.CreatePool
struct UGameResourcePoolManagerComponent_CreatePool_Params
{
public:
	class UGameResourcePoolData*                 PoolData;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReinitializeExistingPool;                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4A59[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameResourcePoolReference            ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.ClearResourcePoolDelegate
struct UGameResourcePoolManagerComponent_ClearResourcePoolDelegate_Params
{
public:
	class UGameResourceData*                     InResourceData;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegatePropertyName;                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolManagerComponent.AddResourcePoolDelegate
struct UGameResourcePoolManagerComponent_AddResourcePoolDelegate_Params
{
public:
	class UGameResourceData*                     InResourceData;                                    // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  DelegatePropertyName;                              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ScriptDelegate;                                    // 0x10(0x10)(Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.SetResourcePoolValue
struct UGameResourcePoolFunctionLibrary_SetResourcePoolValue_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4ABD[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelayByGameResourceData
struct UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelayByGameResourceData_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourceData*                     Resource;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ResetResourcePoolRegenDelay
struct UGameResourcePoolFunctionLibrary_ResetResourcePoolRegenDelay_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.RefillResourcePoolByPercentage
struct UGameResourcePoolFunctionLibrary_RefillResourcePoolByPercentage_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Percentage;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPercentage;                                     // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.IsResourcePoolInState
struct UGameResourcePoolFunctionLibrary_IsResourcePoolInState_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EGameResourcePoolState            InState;                                           // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4AFB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xA0 (0xA0 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.GetDelegatePrefixForResourceEvent
struct UGameResourcePoolFunctionLibrary_GetDelegatePrefixForResourceEvent_Params
{
public:
	struct FGameResourceUserEvent                InResourceUserEvent;                               // 0x0(0x98)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x98(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolReference
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolReference_Params
{
public:
	struct FGameResourcePoolReference            A;                                                 // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FGameResourcePoolReference            B;                                                 // 0x18(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourcePoolData
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourcePoolData_Params
{
public:
	struct FGameResourcePoolReference            ResourcePoolReference;                             // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGameResourcePoolData*                 ResourcePoolData;                                  // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B32[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.EqualEqual_ResourceData
struct UGameResourcePoolFunctionLibrary_EqualEqual_ResourceData_Params
{
public:
	struct FGameResourcePoolReference            ResourcePoolReference;                             // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UGameResourceData*                     ResourceData;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B41[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DrainResourcePoolByPercentage
struct UGameResourcePoolFunctionLibrary_DrainResourcePoolByPercentage_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Percentage;                                        // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPercentage;                                     // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.DeleteResourcePool
struct UGameResourcePoolFunctionLibrary_DeleteResourcePool_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelayByGameResourceData
struct UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelayByGameResourceData_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameResourceData*                     Resource;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.ClearResourcePoolRegenDelay
struct UGameResourcePoolFunctionLibrary_ClearResourcePoolRegenDelay_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.BreakResourcePoolReference
struct UGameResourcePoolFunctionLibrary_BreakResourcePoolReference_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bValid;                                            // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4B98[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentValue;                                      // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinValue;                                          // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxValue;                                          // 0x24(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GameResourcePoolFunctionLibrary.AdjustResourcePoolValue
struct UGameResourcePoolFunctionLibrary_AdjustResourcePoolValue_Params
{
public:
	struct FGameResourcePoolReference            InPool;                                            // 0x0(0x18)(Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BA6[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameStatsComponent.UpdateStat
struct UGameStatsComponent_UpdateStat_Params
{
public:
	class UGameStatData*                         GameStat;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BE7[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameStatsComponent.IncrementStat
struct UGameStatsComponent_IncrementStat_Params
{
public:
	class UGameStatData*                         GameStat;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BEE[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameStatsComponent.GetStatValue
struct UGameStatsComponent_GetStatValue_Params
{
public:
	class UGameStatData*                         GameStat;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4BFC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GameStatsComponent.GetGameStats
struct UGameStatsComponent_GetGameStats_Params
{
public:
	TArray<struct FGameStat>                     ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameStatsManager.UpdateStat
struct AGameStatsManager_UpdateStat_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         GameStat;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C29[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameStatsManager.IncrementStat
struct AGameStatsManager_IncrementStat_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         GameStat;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        IncrementAmount;                                   // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C40[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GameStatsManager.GetStatValue
struct AGameStatsManager_GetStatValue_Params
{
public:
	class AActor*                                StatContext;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         GameStat;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C52[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnStrike
struct UGbxAction_AICharge_OnStrike_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnStopForFriendly
struct UGbxAction_AICharge_OnStopForFriendly_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnReachCliff
struct UGbxAction_AICharge_OnReachCliff_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnMiss
struct UGbxAction_AICharge_OnMiss_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnLoop
struct UGbxAction_AICharge_OnLoop_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxAction_AICharge.OnHitWall
struct UGbxAction_AICharge_OnHitWall_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesTarget
struct UStretchBonesBlueprintLibrary_SetStretchBonesTarget_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetPosition;                                    // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DA1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.StretchBonesBlueprintLibrary.SetStretchBonesDistance
struct UStretchBonesBlueprintLibrary_SetStretchBonesDistance_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        Distance;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DB0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopLoopingActionClass
struct UGbxActionBlueprintLibrary_StopLoopingActionClass_Params
{
public:
	TSubclassOf<class UGbxAction_Loop>           ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionSlot
struct UGbxActionBlueprintLibrary_StopActionSlot_Params
{
public:
	class FName                                  ActionSlotName;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActions
struct UGbxActionBlueprintLibrary_StopActions_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.StopActionClass
struct UGbxActionBlueprintLibrary_StopActionClass_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetObjectGbxActionRegister
struct UGbxActionBlueprintLibrary_SetObjectGbxActionRegister_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  RegisterKey;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Value;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetNameGbxActionRegister
struct UGbxActionBlueprintLibrary_SetNameGbxActionRegister_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  RegisterKey;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E01[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetIntGbxActionRegister
struct UGbxActionBlueprintLibrary_SetIntGbxActionRegister_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  RegisterKey;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E0E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.SetFloatGbxActionRegister
struct UGbxActionBlueprintLibrary_SetFloatGbxActionRegister_Params
{
public:
	TArray<struct FGbxActionRegister>            GbxActionRegisters;                                // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FName                                  RegisterKey;                                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicates;                                       // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E1E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGbxActionRegister>            ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionPlayRate
struct UGbxActionBlueprintLibrary_K2_UpdateActionPlayRate_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E2D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_UpdateActionDirection
struct UGbxActionBlueprintLibrary_K2_UpdateActionDirection_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x8(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E30[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_StopActionObj
struct UGbxActionBlueprintLibrary_K2_StopActionObj_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ShowGbxActionScreenLogs
struct UGbxActionBlueprintLibrary_K2_ShowGbxActionScreenLogs_Params
{
public:
	bool                                         bShowLogsOnScreen;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Resume
struct UGbxActionBlueprintLibrary_K2_Resume_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedProceedToNextSection
struct UGbxActionBlueprintLibrary_K2_ReplicatedProceedToNextSection_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ReplicatedJumpToNextSection
struct UGbxActionBlueprintLibrary_K2_ReplicatedJumpToNextSection_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_ProceedToNextSection
struct UGbxActionBlueprintLibrary_K2_ProceedToNextSection_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_Pause
struct UGbxActionBlueprintLibrary_K2_Pause_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_JumpToNextSection
struct UGbxActionBlueprintLibrary_K2_JumpToNextSection_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetTimeRemaining
struct UGbxActionBlueprintLibrary_K2_GetTimeRemaining_Params
{
public:
	class UGbxAction*                            Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E66[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetMaxCurrentTime
struct UGbxActionBlueprintLibrary_K2_GetMaxCurrentTime_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4E6F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.K2_GetActionByClass
struct UGbxActionBlueprintLibrary_K2_GetActionByClass_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAction*                            ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetSummary_AnimActionDef
struct UGbxActionBlueprintLibrary_GetSummary_AnimActionDef_Params
{
public:
	struct FAnimActionDef                        AnimActionDef;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxActionBlueprintLibrary.GetKeyedActionClass
struct UGbxActionBlueprintLibrary_GetKeyedActionClass_Params
{
public:
	struct FGameplayTag                          ActionKey;                                         // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UGbxAction>                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.UpdateActionRemoteServer
struct UGbxActionComponent_UpdateActionRemoteServer_Params
{
public:
	struct FActionState_Base                     ActionData;                                        // 0x0(0xC8)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.StopOnRemoteServer
struct UGbxActionComponent_StopOnRemoteServer_Params
{
public:
	int32                                        ManagerRepId;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxActionEndState                EndState;                                          // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EB2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.StopLoopingActionClass
struct UGbxActionComponent_StopLoopingActionClass_Params
{
public:
	TSubclassOf<class UGbxAction_Loop>           ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.StopActionSlot
struct UGbxActionComponent_StopActionSlot_Params
{
public:
	class FName                                  ActionSlotName;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.StopActionClass
struct UGbxActionComponent_StopActionClass_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.PlayOnRemoteServer
struct UGbxActionComponent_PlayOnRemoteServer_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FActionState_Base                     ActionData;                                        // 0x8(0xC8)(Parm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.OnComponentUnregistered
struct UGbxActionComponent_OnComponentUnregistered_Params
{
public:
	class UActorComponent*                       ActorComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.OnComponentDetached
struct UGbxActionComponent_OnComponentDetached_Params
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.OnComponentAttached
struct UGbxActionComponent_OnComponentAttached_Params
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.K2_Play
struct UGbxActionComponent_K2_Play_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAction*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.K2_IsPlayingObj
struct UGbxActionComponent_K2_IsPlayingObj_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4EF6[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionBySlot
struct UGbxActionComponent_K2_GetActionBySlot_Params
{
public:
	class FName                                  ActionSlotName;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAction*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.K2_GetActionByClass
struct UGbxActionComponent_K2_GetActionByClass_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxAction*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.IsPlayingSlot
struct UGbxActionComponent_IsPlayingSlot_Params
{
public:
	class FName                                  ActionSlotName;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F0B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxActionComponent.IsPlayingClass
struct UGbxActionComponent_IsPlayingClass_Params
{
public:
	TSubclassOf<class UGbxAction>                ActionClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F18[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAnimBlueprintProfile.AnimBlueprintImportFunction
struct UGbxAnimBlueprintProfile_AnimBlueprintImportFunction_Params
{
public:
	enum class EAnimBPProfileImport              ImportType;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAttributeData.CanSetBaseValue
struct UGbxAttributeData_CanSetBaseValue_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAttributeData.CanBindToOnChangedEvent
struct UGbxAttributeData_CanBindToOnChangedEvent_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAttributeData.CanAddModifiers
struct UGbxAttributeData_CanAddModifiers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxAttributeData.CanAddAndRemoveModifiers
struct UGbxAttributeData_CanAddAndRemoveModifiers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindFromOnAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindFromOnAttributeChanged_Params
{
public:
	struct FGbxAttributeDelegateBindingHandle    BindingHandle;                                     // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindEventFromOnIntegerAttributeChanged_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4FFC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindEventFromOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindEventFromOnFloatAttributeChanged_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5008[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnIntegerAttributeChanged_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.UnbindAllEventsFromOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_UnbindAllEventsFromOnFloatAttributeChanged_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveMultipleAttributeModifiers
struct UGbxAttributeFunctionLibrary_RemoveMultipleAttributeModifiers_Params
{
public:
	TArray<struct FGbxAttributeModifierHandle>   ModifierHandles;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveModifierFromGbxAttribute
struct UGbxAttributeFunctionLibrary_RemoveModifierFromGbxAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeModifierHandle           ModifierHandle;                                    // 0x10(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierActionExecOutput ModifierActionResult;                              // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5040[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RemoveAttributeModifier
struct UGbxAttributeFunctionLibrary_RemoveAttributeModifier_Params
{
public:
	struct FGbxAttributeModifierHandle           ModifierHandle;                                    // 0x0(0x10)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_504F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x68 (0x68 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.RefreshBindingToOnAttributeChangedEvent
struct UGbxAttributeFunctionLibrary_RefreshBindingToOnAttributeChangedEvent_Params
{
public:
	struct FGbxAttributeDelegateBindingHandle    BindingHandle;                                     // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeDelegateBindingHandle    ReturnValue;                                       // 0x38(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeInteger
struct UGbxAttributeFunctionLibrary_MakeGbxAttributeInteger_Params
{
public:
	int32                                        BaseValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeInteger                  ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.MakeGbxAttributeFloat
struct UGbxAttributeFunctionLibrary_MakeGbxAttributeFloat_Params
{
public:
	float                                        BaseValue;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsInteger
struct UGbxAttributeFunctionLibrary_GetValueOfAttributeAsInteger_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DefaultValue;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttributeAsBoolean
struct UGbxAttributeFunctionLibrary_GetValueOfAttributeAsBoolean_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         DefaultValue;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5097[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueOfAttribute
struct UGbxAttributeFunctionLibrary_GetValueOfAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x14(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.GetValueFromAttributeDefinedRow
struct UGbxAttributeFunctionLibrary_GetValueFromAttributeDefinedRow_Params
{
public:
	struct FDataTableRowHandle                   RowHandle;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50BF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializer
struct UGbxAttributeFunctionLibrary_EvaluateAttributeInitializer_Params
{
public:
	TSubclassOf<class UAttributeInitializer>     Initializer;                                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50D8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EvaluateAttributeInitializationData
struct UGbxAttributeFunctionLibrary_EvaluateAttributeInitializationData_Params
{
public:
	struct FAttributeInitializationData          InitializationData;                                // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x40(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_50ED[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeIntegerValue
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeIntegerValue_Params
{
public:
	struct FGbxAttributeInteger                  A;                                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        B;                                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5101[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeInteger
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeInteger_Params
{
public:
	struct FGbxAttributeInteger                  A;                                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeInteger                  B;                                                 // 0xC(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_511E[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloatValue
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloatValue_Params
{
public:
	struct FGbxAttributeFloat                    A;                                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        B;                                                 // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_512D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.EqualEqual_GbxAttributeFloat
struct UGbxAttributeFunctionLibrary_EqualEqual_GbxAttributeFloat_Params
{
public:
	struct FGbxAttributeFloat                    A;                                                 // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxAttributeFloat                    B;                                                 // 0xC(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5145[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeModifierHandleToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeModifierHandleToString_Params
{
public:
	struct FGbxAttributeModifierHandle           Attribute;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToString_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_515F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeIntegerToInteger
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeIntegerToInteger_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToString
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToString_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_517C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_GbxAttributeFloatToFloat
struct UGbxAttributeFunctionLibrary_Conv_GbxAttributeFloatToFloat_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0xC(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.Conv_AttributeInitializationDataToString
struct UGbxAttributeFunctionLibrary_Conv_AttributeInitializationDataToString_Params
{
public:
	struct FAttributeInitializationData          InitData;                                          // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeInteger
struct UGbxAttributeFunctionLibrary_BreakGbxAttributeInteger_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BaseValue;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BreakGbxAttributeFloat
struct UGbxAttributeFunctionLibrary_BreakGbxAttributeFloat_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0xC(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseValue;                                         // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnIntegerAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnIntegerAttributeChanged_Params
{
public:
	struct FGbxAttributeInteger                  Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnFloatAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnFloatAttributeChanged_Params
{
public:
	struct FGbxAttributeFloat                    Attribute;                                         // 0x0(0xC)(Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_51E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.BindEventToOnAttributeChanged
struct UGbxAttributeFunctionLibrary_BindEventToOnAttributeChanged_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           Delegate;                                          // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FGbxAttributeDelegateBindingHandle    ReturnValue;                                       // 0x20(0x30)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeEffects
struct UGbxAttributeFunctionLibrary_ApplyMultipleAttributeEffects_Params
{
public:
	TArray<struct FAttributeEffectData>          Effects;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               ModifierValueContext;                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AttributeToModifyContextSource;                    // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGbxAttributeModifierHandle>   ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyMultipleAttributeBaseValueData
struct UGbxAttributeFunctionLibrary_ApplyMultipleAttributeBaseValueData_Params
{
public:
	TArray<struct FAttributeBaseValueData>       BaseValueData;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UObject*                               AttributeToSetContextSource;                       // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ValueContext;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeEffect
struct UGbxAttributeFunctionLibrary_ApplyAttributeEffect_Params
{
public:
	struct FAttributeEffectData                  Effect;                                            // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ModifierValueContext;                              // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               AttributeToModifyContextSource;                    // 0x50(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierActionExecOutput ModifierActionResult;                              // 0x58(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_521A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           ReturnValue;                                       // 0x60(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.ApplyAttributeBaseValueData
struct UGbxAttributeFunctionLibrary_ApplyAttributeBaseValueData_Params
{
public:
	struct FAttributeBaseValueData               BaseValueData;                                     // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               AttributeToSetContextSource;                       // 0x40(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ValueContext;                                      // 0x48(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierActionExecOutput ModifierActionResult;                              // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_522C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.GbxAttributeFunctionLibrary.AddModifierToGbxAttribute
struct UGbxAttributeFunctionLibrary_AddModifierToGbxAttribute_Params
{
public:
	class UGbxAttributeData*                     Attribute;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierType         ModifierType;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5238[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ModifierValue;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGbxAttributeModifierActionExecOutput ModifierActionResult;                              // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_523A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGbxAttributeModifierHandle           ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxAttributesComponent.IsAttributeSetClassUnrelatedToExistingSet
struct UGbxAttributesComponent_IsAttributeSetClassUnrelatedToExistingSet_Params
{
public:
	class UClass*                                AttributeSetClass;                                 // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5255[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsVector
struct UGbxBlackboardKeySelectorExt_SetValueAsVector_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Value;                                             // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_527A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A8 (0x3A8 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsTargetActorInfo
struct UGbxBlackboardKeySelectorExt_SetValueAsTargetActorInfo_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetActorInfo                      Value;                                             // 0x18(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsString
struct UGbxBlackboardKeySelectorExt_SetValueAsString_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsRotator
struct UGbxBlackboardKeySelectorExt_SetValueAsRotator_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Value;                                             // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_528D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsObject
struct UGbxBlackboardKeySelectorExt_SetValueAsObject_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Value;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsName
struct UGbxBlackboardKeySelectorExt_SetValueAsName_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsInt
struct UGbxBlackboardKeySelectorExt_SetValueAsInt_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Value;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52A5[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFloat
struct UGbxBlackboardKeySelectorExt_SetValueAsFloat_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52AC[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsFlag
struct UGbxBlackboardKeySelectorExt_SetValueAsFlag_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52C2[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Duration;                                          // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsEnum
struct UGbxBlackboardKeySelectorExt_SetValueAsEnum_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Value;                                             // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52D5[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsClass
struct UGbxBlackboardKeySelectorExt_SetValueAsClass_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Value;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.SetValueAsBool
struct UGbxBlackboardKeySelectorExt_SetValueAsBool_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52F1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsVector
struct UGbxBlackboardKeySelectorExt_GetValueAsVector_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52FF[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A8 (0x3A8 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsTargetActorInfo
struct UGbxBlackboardKeySelectorExt_GetValueAsTargetActorInfo_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetActorInfo                      ReturnValue;                                       // 0x18(0x390)(Parm, OutParm, ReturnParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsString
struct UGbxBlackboardKeySelectorExt_GetValueAsString_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsRotator
struct UGbxBlackboardKeySelectorExt_GetValueAsRotator_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_531F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsObject
struct UGbxBlackboardKeySelectorExt_GetValueAsObject_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsName
struct UGbxBlackboardKeySelectorExt_GetValueAsName_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsInt
struct UGbxBlackboardKeySelectorExt_GetValueAsInt_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_533D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsFloat
struct UGbxBlackboardKeySelectorExt_GetValueAsFloat_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5345[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsEnum
struct UGbxBlackboardKeySelectorExt_GetValueAsEnum_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_534E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsClass
struct UGbxBlackboardKeySelectorExt_GetValueAsClass_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsBool
struct UGbxBlackboardKeySelectorExt_GetValueAsBool_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5365[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetValueAsActor
struct UGbxBlackboardKeySelectorExt_GetValueAsActor_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.GetPropertyDescription
struct UGbxBlackboardKeySelectorExt_GetPropertyDescription_Params
{
public:
	struct FGbxBlackboardKeySelector             BBKey;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UProperty*                             Property;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxBlackboardKeySelectorExt.ClearValue
struct UGbxBlackboardKeySelectorExt_ClearValue_Params
{
public:
	struct FGbxBlackboardKeySelector             Key;                                               // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxCondition_Blueprint.EvaluateCondition
struct UGbxCondition_Blueprint_EvaluateCondition_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               OptionalContext;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_53BD[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.GbxCondition_List.RequiresNativeClass
struct UGbxCondition_List_RequiresNativeClass_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxCondition_List.GetRequiredInterface
struct UGbxCondition_List_GetRequiredInterface_Params
{
public:
	class UClass*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValueFromHandle
struct UGbxDataTableFunctionLibrary_GetDataTableValueFromHandle_Params
{
public:
	struct FDataTableValueHandle                 ValueHandle;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultValue;                                      // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x24(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.GetDataTableValue
struct UGbxDataTableFunctionLibrary_GetDataTableValue_Params
{
public:
	class UDataTable*                            Table;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RowName;                                           // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ValueName;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                         ValueInStructType;                                 // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutValue;                                          // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_547D[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxDataTableFunctionLibrary.Conv_DataTableValueHandleToString
struct UGbxDataTableFunctionLibrary_Conv_DataTableValueHandleToString_Params
{
public:
	struct FDataTableValueHandle                 ValueHandle;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxEqsRenderingComponent.GetAvailableEnvQueryParamRefNames
struct UGbxEqsRenderingComponent_GetAvailableEnvQueryParamRefNames_Params
{
public:
	TArray<class FString>                        Names;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxFeedbackBase.StopGbxFeedback
struct UGbxFeedbackBase_StopGbxFeedback_Params
{
public:
	class UGbxFeedbackBase*                      FeedbackData;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData3D
struct UGbxFeedbackBase_PlayGbxFeedbackData3D_Params
{
public:
	class UGbxFeedbackBase*                      FeedbackData;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SourceLocation;                                    // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreController;                                 // 0x25(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54FA[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_54FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               SourceContext;                                     // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloffMinDistance;                          // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EffectFalloffMaxDistance;                          // 0x3C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxFeedbackBase.PlayGbxFeedbackData2D
struct UGbxFeedbackBase_PlayGbxFeedbackData2D_Params
{
public:
	class UGbxFeedbackBase*                      FeedbackData;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               WorldContextObject;                                // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxPlayerController*                  Controller;                                        // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreController;                                 // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_550E[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Scale;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               SourceContext;                                     // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagValue
struct UGbxFlagFunctionLibrary_SetFlagValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bNewValue;                                         // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5557[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagTrueTimed
struct UGbxFlagFunctionLibrary_SetFlagTrueTimed_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataValue
struct UGbxFlagFunctionLibrary_SetFlagDataValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewValue;                                         // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5567[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.SetFlagDataTrueTimed
struct UGbxFlagFunctionLibrary_SetFlagDataTrueTimed_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5570[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagValue
struct UGbxFlagFunctionLibrary_GetFlagValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_557B[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.GetFlagDataValue
struct UGbxFlagFunctionLibrary_GetFlagDataValue_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_557F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueWithin
struct UGbxFlagFunctionLibrary_FlagTrueWithin_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5580[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagTrueFor
struct UGbxFlagFunctionLibrary_FlagTrueFor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5585[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseWithin
struct UGbxFlagFunctionLibrary_FlagFalseWithin_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5589[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagFalseFor
struct UGbxFlagFunctionLibrary_FlagFalseFor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGbxFlag                              Flag;                                              // 0x8(0xC)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_558D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueWithin
struct UGbxFlagFunctionLibrary_FlagDataTrueWithin_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5591[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataTrueFor
struct UGbxFlagFunctionLibrary_FlagDataTrueFor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_559A[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseWithin
struct UGbxFlagFunctionLibrary_FlagDataFalseWithin_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55A2[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxFlagFunctionLibrary.FlagDataFalseFor
struct UGbxFlagFunctionLibrary_FlagDataFalseFor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxFlagData*                          FlagData;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ContextSource;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CheckTime;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55AA[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseWith
struct UGbxGameplayStatics_SetTeamCollisionResponseWith_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TeamActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnore;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionResponseToChannel
struct UGbxGameplayStatics_SetTeamCollisionResponseToChannel_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamCollisionChannel             Channel;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnore;                                           // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55D5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannelFrom
struct UGbxGameplayStatics_SetTeamCollisionChannelFrom_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TeamActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOn;                                               // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55DE[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetTeamCollisionChannel
struct UGbxGameplayStatics_SetTeamCollisionChannel_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamCollisionChannel             Channel;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOn;                                               // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55E5[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetPlayerMaster
struct UGbxGameplayStatics_SetPlayerMaster_Params
{
public:
	class AActor*                                AIActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                PlayerMaster;                                      // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55EF[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseWith
struct UGbxGameplayStatics_SetComponentTeamCollisionResponseWith_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TeamActor;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnore;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_55FB[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionResponseToChannel
struct UGbxGameplayStatics_SetComponentTeamCollisionResponseToChannel_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamCollisionChannel             Channel;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnore;                                           // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5604[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.SetComponentTeamCollisionChannel
struct UGbxGameplayStatics_SetComponentTeamCollisionChannel_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamCollisionChannel             Channel;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOn;                                               // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPropagateToChildren;                              // 0xA(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_560E[0x5];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.ProjectFromQueryToSimulation
struct UGbxGameplayStatics_ProjectFromQueryToSimulation_Params
{
public:
	class UGbxSkeletalMeshComponent*             Component;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BodyName;                                          // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOutHitPoint;                                     // 0x10(0xC)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InOutHitNormal;                                    // 0x1C(0xC)(Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.GetPrimaryPlayerController
struct UGbxGameplayStatics_GetPrimaryPlayerController_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APlayerController*                     ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.GetAssociatedPrimaryCharacter
struct UGbxGameplayStatics_GetAssociatedPrimaryCharacter_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxCharacter*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.GetAssociatedCurrentlyUsedCharacter
struct UGbxGameplayStatics_GetAssociatedCurrentlyUsedCharacter_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGbxCharacter*                         ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.ExternalProfilerBookmark
struct UGbxGameplayStatics_ExternalProfilerBookmark_Params
{
public:
	class FString                                Mark;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function GbxGameSystemCore.GbxGameplayStatics.AlignTransformToSurface
struct UGbxGameplayStatics_AlignTransformToSurface_Params
{
public:
	struct FTransform                            Transform;                                         // 0x0(0x30)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SurfaceNormal;                                     // 0x30(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5617[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReturnValue;                                       // 0x40(0x30)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStatForParty
struct UGbxGameStatsBlueprintLibrary_UpdateStatForParty_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_561F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.UpdateStat
struct UGbxGameStatsBlueprintLibrary_UpdateStat_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5620[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStatForParty
struct UGbxGameStatsBlueprintLibrary_IncrementStatForParty_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5621[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.IncrementStat
struct UGbxGameStatsBlueprintLibrary_IncrementStat_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5623[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.GetStatValue
struct UGbxGameStatsBlueprintLibrary_GetStatValue_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5624[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStatForParty
struct UGbxGameStatsBlueprintLibrary_DecrementStatForParty_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5630[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameStatsBlueprintLibrary.DecrementStat
struct UGbxGameStatsBlueprintLibrary_DecrementStat_Params
{
public:
	class AActor*                                ContextActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameStatData*                         StatData;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Amount;                                            // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_563A[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.SetComponentPhysicalRotation
struct UGbxGameSystemCoreBlueprintLibrary_SetComponentPhysicalRotation_Params
{
public:
	class UPrimitiveComponent*                   Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PitchRotation;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        YawRotation;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RollRotation;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5648[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTurns
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTurns_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTickAndRefreshBones
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTickAndRefreshBones_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockTargeting
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockTargeting_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockRotation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMovement_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMomentum
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMomentum_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockMantling
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockMantling_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAtTargetLocation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAtTargetLocation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLookAt
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLookAt_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockLadderMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockLadderMovement_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockJumping
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockJumping_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockHandIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockHandIk_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockGod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockGod_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIkTracing
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIkTracing_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockFootIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockFootIk_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDodging
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDodging_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockDemigod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockDemigod_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockCrouching
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockCrouching_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAIThinking
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAIThinking_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceUnlockAiming
struct UGbxGameSystemCoreBlueprintLibrary_ResourceUnlockAiming_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTurns
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTurns_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTickAndRefreshBones
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTickAndRefreshBones_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargeting
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTargeting_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargetableByNonPlayers
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTargetableByNonPlayers_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTargetable;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56CB[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockTargetable
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockTargetable_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTargetable;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_56D2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockRotation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockPhysicsRotation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockPhysicsRotation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMovement_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMomentum
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMomentum_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockMantling
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockMantling_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAtTargetLocation
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAtTargetLocation_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLookAt
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockLookAt_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockLadderMovement
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockLadderMovement_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockJumping
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockJumping_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockHandIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockHandIk_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockGod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockGod_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIkTracing
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIkTracing_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockFootIk
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockFootIk_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDodging
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockDodging_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockDemigod
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockDemigod_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockCrouching
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockCrouching_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAIThinking
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockAIThinking_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAbort;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5720[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.ResourceLockAiming
struct UGbxGameSystemCoreBlueprintLibrary_ResourceLockAiming_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsSplitScreen
struct UGbxGameSystemCoreBlueprintLibrary_IsSplitScreen_Params
{
public:
	class UGameInstance*                         GameInstance;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_572B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsPlayer
struct UGbxGameSystemCoreBlueprintLibrary_IsPlayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_572F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.IsContentCensored
struct UGbxGameSystemCoreBlueprintLibrary_IsContentCensored_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5735[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.HoverComponentAtActor
struct UGbxGameSystemCoreBlueprintLibrary_HoverComponentAtActor_Params
{
public:
	class USceneComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Altitude;                                          // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AccelerationTime;                                  // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Speed;                                             // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Duration;                                          // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5747[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLatentActionInfo                     LatentInfo;                                        // 0x28(0x18)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetRelativeDirection
struct UGbxGameSystemCoreBlueprintLibrary_GetRelativeDirection_Params
{
public:
	struct FRelativeDirectionData                RelativeDirectionData;                             // 0x0(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               DefaultDirection;                                  // 0x50(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5753[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                SourceActor;                                       // 0x60(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x68(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                TargetActor;                                       // 0x70(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x78(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5755[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x80 (0x80 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetCurveFloatValue
struct UGbxGameSystemCoreBlueprintLibrary_GetCurveFloatValue_Params
{
public:
	struct FRuntimeFloatCurve                    Curve;                                             // 0x0(0x78)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	float                                        InTime;                                            // 0x78(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x7C(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5761[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAnyPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAnyPlayersOverlappingActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5767[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_576F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetAreAllPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_GetAreAllPlayersOverlappingActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5776[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.GetActorListTrimmedToBestCluster
struct UGbxGameSystemCoreBlueprintLibrary_GetActorListTrimmedToBestCluster_Params
{
public:
	TArray<class AActor*>                        OutputActors;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector                               ClusterMidpoint;                                   // 0x10(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5777[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        InputActors;                                       // 0x20(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class AActor*                                SourceActor;                                       // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ClusterRadius;                                     // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreferClusterContainingCurrentTarget;             // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5779[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsPlayer
struct UGbxGameSystemCoreBlueprintLibrary_BranchOnIsPlayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIsPlayerExecOutput               Branches;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_577C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.BranchOnIsAutonomous
struct UGbxGameSystemCoreBlueprintLibrary_BranchOnIsAutonomous_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EIsAutonomousOuput                Branches;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_577F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPlayersOverlappingActorOutput    Branches;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5786[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersOverlappingActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayersOverlappingActorOutput    Branches;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_578C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAnyPlayersInVolume
struct UGbxGameSystemCoreBlueprintLibrary_AreAnyPlayersInVolume_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AVolume*>                       Volumes;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPlayersInVolumeOutput            Branches;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5795[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActors
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActors_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        Actors;                                            // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPlayersOverlappingActorOutput    Branches;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_579C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersOverlappingActor
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersOverlappingActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayersOverlappingActorOutput    Branches;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57A7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.GbxGameSystemCoreBlueprintLibrary.AreAllPlayersInVolume
struct UGbxGameSystemCoreBlueprintLibrary_AreAllPlayersInVolume_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AVolume*>                       Volumes;                                           // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	enum class EPlayersInVolumeOutput            Branches;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57B7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxMediaManager.OnMovieMediaOpenFailed
struct UGbxMediaManager_OnMovieMediaOpenFailed_Params
{
public:
	class FString                                DeviceUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxMediaManager.GbxPlayMovie
struct UGbxMediaManager_GbxPlayMovie_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGbxMediaData*                         InMediaData;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxNavAvoidanceInterface.SetObstacleAvoidanceLock
struct IGbxNavAvoidanceInterface_SetObstacleAvoidanceLock_Params
{
public:
	bool                                         bDisable;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Reason;                                            // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.IsValueInRangePure
struct UGbxParamExt_IsValueInRangePure_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5806[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5808[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.IsValueInRange
struct UGbxParamExt_IsValueInRange_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x80(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_580D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               Context;                                           // 0x88(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_580E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x98 (0x98 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.GetParamPropertyDescription
struct UGbxParamExt_GetParamPropertyDescription_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UProperty*                             Property;                                          // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x88(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.GetParamDescriptionText
struct UGbxParamExt_GetParamDescriptionText_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x80(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.GetParamDescription
struct UGbxParamExt_GetParamDescription_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x80(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescriptionText
struct UGbxParamExt_GetNamedParamDescriptionText_Params
{
public:
	struct FGbxNamedParam                        Param;                                             // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FText                                  ReturnValue;                                       // 0x88(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.GetNamedParamDescription
struct UGbxParamExt_GetNamedParamDescription_Params
{
public:
	struct FGbxNamedParam                        Param;                                             // 0x0(0x88)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x88(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.EvaluatePure
struct UGbxParamExt_EvaluatePure_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x88(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_581D[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.EvaluateIntPure
struct UGbxParamExt_EvaluateIntPure_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x88(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5822[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.EvaluateInt
struct UGbxParamExt_EvaluateInt_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x88(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5827[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.EvaluateBoolPure
struct UGbxParamExt_EvaluateBoolPure_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_582F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.EvaluateBool
struct UGbxParamExt_EvaluateBool_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x88(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_583B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x90 (0x90 - 0x0)
// Function GbxGameSystemCore.GbxParamExt.Evaluate
struct UGbxParamExt_Evaluate_Params
{
public:
	struct FGbxParam                             Param;                                             // 0x0(0x80)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x80(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x88(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_584C[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxParticleSystemComponent.IsCustomizationTargetFor
struct UGbxParticleSystemComponent_IsCustomizationTargetFor_Params
{
public:
	class UGbxCustomizationTargetData*           TargetToTest;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_585B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxPhysicsSettings.StaticSetRigidDynamicDominance
struct UGbxPhysicsSettings_StaticSetRigidDynamicDominance_Params
{
public:
	class UPrimitiveComponent*                   Comp;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAesthetic;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5870[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BodyName;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxPhysicsSettings.StaticSetRigidBodySimulationInteractability
struct UGbxPhysicsSettings_StaticSetRigidBodySimulationInteractability_Params
{
public:
	class USkeletalMeshComponent*                Comp;                                              // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAesthetic;                                        // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5879[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BodyName;                                          // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxQueryManager.NotifyAIHotSpotListChangedFor
struct UGbxQueryManager_NotifyAIHotSpotListChangedFor_Params
{
public:
	class AActor*                                OwnerActor;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GbxSignificanceSettings.EnumerateSignificanceEvents
struct UGbxSignificanceSettings_EnumerateSignificanceEvents_Params
{
public:
	TArray<class FName>                          OutEvents;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateVectorMotion
struct UGbxSimpleMotionLibrary_UpdateVectorMotion_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CurrentValue;                                      // 0x4(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58AA[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    Data;                                              // 0x18(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetValue;                                       // 0x3C(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionInstanceState            State;                                             // 0x48(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateRotatorMotion
struct UGbxSimpleMotionLibrary_UpdateRotatorMotion_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CurrentValue;                                      // 0x4(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    Data;                                              // 0x18(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetValue;                                       // 0x3C(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShortestRotation;                                 // 0x48(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58B0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionInstanceState            State;                                             // 0x4C(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_58B1[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.UpdateFloatMotion
struct UGbxSimpleMotionLibrary_UpdateFloatMotion_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentValue;                                      // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSimpleMotionState                    Data;                                              // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetValue;                                       // 0x34(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionInstanceState            State;                                             // 0x38(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportVectorMotion
struct UGbxSimpleMotionLibrary_TeleportVectorMotion_Params
{
public:
	struct FVector                               CurrentValue;                                      // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    Data;                                              // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetValue;                                       // 0x34(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionInstanceState            State;                                             // 0x40(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportRotatorMotion
struct UGbxSimpleMotionLibrary_TeleportRotatorMotion_Params
{
public:
	struct FRotator                              CurrentValue;                                      // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    Data;                                              // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetValue;                                       // 0x34(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSimpleMotionInstanceState            State;                                             // 0x40(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.TeleportFloatMotion
struct UGbxSimpleMotionLibrary_TeleportFloatMotion_Params
{
public:
	float                                        CurrentValue;                                      // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ControlValue;                                      // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionState                    Data;                                              // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SpeedScale;                                        // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetValue;                                       // 0x2C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSimpleMotionInstanceState            State;                                             // 0x30(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.GbxSimpleMotionLibrary.ResetMotionState
struct UGbxSimpleMotionLibrary_ResetMotionState_Params
{
public:
	struct FSimpleMotionInstanceState            State;                                             // 0x0(0x8)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.GbxUIName.GetFormattedText
struct UGbxUIName_GetFormattedText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GestaltPartData_Mesh.EnumerateGestaltMeshPartNames
struct UGestaltPartData_Mesh_EnumerateGestaltMeshPartNames_Params
{
public:
	TArray<class FName>                          OutPartNameList;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.GlobalBoneModBlueprintLibrary.K2_SetGBMP
struct UGlobalBoneModBlueprintLibrary_K2_SetGBMP_Params
{
public:
	class UGlobalBoneModifyProfileState*         State;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_590F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.SetHitReactionData
struct UHitReactionBlueprintLibrary_SetHitReactionData_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionData*                      HitReactionData;                                   // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptHitReaction
struct UHitReactionBlueprintLibrary_ScriptHitReaction_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Causer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       Tag;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalHitDirection;                                 // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_592E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForceSelection                       Force;                                             // 0x30(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ScriptDeath
struct UHitReactionBlueprintLibrary_ScriptDeath_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Causer;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       Tag;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalHitDirection;                                 // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_593A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  BoneName;                                          // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FForceSelection                       Force;                                             // 0x30(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceUnlockHitReactions
struct UHitReactionBlueprintLibrary_ResourceUnlockHitReactions_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.ResourceLockHitReactions
struct UHitReactionBlueprintLibrary_ResourceLockHitReactions_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Reason;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionLiveLayer
struct UHitReactionBlueprintLibrary_RemoveHitReactionLiveLayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHitReactionLayer>         Layer;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.RemoveHitReactionDeathLayer
struct UHitReactionBlueprintLibrary_RemoveHitReactionDeathLayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHitReactionLayer>         Layer;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitLocationFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitLocationFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x8(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_594F[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitDirectionFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitDirectionFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5956[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ReturnValue;                                       // 0xC(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHitCauserFromAction
struct UHitReactionBlueprintLibrary_K2_GetHitCauserFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetHealthPercentFromAction
struct UHitReactionBlueprintLibrary_K2_GetHealthPercentFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5960[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetForceFromAction
struct UHitReactionBlueprintLibrary_K2_GetForceFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5965[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.K2_GetBoneIndexFromAction
struct UHitReactionBlueprintLibrary_K2_GetBoneIndexFromAction_Params
{
public:
	class UGbxAction*                            Action;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_596B[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.IsHitReactionTagActive
struct UHitReactionBlueprintLibrary_IsHitReactionTagActive_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5971[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionLiveLayer
struct UHitReactionBlueprintLibrary_AddHitReactionLiveLayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHitReactionLayer>         Layer;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.HitReactionBlueprintLibrary.AddHitReactionDeathLayer
struct UHitReactionBlueprintLibrary_AddHitReactionDeathLayer_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UHitReactionLayer>         Layer;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function GbxGameSystemCore.HitReactionLayer_Blueprint.EvaluateTag
struct UHitReactionLayer_Blueprint_EvaluateTag_Params
{
public:
	class UDamageComponent*                      Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageCauserComponent*                Causer;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DamageAmount;                                      // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGbxDamageType*                        DamageType;                                        // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDamageSource*                         DamageSource;                                      // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Force;                                             // 0x30(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_59E1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHitReactionTag*                       PreviousTag;                                       // 0x38(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitReactionTag*                       ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetHitRegionHealth
struct UHitRegionFunctionLibrary_ResetHitRegionHealth_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.HitRegionFunctionLibrary.ResetAllHitRegionHealth
struct UHitRegionFunctionLibrary_ResetAllHitRegionHealth_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByPercent
struct UHitRegionFunctionLibrary_RefillHitRegionHealthByPercent_Params
{
public:
	float                                        RefillPercent;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A04[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.HitRegionFunctionLibrary.RefillHitRegionHealthByAmount
struct UHitRegionFunctionLibrary_RefillHitRegionHealthByAmount_Params
{
public:
	float                                        RefillAmount;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Actor;                                             // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   AssociatedComponent;                               // 0x18(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.HitRegionFunctionLibrary.AssociateComponentWithHitRegion
struct UHitRegionFunctionLibrary_AssociateComponentWithHitRegion_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   ComponentToAssociate;                              // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UHitRegionData*                        HitRegion;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.InspectionInfoProvider.GetInspectionInfo
struct IInspectionInfoProvider_GetInspectionInfo_Params
{
public:
	struct FInspectionInfo                       InspectionInfo;                                    // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpactAndGetParticleSystemComponents
struct UImpactEffectFunctionLibrary_PlayTraceImpactAndGetParticleSystemComponents_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x10(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x1C(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>      SpawnedParticleSystemComponents;                   // 0x28(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x38(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A1D[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayTraceImpact
struct UImpactEffectFunctionLibrary_PlayTraceImpact_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceStart;                                        // 0x10(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TraceEnd;                                          // 0x1C(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 TraceChannel;                                      // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicated;                                       // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A25[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xB0 (0xB0 - 0x0)
// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpactGetParticleSystemComponents
struct UImpactEffectFunctionLibrary_PlayHitResultImpactGetParticleSystemComponents_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x10(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<class UParticleSystemComponent*>      SpawnedParticleSystemComponents;                   // 0xA0(0x10)(Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// Function GbxGameSystemCore.ImpactEffectFunctionLibrary.PlayHitResultImpact
struct UImpactEffectFunctionLibrary_PlayHitResultImpact_Params
{
public:
	class UImpactData*                           ImpactData;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Instigator;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            HitInfo;                                           // 0x10(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         bReplicated;                                       // 0xA0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A29[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.ImpactFXManagerComponent.SetEffectsEnabled
struct UImpactFXManagerComponent_SetEffectsEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedParticleSystemFinished
struct UImpactFXManagerComponent_OnTrackedParticleSystemFinished_Params
{
public:
	class UParticleSystemComponent*              PSC;                                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ImpactFXManagerComponent.OnTrackedComponentDeactivated
struct UImpactFXManagerComponent_OnTrackedComponentDeactivated_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// Function GbxGameSystemCore.ImpactFXManagerComponent.OnHit
struct UImpactFXManagerComponent_OnHit_Params
{
public:
	class AActor*                                SelfActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A30[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FHitResult                            Hit;                                               // 0x20(0x90)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddScreenOutput
struct UInspectionInfoFunctionLibrary_AddScreenOutput_Params
{
public:
	struct FInspectionInfo                       InspectionInfo;                                    // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDebugDisplayVerbosityLevel       Verbosity;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.InspectionInfoFunctionLibrary.AddAboveActorOutput
struct UInspectionInfoFunctionLibrary_AddAboveActorOutput_Params
{
public:
	struct FInspectionInfo                       InspectionInfo;                                    // 0x0(0x20)(Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                String;                                            // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDebugDisplayVerbosityLevel       Verbosity;                                         // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A3B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.SetUpdateVelocity
struct UInterpComponent_SetUpdateVelocity_Params
{
public:
	bool                                         bNewUpdateVelocity;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.SetRemoveOnCompletion
struct UInterpComponent_SetRemoveOnCompletion_Params
{
public:
	bool                                         bRemove;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.SetManualTick
struct UInterpComponent_SetManualTick_Params
{
public:
	bool                                         bManual;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.SetClearVelocity
struct UInterpComponent_SetClearVelocity_Params
{
public:
	bool                                         bNewClearVelocity;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.MatchRotationToVelocity
struct UInterpComponent_MatchRotationToVelocity_Params
{
public:
	bool                                         bInSetToInitialWhenFinished;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.InterpComponent.ManualTick
struct UInterpComponent_ManualTick_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.InterpComponent.IsFinished
struct UInterpComponent_IsFinished_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpRotation
struct UInterpComponent_InterpRotation_Params
{
public:
	struct FRotator                              NewRot;                                            // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinear;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bYawOnly;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRelative;                                       // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A50[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpLocation
struct UInterpComponent_InterpLocation_Params
{
public:
	struct FVector                               NewLoc;                                            // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinear;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZ;                                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRelative;                                       // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A53[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpDeltaRotation
struct UInterpComponent_InterpDeltaRotation_Params
{
public:
	struct FRotator                              DeltaRot;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinear;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bYawOnly;                                          // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRelative;                                       // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A55[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpDeltaLocation
struct UInterpComponent_InterpDeltaLocation_Params
{
public:
	struct FVector                               DeltaLoc;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpTime;                                        // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLinear;                                           // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNoZ;                                              // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInRelative;                                       // 0x12(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5A56[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2C (0x2C - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpBallisticsByTime
struct UInterpComponent_InterpBallisticsByTime_Params
{
public:
	struct FVector                               StartLoc;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLoc;                                            // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapTime;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapGravity;                                       // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function GbxGameSystemCore.InterpComponent.InterpBallistics
struct UInterpComponent_InterpBallistics_Params
{
public:
	struct FVector                               StartLoc;                                          // 0x0(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLoc;                                            // 0xC(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapSpeed;                                         // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeapAngle;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// Function GbxGameSystemCore.MotionControlLibrary.UpdateSpeed
struct UMotionControlLibrary_UpdateSpeed_Params
{
public:
	float                                        CurrentSpeed;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetSpeed;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Acceleration;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x10(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2C (0x2C - 0x0)
// Function GbxGameSystemCore.MotionControlLibrary.Spin
struct UMotionControlLibrary_Spin_Params
{
public:
	struct FRotator                              CurrentRotation;                                   // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RotationRate;                                      // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               RotationAxis;                                      // 0x10(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ReturnValue;                                       // 0x20(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.OrbitingActorComponent.SetTargetActor
struct UOrbitingActorComponent_SetTargetActor_Params
{
public:
	class AActor*                                NewTarget;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.OrbitingActorComponent.OnRep_TargetActor
struct UOrbitingActorComponent_OnRep_TargetActor_Params
{
public:
	class AActor*                                LastTarget;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromSlot
struct UPawnAttachmentFunctionLibrary_RequestDetachPawnFromSlot_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.RequestDetachPawnFromActor
struct UPawnAttachmentFunctionLibrary_RequestDetachPawnFromActor_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.QueryPawnAttachment
struct UPawnAttachmentFunctionLibrary_QueryPawnAttachment_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPawnAttachmentQueryResult            ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.FindPawnAttachSlotComponent
struct UPawnAttachmentFunctionLibrary_FindPawnAttachSlotComponent_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawnAttachSlotComponent*              ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromSlot
struct UPawnAttachmentFunctionLibrary_DetachPawnFromSlot_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstant;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AA3[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.DetachPawnFromActor
struct UPawnAttachmentFunctionLibrary_DetachPawnFromActor_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstant;                                          // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AA4[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.PawnAttachmentFunctionLibrary.AttachPawnToSlot
struct UPawnAttachmentFunctionLibrary_AttachPawnToSlot_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 Pawn;                                              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInstant;                                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AA7[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetController
struct UProjectileAimViewPointHomingTargetComponent_SetTargetController_Params
{
public:
	class AController*                           InTargetController;                                // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.SetTargetActor
struct UProjectileAimViewPointHomingTargetComponent_SetTargetActor_Params
{
public:
	class AActor*                                InTargetActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetTargetController
struct UProjectileAimViewPointHomingTargetComponent_GetTargetController_Params
{
public:
	class AController*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.ProjectileAimViewPointHomingTargetComponent.GetCurrentHomingLoc
struct UProjectileAimViewPointHomingTargetComponent_GetCurrentHomingLoc_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.ReferenceActor.EnumeratePreviewClasses
struct AReferenceActor_EnumeratePreviewClasses_Params
{
public:
	TArray<class FName>                          ClasssList;                                        // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.RigidBodyComponent.SetKinematic
struct URigidBodyComponent_SetKinematic_Params
{
public:
	class UPrimitiveComponent*                   SleepingComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleWwiseEventFinished
struct USceneBodySwitchComponent_HandleWwiseEventFinished_Params
{
public:
	class UWwiseAudioComponent*                  WAC;                                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWwiseEvent*                           WwiseEvent;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchComponent.HandleParticleSystemFinished
struct USceneBodySwitchComponent_HandleParticleSystemFinished_Params
{
public:
	class UParticleSystemComponent*              PSC;                                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchComponent.GetValidSwitchStateNames
struct USceneBodySwitchComponent_GetValidSwitchStateNames_Params
{
public:
	TArray<class FName>                          OutNames;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchStateNames
struct USceneBodySwitchFunctionLibrary_EnumerateValidSwitchStateNames_Params
{
public:
	class FName                                  SwitchName;                                        // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Names;                                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.EnumerateValidSwitchNames
struct USceneBodySwitchFunctionLibrary_EnumerateValidSwitchNames_Params
{
public:
	TArray<class FName>                          Names;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitchExternal
struct USceneBodySwitchFunctionLibrary_ChangeSwitchExternal_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateName;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.SceneBodySwitchFunctionLibrary.ChangeSwitch
struct USceneBodySwitchFunctionLibrary_ChangeSwitch_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SwitchName;                                        // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StateName;                                         // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ShowScreenParticleForActor
struct UScreenParticleManagerComponent_ShowScreenParticleForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       Template;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideWhenFinished;                                 // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AC9[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0x14(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyOwnerSee;                                     // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysVisible;                                    // 0x22(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ACA[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleInstances;                           // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerAuthority;                                  // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickEvenWhenPaused;                               // 0x32(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideDuringInGameMenu;                             // 0x33(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ACB[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.OnScreenParticleFinished
struct UScreenParticleManagerComponent_OnScreenParticleFinished_Params
{
public:
	class UParticleSystemComponent*              Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.HideScreenParticleForActor
struct UScreenParticleManagerComponent_HideScreenParticleForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       Template;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowParticleToFinish;                            // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bServerAuthority;                                  // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AD2[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientTrackParticleProperty
struct UScreenParticleManagerComponent_ClientTrackParticleProperty_Params
{
public:
	class UParticlePropertyTrackingData*         TrackingData;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UParticleSystem*                       Template;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropertyValue;                                     // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddToValue;                                       // 0x24(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AD6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    UsedMaterialProperty;                              // 0x28(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MaterialPropertyName;                              // 0x30(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticleEx
struct UScreenParticleManagerComponent_ClientShowScreenParticleEx_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        InitFlags;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ADB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0xC(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ADC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientShowScreenParticle
struct UScreenParticleManagerComponent_ClientShowScreenParticle_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideWhenFinished;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ADE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             ContentDims;                                       // 0xC(0x8)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ParticleDepth;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EScreenParticleScalingMode        ScalingMode;                                       // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyOwnerSee;                                     // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysVisible;                                    // 0x1A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5ADF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Tag;                                               // 0x20(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowMultipleInstances;                           // 0x28(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickEvenWhenPaused;                               // 0x29(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHideDuringInGameMenu;                             // 0x2A(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDepthPriorityWorld;                               // 0x2B(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AE0[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleVectorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleVectorParameter_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Param;                                             // 0x18(0xC)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AE3[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleMaterialParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleMaterialParameter_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                    Param;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleFloatParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleFloatParameter_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Param;                                             // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AE8[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleColorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleColorParameter_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Param;                                             // 0x18(0x10)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientSetScreenParticleActorParameter
struct UScreenParticleManagerComponent_ClientSetScreenParticleActorParameter_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                Param;                                             // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.ScreenParticleManagerComponent.ClientHideScreenParticle
struct UScreenParticleManagerComponent_ClientHideScreenParticle_Params
{
public:
	class UParticleSystem*                       Template;                                          // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Tag;                                               // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowParticleToFinish;                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5AF2[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.TryGetStanceComponent
struct UStanceBlueprintLibrary_TryGetStanceComponent_Params
{
public:
	class AAIController*                         AIController;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceComponent*                      ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.SetStance
struct UStanceBlueprintLibrary_SetStance_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   Stance;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.IsStanceComponentInStance
struct UStanceBlueprintLibrary_IsStanceComponentInStance_Params
{
public:
	class UStanceComponent*                      StanceComponent;                                   // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   Stance;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B06[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.IsInStance
struct UStanceBlueprintLibrary_IsInStance_Params
{
public:
	class UAnimInstance*                         AnimInstance;                                      // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceDataProvider*                   Stance;                                            // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B09[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceTypeStanceType
struct UStanceBlueprintLibrary_EqualEqual_StanceTypeStanceType_Params
{
public:
	class UStanceType*                           A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceType*                           B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B0F[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.EqualEqual_StanceDataStanceData
struct UStanceBlueprintLibrary_EqualEqual_StanceDataStanceData_Params
{
public:
	class UStanceData*                           A;                                                 // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceData*                           B;                                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B12[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.StanceBlueprintLibrary.ClearStance
struct UStanceBlueprintLibrary_ClearStance_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function GbxGameSystemCore.StanceComponent.StackStanceChangedCallback
struct UStanceComponent_StackStanceChangedCallback_Params
{
public:
	enum class EStanceStackLayer                 PreviousLayer;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B17[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceData*                           PreviousStance;                                    // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EStanceStackLayer                 NextLayer;                                         // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B18[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceData*                           NextStance;                                        // 0x18(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.SetStanceLayer
struct UStanceComponent_SetStanceLayer_Params
{
public:
	enum class EStanceStackLayer                 Layer;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B19[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStanceDataProvider*                   NewStance;                                         // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.StanceComponent.SetBlueprintStance
struct UStanceComponent_SetBlueprintStance_Params
{
public:
	class UStanceDataProvider*                   NewStance;                                         // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.IsInStanceType
struct UStanceComponent_IsInStanceType_Params
{
public:
	class UStanceType*                           Type;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1B[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x2 (0x2 - 0x0)
// Function GbxGameSystemCore.StanceComponent.IsInStanceLayer
struct UStanceComponent_IsInStanceLayer_Params
{
public:
	enum class EStanceStackLayer                 Layer;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.IsInStance
struct UStanceComponent_IsInStance_Params
{
public:
	class UStanceDataProvider*                   Stance;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B1E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.IsInAnimStance
struct UStanceComponent_IsInAnimStance_Params
{
public:
	class UStanceDataProvider*                   Stance;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B20[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.StanceComponent.GetTimeSpentInCurrentStance
struct UStanceComponent_GetTimeSpentInCurrentStance_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.StanceComponent.GetStanceLayer
struct UStanceComponent_GetStanceLayer_Params
{
public:
	enum class EStanceStackLayer                 ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.StanceComponent.GetStance
struct UStanceComponent_GetStance_Params
{
public:
	class UStanceData*                           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.FindTypeForStance
struct UStanceComponent_FindTypeForStance_Params
{
public:
	class UStanceData*                           Stance;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceType*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.StanceComponent.FindStanceForType
struct UStanceComponent_FindStanceForType_Params
{
public:
	class UStanceType*                           Type;                                              // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UStanceData*                           ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.StanceComponent.ClearStanceLayer
struct UStanceComponent_ClearStanceLayer_Params
{
public:
	enum class EStanceStackLayer                 Layer;                                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.StatusEffect.OnEndEffect
struct UStatusEffect_OnEndEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.StatusEffect.OnBeginEffect
struct UStatusEffect_OnBeginEffect_Params
{
public:
	class AActor*                                Target;                                            // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetTargetUINameGender
struct UTargetableComponent_SetTargetUINameGender_Params
{
public:
	enum class ETextGender                       NewTargetUINameGender;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetTargetUIName
struct UTargetableComponent_SetTargetUIName_Params
{
public:
	class UGbxUIName*                            NewTargetUIName;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetTargetName
struct UTargetableComponent_SetTargetName_Params
{
public:
	class FText                                  NewTargetName;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByNonPlayers
struct UTargetableComponent_SetIsTargetableByNonPlayers_Params
{
public:
	bool                                         IsTargetable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByHumanPlayers
struct UTargetableComponent_SetIsTargetableByHumanPlayers_Params
{
public:
	bool                                         IsTargetable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetIsTargetableByAIPlayers
struct UTargetableComponent_SetIsTargetableByAIPlayers_Params
{
public:
	bool                                         IsTargetable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.SetIsTargetable
struct UTargetableComponent_SetIsTargetable_Params
{
public:
	bool                                         IsTargetable;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.PrefixTargetName
struct UTargetableComponent_PrefixTargetName_Params
{
public:
	class UGbxUIName*                            TargetUINamePrefix;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByPawn
struct UTargetableComponent_IsTargetableByPawn_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B31[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByNonPlayers
struct UTargetableComponent_IsTargetableByNonPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByHumanPlayers
struct UTargetableComponent_IsTargetableByHumanPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByController
struct UTargetableComponent_IsTargetableByController_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B32[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByAIPlayers
struct UTargetableComponent_IsTargetableByAIPlayers_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetableByActor
struct UTargetableComponent_IsTargetableByActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B34[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.IsTargetable
struct UTargetableComponent_IsTargetable_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetSocketName
struct UTargetableComponent_GetTargetSocketName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetProxyComponentNames
struct UTargetableComponent_GetTargetProxyComponentNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetNameString
struct UTargetableComponent_GetTargetNameString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetName
struct UTargetableComponent_GetTargetName_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetLocations
struct UTargetableComponent_GetTargetLocations_Params
{
public:
	TArray<struct FVector>                       ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetTargetLocation
struct UTargetableComponent_GetTargetLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetClosestTargetLocation
struct UTargetableComponent_GetClosestTargetLocation_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0xC(0xC)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetableComponent.GetAvailableSocketNames
struct UTargetableComponent_GetAvailableSocketNames_Params
{
public:
	TArray<class FName>                          Array;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x3A0 (0x3A0 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.IsSenseActive
struct UTargetActorInfoLibrary_IsSenseActive_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UAISense>                  Sense;                                             // 0x390(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x398(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B4A[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x398 (0x398 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.IsExistingTarget
struct UTargetActorInfoLibrary_IsExistingTarget_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x390(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B4C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x398 (0x398 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.IsDirectlySensed
struct UTargetActorInfoLibrary_IsDirectlySensed_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x390(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B4E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A0 (0x3A0 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.HasStimulusForSense
struct UTargetActorInfoLibrary_HasStimulusForSense_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UAISense>                  Sense;                                             // 0x390(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x398(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B53[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x398 (0x398 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.HasAnyKnownStimuli
struct UTargetActorInfoLibrary_HasAnyKnownStimuli_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x390(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B57[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A8 (0x3A8 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusLocation
struct UTargetActorInfoLibrary_GetStimulusLocation_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UAISense>                  Sense;                                             // 0x390(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x398(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B60[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x408 (0x408 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetStimulusForSense
struct UTargetActorInfoLibrary_GetStimulusForSense_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UAISense>                  Sense;                                             // 0x390(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAIStimulus                           Stimulus;                                          // 0x398(0x68)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x400(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B64[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A8 (0x3A8 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetReceiverLocation
struct UTargetActorInfoLibrary_GetReceiverLocation_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UAISense>                  Sense;                                             // 0x390(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x398(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B69[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A0 (0x3A0 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulusLocation
struct UTargetActorInfoLibrary_GetBestStimulusLocation_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	float                                        Age;                                               // 0x390(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x394(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x400 (0x400 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestStimulus
struct UTargetActorInfoLibrary_GetBestStimulus_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FAIStimulus                           Stimulus;                                          // 0x390(0x68)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3F8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B6E[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A8 (0x3A8 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.GetBestAttackLocation
struct UTargetActorInfoLibrary_GetBestAttackLocation_Params
{
public:
	struct FTargetActorInfo                      Info;                                              // 0x0(0x390)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FVector                               OutTargetVelocity;                                 // 0x390(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x39C(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetActorInfoLibrary.FindActorTargetingComponent
struct UTargetActorInfoLibrary_FindActorTargetingComponent_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingComponent*                   ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.ServerSetBestTarget
struct UTargetingComponent_ServerSetBestTarget_Params
{
public:
	class AActor*                                NewBestTarget;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.IsBestTargetDirectlySensed
struct UTargetingComponent_IsBestTargetDirectlySensed_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B76[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.HasTargets
struct UTargetingComponent_HasTargets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.HasTarget
struct UTargetingComponent_HasTarget_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B7C[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetTargetLocationForActor
struct UTargetingComponent_GetTargetLocationForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x8(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B80[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x3A0 (0x3A0 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoForActor
struct UTargetingComponent_GetTargetInfoForActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTargetActorInfo                      TargetInfo;                                        // 0x8(0x390)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x398(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B84[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoCount
struct UTargetingComponent_GetTargetInfoCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3A0 (0x3A0 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetTargetInfoAt
struct UTargetingComponent_GetTargetInfoAt_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B85[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTargetActorInfo                      TargetInfo;                                        // 0x8(0x390)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x398(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B86[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetTargetActorAt
struct UTargetingComponent_GetTargetActorAt_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B8A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestThreatActor
struct UTargetingComponent_GetBestThreatActor_Params
{
public:
	bool                                         bRequireFirsthandKnowledge;                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestTargetLocation
struct UTargetingComponent_GetBestTargetLocation_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x4(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x398 (0x398 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestTargetInfo
struct UTargetingComponent_GetBestTargetInfo_Params
{
public:
	struct FTargetActorInfo                      TargetInfo;                                        // 0x0(0x390)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	int32                                        TargetIndex;                                       // 0x390(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x394(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B90[0x3];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestTargetActor
struct UTargetingComponent_GetBestTargetActor_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B92[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestTargetableComponent
struct UTargetingComponent_GetBestTargetableComponent_Params
{
public:
	int32                                        TargetIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B94[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTargetableComponent*                  ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// Function GbxGameSystemCore.TargetingComponent.GetBestAttackTargetLocation
struct UTargetingComponent_GetBestAttackTargetLocation_Params
{
public:
	struct FVector                               OutTargetVelocity;                                 // 0x0(0xC)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIndex;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ReturnValue;                                       // 0x10(0xC)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.TargetingComponent.DoesBestTargetHaveStimulusForSense
struct UTargetingComponent_DoesBestTargetHaveStimulusForSense_Params
{
public:
	TSubclassOf<class UAISense>                  Sense;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxAge;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TargetIndex;                                       // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5B98[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.TargetingDebugServerRpcComponent.SetInspectedActor
struct UTargetingDebugServerRpcComponent_SetInspectedActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.Team.GetAttitudeToward
struct UTeam_GetAttitudeToward_Params
{
public:
	class UTeam*                                 Team;                                              // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETeamAttitude                     ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BA0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.UserStatesInterface.HasEnableConditionsSetForAnyUserState
struct IUserStatesInterface_HasEnableConditionsSetForAnyUserState_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function GbxGameSystemCore.UserStatesInterface.BlueprintStateHandler
struct IUserStatesInterface_BlueprintStateHandler_Params
{
public:
	bool                                         bFromLoad;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GbxGameSystemCore.UserStatesFunctionLibrary.HasEnableConditionsSetForSpecificUserState
struct UUserStatesFunctionLibrary_HasEnableConditionsSetForSpecificUserState_Params
{
public:
	class UObject*                               Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  UserStateProperty;                                 // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BC0[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// Function GbxGameSystemCore.UseSystemFunctionLibrary.SetIsUsable
struct UUseSystemFunctionLibrary_SetIsUsable_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewIsUsable;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5BC1[0x7];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// Function GbxGameSystemCore.UseSystemFunctionLibrary.ResetUseCount
struct UUseSystemFunctionLibrary_ResetUseCount_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


