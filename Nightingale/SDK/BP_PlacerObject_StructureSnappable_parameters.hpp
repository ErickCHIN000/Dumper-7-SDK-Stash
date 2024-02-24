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

// 0x2F9 (0x2F9 - 0x0)
// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.FinalizeStructureData
struct UBP_PlacerObject_StructureSnappable_C_FinalizeStructureData_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSnapPlacementTargetData              SnapData;                                          // 0x10(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             AttachedObjectSnapComponent;                       // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGridPoint                            TargetSnapPoint;                                   // 0xC0(0xD0)(Edit, BlueprintVisible)
	class UObject*                               AttachedObject;                                    // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinalizeStructureData_ReturnValue;        // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_29EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSupportObjectFromStructure_ReturnValue; // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISupportInterface>    K2Node_DynamicCast_AsSupport_Interface;            // 0x1A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A02[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A09[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0x1D0(0xD0)(None)
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A1C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface_1; // 0x2B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject_1;            // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A28[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.SetSnapTargetFeedback
struct UBP_PlacerObject_StructureSnappable_C_SetSnapTargetFeedback_Params
{
public:
	struct FStructurePlacementFeedback           Feedback;                                          // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               SnapTarget;                                        // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           OutFeedback;                                       // 0xC8(0xB8)(Parm, OutParm, ContainsInstancedReference)
};

// 0x668 (0x668 - 0x0)
// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.SetPlacementFeedback
struct UBP_PlacerObject_StructureSnappable_C_SetPlacementFeedback_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x10(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FStructurePlacementFeedback           ReturnValue;                                       // 0x38(0xB8)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
	TArray<class AActor*>                        NearbyActors;                                      // 0xF0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<struct FGridPoint>                    SnapPoints;                                        // 0x100(0x10)(Edit, BlueprintVisible)
	enum class ESnapType                         DesiredSnapType;                                   // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BF2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback           FeedbackData;                                      // 0x118(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference)
	class USphereComponent*                      Temp_object_Variable;                              // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C03[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class AActor*>                        CallFunc_GetOverlappingActors_OverlappingActors;   // 0x1E0(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C09[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                CallFunc_Array_Get_Item;                           // 0x1F8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C32[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface;     // 0x208(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C38[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSnapPlacementTargetData              CallFunc_GetSnapPlacementData_OutData;             // 0x220(0xA0)(None)
	class USphereComponent*                      CallFunc_GetAreaOfEffect_ReturnValue;              // 0x2C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0x2C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0x2D0(0xD0)(None)
	struct FTransform                            CallFunc_GetGridPointWorldTransform_ReturnValue;   // 0x3A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C4C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x408(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x420(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x438(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           CallFunc_SetSnapTargetFeedback_OutFeedback;        // 0x450(0xB8)(ContainsInstancedReference)
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x508(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x518(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESnapType                         CallFunc_GetSnapType_SnapPointType;                // 0x519(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C57[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_SnapPoint K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint; // 0x520(0x28)(None)
	TArray<struct FGridPoint>                    CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints; // 0x548(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x558(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x55C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C7A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback_SnapPoint K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint_1; // 0x568(0x28)(None)
	TArray<struct FGridPoint>                    CallFunc_GetUnoccupiedSnapPointsForPieceViaTrace_OutSnapPoints; // 0x590(0x10)(ReferenceParm)
	TArray<struct FGridPoint>                    CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints_1; // 0x5A0(0x10)(ReferenceParm)
	struct FStructurePlacementFeedback           CallFunc_SetPlacementFeedback_ReturnValue;         // 0x5B0(0xB8)(ContainsInstancedReference)
};

// 0xE1 (0xE1 - 0x0)
// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.GetPlacementTransform
struct UBP_PlacerObject_StructureSnappable_C_GetPlacementTransform_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            Character;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        OptionalDeltaRotationZ;                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OptionalDeltaHeightZ;                              // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      ReturnValue;                                       // 0x18(0x28)(Parm, OutParm, ReturnParm)
	struct FGameplayAbilityTargetDataHandle      CallFunc_GetPlacementTransform_ReturnValue;        // 0x40(0x28)(None)
	struct FGameplayAbilityTargetDataHandle      CallFunc_GetPlacementTransform_ReturnValue_1;      // 0x68(0x28)(None)
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x90(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DE8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayAbilityTargetDataHandle      CallFunc_GetSnapPlacementTransform_SnapTargetData; // 0xB8(0x28)(None)
	bool                                         CallFunc_GetSnapPlacementTransform_ReturnValue;    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.GetObjectsToIgnoreInGeometryTrace
struct UBP_PlacerObject_StructureSnappable_C_GetObjectsToIgnoreInGeometryTrace_Params
{
public:
	class UObject*                               ThisStructure;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UObject*>                       OutObjectsToIgnore;                                // 0x30(0x10)(Parm, OutParm)
	class UObject*                               LSnapTarget;                                       // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                       LIgnoredObjects;                                   // 0x48(0x10)(Edit, BlueprintVisible)
	TArray<class UObject*>                       CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore; // 0x58(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F11[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F23[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F33[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UObject*>                       CallFunc_GetAllConnectedStructures_ConnectedStructures; // 0x98(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F48[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSnapPlacementTargetData              CallFunc_GetSnapPlacementData_OutData;             // 0xB0(0xA0)(None)
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F57[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0x160(0xD0)(None)
};

}
}


