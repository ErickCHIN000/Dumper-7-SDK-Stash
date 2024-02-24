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

// 0x9 (0x9 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.SetNPCCamera
struct ABP_MenuActorBase_C_SetNPCCamera_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.RemoveMenus
struct ABP_MenuActorBase_C_RemoveMenus_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CreateDialogueEvent
struct ABP_MenuActorBase_C_CreateDialogueEvent_Params
{
public:
	class ABP_PlayerController_C*                PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccess;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.RestorePlayer
struct ABP_MenuActorBase_C_RestorePlayer_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveMenus_bSuccess;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.ShowMerchant
struct ABP_MenuActorBase_C_ShowMerchant_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetAssociatedEncounter
struct ABP_MenuActorBase_C_GetAssociatedEncounter_Params
{
public:
	class AEncounterBase*                        Associated_Encounter;                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xA (0xA - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.SetAssociatedEncounter
struct ABP_MenuActorBase_C_SetAssociatedEncounter_Params
{
public:
	class AEncounterBase*                        Associated_Encounter;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.SetDialogue
struct ABP_MenuActorBase_C_SetDialogue_Params
{
public:
	class UDialogue*                             Dialogue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.SetAmbientDialogue
struct ABP_MenuActorBase_C_SetAmbientDialogue_Params
{
public:
	class UDialogue*                             AmbientDialogue;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xCA (0xCA - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.UpdateAnimBPValues
struct ABP_MenuActorBase_C_UpdateAnimBPValues_Params
{
public:
	bool                                         bIsMoving;                                         // 0x0(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInAir;                                          // 0x1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsMinHealth;                                      // 0x2(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bActiveBlendspace;                                 // 0x3(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasTarget;                                        // 0x4(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasMovementInput;                                 // 0x5(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsAiming;                                         // 0x6(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_708D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Direction;                                         // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ForwardSpeed;                                      // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       TargetToCharacterRotationDifference;               // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MovementInputToVelocityDifference;                 // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimYawDelta;                                       // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       AimYawRate;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TargetLocation;                                    // 0x38(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x50(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CharacterRotation;                                 // 0x68(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                              LastVelocityRotation;                              // 0x80(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                              LastMovementInputRotation;                         // 0x98(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	struct FRotator                              LookingRotation;                                   // 0xB0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor)
	enum class EAlertnessLevelType               AlertnessLevel;                                    // 0xC8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0xC9(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCInfoForUIInterface
struct ABP_MenuActorBase_C_GetNPCInfoForUIInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCInfoForUI_C>  Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCFriendshipInterface
struct ABP_MenuActorBase_C_GetNPCFriendshipInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCFriendship_C> Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCContractInterface
struct ABP_MenuActorBase_C_GetNPCContractInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCContract_C>   Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetNPCDialogueInterface
struct ABP_MenuActorBase_C_GetNPCDialogueInterface_Params
{
public:
	TScriptInterface<class IBPI_NPCDialogue_C>   Interface;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetWeakpointComponent
struct ABP_MenuActorBase_C_GetWeakpointComponent_Params
{
public:
	bool                                         HasInterface;                                      // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71B6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_WeakPoint_C>     Interface;                                         // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetPingInterface
struct ABP_MenuActorBase_C_GetPingInterface_Params
{
public:
	bool                                         bHasInterface;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IBPI_Ping_C>          PingInterface;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Back
struct ABP_MenuActorBase_C_GetClothes_Back_Params
{
public:
	class USkeletalMeshComponent*                BackComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Jewelry
struct ABP_MenuActorBase_C_GetClothes_Jewelry_Params
{
public:
	class USkeletalMeshComponent*                JewelryComponent;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Glasses
struct ABP_MenuActorBase_C_GetClothes_Glasses_Params
{
public:
	class USkeletalMeshComponent*                GlassesComponent;                                  // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Teeth
struct ABP_MenuActorBase_C_GetBodyPart_Teeth_Params
{
public:
	class USkeletalMeshComponent*                TeethComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Eyebrows
struct ABP_MenuActorBase_C_GetBodyPart_Eyebrows_Params
{
public:
	class USkeletalMeshComponent*                EyebrowsComponent;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_FacialHair
struct ABP_MenuActorBase_C_GetBodyPart_FacialHair_Params
{
public:
	class USkeletalMeshComponent*                FacialHairComponent;                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetCLothes_Gear
struct ABP_MenuActorBase_C_GetCLothes_Gear_Params
{
public:
	class USkeletalMeshComponent*                Gear;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBody
struct ABP_MenuActorBase_C_GetBody_Params
{
public:
	class USkeletalMeshComponent*                BodyComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Torso
struct ABP_MenuActorBase_C_GetClothes_Torso_Params
{
public:
	class USkeletalMeshComponent*                TorsoComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Bottom
struct ABP_MenuActorBase_C_GetClothes_Bottom_Params
{
public:
	class USkeletalMeshComponent*                PantsComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Boots
struct ABP_MenuActorBase_C_GetClothes_Boots_Params
{
public:
	class USkeletalMeshComponent*                ShoesComponent;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Hair
struct ABP_MenuActorBase_C_GetBodyPart_Hair_Params
{
public:
	class USkeletalMeshComponent*                HairComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Head
struct ABP_MenuActorBase_C_GetClothes_Head_Params
{
public:
	class USkeletalMeshComponent*                HatComponent;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetClothes_Gloves
struct ABP_MenuActorBase_C_GetClothes_Gloves_Params
{
public:
	class USkeletalMeshComponent*                GlovesComponent;                                   // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetBodyPart_Eyes
struct ABP_MenuActorBase_C_GetBodyPart_Eyes_Params
{
public:
	class USkeletalMeshComponent*                EyeComponent;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CanQueryInteractable
struct ABP_MenuActorBase_C_CanQueryInteractable_Params
{
public:
	bool                                         Can_Query;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.HoldInteractionAvailable
struct ABP_MenuActorBase_C_HoldInteractionAvailable_Params
{
public:
	bool                                         bAvailable;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.IsInteractionDisabled
struct ABP_MenuActorBase_C_IsInteractionDisabled_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         bIsDisabled;                                       // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75DC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisabledText;                                      // 0x188(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.DoesHaveResourceType
struct ABP_MenuActorBase_C_DoesHaveResourceType_Params
{
public:
	int32                                        HitId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     DesiredResourceType;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasResourceType;                                  // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x179 (0x179 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.IsHarvestable
struct ABP_MenuActorBase_C_IsHarvestable_Params
{
public:
	struct FInteractionData                      Interaction;                                       // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         IsHarvestable;                                     // 0x178(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetInteractIcon
struct ABP_MenuActorBase_C_GetInteractIcon_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x178(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x188 (0x188 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.GetInteractText
struct ABP_MenuActorBase_C_GetInteractText_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class FString                                InteractText;                                      // 0x178(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractionRequiresClientOnly
struct ABP_MenuActorBase_C_InteractionRequiresClientOnly_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresClientAction;                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractReleased
struct ABP_MenuActorBase_C_InteractReleased_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.InteractPressed
struct ABP_MenuActorBase_C_InteractPressed_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.ReturnMeshToHighlight
struct ABP_MenuActorBase_C_ReturnMeshToHighlight_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          StaticMesh_to_Highlight;                           // 0x178(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        SkeletalMesh_to_Highlight;                         // 0x188(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         Hostile_;                                          // 0x198(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x199(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_780F[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UStaticMeshComponent*>          K2Node_MakeArray_Array;                            // 0x1A0(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        K2Node_MakeArray_Array_1;                          // 0x1B0(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x181 (0x181 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CanInteractWithActor
struct ABP_MenuActorBase_C_CanInteractWithActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         InteractAvailable;                                 // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetAssociatedEncounter
struct ABP_MenuActorBase_C_CrossServerSetAssociatedEncounter_Params
{
public:
	class AEncounterBase*                        Associated_Encounter;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetDialogue
struct ABP_MenuActorBase_C_CrossServerSetDialogue_Params
{
public:
	class UDialogue*                             Dialogue;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CrossServerSetAmbientDialogue
struct ABP_MenuActorBase_C_CrossServerSetAmbientDialogue_Params
{
public:
	class UDialogue*                             AmbientDialogue;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.PerformClientSideInteraction
struct ABP_MenuActorBase_C_PerformClientSideInteraction_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.CallCrossServerOnInteracted
struct ABP_MenuActorBase_C_CallCrossServerOnInteracted_Params
{
public:
	class AController*                           InteractingController;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_MenuActorBase.BP_MenuActorBase_C.ExecuteUbergraph_BP_MenuActorBase
struct ABP_MenuActorBase_C_ExecuteUbergraph_BP_MenuActorBase_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7991[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_InteractingController;                // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AEncounterBase*                        K2Node_CustomEvent_Associated_Encounter;           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             K2Node_CustomEvent_Dialogue;                       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDialogue*                             K2Node_CustomEvent_AmbientDialogue;                // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_Controller;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_799E[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_UIMenusComponent_C*                CallFunc_GetComponentByClass_ReturnValue;          // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


