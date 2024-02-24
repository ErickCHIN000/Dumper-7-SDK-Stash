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

// 0x31A (0x31A - 0x0)
// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.SetSnapTargetFeedback
struct UBP_PlacerObject_CompositePiece_C_SetSnapTargetFeedback_Params
{
public:
	struct FStructurePlacementFeedback           Feedback;                                          // 0x0(0xB8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class UObject*                               SnapTarget;                                        // 0xB8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0xC0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStructurePlacementFeedback           OutFeedback;                                       // 0xC8(0xB8)(Parm, OutParm, ContainsInstancedReference)
	bool                                         bIsOverStructureBudget;                            // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsOverPieceBudget;                                // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D9[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructurePlacementFeedback           FeedbackData;                                      // 0x188(0xB8)(Edit, BlueprintVisible, ContainsInstancedReference)
	struct FStructurePlacementFeedback           CallFunc_SetSnapTargetFeedback_OutFeedback;        // 0x240(0xB8)(ContainsInstancedReference)
	bool                                         CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue; // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x2FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3E5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UStructureCompositePiece*              K2Node_DynamicCast_AsStructure_Composite_Piece;    // 0x300(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3EC[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetOwnerStructureComposite_ReturnValue;   // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesPlacementExceedPieceBudget_ReturnValue; // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB (0xB - 0x0)
// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.FinalizeGameplayData
struct UBP_PlacerObject_CompositePiece_C_FinalizeGameplayData_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinalizeGameplayData_ReturnValue;         // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddPieceToConstructionBuckets_ReturnValue; // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E1 (0x2E1 - 0x0)
// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.FinalizeStructureData
struct UBP_PlacerObject_CompositePiece_C_FinalizeStructureData_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           Controller;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSnapPlacementTargetData              SnapData;                                          // 0x10(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ReturnValue;                                       // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_449[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGridPoint                            GridPointToSnapTo;                                 // 0xC0(0xD0)(Edit, BlueprintVisible)
	class UObject*                               AttachedActor;                                     // 0x190(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FinalizeStructureData_ReturnValue;        // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_451[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0x1A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_455[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0x1B0(0xD0)(None)
	bool                                         CallFunc_SnapToPiece_OutSuccess;                   // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_45A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x288(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_460[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_465[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite;          // 0x2B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetPlacementRequiresSnap_ReturnValue;     // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2CA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_471[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetFunctionName_ReturnValue;              // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D9 (0x1D9 - 0x0)
// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.SnapToPiece
struct UBP_PlacerObject_CompositePiece_C_SnapToPiece_Params
{
public:
	class UObject*                               Structure;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSnapPlacementTargetData              SnapData;                                          // 0x10(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         OutSuccess;                                        // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0xC0(0xD0)(None)
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite;          // 0x1A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ConnectTwoPieces_ReturnValue;             // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface; // 0x1B8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCompositePieceSnapObject*             CallFunc_GetSnapComponent_SnapObject;              // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ValidateSnapPlacementData_ReturnValue;    // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x240 (0x240 - 0x0)
// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.GetObjectsToIgnoreInGeometryTrace
struct UBP_PlacerObject_CompositePiece_C_GetObjectsToIgnoreInGeometryTrace_Params
{
public:
	class UObject*                               ThisStructure;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityTargetDataHandle      TargetData;                                        // 0x8(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UObject*>                       OutObjectsToIgnore;                                // 0x30(0x10)(Parm, OutParm)
	TArray<struct FGridPoint>                    OtherSnapPoints;                                   // 0x40(0x10)(Edit, BlueprintVisible)
	TArray<class UObject*>                       LIgnoredObjects;                                   // 0x50(0x10)(Edit, BlueprintVisible)
	TArray<class UObject*>                       CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore; // 0x60(0x10)(ReferenceParm)
	struct FSnapPlacementTargetData              CallFunc_GetSnapPlacementData_OutData;             // 0x70(0xA0)(None)
	class UObject*                               CallFunc_GetSnapActorFromTargetData_OutActor;      // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_50E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGridPoint                            CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint; // 0x120(0xD0)(None)
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface; // 0x1F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_513[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1; // 0x208(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_515[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite;          // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AStructureComposite*                   CallFunc_GetCompositeStructure_Composite_1;        // 0x228(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x232(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_522[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x234(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x23C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


