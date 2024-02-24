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

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFirstSupportingObject
struct UBP_StructureCompositePiece_C_GetFirstSupportingObject_Params
{
public:
	class UObject*                               OutFirstSupportingObject;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportingObjects
struct UBP_StructureCompositePiece_C_GetSupportingObjects_Params
{
public:
	TArray<struct FStructureSupportObjectData>   OutSupportingStructures;                           // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsSupported
struct UBP_StructureCompositePiece_C_IsSupported_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportedObjects
struct UBP_StructureCompositePiece_C_GetSupportedObjects_Params
{
public:
	TArray<struct FStructureSupportObjectData>   OutSupportedStructures;                            // 0x0(0x10)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsSupportingOtherObjects
struct UBP_StructureCompositePiece_C_IsSupportingOtherObjects_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TraceForGroundSupport
struct UBP_StructureCompositePiece_C_TraceForGroundSupport_Params
{
public:
	bool                                         bIncludeBasePotential;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OutIsIntersectingGround;                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AD0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    OutResults;                                        // 0x8(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<struct FHitResult>                    Temp_struct_Variable;                              // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         Temp_bool_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AE3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSupportInterfaceObject_ReturnValue;    // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TraceForGroundSupport_OutIsIntersectingGround; // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2AEE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FHitResult>                    CallFunc_TraceForGroundSupport_OutResults;         // 0x50(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x2A (0x2A - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TryDestroyIfUnsupported
struct UBP_StructureCompositePiece_C_TryDestroyIfUnsupported_Params
{
public:
	class AActor*                                DeconstructionSource;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSupportInterfaceObject_ReturnValue;    // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TryDestroyIfUnsupported_ReturnValue;      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateSupport
struct UBP_StructureCompositePiece_C_UpdateSupport_Params
{
public:
	struct FStructurePlacementFeedback_Support   ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetAreaOfEffect
struct UBP_StructureCompositePiece_C_GetAreaOfEffect_Params
{
public:
	class USphereComponent*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetAudioComponent
struct UBP_StructureCompositePiece_C_GetAudioComponent_Params
{
public:
	class UActorComponent*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISchematicInfoInterface> CallFunc_GetAudioComponent_self_CastInput;         // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       CallFunc_GetAudioComponent_ReturnValue;            // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBuildRadiusInformation
struct UBP_StructureCompositePiece_C_GetBuildRadiusInformation_Params
{
public:
	float                                        OutRadius;                                         // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C65[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               OutOrigin;                                         // 0x8(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDisplayNameText
struct UBP_StructureCompositePiece_C_GetDisplayNameText_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	bool                                         CallFunc_GetUIData_IsValid;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureUIData                      CallFunc_GetUIData_OutUIData;                      // 0x20(0x78)(None)
};

// 0x160 (0x160 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureID
struct UBP_StructureCompositePiece_C_GetStructureID_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	struct FCompositePieceGameplay               CallFunc_GetPieceData_OutPieceData;                // 0x10(0x140)(None)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureInteractions
struct UBP_StructureCompositePiece_C_GetStructureInteractions_Params
{
public:
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm)
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> CallFunc_GetAllStructureInteractions_AvailableInteractions; // 0x10(0x10)(ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetTotalResourceRequirements
struct UBP_StructureCompositePiece_C_GetTotalResourceRequirements_Params
{
public:
	TArray<struct FStructureResourceRequirements> ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D26[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISchematicInfoInterface> CallFunc_GetTotalResourceRequirements_self_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FStructureResourceRequirements> CallFunc_GetTotalResourceRequirements_ReturnValue; // 0x30(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x11 (0x11 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.StructureHasAddedResources
struct UBP_StructureCompositePiece_C_StructureHasAddedResources_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D66[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_StructureResourcesObject_C*        CallFunc_GetResourcesInfoObject_OutComponent;      // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_StructureHasAddedResources_HasAddedResources; // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportMesh
struct UBP_StructureCompositePiece_C_GetSupportMesh_Params
{
public:
	class UStaticMeshComponent*                  SupportMesh;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetWorldTransform
struct UBP_StructureCompositePiece_C_GetWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DBD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetRootTransform_ReturnValue;             // 0x70(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFuelComponent
struct UBP_StructureCompositePiece_C_GetFuelComponent_Params
{
public:
	class UBP_StructureFuelComponent_C*          FuelComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInventoryContainerInterface
struct UBP_StructureCompositePiece_C_GetInventoryContainerInterface_Params
{
public:
	class AActor*                                RequestingActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IItemContainer>       ContainerInterface;                                // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetReachableNavTransform
struct UBP_StructureCompositePiece_C_GetReachableNavTransform_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2E75[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            ReachableNavTransform;                             // 0x10(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Structure;                                         // 0x70(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CompleteCompletableStructure
struct UBP_StructureCompositePiece_C_CompleteCompletableStructure_Params
{
public:
	class ANWXAICharacter*                       AICharacter;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Complete;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetRangedAttackLocation
struct UBP_StructureCompositePiece_C_GetRangedAttackLocation_Params
{
public:
	class UObject*                               QueryingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class Enum_AttackLocationType           AttackLocationType;                                // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ED5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2ED7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            CallFunc_GetStructureWorldTransform_ReturnValue;   // 0x30(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetFacingTarget
struct UBP_StructureCompositePiece_C_GetFacingTarget_Params
{
public:
	class UObject*                               QueryingActor;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                FacingTarget;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSimulationStateManager
struct UBP_StructureCompositePiece_C_GetSimulationStateManager_Params
{
public:
	class ANWXSimStateManagerBase*               Simulation_State_Manager;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ResolveSimulationRound
struct UBP_StructureCompositePiece_C_ResolveSimulationRound_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDamageEffect
struct UBP_StructureCompositePiece_C_GetDamageEffect_Params
{
public:
	class UClass*                                DamageEffect;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetRedirectedTarget
struct UBP_StructureCompositePiece_C_GetRedirectedTarget_Params
{
public:
	bool                                         ShouldRedirect;                                    // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FEF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                RedirectedTarget;                                  // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEventsObject
struct UBP_StructureCompositePiece_C_GetEventsObject_Params
{
public:
	class UStructureEventsObject*                EventObject;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStructureEventsObject*                CallFunc_GetStructureEventsObject_ReturnValue;     // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapPoints
struct UBP_StructureCompositePiece_C_GetSnapPoints_Params
{
public:
	TArray<struct FGridPoint>                    SnapPoints;                                        // 0x0(0x10)(Parm, OutParm)
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FGridPoint>                    CallFunc_GetGridPoints_ReturnValue;                // 0x18(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapType
struct UBP_StructureCompositePiece_C_GetSnapType_Params
{
public:
	enum class ESnapType                         SnapPointType;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class ESnapType                         CallFunc_GetSnapType_ReturnValue;                  // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSnapComponent
struct UBP_StructureCompositePiece_C_GetSnapComponent_Params
{
public:
	class UCompositePieceSnapObject*             SnapObject;                                        // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCompositePieceSnapObject*             CallFunc_GetSnapObjectForPiece_ResourcesManager;   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CanQueryInteractable
struct UBP_StructureCompositePiece_C_CanQueryInteractable_Params
{
public:
	bool                                         Can_Query;                                         // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.HoldInteractionAvailable
struct UBP_StructureCompositePiece_C_HoldInteractionAvailable_Params
{
public:
	bool                                         bAvailable;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x198 (0x198 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsInteractionDisabled
struct UBP_StructureCompositePiece_C_IsInteractionDisabled_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         bIsDisabled;                                       // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                DisabledText;                                      // 0x188(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.DoesHaveResourceType
struct UBP_StructureCompositePiece_C_DoesHaveResourceType_Params
{
public:
	int32                                        HitId;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EResourceType                     DesiredResourceType;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasResourceType;                                  // 0x5(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x179 (0x179 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsHarvestable
struct UBP_StructureCompositePiece_C_IsHarvestable_Params
{
public:
	struct FInteractionData                      Interaction;                                       // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         IsHarvestable;                                     // 0x178(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInteractIcon
struct UBP_StructureCompositePiece_C_GetInteractIcon_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x178(0x28)(Parm, OutParm, HasGetValueTypeHash)
};

// 0x1C8 (0x1C8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetInteractText
struct UBP_StructureCompositePiece_C_GetInteractText_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	class FString                                InteractText;                                      // 0x178(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x190(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInteractWithStructure_CanInteract;     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3194[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CanInteractWithStructure_InteractionMessage; // 0x1A0(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CanInteractWithActor
struct UBP_StructureCompositePiece_C_CanInteractWithActor_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FInteractionData                      InteractionData;                                   // 0x8(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	bool                                         InteractAvailable;                                 // 0x180(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanInteractWithStructure_CanInteract;     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_CanInteractWithStructure_InteractionMessage; // 0x198(0x18)(None)
};

// 0x1B8 (0x1B8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ReturnMeshToHighlight
struct UBP_StructureCompositePiece_C_ReturnMeshToHighlight_Params
{
public:
	struct FInteractionData                      InteractionData;                                   // 0x0(0x178)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	TArray<class UStaticMeshComponent*>          StaticMesh_to_Highlight;                           // 0x178(0x10)(Parm, OutParm, ContainsInstancedReference)
	TArray<class USkeletalMeshComponent*>        SkeletalMesh_to_Highlight;                         // 0x188(0x10)(Parm, OutParm, ContainsInstancedReference)
	bool                                         Hostile_;                                          // 0x198(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EItemQuality                      Quality;                                           // 0x199(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_322D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UStaticMeshComponent*>          CallFunc_GetMeshes_OutMeshes;                      // 0x1A8(0x10)(ReferenceParm, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractPressed
struct UBP_StructureCompositePiece_C_InteractPressed_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractReleased
struct UBP_StructureCompositePiece_C_InteractReleased_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InteractionRequiresClientOnly
struct UBP_StructureCompositePiece_C_InteractionRequiresClientOnly_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         RequiresClientAction;                              // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteDeconstructStructure
struct UBP_StructureCompositePiece_C_ExecuteDeconstructStructure_Params
{
public:
	enum class EDeconstructionResourceReturn     ResourceReturn;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_330E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                DeconstructionSource;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3318[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   OwningStructure;                                   // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ExecuteDestroyStructure_Success;          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_331F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DamageObject_CompositePiece_C*     CallFunc_GetDamageObject_DamageObject;             // 0x28(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteDestroyStructure
struct UBP_StructureCompositePiece_C_ExecuteDestroyStructure_Params
{
public:
	class AActor*                                DestructionSource;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3366[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_DamageObject_CompositePiece_C*     CallFunc_GetDamageObject_DamageObject;             // 0x10(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DestroyStructure_bSuccess;                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEntitySupportMesh
struct UBP_StructureCompositePiece_C_GetEntitySupportMesh_Params
{
public:
	class UStaticMeshComponent*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetEntityPlacementCollider
struct UBP_StructureCompositePiece_C_GetEntityPlacementCollider_Params
{
public:
	class UBoxComponent*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructurePlacerObject
struct UBP_StructureCompositePiece_C_GetStructurePlacerObject_Params
{
public:
	class UStructurePlacerObject*                ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_PlacerObject_CompositePiece_C*     CallFunc_GetDefaultObject_ReturnValue;             // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0x10(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1C0 (0x1C0 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.SetPlacementFeedback
struct UBP_StructureCompositePiece_C_SetPlacementFeedback_Params
{
public:
	struct FGameplayAbilityTargetDataHandle      PlacementTargetData;                               // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class AController*                           Controller;                                        // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           FeedbackData;                                      // 0x30(0xB8)(Parm, OutParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xE8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructurePlacerObject*                PlacerObject;                                      // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0xF8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x101(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3408[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback           CallFunc_SetPlacementFeedback_ReturnValue;         // 0x108(0xB8)(ContainsInstancedReference)
};

// 0x1A8 (0x1A8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.IsValidPlacement
struct UBP_StructureCompositePiece_C_IsValidPlacement_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FStructurePlacementFeedback           PlacementFeedbackData;                             // 0x30(0xB8)(Parm, OutParm, ContainsInstancedReference)
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0xE8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           CallFunc_IsValidPlacement_ReturnValue;             // 0xF0(0xB8)(ContainsInstancedReference)
};

// 0x68 (0x68 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetPlacementTransform
struct UBP_StructureCompositePiece_C_GetPlacementTransform_Params
{
public:
	class ACharacter*                            Character;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        OptionalDeltaRotationZ;                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OptionalDeltaHeightZ;                              // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x10(0x28)(Parm, OutParm)
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0x38(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      CallFunc_GetPlacementTransform_ReturnValue;        // 0x40(0x28)(None)
};

// 0xD1 (0xD1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.FinalizePlacement
struct UBP_StructureCompositePiece_C_FinalizePlacement_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3479[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSnapPlacementTargetData              SnapData;                                          // 0x10(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FString                                Message;                                           // 0xB0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_347C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0xC8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinalizePlacement_ReturnValue;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.InitializePlacementState
struct UBP_StructureCompositePiece_C_InitializePlacementState_Params
{
public:
	class APawn*                                 PlacingCharacter;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_SetStructureSchematicState_ReturnValue;   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34AE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_34B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureStateInterface> CallFunc_SetStructureSchematicState_self_CastInput; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_SetStructureSchematicState_ReturnValue_1; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetSupportInterfaceObject
struct UBP_StructureCompositePiece_C_GetSupportInterfaceObject_Params
{
public:
	class UObject*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStructureSupportObject*               CallFunc_GetSupportObjectForPiece_ReturnValue;     // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStateChanged
struct UBP_StructureCompositePiece_C_OnStateChanged_Params
{
public:
	class UStructureCompositePiece*              StructurePiece;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   State;                                             // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetStructureDamageObject
struct UBP_StructureCompositePiece_C_GetStructureDamageObject_Params
{
public:
	class UStructureDamageObject*                ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_DamageObject_CompositePiece_C*     CallFunc_GetDamageObject_DamageObject;             // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x280 (0x280 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetCompositePieceGameplay
struct UBP_StructureCompositePiece_C_GetCompositePieceGameplay_Params
{
public:
	struct FCompositePieceGameplay               GameplayData;                                      // 0x0(0x140)(Parm, OutParm)
	struct FCompositePieceGameplay               CallFunc_GetPieceData_OutPieceData;                // 0x140(0x140)(None)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetCompositeStructure
struct UBP_StructureCompositePiece_C_GetCompositeStructure_Params
{
public:
	class AStructureComposite*                   Composite;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.LocalPlayerExitedVolume
struct UBP_StructureCompositePiece_C_LocalPlayerExitedVolume_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.LocalPlayerEnteredVolume
struct UBP_StructureCompositePiece_C_LocalPlayerEnteredVolume_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x101 (0x101 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateMeshMaterialsBasedOnState
struct UBP_StructureCompositePiece_C_UpdateMeshMaterialsBasedOnState_Params
{
public:
	class UBP_CompositePieceMeshInstance_C*      LMeshInstance;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           CallFunc_GetValidPlacementFeedbackData_ReturnValue; // 0x8(0xB8)(ContainsInstancedReference)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_359A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UStructurePlacerObject*                CallFunc_GetStructurePlacerObject_ReturnValue;     // 0xD8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetResourceRequirementsForCurrentState_ReturnValue; // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyAddedResources_ReturnValue;         // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UpdateMeshOnStateChange
struct UBP_StructureCompositePiece_C_UpdateMeshOnStateChange_Params
{
public:
	class UCompositePieceInstance*               CallFunc_GetMeshInstance_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue_1;          // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_35E4[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance_1;         // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance_2;         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetDamageObject
struct UBP_StructureCompositePiece_C_GetDamageObject_Params
{
public:
	class UBP_DamageObject_CompositePiece_C*     DamageObject;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_DamageObject_CompositePiece_C*     CallFunc_GetComponentOfClass_OutComponent;         // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RefreshOverlappingPawns
struct UBP_StructureCompositePiece_C_RefreshOverlappingPawns_Params
{
public:
	class FString                                CurrentFunctionName;                               // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         OverlappingNPCOrCharacter;                         // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_361F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                LCurrentHitActor;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   LCurrentMesh;                                      // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue; // 0x28(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x163 (0x163 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.PlayDestructionEffects
struct UBP_StructureCompositePiece_C_PlayDestructionEffects_Params
{
public:
	class UNiagaraComponent*                     System;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UNiagaraSystem*                        EffectTemplate;                                    // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_CompositePieceMeshInstance_C*      Instance;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StructureBounds;                                   // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3648[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureDestructionData             CallFunc_MakeStructureDestructionData_DestructionData; // 0x40(0x120)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x162(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.On Owner Composite State Changed
struct UBP_StructureCompositePiece_C_On_Owner_Composite_State_Changed_Params
{
public:
	enum class EStructureState                   StructureState;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3688[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureStateObject*                 CallFunc_GetStateObject_ReturnValue;               // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_SetStructureSchematicState_ReturnValue;   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckStateTransition_ReturnValue;         // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetResourcesInfoObject
struct UBP_StructureCompositePiece_C_GetResourcesInfoObject_Params
{
public:
	class UBP_StructureResourcesObject_C*        OutComponent;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureResourcesObject_C*        CallFunc_GetComponentOfClass_OutComponent;         // 0x8(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ChangeMaterialBasedOnHealth
struct UBP_StructureCompositePiece_C_ChangeMaterialBasedOnHealth_Params
{
public:
	double                                       CurrentHealth;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxHealth;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentHealthPercentage;                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CallFunc_GetCurrentHealth_ReturnValue;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMaxHealth_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_36E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_CurrentHealth_ImplicitCast;     // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_MaxHealth_ImplicitCast;         // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ToggleMeshVisibility
struct UBP_StructureCompositePiece_C_ToggleMeshVisibility_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3707[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CompositePieceMeshInstance_C*      CallFunc_GetBPMeshInstance_MeshInstance;           // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x159 (0x159 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCompleteState
struct UBP_StructureCompositePiece_C_OnCompleteState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3720[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetOwnerStructureComposite_ReturnValue;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FCompositePieceGameplay               CallFunc_GetPieceData_OutPieceData;                // 0x10(0x140)(None)
	class ABP_StructureComposite_Base_C*         K2Node_DynamicCast_AsBP_Structure_Composite_Base;  // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnConstructionState
struct UBP_StructureCompositePiece_C_OnConstructionState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnConfirmedState
struct UBP_StructureCompositePiece_C_OnConfirmedState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnInitState
struct UBP_StructureCompositePiece_C_OnInitState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnSchematicPlacedState
struct UBP_StructureCompositePiece_C_OnSchematicPlacedState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBPMeshInstance
struct UBP_StructureCompositePiece_C_GetBPMeshInstance_Params
{
public:
	class UBP_CompositePieceMeshInstance_C*      MeshInstance;                                      // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetFunctionName_ReturnValue_1;            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCompositePieceInstance*               CallFunc_GetMeshInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3776[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_CompositePieceMeshInstance_C*      K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance; // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.GetBPStructureComposite
struct UBP_StructureCompositePiece_C_GetBPStructureComposite_Params
{
public:
	class ABP_Structure_Composite_C*             AsBP_Structure_Composite;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AStructureComposite*                   CallFunc_GetOwnerStructureComposite_ReturnValue;   // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_37A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Composite_C*             K2Node_DynamicCast_AsBP_Structure_Composite;       // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnPlacementState
struct UBP_StructureCompositePiece_C_OnPlacementState_Params
{
public:
	bool                                         Success;                                           // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RefreshState
struct UBP_StructureCompositePiece_C_RefreshState_Params
{
public:
	bool                                         LSuccess;                                          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnCompleteState_Success;                  // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnConstructionState_Success;              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnConfirmedState_Success;                 // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnInitState_Success;                      // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSchematicPlacedState_Success;           // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnPlacementState_Success;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.BindTo_SupportingObjectsChangedDelegate
struct UBP_StructureCompositePiece_C_BindTo_SupportingObjectsChangedDelegate_Params
{
public:
	FDelegateProperty_                           SupportingObjectsChangedDelegate;                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.TrackSupportedObject
struct UBP_StructureCompositePiece_C_TrackSupportedObject_Params
{
public:
	struct FStructureSupportObjectData           SupportedObject;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UnbindFrom_SupportingObjectsChangedDelegate
struct UBP_StructureCompositePiece_C_UnbindFrom_SupportingObjectsChangedDelegate_Params
{
public:
	FDelegateProperty_                           SupportingObjectsChangedDelegate;                  // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.UntrackSupportedObject
struct UBP_StructureCompositePiece_C_UntrackSupportedObject_Params
{
public:
	struct FStructureSupportObjectData           SupportedObject;                                   // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnAnyAttributeChanged
struct UBP_StructureCompositePiece_C_OnAnyAttributeChanged_Params
{
public:
	struct FGameplayAttribute                    Attribute;                                         // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterWeightChanged
struct UBP_StructureCompositePiece_C_OnCharacterWeightChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCharacterWeightMaxChanged
struct UBP_StructureCompositePiece_C_OnCharacterWeightMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftBuildPointsChanged
struct UBP_StructureCompositePiece_C_OnCraftBuildPointsChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftIntegrityChanged
struct UBP_StructureCompositePiece_C_OnCraftIntegrityChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnCraftQualityChanged
struct UBP_StructureCompositePiece_C_OnCraftQualityChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnEstateScoreChanged
struct UBP_StructureCompositePiece_C_OnEstateScoreChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFedChanged
struct UBP_StructureCompositePiece_C_OnFedChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFedMaxChanged
struct UBP_StructureCompositePiece_C_OnFedMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnFuelChanged
struct UBP_StructureCompositePiece_C_OnFuelChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHealthMaxChanged
struct UBP_StructureCompositePiece_C_OnHealthMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeChanged
struct UBP_StructureCompositePiece_C_OnHopeChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeMaxChanged
struct UBP_StructureCompositePiece_C_OnHopeMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHopeMinChanged
struct UBP_StructureCompositePiece_C_OnHopeMinChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnLoadoutLevelChanged
struct UBP_StructureCompositePiece_C_OnLoadoutLevelChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedBonusChanged
struct UBP_StructureCompositePiece_C_OnMaxSpeedBonusChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedRunChanged
struct UBP_StructureCompositePiece_C_OnMaxSpeedRunChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedWalkChanged
struct UBP_StructureCompositePiece_C_OnMaxSpeedWalkChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnMaxSpeedWalkFastChanged
struct UBP_StructureCompositePiece_C_OnMaxSpeedWalkFastChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnQuestScoreChanged
struct UBP_StructureCompositePiece_C_OnQuestScoreChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnRestedChanged
struct UBP_StructureCompositePiece_C_OnRestedChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnRestedMaxChanged
struct UBP_StructureCompositePiece_C_OnRestedMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStaminaChanged
struct UBP_StructureCompositePiece_C_OnStaminaChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnStaminaMaxChanged
struct UBP_StructureCompositePiece_C_OnStaminaMaxChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnReceiveCarriedResources
struct UBP_StructureCompositePiece_C_OnReceiveCarriedResources_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.PerformClientSideInteraction
struct UBP_StructureCompositePiece_C_PerformClientSideInteraction_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnBuildProgressChanged
struct UBP_StructureCompositePiece_C_OnBuildProgressChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.OnHealthChanged
struct UBP_StructureCompositePiece_C_OnHealthChanged_Params
{
public:
	float                                        Delta;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.CallHealthChangedEvent
struct UBP_StructureCompositePiece_C_CallHealthChangedEvent_Params
{
public:
	struct FStructureHealthChangedContext        HealthChangedContext;                              // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};

// 0x130 (0x130 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.K2_OnDamageReceived
struct UBP_StructureCompositePiece_C_K2_OnDamageReceived_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3A0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Source;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 EffectTags;                                        // 0x18(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FHitResult                            HitResult;                                         // 0x38(0xE8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTagValueContainer                    TagValueContainer;                                 // 0x120(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.AddGameplayTagToStructure
struct UBP_StructureCompositePiece_C_AddGameplayTagToStructure_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.RemoveGameplayTagFromStructure
struct UBP_StructureCompositePiece_C_RemoveGameplayTagFromStructure_Params
{
public:
	struct FGameplayTag                          GameplayTag;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x480 (0x480 - 0x0)
// Function BP_StructureCompositePiece.BP_StructureCompositePiece_C.ExecuteUbergraph_BP_StructureCompositePiece
struct UBP_StructureCompositePiece_C_ExecuteUbergraph_BP_StructureCompositePiece_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B04[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FCompositePieceGameplay               CallFunc_GetPieceData_OutPieceData;                // 0x10(0x140)(None)
	FDelegateProperty_                           K2Node_Event_SupportingObjectsChangedDelegate_1;   // 0x150(0x10)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructureSupportObjectData           K2Node_Event_SupportedObject_1;                    // 0x160(0x10)(ConstParm, NoDestructor)
	FDelegateProperty_                           K2Node_Event_SupportingObjectsChangedDelegate;     // 0x170(0x10)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructureSupportObjectData           K2Node_Event_SupportedObject;                      // 0x180(0x10)(ConstParm, NoDestructor)
	struct FGameplayAttribute                    K2Node_Event_Attribute;                            // 0x190(0x38)(ConstParm, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_24;                             // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_23;                             // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_22;                             // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_21;                             // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_20;                             // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_19;                             // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_18;                             // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_17;                             // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_16;                             // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_15;                             // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_14;                             // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_13;                             // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_12;                             // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_11;                             // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_10;                             // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_9;                              // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_8;                              // 0x208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_7;                              // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_6;                              // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_5;                              // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_4;                              // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_3;                              // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_2;                              // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B40[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AController*                           K2Node_Event_Controller_1;                         // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           K2Node_Event_Controller;                           // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta_1;                              // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Delta;                                // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructureHealthChangedContext        K2Node_Event_HealthChangedContext;                 // 0x240(0x28)(NoDestructor)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite; // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x270(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x280(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Target;                               // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_Source;                               // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_EffectTags;                           // 0x298(0x20)(ConstParm)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x2B8(0xE8)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FTagValueContainer                    K2Node_Event_TagValueContainer;                    // 0x3A0(0x10)(ConstParm)
	class UBP_DamageObject_CompositePiece_C*     CallFunc_GetDamageObject_DamageObject;             // 0x3B0(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1; // 0x3B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2; // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_GameplayTag_1;                        // 0x3C8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue;            // 0x3D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue;                     // 0x3D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B66[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          K2Node_Event_GameplayTag;                          // 0x3D4(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsServer_ReturnValue_1;                   // 0x3DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue_1;          // 0x3DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite;          // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3; // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface;     // 0x3F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       CallFunc_GetAudioComponent_ReturnValue;            // 0x408(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsVisible_Client_IsVisible;            // 0x410(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_GetSchematicState_ReturnValue;            // 0x411(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CallFunc_SetStructureSchematicState_ReturnValue;   // 0x412(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B7C[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x414(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B80[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UActorComponent*                       Temp_object_Variable;                              // 0x428(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue_2;          // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B85[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_Structure_Audio_Component_C*       K2Node_DynamicCast_AsBP_Structure_Audio_Component; // 0x438(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B8B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Structure_Composite_C*             CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4; // 0x448(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B99[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureEventsObject*                CallFunc_GetStructureEventsObject_ReturnValue;     // 0x458(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue_3;          // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureEventsObject*                CallFunc_GetStructureEventsObject_ReturnValue_1;   // 0x468(0x8)(ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OwnerHasAuthority_ReturnValue_4;          // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CallFunc_OnStructureDamageReceived_Damage_ImplicitCast; // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


