#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C
// (None)

class UClass* UBP_PlacerObject_StructureSnappable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlacerObject_StructureSnappable_C");

	return Clss;
}


// BP_PlacerObject_StructureSnappable_C BP_PlacerObject_StructureSnappable.Default__BP_PlacerObject_StructureSnappable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PlacerObject_StructureSnappable_C* UBP_PlacerObject_StructureSnappable_C::GetDefaultObj()
{
	static class UBP_PlacerObject_StructureSnappable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PlacerObject_StructureSnappable_C*>(UBP_PlacerObject_StructureSnappable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.FinalizeStructureData
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    SnapData                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   AttachedObjectSnapComponent                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  TargetSnapPoint                                                  (Edit, BlueprintVisible)
// class UObject*                     AttachedObject                                                   (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FinalizeStructureData_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSupportObjectFromStructure_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISupportInterface>K2Node_DynamicCast_AsSupport_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetFunctionName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBP_PlacerObject_StructureSnappable_C::FinalizeStructureData(class UObject* Structure, class AController* Controller, struct FSnapPlacementTargetData& SnapData, class UCompositePieceSnapObject* AttachedObjectSnapComponent, const struct FGridPoint& TargetSnapPoint, class UObject* AttachedObject, bool CallFunc_FinalizeStructureData_ReturnValue, class UObject* CallFunc_GetSupportObjectFromStructure_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface_1, bool K2Node_DynamicCast_bSuccess_2, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_StructureSnappable_C", "FinalizeStructureData");

	Params::UBP_PlacerObject_StructureSnappable_C_FinalizeStructureData_Params Parms{};

	Parms.Structure = Structure;
	Parms.Controller = Controller;
	Parms.SnapData = SnapData;
	Parms.AttachedObjectSnapComponent = AttachedObjectSnapComponent;
	Parms.TargetSnapPoint = TargetSnapPoint;
	Parms.AttachedObject = AttachedObject;
	Parms.CallFunc_FinalizeStructureData_ReturnValue = CallFunc_FinalizeStructureData_ReturnValue;
	Parms.CallFunc_GetSupportObjectFromStructure_ReturnValue = CallFunc_GetSupportObjectFromStructure_ReturnValue;
	Parms.K2Node_DynamicCast_AsSupport_Interface = K2Node_DynamicCast_AsSupport_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface_1 = K2Node_DynamicCast_AsStructure_Snappable_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_GetSnapComponent_SnapObject_1 = CallFunc_GetSnapComponent_SnapObject_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetFunctionName_ReturnValue = CallFunc_GetFunctionName_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.SetSnapTargetFeedback
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FStructurePlacementFeedback Feedback                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class UObject*                     SnapTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback OutFeedback                                                      (Parm, OutParm, ContainsInstancedReference)

void UBP_PlacerObject_StructureSnappable_C::SetSnapTargetFeedback(struct FStructurePlacementFeedback& Feedback, class UObject* SnapTarget, class AController* Controller, struct FStructurePlacementFeedback* OutFeedback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_StructureSnappable_C", "SetSnapTargetFeedback");

	Params::UBP_PlacerObject_StructureSnappable_C_SetSnapTargetFeedback_Params Parms{};

	Parms.Feedback = Feedback;
	Parms.SnapTarget = SnapTarget;
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFeedback != nullptr)
		*OutFeedback = std::move(Parms.OutFeedback);

}


// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.SetPlacementFeedback
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AController*                 Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FStructurePlacementFeedback ReturnValue                                                      (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class AActor*>              NearbyActors                                                     (Edit, BlueprintVisible, DisableEditOnTemplate)
// TArray<struct FGridPoint>          SnapPoints                                                       (Edit, BlueprintVisible)
// enum class ESnapType               DesiredSnapType                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback FeedbackData                                                     (Edit, BlueprintVisible, ContainsInstancedReference)
// class USphereComponent*            Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ISchematicInfoInterface>K2Node_DynamicCast_AsSchematic_Info_Interface                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    CallFunc_GetSnapPlacementData_OutData                            (None)
// class USphereComponent*            CallFunc_GetAreaOfEffect_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)
// struct FTransform                  CallFunc_GetGridPointWorldTransform_ReturnValue                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback CallFunc_SetSnapTargetFeedback_OutFeedback                       (ContainsInstancedReference)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESnapType               CallFunc_GetSnapType_SnapPointType                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_SnapPointK2Node_MakeStruct_StructurePlacementFeedback_SnapPoint           (None)
// TArray<struct FGridPoint>          CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints(ReferenceParm)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FStructurePlacementFeedback_SnapPointK2Node_MakeStruct_StructurePlacementFeedback_SnapPoint_1         (None)
// TArray<struct FGridPoint>          CallFunc_GetUnoccupiedSnapPointsForPieceViaTrace_OutSnapPoints   (ReferenceParm)
// TArray<struct FGridPoint>          CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints_1(ReferenceParm)
// struct FStructurePlacementFeedback CallFunc_SetPlacementFeedback_ReturnValue                        (ContainsInstancedReference)

struct FStructurePlacementFeedback UBP_PlacerObject_StructureSnappable_C::SetPlacementFeedback(class UObject* Structure, class AController* Controller, struct FGameplayAbilityTargetDataHandle& TargetData, const TArray<class AActor*>& NearbyActors, const TArray<struct FGridPoint>& SnapPoints, enum class ESnapType DesiredSnapType, const struct FStructurePlacementFeedback& FeedbackData, class USphereComponent* Temp_object_Variable, int32 Temp_int_Array_Index_Variable, TArray<class AActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData, class USphereComponent* CallFunc_GetAreaOfEffect_ReturnValue, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint, const struct FTransform& CallFunc_GetGridPointWorldTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FStructurePlacementFeedback& CallFunc_SetSnapTargetFeedback_OutFeedback, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess_1, enum class ESnapType CallFunc_GetSnapType_SnapPointType, const struct FStructurePlacementFeedback_SnapPoint& K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint, TArray<struct FGridPoint>& CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FStructurePlacementFeedback_SnapPoint& K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint_1, TArray<struct FGridPoint>& CallFunc_GetUnoccupiedSnapPointsForPieceViaTrace_OutSnapPoints, TArray<struct FGridPoint>& CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints_1, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_StructureSnappable_C", "SetPlacementFeedback");

	Params::UBP_PlacerObject_StructureSnappable_C_SetPlacementFeedback_Params Parms{};

	Parms.Structure = Structure;
	Parms.Controller = Controller;
	Parms.TargetData = TargetData;
	Parms.NearbyActors = NearbyActors;
	Parms.SnapPoints = SnapPoints;
	Parms.DesiredSnapType = DesiredSnapType;
	Parms.FeedbackData = FeedbackData;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSchematic_Info_Interface = K2Node_DynamicCast_AsSchematic_Info_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapPlacementData_OutData = CallFunc_GetSnapPlacementData_OutData;
	Parms.CallFunc_GetAreaOfEffect_ReturnValue = CallFunc_GetAreaOfEffect_ReturnValue;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;
	Parms.CallFunc_GetGridPointWorldTransform_ReturnValue = CallFunc_GetGridPointWorldTransform_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_SetSnapTargetFeedback_OutFeedback = CallFunc_SetSnapTargetFeedback_OutFeedback;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSnapType_SnapPointType = CallFunc_GetSnapType_SnapPointType;
	Parms.K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint = K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint;
	Parms.CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints = CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint_1 = K2Node_MakeStruct_StructurePlacementFeedback_SnapPoint_1;
	Parms.CallFunc_GetUnoccupiedSnapPointsForPieceViaTrace_OutSnapPoints = CallFunc_GetUnoccupiedSnapPointsForPieceViaTrace_OutSnapPoints;
	Parms.CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints_1 = CallFunc_GetUnoccupiedSnapPointsForPieceOfType_OutMatchingSnapPoints_1;
	Parms.CallFunc_SetPlacementFeedback_ReturnValue = CallFunc_SetPlacementFeedback_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.GetPlacementTransform
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaRotationZ                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              OptionalDeltaHeightZ                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTransform_ReturnValue                       (None)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetPlacementTransform_ReturnValue_1                     (None)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_GetSnapPlacementTransform_SnapTargetData                (None)
// bool                               CallFunc_GetSnapPlacementTransform_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGameplayAbilityTargetDataHandle UBP_PlacerObject_StructureSnappable_C::GetPlacementTransform(class UObject* Structure, class ACharacter* Character, float OptionalDeltaRotationZ, float OptionalDeltaHeightZ, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue_1, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetSnapPlacementTransform_SnapTargetData, bool CallFunc_GetSnapPlacementTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_StructureSnappable_C", "GetPlacementTransform");

	Params::UBP_PlacerObject_StructureSnappable_C_GetPlacementTransform_Params Parms{};

	Parms.Structure = Structure;
	Parms.Character = Character;
	Parms.OptionalDeltaRotationZ = OptionalDeltaRotationZ;
	Parms.OptionalDeltaHeightZ = OptionalDeltaHeightZ;
	Parms.CallFunc_GetPlacementTransform_ReturnValue = CallFunc_GetPlacementTransform_ReturnValue;
	Parms.CallFunc_GetPlacementTransform_ReturnValue_1 = CallFunc_GetPlacementTransform_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetSnapPlacementTransform_SnapTargetData = CallFunc_GetSnapPlacementTransform_SnapTargetData;
	Parms.CallFunc_GetSnapPlacementTransform_ReturnValue = CallFunc_GetSnapPlacementTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_PlacerObject_StructureSnappable.BP_PlacerObject_StructureSnappable_C.GetObjectsToIgnoreInGeometryTrace
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     ThisStructure                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UObject*>             OutObjectsToIgnore                                               (Parm, OutParm)
// class UObject*                     LSnapTarget                                                      (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             LIgnoredObjects                                                  (Edit, BlueprintVisible)
// TArray<class UObject*>             CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore    (ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureSnappableInterface>K2Node_DynamicCast_AsStructure_Snappable_Interface               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCompositePieceSnapObject*   CallFunc_GetSnapComponent_SnapObject                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UObject*>             CallFunc_GetAllConnectedStructures_ConnectedStructures           (ReferenceParm)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSnapPlacementTargetData    CallFunc_GetSnapPlacementData_OutData                            (None)
// class UObject*                     CallFunc_GetSnapActorFromTargetData_OutActor                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGridPoint                  CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint         (None)

void UBP_PlacerObject_StructureSnappable_C::GetObjectsToIgnoreInGeometryTrace(class UObject* ThisStructure, struct FGameplayAbilityTargetDataHandle& TargetData, TArray<class UObject*>* OutObjectsToIgnore, class UObject* LSnapTarget, const TArray<class UObject*>& LIgnoredObjects, TArray<class UObject*>& CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureSnappableInterface> K2Node_DynamicCast_AsStructure_Snappable_Interface, bool K2Node_DynamicCast_bSuccess, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<class UObject*>& CallFunc_GetAllConnectedStructures_ConnectedStructures, int32 CallFunc_Array_Add_ReturnValue_1, const struct FSnapPlacementTargetData& CallFunc_GetSnapPlacementData_OutData, class UObject* CallFunc_GetSnapActorFromTargetData_OutActor, const struct FGridPoint& CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlacerObject_StructureSnappable_C", "GetObjectsToIgnoreInGeometryTrace");

	Params::UBP_PlacerObject_StructureSnappable_C_GetObjectsToIgnoreInGeometryTrace_Params Parms{};

	Parms.ThisStructure = ThisStructure;
	Parms.TargetData = TargetData;
	Parms.LSnapTarget = LSnapTarget;
	Parms.LIgnoredObjects = LIgnoredObjects;
	Parms.CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore = CallFunc_GetObjectsToIgnoreInGeometryTrace_OutObjectsToIgnore;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Snappable_Interface = K2Node_DynamicCast_AsStructure_Snappable_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSnapComponent_SnapObject = CallFunc_GetSnapComponent_SnapObject;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllConnectedStructures_ConnectedStructures = CallFunc_GetAllConnectedStructures_ConnectedStructures;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_GetSnapPlacementData_OutData = CallFunc_GetSnapPlacementData_OutData;
	Parms.CallFunc_GetSnapActorFromTargetData_OutActor = CallFunc_GetSnapActorFromTargetData_OutActor;
	Parms.CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint = CallFunc_GetSnapActorFromTargetData_OutSelectedSnapPoint;

	UObject::ProcessEvent(Func, &Parms);

	if (OutObjectsToIgnore != nullptr)
		*OutObjectsToIgnore = std::move(Parms.OutObjectsToIgnore);

}

}


