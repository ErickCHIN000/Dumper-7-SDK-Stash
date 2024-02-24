#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C
// (None)

class UClass* UBP_PlacerObject_CompositePiece_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlacerObject_CompositePiece_C");

	return Clss;
}


// BP_PlacerObject_CompositePiece_C BP_PlacerObject_CompositePiece.Default__BP_PlacerObject_CompositePiece_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlacerObject_CompositePiece_C* UBP_PlacerObject_CompositePiece_C::GetDefaultObj()
{
	static class UBP_PlacerObject_CompositePiece_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlacerObject_CompositePiece_C*>(UBP_PlacerObject_CompositePiece_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.SetSnapTargetFeedback
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     SnapTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback OutFeedback                                                      (Parm, OutParm, ContainsInstancedReference)
// bool                               bIsOverStructureBudget                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsOverPieceBudget                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback FeedbackData                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// struct FStructurePlacementFeedback CallFunc_SetSnapTargetFeedback_OutFeedback                       (ContainsInstancedReference)
// bool                               CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureCompositePiece*    K2Node_DynamicCast_AsStructure_Composite_Piece                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetOwnerStructureComposite_ReturnValue                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesPlacementExceedPieceBudget_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlacerObject_CompositePiece_C::SetSnapTargetFeedback(struct FStructurePlacementFeedback& Feedback, class UObject* SnapTarget, class AController* Controller, struct FStructurePlacementFeedback* OutFeedback, bool bIsOverStructureBudget, bool bIsOverPieceBudget, const struct FStructurePlacementFeedback& FeedbackData, const struct FStructurePlacementFeedback& CallFunc_SetSnapTargetFeedback_OutFeedback, bool CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UStructureCompositePiece* K2Node_DynamicCast_AsStructure_Composite_Piece, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, bool CallFunc_DoesPlacementExceedPieceBudget_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_CompositePiece_C", "SetSnapTargetFeedback");

	Params::UBP_PlacerObject_CompositePiece_C_SetSnapTargetFeedback_Params Parms{};

	Parms.Feedback = Feedback;
	Parms.SnapTarget = SnapTarget;
	Parms.Controller = Controller;
	Parms.bIsOverStructureBudget = bIsOverStructureBudget;
	Parms.bIsOverPieceBudget = bIsOverPieceBudget;
	Parms.FeedbackData = FeedbackData;
	Parms.CallFunc_SetSnapTargetFeedback_OutFeedback = CallFunc_SetSnapTargetFeedback_OutFeedback;
	Parms.CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue = CallFunc_DoesWorldExceedCompositeStructureBudget_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece = K2Node_DynamicCast_AsStructure_Composite_Piece;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwnerStructureComposite_ReturnValue = CallFunc_GetOwnerStructureComposite_ReturnValue;
	Parms.CallFunc_DoesPlacementExceedPieceBudget_ReturnValue = CallFunc_DoesPlacementExceedPieceBudget_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFeedback != nullptr)
		*OutFeedback = std::move(Parms.OutFeedback);

}


// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.FinalizeGameplayData
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizeGameplayData_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddPieceToConstructionBuckets_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PlacerObject_CompositePiece_C::FinalizeGameplayData(class UObject* Structure, bool CallFunc_FinalizeGameplayData_ReturnValue, bool CallFunc_AddPieceToConstructionBuckets_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_CompositePiece_C", "FinalizeGameplayData");

	Params::UBP_PlacerObject_CompositePiece_C_FinalizeGameplayData_Params Parms{};

	Parms.Structure = Structure;
	Parms.CallFunc_FinalizeGameplayData_ReturnValue = CallFunc_FinalizeGameplayData_ReturnValue;
	Parms.CallFunc_AddPieceToConstructionBuckets_ReturnValue = CallFunc_AddPieceToConstructionBuckets_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.FinalizeStructureData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    SnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  GridPointToSnapTo                                                (Edit, BlueprintVisible)
// class UObject*                     AttachedActor                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizeStructureData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// bool                               CallFunc_SnapToPiece_OutSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPlacementRequiresSnap_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PlacerObject_CompositePiece_C::FinalizeStructureData(class UObject* Structure, class AController* Controller, struct FSnapPlacementTargetData& SnapData, const struct FGridPoint& GridPointToSnapTo, class UObject* AttachedActor, bool CallFunc_FinalizeStructureData_ReturnValue, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, bool CallFunc_SnapToPiece_OutSuccess, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_GetPlacementRequiresSnap_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_CompositePiece_C", "FinalizeStructureData");

	Params::UBP_PlacerObject_CompositePiece_C_FinalizeStructureData_Params Parms{};

	Parms.Structure = Structure;
	Parms.Controller = Controller;
	Parms.SnapData = SnapData;
	Parms.GridPointToSnapTo = GridPointToSnapTo;
	Parms.AttachedActor = AttachedActor;
	Parms.CallFunc_FinalizeStructureData_ReturnValue = CallFunc_FinalizeStructureData_ReturnValue;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.CallFunc_SnapToPiece_OutSuccess = CallFunc_SnapToPiece_OutSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_GetPlacementRequiresSnap_ReturnValue = CallFunc_GetPlacementRequiresSnap_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.SnapToPiece
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    SnapData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               OutSuccess                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ConnectTwoPieces_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ValidateSnapPlacementData_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlacerObject_CompositePiece_C::SnapToPiece(class UObject* Structure, const struct FSnapPlacementTargetData& SnapData, bool* OutSuccess, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, bool CallFunc_ConnectTwoPieces_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_ValidateSnapPlacementData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_CompositePiece_C", "SnapToPiece");

	Params::UBP_PlacerObject_CompositePiece_C_SnapToPiece_Params Parms{};

	Parms.Structure = Structure;
	Parms.SnapData = SnapData;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_ConnectTwoPieces_ReturnValue = CallFunc_ConnectTwoPieces_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_ValidateSnapPlacementData_ReturnValue = CallFunc_ValidateSnapPlacementData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSuccess != nullptr)
		*OutSuccess = Parms.OutSuccess;

}


// Function BP_PlacerObject_CompositePiece.BP_PlacerObject_CompositePiece_C.GetObjectsToIgnoreInGeometryTrace
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     ThisStructure                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UObject*>             OutObjectsToIgnore                                               (Parm, OutParm)
// TArray<struct FGridPoint>          OtherSnapPoints                                                  (Edit, BlueprintVisible)
// TArray<class UObject*>             LIgnoredObjects                                                  (Edit, BlueprintVisible)
// TArray<class UObject*>             CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore    (ReferenceParm)
// struct FSnapPlacementTargetData    CallFunc_GetSnapPlacementData_OutData                            (None)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureCompositePieceInterface>K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AStructureComposite*         CallFunc_GetCompositeStructure_Composite_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlacerObject_CompositePiece_C::GetObjectsToIgnoreInGeometryTrace(class UObject* ThisStructure, struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class UObject*>* OutObjectsToIgnore, const TArray<struct FGridPoint>& OtherSnapPoints, const TArray<class UObject*>& LIgnoredObjects, TArray<class UObject*>& CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureCompositePieceInterface> K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class AStructureComposite* CallFunc_GetCompositeStructure_Composite_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_CompositePiece_C", "GetObjectsToIgnoreInGeometryTrace");

	Params::UBP_PlacerObject_CompositePiece_C_GetObjectsToIgnoreInGeometryTrace_Params Parms{};

	Parms.ThisStructure = ThisStructure;
	Parms.TargetData = TargetData;
	Parms.OtherSnapPoints = OtherSnapPoints;
	Parms.LIgnoredObjects = LIgnoredObjects;
	Parms.CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore = CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore;
	Parms.CallFunc_GetSnapPlacementData_OutData = CallFunc_GetSnapPlacementData_OutData;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1 = K2Node_DynamicCast_AsStructure_Composite_Piece_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetCompositeStructure_Composite = CallFunc_GetCompositeStructure_Composite;
	Parms.CallFunc_GetCompositeStructure_Composite_1 = CallFunc_GetCompositeStructure_Composite_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue_2 = CallFunc_Array_Add_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (OutObjectsToIgnore != nullptr)
		*OutObjectsToIgnore = std::move(Parms.OutObjectsToIgnore);

}

}


