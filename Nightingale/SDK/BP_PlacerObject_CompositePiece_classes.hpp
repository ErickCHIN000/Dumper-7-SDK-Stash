#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C
class UBP_PlacerObject_CompositePiece_C : public UBP_PlacerObject_StructureSnappable_C
{
public:

	static class UClass* StaticClass();
	static class UBP_PlacerObject_CompositePiece_C* GetDefaultObj();

	void SetSnapTargetFeedback(struct FStructurePlacementFeedback& Feedback, class UObject* SnapTarget, class AController* Controller, struct FStructurePlacementFeedback* OutFeedback, bool bIsOverStructureBudget, bool bIsOverPieceBudget, const struct FStructurePlacementFeedback& FeedbackData, const struct FStructurePlacementFeedback& CallFunc_SetSnapTargetFeedback_OutFeedback, bool CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, bool CallFunc_DoesPlacementExceedPieceBudget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	bool FinalizeGameplayData(class UObject* Structure, bool CallFunc_FinalizeGameplayData_ReturnValue, bool CallFunc_AddPieceToConstructionBuckets_ReturnValue);
	bool FinalizeStructureData(class UObject* Structure, class AController* Controller, struct FSnapPlacementTargetData& SnapData, const struct FGridPoint& GridPointToSnapTo, class UObject* AttachedActor, bool CallFunc_FinalizeStructureData_ReturnValue, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, bool CallFunc_SnapToPiece_OutSuccess, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_GetPlacementRequiresSnap_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void SnapToPiece(class UObject* Structure, const struct FSnapPlacementTargetData& SnapData, bool* OutSuccess, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, bool CallFunc_ConnectTwoPieces_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_ValidateSnapPlacementData_ReturnValue);
	void GetObjectsToIgnoreInGeometryTrace(class UObject* ThisStructure, struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class UObject*>* OutObjectsToIgnore, const TArray<struct FGridPoint>& OtherSnapPoints, const TArray<class UObject*>& LIgnoredObjects, TArray<class UObject*>& CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class AStructureComposite* CallFunc_GetCompositeStructure_Composite_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2);
};

}


